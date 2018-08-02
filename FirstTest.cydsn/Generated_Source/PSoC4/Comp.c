/*******************************************************************************
* File Name: Comp.c
* Version 2.20
*
* Description:
*  This file provides the source code to the API for the Low Power Comparator
*  component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2016, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Comp.h"
#include "CyLib.h"
#include "cyPm.h"

uint8 Comp_initVar = 0u;
static uint32 Comp_internalIntr = 0u;
#if(Comp_CY_LPCOMP_V2)
    #if(CY_IP_SRSSV2)
        /* This variable saves INTR_MASK register since it get reset after wakeup 
        * from Hibernate. Attribute CY_NOINIT puts SRAM variable in memory section 
        * which is retained in low power modes 
        */
        CY_NOINIT static uint32 Comp_intrMaskRegState;
    #endif /* (CY_IP_SRSSV2) */
#endif /* (Comp_CY_LPCOMP_V2) */


/*******************************************************************************
* Function Name: Comp_Start
********************************************************************************
*
* Summary:
*  Performs all of the required initialization for the component and enables
*  power to the block. The first time the routine is executed, the component is
*  initialized to the configuration from the customizer. When called to restart
*  the comparator following a Comp_Stop() call, the current
*  component parameter settings are retained.
*
* Parameters:
*   None
*
* Return:
*  None
*
* Global variables:
*  Comp_initVar: Is modified when this function is called for the
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void Comp_Start(void)
{
    if(0u == Comp_initVar)
    {
        Comp_Init();
        Comp_initVar = 1u;
    }
    Comp_Enable();
}


/*******************************************************************************
* Function Name: Comp_Init
********************************************************************************
*
* Summary:
*  Initializes or restores the component according to the customizer settings.
*  It is not necessary to call Comp_Init() because the
*  Comp_Start() API calls this function and is the preferred method
*  to begin component operation.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_Init(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    Comp_CONFIG_REG |= Comp_CONFIG_REG_DEFAULT;
    Comp_internalIntr = Comp_GET_CONFIG_INTR(Comp_INTERRUPT);
    
    #if (Comp_CY_LPCOMP_V2)
        #if(CY_IP_SRSSV2)
            if (CySysPmGetResetReason() == CY_PM_RESET_REASON_WAKEUP_HIB)
            {
                /* Restore the INTR_MASK register state since it get reset after 
                * wakeup from Hibernate.  
                */
                Comp_INTR_MASK_REG |= Comp_intrMaskRegState;  
            }
            else
            {
                Comp_INTR_MASK_REG |= Comp_INTR_MASK_REG_DEFAULT;    
                Comp_intrMaskRegState = Comp_INTR_MASK_REG;
            }
        #else
            Comp_INTR_MASK_REG |= Comp_INTR_MASK_REG_DEFAULT;
        #endif /* (Comp_CY_LPCOMP_V2) */
    #endif /* (Comp_CY_LPCOMP_V2) */
    
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_Enable
********************************************************************************
*
* Summary:
*  Activates the hardware and begins component operation. It is not necessary
*  to call Comp_Enable() because the Comp_Start() API
*  calls this function, which is the preferred method to begin component
*  operation.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_Enable(void)
{
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    Comp_CONFIG_REG |= Comp_CONFIG_EN;
    
    /*******************************************************
    * When the Enable() API is called the CONFIG_EN bit is set. 
    * This can cause fake interrupt because of the output delay 
    * of the analog. This requires setting the CONFIG_INTR bits 
    * after the CONFIG_EN bit is set.
    *******************************************************/
    Comp_CONFIG_REG |= Comp_internalIntr;
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_Stop
********************************************************************************
*
* Summary:
*  Turns off the LP Comparator.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Side Effects:
*  The function doesn't change component Speed settings.
*
*******************************************************************************/
void Comp_Stop(void)
{
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    #if (Comp_CY_LPCOMP_V0)
        /*******************************************************
        * When the Stop() API is called the CONFIG_EN bit is 
        * cleared. This causes the output of the comparator to go 
        * low. If the comparator output was high and the Interrupt 
        * Configuration is set for Falling edge disabling the 
        * comparator will cause an fake interrupt. This requires 
        * to clear the CONFIG_INTR bits before the CONFIG_EN bit 
        * is cleared.
        *******************************************************/
        Comp_CONFIG_REG &= (uint32)~Comp_CONFIG_INTR_MASK;
    #endif /* (Comp_CY_LPCOMP_V0) */

    Comp_CONFIG_REG &= (uint32)~Comp_CONFIG_EN;
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_SetSpeed
*
* Summary:
*  Sets the drive power and speed to one of three settings.
*
* Parameters:
*  uint32 speed: Sets operation mode of the component:
*   Comp_LOW_SPEED  - Slow/ultra low 
*   Comp_MED_SPEED  - Medium/low 
*   Comp_HIGH_SPEED - Fast/normal 
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetSpeed(uint32 speed)
{
    uint32 config;
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    config = Comp_CONFIG_REG & (uint32)~Comp_CONFIG_SPEED_MODE_MASK;
    Comp_CONFIG_REG = config | Comp_GET_CONFIG_SPEED_MODE(speed);
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_SetInterruptMode
********************************************************************************
*
* Summary:
*  Sets the interrupt edge detect mode. This also controls the value provided
*  on the output.
*
* Parameters:
*  uint32 mode: Enumerated edge detect mode value:
*  Comp_INTR_DISABLE - Disable
*  Comp_INTR_RISING  - Rising edge detect
*  Comp_INTR_FALLING - Falling edge detect
*  Comp_INTR_BOTH    - Detect both edges
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetInterruptMode(uint32 mode)
{
    uint32 config;
    uint8 enableInterrupts;
    
    Comp_internalIntr = Comp_GET_CONFIG_INTR(mode);

    enableInterrupts = CyEnterCriticalSection();
    config = Comp_CONFIG_REG & (uint32)~Comp_CONFIG_INTR_MASK;
    Comp_CONFIG_REG = config | Comp_internalIntr;
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_GetInterruptSource
********************************************************************************
*
* Summary:
*  Gets the interrupt requests. This function is for use when using the combined
*  interrupt signal from the global signal reference. This function from either
*  component instance can be used to determine the interrupt source for both the
*  interrupts combined.
*
* Parameters:
*  None
*
* Return:
*  uint32: Interrupt source. Each component instance has a mask value:
*  Comp_INTR.
*
*******************************************************************************/
uint32 Comp_GetInterruptSource(void)
{
    return (Comp_INTR_REG); 
}


/*******************************************************************************
* Function Name: Comp_ClearInterrupt
********************************************************************************
*
* Summary:
*  Clears the interrupt request. This function is for use when using the
*  combined interrupt signal from the global signal reference. This function
*  from either component instance can be used to clear either or both
*  interrupts.
*
* Parameters:
*  uint32 interruptMask: Mask of interrupts to clear. Each component instance
*  has a mask value: Comp_INTR.
*
* Return:
*  None
*
*******************************************************************************/
void Comp_ClearInterrupt(uint32 interruptMask)
{   
    Comp_INTR_REG = interruptMask;
}


/*******************************************************************************
* Function Name: Comp_SetInterrupt
********************************************************************************
*
* Summary:
*  Sets a software interrupt request. This function is for use when using the
*  combined interrupt signal from the global signal reference. This function
*  from either component instance can be used to trigger either or both software
*  interrupts.
*
* Parameters:
*  uint32 interruptMask: Mask of interrupts to set. Each component instance has
*  a mask value: Comp_INTR_SET.
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetInterrupt(uint32 interruptMask)
{
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    Comp_INTR_SET_REG |= interruptMask;
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_SetHysteresis
********************************************************************************
*
* Summary:
*  Enables or disables the hysteresis.
*
* Parameters:
*  hysteresis: (uint32) Enables or disables the hysteresis setting.
*  Comp_HYST_ENABLE     - Enable hysteresis
*  Comp_HYST_DISABLE    - Disable hysteresis
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetHysteresis(uint32 hysteresis)
{
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    if(0u != hysteresis)
    {
        Comp_CONFIG_REG |= Comp_CONFIG_HYST;
    }
    else
    {
        Comp_CONFIG_REG &= (uint32)~Comp_CONFIG_HYST;
    }
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_SetFilter
********************************************************************************
*
* Summary:
*  Enables or disables the digital filter. This still exists for saving backward 
*  compatibility, but not recommended for using.
*  This API is DEPRECATED and should not be used in new projects.
*
* Parameters:
*  uint32 filter: filter enable.
*  Comp_FILT_ENABLE  - Enable filter
*  Comp_FILT_DISABLE - Disable filter
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetFilter(uint32 filter)
{
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    if( 0u != filter)
    {
        Comp_CONFIG_REG |= Comp_CONFIG_FILT;
    }
    else
    {
        Comp_CONFIG_REG &= (uint32)~Comp_CONFIG_FILT;
    }
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_GetCompare
********************************************************************************
*
* Summary:
*  This function returns a nonzero value when the voltage connected to the
*  positive input is greater than the negative input voltage.
*  This function reads the direct (unflopped) comparator output which can also be 
*  metastable (since it may result in incorrect data).
*
* Parameters:
*  None
*
* Return:
*  (uint32) Comparator output state. This value is not impacted by the interrupt
*  edge detect setting:
*   0 - if positive input is less than negative one.
*   1 - if positive input greater than negative one.
*
*******************************************************************************/
uint32 Comp_GetCompare(void)
{
    return((uint32)((0u == (Comp_CONFIG_REG & Comp_CONFIG_OUT)) ? 0u : 1u));
}


/*******************************************************************************
* Function Name: Comp_ZeroCal
********************************************************************************
*
* Summary:
*  Performs custom calibration of the input offset to minimize error for a
*  specific set of conditions: comparator reference voltage, supply voltage,
*  and operating temperature. A reference voltage in the range at which the
*  comparator will be used must be applied to one of the inputs. The two inputs
*  will be shorted internally to perform the offset calibration.
*
* Parameters:
*  None
*
* Return:
*  The value from the comparator trim register after the offset calibration is
*  complete. This value has the same format as the input parameter for the
*  Comp_LoadTrim() API routine.
*
*******************************************************************************/
uint32 Comp_ZeroCal(void)
{
    uint32 cmpOut;
    uint32 i;

    Comp_DFT_REG |= Comp_DFT_CAL_EN;
    Comp_TRIMA_REG = 0u;
    Comp_TRIMB_REG = 0u;

    CyDelayUs(1u);

    cmpOut = Comp_GetCompare();

    if(0u != cmpOut)
    {
        Comp_TRIMA_REG = ((uint32) 0x01u << Comp_TRIMA_SIGNBIT);
    }

    for(i = (Comp_TRIMA_MAX_VALUE +1u ); i != 0u; i--)
    {
        Comp_TRIMA_REG++;
        CyDelayUs(1u);
        if(cmpOut != Comp_GetCompare())
        {
            break;
        }
    }

    if(((uint32)(Comp_CONFIG_REG >> Comp_CONFIG_REG_SHIFT) &
        Comp_SPEED_PARAM_MASK) == Comp_MED_SPEED)
    {
        cmpOut = Comp_GetCompare();

        if(0u == cmpOut)
        {
            Comp_TRIMB_REG = ((uint32)1u << Comp_TRIMB_SIGNBIT);
        }

        for(i = (Comp_TRIMB_MAX_VALUE +1u ); i != 0u; i--)
        {
            Comp_TRIMB_REG++;
            CyDelayUs(1u);
            if(cmpOut != Comp_GetCompare())
            {
                break;
            }
        }
    }

    Comp_DFT_REG &= ((uint32)~Comp_DFT_CAL_EN);

    return (Comp_TRIMA_REG | ((uint32)Comp_TRIMB_REG << Comp_TRIMB_SHIFT));
}


/*******************************************************************************
* Function Name: Comp_LoadTrim
********************************************************************************
*
* Summary:
*  This function writes a value into the comparator offset trim register.
*
* Parameters:
*  trimVal: Value to be stored in the comparator offset trim register. This
*  value has the same format as the parameter returned by the
*  Comp_ZeroCal() API routine.
*
* Return:
*  None
*
*******************************************************************************/
void Comp_LoadTrim(uint32 trimVal)
{
    Comp_TRIMA_REG = (trimVal & Comp_TRIMA_MASK);
    Comp_TRIMB_REG = ((trimVal >> Comp_TRIMB_SHIFT) & Comp_TRIMB_MASK);
}


#if (Comp_CY_LPCOMP_V2)
    
/*******************************************************************************
* Function Name: Comp_SetOutputMode
********************************************************************************
*
* Summary:
*  Set comparator output mode. 
*
* Parameters:
*  uint32 mode: Comparator output mode value
*  Comp_OUT_DIRECT - Direct output
*  Comp_OUT_SYNC   - Synchronized output
*  Comp_OUT_PULSE  - Pulse output
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetOutputMode(uint32 mode)
{
    uint32 config;
    uint8 enableInterrupts;
    
    enableInterrupts = CyEnterCriticalSection();
    config = Comp_CONFIG_REG & ((uint32)~(Comp_CONFIG_DSI_BYPASS | \
                                                     Comp_CONFIG_DSI_LEVEL));
    Comp_CONFIG_REG = config | Comp_GET_CONFIG_DSI_BYPASS(mode) | \
                                           Comp_GET_CONFIG_DSI_LEVEL(mode);
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: Comp_SetInterruptMask
********************************************************************************
*
* Summary:
*  Configures which bits of interrupt request register will trigger an interrupt 
*  event.
*
* Parameters:
*  uint32 interruptMask: Mask of interrupts to set. Each component instance has
*  a mask value: Comp_INTR_MASK.
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetInterruptMask(uint32 interruptMask)
{
    #if(CY_IP_SRSSV2)
        Comp_intrMaskRegState = interruptMask;
    #endif /* (CY_IP_SRSSV2) */
    
    Comp_INTR_MASK_REG = interruptMask;
}


/*******************************************************************************
* Function Name: Comp_GetInterruptMask
********************************************************************************
*
* Summary:
*  Returns interrupt mask.
*
* Parameters:
*  None
*
* Return:
*  uint32:  Mask of enabled interrupt source. Each component instance 
*  has a mask value: Comp_INTR_MASK.
*
*******************************************************************************/
uint32 Comp_GetInterruptMask(void)
{
    return (Comp_INTR_MASK_REG);
}


/*******************************************************************************
* Function Name: Comp_GetInterruptSourceMasked
********************************************************************************
*
* Summary:
*  Returns interrupt request register masked by interrupt mask. Returns the result 
*  of bitwise AND operation between corresponding interrupt request and mask bits.
*
* Parameters:
*  None
*
* Return:
*  uint32: Status of enabled interrupt source. Each component instance 
*  has a mask value: Comp_INTR_MASKED.
*
*******************************************************************************/
uint32 Comp_GetInterruptSourceMasked(void)
{
    return (Comp_INTR_MASKED_REG);
}

#endif /* (Comp_CY_LPCOMP_V2) */


/* [] END OF FILE */
