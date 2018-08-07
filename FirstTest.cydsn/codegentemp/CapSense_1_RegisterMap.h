/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 5.20
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v5.20 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2018), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (1u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x48000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (25u)
#define CapSense_1_SNS_STATUS1_SIZE                         (1u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x4E000019u)

#define CapSense_1_SNS_STATUS2_VALUE                        (CapSense_1_dsRam.snsStatus[2u])
#define CapSense_1_SNS_STATUS2_OFFSET                       (26u)
#define CapSense_1_SNS_STATUS2_SIZE                         (1u)
#define CapSense_1_SNS_STATUS2_PARAM_ID                     (0x4400001Au)

#define CapSense_1_SNS_STATUS3_VALUE                        (CapSense_1_dsRam.snsStatus[3u])
#define CapSense_1_SNS_STATUS3_OFFSET                       (27u)
#define CapSense_1_SNS_STATUS3_SIZE                         (1u)
#define CapSense_1_SNS_STATUS3_PARAM_ID                     (0x4200001Bu)

#define CapSense_1_SNS_STATUS4_VALUE                        (CapSense_1_dsRam.snsStatus[4u])
#define CapSense_1_SNS_STATUS4_OFFSET                       (28u)
#define CapSense_1_SNS_STATUS4_SIZE                         (1u)
#define CapSense_1_SNS_STATUS4_PARAM_ID                     (0x4900001Cu)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (30u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xAB80001Eu)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (32u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x63800020u)

#define CapSense_1_SNS_CSD_CLK_VALUE                        (CapSense_1_dsRam.snsCsdClk)
#define CapSense_1_SNS_CSD_CLK_OFFSET                       (34u)
#define CapSense_1_SNS_CSD_CLK_SIZE                         (2u)
#define CapSense_1_SNS_CSD_CLK_PARAM_ID                     (0xA7800022u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (36u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0xAA800024u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (38u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0xA6800026u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (40u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x61800028u)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (41u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x67800029u)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (42u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x6D80002Au)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (43u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x6B80002Bu)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (44u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x6080002Cu)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (45u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x4000002Du)

#define CapSense_1_BUTTON0_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[1u])
#define CapSense_1_BUTTON0_IDAC_MOD1_OFFSET                 (46u)
#define CapSense_1_BUTTON0_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD1_PARAM_ID               (0x4A00002Eu)

#define CapSense_1_BUTTON0_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[2u])
#define CapSense_1_BUTTON0_IDAC_MOD2_OFFSET                 (47u)
#define CapSense_1_BUTTON0_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD2_PARAM_ID               (0x4C00002Fu)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (48u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4D800030u)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (50u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0xA1810032u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (52u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0xAC810034u)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (54u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x68810036u)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (55u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x6E810037u)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (56u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x67810038u)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (57u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x61810039u)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (58u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x6B81003Au)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (59u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x4B01003Bu)

#define CapSense_1_BUTTON1_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[1u])
#define CapSense_1_BUTTON1_IDAC_MOD1_OFFSET                 (60u)
#define CapSense_1_BUTTON1_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD1_PARAM_ID               (0x4001003Cu)

#define CapSense_1_BUTTON1_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[2u])
#define CapSense_1_BUTTON1_IDAC_MOD2_OFFSET                 (61u)
#define CapSense_1_BUTTON1_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD2_PARAM_ID               (0x4601003Du)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (62u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x4181003Eu)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (64u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0xAA820040u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (66u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0xA6820042u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (68u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x63820044u)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (69u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x65820045u)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (70u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x6F820046u)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (71u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x69820047u)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (72u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x60820048u)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (73u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x40020049u)

#define CapSense_1_BUTTON2_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[1u])
#define CapSense_1_BUTTON2_IDAC_MOD1_OFFSET                 (74u)
#define CapSense_1_BUTTON2_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD1_PARAM_ID               (0x4A02004Au)

#define CapSense_1_BUTTON2_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[2u])
#define CapSense_1_BUTTON2_IDAC_MOD2_OFFSET                 (75u)
#define CapSense_1_BUTTON2_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD2_PARAM_ID               (0x4C02004Bu)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (76u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x4A82004Cu)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (78u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0xA683004Eu)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (80u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0xAC830050u)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (82u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x68830052u)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (83u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x6E830053u)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (84u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x65830054u)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (85u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x63830055u)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (86u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x69830056u)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (87u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x49030057u)

#define CapSense_1_BUTTON3_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[1u])
#define CapSense_1_BUTTON3_IDAC_MOD1_OFFSET                 (88u)
#define CapSense_1_BUTTON3_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD1_PARAM_ID               (0x40030058u)

#define CapSense_1_BUTTON3_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[2u])
#define CapSense_1_BUTTON3_IDAC_MOD2_OFFSET                 (89u)
#define CapSense_1_BUTTON3_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD2_PARAM_ID               (0x46030059u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (90u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x4183005Au)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (92u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0xA684005Cu)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (94u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0xAA84005Eu)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (96u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x62840060u)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (97u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x64840061u)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (98u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x6E840062u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (99u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x68840063u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (100u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x63840064u)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (101u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x43040065u)

#define CapSense_1_BUTTON4_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[1u])
#define CapSense_1_BUTTON4_IDAC_MOD1_OFFSET                 (102u)
#define CapSense_1_BUTTON4_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD1_PARAM_ID               (0x49040066u)

#define CapSense_1_BUTTON4_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[2u])
#define CapSense_1_BUTTON4_IDAC_MOD2_OFFSET                 (103u)
#define CapSense_1_BUTTON4_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD2_PARAM_ID               (0x4F040067u)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (104u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x4B840068u)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (106u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x8E00006Au)

#define CapSense_1_BUTTON0_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[1u])
#define CapSense_1_BUTTON0_SNS0_RAW1_OFFSET                 (108u)
#define CapSense_1_BUTTON0_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW1_PARAM_ID               (0x8300006Cu)

#define CapSense_1_BUTTON0_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[2u])
#define CapSense_1_BUTTON0_SNS0_RAW2_OFFSET                 (110u)
#define CapSense_1_BUTTON0_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW2_PARAM_ID               (0x8F00006Eu)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (112u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x85000070u)

#define CapSense_1_BUTTON0_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[1u])
#define CapSense_1_BUTTON0_SNS0_BSLN1_OFFSET                (114u)
#define CapSense_1_BUTTON0_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN1_PARAM_ID              (0x89000072u)

#define CapSense_1_BUTTON0_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[2u])
#define CapSense_1_BUTTON0_SNS0_BSLN2_OFFSET                (116u)
#define CapSense_1_BUTTON0_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN2_PARAM_ID              (0x84000074u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (118u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x40000076u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[1u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_OFFSET            (119u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_PARAM_ID          (0x46000077u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[2u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_OFFSET            (120u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_PARAM_ID          (0x4F000078u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (122u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x8B00007Au)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (124u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4E00007Cu)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (125u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4800007Du)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (126u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4200007Eu)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (127u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x4400007Fu)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[1u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_OFFSET           (128u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_PARAM_ID         (0x4C000080u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[2u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_OFFSET           (129u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_PARAM_ID         (0x4A000081u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (130u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x88000082u)

#define CapSense_1_BUTTON1_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[1u])
#define CapSense_1_BUTTON1_SNS0_RAW1_OFFSET                 (132u)
#define CapSense_1_BUTTON1_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW1_PARAM_ID               (0x85000084u)

#define CapSense_1_BUTTON1_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[2u])
#define CapSense_1_BUTTON1_SNS0_RAW2_OFFSET                 (134u)
#define CapSense_1_BUTTON1_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW2_PARAM_ID               (0x89000086u)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (136u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x86000088u)

#define CapSense_1_BUTTON1_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[1u])
#define CapSense_1_BUTTON1_SNS0_BSLN1_OFFSET                (138u)
#define CapSense_1_BUTTON1_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN1_PARAM_ID              (0x8A00008Au)

#define CapSense_1_BUTTON1_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[2u])
#define CapSense_1_BUTTON1_SNS0_BSLN2_OFFSET                (140u)
#define CapSense_1_BUTTON1_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN2_PARAM_ID              (0x8700008Cu)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (142u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x4300008Eu)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[1u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_OFFSET            (143u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_PARAM_ID          (0x4500008Fu)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[2u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_OFFSET            (144u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_PARAM_ID          (0x49000090u)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (146u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x8D000092u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (148u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x48000094u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (149u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4E000095u)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (150u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x44000096u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (151u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x42000097u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[1u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_OFFSET           (152u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_PARAM_ID         (0x4B000098u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[2u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_OFFSET           (153u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_PARAM_ID         (0x4D000099u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (154u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x8F00009Au)

#define CapSense_1_BUTTON2_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[1u])
#define CapSense_1_BUTTON2_SNS0_RAW1_OFFSET                 (156u)
#define CapSense_1_BUTTON2_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW1_PARAM_ID               (0x8200009Cu)

#define CapSense_1_BUTTON2_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[2u])
#define CapSense_1_BUTTON2_SNS0_RAW2_OFFSET                 (158u)
#define CapSense_1_BUTTON2_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW2_PARAM_ID               (0x8E00009Eu)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (160u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x8E0000A0u)

#define CapSense_1_BUTTON2_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[1u])
#define CapSense_1_BUTTON2_SNS0_BSLN1_OFFSET                (162u)
#define CapSense_1_BUTTON2_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN1_PARAM_ID              (0x820000A2u)

#define CapSense_1_BUTTON2_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[2u])
#define CapSense_1_BUTTON2_SNS0_BSLN2_OFFSET                (164u)
#define CapSense_1_BUTTON2_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN2_PARAM_ID              (0x8F0000A4u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (166u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x4B0000A6u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[1u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_OFFSET            (167u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_PARAM_ID          (0x4D0000A7u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[2u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_OFFSET            (168u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_PARAM_ID          (0x440000A8u)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (170u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x800000AAu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (172u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x450000ACu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (173u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x430000ADu)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (174u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x490000AEu)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (175u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4F0000AFu)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[1u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_OFFSET           (176u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_PARAM_ID         (0x430000B0u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[2u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_OFFSET           (177u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_PARAM_ID         (0x450000B1u)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (178u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x870000B2u)

#define CapSense_1_BUTTON3_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[1u])
#define CapSense_1_BUTTON3_SNS0_RAW1_OFFSET                 (180u)
#define CapSense_1_BUTTON3_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW1_PARAM_ID               (0x8A0000B4u)

#define CapSense_1_BUTTON3_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[2u])
#define CapSense_1_BUTTON3_SNS0_RAW2_OFFSET                 (182u)
#define CapSense_1_BUTTON3_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW2_PARAM_ID               (0x860000B6u)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (184u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x890000B8u)

#define CapSense_1_BUTTON3_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[1u])
#define CapSense_1_BUTTON3_SNS0_BSLN1_OFFSET                (186u)
#define CapSense_1_BUTTON3_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN1_PARAM_ID              (0x850000BAu)

#define CapSense_1_BUTTON3_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[2u])
#define CapSense_1_BUTTON3_SNS0_BSLN2_OFFSET                (188u)
#define CapSense_1_BUTTON3_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN2_PARAM_ID              (0x880000BCu)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (190u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x4C0000BEu)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[1u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_OFFSET            (191u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_PARAM_ID          (0x4A0000BFu)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[2u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_OFFSET            (192u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_PARAM_ID          (0x410000C0u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (194u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x850000C2u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (196u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x400000C4u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (197u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x460000C5u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (198u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4C0000C6u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (199u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0000C7u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[1u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_OFFSET           (200u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_PARAM_ID         (0x430000C8u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[2u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_OFFSET           (201u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_PARAM_ID         (0x450000C9u)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (202u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x870000CAu)

#define CapSense_1_BUTTON4_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[1u])
#define CapSense_1_BUTTON4_SNS0_RAW1_OFFSET                 (204u)
#define CapSense_1_BUTTON4_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW1_PARAM_ID               (0x8A0000CCu)

#define CapSense_1_BUTTON4_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[2u])
#define CapSense_1_BUTTON4_SNS0_RAW2_OFFSET                 (206u)
#define CapSense_1_BUTTON4_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW2_PARAM_ID               (0x860000CEu)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (208u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x8C0000D0u)

#define CapSense_1_BUTTON4_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[1u])
#define CapSense_1_BUTTON4_SNS0_BSLN1_OFFSET                (210u)
#define CapSense_1_BUTTON4_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN1_PARAM_ID              (0x800000D2u)

#define CapSense_1_BUTTON4_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[2u])
#define CapSense_1_BUTTON4_SNS0_BSLN2_OFFSET                (212u)
#define CapSense_1_BUTTON4_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN2_PARAM_ID              (0x8D0000D4u)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (214u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x490000D6u)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[1u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_OFFSET            (215u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_PARAM_ID          (0x4F0000D7u)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[2u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_OFFSET            (216u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_PARAM_ID          (0x460000D8u)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (218u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x820000DAu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (220u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x470000DCu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (221u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x410000DDu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (222u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4B0000DEu)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (223u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x4D0000DFu)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[1u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_OFFSET           (224u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_PARAM_ID         (0x4B0000E0u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[2u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_OFFSET           (225u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_PARAM_ID         (0x4D0000E1u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (226u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6C0000E2u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (227u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6A0000E3u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (228u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x820000E4u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (230u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8E0000E6u)

#define CapSense_1_SNR_TEST_RAW_COUNT1_VALUE                (CapSense_1_dsRam.snrTestRawCount[1u])
#define CapSense_1_SNR_TEST_RAW_COUNT1_OFFSET               (232u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_PARAM_ID             (0x810000E8u)

#define CapSense_1_SNR_TEST_RAW_COUNT2_VALUE                (CapSense_1_dsRam.snrTestRawCount[2u])
#define CapSense_1_SNR_TEST_RAW_COUNT2_OFFSET               (234u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_PARAM_ID             (0x8D0000EAu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (28u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xD401001Cu)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (32u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xD8010020u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (36u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xD9010024u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (40u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDA010028u)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (44u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDB01002Cu)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (48u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDD010030u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (52u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x93010034u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (54u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x57010036u)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (55u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x51010037u)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (56u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xDA020038u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (60u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDB02003Cu)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (64u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xDA020040u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (68u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xDB020044u)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (72u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xD8020048u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (76u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xD902004Cu)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (80u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x90020050u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (82u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x54020052u)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (83u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x52020053u)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (84u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xDD030054u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (88u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xDE030058u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (92u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xDF03005Cu)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (96u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD3030060u)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (100u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD2030064u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (104u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD1030068u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (108u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9F03006Cu)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (110u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5B03006Eu)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (111u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x5D03006Fu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (112u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xDF040070u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (116u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xDE040074u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (120u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xDD040078u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (124u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xDC04007Cu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (128u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xDE040080u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (132u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xDF040084u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (136u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x93040088u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (138u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5704008Au)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (139u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5104008Bu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
