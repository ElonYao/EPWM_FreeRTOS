//###########################################################################
//
// FILE:    hw_memmap.h
//
// TITLE:   Macros defining the memory map of the C28x.
//
//###########################################################################
// $Copyright:
// Copyright (C) 2025 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#ifndef HW_MEMMAP_H
#define HW_MEMMAP_H

//*****************************************************************************
//
// The following are defines for the base address of the memories and
// peripherals.
//
//*****************************************************************************
#define M0_RAM_BASE               0x00000000U
#define M1_RAM_BASE               0x00000400U
#define ADCARESULT_BASE           0x00000B00U
#define ADCBRESULT_BASE           0x00000B20U
#define ADCCRESULT_BASE           0x00000B40U
#define CPUTIMER0_BASE            0x00000C00U
#define CLA1_ONLY_BASE            0x00000C00U
#define CPUTIMER1_BASE            0x00000C08U
#define CPUTIMER2_BASE            0x00000C10U
#define CLA1_SOFTINT_BASE         0x00000CE0U
#define PIECTRL_BASE              0x00000CE0U
#define PIEVECTTABLE_BASE         0x00000D00U
#define DMA_BASE                  0x00001000U
#define DMA_CH1_BASE              0x00001020U
#define DMA_CH2_BASE              0x00001040U
#define DMA_CH3_BASE              0x00001060U
#define DMA_CH4_BASE              0x00001080U
#define DMA_CH5_BASE              0x000010A0U
#define DMA_CH6_BASE              0x000010C0U
#define CLA1_BASE                 0x00001400U
#define CLB1_BASE                 0x00003000U
#define CLB1_LOGICCFG_BASE        0x00003000U
#define CLB1_LOGICCTRL_BASE       0x00003100U
#define CLB1_DATAEXCH_BASE        0x00003180U
#define CLB2_BASE                 0x00003400U
#define CLB2_LOGICCFG_BASE        0x00003400U
#define CLB2_LOGICCTRL_BASE       0x00003500U
#define CLB2_DATAEXCH_BASE        0x00003580U
#define CLB3_BASE                 0x00003800U
#define CLB3_LOGICCFG_BASE        0x00003800U
#define CLB3_LOGICCTRL_BASE       0x00003900U
#define CLB3_DATAEXCH_BASE        0x00003980U
#define CLB4_BASE                 0x00003C00U
#define CLB4_LOGICCFG_BASE        0x00003C00U
#define CLB4_LOGICCTRL_BASE       0x00003D00U
#define CLB4_DATAEXCH_BASE        0x00003D80U
#define EPWM1_BASE                0x00004000U
#define EPWM2_BASE                0x00004100U
#define EPWM3_BASE                0x00004200U
#define EPWM4_BASE                0x00004300U
#define EPWM5_BASE                0x00004400U
#define EPWM6_BASE                0x00004500U
#define EPWM7_BASE                0x00004600U
#define EPWM8_BASE                0x00004700U
#define EQEP1_BASE                0x00005100U
#define EQEP2_BASE                0x00005140U
#define ECAP1_BASE                0x00005200U
#define ECAP2_BASE                0x00005240U
#define ECAP3_BASE                0x00005280U
#define HRCAP3_BASE               0x000052A0U
#define DACA_BASE                 0x00005C00U
#define DACB_BASE                 0x00005C10U
#define CMPSS1_BASE               0x00005C80U
#define CMPSS2_BASE               0x00005CA0U
#define CMPSS3_BASE               0x00005CC0U
#define CMPSS4_BASE               0x00005CE0U
#define SDFM1_BASE                0x00005E00U
#define SDFM2_BASE                0x00005E80U
#define SPIA_BASE                 0x00006100U
#define SPIB_BASE                 0x00006110U
#define BGCRC_CPU_BASE            0x00006340U
#define BGCRC_CLA1_BASE           0x00006380U
#define PMBUSA_BASE               0x00006400U
#define HIC_BASE                  0x00006500U
#define FSITXA_BASE               0x00006600U
#define FSIRXA_BASE               0x00006680U
#define LINA_BASE                 0x00006A00U
#define LINB_BASE                 0x00006B00U
#define WD_BASE                   0x00007000U
#define NMI_BASE                  0x00007060U
#define XINT_BASE                 0x00007070U
#define SCIA_BASE                 0x00007200U
#define SCIB_BASE                 0x00007210U
#define I2CA_BASE                 0x00007300U
#define I2CB_BASE                 0x00007340U
#define ADCA_BASE                 0x00007400U
#define ADCB_BASE                 0x00007480U
#define ADCC_BASE                 0x00007500U
#define INPUTXBAR_BASE            0x00007900U
#define XBAR_BASE                 0x00007920U
#define SYNCSOC_BASE              0x00007940U
#define CLBINPUTXBAR_BASE         0x00007960U
#define DMACLASRCSEL_BASE         0x00007980U
#define EPWMXBAR_BASE             0x00007A00U
#define CLBXBAR_BASE              0x00007A40U
#define OUTPUTXBAR_BASE           0x00007A80U
#define CLBOUTPUTXBAR_BASE        0x00007BC0U
#define GPIOCTRL_BASE             0x00007C00U
#define GPIODATA_BASE             0x00007F00U
#define GPIODATAREAD_BASE         0x00007F80U
#define LFU_BASE                  0x00007FE0U
#define LS0_RAM_BASE              0x00008000U
#define LS1_RAM_BASE              0x00008800U
#define LS2_RAM_BASE              0x00009000U
#define LS3_RAM_BASE              0x00009800U
#define LS4_RAM_BASE              0x0000A000U
#define LS5_RAM_BASE              0x0000A800U
#define LS6_RAM_BASE              0x0000B000U
#define LS7_RAM_BASE              0x0000B800U
#define GS0_RAM_BASE              0x0000C000U
#define GS1_RAM_BASE              0x0000D000U
#define GS2_RAM_BASE              0x0000E000U
#define GS3_RAM_BASE              0x0000F000U
#define AESA_BASE                 0x00042000U
#define AESA_SS_BASE              0x00042C00U
#define CANA_BASE                 0x00048000U
#define CANA_MSG_RAM_BASE         0x00049000U
#define MCANA_DRIVER_BASE         0x00058000U
#define MCANA_MSG_RAM_BASE        0x00058000U
#define MCANASS_BASE              0x0005C400U
#define MCANA_BASE                0x0005C600U
#define MCANA_ERROR_BASE          0x0005C800U
#define DEVCFG_BASE               0x0005D000U
#define CLKCFG_BASE               0x0005D200U
#define CPUSYS_BASE               0x0005D300U
#define SYSSTAT_BASE              0x0005D400U
#define PERIPHAC_BASE             0x0005D500U
#define ANALOGSUBSYS_BASE         0x0005D700U
#define HWBIST_BASE               0x0005E000U
#define MPOST_BASE                0x0005E200U
#define DCC0_BASE                 0x0005E700U
#define DCC1_BASE                 0x0005E740U
#define ERAD_GLOBAL_BASE          0x0005E800U
#define ERAD_HWBP1_BASE           0x0005E900U
#define ERAD_HWBP2_BASE           0x0005E908U
#define ERAD_HWBP3_BASE           0x0005E910U
#define ERAD_HWBP4_BASE           0x0005E918U
#define ERAD_HWBP5_BASE           0x0005E920U
#define ERAD_HWBP6_BASE           0x0005E928U
#define ERAD_HWBP7_BASE           0x0005E930U
#define ERAD_HWBP8_BASE           0x0005E938U
#define ERAD_COUNTER1_BASE        0x0005E980U
#define ERAD_COUNTER2_BASE        0x0005E990U
#define ERAD_COUNTER3_BASE        0x0005E9A0U
#define ERAD_COUNTER4_BASE        0x0005E9B0U
#define ERAD_CRC_GLOBAL_BASE      0x0005EA00U
#define ERAD_CRC1_BASE            0x0005EA10U
#define ERAD_CRC2_BASE            0x0005EA20U
#define ERAD_CRC3_BASE            0x0005EA30U
#define ERAD_CRC4_BASE            0x0005EA40U
#define ERAD_CRC5_BASE            0x0005EA50U
#define ERAD_CRC6_BASE            0x0005EA60U
#define ERAD_CRC7_BASE            0x0005EA70U
#define ERAD_CRC8_BASE            0x0005EA80U
#define EPG1_BASE                 0x0005EC00U
#define EPG1MUX_BASE              0x0005ECD0U
#define DCSM_Z1_BASE              0x0005F000U
#define DCSM_Z2_BASE              0x0005F080U
#define DCSMCOMMON_BASE           0x0005F0C0U
#define MEMCFG_BASE               0x0005F400U
#define ACCESSPROTECTION_BASE     0x0005F500U
#define MEMORYERROR_BASE          0x0005F540U
#define TESTERROR_BASE            0x0005F590U
#define FLASH0CTRL_BASE           0x0005F800U
#define FLASH0ECC_BASE            0x0005FB00U
#define UID_BASE                  0x00070200U
#define DCSM_Z1OTP_BASE           0x00078000U
#define DCSM_Z2OTP_BASE           0x00078200U
#endif
