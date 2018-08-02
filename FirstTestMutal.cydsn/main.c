/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
/*******************************************************************************
*   Included Headers
*******************************************************************************/
#include "Capsense_1.h"
#include <project.h>

/*****************************************************************************
* MACRO Definitions
*****************************************************************************/
uint8 header[] = {0x0Du, 0x0Au};
uint8 tail[] = {0x00u, 0xFFu, 0xFFu};
/* Boolean constants */
#define LED_ON						(0u)
#define LED_OFF						(1u)

/*****************************************************************************
* Function Prototypes
*****************************************************************************/ 
void LED_Control(void);


int main (void){
    CyGlobalIntEnable; /* Enable global interrupts. */

    //I2CS_Start();                              /* Start EZI2C Component */
    /* 
    *  Set up communication and initialize data buffer to CapSense data structure
    *  to use Tuner application
    */
    //I2CS_EzI2CSetBuffer1(sizeof(CapSense_1_dsRam), sizeof(CapSense_1_dsRam),(uint8_t*)&(CapSense_1_dsRam));

    UART_Start();                                /* Start UART SCB Component */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    CapSense_1_Start();
    CapSense_1_ScanAllWidgets();                  /* Scan all widgets */ 
    
    for(;;){
         if(!CapSense_1_IsBusy()){
            CapSense_1_ProcessAllWidgets();       /* Process all widgets */
            CapSense_1_RunTuner();                /* To sync with Tuner application */
            LED_Control();
            
            /* Send packet header */
            UART_SpiUartPutArray((uint8*)(&header),sizeof(header));
            /* Send packet with CapSense data */
            UART_SpiUartPutArray((uint8 *)(&CapSense_1_dsRam),sizeof(CapSense_1_dsRam));
            /* Send packet tail */
            UART_SpiUartPutArray((uint8*)(&tail),sizeof(tail));
            
            if (CapSense_1_IsAnyWidgetActive()){
                //Code if any button was pressed
            }                          
            CapSense_1_ScanAllWidgets();          /* Start next scan */ 
        }
        /* CPU Sleep */
        CySysPmSleep();
    }
}


void LED_Control()
{
    LED1_Write(CapSense_1_IsWidgetActive(CapSense_1_BUTTON0_WDGT_ID) ? LED_ON : LED_OFF );
}

/* [] END OF FILE */
