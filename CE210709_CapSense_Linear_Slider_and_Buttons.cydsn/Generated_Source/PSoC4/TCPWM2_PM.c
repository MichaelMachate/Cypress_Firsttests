/*******************************************************************************
* File Name: TCPWM2_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "TCPWM2.h"

static TCPWM2_BACKUP_STRUCT TCPWM2_backup;


/*******************************************************************************
* Function Name: TCPWM2_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TCPWM2_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: TCPWM2_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TCPWM2_Sleep(void)
{
    if(0u != (TCPWM2_BLOCK_CONTROL_REG & TCPWM2_MASK))
    {
        TCPWM2_backup.enableState = 1u;
    }
    else
    {
        TCPWM2_backup.enableState = 0u;
    }

    TCPWM2_Stop();
    TCPWM2_SaveConfig();
}


/*******************************************************************************
* Function Name: TCPWM2_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TCPWM2_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: TCPWM2_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void TCPWM2_Wakeup(void)
{
    TCPWM2_RestoreConfig();

    if(0u != TCPWM2_backup.enableState)
    {
        TCPWM2_Enable();
    }
}


/* [] END OF FILE */
