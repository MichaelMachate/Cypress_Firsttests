/*******************************************************************************
* File Name: TCPWM1.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the TCPWM1
*  component.
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

#if !defined(CY_TCPWM_TCPWM1_H)
#define CY_TCPWM_TCPWM1_H


#include "CyLib.h"
#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} TCPWM1_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  TCPWM1_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define TCPWM1_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define TCPWM1_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define TCPWM1_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define TCPWM1_QUAD_ENCODING_MODES            (0lu)
#define TCPWM1_QUAD_AUTO_START                (1lu)

/* Signal modes */
#define TCPWM1_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define TCPWM1_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define TCPWM1_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define TCPWM1_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define TCPWM1_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define TCPWM1_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define TCPWM1_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define TCPWM1_TC_RUN_MODE                    (0lu)
#define TCPWM1_TC_COUNTER_MODE                (0lu)
#define TCPWM1_TC_COMP_CAP_MODE               (2lu)
#define TCPWM1_TC_PRESCALER                   (0lu)

/* Signal modes */
#define TCPWM1_TC_RELOAD_SIGNAL_MODE          (0lu)
#define TCPWM1_TC_COUNT_SIGNAL_MODE           (3lu)
#define TCPWM1_TC_START_SIGNAL_MODE           (0lu)
#define TCPWM1_TC_STOP_SIGNAL_MODE            (0lu)
#define TCPWM1_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define TCPWM1_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define TCPWM1_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define TCPWM1_TC_START_SIGNAL_PRESENT        (0lu)
#define TCPWM1_TC_STOP_SIGNAL_PRESENT         (0lu)
#define TCPWM1_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TCPWM1_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define TCPWM1_PWM_KILL_EVENT                 (0lu)
#define TCPWM1_PWM_STOP_EVENT                 (0lu)
#define TCPWM1_PWM_MODE                       (4lu)
#define TCPWM1_PWM_OUT_N_INVERT               (1lu)
#define TCPWM1_PWM_OUT_INVERT                 (0lu)
#define TCPWM1_PWM_ALIGN                      (0lu)
#define TCPWM1_PWM_RUN_MODE                   (0lu)
#define TCPWM1_PWM_DEAD_TIME_CYCLE            (0lu)
#define TCPWM1_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define TCPWM1_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define TCPWM1_PWM_COUNT_SIGNAL_MODE          (3lu)
#define TCPWM1_PWM_START_SIGNAL_MODE          (0lu)
#define TCPWM1_PWM_STOP_SIGNAL_MODE           (0lu)
#define TCPWM1_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define TCPWM1_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define TCPWM1_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define TCPWM1_PWM_START_SIGNAL_PRESENT       (0lu)
#define TCPWM1_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define TCPWM1_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define TCPWM1_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define TCPWM1_TC_PERIOD_VALUE                (65535lu)
#define TCPWM1_TC_COMPARE_VALUE               (65535lu)
#define TCPWM1_TC_COMPARE_BUF_VALUE           (65535lu)
#define TCPWM1_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define TCPWM1_PWM_PERIOD_VALUE               (20000lu)
#define TCPWM1_PWM_PERIOD_BUF_VALUE           (65535lu)
#define TCPWM1_PWM_PERIOD_SWAP                (0lu)
#define TCPWM1_PWM_COMPARE_VALUE              (10000lu)
#define TCPWM1_PWM_COMPARE_BUF_VALUE          (65535lu)
#define TCPWM1_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define TCPWM1__LEFT 0
#define TCPWM1__RIGHT 1
#define TCPWM1__CENTER 2
#define TCPWM1__ASYMMETRIC 3

#define TCPWM1__X1 0
#define TCPWM1__X2 1
#define TCPWM1__X4 2

#define TCPWM1__PWM 4
#define TCPWM1__PWM_DT 5
#define TCPWM1__PWM_PR 6

#define TCPWM1__INVERSE 1
#define TCPWM1__DIRECT 0

#define TCPWM1__CAPTURE 2
#define TCPWM1__COMPARE 0

#define TCPWM1__TRIG_LEVEL 3
#define TCPWM1__TRIG_RISING 0
#define TCPWM1__TRIG_FALLING 1
#define TCPWM1__TRIG_BOTH 2

#define TCPWM1__INTR_MASK_TC 1
#define TCPWM1__INTR_MASK_CC_MATCH 2
#define TCPWM1__INTR_MASK_NONE 0
#define TCPWM1__INTR_MASK_TC_CC 3

#define TCPWM1__UNCONFIG 8
#define TCPWM1__TIMER 1
#define TCPWM1__QUAD 3
#define TCPWM1__PWM_SEL 7

#define TCPWM1__COUNT_UP 0
#define TCPWM1__COUNT_DOWN 1
#define TCPWM1__COUNT_UPDOWN0 2
#define TCPWM1__COUNT_UPDOWN1 3


/* Prescaler */
#define TCPWM1_PRESCALE_DIVBY1                ((uint32)(0u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY2                ((uint32)(1u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY4                ((uint32)(2u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY8                ((uint32)(3u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY16               ((uint32)(4u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY32               ((uint32)(5u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY64               ((uint32)(6u << TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_PRESCALE_DIVBY128              ((uint32)(7u << TCPWM1_PRESCALER_SHIFT))

/* TCPWM set modes */
#define TCPWM1_MODE_TIMER_COMPARE             ((uint32)(TCPWM1__COMPARE         <<  \
                                                                  TCPWM1_MODE_SHIFT))
#define TCPWM1_MODE_TIMER_CAPTURE             ((uint32)(TCPWM1__CAPTURE         <<  \
                                                                  TCPWM1_MODE_SHIFT))
#define TCPWM1_MODE_QUAD                      ((uint32)(TCPWM1__QUAD            <<  \
                                                                  TCPWM1_MODE_SHIFT))
#define TCPWM1_MODE_PWM                       ((uint32)(TCPWM1__PWM             <<  \
                                                                  TCPWM1_MODE_SHIFT))
#define TCPWM1_MODE_PWM_DT                    ((uint32)(TCPWM1__PWM_DT          <<  \
                                                                  TCPWM1_MODE_SHIFT))
#define TCPWM1_MODE_PWM_PR                    ((uint32)(TCPWM1__PWM_PR          <<  \
                                                                  TCPWM1_MODE_SHIFT))

/* Quad Modes */
#define TCPWM1_MODE_X1                        ((uint32)(TCPWM1__X1              <<  \
                                                                  TCPWM1_QUAD_MODE_SHIFT))
#define TCPWM1_MODE_X2                        ((uint32)(TCPWM1__X2              <<  \
                                                                  TCPWM1_QUAD_MODE_SHIFT))
#define TCPWM1_MODE_X4                        ((uint32)(TCPWM1__X4              <<  \
                                                                  TCPWM1_QUAD_MODE_SHIFT))

/* Counter modes */
#define TCPWM1_COUNT_UP                       ((uint32)(TCPWM1__COUNT_UP        <<  \
                                                                  TCPWM1_UPDOWN_SHIFT))
#define TCPWM1_COUNT_DOWN                     ((uint32)(TCPWM1__COUNT_DOWN      <<  \
                                                                  TCPWM1_UPDOWN_SHIFT))
#define TCPWM1_COUNT_UPDOWN0                  ((uint32)(TCPWM1__COUNT_UPDOWN0   <<  \
                                                                  TCPWM1_UPDOWN_SHIFT))
#define TCPWM1_COUNT_UPDOWN1                  ((uint32)(TCPWM1__COUNT_UPDOWN1   <<  \
                                                                  TCPWM1_UPDOWN_SHIFT))

/* PWM output invert */
#define TCPWM1_INVERT_LINE                    ((uint32)(TCPWM1__INVERSE         <<  \
                                                                  TCPWM1_INV_OUT_SHIFT))
#define TCPWM1_INVERT_LINE_N                  ((uint32)(TCPWM1__INVERSE         <<  \
                                                                  TCPWM1_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define TCPWM1_TRIG_RISING                    ((uint32)TCPWM1__TRIG_RISING)
#define TCPWM1_TRIG_FALLING                   ((uint32)TCPWM1__TRIG_FALLING)
#define TCPWM1_TRIG_BOTH                      ((uint32)TCPWM1__TRIG_BOTH)
#define TCPWM1_TRIG_LEVEL                     ((uint32)TCPWM1__TRIG_LEVEL)

/* Interrupt mask */
#define TCPWM1_INTR_MASK_TC                   ((uint32)TCPWM1__INTR_MASK_TC)
#define TCPWM1_INTR_MASK_CC_MATCH             ((uint32)TCPWM1__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define TCPWM1_CC_MATCH_SET                   (0x00u)
#define TCPWM1_CC_MATCH_CLEAR                 (0x01u)
#define TCPWM1_CC_MATCH_INVERT                (0x02u)
#define TCPWM1_CC_MATCH_NO_CHANGE             (0x03u)
#define TCPWM1_OVERLOW_SET                    (0x00u)
#define TCPWM1_OVERLOW_CLEAR                  (0x04u)
#define TCPWM1_OVERLOW_INVERT                 (0x08u)
#define TCPWM1_OVERLOW_NO_CHANGE              (0x0Cu)
#define TCPWM1_UNDERFLOW_SET                  (0x00u)
#define TCPWM1_UNDERFLOW_CLEAR                (0x10u)
#define TCPWM1_UNDERFLOW_INVERT               (0x20u)
#define TCPWM1_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define TCPWM1_PWM_MODE_LEFT                  (TCPWM1_CC_MATCH_CLEAR        |   \
                                                         TCPWM1_OVERLOW_SET           |   \
                                                         TCPWM1_UNDERFLOW_NO_CHANGE)
#define TCPWM1_PWM_MODE_RIGHT                 (TCPWM1_CC_MATCH_SET          |   \
                                                         TCPWM1_OVERLOW_NO_CHANGE     |   \
                                                         TCPWM1_UNDERFLOW_CLEAR)
#define TCPWM1_PWM_MODE_ASYM                  (TCPWM1_CC_MATCH_INVERT       |   \
                                                         TCPWM1_OVERLOW_SET           |   \
                                                         TCPWM1_UNDERFLOW_CLEAR)

#if (TCPWM1_CY_TCPWM_V2)
    #if(TCPWM1_CY_TCPWM_4000)
        #define TCPWM1_PWM_MODE_CENTER                (TCPWM1_CC_MATCH_INVERT       |   \
                                                                 TCPWM1_OVERLOW_NO_CHANGE     |   \
                                                                 TCPWM1_UNDERFLOW_CLEAR)
    #else
        #define TCPWM1_PWM_MODE_CENTER                (TCPWM1_CC_MATCH_INVERT       |   \
                                                                 TCPWM1_OVERLOW_SET           |   \
                                                                 TCPWM1_UNDERFLOW_CLEAR)
    #endif /* (TCPWM1_CY_TCPWM_4000) */
#else
    #define TCPWM1_PWM_MODE_CENTER                (TCPWM1_CC_MATCH_INVERT       |   \
                                                             TCPWM1_OVERLOW_NO_CHANGE     |   \
                                                             TCPWM1_UNDERFLOW_CLEAR)
#endif /* (TCPWM1_CY_TCPWM_NEW) */

/* Command operations without condition */
#define TCPWM1_CMD_CAPTURE                    (0u)
#define TCPWM1_CMD_RELOAD                     (8u)
#define TCPWM1_CMD_STOP                       (16u)
#define TCPWM1_CMD_START                      (24u)

/* Status */
#define TCPWM1_STATUS_DOWN                    (1u)
#define TCPWM1_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   TCPWM1_Init(void);
void   TCPWM1_Enable(void);
void   TCPWM1_Start(void);
void   TCPWM1_Stop(void);

void   TCPWM1_SetMode(uint32 mode);
void   TCPWM1_SetCounterMode(uint32 counterMode);
void   TCPWM1_SetPWMMode(uint32 modeMask);
void   TCPWM1_SetQDMode(uint32 qdMode);

void   TCPWM1_SetPrescaler(uint32 prescaler);
void   TCPWM1_TriggerCommand(uint32 mask, uint32 command);
void   TCPWM1_SetOneShot(uint32 oneShotEnable);
uint32 TCPWM1_ReadStatus(void);

void   TCPWM1_SetPWMSyncKill(uint32 syncKillEnable);
void   TCPWM1_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   TCPWM1_SetPWMDeadTime(uint32 deadTime);
void   TCPWM1_SetPWMInvert(uint32 mask);

void   TCPWM1_SetInterruptMode(uint32 interruptMask);
uint32 TCPWM1_GetInterruptSourceMasked(void);
uint32 TCPWM1_GetInterruptSource(void);
void   TCPWM1_ClearInterrupt(uint32 interruptMask);
void   TCPWM1_SetInterrupt(uint32 interruptMask);

void   TCPWM1_WriteCounter(uint32 count);
uint32 TCPWM1_ReadCounter(void);

uint32 TCPWM1_ReadCapture(void);
uint32 TCPWM1_ReadCaptureBuf(void);

void   TCPWM1_WritePeriod(uint32 period);
uint32 TCPWM1_ReadPeriod(void);
void   TCPWM1_WritePeriodBuf(uint32 periodBuf);
uint32 TCPWM1_ReadPeriodBuf(void);

void   TCPWM1_WriteCompare(uint32 compare);
uint32 TCPWM1_ReadCompare(void);
void   TCPWM1_WriteCompareBuf(uint32 compareBuf);
uint32 TCPWM1_ReadCompareBuf(void);

void   TCPWM1_SetPeriodSwap(uint32 swapEnable);
void   TCPWM1_SetCompareSwap(uint32 swapEnable);

void   TCPWM1_SetCaptureMode(uint32 triggerMode);
void   TCPWM1_SetReloadMode(uint32 triggerMode);
void   TCPWM1_SetStartMode(uint32 triggerMode);
void   TCPWM1_SetStopMode(uint32 triggerMode);
void   TCPWM1_SetCountMode(uint32 triggerMode);

void   TCPWM1_SaveConfig(void);
void   TCPWM1_RestoreConfig(void);
void   TCPWM1_Sleep(void);
void   TCPWM1_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define TCPWM1_BLOCK_CONTROL_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TCPWM1_BLOCK_CONTROL_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define TCPWM1_COMMAND_REG                    (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TCPWM1_COMMAND_PTR                    ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define TCPWM1_INTRRUPT_CAUSE_REG             (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TCPWM1_INTRRUPT_CAUSE_PTR             ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define TCPWM1_CONTROL_REG                    (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CTRL )
#define TCPWM1_CONTROL_PTR                    ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CTRL )
#define TCPWM1_STATUS_REG                     (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__STATUS )
#define TCPWM1_STATUS_PTR                     ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__STATUS )
#define TCPWM1_COUNTER_REG                    (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__COUNTER )
#define TCPWM1_COUNTER_PTR                    ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__COUNTER )
#define TCPWM1_COMP_CAP_REG                   (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CC )
#define TCPWM1_COMP_CAP_PTR                   ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CC )
#define TCPWM1_COMP_CAP_BUF_REG               (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CC_BUFF )
#define TCPWM1_COMP_CAP_BUF_PTR               ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__CC_BUFF )
#define TCPWM1_PERIOD_REG                     (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__PERIOD )
#define TCPWM1_PERIOD_PTR                     ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__PERIOD )
#define TCPWM1_PERIOD_BUF_REG                 (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TCPWM1_PERIOD_BUF_PTR                 ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define TCPWM1_TRIG_CONTROL0_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TCPWM1_TRIG_CONTROL0_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define TCPWM1_TRIG_CONTROL1_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TCPWM1_TRIG_CONTROL1_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define TCPWM1_TRIG_CONTROL2_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TCPWM1_TRIG_CONTROL2_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define TCPWM1_INTERRUPT_REQ_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR )
#define TCPWM1_INTERRUPT_REQ_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR )
#define TCPWM1_INTERRUPT_SET_REG              (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_SET )
#define TCPWM1_INTERRUPT_SET_PTR              ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_SET )
#define TCPWM1_INTERRUPT_MASK_REG             (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_MASK )
#define TCPWM1_INTERRUPT_MASK_PTR             ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_MASK )
#define TCPWM1_INTERRUPT_MASKED_REG           (*(reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_MASKED )
#define TCPWM1_INTERRUPT_MASKED_PTR           ( (reg32 *) TCPWM1_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define TCPWM1_MASK                           ((uint32)TCPWM1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define TCPWM1_RELOAD_CC_SHIFT                (0u)
#define TCPWM1_RELOAD_PERIOD_SHIFT            (1u)
#define TCPWM1_PWM_SYNC_KILL_SHIFT            (2u)
#define TCPWM1_PWM_STOP_KILL_SHIFT            (3u)
#define TCPWM1_PRESCALER_SHIFT                (8u)
#define TCPWM1_UPDOWN_SHIFT                   (16u)
#define TCPWM1_ONESHOT_SHIFT                  (18u)
#define TCPWM1_QUAD_MODE_SHIFT                (20u)
#define TCPWM1_INV_OUT_SHIFT                  (20u)
#define TCPWM1_INV_COMPL_OUT_SHIFT            (21u)
#define TCPWM1_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define TCPWM1_RELOAD_CC_MASK                 ((uint32)(TCPWM1_1BIT_MASK        <<  \
                                                                            TCPWM1_RELOAD_CC_SHIFT))
#define TCPWM1_RELOAD_PERIOD_MASK             ((uint32)(TCPWM1_1BIT_MASK        <<  \
                                                                            TCPWM1_RELOAD_PERIOD_SHIFT))
#define TCPWM1_PWM_SYNC_KILL_MASK             ((uint32)(TCPWM1_1BIT_MASK        <<  \
                                                                            TCPWM1_PWM_SYNC_KILL_SHIFT))
#define TCPWM1_PWM_STOP_KILL_MASK             ((uint32)(TCPWM1_1BIT_MASK        <<  \
                                                                            TCPWM1_PWM_STOP_KILL_SHIFT))
#define TCPWM1_PRESCALER_MASK                 ((uint32)(TCPWM1_8BIT_MASK        <<  \
                                                                            TCPWM1_PRESCALER_SHIFT))
#define TCPWM1_UPDOWN_MASK                    ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                            TCPWM1_UPDOWN_SHIFT))
#define TCPWM1_ONESHOT_MASK                   ((uint32)(TCPWM1_1BIT_MASK        <<  \
                                                                            TCPWM1_ONESHOT_SHIFT))
#define TCPWM1_QUAD_MODE_MASK                 ((uint32)(TCPWM1_3BIT_MASK        <<  \
                                                                            TCPWM1_QUAD_MODE_SHIFT))
#define TCPWM1_INV_OUT_MASK                   ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                            TCPWM1_INV_OUT_SHIFT))
#define TCPWM1_MODE_MASK                      ((uint32)(TCPWM1_3BIT_MASK        <<  \
                                                                            TCPWM1_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define TCPWM1_CAPTURE_SHIFT                  (0u)
#define TCPWM1_COUNT_SHIFT                    (2u)
#define TCPWM1_RELOAD_SHIFT                   (4u)
#define TCPWM1_STOP_SHIFT                     (6u)
#define TCPWM1_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define TCPWM1_CAPTURE_MASK                   ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                  TCPWM1_CAPTURE_SHIFT))
#define TCPWM1_COUNT_MASK                     ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                  TCPWM1_COUNT_SHIFT))
#define TCPWM1_RELOAD_MASK                    ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                  TCPWM1_RELOAD_SHIFT))
#define TCPWM1_STOP_MASK                      ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                  TCPWM1_STOP_SHIFT))
#define TCPWM1_START_MASK                     ((uint32)(TCPWM1_2BIT_MASK        <<  \
                                                                  TCPWM1_START_SHIFT))

/* MASK */
#define TCPWM1_1BIT_MASK                      ((uint32)0x01u)
#define TCPWM1_2BIT_MASK                      ((uint32)0x03u)
#define TCPWM1_3BIT_MASK                      ((uint32)0x07u)
#define TCPWM1_6BIT_MASK                      ((uint32)0x3Fu)
#define TCPWM1_8BIT_MASK                      ((uint32)0xFFu)
#define TCPWM1_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define TCPWM1_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define TCPWM1_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(TCPWM1_QUAD_ENCODING_MODES     << TCPWM1_QUAD_MODE_SHIFT))       |\
         ((uint32)(TCPWM1_CONFIG                  << TCPWM1_MODE_SHIFT)))

#define TCPWM1_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(TCPWM1_PWM_STOP_EVENT          << TCPWM1_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(TCPWM1_PWM_OUT_INVERT          << TCPWM1_INV_OUT_SHIFT))         |\
         ((uint32)(TCPWM1_PWM_OUT_N_INVERT        << TCPWM1_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(TCPWM1_PWM_MODE                << TCPWM1_MODE_SHIFT)))

#define TCPWM1_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(TCPWM1_PWM_RUN_MODE         << TCPWM1_ONESHOT_SHIFT))
            
#define TCPWM1_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(TCPWM1_PWM_ALIGN            << TCPWM1_UPDOWN_SHIFT))

#define TCPWM1_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(TCPWM1_PWM_KILL_EVENT      << TCPWM1_PWM_SYNC_KILL_SHIFT))

#define TCPWM1_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(TCPWM1_PWM_DEAD_TIME_CYCLE  << TCPWM1_PRESCALER_SHIFT))

#define TCPWM1_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(TCPWM1_PWM_PRESCALER        << TCPWM1_PRESCALER_SHIFT))

#define TCPWM1_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(TCPWM1_TC_PRESCALER            << TCPWM1_PRESCALER_SHIFT))       |\
         ((uint32)(TCPWM1_TC_COUNTER_MODE         << TCPWM1_UPDOWN_SHIFT))          |\
         ((uint32)(TCPWM1_TC_RUN_MODE             << TCPWM1_ONESHOT_SHIFT))         |\
         ((uint32)(TCPWM1_TC_COMP_CAP_MODE        << TCPWM1_MODE_SHIFT)))
        
#define TCPWM1_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(TCPWM1_QUAD_PHIA_SIGNAL_MODE   << TCPWM1_COUNT_SHIFT))           |\
         ((uint32)(TCPWM1_QUAD_INDEX_SIGNAL_MODE  << TCPWM1_RELOAD_SHIFT))          |\
         ((uint32)(TCPWM1_QUAD_STOP_SIGNAL_MODE   << TCPWM1_STOP_SHIFT))            |\
         ((uint32)(TCPWM1_QUAD_PHIB_SIGNAL_MODE   << TCPWM1_START_SHIFT)))

#define TCPWM1_PWM_SIGNALS_MODES                                                              \
        (((uint32)(TCPWM1_PWM_SWITCH_SIGNAL_MODE  << TCPWM1_CAPTURE_SHIFT))         |\
         ((uint32)(TCPWM1_PWM_COUNT_SIGNAL_MODE   << TCPWM1_COUNT_SHIFT))           |\
         ((uint32)(TCPWM1_PWM_RELOAD_SIGNAL_MODE  << TCPWM1_RELOAD_SHIFT))          |\
         ((uint32)(TCPWM1_PWM_STOP_SIGNAL_MODE    << TCPWM1_STOP_SHIFT))            |\
         ((uint32)(TCPWM1_PWM_START_SIGNAL_MODE   << TCPWM1_START_SHIFT)))

#define TCPWM1_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(TCPWM1_TC_CAPTURE_SIGNAL_MODE  << TCPWM1_CAPTURE_SHIFT))         |\
         ((uint32)(TCPWM1_TC_COUNT_SIGNAL_MODE    << TCPWM1_COUNT_SHIFT))           |\
         ((uint32)(TCPWM1_TC_RELOAD_SIGNAL_MODE   << TCPWM1_RELOAD_SHIFT))          |\
         ((uint32)(TCPWM1_TC_STOP_SIGNAL_MODE     << TCPWM1_STOP_SHIFT))            |\
         ((uint32)(TCPWM1_TC_START_SIGNAL_MODE    << TCPWM1_START_SHIFT)))
        
#define TCPWM1_TIMER_UPDOWN_CNT_USED                                                          \
                ((TCPWM1__COUNT_UPDOWN0 == TCPWM1_TC_COUNTER_MODE)                  ||\
                 (TCPWM1__COUNT_UPDOWN1 == TCPWM1_TC_COUNTER_MODE))

#define TCPWM1_PWM_UPDOWN_CNT_USED                                                            \
                ((TCPWM1__CENTER == TCPWM1_PWM_ALIGN)                               ||\
                 (TCPWM1__ASYMMETRIC == TCPWM1_PWM_ALIGN))               
        
#define TCPWM1_PWM_PR_INIT_VALUE              (1u)
#define TCPWM1_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_TCPWM1_H */

/* [] END OF FILE */
