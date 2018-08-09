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

#define CapSense_1_SNS_STATUS5_VALUE                        (CapSense_1_dsRam.snsStatus[5u])
#define CapSense_1_SNS_STATUS5_OFFSET                       (29u)
#define CapSense_1_SNS_STATUS5_SIZE                         (1u)
#define CapSense_1_SNS_STATUS5_PARAM_ID                     (0x4F00001Du)

#define CapSense_1_SNS_STATUS6_VALUE                        (CapSense_1_dsRam.snsStatus[6u])
#define CapSense_1_SNS_STATUS6_OFFSET                       (30u)
#define CapSense_1_SNS_STATUS6_SIZE                         (1u)
#define CapSense_1_SNS_STATUS6_PARAM_ID                     (0x4500001Eu)

#define CapSense_1_SNS_STATUS7_VALUE                        (CapSense_1_dsRam.snsStatus[7u])
#define CapSense_1_SNS_STATUS7_OFFSET                       (31u)
#define CapSense_1_SNS_STATUS7_SIZE                         (1u)
#define CapSense_1_SNS_STATUS7_PARAM_ID                     (0x4300001Fu)

#define CapSense_1_SNS_STATUS8_VALUE                        (CapSense_1_dsRam.snsStatus[8u])
#define CapSense_1_SNS_STATUS8_OFFSET                       (32u)
#define CapSense_1_SNS_STATUS8_SIZE                         (1u)
#define CapSense_1_SNS_STATUS8_PARAM_ID                     (0x45000020u)

#define CapSense_1_SNS_STATUS9_VALUE                        (CapSense_1_dsRam.snsStatus[9u])
#define CapSense_1_SNS_STATUS9_OFFSET                       (33u)
#define CapSense_1_SNS_STATUS9_SIZE                         (1u)
#define CapSense_1_SNS_STATUS9_PARAM_ID                     (0x43000021u)

#define CapSense_1_SNS_STATUS10_VALUE                       (CapSense_1_dsRam.snsStatus[10u])
#define CapSense_1_SNS_STATUS10_OFFSET                      (34u)
#define CapSense_1_SNS_STATUS10_SIZE                        (1u)
#define CapSense_1_SNS_STATUS10_PARAM_ID                    (0x49000022u)

#define CapSense_1_SNS_STATUS11_VALUE                       (CapSense_1_dsRam.snsStatus[11u])
#define CapSense_1_SNS_STATUS11_OFFSET                      (35u)
#define CapSense_1_SNS_STATUS11_SIZE                        (1u)
#define CapSense_1_SNS_STATUS11_PARAM_ID                    (0x4F000023u)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (36u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xAA800024u)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (38u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x6E800026u)

#define CapSense_1_SNS_CSD_CLK_VALUE                        (CapSense_1_dsRam.snsCsdClk)
#define CapSense_1_SNS_CSD_CLK_OFFSET                       (40u)
#define CapSense_1_SNS_CSD_CLK_SIZE                         (2u)
#define CapSense_1_SNS_CSD_CLK_PARAM_ID                     (0xA9800028u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (42u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0xA580002Au)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (44u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0xA880002Cu)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (46u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x6C80002Eu)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (47u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x6A80002Fu)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (48u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x66800030u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (49u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x60800031u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (50u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x6A800032u)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (51u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x4A000033u)

#define CapSense_1_BUTTON0_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[1u])
#define CapSense_1_BUTTON0_IDAC_MOD1_OFFSET                 (52u)
#define CapSense_1_BUTTON0_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD1_PARAM_ID               (0x41000034u)

#define CapSense_1_BUTTON0_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[2u])
#define CapSense_1_BUTTON0_IDAC_MOD2_OFFSET                 (53u)
#define CapSense_1_BUTTON0_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD2_PARAM_ID               (0x47000035u)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (54u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x40800036u)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (56u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0xAF810038u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (58u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0xA381003Au)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (60u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x6681003Cu)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (61u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x6081003Du)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (62u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x6A81003Eu)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (63u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x6C81003Fu)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (64u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x67810040u)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (65u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x47010041u)

#define CapSense_1_BUTTON1_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[1u])
#define CapSense_1_BUTTON1_IDAC_MOD1_OFFSET                 (66u)
#define CapSense_1_BUTTON1_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD1_PARAM_ID               (0x4D010042u)

#define CapSense_1_BUTTON1_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[2u])
#define CapSense_1_BUTTON1_IDAC_MOD2_OFFSET                 (67u)
#define CapSense_1_BUTTON1_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD2_PARAM_ID               (0x4B010043u)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (68u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x4D810044u)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (70u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0xA7820046u)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (72u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0xA8820048u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (74u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x6C82004Au)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (75u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x6A82004Bu)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (76u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x6182004Cu)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (77u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x6782004Du)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (78u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x6D82004Eu)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (79u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x4D02004Fu)

#define CapSense_1_BUTTON2_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[1u])
#define CapSense_1_BUTTON2_IDAC_MOD1_OFFSET                 (80u)
#define CapSense_1_BUTTON2_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD1_PARAM_ID               (0x41020050u)

#define CapSense_1_BUTTON2_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[2u])
#define CapSense_1_BUTTON2_IDAC_MOD2_OFFSET                 (81u)
#define CapSense_1_BUTTON2_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD2_PARAM_ID               (0x47020051u)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (82u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x40820052u)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (84u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0xAD830054u)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (86u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0xA1830056u)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (88u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x66830058u)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (89u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x60830059u)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (90u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x6A83005Au)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (91u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x6C83005Bu)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (92u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x6783005Cu)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (93u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x4703005Du)

#define CapSense_1_BUTTON3_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[1u])
#define CapSense_1_BUTTON3_IDAC_MOD1_OFFSET                 (94u)
#define CapSense_1_BUTTON3_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD1_PARAM_ID               (0x4D03005Eu)

#define CapSense_1_BUTTON3_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[2u])
#define CapSense_1_BUTTON3_IDAC_MOD2_OFFSET                 (95u)
#define CapSense_1_BUTTON3_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD2_PARAM_ID               (0x4B03005Fu)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (96u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x40830060u)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (98u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0xA6840062u)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (100u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0xAB840064u)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (102u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x6F840066u)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (103u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x69840067u)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (104u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x60840068u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (105u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x66840069u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (106u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x6C84006Au)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (107u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x4C04006Bu)

#define CapSense_1_BUTTON4_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[1u])
#define CapSense_1_BUTTON4_IDAC_MOD1_OFFSET                 (108u)
#define CapSense_1_BUTTON4_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD1_PARAM_ID               (0x4704006Cu)

#define CapSense_1_BUTTON4_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[2u])
#define CapSense_1_BUTTON4_IDAC_MOD2_OFFSET                 (109u)
#define CapSense_1_BUTTON4_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD2_PARAM_ID               (0x4104006Du)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (110u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x4684006Eu)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (112u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0xAC850070u)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (114u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0xA0850072u)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (116u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x65850074u)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (117u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x63850075u)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (118u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x69850076u)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (119u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x6F850077u)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (120u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x66850078u)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (121u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x46050079u)

#define CapSense_1_BUTTON5_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[1u])
#define CapSense_1_BUTTON5_IDAC_MOD1_OFFSET                 (122u)
#define CapSense_1_BUTTON5_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD1_PARAM_ID               (0x4C05007Au)

#define CapSense_1_BUTTON5_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[2u])
#define CapSense_1_BUTTON5_IDAC_MOD2_OFFSET                 (123u)
#define CapSense_1_BUTTON5_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD2_PARAM_ID               (0x4A05007Bu)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (124u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x4C85007Cu)

#define CapSense_1_BUTTON6_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button6.resolution)
#define CapSense_1_BUTTON6_RESOLUTION_OFFSET                (126u)
#define CapSense_1_BUTTON6_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON6_RESOLUTION_PARAM_ID              (0xA686007Eu)

#define CapSense_1_BUTTON6_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.fingerTh)
#define CapSense_1_BUTTON6_FINGER_TH_OFFSET                 (128u)
#define CapSense_1_BUTTON6_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON6_FINGER_TH_PARAM_ID               (0xA8860080u)

#define CapSense_1_BUTTON6_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button6.noiseTh)
#define CapSense_1_BUTTON6_NOISE_TH_OFFSET                  (130u)
#define CapSense_1_BUTTON6_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON6_NOISE_TH_PARAM_ID                (0x6C860082u)

#define CapSense_1_BUTTON6_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_1_BUTTON6_NNOISE_TH_OFFSET                 (131u)
#define CapSense_1_BUTTON6_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON6_NNOISE_TH_PARAM_ID               (0x6A860083u)

#define CapSense_1_BUTTON6_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button6.hysteresis)
#define CapSense_1_BUTTON6_HYSTERESIS_OFFSET                (132u)
#define CapSense_1_BUTTON6_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON6_HYSTERESIS_PARAM_ID              (0x61860084u)

#define CapSense_1_BUTTON6_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button6.onDebounce)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_OFFSET               (133u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_PARAM_ID             (0x67860085u)

#define CapSense_1_BUTTON6_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_OFFSET              (134u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_PARAM_ID            (0x6D860086u)

#define CapSense_1_BUTTON6_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_1_BUTTON6_IDAC_MOD0_OFFSET                 (135u)
#define CapSense_1_BUTTON6_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD0_PARAM_ID               (0x4D060087u)

#define CapSense_1_BUTTON6_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[1u])
#define CapSense_1_BUTTON6_IDAC_MOD1_OFFSET                 (136u)
#define CapSense_1_BUTTON6_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD1_PARAM_ID               (0x44060088u)

#define CapSense_1_BUTTON6_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[2u])
#define CapSense_1_BUTTON6_IDAC_MOD2_OFFSET                 (137u)
#define CapSense_1_BUTTON6_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD2_PARAM_ID               (0x42060089u)

#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_OFFSET            (138u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_PARAM_ID          (0x4586008Au)

#define CapSense_1_BUTTON7_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button7.resolution)
#define CapSense_1_BUTTON7_RESOLUTION_OFFSET                (140u)
#define CapSense_1_BUTTON7_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON7_RESOLUTION_PARAM_ID              (0xA887008Cu)

#define CapSense_1_BUTTON7_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.fingerTh)
#define CapSense_1_BUTTON7_FINGER_TH_OFFSET                 (142u)
#define CapSense_1_BUTTON7_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON7_FINGER_TH_PARAM_ID               (0xA487008Eu)

#define CapSense_1_BUTTON7_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button7.noiseTh)
#define CapSense_1_BUTTON7_NOISE_TH_OFFSET                  (144u)
#define CapSense_1_BUTTON7_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON7_NOISE_TH_PARAM_ID                (0x66870090u)

#define CapSense_1_BUTTON7_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_1_BUTTON7_NNOISE_TH_OFFSET                 (145u)
#define CapSense_1_BUTTON7_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON7_NNOISE_TH_PARAM_ID               (0x60870091u)

#define CapSense_1_BUTTON7_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button7.hysteresis)
#define CapSense_1_BUTTON7_HYSTERESIS_OFFSET                (146u)
#define CapSense_1_BUTTON7_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON7_HYSTERESIS_PARAM_ID              (0x6A870092u)

#define CapSense_1_BUTTON7_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button7.onDebounce)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_OFFSET               (147u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_PARAM_ID             (0x6C870093u)

#define CapSense_1_BUTTON7_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_OFFSET              (148u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_PARAM_ID            (0x67870094u)

#define CapSense_1_BUTTON7_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_1_BUTTON7_IDAC_MOD0_OFFSET                 (149u)
#define CapSense_1_BUTTON7_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD0_PARAM_ID               (0x47070095u)

#define CapSense_1_BUTTON7_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[1u])
#define CapSense_1_BUTTON7_IDAC_MOD1_OFFSET                 (150u)
#define CapSense_1_BUTTON7_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD1_PARAM_ID               (0x4D070096u)

#define CapSense_1_BUTTON7_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[2u])
#define CapSense_1_BUTTON7_IDAC_MOD2_OFFSET                 (151u)
#define CapSense_1_BUTTON7_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD2_PARAM_ID               (0x4B070097u)

#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_OFFSET            (152u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_PARAM_ID          (0x4F870098u)

#define CapSense_1_BUTTON8_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button8.resolution)
#define CapSense_1_BUTTON8_RESOLUTION_OFFSET                (154u)
#define CapSense_1_BUTTON8_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON8_RESOLUTION_PARAM_ID              (0xA888009Au)

#define CapSense_1_BUTTON8_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.fingerTh)
#define CapSense_1_BUTTON8_FINGER_TH_OFFSET                 (156u)
#define CapSense_1_BUTTON8_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON8_FINGER_TH_PARAM_ID               (0xA588009Cu)

#define CapSense_1_BUTTON8_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button8.noiseTh)
#define CapSense_1_BUTTON8_NOISE_TH_OFFSET                  (158u)
#define CapSense_1_BUTTON8_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON8_NOISE_TH_PARAM_ID                (0x6188009Eu)

#define CapSense_1_BUTTON8_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.nNoiseTh)
#define CapSense_1_BUTTON8_NNOISE_TH_OFFSET                 (159u)
#define CapSense_1_BUTTON8_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON8_NNOISE_TH_PARAM_ID               (0x6788009Fu)

#define CapSense_1_BUTTON8_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button8.hysteresis)
#define CapSense_1_BUTTON8_HYSTERESIS_OFFSET                (160u)
#define CapSense_1_BUTTON8_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON8_HYSTERESIS_PARAM_ID              (0x618800A0u)

#define CapSense_1_BUTTON8_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button8.onDebounce)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_OFFSET               (161u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_PARAM_ID             (0x678800A1u)

#define CapSense_1_BUTTON8_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button8.lowBslnRst)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_OFFSET              (162u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_PARAM_ID            (0x6D8800A2u)

#define CapSense_1_BUTTON8_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button8.idacMod[0u])
#define CapSense_1_BUTTON8_IDAC_MOD0_OFFSET                 (163u)
#define CapSense_1_BUTTON8_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON8_IDAC_MOD0_PARAM_ID               (0x4D0800A3u)

#define CapSense_1_BUTTON8_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button8.idacMod[1u])
#define CapSense_1_BUTTON8_IDAC_MOD1_OFFSET                 (164u)
#define CapSense_1_BUTTON8_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON8_IDAC_MOD1_PARAM_ID               (0x460800A4u)

#define CapSense_1_BUTTON8_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button8.idacMod[2u])
#define CapSense_1_BUTTON8_IDAC_MOD2_OFFSET                 (165u)
#define CapSense_1_BUTTON8_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON8_IDAC_MOD2_PARAM_ID               (0x400800A5u)

#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button8.snsClkSource)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_OFFSET            (166u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_PARAM_ID          (0x478800A6u)

#define CapSense_1_BUTTON9_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button9.resolution)
#define CapSense_1_BUTTON9_RESOLUTION_OFFSET                (168u)
#define CapSense_1_BUTTON9_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON9_RESOLUTION_PARAM_ID              (0xA88900A8u)

#define CapSense_1_BUTTON9_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.fingerTh)
#define CapSense_1_BUTTON9_FINGER_TH_OFFSET                 (170u)
#define CapSense_1_BUTTON9_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON9_FINGER_TH_PARAM_ID               (0xA48900AAu)

#define CapSense_1_BUTTON9_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button9.noiseTh)
#define CapSense_1_BUTTON9_NOISE_TH_OFFSET                  (172u)
#define CapSense_1_BUTTON9_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON9_NOISE_TH_PARAM_ID                (0x618900ACu)

#define CapSense_1_BUTTON9_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.nNoiseTh)
#define CapSense_1_BUTTON9_NNOISE_TH_OFFSET                 (173u)
#define CapSense_1_BUTTON9_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON9_NNOISE_TH_PARAM_ID               (0x678900ADu)

#define CapSense_1_BUTTON9_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button9.hysteresis)
#define CapSense_1_BUTTON9_HYSTERESIS_OFFSET                (174u)
#define CapSense_1_BUTTON9_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON9_HYSTERESIS_PARAM_ID              (0x6D8900AEu)

#define CapSense_1_BUTTON9_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button9.onDebounce)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_OFFSET               (175u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_PARAM_ID             (0x6B8900AFu)

#define CapSense_1_BUTTON9_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button9.lowBslnRst)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_OFFSET              (176u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_PARAM_ID            (0x678900B0u)

#define CapSense_1_BUTTON9_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button9.idacMod[0u])
#define CapSense_1_BUTTON9_IDAC_MOD0_OFFSET                 (177u)
#define CapSense_1_BUTTON9_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON9_IDAC_MOD0_PARAM_ID               (0x470900B1u)

#define CapSense_1_BUTTON9_IDAC_MOD1_VALUE                  (CapSense_1_dsRam.wdgtList.button9.idacMod[1u])
#define CapSense_1_BUTTON9_IDAC_MOD1_OFFSET                 (178u)
#define CapSense_1_BUTTON9_IDAC_MOD1_SIZE                   (1u)
#define CapSense_1_BUTTON9_IDAC_MOD1_PARAM_ID               (0x4D0900B2u)

#define CapSense_1_BUTTON9_IDAC_MOD2_VALUE                  (CapSense_1_dsRam.wdgtList.button9.idacMod[2u])
#define CapSense_1_BUTTON9_IDAC_MOD2_OFFSET                 (179u)
#define CapSense_1_BUTTON9_IDAC_MOD2_SIZE                   (1u)
#define CapSense_1_BUTTON9_IDAC_MOD2_PARAM_ID               (0x4B0900B3u)

#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button9.snsClkSource)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_OFFSET            (180u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_PARAM_ID          (0x4D8900B4u)

#define CapSense_1_BUTTON10_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button10.resolution)
#define CapSense_1_BUTTON10_RESOLUTION_OFFSET               (182u)
#define CapSense_1_BUTTON10_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON10_RESOLUTION_PARAM_ID             (0xA78A00B6u)

#define CapSense_1_BUTTON10_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.fingerTh)
#define CapSense_1_BUTTON10_FINGER_TH_OFFSET                (184u)
#define CapSense_1_BUTTON10_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON10_FINGER_TH_PARAM_ID              (0xA88A00B8u)

#define CapSense_1_BUTTON10_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button10.noiseTh)
#define CapSense_1_BUTTON10_NOISE_TH_OFFSET                 (186u)
#define CapSense_1_BUTTON10_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON10_NOISE_TH_PARAM_ID               (0x6C8A00BAu)

#define CapSense_1_BUTTON10_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.nNoiseTh)
#define CapSense_1_BUTTON10_NNOISE_TH_OFFSET                (187u)
#define CapSense_1_BUTTON10_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON10_NNOISE_TH_PARAM_ID              (0x6A8A00BBu)

#define CapSense_1_BUTTON10_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button10.hysteresis)
#define CapSense_1_BUTTON10_HYSTERESIS_OFFSET               (188u)
#define CapSense_1_BUTTON10_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON10_HYSTERESIS_PARAM_ID             (0x618A00BCu)

#define CapSense_1_BUTTON10_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button10.onDebounce)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_OFFSET              (189u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_PARAM_ID            (0x678A00BDu)

#define CapSense_1_BUTTON10_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button10.lowBslnRst)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_OFFSET             (190u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_PARAM_ID           (0x6D8A00BEu)

#define CapSense_1_BUTTON10_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button10.idacMod[0u])
#define CapSense_1_BUTTON10_IDAC_MOD0_OFFSET                (191u)
#define CapSense_1_BUTTON10_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON10_IDAC_MOD0_PARAM_ID              (0x4D0A00BFu)

#define CapSense_1_BUTTON10_IDAC_MOD1_VALUE                 (CapSense_1_dsRam.wdgtList.button10.idacMod[1u])
#define CapSense_1_BUTTON10_IDAC_MOD1_OFFSET                (192u)
#define CapSense_1_BUTTON10_IDAC_MOD1_SIZE                  (1u)
#define CapSense_1_BUTTON10_IDAC_MOD1_PARAM_ID              (0x460A00C0u)

#define CapSense_1_BUTTON10_IDAC_MOD2_VALUE                 (CapSense_1_dsRam.wdgtList.button10.idacMod[2u])
#define CapSense_1_BUTTON10_IDAC_MOD2_OFFSET                (193u)
#define CapSense_1_BUTTON10_IDAC_MOD2_SIZE                  (1u)
#define CapSense_1_BUTTON10_IDAC_MOD2_PARAM_ID              (0x400A00C1u)

#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button10.snsClkSource)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_OFFSET           (194u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_PARAM_ID         (0x478A00C2u)

#define CapSense_1_BUTTON11_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button11.resolution)
#define CapSense_1_BUTTON11_RESOLUTION_OFFSET               (196u)
#define CapSense_1_BUTTON11_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON11_RESOLUTION_PARAM_ID             (0xAA8B00C4u)

#define CapSense_1_BUTTON11_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.fingerTh)
#define CapSense_1_BUTTON11_FINGER_TH_OFFSET                (198u)
#define CapSense_1_BUTTON11_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON11_FINGER_TH_PARAM_ID              (0xA68B00C6u)

#define CapSense_1_BUTTON11_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button11.noiseTh)
#define CapSense_1_BUTTON11_NOISE_TH_OFFSET                 (200u)
#define CapSense_1_BUTTON11_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON11_NOISE_TH_PARAM_ID               (0x618B00C8u)

#define CapSense_1_BUTTON11_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.nNoiseTh)
#define CapSense_1_BUTTON11_NNOISE_TH_OFFSET                (201u)
#define CapSense_1_BUTTON11_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON11_NNOISE_TH_PARAM_ID              (0x678B00C9u)

#define CapSense_1_BUTTON11_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button11.hysteresis)
#define CapSense_1_BUTTON11_HYSTERESIS_OFFSET               (202u)
#define CapSense_1_BUTTON11_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON11_HYSTERESIS_PARAM_ID             (0x6D8B00CAu)

#define CapSense_1_BUTTON11_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button11.onDebounce)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_OFFSET              (203u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_PARAM_ID            (0x6B8B00CBu)

#define CapSense_1_BUTTON11_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button11.lowBslnRst)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_OFFSET             (204u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_PARAM_ID           (0x608B00CCu)

#define CapSense_1_BUTTON11_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button11.idacMod[0u])
#define CapSense_1_BUTTON11_IDAC_MOD0_OFFSET                (205u)
#define CapSense_1_BUTTON11_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON11_IDAC_MOD0_PARAM_ID              (0x400B00CDu)

#define CapSense_1_BUTTON11_IDAC_MOD1_VALUE                 (CapSense_1_dsRam.wdgtList.button11.idacMod[1u])
#define CapSense_1_BUTTON11_IDAC_MOD1_OFFSET                (206u)
#define CapSense_1_BUTTON11_IDAC_MOD1_SIZE                  (1u)
#define CapSense_1_BUTTON11_IDAC_MOD1_PARAM_ID              (0x4A0B00CEu)

#define CapSense_1_BUTTON11_IDAC_MOD2_VALUE                 (CapSense_1_dsRam.wdgtList.button11.idacMod[2u])
#define CapSense_1_BUTTON11_IDAC_MOD2_OFFSET                (207u)
#define CapSense_1_BUTTON11_IDAC_MOD2_SIZE                  (1u)
#define CapSense_1_BUTTON11_IDAC_MOD2_PARAM_ID              (0x4C0B00CFu)

#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button11.snsClkSource)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_OFFSET           (208u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_PARAM_ID         (0x4D8B00D0u)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (210u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x800000D2u)

#define CapSense_1_BUTTON0_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[1u])
#define CapSense_1_BUTTON0_SNS0_RAW1_OFFSET                 (212u)
#define CapSense_1_BUTTON0_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW1_PARAM_ID               (0x8D0000D4u)

#define CapSense_1_BUTTON0_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[2u])
#define CapSense_1_BUTTON0_SNS0_RAW2_OFFSET                 (214u)
#define CapSense_1_BUTTON0_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW2_PARAM_ID               (0x810000D6u)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (216u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x8E0000D8u)

#define CapSense_1_BUTTON0_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[1u])
#define CapSense_1_BUTTON0_SNS0_BSLN1_OFFSET                (218u)
#define CapSense_1_BUTTON0_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN1_PARAM_ID              (0x820000DAu)

#define CapSense_1_BUTTON0_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[2u])
#define CapSense_1_BUTTON0_SNS0_BSLN2_OFFSET                (220u)
#define CapSense_1_BUTTON0_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN2_PARAM_ID              (0x8F0000DCu)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (222u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x4B0000DEu)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[1u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_OFFSET            (223u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT1_PARAM_ID          (0x4D0000DFu)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[2u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_OFFSET            (224u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT2_PARAM_ID          (0x4B0000E0u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (226u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x8F0000E2u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (228u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4A0000E4u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (229u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4C0000E5u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (230u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x460000E6u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (231u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x400000E7u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[1u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_OFFSET           (232u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP1_PARAM_ID         (0x490000E8u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[2u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_OFFSET           (233u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP2_PARAM_ID         (0x4F0000E9u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (234u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x8D0000EAu)

#define CapSense_1_BUTTON1_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[1u])
#define CapSense_1_BUTTON1_SNS0_RAW1_OFFSET                 (236u)
#define CapSense_1_BUTTON1_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW1_PARAM_ID               (0x800000ECu)

#define CapSense_1_BUTTON1_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[2u])
#define CapSense_1_BUTTON1_SNS0_RAW2_OFFSET                 (238u)
#define CapSense_1_BUTTON1_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW2_PARAM_ID               (0x8C0000EEu)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (240u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x860000F0u)

#define CapSense_1_BUTTON1_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[1u])
#define CapSense_1_BUTTON1_SNS0_BSLN1_OFFSET                (242u)
#define CapSense_1_BUTTON1_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN1_PARAM_ID              (0x8A0000F2u)

#define CapSense_1_BUTTON1_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[2u])
#define CapSense_1_BUTTON1_SNS0_BSLN2_OFFSET                (244u)
#define CapSense_1_BUTTON1_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN2_PARAM_ID              (0x870000F4u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (246u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x430000F6u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[1u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_OFFSET            (247u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT1_PARAM_ID          (0x450000F7u)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[2u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_OFFSET            (248u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT2_PARAM_ID          (0x4C0000F8u)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (250u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x880000FAu)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (252u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D0000FCu)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (253u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4B0000FDu)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (254u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x410000FEu)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (255u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x470000FFu)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[1u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_OFFSET           (256u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP1_PARAM_ID         (0x44000100u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[2u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_OFFSET           (257u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP2_PARAM_ID         (0x42000101u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (258u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x80000102u)

#define CapSense_1_BUTTON2_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[1u])
#define CapSense_1_BUTTON2_SNS0_RAW1_OFFSET                 (260u)
#define CapSense_1_BUTTON2_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW1_PARAM_ID               (0x8D000104u)

#define CapSense_1_BUTTON2_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[2u])
#define CapSense_1_BUTTON2_SNS0_RAW2_OFFSET                 (262u)
#define CapSense_1_BUTTON2_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW2_PARAM_ID               (0x81000106u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (264u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x8E000108u)

#define CapSense_1_BUTTON2_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[1u])
#define CapSense_1_BUTTON2_SNS0_BSLN1_OFFSET                (266u)
#define CapSense_1_BUTTON2_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN1_PARAM_ID              (0x8200010Au)

#define CapSense_1_BUTTON2_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[2u])
#define CapSense_1_BUTTON2_SNS0_BSLN2_OFFSET                (268u)
#define CapSense_1_BUTTON2_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN2_PARAM_ID              (0x8F00010Cu)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (270u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x4B00010Eu)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[1u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_OFFSET            (271u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT1_PARAM_ID          (0x4D00010Fu)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[2u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_OFFSET            (272u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT2_PARAM_ID          (0x41000110u)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (274u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x85000112u)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (276u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x40000114u)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (277u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x46000115u)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (278u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4C000116u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (279u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4A000117u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[1u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_OFFSET           (280u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP1_PARAM_ID         (0x43000118u)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[2u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_OFFSET           (281u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP2_PARAM_ID         (0x45000119u)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (282u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x8700011Au)

#define CapSense_1_BUTTON3_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[1u])
#define CapSense_1_BUTTON3_SNS0_RAW1_OFFSET                 (284u)
#define CapSense_1_BUTTON3_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW1_PARAM_ID               (0x8A00011Cu)

#define CapSense_1_BUTTON3_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[2u])
#define CapSense_1_BUTTON3_SNS0_RAW2_OFFSET                 (286u)
#define CapSense_1_BUTTON3_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW2_PARAM_ID               (0x8600011Eu)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (288u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x86000120u)

#define CapSense_1_BUTTON3_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[1u])
#define CapSense_1_BUTTON3_SNS0_BSLN1_OFFSET                (290u)
#define CapSense_1_BUTTON3_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN1_PARAM_ID              (0x8A000122u)

#define CapSense_1_BUTTON3_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[2u])
#define CapSense_1_BUTTON3_SNS0_BSLN2_OFFSET                (292u)
#define CapSense_1_BUTTON3_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN2_PARAM_ID              (0x87000124u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (294u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x43000126u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[1u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_OFFSET            (295u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT1_PARAM_ID          (0x45000127u)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[2u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_OFFSET            (296u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT2_PARAM_ID          (0x4C000128u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (298u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x8800012Au)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (300u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4D00012Cu)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (301u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4B00012Du)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (302u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4100012Eu)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (303u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x4700012Fu)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[1u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_OFFSET           (304u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP1_PARAM_ID         (0x4B000130u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[2u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_OFFSET           (305u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP2_PARAM_ID         (0x4D000131u)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (306u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x8F000132u)

#define CapSense_1_BUTTON4_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[1u])
#define CapSense_1_BUTTON4_SNS0_RAW1_OFFSET                 (308u)
#define CapSense_1_BUTTON4_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW1_PARAM_ID               (0x82000134u)

#define CapSense_1_BUTTON4_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[2u])
#define CapSense_1_BUTTON4_SNS0_RAW2_OFFSET                 (310u)
#define CapSense_1_BUTTON4_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW2_PARAM_ID               (0x8E000136u)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (312u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x81000138u)

#define CapSense_1_BUTTON4_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[1u])
#define CapSense_1_BUTTON4_SNS0_BSLN1_OFFSET                (314u)
#define CapSense_1_BUTTON4_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN1_PARAM_ID              (0x8D00013Au)

#define CapSense_1_BUTTON4_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[2u])
#define CapSense_1_BUTTON4_SNS0_BSLN2_OFFSET                (316u)
#define CapSense_1_BUTTON4_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN2_PARAM_ID              (0x8000013Cu)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (318u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x4400013Eu)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[1u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_OFFSET            (319u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT1_PARAM_ID          (0x4200013Fu)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[2u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_OFFSET            (320u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT2_PARAM_ID          (0x49000140u)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (322u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x8D000142u)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (324u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x48000144u)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (325u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4E000145u)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (326u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x44000146u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (327u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x42000147u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[1u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_OFFSET           (328u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP1_PARAM_ID         (0x4B000148u)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[2u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_OFFSET           (329u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP2_PARAM_ID         (0x4D000149u)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (330u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x8F00014Au)

#define CapSense_1_BUTTON5_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[1u])
#define CapSense_1_BUTTON5_SNS0_RAW1_OFFSET                 (332u)
#define CapSense_1_BUTTON5_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW1_PARAM_ID               (0x8200014Cu)

#define CapSense_1_BUTTON5_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[2u])
#define CapSense_1_BUTTON5_SNS0_RAW2_OFFSET                 (334u)
#define CapSense_1_BUTTON5_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW2_PARAM_ID               (0x8E00014Eu)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (336u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x84000150u)

#define CapSense_1_BUTTON5_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[1u])
#define CapSense_1_BUTTON5_SNS0_BSLN1_OFFSET                (338u)
#define CapSense_1_BUTTON5_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN1_PARAM_ID              (0x88000152u)

#define CapSense_1_BUTTON5_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[2u])
#define CapSense_1_BUTTON5_SNS0_BSLN2_OFFSET                (340u)
#define CapSense_1_BUTTON5_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN2_PARAM_ID              (0x85000154u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (342u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x41000156u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[1u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT1_OFFSET            (343u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT1_PARAM_ID          (0x47000157u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[2u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT2_OFFSET            (344u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT2_PARAM_ID          (0x4E000158u)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (346u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x8A00015Au)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (348u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4F00015Cu)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (349u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4900015Du)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (350u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4300015Eu)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (351u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x4500015Fu)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[1u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP1_OFFSET           (352u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP1_PARAM_ID         (0x43000160u)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[2u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP2_OFFSET           (353u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP2_PARAM_ID         (0x45000161u)

#define CapSense_1_BUTTON6_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_1_BUTTON6_SNS0_RAW0_OFFSET                 (354u)
#define CapSense_1_BUTTON6_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW0_PARAM_ID               (0x87000162u)

#define CapSense_1_BUTTON6_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[1u])
#define CapSense_1_BUTTON6_SNS0_RAW1_OFFSET                 (356u)
#define CapSense_1_BUTTON6_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW1_PARAM_ID               (0x8A000164u)

#define CapSense_1_BUTTON6_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[2u])
#define CapSense_1_BUTTON6_SNS0_RAW2_OFFSET                 (358u)
#define CapSense_1_BUTTON6_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW2_PARAM_ID               (0x86000166u)

#define CapSense_1_BUTTON6_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN0_OFFSET                (360u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_PARAM_ID              (0x89000168u)

#define CapSense_1_BUTTON6_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[1u])
#define CapSense_1_BUTTON6_SNS0_BSLN1_OFFSET                (362u)
#define CapSense_1_BUTTON6_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN1_PARAM_ID              (0x8500016Au)

#define CapSense_1_BUTTON6_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[2u])
#define CapSense_1_BUTTON6_SNS0_BSLN2_OFFSET                (364u)
#define CapSense_1_BUTTON6_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN2_PARAM_ID              (0x8800016Cu)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_OFFSET            (366u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID          (0x4C00016Eu)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[1u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT1_OFFSET            (367u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT1_PARAM_ID          (0x4A00016Fu)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[2u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT2_OFFSET            (368u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT2_PARAM_ID          (0x46000170u)

#define CapSense_1_BUTTON6_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].diff)
#define CapSense_1_BUTTON6_SNS0_DIFF_OFFSET                 (370u)
#define CapSense_1_BUTTON6_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_DIFF_PARAM_ID               (0x82000172u)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (372u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x47000174u)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (373u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x41000175u)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (374u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4B000176u)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_OFFSET           (375u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID         (0x4D000177u)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[1u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP1_OFFSET           (376u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP1_PARAM_ID         (0x44000178u)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[2u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP2_OFFSET           (377u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP2_PARAM_ID         (0x42000179u)

#define CapSense_1_BUTTON7_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_1_BUTTON7_SNS0_RAW0_OFFSET                 (378u)
#define CapSense_1_BUTTON7_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW0_PARAM_ID               (0x8000017Au)

#define CapSense_1_BUTTON7_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[1u])
#define CapSense_1_BUTTON7_SNS0_RAW1_OFFSET                 (380u)
#define CapSense_1_BUTTON7_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW1_PARAM_ID               (0x8D00017Cu)

#define CapSense_1_BUTTON7_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[2u])
#define CapSense_1_BUTTON7_SNS0_RAW2_OFFSET                 (382u)
#define CapSense_1_BUTTON7_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW2_PARAM_ID               (0x8100017Eu)

#define CapSense_1_BUTTON7_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN0_OFFSET                (384u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_PARAM_ID              (0x8F000180u)

#define CapSense_1_BUTTON7_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[1u])
#define CapSense_1_BUTTON7_SNS0_BSLN1_OFFSET                (386u)
#define CapSense_1_BUTTON7_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN1_PARAM_ID              (0x83000182u)

#define CapSense_1_BUTTON7_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[2u])
#define CapSense_1_BUTTON7_SNS0_BSLN2_OFFSET                (388u)
#define CapSense_1_BUTTON7_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN2_PARAM_ID              (0x8E000184u)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_OFFSET            (390u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID          (0x4A000186u)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[1u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT1_OFFSET            (391u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT1_PARAM_ID          (0x4C000187u)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[2u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT2_OFFSET            (392u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT2_PARAM_ID          (0x45000188u)

#define CapSense_1_BUTTON7_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].diff)
#define CapSense_1_BUTTON7_SNS0_DIFF_OFFSET                 (394u)
#define CapSense_1_BUTTON7_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_DIFF_PARAM_ID               (0x8100018Au)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (396u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4400018Cu)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (397u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4200018Du)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (398u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x4800018Eu)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_OFFSET           (399u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID         (0x4E00018Fu)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[1u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP1_OFFSET           (400u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP1_PARAM_ID         (0x42000190u)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[2u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP2_OFFSET           (401u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP2_PARAM_ID         (0x44000191u)

#define CapSense_1_BUTTON8_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].raw[0u])
#define CapSense_1_BUTTON8_SNS0_RAW0_OFFSET                 (402u)
#define CapSense_1_BUTTON8_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_RAW0_PARAM_ID               (0x86000192u)

#define CapSense_1_BUTTON8_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].raw[1u])
#define CapSense_1_BUTTON8_SNS0_RAW1_OFFSET                 (404u)
#define CapSense_1_BUTTON8_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_RAW1_PARAM_ID               (0x8B000194u)

#define CapSense_1_BUTTON8_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].raw[2u])
#define CapSense_1_BUTTON8_SNS0_RAW2_OFFSET                 (406u)
#define CapSense_1_BUTTON8_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_RAW2_PARAM_ID               (0x87000196u)

#define CapSense_1_BUTTON8_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button8[0u].bsln[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN0_OFFSET                (408u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_PARAM_ID              (0x88000198u)

#define CapSense_1_BUTTON8_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button8[0u].bsln[1u])
#define CapSense_1_BUTTON8_SNS0_BSLN1_OFFSET                (410u)
#define CapSense_1_BUTTON8_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON8_SNS0_BSLN1_PARAM_ID              (0x8400019Au)

#define CapSense_1_BUTTON8_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button8[0u].bsln[2u])
#define CapSense_1_BUTTON8_SNS0_BSLN2_OFFSET                (412u)
#define CapSense_1_BUTTON8_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON8_SNS0_BSLN2_PARAM_ID              (0x8900019Cu)

#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button8[0u].bslnExt[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_OFFSET            (414u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_PARAM_ID          (0x4D00019Eu)

#define CapSense_1_BUTTON8_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button8[0u].bslnExt[1u])
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT1_OFFSET            (415u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT1_PARAM_ID          (0x4B00019Fu)

#define CapSense_1_BUTTON8_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button8[0u].bslnExt[2u])
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT2_OFFSET            (416u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT2_PARAM_ID          (0x4D0001A0u)

#define CapSense_1_BUTTON8_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].diff)
#define CapSense_1_BUTTON8_SNS0_DIFF_OFFSET                 (418u)
#define CapSense_1_BUTTON8_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_DIFF_PARAM_ID               (0x890001A2u)

#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button8[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (420u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0001A4u)

#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button8[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (421u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4A0001A5u)

#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button8[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (422u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x400001A6u)

#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button8[0u].idacComp[0u])
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_OFFSET           (423u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_PARAM_ID         (0x460001A7u)

#define CapSense_1_BUTTON8_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button8[0u].idacComp[1u])
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP1_OFFSET           (424u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP1_PARAM_ID         (0x4F0001A8u)

#define CapSense_1_BUTTON8_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button8[0u].idacComp[2u])
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP2_OFFSET           (425u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP2_PARAM_ID         (0x490001A9u)

#define CapSense_1_BUTTON9_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].raw[0u])
#define CapSense_1_BUTTON9_SNS0_RAW0_OFFSET                 (426u)
#define CapSense_1_BUTTON9_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_RAW0_PARAM_ID               (0x8B0001AAu)

#define CapSense_1_BUTTON9_SNS0_RAW1_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].raw[1u])
#define CapSense_1_BUTTON9_SNS0_RAW1_OFFSET                 (428u)
#define CapSense_1_BUTTON9_SNS0_RAW1_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_RAW1_PARAM_ID               (0x860001ACu)

#define CapSense_1_BUTTON9_SNS0_RAW2_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].raw[2u])
#define CapSense_1_BUTTON9_SNS0_RAW2_OFFSET                 (430u)
#define CapSense_1_BUTTON9_SNS0_RAW2_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_RAW2_PARAM_ID               (0x8A0001AEu)

#define CapSense_1_BUTTON9_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button9[0u].bsln[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN0_OFFSET                (432u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_PARAM_ID              (0x800001B0u)

#define CapSense_1_BUTTON9_SNS0_BSLN1_VALUE                 (CapSense_1_dsRam.snsList.button9[0u].bsln[1u])
#define CapSense_1_BUTTON9_SNS0_BSLN1_OFFSET                (434u)
#define CapSense_1_BUTTON9_SNS0_BSLN1_SIZE                  (2u)
#define CapSense_1_BUTTON9_SNS0_BSLN1_PARAM_ID              (0x8C0001B2u)

#define CapSense_1_BUTTON9_SNS0_BSLN2_VALUE                 (CapSense_1_dsRam.snsList.button9[0u].bsln[2u])
#define CapSense_1_BUTTON9_SNS0_BSLN2_OFFSET                (436u)
#define CapSense_1_BUTTON9_SNS0_BSLN2_SIZE                  (2u)
#define CapSense_1_BUTTON9_SNS0_BSLN2_PARAM_ID              (0x810001B4u)

#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button9[0u].bslnExt[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_OFFSET            (438u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_PARAM_ID          (0x450001B6u)

#define CapSense_1_BUTTON9_SNS0_BSLN_EXT1_VALUE             (CapSense_1_dsRam.snsList.button9[0u].bslnExt[1u])
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT1_OFFSET            (439u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT1_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT1_PARAM_ID          (0x430001B7u)

#define CapSense_1_BUTTON9_SNS0_BSLN_EXT2_VALUE             (CapSense_1_dsRam.snsList.button9[0u].bslnExt[2u])
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT2_OFFSET            (440u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT2_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT2_PARAM_ID          (0x4A0001B8u)

#define CapSense_1_BUTTON9_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].diff)
#define CapSense_1_BUTTON9_SNS0_DIFF_OFFSET                 (442u)
#define CapSense_1_BUTTON9_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_DIFF_PARAM_ID               (0x8E0001BAu)

#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button9[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (444u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B0001BCu)

#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT1_VALUE     (CapSense_1_dsRam.snsList.button9[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT1_OFFSET    (445u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT1_SIZE      (1u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID  (0x4D0001BDu)

#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT2_VALUE     (CapSense_1_dsRam.snsList.button9[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT2_OFFSET    (446u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT2_SIZE      (1u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID  (0x470001BEu)

#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button9[0u].idacComp[0u])
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_OFFSET           (447u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_PARAM_ID         (0x410001BFu)

#define CapSense_1_BUTTON9_SNS0_IDAC_COMP1_VALUE            (CapSense_1_dsRam.snsList.button9[0u].idacComp[1u])
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP1_OFFSET           (448u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP1_SIZE             (1u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP1_PARAM_ID         (0x4A0001C0u)

#define CapSense_1_BUTTON9_SNS0_IDAC_COMP2_VALUE            (CapSense_1_dsRam.snsList.button9[0u].idacComp[2u])
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP2_OFFSET           (449u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP2_SIZE             (1u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP2_PARAM_ID         (0x4C0001C1u)

#define CapSense_1_BUTTON10_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].raw[0u])
#define CapSense_1_BUTTON10_SNS0_RAW0_OFFSET                (450u)
#define CapSense_1_BUTTON10_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_RAW0_PARAM_ID              (0x8E0001C2u)

#define CapSense_1_BUTTON10_SNS0_RAW1_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].raw[1u])
#define CapSense_1_BUTTON10_SNS0_RAW1_OFFSET                (452u)
#define CapSense_1_BUTTON10_SNS0_RAW1_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_RAW1_PARAM_ID              (0x830001C4u)

#define CapSense_1_BUTTON10_SNS0_RAW2_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].raw[2u])
#define CapSense_1_BUTTON10_SNS0_RAW2_OFFSET                (454u)
#define CapSense_1_BUTTON10_SNS0_RAW2_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_RAW2_PARAM_ID              (0x8F0001C6u)

#define CapSense_1_BUTTON10_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button10[0u].bsln[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN0_OFFSET               (456u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_PARAM_ID             (0x800001C8u)

#define CapSense_1_BUTTON10_SNS0_BSLN1_VALUE                (CapSense_1_dsRam.snsList.button10[0u].bsln[1u])
#define CapSense_1_BUTTON10_SNS0_BSLN1_OFFSET               (458u)
#define CapSense_1_BUTTON10_SNS0_BSLN1_SIZE                 (2u)
#define CapSense_1_BUTTON10_SNS0_BSLN1_PARAM_ID             (0x8C0001CAu)

#define CapSense_1_BUTTON10_SNS0_BSLN2_VALUE                (CapSense_1_dsRam.snsList.button10[0u].bsln[2u])
#define CapSense_1_BUTTON10_SNS0_BSLN2_OFFSET               (460u)
#define CapSense_1_BUTTON10_SNS0_BSLN2_SIZE                 (2u)
#define CapSense_1_BUTTON10_SNS0_BSLN2_PARAM_ID             (0x810001CCu)

#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button10[0u].bslnExt[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_OFFSET           (462u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_PARAM_ID         (0x450001CEu)

#define CapSense_1_BUTTON10_SNS0_BSLN_EXT1_VALUE            (CapSense_1_dsRam.snsList.button10[0u].bslnExt[1u])
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT1_OFFSET           (463u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT1_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT1_PARAM_ID         (0x430001CFu)

#define CapSense_1_BUTTON10_SNS0_BSLN_EXT2_VALUE            (CapSense_1_dsRam.snsList.button10[0u].bslnExt[2u])
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT2_OFFSET           (464u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT2_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT2_PARAM_ID         (0x4F0001D0u)

#define CapSense_1_BUTTON10_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].diff)
#define CapSense_1_BUTTON10_SNS0_DIFF_OFFSET                (466u)
#define CapSense_1_BUTTON10_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_DIFF_PARAM_ID              (0x8B0001D2u)

#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button10[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (468u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0001D4u)

#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT1_VALUE    (CapSense_1_dsRam.snsList.button10[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT1_OFFSET   (469u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT1_SIZE     (1u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID (0x480001D5u)

#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT2_VALUE    (CapSense_1_dsRam.snsList.button10[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT2_OFFSET   (470u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT2_SIZE     (1u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID (0x420001D6u)

#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button10[0u].idacComp[0u])
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_OFFSET          (471u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_PARAM_ID        (0x440001D7u)

#define CapSense_1_BUTTON10_SNS0_IDAC_COMP1_VALUE           (CapSense_1_dsRam.snsList.button10[0u].idacComp[1u])
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP1_OFFSET          (472u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP1_SIZE            (1u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP1_PARAM_ID        (0x4D0001D8u)

#define CapSense_1_BUTTON10_SNS0_IDAC_COMP2_VALUE           (CapSense_1_dsRam.snsList.button10[0u].idacComp[2u])
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP2_OFFSET          (473u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP2_SIZE            (1u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP2_PARAM_ID        (0x4B0001D9u)

#define CapSense_1_BUTTON11_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].raw[0u])
#define CapSense_1_BUTTON11_SNS0_RAW0_OFFSET                (474u)
#define CapSense_1_BUTTON11_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_RAW0_PARAM_ID              (0x890001DAu)

#define CapSense_1_BUTTON11_SNS0_RAW1_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].raw[1u])
#define CapSense_1_BUTTON11_SNS0_RAW1_OFFSET                (476u)
#define CapSense_1_BUTTON11_SNS0_RAW1_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_RAW1_PARAM_ID              (0x840001DCu)

#define CapSense_1_BUTTON11_SNS0_RAW2_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].raw[2u])
#define CapSense_1_BUTTON11_SNS0_RAW2_OFFSET                (478u)
#define CapSense_1_BUTTON11_SNS0_RAW2_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_RAW2_PARAM_ID              (0x880001DEu)

#define CapSense_1_BUTTON11_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button11[0u].bsln[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN0_OFFSET               (480u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_PARAM_ID             (0x880001E0u)

#define CapSense_1_BUTTON11_SNS0_BSLN1_VALUE                (CapSense_1_dsRam.snsList.button11[0u].bsln[1u])
#define CapSense_1_BUTTON11_SNS0_BSLN1_OFFSET               (482u)
#define CapSense_1_BUTTON11_SNS0_BSLN1_SIZE                 (2u)
#define CapSense_1_BUTTON11_SNS0_BSLN1_PARAM_ID             (0x840001E2u)

#define CapSense_1_BUTTON11_SNS0_BSLN2_VALUE                (CapSense_1_dsRam.snsList.button11[0u].bsln[2u])
#define CapSense_1_BUTTON11_SNS0_BSLN2_OFFSET               (484u)
#define CapSense_1_BUTTON11_SNS0_BSLN2_SIZE                 (2u)
#define CapSense_1_BUTTON11_SNS0_BSLN2_PARAM_ID             (0x890001E4u)

#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button11[0u].bslnExt[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_OFFSET           (486u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_PARAM_ID         (0x4D0001E6u)

#define CapSense_1_BUTTON11_SNS0_BSLN_EXT1_VALUE            (CapSense_1_dsRam.snsList.button11[0u].bslnExt[1u])
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT1_OFFSET           (487u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT1_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT1_PARAM_ID         (0x4B0001E7u)

#define CapSense_1_BUTTON11_SNS0_BSLN_EXT2_VALUE            (CapSense_1_dsRam.snsList.button11[0u].bslnExt[2u])
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT2_OFFSET           (488u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT2_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT2_PARAM_ID         (0x420001E8u)

#define CapSense_1_BUTTON11_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].diff)
#define CapSense_1_BUTTON11_SNS0_DIFF_OFFSET                (490u)
#define CapSense_1_BUTTON11_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_DIFF_PARAM_ID              (0x860001EAu)

#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button11[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (492u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x430001ECu)

#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT1_VALUE    (CapSense_1_dsRam.snsList.button11[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT1_OFFSET   (493u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT1_SIZE     (1u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT1_PARAM_ID (0x450001EDu)

#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT2_VALUE    (CapSense_1_dsRam.snsList.button11[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT2_OFFSET   (494u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT2_SIZE     (1u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT2_PARAM_ID (0x4F0001EEu)

#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button11[0u].idacComp[0u])
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_OFFSET          (495u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_PARAM_ID        (0x490001EFu)

#define CapSense_1_BUTTON11_SNS0_IDAC_COMP1_VALUE           (CapSense_1_dsRam.snsList.button11[0u].idacComp[1u])
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP1_OFFSET          (496u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP1_SIZE            (1u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP1_PARAM_ID        (0x450001F0u)

#define CapSense_1_BUTTON11_SNS0_IDAC_COMP2_VALUE           (CapSense_1_dsRam.snsList.button11[0u].idacComp[2u])
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP2_OFFSET          (497u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP2_SIZE            (1u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP2_PARAM_ID        (0x430001F1u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (498u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x620001F2u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (499u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x640001F3u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (500u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x8C0001F4u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (502u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x800001F6u)

#define CapSense_1_SNR_TEST_RAW_COUNT1_VALUE                (CapSense_1_dsRam.snrTestRawCount[1u])
#define CapSense_1_SNR_TEST_RAW_COUNT1_OFFSET               (504u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_PARAM_ID             (0x8F0001F8u)

#define CapSense_1_SNR_TEST_RAW_COUNT2_VALUE                (CapSense_1_dsRam.snrTestRawCount[2u])
#define CapSense_1_SNR_TEST_RAW_COUNT2_OFFSET               (506u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_PARAM_ID             (0x830001FAu)


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

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (140u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xDE05008Cu)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (144u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xD8050090u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (148u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xD9050094u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (152u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xDA050098u)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (156u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xDB05009Cu)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (160u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xD70500A0u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (164u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x990500A4u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (166u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5D0500A6u)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (167u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5B0500A7u)

#define CapSense_1_BUTTON6_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_OFFSET             (168u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_PARAM_ID           (0xD00600A8u)

#define CapSense_1_BUTTON6_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON6_PTR2WD_RAM_OFFSET                (172u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_PARAM_ID              (0xD10600ACu)

#define CapSense_1_BUTTON6_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_OFFSET               (176u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_PARAM_ID             (0xD70600B0u)

#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_OFFSET          (180u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID        (0xD60600B4u)

#define CapSense_1_BUTTON6_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_OFFSET              (184u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_PARAM_ID            (0xD50600B8u)

#define CapSense_1_BUTTON6_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON6_STATIC_CONFIG_OFFSET             (188u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_PARAM_ID           (0xD40600BCu)

#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_OFFSET             (192u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_PARAM_ID           (0x9A0600C0u)

#define CapSense_1_BUTTON6_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON6_TYPE_OFFSET                      (194u)
#define CapSense_1_BUTTON6_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON6_TYPE_PARAM_ID                    (0x5E0600C2u)

#define CapSense_1_BUTTON6_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON6_NUM_COLS_OFFSET                  (195u)
#define CapSense_1_BUTTON6_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON6_NUM_COLS_PARAM_ID                (0x580600C3u)

#define CapSense_1_BUTTON7_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_OFFSET             (196u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_PARAM_ID           (0xD70700C4u)

#define CapSense_1_BUTTON7_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_1_BUTTON7_PTR2WD_RAM_OFFSET                (200u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_PARAM_ID              (0xD40700C8u)

#define CapSense_1_BUTTON7_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_OFFSET               (204u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_PARAM_ID             (0xD50700CCu)

#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_OFFSET          (208u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID        (0xD30700D0u)

#define CapSense_1_BUTTON7_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_OFFSET              (212u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_PARAM_ID            (0xD20700D4u)

#define CapSense_1_BUTTON7_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_1_BUTTON7_STATIC_CONFIG_OFFSET             (216u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_PARAM_ID           (0xD10700D8u)

#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_OFFSET             (220u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_PARAM_ID           (0x9F0700DCu)

#define CapSense_1_BUTTON7_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_1_BUTTON7_TYPE_OFFSET                      (222u)
#define CapSense_1_BUTTON7_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON7_TYPE_PARAM_ID                    (0x5B0700DEu)

#define CapSense_1_BUTTON7_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[7].numCols)
#define CapSense_1_BUTTON7_NUM_COLS_OFFSET                  (223u)
#define CapSense_1_BUTTON7_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON7_NUM_COLS_PARAM_ID                (0x5D0700DFu)

#define CapSense_1_BUTTON8_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsFlash)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_OFFSET             (224u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_PARAM_ID           (0xD40800E0u)

#define CapSense_1_BUTTON8_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[8].ptr2WdgtRam)
#define CapSense_1_BUTTON8_PTR2WD_RAM_OFFSET                (228u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_PARAM_ID              (0xD50800E4u)

#define CapSense_1_BUTTON8_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsRam)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_OFFSET               (232u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_PARAM_ID             (0xD60800E8u)

#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[8].ptr2FltrHistory)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_OFFSET          (236u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_PARAM_ID        (0xD70800ECu)

#define CapSense_1_BUTTON8_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[8].ptr2DebounceArr)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_OFFSET              (240u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_PARAM_ID            (0xD10800F0u)

#define CapSense_1_BUTTON8_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[8].staticConfig)
#define CapSense_1_BUTTON8_STATIC_CONFIG_OFFSET             (244u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_PARAM_ID           (0xD00800F4u)

#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[8].totalNumSns)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_OFFSET             (248u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_PARAM_ID           (0x9C0800F8u)

#define CapSense_1_BUTTON8_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[8].wdgtType)
#define CapSense_1_BUTTON8_TYPE_OFFSET                      (250u)
#define CapSense_1_BUTTON8_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON8_TYPE_PARAM_ID                    (0x580800FAu)

#define CapSense_1_BUTTON8_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[8].numCols)
#define CapSense_1_BUTTON8_NUM_COLS_OFFSET                  (251u)
#define CapSense_1_BUTTON8_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON8_NUM_COLS_PARAM_ID                (0x5E0800FBu)

#define CapSense_1_BUTTON9_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsFlash)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_OFFSET             (252u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_PARAM_ID           (0xD10900FCu)

#define CapSense_1_BUTTON9_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[9].ptr2WdgtRam)
#define CapSense_1_BUTTON9_PTR2WD_RAM_OFFSET                (256u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_PARAM_ID              (0xD8090100u)

#define CapSense_1_BUTTON9_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsRam)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_OFFSET               (260u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_PARAM_ID             (0xD9090104u)

#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[9].ptr2FltrHistory)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_OFFSET          (264u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_PARAM_ID        (0xDA090108u)

#define CapSense_1_BUTTON9_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[9].ptr2DebounceArr)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_OFFSET              (268u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_PARAM_ID            (0xDB09010Cu)

#define CapSense_1_BUTTON9_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[9].staticConfig)
#define CapSense_1_BUTTON9_STATIC_CONFIG_OFFSET             (272u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_PARAM_ID           (0xDD090110u)

#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[9].totalNumSns)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_OFFSET             (276u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_PARAM_ID           (0x93090114u)

#define CapSense_1_BUTTON9_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[9].wdgtType)
#define CapSense_1_BUTTON9_TYPE_OFFSET                      (278u)
#define CapSense_1_BUTTON9_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON9_TYPE_PARAM_ID                    (0x57090116u)

#define CapSense_1_BUTTON9_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[9].numCols)
#define CapSense_1_BUTTON9_NUM_COLS_OFFSET                  (279u)
#define CapSense_1_BUTTON9_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON9_NUM_COLS_PARAM_ID                (0x51090117u)

#define CapSense_1_BUTTON10_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsFlash)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_OFFSET            (280u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_PARAM_ID          (0xDA0A0118u)

#define CapSense_1_BUTTON10_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[10].ptr2WdgtRam)
#define CapSense_1_BUTTON10_PTR2WD_RAM_OFFSET               (284u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_PARAM_ID             (0xDB0A011Cu)

#define CapSense_1_BUTTON10_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsRam)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_OFFSET              (288u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_PARAM_ID            (0xD70A0120u)

#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[10].ptr2FltrHistory)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_OFFSET         (292u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_PARAM_ID       (0xD60A0124u)

#define CapSense_1_BUTTON10_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[10].ptr2DebounceArr)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_OFFSET             (296u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_PARAM_ID           (0xD50A0128u)

#define CapSense_1_BUTTON10_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[10].staticConfig)
#define CapSense_1_BUTTON10_STATIC_CONFIG_OFFSET            (300u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_PARAM_ID          (0xD40A012Cu)

#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[10].totalNumSns)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_OFFSET            (304u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_PARAM_ID          (0x9D0A0130u)

#define CapSense_1_BUTTON10_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[10].wdgtType)
#define CapSense_1_BUTTON10_TYPE_OFFSET                     (306u)
#define CapSense_1_BUTTON10_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON10_TYPE_PARAM_ID                   (0x590A0132u)

#define CapSense_1_BUTTON10_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[10].numCols)
#define CapSense_1_BUTTON10_NUM_COLS_OFFSET                 (307u)
#define CapSense_1_BUTTON10_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON10_NUM_COLS_PARAM_ID               (0x5F0A0133u)

#define CapSense_1_BUTTON11_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsFlash)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_OFFSET            (308u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_PARAM_ID          (0xD00B0134u)

#define CapSense_1_BUTTON11_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[11].ptr2WdgtRam)
#define CapSense_1_BUTTON11_PTR2WD_RAM_OFFSET               (312u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_PARAM_ID             (0xD30B0138u)

#define CapSense_1_BUTTON11_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsRam)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_OFFSET              (316u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_PARAM_ID            (0xD20B013Cu)

#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[11].ptr2FltrHistory)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_OFFSET         (320u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_PARAM_ID       (0xD30B0140u)

#define CapSense_1_BUTTON11_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[11].ptr2DebounceArr)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_OFFSET             (324u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_PARAM_ID           (0xD20B0144u)

#define CapSense_1_BUTTON11_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[11].staticConfig)
#define CapSense_1_BUTTON11_STATIC_CONFIG_OFFSET            (328u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_PARAM_ID          (0xD10B0148u)

#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[11].totalNumSns)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_OFFSET            (332u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_PARAM_ID          (0x9F0B014Cu)

#define CapSense_1_BUTTON11_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[11].wdgtType)
#define CapSense_1_BUTTON11_TYPE_OFFSET                     (334u)
#define CapSense_1_BUTTON11_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON11_TYPE_PARAM_ID                   (0x5B0B014Eu)

#define CapSense_1_BUTTON11_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[11].numCols)
#define CapSense_1_BUTTON11_NUM_COLS_OFFSET                 (335u)
#define CapSense_1_BUTTON11_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON11_NUM_COLS_PARAM_ID               (0x5D0B014Fu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
