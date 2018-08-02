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

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (30u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xAB80001Eu)

#define CapSense_1_MOD_CSX_CLK_VALUE                        (CapSense_1_dsRam.modCsxClk)
#define CapSense_1_MOD_CSX_CLK_OFFSET                       (32u)
#define CapSense_1_MOD_CSX_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSX_CLK_PARAM_ID                     (0x63800020u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (34u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0xA7800022u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (36u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0xAA800024u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (38u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x6E800026u)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (39u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x68800027u)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (40u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x61800028u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (41u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x67800029u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (42u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x6D80002Au)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (44u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0xA880002Cu)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (46u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4780002Eu)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (48u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0xAD810030u)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (50u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0xA1810032u)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (52u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x64810034u)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (53u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x62810035u)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (54u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x68810036u)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (55u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x6E810037u)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (56u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x67810038u)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (58u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0xA381003Au)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (60u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x4D81003Cu)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (62u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0xA782003Eu)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (64u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0xAA820040u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (66u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x6E820042u)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (67u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x68820043u)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (68u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x63820044u)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (69u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x65820045u)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (70u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x6F820046u)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (72u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0xA8820048u)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (74u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x4782004Au)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (76u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0xAA83004Cu)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (78u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0xA683004Eu)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (80u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x64830050u)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (81u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x62830051u)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (82u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x68830052u)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (83u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x6E830053u)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (84u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x65830054u)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (86u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0xA1830056u)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (88u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x4D830058u)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (90u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0xAB84005Au)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (92u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0xA684005Cu)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (94u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x6284005Eu)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (95u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x6484005Fu)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (96u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x62840060u)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (97u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x64840061u)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (98u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x6E840062u)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (100u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0xAB840064u)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (102u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x44840066u)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (104u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0xAB850068u)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (106u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0xA785006Au)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (108u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x6285006Cu)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (109u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x6485006Du)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (110u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x6E85006Eu)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (111u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x6885006Fu)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (112u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x64850070u)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (114u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0xA0850072u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (116u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x4E850074u)

#define CapSense_1_BUTTON0_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_RX0_RAW0_OFFSET                  (118u)
#define CapSense_1_BUTTON0_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON0_RX0_RAW0_PARAM_ID                (0x88000076u)

#define CapSense_1_BUTTON0_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button0[0u].raw[1u])
#define CapSense_1_BUTTON0_RX0_RAW1_OFFSET                  (120u)
#define CapSense_1_BUTTON0_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON0_RX0_RAW1_PARAM_ID                (0x87000078u)

#define CapSense_1_BUTTON0_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button0[0u].raw[2u])
#define CapSense_1_BUTTON0_RX0_RAW2_OFFSET                  (122u)
#define CapSense_1_BUTTON0_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON0_RX0_RAW2_PARAM_ID                (0x8B00007Au)

#define CapSense_1_BUTTON0_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_RX0_BSLN0_OFFSET                 (124u)
#define CapSense_1_BUTTON0_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON0_RX0_BSLN0_PARAM_ID               (0x8600007Cu)

#define CapSense_1_BUTTON0_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].bsln[1u])
#define CapSense_1_BUTTON0_RX0_BSLN1_OFFSET                 (126u)
#define CapSense_1_BUTTON0_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON0_RX0_BSLN1_PARAM_ID               (0x8A00007Eu)

#define CapSense_1_BUTTON0_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].bsln[2u])
#define CapSense_1_BUTTON0_RX0_BSLN2_OFFSET                 (128u)
#define CapSense_1_BUTTON0_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON0_RX0_BSLN2_PARAM_ID               (0x84000080u)

#define CapSense_1_BUTTON0_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_RX0_BSLN_EXT0_OFFSET             (130u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT0_PARAM_ID           (0x40000082u)

#define CapSense_1_BUTTON0_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button0[0u].bslnExt[1u])
#define CapSense_1_BUTTON0_RX0_BSLN_EXT1_OFFSET             (131u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT1_PARAM_ID           (0x46000083u)

#define CapSense_1_BUTTON0_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button0[0u].bslnExt[2u])
#define CapSense_1_BUTTON0_RX0_BSLN_EXT2_OFFSET             (132u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON0_RX0_BSLN_EXT2_PARAM_ID           (0x4D000084u)

#define CapSense_1_BUTTON0_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_RX0_DIFF_OFFSET                  (134u)
#define CapSense_1_BUTTON0_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON0_RX0_DIFF_PARAM_ID                (0x89000086u)

#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT0_OFFSET     (136u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4E000088u)

#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT1_OFFSET     (137u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x48000089u)

#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT2_OFFSET     (138u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON0_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x4200008Au)

#define CapSense_1_BUTTON0_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_RX0_IDAC_COMP0_OFFSET            (139u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP0_PARAM_ID          (0x4400008Bu)

#define CapSense_1_BUTTON0_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button0[0u].idacComp[1u])
#define CapSense_1_BUTTON0_RX0_IDAC_COMP1_OFFSET            (140u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP1_PARAM_ID          (0x4F00008Cu)

#define CapSense_1_BUTTON0_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button0[0u].idacComp[2u])
#define CapSense_1_BUTTON0_RX0_IDAC_COMP2_OFFSET            (141u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON0_RX0_IDAC_COMP2_PARAM_ID          (0x4900008Du)

#define CapSense_1_BUTTON1_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_RX0_RAW0_OFFSET                  (142u)
#define CapSense_1_BUTTON1_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON1_RX0_RAW0_PARAM_ID                (0x8B00008Eu)

#define CapSense_1_BUTTON1_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button1[0u].raw[1u])
#define CapSense_1_BUTTON1_RX0_RAW1_OFFSET                  (144u)
#define CapSense_1_BUTTON1_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON1_RX0_RAW1_PARAM_ID                (0x81000090u)

#define CapSense_1_BUTTON1_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button1[0u].raw[2u])
#define CapSense_1_BUTTON1_RX0_RAW2_OFFSET                  (146u)
#define CapSense_1_BUTTON1_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON1_RX0_RAW2_PARAM_ID                (0x8D000092u)

#define CapSense_1_BUTTON1_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_RX0_BSLN0_OFFSET                 (148u)
#define CapSense_1_BUTTON1_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON1_RX0_BSLN0_PARAM_ID               (0x80000094u)

#define CapSense_1_BUTTON1_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].bsln[1u])
#define CapSense_1_BUTTON1_RX0_BSLN1_OFFSET                 (150u)
#define CapSense_1_BUTTON1_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON1_RX0_BSLN1_PARAM_ID               (0x8C000096u)

#define CapSense_1_BUTTON1_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].bsln[2u])
#define CapSense_1_BUTTON1_RX0_BSLN2_OFFSET                 (152u)
#define CapSense_1_BUTTON1_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON1_RX0_BSLN2_PARAM_ID               (0x83000098u)

#define CapSense_1_BUTTON1_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_RX0_BSLN_EXT0_OFFSET             (154u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT0_PARAM_ID           (0x4700009Au)

#define CapSense_1_BUTTON1_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button1[0u].bslnExt[1u])
#define CapSense_1_BUTTON1_RX0_BSLN_EXT1_OFFSET             (155u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT1_PARAM_ID           (0x4100009Bu)

#define CapSense_1_BUTTON1_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button1[0u].bslnExt[2u])
#define CapSense_1_BUTTON1_RX0_BSLN_EXT2_OFFSET             (156u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON1_RX0_BSLN_EXT2_PARAM_ID           (0x4A00009Cu)

#define CapSense_1_BUTTON1_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_RX0_DIFF_OFFSET                  (158u)
#define CapSense_1_BUTTON1_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON1_RX0_DIFF_PARAM_ID                (0x8E00009Eu)

#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT0_OFFSET     (160u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x460000A0u)

#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT1_OFFSET     (161u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x400000A1u)

#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT2_OFFSET     (162u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON1_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x4A0000A2u)

#define CapSense_1_BUTTON1_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_RX0_IDAC_COMP0_OFFSET            (163u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP0_PARAM_ID          (0x4C0000A3u)

#define CapSense_1_BUTTON1_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button1[0u].idacComp[1u])
#define CapSense_1_BUTTON1_RX0_IDAC_COMP1_OFFSET            (164u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP1_PARAM_ID          (0x470000A4u)

#define CapSense_1_BUTTON1_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button1[0u].idacComp[2u])
#define CapSense_1_BUTTON1_RX0_IDAC_COMP2_OFFSET            (165u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON1_RX0_IDAC_COMP2_PARAM_ID          (0x410000A5u)

#define CapSense_1_BUTTON2_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_RX0_RAW0_OFFSET                  (166u)
#define CapSense_1_BUTTON2_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON2_RX0_RAW0_PARAM_ID                (0x830000A6u)

#define CapSense_1_BUTTON2_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button2[0u].raw[1u])
#define CapSense_1_BUTTON2_RX0_RAW1_OFFSET                  (168u)
#define CapSense_1_BUTTON2_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON2_RX0_RAW1_PARAM_ID                (0x8C0000A8u)

#define CapSense_1_BUTTON2_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button2[0u].raw[2u])
#define CapSense_1_BUTTON2_RX0_RAW2_OFFSET                  (170u)
#define CapSense_1_BUTTON2_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON2_RX0_RAW2_PARAM_ID                (0x800000AAu)

#define CapSense_1_BUTTON2_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_RX0_BSLN0_OFFSET                 (172u)
#define CapSense_1_BUTTON2_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON2_RX0_BSLN0_PARAM_ID               (0x8D0000ACu)

#define CapSense_1_BUTTON2_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].bsln[1u])
#define CapSense_1_BUTTON2_RX0_BSLN1_OFFSET                 (174u)
#define CapSense_1_BUTTON2_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON2_RX0_BSLN1_PARAM_ID               (0x810000AEu)

#define CapSense_1_BUTTON2_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].bsln[2u])
#define CapSense_1_BUTTON2_RX0_BSLN2_OFFSET                 (176u)
#define CapSense_1_BUTTON2_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON2_RX0_BSLN2_PARAM_ID               (0x8B0000B0u)

#define CapSense_1_BUTTON2_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_RX0_BSLN_EXT0_OFFSET             (178u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT0_PARAM_ID           (0x4F0000B2u)

#define CapSense_1_BUTTON2_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button2[0u].bslnExt[1u])
#define CapSense_1_BUTTON2_RX0_BSLN_EXT1_OFFSET             (179u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT1_PARAM_ID           (0x490000B3u)

#define CapSense_1_BUTTON2_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button2[0u].bslnExt[2u])
#define CapSense_1_BUTTON2_RX0_BSLN_EXT2_OFFSET             (180u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON2_RX0_BSLN_EXT2_PARAM_ID           (0x420000B4u)

#define CapSense_1_BUTTON2_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_RX0_DIFF_OFFSET                  (182u)
#define CapSense_1_BUTTON2_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON2_RX0_DIFF_PARAM_ID                (0x860000B6u)

#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT0_OFFSET     (184u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x410000B8u)

#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT1_OFFSET     (185u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x470000B9u)

#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT2_OFFSET     (186u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON2_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x4D0000BAu)

#define CapSense_1_BUTTON2_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_RX0_IDAC_COMP0_OFFSET            (187u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP0_PARAM_ID          (0x4B0000BBu)

#define CapSense_1_BUTTON2_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button2[0u].idacComp[1u])
#define CapSense_1_BUTTON2_RX0_IDAC_COMP1_OFFSET            (188u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP1_PARAM_ID          (0x400000BCu)

#define CapSense_1_BUTTON2_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button2[0u].idacComp[2u])
#define CapSense_1_BUTTON2_RX0_IDAC_COMP2_OFFSET            (189u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON2_RX0_IDAC_COMP2_PARAM_ID          (0x460000BDu)

#define CapSense_1_BUTTON3_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_RX0_RAW0_OFFSET                  (190u)
#define CapSense_1_BUTTON3_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON3_RX0_RAW0_PARAM_ID                (0x840000BEu)

#define CapSense_1_BUTTON3_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button3[0u].raw[1u])
#define CapSense_1_BUTTON3_RX0_RAW1_OFFSET                  (192u)
#define CapSense_1_BUTTON3_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON3_RX0_RAW1_PARAM_ID                (0x890000C0u)

#define CapSense_1_BUTTON3_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button3[0u].raw[2u])
#define CapSense_1_BUTTON3_RX0_RAW2_OFFSET                  (194u)
#define CapSense_1_BUTTON3_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON3_RX0_RAW2_PARAM_ID                (0x850000C2u)

#define CapSense_1_BUTTON3_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_RX0_BSLN0_OFFSET                 (196u)
#define CapSense_1_BUTTON3_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON3_RX0_BSLN0_PARAM_ID               (0x880000C4u)

#define CapSense_1_BUTTON3_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].bsln[1u])
#define CapSense_1_BUTTON3_RX0_BSLN1_OFFSET                 (198u)
#define CapSense_1_BUTTON3_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON3_RX0_BSLN1_PARAM_ID               (0x840000C6u)

#define CapSense_1_BUTTON3_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].bsln[2u])
#define CapSense_1_BUTTON3_RX0_BSLN2_OFFSET                 (200u)
#define CapSense_1_BUTTON3_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON3_RX0_BSLN2_PARAM_ID               (0x8B0000C8u)

#define CapSense_1_BUTTON3_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_RX0_BSLN_EXT0_OFFSET             (202u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT0_PARAM_ID           (0x4F0000CAu)

#define CapSense_1_BUTTON3_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button3[0u].bslnExt[1u])
#define CapSense_1_BUTTON3_RX0_BSLN_EXT1_OFFSET             (203u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT1_PARAM_ID           (0x490000CBu)

#define CapSense_1_BUTTON3_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button3[0u].bslnExt[2u])
#define CapSense_1_BUTTON3_RX0_BSLN_EXT2_OFFSET             (204u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON3_RX0_BSLN_EXT2_PARAM_ID           (0x420000CCu)

#define CapSense_1_BUTTON3_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_RX0_DIFF_OFFSET                  (206u)
#define CapSense_1_BUTTON3_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON3_RX0_DIFF_PARAM_ID                (0x860000CEu)

#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT0_OFFSET     (208u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x440000D0u)

#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT1_OFFSET     (209u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x420000D1u)

#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT2_OFFSET     (210u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON3_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x480000D2u)

#define CapSense_1_BUTTON3_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_RX0_IDAC_COMP0_OFFSET            (211u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP0_PARAM_ID          (0x4E0000D3u)

#define CapSense_1_BUTTON3_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button3[0u].idacComp[1u])
#define CapSense_1_BUTTON3_RX0_IDAC_COMP1_OFFSET            (212u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP1_PARAM_ID          (0x450000D4u)

#define CapSense_1_BUTTON3_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button3[0u].idacComp[2u])
#define CapSense_1_BUTTON3_RX0_IDAC_COMP2_OFFSET            (213u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON3_RX0_IDAC_COMP2_PARAM_ID          (0x430000D5u)

#define CapSense_1_BUTTON4_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_RX0_RAW0_OFFSET                  (214u)
#define CapSense_1_BUTTON4_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON4_RX0_RAW0_PARAM_ID                (0x810000D6u)

#define CapSense_1_BUTTON4_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button4[0u].raw[1u])
#define CapSense_1_BUTTON4_RX0_RAW1_OFFSET                  (216u)
#define CapSense_1_BUTTON4_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON4_RX0_RAW1_PARAM_ID                (0x8E0000D8u)

#define CapSense_1_BUTTON4_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button4[0u].raw[2u])
#define CapSense_1_BUTTON4_RX0_RAW2_OFFSET                  (218u)
#define CapSense_1_BUTTON4_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON4_RX0_RAW2_PARAM_ID                (0x820000DAu)

#define CapSense_1_BUTTON4_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_RX0_BSLN0_OFFSET                 (220u)
#define CapSense_1_BUTTON4_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON4_RX0_BSLN0_PARAM_ID               (0x8F0000DCu)

#define CapSense_1_BUTTON4_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].bsln[1u])
#define CapSense_1_BUTTON4_RX0_BSLN1_OFFSET                 (222u)
#define CapSense_1_BUTTON4_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON4_RX0_BSLN1_PARAM_ID               (0x830000DEu)

#define CapSense_1_BUTTON4_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].bsln[2u])
#define CapSense_1_BUTTON4_RX0_BSLN2_OFFSET                 (224u)
#define CapSense_1_BUTTON4_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON4_RX0_BSLN2_PARAM_ID               (0x830000E0u)

#define CapSense_1_BUTTON4_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_RX0_BSLN_EXT0_OFFSET             (226u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT0_PARAM_ID           (0x470000E2u)

#define CapSense_1_BUTTON4_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button4[0u].bslnExt[1u])
#define CapSense_1_BUTTON4_RX0_BSLN_EXT1_OFFSET             (227u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT1_PARAM_ID           (0x410000E3u)

#define CapSense_1_BUTTON4_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button4[0u].bslnExt[2u])
#define CapSense_1_BUTTON4_RX0_BSLN_EXT2_OFFSET             (228u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON4_RX0_BSLN_EXT2_PARAM_ID           (0x4A0000E4u)

#define CapSense_1_BUTTON4_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_RX0_DIFF_OFFSET                  (230u)
#define CapSense_1_BUTTON4_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON4_RX0_DIFF_PARAM_ID                (0x8E0000E6u)

#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT0_OFFSET     (232u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x490000E8u)

#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT1_OFFSET     (233u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x4F0000E9u)

#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT2_OFFSET     (234u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON4_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x450000EAu)

#define CapSense_1_BUTTON4_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_RX0_IDAC_COMP0_OFFSET            (235u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP0_PARAM_ID          (0x430000EBu)

#define CapSense_1_BUTTON4_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button4[0u].idacComp[1u])
#define CapSense_1_BUTTON4_RX0_IDAC_COMP1_OFFSET            (236u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP1_PARAM_ID          (0x480000ECu)

#define CapSense_1_BUTTON4_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button4[0u].idacComp[2u])
#define CapSense_1_BUTTON4_RX0_IDAC_COMP2_OFFSET            (237u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON4_RX0_IDAC_COMP2_PARAM_ID          (0x4E0000EDu)

#define CapSense_1_BUTTON5_RX0_RAW0_VALUE                   (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_RX0_RAW0_OFFSET                  (238u)
#define CapSense_1_BUTTON5_RX0_RAW0_SIZE                    (2u)
#define CapSense_1_BUTTON5_RX0_RAW0_PARAM_ID                (0x8C0000EEu)

#define CapSense_1_BUTTON5_RX0_RAW1_VALUE                   (CapSense_1_dsRam.snsList.button5[0u].raw[1u])
#define CapSense_1_BUTTON5_RX0_RAW1_OFFSET                  (240u)
#define CapSense_1_BUTTON5_RX0_RAW1_SIZE                    (2u)
#define CapSense_1_BUTTON5_RX0_RAW1_PARAM_ID                (0x860000F0u)

#define CapSense_1_BUTTON5_RX0_RAW2_VALUE                   (CapSense_1_dsRam.snsList.button5[0u].raw[2u])
#define CapSense_1_BUTTON5_RX0_RAW2_OFFSET                  (242u)
#define CapSense_1_BUTTON5_RX0_RAW2_SIZE                    (2u)
#define CapSense_1_BUTTON5_RX0_RAW2_PARAM_ID                (0x8A0000F2u)

#define CapSense_1_BUTTON5_RX0_BSLN0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_RX0_BSLN0_OFFSET                 (244u)
#define CapSense_1_BUTTON5_RX0_BSLN0_SIZE                   (2u)
#define CapSense_1_BUTTON5_RX0_BSLN0_PARAM_ID               (0x870000F4u)

#define CapSense_1_BUTTON5_RX0_BSLN1_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].bsln[1u])
#define CapSense_1_BUTTON5_RX0_BSLN1_OFFSET                 (246u)
#define CapSense_1_BUTTON5_RX0_BSLN1_SIZE                   (2u)
#define CapSense_1_BUTTON5_RX0_BSLN1_PARAM_ID               (0x8B0000F6u)

#define CapSense_1_BUTTON5_RX0_BSLN2_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].bsln[2u])
#define CapSense_1_BUTTON5_RX0_BSLN2_OFFSET                 (248u)
#define CapSense_1_BUTTON5_RX0_BSLN2_SIZE                   (2u)
#define CapSense_1_BUTTON5_RX0_BSLN2_PARAM_ID               (0x840000F8u)

#define CapSense_1_BUTTON5_RX0_BSLN_EXT0_VALUE              (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_RX0_BSLN_EXT0_OFFSET             (250u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT0_SIZE               (1u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT0_PARAM_ID           (0x400000FAu)

#define CapSense_1_BUTTON5_RX0_BSLN_EXT1_VALUE              (CapSense_1_dsRam.snsList.button5[0u].bslnExt[1u])
#define CapSense_1_BUTTON5_RX0_BSLN_EXT1_OFFSET             (251u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT1_SIZE               (1u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT1_PARAM_ID           (0x460000FBu)

#define CapSense_1_BUTTON5_RX0_BSLN_EXT2_VALUE              (CapSense_1_dsRam.snsList.button5[0u].bslnExt[2u])
#define CapSense_1_BUTTON5_RX0_BSLN_EXT2_OFFSET             (252u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT2_SIZE               (1u)
#define CapSense_1_BUTTON5_RX0_BSLN_EXT2_PARAM_ID           (0x4D0000FCu)

#define CapSense_1_BUTTON5_RX0_DIFF_VALUE                   (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_RX0_DIFF_OFFSET                  (254u)
#define CapSense_1_BUTTON5_RX0_DIFF_SIZE                    (2u)
#define CapSense_1_BUTTON5_RX0_DIFF_PARAM_ID                (0x890000FEu)

#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT0_OFFSET     (256u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x44000100u)

#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT1_VALUE      (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[1u])
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT1_OFFSET     (257u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT1_SIZE       (1u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT1_PARAM_ID   (0x42000101u)

#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT2_VALUE      (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[2u])
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT2_OFFSET     (258u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT2_SIZE       (1u)
#define CapSense_1_BUTTON5_RX0_NEG_BSLN_RST_CNT2_PARAM_ID   (0x48000102u)

#define CapSense_1_BUTTON5_RX0_IDAC_COMP0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_RX0_IDAC_COMP0_OFFSET            (259u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP0_SIZE              (1u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP0_PARAM_ID          (0x4E000103u)

#define CapSense_1_BUTTON5_RX0_IDAC_COMP1_VALUE             (CapSense_1_dsRam.snsList.button5[0u].idacComp[1u])
#define CapSense_1_BUTTON5_RX0_IDAC_COMP1_OFFSET            (260u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP1_SIZE              (1u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP1_PARAM_ID          (0x45000104u)

#define CapSense_1_BUTTON5_RX0_IDAC_COMP2_VALUE             (CapSense_1_dsRam.snsList.button5[0u].idacComp[2u])
#define CapSense_1_BUTTON5_RX0_IDAC_COMP2_OFFSET            (261u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP2_SIZE              (1u)
#define CapSense_1_BUTTON5_RX0_IDAC_COMP2_PARAM_ID          (0x43000105u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (262u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x62000106u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (263u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x64000107u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (264u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x8E000108u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (266u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8200010Au)

#define CapSense_1_SNR_TEST_RAW_COUNT1_VALUE                (CapSense_1_dsRam.snrTestRawCount[1u])
#define CapSense_1_SNR_TEST_RAW_COUNT1_OFFSET               (268u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT1_PARAM_ID             (0x8F00010Cu)

#define CapSense_1_SNR_TEST_RAW_COUNT2_VALUE                (CapSense_1_dsRam.snrTestRawCount[2u])
#define CapSense_1_SNR_TEST_RAW_COUNT2_OFFSET               (270u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT2_PARAM_ID             (0x8300010Eu)


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

#define CapSense_1_BUTTON0_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numRows)
#define CapSense_1_BUTTON0_NUM_ROWS_OFFSET                  (28u)
#define CapSense_1_BUTTON0_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_ROWS_PARAM_ID                (0x5000001Cu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (32u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xD8010020u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (36u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xD9010024u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (40u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDA010028u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (44u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDB01002Cu)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (48u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDD010030u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (52u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDC010034u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (56u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x90010038u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (58u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5401003Au)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (59u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5201003Bu)

#define CapSense_1_BUTTON1_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numRows)
#define CapSense_1_BUTTON1_NUM_ROWS_OFFSET                  (60u)
#define CapSense_1_BUTTON1_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_ROWS_PARAM_ID                (0x5901003Cu)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (64u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xDA020040u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (68u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDB020044u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (72u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xD8020048u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (76u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xD902004Cu)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (80u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDF020050u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (84u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xDE020054u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (88u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x92020058u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (90u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x5602005Au)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (91u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x5002005Bu)

#define CapSense_1_BUTTON2_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numRows)
#define CapSense_1_BUTTON2_NUM_ROWS_OFFSET                  (92u)
#define CapSense_1_BUTTON2_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_ROWS_PARAM_ID                (0x5B02005Cu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (96u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD3030060u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (100u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD2030064u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (104u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD1030068u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (108u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD003006Cu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (112u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD6030070u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (116u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD7030074u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (120u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9B030078u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (122u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5F03007Au)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (123u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x5903007Bu)

#define CapSense_1_BUTTON3_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numRows)
#define CapSense_1_BUTTON3_NUM_ROWS_OFFSET                  (124u)
#define CapSense_1_BUTTON3_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_ROWS_PARAM_ID                (0x5203007Cu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (128u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xDE040080u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (132u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xDF040084u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (136u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xDC040088u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (140u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xDD04008Cu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (144u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xDB040090u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (148u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xDA040094u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (152u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x96040098u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (154u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5204009Au)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (155u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5404009Bu)

#define CapSense_1_BUTTON4_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numRows)
#define CapSense_1_BUTTON4_NUM_ROWS_OFFSET                  (156u)
#define CapSense_1_BUTTON4_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_ROWS_PARAM_ID                (0x5F04009Cu)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (160u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xD70500A0u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (164u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xD60500A4u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (168u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xD50500A8u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (172u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xD40500ACu)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (176u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xD20500B0u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (180u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xD30500B4u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (184u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x9F0500B8u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (186u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5B0500BAu)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (187u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5D0500BBu)

#define CapSense_1_BUTTON5_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numRows)
#define CapSense_1_BUTTON5_NUM_ROWS_OFFSET                  (188u)
#define CapSense_1_BUTTON5_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_ROWS_PARAM_ID                (0x560500BCu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
