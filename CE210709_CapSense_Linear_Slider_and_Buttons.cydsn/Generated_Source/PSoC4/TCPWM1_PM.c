/*******************************************************************************
* File Name: TCPWM1_PM.c
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

#include "TCPWM1.h"

static TCPWM1_BACKUP_STRUCT TCPWM1_backup;


/*******************************************************************************
* Function Name: TCPWM1_SaveConfig
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
void TCPWM1_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: TCPWM1_Sleep
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
void TCPWM1_Sleep(void)
{
    if(0u != (TCPWM1_BLOCK_CONTROL_REG & TCPWM1_MASK))
    {
        TCPWM1_backup.enableState = 1u;
    }
    else
    {
        TCPWM1_backup.enableState = 0u;
    }

    TCPWM1_Stop();
    TCPWM1_SaveConfig();
}


/*******************************************************************************
* Function Name: TCPWM1_RestoreConfig
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
void TCPWM1_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: TCPWM1_Wakeup
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
void TCPWM1_Wakeup(void)
{
    TCPWM1_RestoreConfig();

    if(0u != TCPWM1_backup.enableState)
    {
        TCPWM1_Enable();
    }
}


/* [] END OF FILE */
