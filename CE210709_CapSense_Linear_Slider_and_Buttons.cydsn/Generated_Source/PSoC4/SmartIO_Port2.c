/*******************************************************************************
* \file SmartIO_Port2.c
* \version 1.10
*
* \brief
*  This file provides the  API for the SmartIO Component.
*
*******************************************************************************
* Copyright 2016, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "SmartIO_Port2.h"

/* Initialization global variable */
uint8 SmartIO_Port2_initVar = 0u;

/* Clock configuration */
static uint32 SmartIO_Port2_clkConfig = 0u;

/**
* \addtogroup group_functions
* \{
*/

/*******************************************************************************
* Function Name: SmartIO_Port2_Init
****************************************************************************//**
*
* \brief Initializes the component as specified in the Configuration dialog.
*
* This function can also be used to reinitialize the component to the settings 
* as specified in the Configuration dialog.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_Init
*******************************************************************************/
void SmartIO_Port2_Init(void)
{
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Save the clock configuration */
    SmartIO_Port2_clkConfig = SmartIO_Port2_INIT_CLOCK_SRC;
    /* General control */
    SmartIO_Port2_CTL = SmartIO_Port2_INIT_CTL_CONFIG;
    /* Synchronization control */
    SmartIO_Port2_SYNC_CTL = SmartIO_Port2_INIT_SYNC_CONFIG;
    /* LUT input selection */
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT0] = SmartIO_Port2_INIT_LUT0_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT1] = SmartIO_Port2_INIT_LUT1_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT2] = SmartIO_Port2_INIT_LUT2_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT3] = SmartIO_Port2_INIT_LUT3_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT4] = SmartIO_Port2_INIT_LUT4_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT5] = SmartIO_Port2_INIT_LUT5_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT6] = SmartIO_Port2_INIT_LUT6_SEL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutSel[SmartIO_Port2_LUT7] = SmartIO_Port2_INIT_LUT7_SEL_CONFIG;
    /* LUT control */
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT0] = SmartIO_Port2_INIT_LUT0_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT1] = SmartIO_Port2_INIT_LUT1_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT2] = SmartIO_Port2_INIT_LUT2_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT3] = SmartIO_Port2_INIT_LUT3_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT4] = SmartIO_Port2_INIT_LUT4_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT5] = SmartIO_Port2_INIT_LUT5_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT6] = SmartIO_Port2_INIT_LUT6_CTL_CONFIG;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[SmartIO_Port2_LUT7] = SmartIO_Port2_INIT_LUT7_CTL_CONFIG;
    /* Turn off the DU */
    SmartIO_Port2_DU_SEL = SmartIO_Port2_INIT_DU_SEL;
    SmartIO_Port2_DU_CTL = SmartIO_Port2_INIT_DU_CTL;
    SmartIO_Port2_DATA = SmartIO_Port2_INIT_DU_DATA_REG;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_Start
****************************************************************************//**
*
* \brief Invokes SmartIO_Port2_Init() and SmartIO_Port2_Enable().
*  
* After this function call, the component is initialized to specified values
* in the Configuration dialog and is then enabled.
*
* If calling this function after calling SmartIO_Port2_Stop(), the fabric
* will set the clock configuration as specified before calling Stop().
*
* \globalvars
*  SmartIO_Port2_initVar - used to check initial configuration, modified
*  on first function call.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_Start
*******************************************************************************/
void SmartIO_Port2_Start(void)
{
    uint32 regVal;
    
    if (0u == SmartIO_Port2_initVar)
    {
        SmartIO_Port2_Init();
        SmartIO_Port2_initVar = 1u; /* Component was initialized */
    }
    else
    {
        /* Restore the component settings if Stop() was called */
        if ((SmartIO_Port2_CTL & SmartIO_Port2_FABRIC_MASK) == 0u)
        {
            /* Clear the pipeline bit and clear the clock field */            
            regVal = SmartIO_Port2_CTL & SmartIO_Port2_PIPELINE_DISABLE & SmartIO_Port2_CLOCK_CLEAR;
            /* Restore the clock settings */
            SmartIO_Port2_CTL = regVal | SmartIO_Port2_clkConfig;
        }
    }
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_Stop
****************************************************************************//**
*
* \brief The routing fabric is bypassed and the block is powered down.
*
* This function saves the clock configuration before powering down. Calling
* Start() will enable the block and restore the clock setting.
* 
* \globalvars
*  SmartIO_Port2_clkConfig - used to save the clock configuration.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_Stop
*******************************************************************************/
void SmartIO_Port2_Stop(void)
{
    uint32 regVal;
    
    /* Disable the block */
    SmartIO_Port2_Disable();
    /* Save the clock setting */
    SmartIO_Port2_clkConfig = SmartIO_Port2_CTL & SmartIO_Port2_CLOCK_MASK;
    /* Clear the clock source */
    regVal = SmartIO_Port2_CTL & SmartIO_Port2_CLOCK_CLEAR;
    /* Enable the pipeline and set the clock source to const zero */
    SmartIO_Port2_CTL = regVal | SmartIO_Port2_PIPELINE_ENABLE | SmartIO_Port2_CLOCK_CONST_ZERO;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_SetBypass
****************************************************************************//**
*
* \brief Bypasses channels on a bit by bit basis. 
*
* Bypassed channels behave as if the SmartIO component was not present for 
* those particular channels. 
*  
* <b>Note</b> This function impacts all channels on the port. It will write
* over the bypass configuration of all the channels. 
*
* \param portChannel
*  The channel location to be bypassed on the port. If the bit value is 0, 
*  the channel is not bypassed; if the bit value is 1, the channel is bypassed.
*  Valid options are documented in \ref channelConst. These should be ORed
*  to configure multiple bypass channels.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_SetBypass
*******************************************************************************/
void SmartIO_Port2_SetBypass(uint32 portChannel)
{   
    uint32 regVal;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Configure the bypass settings of the SmartIO pins */
    regVal = SmartIO_Port2_CTL & SmartIO_Port2_BYPASS_CLEAR;
    SmartIO_Port2_CTL = regVal | (((uint32)(portChannel << CYFLD_PRGIO_PRT_BYPASS__OFFSET))
                                    & SmartIO_Port2_BYPASS_MASK);
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_ClockSelect
****************************************************************************//**
*
* \brief Selects the component clock source.
*
* The clock selection impacts the reset behavior of the component and low power
* operation. Refer to the Functional Description section of the component
* datasheet for more information.
*
* \param clockSrc
*  The component clock source. Valid options are documented in \ref clockConst.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_ClockSelect
*******************************************************************************/
void SmartIO_Port2_ClockSelect(uint32 clockSrc)
{
    uint32 regVal;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Configure the clock source */
    regVal = SmartIO_Port2_CTL & SmartIO_Port2_CLOCK_CLEAR;
    SmartIO_Port2_CTL = regVal | (((uint32)(clockSrc << CYFLD_PRGIO_PRT_CLOCK_SRC__OFFSET) 
                                    & SmartIO_Port2_CLOCK_MASK));
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_HoldOverride
****************************************************************************//**
*
* \brief Controls the port's chip hibernate mode override. 
*
* This function should be used when the block is desired to be operational
* during chip deep-sleep or hibernate mode. The override functionality allows 
* the port with SmartIO component to be operational during these modes. When
* in chip active/sleep modes, the hold override functionality should be disabled.
*
* \param ovCtrl
*  Hold override control. Valid options are documented in \ref hldOvrConst.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_HoldOverride
*******************************************************************************/
void SmartIO_Port2_HoldOverride(uint32 ovCtrl)
{
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Set hold override mode */
    if (ovCtrl == SmartIO_Port2_OVCTRL_ENABLE)
    {
        SmartIO_Port2_CTL |= SmartIO_Port2_HLD_OVR_SMARTIO;
    }    
    else
    {
        SmartIO_Port2_CTL &= SmartIO_Port2_HLD_OVR_HSIOM;
    }
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_IoSyncMode
****************************************************************************//**
*
* \brief Controls synchronization of signals coming from I/O Pin. 
*
* The synchronization is performed using the component clock. Synchronization 
* should not be used if the component is configured to operate in asynchronous
* mode.
*
* <b>Note</b> This function impacts all gpio terminals on the port. It will 
* write over the synchronization configuration of all the gpio terminals. 
*
* \param portTerm
*  The terminal location on the port. If the bit value is 0, the terminal is
*  not synchronized; if the bit value is 1, the terminal is synchronized.
*  Valid options are documented in \ref termConst. These should be ORed to 
*  configure multiple terminals.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_IoSyncMode
*******************************************************************************/
void SmartIO_Port2_IoSyncMode(uint32 portTerm)
{
    uint32 regVal;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Configure the IO synchronization */
    regVal = SmartIO_Port2_SYNC_CTL & SmartIO_Port2_IO_SYNC_CLEAR;
    SmartIO_Port2_SYNC_CTL = regVal | (((uint32)(portTerm << CYFLD_PRGIO_PRT_IO_SYNC_EN__OFFSET))
                                         & SmartIO_Port2_IO_SYNC_MASK);
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_ChipSyncMode
****************************************************************************//**
*
* \brief Controls synchronization of signals coming from chip to the component. 
*
* The synchronization is performed using the component clock. Synchronization 
* should not be used if the component is configured to operate in asynchronous
* mode.
*
* <b>Note</b> This function impacts all data terminals on the port. It will 
* write over the synchronization configuration of all the data terminals. 
*
* \param portTerm
*  The terminal location on the port. If the bit value is 0, the terminal is
*  not synchronized; if the bit value is 1, the terminal is synchronized.
*  Valid options are documented in \ref termConst. These should be ORed to 
*  configure multiple terminals.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_ChipSyncMode
*******************************************************************************/
void SmartIO_Port2_ChipSyncMode(uint32 portTerm)
{
    uint32 regVal;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    /* Configure the Chip data synchronization */
    regVal = SmartIO_Port2_SYNC_CTL & SmartIO_Port2_DATA_SYNC_CLEAR;
    SmartIO_Port2_SYNC_CTL = regVal | (((uint32)(portTerm << CYFLD_PRGIO_PRT_CHIP_SYNC_EN__OFFSET))
                                        & SmartIO_Port2_DATA_SYNC_MASK);
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}


/*******************************************************************************
* Function Name: SmartIO_Port2_LUT_SelectInputs
****************************************************************************//**
*
* \brief This function is used to select individual inputs to the specified LUT. 
*
* This function can be used to configure multiple LUTs with the same input
* configuration.
* 
* <b>Note</b> The selections are different for the upper and lower nibbles.
* See the LUT input parameters and Functional Description section in the
* component datasheet for more information.
*
* \param lutNum
*  LUT number. Valid options are documented in \ref lutNumConst.
*
* \param inputNum
*  The input number (input0, input1, input2). Valid options are documented 
*  in \ref inputNumConst. Note that LUT input0 does not accept LUT0 output as
*  an input.
*
* \param inputSrc
*  The source of the LUT input. Valid options are documented in
*  \ref inputSrcConst.
*
* \return 
*  Status of the LUT input selection.
*   Status          | Description
*   ----------------|--------------------
*   CYRET_SUCCESS   | Write successful
*   CYRET_BAD_PARAM | Invalid parameter
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_LUT_SelectInputs
*******************************************************************************/
cystatus SmartIO_Port2_LUT_SelectInputs(uint32 lutNum, uint32 inputNum, uint32 inputSrc)
{
    cystatus callStatus = CYRET_SUCCESS;
    uint32 sel;
    
    /* Input validation */
    if((inputSrc == SmartIO_Port2_SRC_LUT0) && ((inputNum & SmartIO_Port2_LUT_INPUT0) == SmartIO_Port2_LUT_INPUT0))
    {
        /* LUT input0 does not support LUT0 as an input */
        callStatus = CYRET_BAD_PARAM;
    }
    if((inputSrc == SmartIO_Port2_SRC_DU) && ((inputNum & (SmartIO_Port2_LUT_INPUT1 | SmartIO_Port2_LUT_INPUT2)) != 0u))
    {
        /* LUT input1 and input2 do not support DU output as an input */
        callStatus = CYRET_BAD_PARAM;
    }
    
    /* Configure LUT selection */
    if (callStatus != CYRET_BAD_PARAM)
    {
        /* Must disable the block before configuring */
        SmartIO_Port2_Disable();
        
        sel = SmartIO_Port2_LUT_CONGIG_BASE.lutSel[lutNum];
        switch(inputNum)
        {
            case SmartIO_Port2_LUT_INPUT0:
                sel = (sel & SmartIO_Port2_LUT_TR0_CLEAR) 
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET) & SmartIO_Port2_LUT_TR0_MASK);
                break;
            case SmartIO_Port2_LUT_INPUT1:
                sel = (sel & SmartIO_Port2_LUT_TR1_CLEAR) 
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET) & SmartIO_Port2_LUT_TR1_MASK);
                break;
            case SmartIO_Port2_LUT_INPUT2:
                sel = (sel & SmartIO_Port2_LUT_TR2_CLEAR)
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET) & SmartIO_Port2_LUT_TR2_MASK);
                break;
            case SmartIO_Port2_LUT_INPUT_ALL:
                sel = (sel & SmartIO_Port2_LUT_TR_CLEAR_ALL) 
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR0_SEL__OFFSET) & SmartIO_Port2_LUT_TR0_MASK)
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR1_SEL__OFFSET) & SmartIO_Port2_LUT_TR1_MASK)
                        | ((uint32)(inputSrc << CYFLD_PRGIO_PRT_LUT_TR2_SEL__OFFSET) & SmartIO_Port2_LUT_TR2_MASK);
                break;
            default: 
                callStatus = CYRET_BAD_PARAM;
                break;
        }
        SmartIO_Port2_LUT_CONGIG_BASE.lutSel[lutNum] = sel;
        
        /* Re-enable the block */
        SmartIO_Port2_Enable();
    }    
    return callStatus;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_LUT_ConfigureMode
****************************************************************************//**
*
* \brief This function sets the logical function of the selected LUT (based on 
*  the 3 inputs) and specifies its operating mode. 
*
*  This function can be used to configure multiple LUTs with the same 
*  configuration. The LUT mapping (truth table) is defined as follows.
*
*   input2 | input1 | input0 | Mapping bit
*   -------| ------ | ------ | -----------
*     0    |   0    |   0    |    bit0
*     0    |   0    |   1    |    bit1
*     0    |   1    |   0    |    bit2
*     0    |   1    |   1    |    bit3
*     1    |   0    |   0    |    bit4
*     1    |   0    |   1    |    bit5
*     1    |   1    |   0    |    bit6
*     1    |   1    |   1    |    bit7
*
* \param lutNum
*  LUT number. Valid options are documented in \ref lutNumConst.
*
* \param mapping
*  This is the LUT truth table. Bit0 corresponds to the LUT output when the 
*  input value is (in2=0, in1=0, in0=0). Bit7 corresponds to the LUT output 
*  when the input value is (in2=1, in1=1, in0=1).
*
* \param mode
*  The LUT mode. Valid options are documented in \ref modeConst.
* 
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_LUT_ConfigureMode
*******************************************************************************/
void SmartIO_Port2_LUT_ConfigureMode(uint32 lutNum, uint32 mapping, uint32 mode)
{
    uint32 ctl;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    
    ctl = SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[lutNum] & SmartIO_Port2_LUT_CTL_CLEAR;
    SmartIO_Port2_LUT_CONGIG_BASE.lutCtl[lutNum] = ctl 
                                            | (((uint32)((mapping << CYFLD_PRGIO_PRT_LUT__OFFSET)
                                            & SmartIO_Port2_LUT_MAP_MASK))
                                            | ((uint32)(((uint32)mode << CYFLD_PRGIO_PRT_LUT_OPC__OFFSET) 
                                            & SmartIO_Port2_LUT_OPC_MASK)));
    /* Re-enable the block */
    SmartIO_Port2_Enable();
}

/*******************************************************************************
* Function Name: SmartIO_Port2_DU_SelectTriggers
****************************************************************************//**
*
* \brief Selects the trigger sources for the data unit.
*
* \param tr0Sel
*  Trigger 0 input selection. Valid options are documented in \ref duTrConst.
*
* \param tr1Sel
*  Trigger 1 input selection. Valid options are documented in \ref duTrConst.
*
* \param tr2Sel
*  Trigger 2 input selection. Valid options are documented in \ref duTrConst.
*
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_DU_SelectTriggers
*******************************************************************************/
cystatus SmartIO_Port2_DU_SelectTriggers(uint32 tr0Sel, uint32 tr1Sel, uint32 tr2Sel)
{
    cystatus callStatus = CYRET_SUCCESS;
    uint32 sel;
    
    if((tr0Sel > SmartIO_Port2_DUTRIG_MAX) || (tr1Sel > SmartIO_Port2_DUTRIG_MAX) || (tr2Sel > SmartIO_Port2_DUTRIG_MAX))
    {
        callStatus = CYRET_BAD_PARAM;
    }
    else
    {
        /* Must disable the block before configuring */
        SmartIO_Port2_Disable();
        
        sel = SmartIO_Port2_DU_SEL & SmartIO_Port2_DU_TR_CLEAR_ALL;
        SmartIO_Port2_DU_SEL = sel 
                                | ((uint32)(tr0Sel << CYFLD_PRGIO_PRT_DU_TR0_SEL__OFFSET))
                                | ((uint32)(tr1Sel << CYFLD_PRGIO_PRT_DU_TR1_SEL__OFFSET))
                                | ((uint32)(tr2Sel << CYFLD_PRGIO_PRT_DU_TR2_SEL__OFFSET));
        
        /* Re-enable the block */
        SmartIO_Port2_Enable();
    }
    
    return callStatus;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_DU_SelectData
****************************************************************************//**
*
* \brief Specifies the values for the Data0 and Data1 registers in the Data Unit.
*
* \param dataNum
*  DU DATA register selection. Valid options are documented in \ref duDataConst.
*
* \param dataSel
*  DU DATA register source selection. Valid options are documented in \ref duDataSrcConst.
*
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_DU_SelectData
*******************************************************************************/
cystatus SmartIO_Port2_DU_SelectData(uint32 dataNum, uint32 dataSel)
{
    cystatus callStatus = CYRET_SUCCESS;
    uint32 sel;
    
    /* Must disable the block before configuring */
    SmartIO_Port2_Disable();
    
    sel = SmartIO_Port2_DU_SEL;
    switch(dataNum)
    {
        case SmartIO_Port2_DATA0:
            sel = (sel & SmartIO_Port2_DU_DATA0_CLEAR)
                  | (uint32)((dataSel << CYFLD_PRGIO_PRT_DU_DATA0_SEL__OFFSET) & SmartIO_Port2_DU_DATA0_MASK);
        break;
        case SmartIO_Port2_DATA1:
            sel = (sel & SmartIO_Port2_DU_DATA1_CLEAR)
                  | (uint32)((dataSel << CYFLD_PRGIO_PRT_DU_DATA1_SEL__OFFSET) & SmartIO_Port2_DU_DATA1_MASK);
        break;
        case SmartIO_Port2_DATA_BOTH:
            sel = (sel & SmartIO_Port2_DU_DATA01_CLEAR_BOTH)
                   |(uint32)((dataSel << CYFLD_PRGIO_PRT_DU_DATA0_SEL__OFFSET) & SmartIO_Port2_DU_DATA0_MASK)
                   |(uint32)((dataSel << CYFLD_PRGIO_PRT_DU_DATA1_SEL__OFFSET) & SmartIO_Port2_DU_DATA1_MASK);
        break;
        default:
            callStatus = CYRET_BAD_PARAM;
        break;
    }
    SmartIO_Port2_DU_SEL = sel;
    
    /* Re-enable the block */
    SmartIO_Port2_Enable();
    
    return callStatus;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_DU_RegValue
****************************************************************************//**
*
* \brief Specifies the 8-bit value in the internal DU register that may be a
* source for Data0 and/or Data1.
*
* \param dataValue
*  8-bit value to be stored in the register.
*
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_DU_RegValue
*******************************************************************************/
cystatus SmartIO_Port2_DU_RegValue(uint32 dataValue)
{
    cystatus callStatus = CYRET_SUCCESS;
    
    if(dataValue > SmartIO_Port2_REGVAL_MAX)
    {
        callStatus = CYRET_BAD_PARAM;
    }
    else
    {
        /* Must disable the block before configuring */
        SmartIO_Port2_Disable();
        SmartIO_Port2_DATA = dataValue;
        /* Re-enable the block */
        SmartIO_Port2_Enable();
    }
    
    return callStatus;
}


/*******************************************************************************
* Function Name: SmartIO_Port2_DU_OpCode
****************************************************************************//**
*
* \brief Selects the data unit operation and the size of the data to be 
* operated on (1 to 8 bits).
*
* \param opCode
*  Op-code for the Data Unit. Valid options are documented in \ref duOpcConst.
*
* \param dataSize
*  Size/width of the data unit operands. Range: 1 to 8 bits.
*
* \sideeffect
*  This function disables the block for reconfiguration. During this time,
*  all signals on the port will be bypassed. All peripheral and gpio signals
*  must be stopped or properly handled to account for the bypass state.
*
* \funcusage
*  \snippet SmartIO_Port2_SUT.c usage_SmartIO_Port2_DU_OpCode
*******************************************************************************/
cystatus SmartIO_Port2_DU_OpCode(uint32 opCode, uint32 dataSize)
{
    cystatus callStatus = CYRET_SUCCESS;
    
    if((opCode == 0u) || (opCode > SmartIO_Port2_OPC_MAX) || (dataSize > SmartIO_Port2_DUSIZE_MAX))
    {
        callStatus = CYRET_BAD_PARAM;
    }
    else
    {
         /* Must disable the block before configuring */
        SmartIO_Port2_Disable();
        SmartIO_Port2_DU_CTL = (uint32)(((dataSize - 1u) << CYFLD_PRGIO_PRT_DU_SIZE__OFFSET))
                         | (uint32)((opCode << CYFLD_PRGIO_PRT_DU_OPC__OFFSET));       
        /* Re-enable the block */
        SmartIO_Port2_Enable();
    }
    
    return callStatus;
}

/** \} functions */

/* [] END OF FILE */
