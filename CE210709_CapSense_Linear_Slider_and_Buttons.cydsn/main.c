/******************************************************************************
* File Name: main.c
*
* Version: 1.10
*
* Description:  This code example demonstrates a CapSense linear slider with
* five segments and three CapSense buttons operation. CapSense linear slider and
* buttons data is sent to CapSense Tuner or EZ-BLE PRoC Module using I2C communication.
* The CapSense linear slider touch position and buttons status is used to turn ON/OFF
* corresponding LEDs on the kit. It also demonstrates connectivity between the
* EZ-BLE PRoC Module (acting as a Peripheral and GATT server device) and mobile device
* running the CySmart mobile application (acting as a Central and GATT client device).
* This code example also demonstrates a simple breathing effect of LED with breath-in
* and breath-out rate of 1 Hz using SmartIO and PWM components.
*
* Related Document: CE210709 CapSense Linear Slider and Buttons.pdf
*
* Hardware Dependency: See CE210709 CapSense Linear Slider and Buttons.pdf
*
*******************************************************************************
* Copyright (2018), Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* (“Software”), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries (“Cypress”) and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software (“EULA”).
*
* If no EULA applies, Cypress hereby grants you a personal, nonexclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress’s integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, 
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress 
* reserves the right to make changes to the Software without notice. Cypress 
* does not assume any liability arising out of the application or use of the 
* Software or any product or circuit described in the Software. Cypress does 
* not authorize its products for use in any products where a malfunction or 
* failure of the Cypress product may reasonably be expected to result in 
* significant property damage, injury or death (“High Risk Product”). By 
* including Cypress’s product in a High Risk Product, the manufacturer of such 
* system or application assumes all risk of such use and in doing so agrees to 
* indemnify Cypress against all liability.
*******************************************************************************/
/*******************************************************************************
*   Included Headers
*******************************************************************************/
#include "CapSense.h"
#include <project.h>

/*****************************************************************************
* MACRO Definitions
*****************************************************************************/     

/* Boolean constants */
#define LED_ON						(0u)
#define LED_OFF						(1u)

/*Set the macro value to '1' to use tuner for debugging and tuning CapSense sensors
  Set the macro value to '0' to send the CapSense Linear slider and buttons data to EZ-BLE PRoC module via I2C*/
#define ENABLE_TUNER                (1u)

/*I2C Buffer size = 4 bytes
  BYTE0 = CapSense linear slider touch position
  BYTE1 = No of buttons on CY8CKIT-145-40XX PSoC 4000S Prototyping Kit
  BYTE2 = bit0= BTN1 status, bit1 = BTN2 status, bit2 = BTN3 status
  BYTE3 = dummy for this project, for future expansion */
#define BUFFER_SIZE                 (4u)
#define READ_ONLY_OFFSET            (0u)
#define TOTAL_CAPSENSE_BUTTONS      (3u)

/*I2C buffer index*/
#define SLIDER_CENTROID_INDEX       (0u)
#define BUTTON_COUNT_INDEX          (1u)
#define BUTTON_STATUS_INDEX1        (2u)
#define BUTTON_STATUS_INDEX2        (3u)

#define SET_BIT(data, bitPosition)  ((data) |= (1 << (bitPosition)))
#define CLEAR_BIT(data, bitPosition)  ((data) &= (~(1 << (bitPosition))))

/* Finite state machine states for device operating states 
    SENSOR_SCAN - Sensors are scanned in this state
    WAIT_FOR_SCAN_COMPLETE - CPU is put to sleep in this state
    PROCESS_DATA - Sensor data is processed, LEDs are controlled,
                   and I2C buffer is updated in this state */
typedef enum
{
    SENSOR_SCAN = 0x01u,                
    WAIT_FOR_SCAN_COMPLETE = 0x02u,     
    PROCESS_DATA = 0x03u,               
} DEVICE_STATE;

/*Defining step size for LED control based on centroid position of slider*/
#define STEP_SIZE (CapSense_SLD_X_RESOLUTION/CapSense_SLD_NUM_SENSORS) 

/*****************************************************************************
* Function Prototypes
*****************************************************************************/ 
void LED_Control(void);

#if !ENABLE_TUNER 
    /*In this project CapSense linear slider touch position and buttons status 
        is sent to EZ-BLE PRoC Module via I2C interface. EZ-BLE PRoC Module transmits 
        the CapSense linear slider touch position and button ON/OFF status data via BLE and 
        the CapSense linear slider touch position can be viewed on mobile phones using CySmart app.
        I2C buffer data format is decided based on the Cypress CapSense custom service
        See this link for more details: http://www.cypress.com/file/175556/download*/
    
    
    /*I2C Buffer used to send CapSense linear touch position and buttons status detected 
        by PSoC 4000S device to EZ-BLE PRoC Module
      BYTE0 = slider centroid position
      BYTE1 = No of buttons on CY8CKIT-145-40XX PSoC 4000S Prototyping Kit
      BYTE2 = bit0= BTN1 status, bit1 = BTN2 status, bit2 = BTN3 status
      BYTE3 = dummy for this project, for future expansion */
    uint8 i2cBuffer[] = {0,TOTAL_CAPSENSE_BUTTONS,0,0};
#endif

int main()
{	
    #if !ENABLE_TUNER
        /*Used as loop counter and widget ID*/
        uint8 widgetID = 0;
        
        /*Contains the buttons status, one bit per button
          bit0= BTN1 status, bit1 = BTN2 status, bit2 = BTN3 status*/
        uint8 buttonStatus = 0;    
    #endif
        
    /* Variable to hold the current device state 
    *  State machine starts with sensor scan state after power-up
    */
    DEVICE_STATE currentState = SENSOR_SCAN;  
    
    /* Enable global interrupts. */
    CyGlobalIntEnable; 
    
    /* Start EZI2C block */
    EZI2C_Start();
        
    #if ENABLE_TUNER
        /* Set up I2C communication data buffer with CapSense data structure 
        to be exposed to I2C master on a primary slave address request
        */
        EZI2C_EzI2CSetBuffer1(sizeof(CapSense_dsRam),\
        sizeof(CapSense_dsRam),(uint8 *)&CapSense_dsRam);
    #else
        /*Set up communication data buffer to send CapSense slider centroid 
            position and button status to EZ-BLE on CY8CKIT-145-40XX PSoC 4000S Prototyping Kit*/
        EZI2C_EzI2CSetBuffer1(sizeof(i2cBuffer), sizeof(i2cBuffer),i2cBuffer);
    #endif
        
    /* Start CapSense block */
    CapSense_Start();
    
	/* Start the TCPWM components, TCPWM1 generates PWM signal of frequency of 100Hz
       TCPWM2 generates PWM signal of frequency of 101Hz*/
    TCPWM1_Start();
    TCPWM2_Start();
    
    /* Start the SmartIO component, the two PWM signals are XORed to get the 
        LED breathing effect of 1Hz*/
    SmartIO_Port2_Start();       
     			
    for(;;)
    {
        /* Switch between SENSOR_SCAN->WAIT_FOR_SCAN_COMPLETE->PROCESS_DATA states */
        switch(currentState)
        {
            case SENSOR_SCAN:
	            /* Initiate new scan only if the CapSense block is idle */
                if(CapSense_NOT_BUSY == CapSense_IsBusy())
                {
                    #if ENABLE_TUNER
                        /* Update CapSense parameters set via CapSense tuner before the 
                           beginning of CapSense scan 
                        */
                        CapSense_RunTuner();
                    #endif
                    
                    /* Scan widget configured by CSDSetupWidget API */
                    CapSense_ScanAllWidgets();
                                        
                    /* Set next state to WAIT_FOR_SCAN_COMPLETE  */
                    currentState = WAIT_FOR_SCAN_COMPLETE;
                }
                break;

            case WAIT_FOR_SCAN_COMPLETE:

                /* Put the device to CPU Sleep until CapSense scanning is complete*/
                if(CapSense_NOT_BUSY != CapSense_IsBusy())
                {
                    CySysPmSleep();
                }
                /* If CapSense scanning is complete, process the CapSense data */
                else
                {
                    currentState = PROCESS_DATA;
                }
                break;
        
            case PROCESS_DATA:
                
                /* Process data on all the enabled widgets */
                CapSense_ProcessAllWidgets();
                
                /* Controls LEDs Status based on the result of Widget processing. */
                LED_Control();
                
                #if !ENABLE_TUNER
                    
                    /*If tuner is not enabled send the CapSense slider centroid position and button status to 
                        EZ-BLE PRoC Module on CY8CKIT-145-40XX PSoC 4000S Prototyping Kit  via I2C interface*/
                    
                    /*Update the I2C buffer with slider centroid position*/
                    i2cBuffer[SLIDER_CENTROID_INDEX] = (uint8) CapSense_GetCentroidPos(CapSense_SLD_WDGT_ID);
                    
                    /*Calculate the button staus mask and update the I2C buffer
                        bit0= BTN1 status, bit1 = BTN2 status, bit2 = BTN3 status*/
                    for(widgetID = 0; widgetID < TOTAL_CAPSENSE_BUTTONS ; widgetID++)
                    {
                        if(CapSense_IsWidgetActive(widgetID))
                        {
                            SET_BIT(buttonStatus, widgetID);
                        }
                        else
                        {
                            CLEAR_BIT(buttonStatus, widgetID);
                        }
                    }                     
                    i2cBuffer[BUTTON_STATUS_INDEX1] = buttonStatus;                   
                #endif                
                
                /* Set the device state to SENSOR_SCAN */
                currentState = SENSOR_SCAN;  
                break;  
             
            /*******************************************************************
             * Unknown power mode state. Unexpected situation.
             ******************************************************************/    
            default:
                break;
        } 
    }
}

/*******************************************************************************
* Function Name: LED_Control
********************************************************************************
* Summary:
* In this function LEDs are controlled based on the CapSense buttons status
* and CapSense linear slider touch position. LEDs corresponding to buttons are turned ON when
* the button is touched and turned OFF when the button is released. 
* If a touch is detected on CapSense linear slider, depending on the touch position 
* the corresponding LEDs are turned ON.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/

void LED_Control()
{
    uint32 centroid;
    /*Get the touch position(centroid) of CapSense Linear Slider*/
    centroid = CapSense_GetCentroidPos(CapSense_SLD_WDGT_ID);
   
    /*Turn ON/OFF LEDs based on the status of the corresponding CapSense buttons*/
    LED9_Write(CapSense_IsWidgetActive(CapSense_BTN0_WDGT_ID) ? LED_ON : LED_OFF );
    LED10_Write(CapSense_IsWidgetActive(CapSense_BTN1_WDGT_ID) ? LED_ON : LED_OFF );
    LED11_Write(CapSense_IsWidgetActive(CapSense_BTN2_WDGT_ID) ? LED_ON : LED_OFF );

    /*Turn ON/OFF LEDs based on the finger position (centroid) on the CapSense Linear slider*/
    if(CapSense_IsWidgetActive(CapSense_SLD_WDGT_ID))
    {        
        LED4_Write( ( (centroid > 0) || (centroid == 0)) ? LED_ON : LED_OFF );
        LED5_Write( ( centroid > ( 1 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
        LED6_Write( ( centroid > ( 2 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
        LED7_Write( ( centroid > ( 3 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
        LED8_Write( ( centroid > ( 4 * STEP_SIZE ) ) ? LED_ON : LED_OFF);
    }
    else
    {
        LED4_Write(LED_OFF);
        LED5_Write(LED_OFF);
        LED6_Write(LED_OFF);
        LED7_Write(LED_OFF);
        LED8_Write(LED_OFF);
    }
}

/* [] END OF FILE */
