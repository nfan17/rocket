﻿/**
  ******************************************************************************
  * @file    stm32h503xx.h
  * @author  MCD Application Team
  * @brief   CMSIS STM32H503xx Device Peripheral Access Layer Header File.
  *
  *          This file contains:
  *           - Data structures and the address mapping for all peripherals
  *           - Peripheral's registers declarations and bits definition
  *           - Macros to access peripheral’s registers hardware
  *
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#ifndef STM32H503xx_H
#define STM32H503xx_H

#ifdef __cplusplus
extern "C"
{
#endif

    /** @addtogroup ST
  * @{
  */

    /** @addtogroup STM32H503xx
  * @{
  */

    /** @addtogroup Configuration_of_CMSIS
  * @{
  */

    /* =========================================================================================================================== */
    /* ================                                Interrupt Number Definition                                ================ */
    /* =========================================================================================================================== */

    typedef enum
    {
        /* =======================================  ARM Cortex-M33 Specific Interrupt Numbers  ======================================= */
        Reset_IRQn =
            -15, /*!< -15 Reset Vector, invoked on Power up and warm reset              */
        NonMaskableInt_IRQn =
            -14, /*!< -14 Non maskable Interrupt, cannot be stopped or preempted        */
        HardFault_IRQn =
            -13, /*!< -13 Hard Fault, all classes of Fault                              */
        MemoryManagement_IRQn =
            -12, /*!< -12 Memory Management, MPU mismatch, including Access Violation
                                               and No Match                                                  */
        BusFault_IRQn =
            -11, /*!< -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                               related Fault                                                 */
        UsageFault_IRQn =
            -10, /*!< -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
        SVCall_IRQn =
            -5, /*!< -5  System Service Call via SVC instruction                       */
        DebugMonitor_IRQn =
            -4, /*!< -4  Debug Monitor                                                 */
        PendSV_IRQn =
            -2, /*!< -2  Pendable request for system service                           */
        SysTick_IRQn =
            -1, /*!< -1  System Tick Timer                                             */

        /* ===========================================  STM32H503xx Specific Interrupt Numbers  ====================================== */
        WWDG_IRQn =
            0, /*!< Window WatchDog interrupt                                         */
        PVD_AVD_IRQn =
            1, /*!< PVD/AVD through EXTI Line detection Interrupt                     */
        RTC_IRQn =
            2, /*!< RTC non-secure interrupt                                          */
        TAMP_IRQn =
            4, /*!< Tamper global interrupt                                           */
        RAMCFG_IRQn =
            5, /*!< RAMCFG global interrupt                                           */
        FLASH_IRQn =
            6, /*!< FLASH non-secure global interrupt                                 */
        RCC_IRQn =
            9, /*!< RCC non secure global interrupt                                   */
        EXTI0_IRQn =
            11, /*!< EXTI Line0 interrupt                                              */
        EXTI1_IRQn =
            12, /*!< EXTI Line1 interrupt                                              */
        EXTI2_IRQn =
            13, /*!< EXTI Line2 interrupt                                              */
        EXTI3_IRQn =
            14, /*!< EXTI Line3 interrupt                                              */
        EXTI4_IRQn =
            15, /*!< EXTI Line4 interrupt                                              */
        EXTI5_IRQn =
            16, /*!< EXTI Line5 interrupt                                              */
        EXTI6_IRQn =
            17, /*!< EXTI Line6 interrupt                                              */
        EXTI7_IRQn =
            18, /*!< EXTI Line7 interrupt                                              */
        EXTI8_IRQn =
            19, /*!< EXTI Line8 interrupt                                              */
        EXTI9_IRQn =
            20, /*!< EXTI Line9 interrupt                                              */
        EXTI10_IRQn =
            21, /*!< EXTI Line10 interrupt                                             */
        EXTI11_IRQn =
            22, /*!< EXTI Line11 interrupt                                             */
        EXTI12_IRQn =
            23, /*!< EXTI Line12 interrupt                                             */
        EXTI13_IRQn =
            24, /*!< EXTI Line13 interrupt                                             */
        EXTI14_IRQn =
            25, /*!< EXTI Line14 interrupt                                             */
        EXTI15_IRQn =
            26, /*!< EXTI Line15 interrupt                                             */
        GPDMA1_Channel0_IRQn =
            27, /*!< GPDMA1 Channel 0 global interrupt                                 */
        GPDMA1_Channel1_IRQn =
            28, /*!< GPDMA1 Channel 1 global interrupt                                 */
        GPDMA1_Channel2_IRQn =
            29, /*!< GPDMA1 Channel 2 global interrupt                                 */
        GPDMA1_Channel3_IRQn =
            30, /*!< GPDMA1 Channel 3 global interrupt                                 */
        GPDMA1_Channel4_IRQn =
            31, /*!< GPDMA1 Channel 4 global interrupt                                 */
        GPDMA1_Channel5_IRQn =
            32, /*!< GPDMA1 Channel 5 global interrupt                                 */
        GPDMA1_Channel6_IRQn =
            33, /*!< GPDMA1 Channel 6 global interrupt                                 */
        GPDMA1_Channel7_IRQn =
            34, /*!< GPDMA1 Channel 7 global interrupt                                 */
        IWDG_IRQn =
            35, /*!< IWDG global interrupt                                             */
        ADC1_IRQn =
            37, /*!< ADC1 global interrupt                                             */
        DAC1_IRQn =
            38, /*!< DAC1 global interrupt                                             */
        FDCAN1_IT0_IRQn =
            39, /*!< FDCAN1 interrupt 0                                                */
        FDCAN1_IT1_IRQn =
            40, /*!< FDCAN1 interrupt 1                                                */
        TIM1_BRK_IRQn =
            41, /*!< TIM1 Break interrupt                                              */
        TIM1_UP_IRQn =
            42, /*!< TIM1 Update interrupt                                             */
        TIM1_TRG_COM_IRQn =
            43, /*!< TIM1 Trigger and Commutation interrupt                            */
        TIM1_CC_IRQn =
            44, /*!< TIM1 Capture Compare interrupt                                    */
        TIM2_IRQn =
            45, /*!< TIM2 global interrupt                                             */
        TIM3_IRQn =
            46, /*!< TIM3 global interrupt                                             */
        TIM6_IRQn =
            49, /*!< TIM6 global interrupt                                             */
        TIM7_IRQn =
            50, /*!< TIM7 global interrupt                                             */
        I2C1_EV_IRQn =
            51, /*!< I2C1 Event interrupt                                              */
        I2C1_ER_IRQn =
            52, /*!< I2C1 Error interrupt                                              */
        I2C2_EV_IRQn =
            53, /*!< I2C2 Event interrupt                                              */
        I2C2_ER_IRQn =
            54, /*!< I2C2 Error interrupt                                              */
        SPI1_IRQn =
            55, /*!< SPI1 global interrupt                                             */
        SPI2_IRQn =
            56, /*!< SPI2 global interrupt                                             */
        SPI3_IRQn =
            57, /*!< SPI3 global interrupt                                             */
        USART1_IRQn =
            58, /*!< USART1 global interrupt                                           */
        USART2_IRQn =
            59, /*!< USART2 global interrupt                                           */
        USART3_IRQn =
            60, /*!< USART3 global interrupt                                           */
        LPUART1_IRQn =
            63, /*!< LPUART1 global interrupt                                          */
        LPTIM1_IRQn =
            64, /*!< LPTIM1 global interrupt                                           */
        LPTIM2_IRQn =
            70, /*!< LPTIM2 global interrupt                                           */
        USB_DRD_FS_IRQn =
            74, /*!< USB FS global interrupt                                           */
        CRS_IRQn =
            75, /*!< CRS global interrupt                                              */
        GPDMA2_Channel0_IRQn =
            90, /*!< GPDMA2 Channel 0 global interrupt                                 */
        GPDMA2_Channel1_IRQn =
            91, /*!< GPDMA2 Channel 1 global interrupt                                 */
        GPDMA2_Channel2_IRQn =
            92, /*!< GPDMA2 Channel 2 global interrupt                                 */
        GPDMA2_Channel3_IRQn =
            93, /*!< GPDMA2 Channel 3 global interrupt                                 */
        GPDMA2_Channel4_IRQn =
            94, /*!< GPDMA2 Channel 4 global interrupt                                 */
        GPDMA2_Channel5_IRQn =
            95, /*!< GPDMA2 Channel 5 global interrupt                                 */
        GPDMA2_Channel6_IRQn =
            96, /*!< GPDMA2 Channel 6 global interrupt                                 */
        GPDMA2_Channel7_IRQn =
            97, /*!< GPDMA2 Channel 7 global interrupt                                 */
        FPU_IRQn =
            103, /*!< FPU global interrupt                                              */
        ICACHE_IRQn =
            104, /*!< Instruction cache global interrupt                                */
        DTS_IRQn =
            113, /*!< DTS global interrupt                                              */
        RNG_IRQn =
            114, /*!< RNG global interrupt                                              */
        HASH_IRQn =
            117, /*!< HASH global interrupt                                             */
        I3C1_EV_IRQn =
            123, /*!< I3C1 event interrupt                                              */
        I3C1_ER_IRQn =
            124, /*!< I3C1 error interrupt                                              */
        I3C2_EV_IRQn =
            131, /*!< I3C2 Event interrupt                                              */
        I3C2_ER_IRQn =
            132, /*!< I3C2 Error interrupt                                              */
        COMP1_IRQn =
            133, /*!< COMP global interrupt                                             */
    } IRQn_Type;

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* -------  Start of section using anonymous unions and disabling warnings  ------- */
#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined(__ICCARM__)
#pragma language = extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning 586
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* --------  Configuration of the Cortex-M33 Processor and Core Peripherals  ------ */
#define __CM33_REV 0x0000U     /* Core revision r0p1 */
#define __SAUREGION_PRESENT 1U /* SAU regions present */
#define __MPU_PRESENT 1U       /* MPU present */
#define __VTOR_PRESENT 1U      /* VTOR present */
#define __NVIC_PRIO_BITS 4U    /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig \
    0U                   /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT 1U /* FPU present */
#define __DSP_PRESENT 1U /* DSP extension present */

    /** @} */ /* End of group Configuration_of_CMSIS */

#include <core_cm33.h> /*!< ARM Cortex-M33 processor and core peripherals */
#include "system_stm32h5xx.h" /*!< STM32H5xx System */

    /* =========================================================================================================================== */
    /* ================                            Device Specific Peripheral Section                             ================ */
    /* =========================================================================================================================== */

    /** @addtogroup STM32H5xx_peripherals
  * @{
  */

    /**
  * @brief CRC calculation unit
  */
    typedef struct
    {
        __IO uint32_t
            DR; /*!< CRC Data register,                           Address offset: 0x00 */
        __IO uint32_t
            IDR; /*!< CRC Independent data register,               Address offset: 0x04 */
        __IO uint32_t
            CR; /*!< CRC Control register,                        Address offset: 0x08 */
        uint32_t
            RESERVED2; /*!< Reserved,                                                    0x0C */
        __IO uint32_t
            INIT; /*!< Initial CRC value register,                  Address offset: 0x10 */
        __IO uint32_t
            POL; /*!< CRC polynomial register,                     Address offset: 0x14 */
        uint32_t RESERVED3
            [246]; /*!< Reserved,                                                         */
        __IO uint32_t
            HWCFGR; /*!< CRC IP HWCFGR register,                     Address offset: 0x3F0 */
        __IO uint32_t
            VERR; /*!< CRC IP version register,                    Address offset: 0x3F4 */
        __IO uint32_t
            PIDR; /*!< CRC IP type identification register,        Address offset: 0x3F8 */
        __IO uint32_t
            SIDR; /*!< CRC IP map Size ID register,                Address offset: 0x3FC */
    } CRC_TypeDef;

    /**
  * @brief Inter-integrated Circuit Interface
  */
    typedef struct
    {
        __IO uint32_t
            CR1; /*!< I2C Control register 1,            Address offset: 0x00 */
        __IO uint32_t
            CR2; /*!< I2C Control register 2,            Address offset: 0x04 */
        __IO uint32_t
            OAR1; /*!< I2C Own address 1 register,        Address offset: 0x08 */
        __IO uint32_t
            OAR2; /*!< I2C Own address 2 register,        Address offset: 0x0C */
        __IO uint32_t
            TIMINGR; /*!< I2C Timing register,               Address offset: 0x10 */
        __IO uint32_t
            TIMEOUTR; /*!< I2C Timeout register,              Address offset: 0x14 */
        __IO uint32_t
            ISR; /*!< I2C Interrupt and status register, Address offset: 0x18 */
        __IO uint32_t
            ICR; /*!< I2C Interrupt clear register,      Address offset: 0x1C */
        __IO uint32_t
            PECR; /*!< I2C PEC register,                  Address offset: 0x20 */
        __IO uint32_t
            RXDR; /*!< I2C Receive data register,         Address offset: 0x24 */
        __IO uint32_t
            TXDR; /*!< I2C Transmit data register,        Address offset: 0x28 */
    } I2C_TypeDef;

    /**
  * @brief Improved Inter-integrated Circuit Interface
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< I3C Control register,                      Address offset: 0x00      */
        __IO uint32_t
            CFGR; /*!< I3C Controller Configuration register,     Address offset: 0x04      */
        uint32_t RESERVED1
            [2]; /*!< Reserved,                                  Address offset: 0x08-0x0C */
        __IO uint32_t
            RDR; /*!< I3C Received Data register,                Address offset: 0x10      */
        __IO uint32_t
            RDWR; /*!< I3C Received Data Word register,           Address offset: 0x14      */
        __IO uint32_t
            TDR; /*!< I3C Transmit Data register,                Address offset: 0x18      */
        __IO uint32_t
            TDWR; /*!< I3C Transmit Data Word register,           Address offset: 0x1C      */
        __IO uint32_t
            IBIDR; /*!< I3C IBI payload Data register,             Address offset: 0x20      */
        __IO uint32_t
            TGTTDR; /*!< I3C Target Transmit register,              Address offset: 0x24      */
        uint32_t RESERVED2
            [2]; /*!< Reserved,                                  Address offset: 0x28-0x2C */
        __IO uint32_t
            SR; /*!< I3C Status register,                       Address offset: 0x30      */
        __IO uint32_t
            SER; /*!< I3C Status Error register,                 Address offset: 0x34      */
        uint32_t RESERVED3
            [2]; /*!< Reserved,                                  Address offset: 0x38-0x3C */
        __IO uint32_t
            RMR; /*!< I3C Received Message register,             Address offset: 0x40      */
        uint32_t RESERVED4
            [3]; /*!< Reserved,                                  Address offset: 0x44-0x4C */
        __IO uint32_t
            EVR; /*!< I3C Event register,                        Address offset: 0x50      */
        __IO uint32_t
            IER; /*!< I3C Interrupt Enable register,             Address offset: 0x54      */
        __IO uint32_t
            CEVR; /*!< I3C Clear Event register,                  Address offset: 0x58      */
        uint32_t
            RESERVED5; /*!< Reserved,                                  Address offset: 0x5C      */
        __IO uint32_t
            DEVR0; /*!< I3C own Target characteristics register,   Address offset: 0x60      */
        __IO uint32_t DEVRX
            [4]; /*!< I3C Target x (1<=x<=4) register,           Address offset: 0x64-0x70 */
        uint32_t RESERVED6
            [7]; /*!< Reserved,                                  Address offset: 0x74-0x8C */
        __IO uint32_t
            MAXRLR; /*!< I3C Maximum Read Length register,          Address offset: 0x90      */
        __IO uint32_t
            MAXWLR; /*!< I3C Maximum Write Length register,         Address offset: 0x94      */
        uint32_t RESERVED7
            [2]; /*!< Reserved,                                  Address offset: 0x98-0x9C */
        __IO uint32_t
            TIMINGR0; /*!< I3C Timing 0 register,                     Address offset: 0xA0      */
        __IO uint32_t
            TIMINGR1; /*!< I3C Timing 1 register,                     Address offset: 0xA4      */
        __IO uint32_t
            TIMINGR2; /*!< I3C Timing 2 register,                     Address offset: 0xA8      */
        uint32_t RESERVED9
            [5]; /*!< Reserved,                                  Address offset: 0xAC-0xBC */
        __IO uint32_t
            BCR; /*!< I3C Bus Characteristics register,          Address offset: 0xC0      */
        __IO uint32_t
            DCR; /*!< I3C Device Characteristics register,       Address offset: 0xC4      */
        __IO uint32_t
            GETCAPR; /*!< I3C GET CAPabilities register,             Address offset: 0xC8      */
        __IO uint32_t
            CRCAPR; /*!< I3C Controller CAPabilities register,      Address offset: 0xCC      */
        __IO uint32_t
            GETMXDSR; /*!< I3C GET Max Data Speed register,           Address offset: 0xD0      */
        __IO uint32_t
            EPIDR; /*!< I3C Extended Provisioned ID register,      Address offset: 0xD4      */
    } I3C_TypeDef;

    /**
  * @brief DAC
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< DAC control register,                                    Address offset: 0x00 */
        __IO uint32_t
            SWTRIGR; /*!< DAC software trigger register,                           Address offset: 0x04 */
        __IO uint32_t
            DHR12R1; /*!< DAC channel1 12-bit right-aligned data holding register, Address offset: 0x08 */
        __IO uint32_t
            DHR12L1; /*!< DAC channel1 12-bit left aligned data holding register,  Address offset: 0x0C */
        __IO uint32_t
            DHR8R1; /*!< DAC channel1 8-bit right aligned data holding register,  Address offset: 0x10 */
        __IO uint32_t
            DHR12R2; /*!< DAC channel2 12-bit right aligned data holding register, Address offset: 0x14 */
        __IO uint32_t
            DHR12L2; /*!< DAC channel2 12-bit left aligned data holding register,  Address offset: 0x18 */
        __IO uint32_t
            DHR8R2; /*!< DAC channel2 8-bit right-aligned data holding register,  Address offset: 0x1C */
        __IO uint32_t
            DHR12RD; /*!< Dual DAC 12-bit right-aligned data holding register,     Address offset: 0x20 */
        __IO uint32_t
            DHR12LD; /*!< DUAL DAC 12-bit left aligned data holding register,      Address offset: 0x24 */
        __IO uint32_t
            DHR8RD; /*!< DUAL DAC 8-bit right aligned data holding register,      Address offset: 0x28 */
        __IO uint32_t
            DOR1; /*!< DAC channel1 data output register,                       Address offset: 0x2C */
        __IO uint32_t
            DOR2; /*!< DAC channel2 data output register,                       Address offset: 0x30 */
        __IO uint32_t
            SR; /*!< DAC status register,                                     Address offset: 0x34 */
        __IO uint32_t
            CCR; /*!< DAC calibration control register,                        Address offset: 0x38 */
        __IO uint32_t
            MCR; /*!< DAC mode control register,                               Address offset: 0x3C */
        __IO uint32_t
            SHSR1; /*!< DAC Sample and Hold sample time register 1,              Address offset: 0x40 */
        __IO uint32_t
            SHSR2; /*!< DAC Sample and Hold sample time register 2,              Address offset: 0x44 */
        __IO uint32_t
            SHHR; /*!< DAC Sample and Hold hold time register,                  Address offset: 0x48 */
        __IO uint32_t
            SHRR; /*!< DAC Sample and Hold refresh time register,               Address offset: 0x4C */
        __IO uint32_t RESERVED[1];
        __IO uint32_t
            AUTOCR; /*!< DAC Autonomous mode register,                         Address offset: 0x54 */
    } DAC_TypeDef;

    /**
  * @brief Clock Recovery System
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< CRS ccontrol register,              Address offset: 0x00 */
        __IO uint32_t
            CFGR; /*!< CRS configuration register,         Address offset: 0x04 */
        __IO uint32_t
            ISR; /*!< CRS interrupt and status register,  Address offset: 0x08 */
        __IO uint32_t
            ICR; /*!< CRS interrupt flag clear register,  Address offset: 0x0C */
    } CRS_TypeDef;

    /**
  * @brief HASH
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< HASH control register,          Address offset: 0x00        */
        __IO uint32_t
            DIN; /*!< HASH data input register,       Address offset: 0x04        */
        __IO uint32_t
            STR; /*!< HASH start register,            Address offset: 0x08        */
        __IO uint32_t HR
            [5]; /*!< HASH digest registers,          Address offset: 0x0C-0x1C   */
        __IO uint32_t
            IMR; /*!< HASH interrupt enable register, Address offset: 0x20        */
        __IO uint32_t
            SR; /*!< HASH status register,           Address offset: 0x24        */
        uint32_t RESERVED
            [52]; /*!< Reserved, 0x28-0xF4                                         */
        __IO uint32_t CSR
            [54]; /*!< HASH context swap registers,    Address offset: 0x0F8-0x1CC */
    } HASH_TypeDef;

    /**
  * @brief HASH_DIGEST
  */
    typedef struct
    {
        __IO uint32_t HR
            [8]; /*!< HASH digest registers,          Address offset: 0x310-0x32C */
    } HASH_DIGEST_TypeDef;

    /**
  * @brief RNG
  */
    typedef struct
    {
        __IO uint32_t CR; /*!< RNG control register, Address offset: 0x00 */
        __IO uint32_t SR; /*!< RNG status register,  Address offset: 0x04 */
        __IO uint32_t DR; /*!< RNG data register,    Address offset: 0x08 */
        uint32_t RESERVED;
        __IO uint32_t
            HTCR; /*!< RNG health test configuration register, Address offset: 0x10 */
    } RNG_TypeDef;

    /**
  * @brief Debug MCU
  */
    typedef struct
    {
        __IO uint32_t
            IDCODE; /*!< MCU device ID code,                 Address offset: 0x00  */
        __IO uint32_t
            CR; /*!< Debug MCU configuration register,   Address offset: 0x04  */
        __IO uint32_t
            APB1FZR1; /*!< Debug MCU APB1 freeze register 1,   Address offset: 0x08  */
        __IO uint32_t
            APB1FZR2; /*!< Debug MCU APB1 freeze register 2,   Address offset: 0x0C  */
        __IO uint32_t
            APB2FZR; /*!< Debug MCU APB2 freeze register,     Address offset: 0x10  */
        __IO uint32_t
            APB3FZR; /*!< Debug MCU APB3 freeze register,     Address offset: 0x14  */
        uint32_t RESERVED1
            [2]; /*!< Reserved,                                    0x18 - 0x1C  */
        __IO uint32_t
            AHB1FZR; /*!< Debug MCU AHB1 freeze register,     Address offset: 0x20  */
        uint32_t RESERVED2
            [54]; /*!< Reserved,                                   0x24 - 0xF8  */
        __IO uint32_t
            SR; /*!< Debug MCU SR register,              Address offset: 0xFC  */
        __IO uint32_t
            DBG_AUTH_HOST; /*!< Debug DBG_AUTH_HOST register,      Address offset: 0x100 */
        __IO uint32_t
            DBG_AUTH_DEV; /*!< Debug DBG_AUTH_DEV register,       Address offset: 0x104 */
        __IO uint32_t
            DBG_AUTH_ACK; /*!< Debug DBG_AUTH_ACK register,       Address offset: 0x108 */
        uint32_t RESERVED3
            [945]; /*!< Reserved,                                 0x10C - 0xFCC */
        __IO uint32_t
            PIDR4; /*!< Debug MCU Peripheral ID register 4,  Address offset: 0xFD0 */
        __IO uint32_t
            PIDR5; /*!< Debug MCU Peripheral ID register 5,  Address offset: 0xFD4 */
        __IO uint32_t
            PIDR6; /*!< Debug MCU Peripheral ID register 6,  Address offset: 0xFD8 */
        __IO uint32_t
            PIDR7; /*!< Debug MCU Peripheral ID register 7,  Address offset: 0xFDC */
        __IO uint32_t
            PIDR0; /*!< Debug MCU Peripheral ID register 0,  Address offset: 0xFE0 */
        __IO uint32_t
            PIDR1; /*!< Debug MCU Peripheral ID register 1,  Address offset: 0xFE4 */
        __IO uint32_t
            PIDR2; /*!< Debug MCU Peripheral ID register 2,  Address offset: 0xFE8 */
        __IO uint32_t
            PIDR3; /*!< Debug MCU Peripheral ID register 3,  Address offset: 0xFEC */
        __IO uint32_t
            CIDR0; /*!< Debug MCU Component ID register 0,   Address offset: 0xFF0 */
        __IO uint32_t
            CIDR1; /*!< Debug MCU Component ID register 1,   Address offset: 0xFF4 */
        __IO uint32_t
            CIDR2; /*!< Debug MCU Component ID register 2,   Address offset: 0xFF8 */
        __IO uint32_t
            CIDR3; /*!< Debug MCU Component ID register 3,   Address offset: 0xFFC */
    } DBGMCU_TypeDef;

    /**
  * @brief DMA Controller
  */
    typedef struct
    {
        uint32_t
            RESERVED0; /*!< Reserved                                         Address offset: 0x00  */
        __IO uint32_t
            PRIVCFGR; /*!< DMA privileged configuration register,           Address offset: 0x04  */
        uint32_t
            RESERVED1; /*!< Reserved                                         Address offset: 0x08  */
        __IO uint32_t
            MISR; /*!< DMA non secure masked interrupt status register, Address offset: 0x0C  */
        uint32_t
            RESERVED2; /*!< Reserved                                         Address offset: 0x08  */
    } DMA_TypeDef;

    typedef struct
    {
        __IO uint32_t
            CLBAR; /*!< DMA channel x linked-list base address register, Address offset: 0x50 + (x * 0x80) */
        uint32_t RESERVED1
            [2]; /*!< Reserved 1,                                      Address offset: 0x54 -- 0x58      */
        __IO uint32_t
            CFCR; /*!< DMA channel x flag clear register,               Address offset: 0x5C + (x * 0x80) */
        __IO uint32_t
            CSR; /*!< DMA channel x flag status register,              Address offset: 0x60 + (x * 0x80) */
        __IO uint32_t
            CCR; /*!< DMA channel x control register,                  Address offset: 0x64 + (x * 0x80) */
        uint32_t RESERVED2
            [10]; /*!< Reserved 2,                                      Address offset: 0x68 -- 0x8C      */
        __IO uint32_t
            CTR1; /*!< DMA channel x transfer register 1,               Address offset: 0x90 + (x * 0x80) */
        __IO uint32_t
            CTR2; /*!< DMA channel x transfer register 2,               Address offset: 0x94 + (x * 0x80) */
        __IO uint32_t
            CBR1; /*!< DMA channel x block register 1,                  Address offset: 0x98 + (x * 0x80) */
        __IO uint32_t
            CSAR; /*!< DMA channel x source address register,           Address offset: 0x9C + (x * 0x80) */
        __IO uint32_t
            CDAR; /*!< DMA channel x destination address register,      Address offset: 0xA0 + (x * 0x80) */
        __IO uint32_t
            CTR3; /*!< DMA channel x transfer register 3,               Address offset: 0xA4 + (x * 0x80) */
        __IO uint32_t
            CBR2; /*!< DMA channel x block register 2,                  Address offset: 0xA8 + (x * 0x80) */
        uint32_t RESERVED3
            [8]; /*!< Reserved 3,                                      Address offset: 0xAC -- 0xC8      */
        __IO uint32_t
            CLLR; /*!< DMA channel x linked-list address register,      Address offset: 0xCC + (x * 0x80) */
    } DMA_Channel_TypeDef;

    /**
  * @brief Asynch Interrupt/Event Controller (EXTI)
  */
    typedef struct
    {
        __IO uint32_t
            RTSR1; /*!< EXTI Rising Trigger Selection Register 1,        Address offset:   0x00 */
        __IO uint32_t
            FTSR1; /*!< EXTI Falling Trigger Selection Register 1,       Address offset:   0x04 */
        __IO uint32_t
            SWIER1; /*!< EXTI Software Interrupt event Register 1,        Address offset:   0x08 */
        __IO uint32_t
            RPR1; /*!< EXTI Rising Pending Register 1,                  Address offset:   0x0C */
        __IO uint32_t
            FPR1; /*!< EXTI Falling Pending Register 1,                 Address offset:   0x10 */
        __IO uint32_t
            SECCFGR1; /*!< EXTI Security Configuration Register 1,          Address offset:   0x14 */
        __IO uint32_t
            PRIVCFGR1; /*!< EXTI Privilege Configuration Register 1,         Address offset:   0x18 */
        uint32_t
            RESERVED1; /*!< Reserved 1,                                      Address offset:   0x1C */
        __IO uint32_t
            RTSR2; /*!< EXTI Rising Trigger Selection Register 2,        Address offset:   0x20 */
        __IO uint32_t
            FTSR2; /*!< EXTI Falling Trigger Selection Register 2,       Address offset:   0x24 */
        __IO uint32_t
            SWIER2; /*!< EXTI Software Interrupt event Register 2,        Address offset:   0x28 */
        __IO uint32_t
            RPR2; /*!< EXTI Rising Pending Register 2,                  Address offset:   0x2C */
        __IO uint32_t
            FPR2; /*!< EXTI Falling Pending Register 2,                 Address offset:   0x30 */
        __IO uint32_t
            SECCFGR2; /*!< EXTI Security Configuration Register 2,          Address offset:   0x34 */
        __IO uint32_t
            PRIVCFGR2; /*!< EXTI Privilege Configuration Register 2,         Address offset:   0x38 */
        uint32_t RESERVED2
            [9]; /*!< Reserved 2,                                                 0x3C-- 0x5C */
        __IO uint32_t EXTICR
            [4]; /*!< EXIT External Interrupt Configuration Register,            0x60 -- 0x6C */
        uint32_t RESERVED3
            [4]; /*!< Reserved 3,                                                0x70 -- 0x7C */
        __IO uint32_t
            IMR1; /*!< EXTI Interrupt Mask Register 1,                  Address offset:   0x80 */
        __IO uint32_t
            EMR1; /*!< EXTI Event Mask Register 1,                      Address offset:   0x84 */
        uint32_t RESERVED4
            [2]; /*!< Reserved 4,                                                0x88 -- 0x8C */
        __IO uint32_t
            IMR2; /*!< EXTI Interrupt Mask Register 2,                  Address offset:   0x90 */
        __IO uint32_t
            EMR2; /*!< EXTI Event Mask Register 2,                      Address offset:   0x94 */
    } EXTI_TypeDef;

    /**
  * @brief FLASH Registers
  */
    typedef struct
    {
        __IO uint32_t
            ACR; /*!< FLASH access control register,                                     Address offset: 0x00 */
        __IO uint32_t
            NSKEYR; /*!< FLASH non-secure key register,                                     Address offset: 0x04 */
        uint32_t
            RESERVED1; /*!< Reserved1,                                                         Address offset: 0x08 */
        __IO uint32_t
            OPTKEYR; /*!< FLASH option key register,                                         Address offset: 0x0C */
        uint32_t RESERVED2
            [2]; /*!< Reserved2,                                                         Address offset: 0x10-0x14 */
        __IO uint32_t
            OPSR; /*!< FLASH OPSR register,                                               Address offset: 0x18 */
        __IO uint32_t
            OPTCR; /*!< Flash Option Control Register,                                     Address offset: 0x1C */
        __IO uint32_t
            NSSR; /*!< FLASH non-secure status register,                                  Address offset: 0x20 */
        uint32_t
            RESERVED3; /*!< Reserved3,                                                         Address offset: 0x24 */
        __IO uint32_t
            NSCR; /*!< FLASH non-secure control register,                                 Address offset: 0x28 */
        uint32_t
            RESERVED4; /*!< Reserved4,                                                         Address offset: 0x2C */
        __IO uint32_t
            NSCCR; /*!< FLASH non-secure clear control register,                           Address offset: 0x30 */
        uint32_t RESERVED5
            [2]; /*!< Reserved5,                                                         Address offset: 0x34-0x38 */
        __IO uint32_t
            PRIVCFGR; /*!< FLASH privilege configuration register,                            Address offset: 0x3C */
        uint32_t RESERVED6
            [2]; /*!< Reserved6,                                                         Address offset: 0x40-0x44 */
        __IO uint32_t
            HDPEXTR; /*!< FLASH HDP extension register,                                      Address offset: 0x48 */
        uint32_t
            RESERVED7; /*!< Reserved7,                                                         Address offset: 0x4C */
        __IO uint32_t
            OPTSR_CUR; /*!< FLASH option status current register,                              Address offset: 0x50 */
        __IO uint32_t
            OPTSR_PRG; /*!< FLASH option status to program register,                           Address offset: 0x54 */
        uint32_t RESERVED8
            [2]; /*!< Reserved8,                                                         Address offset: 0x58-0x5C */
        __IO uint32_t
            NSEPOCHR_CUR; /*!< FLASH non-secure epoch current register,                           Address offset: 0x60 */
        __IO uint32_t
            NSEPOCHR_PRG; /*!< FLASH non-secure epoch to program register,                        Address offset: 0x64 */
        uint32_t RESERVED9
            [2]; /*!< Reserved9,                                                         Address offset: 0x68-0x6C */
        __IO uint32_t
            OPTSR2_CUR; /*!< FLASH option status current register 2,                            Address offset: 0x70 */
        __IO uint32_t
            OPTSR2_PRG; /*!< FLASH option status to program register 2,                         Address offset: 0x74 */
        uint32_t RESERVED10
            [2]; /*!< Reserved10,                                                        Address offset: 0x78-0x7C */
        __IO uint32_t
            NSBOOTR_CUR; /*!< FLASH non-secure unique boot entry current register,               Address offset: 0x80 */
        __IO uint32_t
            NSBOOTR_PRG; /*!< FLASH non-secure unique boot entry to program register,            Address offset: 0x84 */
        uint32_t RESERVED11
            [2]; /*!< Reserved11,                                                        Address offset: 0x88-0x8C */
        __IO uint32_t
            OTPBLR_CUR; /*!< FLASH OTP block lock current register,                             Address offset: 0x90 */
        __IO uint32_t
            OTPBLR_PRG; /*!< FLASH OTP block Lock to program register,                          Address offset: 0x94 */
        uint32_t RESERVED12
            [10]; /*!< Reserved12,                                                        Address offset: 0x98-0xBC */
        __IO uint32_t
            PRIVBB1R1; /*!< FLASH privilege block-based bank 1 register 1,                     Address offset: 0xC0 */
        uint32_t RESERVED13
            [9]; /*!< Reserved13,                                                        Address offset: 0xC4-0xE4 */
        __IO uint32_t
            WRP1R_CUR; /*!< FLASH write sector group protection current register for bank1,    Address offset: 0xE8 */
        __IO uint32_t
            WRP1R_PRG; /*!< FLASH write sector group protection to program register for bank1, Address offset: 0xEC */
        uint32_t RESERVED14
            [2]; /*!< Reserved14,                                                        Address offset: 0xF0-0xF4 */
        __IO uint32_t
            HDP1R_CUR; /*!< FLASH HDP configuration current register for bank1,                Address offset: 0xF8 */
        __IO uint32_t
            HDP1R_PRG; /*!< FLASH HDP configuration to program register for bank1,             Address offset: 0xFC */
        __IO uint32_t
            ECCCORR; /*!< FLASH ECC correction register,                                     Address offset: 0x100 */
        __IO uint32_t
            ECCDETR; /*!< FLASH ECC detection register,                                      Address offset: 0x104 */
        __IO uint32_t
            ECCDR; /*!< FLASH ECC data register,                                           Address offset: 0x108 */
        uint32_t RESERVED15
            [45]; /*!< Reserved15,                                                        Address offset: 0x10C-0x1BC */
        __IO uint32_t
            PRIVBB2R1; /*!< FLASH privilege block-based bank 2 register 1,                     Address offset: 0x1C0 */
        uint32_t RESERVED16
            [9]; /*!< Reserved16,                                                        Address offset: 0x1C4-0x1E4 */
        __IO uint32_t
            WRP2R_CUR; /*!< FLASH write sector group protection current register for bank2,    Address offset: 0x1E8 */
        __IO uint32_t
            WRP2R_PRG; /*!< FLASH write sector group protection to program register for bank2, Address offset: 0x1EC */
        uint32_t RESERVED17
            [2]; /*!< Reserved17,                                                        Address offset: 0x1F0-0x1F4 */
        __IO uint32_t
            HDP2R_CUR; /*!< FLASH HDP configuration current register for bank2,                Address offset: 0x1F8 */
        __IO uint32_t
            HDP2R_PRG; /*!< FLASH HDP configuration to program register for bank2,             Address offset: 0x1FC */
    } FLASH_TypeDef;

    /**
  * @brief General Purpose I/O
  */
    typedef struct
    {
        __IO uint32_t
            MODER; /*!< GPIO port mode register,               Address offset: 0x00      */
        __IO uint32_t
            OTYPER; /*!< GPIO port output type register,        Address offset: 0x04      */
        __IO uint32_t
            OSPEEDR; /*!< GPIO port output speed register,       Address offset: 0x08      */
        __IO uint32_t
            PUPDR; /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
        __IO uint32_t
            IDR; /*!< GPIO port input data register,         Address offset: 0x10      */
        __IO uint32_t
            ODR; /*!< GPIO port output data register,        Address offset: 0x14      */
        __IO uint32_t
            BSRR; /*!< GPIO port bit set/reset  register,     Address offset: 0x18      */
        __IO uint32_t
            LCKR; /*!< GPIO port configuration lock register, Address offset: 0x1C      */
        __IO uint32_t AFR
            [2]; /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
        __IO uint32_t
            BRR; /*!< GPIO Bit Reset register,               Address offset: 0x28      */
        __IO uint32_t
            HSLVR; /*!< GPIO high-speed low voltage register,  Address offset: 0x2C      */
        __IO uint32_t
            SECCFGR; /*!< GPIO secure configuration register,    Address offset: 0x30      */
    } GPIO_TypeDef;

    /**
  * @brief Global TrustZone Controller
  */
    typedef struct
    {
        uint32_t RESERVED1
            [8]; /*!< Reserved1,                                                            Address offset: 0x00-0x1C */
        __IO uint32_t
            PRIVCFGR1; /*!< TZSC privilege configuration register 1,                              Address offset: 0x20      */
        __IO uint32_t
            PRIVCFGR2; /*!< TZSC privilege configuration register 2,                              Address offset: 0x24      */
        __IO uint32_t
            PRIVCFGR3; /*!< TZSC privilege configuration register 3,                              Address offset: 0x28      */
        uint32_t RESERVED3
            [17]; /*!< Reserved3,                                                            Address offset: 0x2C-0x6C */
        __IO uint32_t
            MPCWM4ACFGR; /*!< TZSC memory 4 sub-region A watermark configuration register,          Address offset: 0x70      */
        __IO uint32_t
            MPCWM4AR; /*!< TZSC memory 4 sub-region A watermark register,                        Address offset: 0x74      */
        __IO uint32_t
            MPCWM4BCFGR; /*!< TZSC memory 4 sub-region B watermark configuration register,          Address offset: 0x78      */
        __IO uint32_t
            MPCWM4BR; /*!< TZSC memory 4 sub-region B watermark register,                        Address offset: 0x7c      */
    } GTZC_TZSC_TypeDef;

    typedef struct
    {
        uint32_t RESERVED1
            [128]; /*!< Reserved1,                                Address offset: 0x000-0x1FC */
        __IO uint32_t PRIVCFGR
            [32]; /*!< MPCBBx privilege configuration registers, Address offset: 0x200-0x280 */
    } GTZC_MPCBB_TypeDef;

    /**
  * @brief Instruction Cache
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< ICACHE control register,                Address offset: 0x00 */
        __IO uint32_t
            SR; /*!< ICACHE status register,                 Address offset: 0x04 */
        __IO uint32_t
            IER; /*!< ICACHE interrupt enable register,       Address offset: 0x08 */
        __IO uint32_t
            FCR; /*!< ICACHE Flag clear register,             Address offset: 0x0C */
        __IO uint32_t
            HMONR; /*!< ICACHE hit monitor register,            Address offset: 0x10 */
        __IO uint32_t
            MMONR; /*!< ICACHE miss monitor register,           Address offset: 0x14 */
    } ICACHE_TypeDef;

    /**
  * @brief TIM
  */
    typedef struct
    {
        __IO uint32_t
            CR1; /*!< TIM control register 1,                   Address offset: 0x00 */
        __IO uint32_t
            CR2; /*!< TIM control register 2,                   Address offset: 0x04 */
        __IO uint32_t
            SMCR; /*!< TIM slave mode control register,          Address offset: 0x08 */
        __IO uint32_t
            DIER; /*!< TIM DMA/interrupt enable register,        Address offset: 0x0C */
        __IO uint32_t
            SR; /*!< TIM status register,                      Address offset: 0x10 */
        __IO uint32_t
            EGR; /*!< TIM event generation register,            Address offset: 0x14 */
        __IO uint32_t
            CCMR1; /*!< TIM capture/compare mode register 1,      Address offset: 0x18 */
        __IO uint32_t
            CCMR2; /*!< TIM capture/compare mode register 2,      Address offset: 0x1C */
        __IO uint32_t
            CCER; /*!< TIM capture/compare enable register,      Address offset: 0x20 */
        __IO uint32_t
            CNT; /*!< TIM counter register,                     Address offset: 0x24 */
        __IO uint32_t
            PSC; /*!< TIM prescaler,                            Address offset: 0x28 */
        __IO uint32_t
            ARR; /*!< TIM auto-reload register,                 Address offset: 0x2C */
        __IO uint32_t
            RCR; /*!< TIM repetition counter register,          Address offset: 0x30 */
        __IO uint32_t
            CCR1; /*!< TIM capture/compare register 1,           Address offset: 0x34 */
        __IO uint32_t
            CCR2; /*!< TIM capture/compare register 2,           Address offset: 0x38 */
        __IO uint32_t
            CCR3; /*!< TIM capture/compare register 3,           Address offset: 0x3C */
        __IO uint32_t
            CCR4; /*!< TIM capture/compare register 4,           Address offset: 0x40 */
        __IO uint32_t
            BDTR; /*!< TIM break and dead-time register,         Address offset: 0x44 */
        __IO uint32_t
            CCR5; /*!< TIM capture/compare register 5,           Address offset: 0x48 */
        __IO uint32_t
            CCR6; /*!< TIM capture/compare register 6,           Address offset: 0x4C */
        __IO uint32_t
            CCMR3; /*!< TIM capture/compare mode register 3,      Address offset: 0x50 */
        __IO uint32_t
            DTR2; /*!< TIM deadtime register 2,                  Address offset: 0x54 */
        __IO uint32_t
            ECR; /*!< TIM encoder control register,             Address offset: 0x58 */
        __IO uint32_t
            TISEL; /*!< TIM Input Selection register,             Address offset: 0x5C */
        __IO uint32_t
            AF1; /*!< TIM alternate function option register 1, Address offset: 0x60 */
        __IO uint32_t
            AF2; /*!< TIM alternate function option register 2, Address offset: 0x64 */
        uint32_t RESERVED0
            [221]; /*!< Reserved,                               Address offset: 0x68 */
        __IO uint32_t
            DCR; /*!< TIM DMA control register,                 Address offset: 0x3DC */
        __IO uint32_t
            DMAR; /*!< TIM DMA address for full transfer,        Address offset: 0x3E0 */
    } TIM_TypeDef;

    /**
  * @brief LPTIMER
  */
    typedef struct
    {
        __IO uint32_t
            ISR; /*!< LPTIM Interrupt and Status register,    Address offset: 0x00 */
        __IO uint32_t
            ICR; /*!< LPTIM Interrupt Clear register,         Address offset: 0x04 */
        __IO uint32_t
            DIER; /*!< LPTIM Interrupt Enable register,        Address offset: 0x08 */
        __IO uint32_t
            CFGR; /*!< LPTIM Configuration register,           Address offset: 0x0C */
        __IO uint32_t
            CR; /*!< LPTIM Control register,                 Address offset: 0x10 */
        __IO uint32_t
            CCR1; /*!< LPTIM Capture/Compare register 1,       Address offset: 0x14 */
        __IO uint32_t
            ARR; /*!< LPTIM Autoreload register,              Address offset: 0x18 */
        __IO uint32_t
            CNT; /*!< LPTIM Counter register,                 Address offset: 0x1C */
        __IO uint32_t
            RESERVED0; /*!< Reserved,                               Address offset: 0x20 */
        __IO uint32_t
            CFGR2; /*!< LPTIM Configuration register 2,         Address offset: 0x24 */
        __IO uint32_t
            RCR; /*!< LPTIM Repetition register,              Address offset: 0x28 */
        __IO uint32_t
            CCMR1; /*!< LPTIM Capture/Compare mode register,    Address offset: 0x2C */
        __IO uint32_t
            RESERVED1; /*!< Reserved,                               Address offset: 0x30 */
        __IO uint32_t
            CCR2; /*!< LPTIM Capture/Compare register 2,       Address offset: 0x34 */
    } LPTIM_TypeDef;

    /**
  * @brief Comparator
  */
    typedef struct
    {
        __IO uint32_t
            SR; /*!< Comparator status register,                    Address offset: 0x00 */
        __IO uint32_t
            ICFR; /*!< Comparator interrupt clear flag register,      Address offset: 0x04 */
    } COMPOPT_TypeDef;

    typedef struct
    {
        __IO uint32_t
            SR; /*!< Comparator status register,                   Address offset: 0x00 */
        __IO uint32_t
            ICFR; /*!< Comparator interrupt clear flag register,     Address offset: 0x04 */
        __IO uint32_t
            RESERVED1; /*!< Reserved,                                     Address offset: 0x08 */
        __IO uint32_t
            CFGR1; /*!< Comparator configuration register 1  ,        Address offset: 0x0C */
        __IO uint32_t
            CFGR2; /*!< Comparator configuration register 2 ,         Address offset: 0x10 */
    } COMP_TypeDef;

    typedef struct
    {
        __IO uint32_t
            CFGR; /*!< COMP control and status register, used for bits common to several COMP instances, Address offset: 0x00 */
    } COMP_Common_TypeDef;

    /**
  * @brief Operational Amplifier (OPAMP)
  */

    typedef struct
    {
        __IO uint32_t
            CSR; /*!< OPAMP control/status register,                      Address offset: 0x00 */
        __IO uint32_t
            OTR; /*!< OPAMP offset trimming register for normal mode,     Address offset: 0x04 */
        __IO uint32_t
            HSOTR; /*!< OPAMP offset trimming register for high speed mode, Address offset: 0x08 */
    } OPAMP_TypeDef;

    /**
  * @brief Power Control
  */
    typedef struct
    {
        __IO uint32_t
            PMCR; /*!< Power mode control register ,          Address offset: 0x00      */
        __IO uint32_t
            PMSR; /*!< Power mode status register ,           Address offset: 0x04      */
        uint32_t RESERVED1
            [2]; /*!< Reserved,                              Address offset: 0x08-0x0C */
        __IO uint32_t
            VOSCR; /*!< Voltage scaling control register ,     Address offset: 0x10      */
        __IO uint32_t
            VOSSR; /*!< Voltage sacling status register ,      Address offset: 0x14      */
        uint32_t RESERVED2
            [2]; /*!< Reserved,                              Address offset: 0x18-0x1C */
        __IO uint32_t
            BDCR; /*!< BacKup domain control register ,       Address offset: 0x20      */
        __IO uint32_t
            DBPCR; /*!< DBP control register,                  Address offset: 0x24      */
        __IO uint32_t
            BDSR; /*!< BacKup domain status register,         Address offset: 0x28      */
        uint32_t
            RESERVED3; /*!< Reserved,                              Address offset: 0x38      */
        __IO uint32_t
            SCCR; /*!< Supply configuration control register, Address offset: 0x30      */
        __IO uint32_t
            VMCR; /*!< Voltage Monitor Control Register,      Address offset: 0x34      */
        uint32_t
            RESERVED4; /*!< Reserved,                              Address offset: 0x38      */
        __IO uint32_t
            VMSR; /*!< Status Register Voltage Monitoring,    Address offset: 0x3C      */
        __IO uint32_t
            WUSCR; /*!< WakeUP status clear register,          Address offset: 0x40      */
        __IO uint32_t
            WUSR; /*!< WakeUP status Register,                Address offset: 0x44      */
        __IO uint32_t
            WUCR; /*!< WakeUP configuration register,         Address offset: 0x48      */
        uint32_t
            RESERVED5; /*!< Reserved,                              Address offset: 0x4C      */
        __IO uint32_t
            IORETR; /*!< IO RETention Register,                 Address offset: 0x50      */
        uint32_t RESERVED6
            [43]; /*!< Reserved,                              Address offset: 0x54-0xFC */
        uint32_t
            RESERVED7; /*!< Reserved,                              Address offset: 0x100     */
        __IO uint32_t
            PRIVCFGR; /*!< Privilege configuration register,     Address offset: 0x104      */
    } PWR_TypeDef;

    /**
  * @brief SRAMs configuration controller
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< Control Register,                  Address offset: 0x00 */
        __IO uint32_t
            IER; /*!< Interrupt Enable Register,         Address offset: 0x04 */
        __IO uint32_t
            ISR; /*!< Interrupt Status Register,         Address offset: 0x08 */
        __IO uint32_t
            SEAR; /*!< ECC Single Error Address Register, Address offset: 0x0C */
        __IO uint32_t
            DEAR; /*!< ECC Double Error Address Register, Address offset: 0x10 */
        __IO uint32_t
            ICR; /*!< Interrupt Clear Register,          Address offset: 0x14 */
        __IO uint32_t
            WPR1; /*!< SRAM Write Protection Register 1,  Address offset: 0x18 */
        __IO uint32_t
            WPR2; /*!< SRAM Write Protection Register 2,  Address offset: 0x1C */
        uint32_t
            RESERVED; /*!< Reserved,                          Address offset: 0x20 */
        __IO uint32_t
            ECCKEY; /*!< SRAM ECC Key Register,             Address offset: 0x24 */
        __IO uint32_t
            ERKEYR; /*!< SRAM Erase Key Register,           Address offset: 0x28 */
    } RAMCFG_TypeDef;

    /**
  * @brief Reset and Clock Control
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< RCC clock control register                                               Address offset: 0x00 */
        uint32_t RESERVED1
            [3]; /*!< Reserved,                                                                Address offset: 0x04 */
        __IO uint32_t
            HSICFGR; /*!< RCC HSI Clock Calibration Register,                                      Address offset: 0x10 */
        __IO uint32_t
            CRRCR; /*!< RCC Clock Recovery RC Register,                                          Address offset: 0x14 */
        __IO uint32_t
            CSICFGR; /*!< RCC CSI Clock Calibration Register,                                      Address offset: 0x18 */
        __IO uint32_t
            CFGR1; /*!< RCC clock configuration register 1                                       Address offset: 0x1C */
        __IO uint32_t
            CFGR2; /*!< RCC clock configuration register 2                                       Address offset: 0x20 */
        uint32_t
            RESERVED2; /*!< Reserved,                                                                Address offset: 0x24 */
        __IO uint32_t
            PLL1CFGR; /*!< RCC PLL1 Configuration Register                                          Address offset: 0x28 */
        __IO uint32_t
            PLL2CFGR; /*!< RCC PLL2 Configuration Register                                          Address offset: 0x2C */
        uint32_t
            RESERVED3; /*!< Reserved,                                                                Address offset: 0x30 */
        __IO uint32_t
            PLL1DIVR; /*!< RCC PLL1 Dividers Configuration Register                                 Address offset: 0x34 */
        __IO uint32_t
            PLL1FRACR; /*!< RCC PLL1 Fractional Divider Configuration Register                       Address offset: 0x38 */
        __IO uint32_t
            PLL2DIVR; /*!< RCC PLL2 Dividers Configuration Register                                 Address offset: 0x3C */
        __IO uint32_t
            PLL2FRACR; /*!< RCC PLL2 Fractional Divider Configuration Register                       Address offset: 0x40 */
        uint32_t RESERVED4
            [2]; /*!< Reserved,                                                                Address offset: 0x44 */
        uint32_t
            RESERVED5; /*!< Reserved                                                                 Address offset: 0x4C */
        __IO uint32_t
            CIER; /*!< RCC Clock Interrupt Enable Register                                      Address offset: 0x50 */
        __IO uint32_t
            CIFR; /*!< RCC Clock Interrupt Flag Register                                        Address offset: 0x54 */
        __IO uint32_t
            CICR; /*!< RCC Clock Interrupt Clear Register                                       Address offset: 0x58 */
        uint32_t
            RESERVED6; /*!< Reserved                                                                 Address offset: 0x5C */
        __IO uint32_t
            AHB1RSTR; /*!< RCC AHB1 Peripherals Reset Register                                      Address offset: 0x60 */
        __IO uint32_t
            AHB2RSTR; /*!< RCC AHB2 Peripherals Reset Register                                      Address offset: 0x64 */
        uint32_t
            RESERVED7; /*!< Reserved                                                                 Address offset: 0x68 */
        uint32_t
            RESERVED8; /*!< Reserved,                                                                Address offset: 0x6C */
        uint32_t
            RESERVED9; /*!< Reserved                                                                 Address offset: 0x70 */
        __IO uint32_t
            APB1LRSTR; /*!< RCC APB1 Peripherals reset Low Word register                             Address offset: 0x74 */
        __IO uint32_t
            APB1HRSTR; /*!< RCC APB1 Peripherals reset High Word register                            Address offset: 0x78 */
        __IO uint32_t
            APB2RSTR; /*!< RCC APB2 Peripherals Reset Register                                      Address offset: 0x7C */
        __IO uint32_t
            APB3RSTR; /*!< RCC APB3 Peripherals Reset Register                                      Address offset: 0x80 */
        uint32_t
            RESERVED10; /*!< Reserved                                                                 Address offset: 0x84 */
        __IO uint32_t
            AHB1ENR; /*!< RCC AHB1 Peripherals Clock Enable Register                               Address offset: 0x88 */
        __IO uint32_t
            AHB2ENR; /*!< RCC AHB2 Peripherals Clock Enable Register                               Address offset: 0x8C */
        uint32_t
            RESERVED11; /*!< Reserved                                                                 Address offset: 0x90 */
        uint32_t
            RESERVED12; /*!< Reserved,                                                                Address offset: 0x94 */
        uint32_t
            RESERVED13; /*!< Reserved                                                                 Address offset: 0x98 */
        __IO uint32_t
            APB1LENR; /*!< RCC APB1 Peripherals clock Enable Low Word register                      Address offset: 0x9C */
        __IO uint32_t
            APB1HENR; /*!< RCC APB1 Peripherals clock Enable High Word register                     Address offset: 0xA0 */
        __IO uint32_t
            APB2ENR; /*!< RCC APB2 Peripherals Clock Enable Register                               Address offset: 0xA4 */
        __IO uint32_t
            APB3ENR; /*!< RCC APB3 Peripherals Clock Enable Register                               Address offset: 0xA8 */
        uint32_t
            RESERVED14; /*!< Reserved                                                                 Address offset: 0xAC */
        __IO uint32_t
            AHB1LPENR; /*!< RCC AHB1 Peripheral sleep clock Register                                 Address offset: 0xB0 */
        __IO uint32_t
            AHB2LPENR; /*!< RCC AHB2 Peripheral sleep clock Register                                 Address offset: 0xB4 */
        uint32_t
            RESERVED15; /*!< Reserved                                                                 Address offset: 0xB8 */
        uint32_t
            RESERVED16; /*!< Reserved,                                                                Address offset: 0xBC */
        uint32_t
            RESERVED17; /*!< Reserved                                                                 Address offset: 0xC0 */
        __IO uint32_t
            APB1LLPENR; /*!< RCC APB1 Peripherals sleep clock Low Word Register                       Address offset: 0xC4 */
        __IO uint32_t
            APB1HLPENR; /*!< RCC APB1 Peripherals sleep clock High Word Register                      Address offset: 0xC8 */
        __IO uint32_t
            APB2LPENR; /*!< RCC APB2 Peripherals sleep clock Register                                Address offset: 0xCC */
        __IO uint32_t
            APB3LPENR; /*!< RCC APB3 Peripherals Clock Low Power Enable Register                     Address offset: 0xD0 */
        uint32_t
            RESERVED18; /*!< Reserved                                                                 Address offset: 0xD4 */
        __IO uint32_t
            CCIPR1; /*!< RCC IPs Clocks Configuration Register 1                                  Address offset: 0xD8 */
        __IO uint32_t
            CCIPR2; /*!< RCC IPs Clocks Configuration Register 2                                  Address offset: 0xDC */
        __IO uint32_t
            CCIPR3; /*!< RCC IPs Clocks Configuration Register 3                                  Address offset: 0xE0 */
        __IO uint32_t
            CCIPR4; /*!< RCC IPs Clocks Configuration Register 4                                  Address offset: 0xE4 */
        __IO uint32_t
            CCIPR5; /*!< RCC IPs Clocks Configuration Register 5                                  Address offset: 0xE8 */
        uint32_t
            RESERVED19; /*!< Reserved,                                                                Address offset: 0xEC */
        __IO uint32_t
            BDCR; /*!< RCC VSW Backup Domain & V33 Domain Control Register                      Address offset: 0xF0 */
        __IO uint32_t
            RSR; /*!< RCC Reset status Register                                                Address offset: 0xF4 */
        uint32_t RESERVED20
            [6]; /*!< Reserved                                                                 Address offset: 0xF8 */
        uint32_t
            RESERVED21; /*!< Reserved,                                                                Address offset: 0x110 */
        __IO uint32_t
            PRIVCFGR; /*!< RCC Privilege configuration register                                     Address offset: 0x114 */
    } RCC_TypeDef;

/*
* @brief RTC Specific device feature definitions
*/
#define RTC_BKP_NB 32U
#define RTC_TAMP_NB 2U

    /**
  * @brief Real-Time Clock
  */
    typedef struct
    {
        __IO uint32_t
            TR; /*!< RTC time register,                              Address offset: 0x00 */
        __IO uint32_t
            DR; /*!< RTC date register,                              Address offset: 0x04 */
        __IO uint32_t
            SSR; /*!< RTC sub second register,                        Address offset: 0x08 */
        __IO uint32_t
            ICSR; /*!< RTC initialization control and status register, Address offset: 0x0C */
        __IO uint32_t
            PRER; /*!< RTC prescaler register,                         Address offset: 0x10 */
        __IO uint32_t
            WUTR; /*!< RTC wakeup timer register,                      Address offset: 0x14 */
        __IO uint32_t
            CR; /*!< RTC control register,                           Address offset: 0x18 */
        __IO uint32_t
            PRIVCFGR; /*!< RTC privilege mode control register,            Address offset: 0x1C */
        uint32_t
            RESERVED0; /*!< Reserved,                                       Address offset: 0x20 */
        __IO uint32_t
            WPR; /*!< RTC write protection register,                  Address offset: 0x24 */
        __IO uint32_t
            CALR; /*!< RTC calibration register,                       Address offset: 0x28 */
        __IO uint32_t
            SHIFTR; /*!< RTC shift control register,                     Address offset: 0x2C */
        __IO uint32_t
            TSTR; /*!< RTC time stamp time register,                   Address offset: 0x30 */
        __IO uint32_t
            TSDR; /*!< RTC time stamp date register,                   Address offset: 0x34 */
        __IO uint32_t
            TSSSR; /*!< RTC time-stamp sub second register,             Address offset: 0x38 */
        uint32_t
            RESERVED1; /*!< Reserved,                                       Address offset: 0x3C */
        __IO uint32_t
            ALRMAR; /*!< RTC alarm A register,                           Address offset: 0x40 */
        __IO uint32_t
            ALRMASSR; /*!< RTC alarm A sub second register,                Address offset: 0x44 */
        __IO uint32_t
            ALRMBR; /*!< RTC alarm B register,                           Address offset: 0x48 */
        __IO uint32_t
            ALRMBSSR; /*!< RTC alarm B sub second register,                Address offset: 0x4C */
        __IO uint32_t
            SR; /*!< RTC Status register,                            Address offset: 0x50 */
        __IO uint32_t
            MISR; /*!< RTC masked interrupt status register,           Address offset: 0x54 */
        uint32_t
            RESERVED2; /*!< Reserved,                                       Address offset: 0x58 */
        __IO uint32_t
            SCR; /*!< RTC status Clear register,                      Address offset: 0x5C */
        __IO uint32_t
            OR; /*!< RTC option register,                            Address offset: 0x60 */
        uint32_t RESERVED3
            [3]; /*!< Reserved,                                       Address offset: 0x64 */
        __IO uint32_t
            ALRABINR; /*!< RTC alarm A binary mode register,               Address offset: 0x70 */
        __IO uint32_t
            ALRBBINR; /*!< RTC alarm B binary mode register,               Address offset: 0x74 */
    } RTC_TypeDef;

    /**
  * @brief Tamper and backup registers
  */
    typedef struct
    {
        __IO uint32_t
            CR1; /*!< TAMP control register 1,                  Address offset: 0x00 */
        __IO uint32_t
            CR2; /*!< TAMP control register 2,                  Address offset: 0x04 */
        __IO uint32_t
            CR3; /*!< TAMP control register 3,                  Address offset: 0x08 */
        __IO uint32_t
            FLTCR; /*!< TAMP filter control register,             Address offset: 0x0C */
        __IO uint32_t
            ATCR1; /*!< TAMP filter control register 1            Address offset: 0x10 */
        __IO uint32_t
            ATSEEDR; /*!< TAMP active tamper seed register,         Address offset: 0x14 */
        __IO uint32_t
            ATOR; /*!< TAMP active tamper output register,       Address offset: 0x18 */
        __IO uint32_t
            ATCR2; /*!< TAMP filter control register 2,           Address offset: 0x1C */
        __IO uint32_t
            SECCFGR; /*!< TAMP secure mode control register,        Address offset: 0x20 */
        __IO uint32_t
            PRIVCFGR; /*!< TAMP privilege mode control register,     Address offset: 0x24 */
        uint32_t
            RESERVED0; /*!< Reserved,                                 Address offset: 0x28 */
        __IO uint32_t
            IER; /*!< TAMP interrupt enable register,           Address offset: 0x2C */
        __IO uint32_t
            SR; /*!< TAMP status register,                     Address offset: 0x30 */
        __IO uint32_t
            MISR; /*!< TAMP masked interrupt status register,    Address offset: 0x34 */
        uint32_t
            RESERVED1; /*!< Reserved,                                 Address offset: 0x38 */
        __IO uint32_t
            SCR; /*!< TAMP status clear register,               Address offset: 0x3C */
        __IO uint32_t
            COUNT1R; /*!< TAMP monotonic counter register,          Address offset: 0x40 */
        uint32_t RESERVED2
            [3]; /*!< Reserved,                                 Address offset: 0x44 -- 0x4C */
        __IO uint32_t
            OR; /*!< TAMP option register,                     Address offset: 0x50 */
        __IO uint32_t
            ERCFGR; /*!< TAMP erase configuration register,        Address offset: 0x54 */
        uint32_t RESERVED3
            [42]; /*!< Reserved,                                Address offset: 0x58 -- 0xFC */
        __IO uint32_t
            BKP0R; /*!< TAMP backup register 0,                   Address offset: 0x100 */
        __IO uint32_t
            BKP1R; /*!< TAMP backup register 1,                   Address offset: 0x104 */
        __IO uint32_t
            BKP2R; /*!< TAMP backup register 2,                   Address offset: 0x108 */
        __IO uint32_t
            BKP3R; /*!< TAMP backup register 3,                   Address offset: 0x10C */
        __IO uint32_t
            BKP4R; /*!< TAMP backup register 4,                   Address offset: 0x110 */
        __IO uint32_t
            BKP5R; /*!< TAMP backup register 5,                   Address offset: 0x114 */
        __IO uint32_t
            BKP6R; /*!< TAMP backup register 6,                   Address offset: 0x118 */
        __IO uint32_t
            BKP7R; /*!< TAMP backup register 7,                   Address offset: 0x11C */
        __IO uint32_t
            BKP8R; /*!< TAMP backup register 8,                   Address offset: 0x120 */
        __IO uint32_t
            BKP9R; /*!< TAMP backup register 9,                   Address offset: 0x124 */
        __IO uint32_t
            BKP10R; /*!< TAMP backup register 10,                  Address offset: 0x128 */
        __IO uint32_t
            BKP11R; /*!< TAMP backup register 11,                  Address offset: 0x12C */
        __IO uint32_t
            BKP12R; /*!< TAMP backup register 12,                  Address offset: 0x130 */
        __IO uint32_t
            BKP13R; /*!< TAMP backup register 13,                  Address offset: 0x134 */
        __IO uint32_t
            BKP14R; /*!< TAMP backup register 14,                  Address offset: 0x138 */
        __IO uint32_t
            BKP15R; /*!< TAMP backup register 15,                  Address offset: 0x13C */
        __IO uint32_t
            BKP16R; /*!< TAMP backup register 16,                  Address offset: 0x140 */
        __IO uint32_t
            BKP17R; /*!< TAMP backup register 17,                  Address offset: 0x144 */
        __IO uint32_t
            BKP18R; /*!< TAMP backup register 18,                  Address offset: 0x148 */
        __IO uint32_t
            BKP19R; /*!< TAMP backup register 19,                  Address offset: 0x14C */
        __IO uint32_t
            BKP20R; /*!< TAMP backup register 20,                  Address offset: 0x150 */
        __IO uint32_t
            BKP21R; /*!< TAMP backup register 21,                  Address offset: 0x154 */
        __IO uint32_t
            BKP22R; /*!< TAMP backup register 22,                  Address offset: 0x158 */
        __IO uint32_t
            BKP23R; /*!< TAMP backup register 23,                  Address offset: 0x15C */
        __IO uint32_t
            BKP24R; /*!< TAMP backup register 24,                  Address offset: 0x160 */
        __IO uint32_t
            BKP25R; /*!< TAMP backup register 25,                  Address offset: 0x164 */
        __IO uint32_t
            BKP26R; /*!< TAMP backup register 26,                  Address offset: 0x168 */
        __IO uint32_t
            BKP27R; /*!< TAMP backup register 27,                  Address offset: 0x16C */
        __IO uint32_t
            BKP28R; /*!< TAMP backup register 28,                  Address offset: 0x170 */
        __IO uint32_t
            BKP29R; /*!< TAMP backup register 29,                  Address offset: 0x174 */
        __IO uint32_t
            BKP30R; /*!< TAMP backup register 30,                  Address offset: 0x178 */
        __IO uint32_t
            BKP31R; /*!< TAMP backup register 31,                  Address offset: 0x17C */
    } TAMP_TypeDef;

    /**
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */
    typedef struct
    {
        __IO uint32_t
            CR1; /*!< USART Control register 1,                 Address offset: 0x00  */
        __IO uint32_t
            CR2; /*!< USART Control register 2,                 Address offset: 0x04  */
        __IO uint32_t
            CR3; /*!< USART Control register 3,                 Address offset: 0x08  */
        __IO uint32_t
            BRR; /*!< USART Baud rate register,                 Address offset: 0x0C  */
        __IO uint32_t
            GTPR; /*!< USART Guard time and prescaler register,  Address offset: 0x10  */
        __IO uint32_t
            RTOR; /*!< USART Receiver Time Out register,         Address offset: 0x14  */
        __IO uint32_t
            RQR; /*!< USART Request register,                   Address offset: 0x18  */
        __IO uint32_t
            ISR; /*!< USART Interrupt and status register,      Address offset: 0x1C  */
        __IO uint32_t
            ICR; /*!< USART Interrupt flag Clear register,      Address offset: 0x20  */
        __IO uint32_t
            RDR; /*!< USART Receive Data register,              Address offset: 0x24  */
        __IO uint32_t
            TDR; /*!< USART Transmit Data register,             Address offset: 0x28  */
        __IO uint32_t
            PRESC; /*!< USART Prescaler register,                 Address offset: 0x2C  */
    } USART_TypeDef;

    /**
  * @brief System configuration, Boot and Security
  */
    typedef struct
    {
        uint32_t RESERVED1
            [4]; /*!< RESERVED1,                                       Address offset: 0x00 - 0x0C */
        __IO uint32_t
            HDPLCR; /*!< SBS HDPL Control Register,                       Address offset: 0x10 */
        __IO uint32_t
            HDPLSR; /*!< SBS HDPL Status Register,                        Address offset: 0x14 */
        __IO uint32_t RESERVED2
            [2]; /*!< RESERVED2,                                       Address offset: 0x18 - 0x1C */
        __IO uint32_t
            DBGCR; /*!< SBS Debug Control Register,                      Address offset: 0x20 */
        __IO uint32_t
            DBGLOCKR; /*!< SBS Debug Lock Register,                         Address offset: 0x24 */
        uint32_t RESERVED3
            [3]; /*!< RESERVED3,                                       Address offset: 0x28 - 0x30 */
        uint32_t RESERVED4
            [36]; /*!< RESERVED4,                                      Address offset: 0x34 - 0xC0 */
        uint32_t RESERVED6
            [15]; /*!< RESERVED6,                                       Address offset: 0xC4 - 0xFC */
        __IO uint32_t
            PMCR; /*!< SBS Product Mode & Config Register,              Address offset: 0x100 */
        __IO uint32_t
            FPUIMR; /*!< SBS FPU Interrupt Mask Register,                 Address offset: 0x104 */
        __IO uint32_t
            MESR; /*!< SBS Memory Erase Status Register,                Address offset: 0x108 */
        uint32_t
            RESERVED7; /*!< RESERVED7,                                       Address offset: 0x10C */
        __IO uint32_t
            CCCSR; /*!< SBS Compensation Cell Control & Status Register, Address offset: 0x110 */
        __IO uint32_t
            CCVALR; /*!< SBS Compensation Cell Value Register,            Address offset: 0x114 */
        __IO uint32_t
            CCSWCR; /*!< SBS Compensation Cell for I/Os sw code Register, Address offset: 0x118 */
        __IO uint32_t
            RESERVED8; /*!< RESERVED8,                                       Address offset: 0x11C */
        __IO uint32_t
            CFGR2; /*!< SBS Class B Register,                            Address offset: 0x120 */
        uint32_t RESERVED9
            [8]; /*!< RESERVED9,                                       Address offset: 0x124 - 0x140 */
        __IO uint32_t
            CNSLCKR; /*!< SBS CPU Non-secure Lock Register,                Address offset: 0x144 */
        uint32_t
            RESERVED10; /*!< RESERVED10,                                      Address offset: 0x148 */
        __IO uint32_t
            ECCNMIR; /*!< SBS FLITF ECC NMI MASK Register,                 Address offset: 0x14C */
    } SBS_TypeDef;

    /**
  * @brief Universal Serial Bus Full Speed Dual Role Device
  */
    typedef struct
    {
        __IO uint32_t
            CHEP0R; /*!< USB Channel/Endpoint 0 register,      Address offset: 0x00 */
        __IO uint32_t
            CHEP1R; /*!< USB Channel/Endpoint 1 register,      Address offset: 0x04 */
        __IO uint32_t
            CHEP2R; /*!< USB Channel/Endpoint 2 register,      Address offset: 0x08 */
        __IO uint32_t
            CHEP3R; /*!< USB Channel/Endpoint 3 register,      Address offset: 0x0C */
        __IO uint32_t
            CHEP4R; /*!< USB Channel/Endpoint 4 register,      Address offset: 0x10 */
        __IO uint32_t
            CHEP5R; /*!< USB Channel/Endpoint 5 register,      Address offset: 0x14 */
        __IO uint32_t
            CHEP6R; /*!< USB Channel/Endpoint 6 register,      Address offset: 0x18 */
        __IO uint32_t
            CHEP7R; /*!< USB Channel/Endpoint 7 register,      Address offset: 0x1C */
        __IO uint32_t RESERVED0
            [8]; /*!< Reserved,                                                  */
        __IO uint32_t
            CNTR; /*!< Control register,                     Address offset: 0x40 */
        __IO uint32_t
            ISTR; /*!< Interrupt status register,            Address offset: 0x44 */
        __IO uint32_t
            FNR; /*!< Frame number register,                Address offset: 0x48 */
        __IO uint32_t
            DADDR; /*!< Device address register,              Address offset: 0x4C */
        __IO uint32_t RESERVED1; /*!< Reserved */
        __IO uint32_t
            LPMCSR; /*!< LPM Control and Status register,      Address offset: 0x54 */
        __IO uint32_t
            BCDR; /*!< Battery Charging detector register,   Address offset: 0x58 */
    } USB_DRD_TypeDef;

    /**
  * @brief Universal Serial Bus PacketMemoryArea Buffer Descriptor Table
  */
    typedef struct
    {
        __IO uint32_t TXBD; /*!<Transmission buffer address*/
        __IO uint32_t RXBD; /*!<Reception buffer address */
    } USB_DRD_PMABuffDescTypeDef;

    /**
  * @brief FD Controller Area Network
  */
    typedef struct
    {
        __IO uint32_t
            CREL; /*!< FDCAN Core Release register,                                     Address offset: 0x000 */
        __IO uint32_t
            ENDN; /*!< FDCAN Endian register,                                           Address offset: 0x004 */
        uint32_t
            RESERVED1; /*!< Reserved,                                                                        0x008 */
        __IO uint32_t
            DBTP; /*!< FDCAN Data Bit Timing & Prescaler register,                      Address offset: 0x00C */
        __IO uint32_t
            TEST; /*!< FDCAN Test register,                                             Address offset: 0x010 */
        __IO uint32_t
            RWD; /*!< FDCAN RAM Watchdog register,                                     Address offset: 0x014 */
        __IO uint32_t
            CCCR; /*!< FDCAN CC Control register,                                       Address offset: 0x018 */
        __IO uint32_t
            NBTP; /*!< FDCAN Nominal Bit Timing & Prescaler register,                   Address offset: 0x01C */
        __IO uint32_t
            TSCC; /*!< FDCAN Timestamp Counter Configuration register,                  Address offset: 0x020 */
        __IO uint32_t
            TSCV; /*!< FDCAN Timestamp Counter Value register,                          Address offset: 0x024 */
        __IO uint32_t
            TOCC; /*!< FDCAN Timeout Counter Configuration register,                    Address offset: 0x028 */
        __IO uint32_t
            TOCV; /*!< FDCAN Timeout Counter Value register,                            Address offset: 0x02C */
        uint32_t RESERVED2
            [4]; /*!< Reserved,                                                                0x030 - 0x03C */
        __IO uint32_t
            ECR; /*!< FDCAN Error Counter register,                                    Address offset: 0x040 */
        __IO uint32_t
            PSR; /*!< FDCAN Protocol Status register,                                  Address offset: 0x044 */
        __IO uint32_t
            TDCR; /*!< FDCAN Transmitter Delay Compensation register,                   Address offset: 0x048 */
        uint32_t
            RESERVED3; /*!< Reserved,                                                                        0x04C */
        __IO uint32_t
            IR; /*!< FDCAN Interrupt register,                                        Address offset: 0x050 */
        __IO uint32_t
            IE; /*!< FDCAN Interrupt Enable register,                                 Address offset: 0x054 */
        __IO uint32_t
            ILS; /*!< FDCAN Interrupt Line Select register,                            Address offset: 0x058 */
        __IO uint32_t
            ILE; /*!< FDCAN Interrupt Line Enable register,                            Address offset: 0x05C */
        uint32_t RESERVED4
            [8]; /*!< Reserved,                                                                0x060 - 0x07C */
        __IO uint32_t
            RXGFC; /*!< FDCAN Global Filter Configuration register,                      Address offset: 0x080 */
        __IO uint32_t
            XIDAM; /*!< FDCAN Extended ID AND Mask register,                             Address offset: 0x084 */
        __IO uint32_t
            HPMS; /*!< FDCAN High Priority Message Status register,                     Address offset: 0x088 */
        uint32_t
            RESERVED5; /*!< Reserved,                                                                        0x08C */
        __IO uint32_t
            RXF0S; /*!< FDCAN Rx FIFO 0 Status register,                                 Address offset: 0x090 */
        __IO uint32_t
            RXF0A; /*!< FDCAN Rx FIFO 0 Acknowledge register,                            Address offset: 0x094 */
        __IO uint32_t
            RXF1S; /*!< FDCAN Rx FIFO 1 Status register,                                 Address offset: 0x098 */
        __IO uint32_t
            RXF1A; /*!< FDCAN Rx FIFO 1 Acknowledge register,                            Address offset: 0x09C */
        uint32_t RESERVED6
            [8]; /*!< Reserved,                                                                0x0A0 - 0x0BC */
        __IO uint32_t
            TXBC; /*!< FDCAN Tx Buffer Configuration register,                          Address offset: 0x0C0 */
        __IO uint32_t
            TXFQS; /*!< FDCAN Tx FIFO/Queue Status register,                             Address offset: 0x0C4 */
        __IO uint32_t
            TXBRP; /*!< FDCAN Tx Buffer Request Pending register,                        Address offset: 0x0C8 */
        __IO uint32_t
            TXBAR; /*!< FDCAN Tx Buffer Add Request register,                            Address offset: 0x0CC */
        __IO uint32_t
            TXBCR; /*!< FDCAN Tx Buffer Cancellation Request register,                   Address offset: 0x0D0 */
        __IO uint32_t
            TXBTO; /*!< FDCAN Tx Buffer Transmission Occurred register,                  Address offset: 0x0D4 */
        __IO uint32_t
            TXBCF; /*!< FDCAN Tx Buffer Cancellation Finished register,                  Address offset: 0x0D8 */
        __IO uint32_t
            TXBTIE; /*!< FDCAN Tx Buffer Transmission Interrupt Enable register,          Address offset: 0x0DC */
        __IO uint32_t
            TXBCIE; /*!< FDCAN Tx Buffer Cancellation Finished Interrupt Enable register, Address offset: 0x0E0 */
        __IO uint32_t
            TXEFS; /*!< FDCAN Tx Event FIFO Status register,                             Address offset: 0x0E4 */
        __IO uint32_t
            TXEFA; /*!< FDCAN Tx Event FIFO Acknowledge register,                        Address offset: 0x0E8 */
    } FDCAN_GlobalTypeDef;

    /**
  * @brief FD Controller Area Network Configuration
  */
    typedef struct
    {
        __IO uint32_t
            CKDIV; /*!< FDCAN clock divider register,                            Address offset: 0x100 + 0x000 */
        uint32_t RESERVED1
            [128]; /*!< Reserved,                                               0x100 + 0x004 - 0x100 + 0x200 */
        __IO uint32_t
            OPTR; /*!< FDCAN option register,                                   Address offset: 0x100 + 0x204 */
        uint32_t RESERVED2
            [58]; /*!< Reserved,                                                0x100 + 0x208 - 0x100 + 0x2EC */
        __IO uint32_t
            HWCFG; /*!< FDCAN hardware configuration register,                   Address offset: 0x100 + 0x2F0 */
        __IO uint32_t
            VERR; /*!< FDCAN IP version register,                               Address offset: 0x100 + 0x2F4 */
        __IO uint32_t
            IPIDR; /*!< FDCAN IP ID register,                                    Address offset: 0x100 + 0x2F8 */
        __IO uint32_t
            SIDR; /*!< FDCAN size ID register,                                  Address offset: 0x100 + 0x2FC */
    } FDCAN_Config_TypeDef;

    /**
  * @brief ADC
  */
    typedef struct
    {
        __IO uint32_t
            ISR; /*!< ADC interrupt and status register,             Address offset: 0x00 */
        __IO uint32_t
            IER; /*!< ADC interrupt enable register,                 Address offset: 0x04 */
        __IO uint32_t
            CR; /*!< ADC control register,                          Address offset: 0x08 */
        __IO uint32_t
            CFGR; /*!< ADC configuration register 1,                  Address offset: 0x0C */
        __IO uint32_t
            CFGR2; /*!< ADC configuration register 2,                  Address offset: 0x10 */
        __IO uint32_t
            SMPR1; /*!< ADC sampling time register 1,                  Address offset: 0x14 */
        __IO uint32_t
            SMPR2; /*!< ADC sampling time register 2,                  Address offset: 0x18 */
        uint32_t
            RESERVED1; /*!< Reserved,                                                      0x1C */
        __IO uint32_t
            TR1; /*!< ADC analog watchdog 1 threshold register,      Address offset: 0x20 */
        __IO uint32_t
            TR2; /*!< ADC analog watchdog 2 threshold register,      Address offset: 0x24 */
        __IO uint32_t
            TR3; /*!< ADC analog watchdog 3 threshold register,      Address offset: 0x28 */
        uint32_t
            RESERVED2; /*!< Reserved,                                                      0x2C */
        __IO uint32_t
            SQR1; /*!< ADC group regular sequencer register 1,        Address offset: 0x30 */
        __IO uint32_t
            SQR2; /*!< ADC group regular sequencer register 2,        Address offset: 0x34 */
        __IO uint32_t
            SQR3; /*!< ADC group regular sequencer register 3,        Address offset: 0x38 */
        __IO uint32_t
            SQR4; /*!< ADC group regular sequencer register 4,        Address offset: 0x3C */
        __IO uint32_t
            DR; /*!< ADC group regular data register,               Address offset: 0x40 */
        uint32_t
            RESERVED3; /*!< Reserved,                                                      0x44 */
        uint32_t
            RESERVED4; /*!< Reserved,                                                      0x48 */
        __IO uint32_t
            JSQR; /*!< ADC group injected sequencer register,         Address offset: 0x4C */
        uint32_t RESERVED5
            [4]; /*!< Reserved,                                               0x50 - 0x5C */
        __IO uint32_t
            OFR1; /*!< ADC offset register 1,                         Address offset: 0x60 */
        __IO uint32_t
            OFR2; /*!< ADC offset register 2,                         Address offset: 0x64 */
        __IO uint32_t
            OFR3; /*!< ADC offset register 3,                         Address offset: 0x68 */
        __IO uint32_t
            OFR4; /*!< ADC offset register 4,                         Address offset: 0x6C */
        uint32_t RESERVED6
            [4]; /*!< Reserved,                                               0x70 - 0x7C */
        __IO uint32_t
            JDR1; /*!< ADC group injected rank 1 data register,       Address offset: 0x80 */
        __IO uint32_t
            JDR2; /*!< ADC group injected rank 2 data register,       Address offset: 0x84 */
        __IO uint32_t
            JDR3; /*!< ADC group injected rank 3 data register,       Address offset: 0x88 */
        __IO uint32_t
            JDR4; /*!< ADC group injected rank 4 data register,       Address offset: 0x8C */
        uint32_t RESERVED7
            [4]; /*!< Reserved,                                             0x090 - 0x09C */
        __IO uint32_t
            AWD2CR; /*!< ADC analog watchdog 2 configuration register,  Address offset: 0xA0 */
        __IO uint32_t
            AWD3CR; /*!< ADC analog watchdog 3 Configuration Register,  Address offset: 0xA4 */
        uint32_t
            RESERVED8; /*!< Reserved,                                                     0x0A8 */
        uint32_t
            RESERVED9; /*!< Reserved,                                                     0x0AC */
        __IO uint32_t
            DIFSEL; /*!< ADC differential mode selection register,      Address offset: 0xB0 */
        __IO uint32_t
            CALFACT; /*!< ADC calibration factors,                       Address offset: 0xB4 */
        uint32_t RESERVED10
            [4]; /*!< Reserved,                                             0x0B8 - 0x0C4 */
        __IO uint32_t
            OR; /*!< ADC option register,                           Address offset: 0xC8 */
    } ADC_TypeDef;

    typedef struct
    {
        __IO uint32_t
            CSR; /*!< ADC common status register,            Address offset: 0x300 + 0x00 */
        uint32_t
            RESERVED1; /*!< Reserved,                              Address offset: 0x300 + 0x04 */
        __IO uint32_t
            CCR; /*!< ADC common configuration register,     Address offset: 0x300 + 0x08 */
        __IO uint32_t
            CDR; /*!< ADC common group regular data register Address offset: 0x300 + 0x0C */
    } ADC_Common_TypeDef;

    /**
  * @brief IWDG
  */
    typedef struct
    {
        __IO uint32_t
            KR; /*!< IWDG Key register,          Address offset: 0x00 */
        __IO uint32_t
            PR; /*!< IWDG Prescaler register,    Address offset: 0x04 */
        __IO uint32_t
            RLR; /*!< IWDG Reload register,       Address offset: 0x08 */
        __IO uint32_t
            SR; /*!< IWDG Status register,       Address offset: 0x0C */
        __IO uint32_t
            WINR; /*!< IWDG Window register,       Address offset: 0x10 */
        __IO uint32_t
            EWCR; /*!< IWDG Early Wakeup register, Address offset: 0x14 */
    } IWDG_TypeDef;

    /**
  * @brief SPI
  */
    typedef struct
    {
        __IO uint32_t
            CR1; /*!< SPI/I2S Control register 1,                      Address offset: 0x00 */
        __IO uint32_t
            CR2; /*!< SPI Control register 2,                          Address offset: 0x04 */
        __IO uint32_t
            CFG1; /*!< SPI Configuration register 1,                    Address offset: 0x08 */
        __IO uint32_t
            CFG2; /*!< SPI Configuration register 2,                    Address offset: 0x0C */
        __IO uint32_t
            IER; /*!< SPI/I2S Interrupt Enable register,               Address offset: 0x10 */
        __IO uint32_t
            SR; /*!< SPI/I2S Status register,                         Address offset: 0x14 */
        __IO uint32_t
            IFCR; /*!< SPI/I2S Interrupt/Status flags clear register,   Address offset: 0x18 */
        uint32_t
            RESERVED0; /*!< Reserved, 0x1C                                                        */
        __IO uint32_t
            TXDR; /*!< SPI/I2S Transmit data register,                  Address offset: 0x20 */
        uint32_t RESERVED1
            [3]; /*!< Reserved, 0x24-0x2C                                                   */
        __IO uint32_t
            RXDR; /*!< SPI/I2S Receive data register,                   Address offset: 0x30 */
        uint32_t RESERVED2
            [3]; /*!< Reserved, 0x34-0x3C                                                   */
        __IO uint32_t
            CRCPOLY; /*!< SPI CRC Polynomial register,                     Address offset: 0x40 */
        __IO uint32_t
            TXCRC; /*!< SPI Transmitter CRC register,                    Address offset: 0x44 */
        __IO uint32_t
            RXCRC; /*!< SPI Receiver CRC register,                       Address offset: 0x48 */
        __IO uint32_t
            UDRDR; /*!< SPI Underrun data register,                      Address offset: 0x4C */
        __IO uint32_t
            I2SCFGR; /*!< I2S Configuration register,                      Address offset: 0x50 */
    } SPI_TypeDef;

    /**
  * @brief DTS
  */
    typedef struct
    {
        __IO uint32_t
            CFGR1; /*!< DTS configuration register,                Address offset: 0x00 */
        uint32_t
            RESERVED0; /*!< Reserved,                                  Address offset: 0x04 */
        __IO uint32_t
            T0VALR1; /*!< DTS T0 Value register,                     Address offset: 0x08 */
        uint32_t
            RESERVED1; /*!< Reserved,                                  Address offset: 0x0C */
        __IO uint32_t
            RAMPVALR; /*!< DTS Ramp value register,                   Address offset: 0x10 */
        __IO uint32_t
            ITR1; /*!< DTS Interrupt threshold register,          Address offset: 0x14 */
        uint32_t
            RESERVED2; /*!< Reserved,                                  Address offset: 0x18 */
        __IO uint32_t
            DR; /*!< DTS data register,                         Address offset: 0x1C */
        __IO uint32_t
            SR; /*!< DTS status register                        Address offset: 0x20 */
        __IO uint32_t
            ITENR; /*!< DTS Interrupt enable register,             Address offset: 0x24 */
        __IO uint32_t
            ICIFR; /*!< DTS Clear Interrupt flag register,         Address offset: 0x28 */
        __IO uint32_t
            OR; /*!< DTS option register 1,                     Address offset: 0x2C */
    } DTS_TypeDef;

    /**
  * @brief WWDG
  */
    typedef struct
    {
        __IO uint32_t
            CR; /*!< WWDG Control register,       Address offset: 0x00 */
        __IO uint32_t
            CFR; /*!< WWDG Configuration register, Address offset: 0x04 */
        __IO uint32_t
            SR; /*!< WWDG Status register,        Address offset: 0x08 */
    } WWDG_TypeDef;

/*@}*/ /* end of group STM32H503xx_Peripherals */

/* --------  End of section using anonymous unions and disabling warnings  -------- */
#if defined(__CC_ARM)
#pragma pop
#elif defined(__ICCARM__)
/* leave anonymous unions enabled */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning restore
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

    /* =========================================================================================================================== */
    /* ================                          Device Specific Peripheral Address Map                           ================ */
    /* =========================================================================================================================== */

    /** @addtogroup STM32H5xx_Peripheral_peripheralAddr
  * @{
  */

    /* Internal SRAMs size */

#define SRAM1_SIZE (0x4000UL)   /*!< SRAM1=16k  */
#define SRAM2_SIZE (0x4000UL)   /*!< SRAM2=16k  */
#define BKPSRAM_SIZE (0x0800UL) /*!< BKPSRAM=2k */

/* Flash, Peripheral and internal SRAMs base addresses - Non secure */
#define FLASH_BASE_NS \
    (0x08000000UL) /*!< FLASH (up to 128 KB) non-secure base address       */
#define SRAM1_BASE_NS \
    (0x20000000UL) /*!< SRAM1 (16 KB) non-secure base address              */
#define SRAM2_BASE_NS \
    (0x20004000UL) /*!< SRAM2 (16 KB) non-secure base address              */
#define PERIPH_BASE_NS \
    (0x40000000UL) /*!< Peripheral non-secure base address                 */

/* Peripheral memory map - Non secure */
#define APB1PERIPH_BASE_NS PERIPH_BASE_NS
#define APB2PERIPH_BASE_NS (PERIPH_BASE_NS + 0x00010000UL)
#define AHB1PERIPH_BASE_NS (PERIPH_BASE_NS + 0x00020000UL)
#define AHB2PERIPH_BASE_NS (PERIPH_BASE_NS + 0x02020000UL)
#define APB3PERIPH_BASE_NS (PERIPH_BASE_NS + 0x04000000UL)
#define AHB3PERIPH_BASE_NS (PERIPH_BASE_NS + 0x04020000UL)

/*!< APB1 Non secure peripherals */
#define TIM2_BASE_NS (APB1PERIPH_BASE_NS + 0x0000UL)
#define TIM3_BASE_NS (APB1PERIPH_BASE_NS + 0x0400UL)
#define TIM6_BASE_NS (APB1PERIPH_BASE_NS + 0x1000UL)
#define TIM7_BASE_NS (APB1PERIPH_BASE_NS + 0x1400UL)
#define WWDG_BASE_NS (APB1PERIPH_BASE_NS + 0x2C00UL)
#define IWDG_BASE_NS (APB1PERIPH_BASE_NS + 0x3000UL)
#define OPAMP1_BASE_NS (APB1PERIPH_BASE_NS + 0x3400UL)
#define SPI2_BASE_NS (APB1PERIPH_BASE_NS + 0x3800UL)
#define SPI3_BASE_NS (APB1PERIPH_BASE_NS + 0x3C00UL)
#define COMP1_BASE_NS (APB1PERIPH_BASE_NS + 0x4000UL)
#define USART2_BASE_NS (APB1PERIPH_BASE_NS + 0x4400UL)
#define USART3_BASE_NS (APB1PERIPH_BASE_NS + 0x4800UL)
#define I2C1_BASE_NS (APB1PERIPH_BASE_NS + 0x5400UL)
#define I2C2_BASE_NS (APB1PERIPH_BASE_NS + 0x5800UL)
#define I3C1_BASE_NS (APB1PERIPH_BASE_NS + 0x5C00UL)
#define CRS_BASE_NS (APB1PERIPH_BASE_NS + 0x6000UL)
#define DTS_BASE_NS (APB1PERIPH_BASE_NS + 0x8C00UL)
#define LPTIM2_BASE_NS (APB1PERIPH_BASE_NS + 0x9400UL)
#define FDCAN1_BASE_NS (APB1PERIPH_BASE_NS + 0xA400UL)
#define FDCAN_CONFIG_BASE_NS (APB1PERIPH_BASE_NS + 0xA500UL)
#define SRAMCAN_BASE_NS (APB1PERIPH_BASE_NS + 0xAC00UL)

/*!< APB2 Non secure peripherals */
#define TIM1_BASE_NS (APB2PERIPH_BASE_NS + 0x2C00UL)
#define SPI1_BASE_NS (APB2PERIPH_BASE_NS + 0x3000UL)
#define USART1_BASE_NS (APB2PERIPH_BASE_NS + 0x3800UL)
#define USB_DRD_BASE_NS (APB2PERIPH_BASE_NS + 0x6000UL)
#define USB_DRD_PMAADDR_NS (APB2PERIPH_BASE_NS + 0x6400UL)

/*!< AHB1 Non secure peripherals */
#define GPDMA1_BASE_NS AHB1PERIPH_BASE_NS
#define GPDMA2_BASE_NS (AHB1PERIPH_BASE_NS + 0x01000UL)
#define FLASH_R_BASE_NS (AHB1PERIPH_BASE_NS + 0x02000UL)
#define CRC_BASE_NS (AHB1PERIPH_BASE_NS + 0x03000UL)
#define RAMCFG_BASE_NS (AHB1PERIPH_BASE_NS + 0x06000UL)
#define ICACHE_BASE_NS (AHB1PERIPH_BASE_NS + 0x10400UL)
#define GTZC_TZSC1_BASE_NS (AHB1PERIPH_BASE_NS + 0x12400UL)
#define GTZC_MPCBB1_BASE_NS (AHB1PERIPH_BASE_NS + 0x12C00UL)
#define GTZC_MPCBB2_BASE_NS (AHB1PERIPH_BASE_NS + 0x13000UL)
#define BKPSRAM_BASE_NS (AHB1PERIPH_BASE_NS + 0x16400UL)

#define GPDMA1_Channel0_BASE_NS (GPDMA1_BASE_NS + 0x0050UL)
#define GPDMA1_Channel1_BASE_NS (GPDMA1_BASE_NS + 0x00D0UL)
#define GPDMA1_Channel2_BASE_NS (GPDMA1_BASE_NS + 0x0150UL)
#define GPDMA1_Channel3_BASE_NS (GPDMA1_BASE_NS + 0x01D0UL)
#define GPDMA1_Channel4_BASE_NS (GPDMA1_BASE_NS + 0x0250UL)
#define GPDMA1_Channel5_BASE_NS (GPDMA1_BASE_NS + 0x02D0UL)
#define GPDMA1_Channel6_BASE_NS (GPDMA1_BASE_NS + 0x0350UL)
#define GPDMA1_Channel7_BASE_NS (GPDMA1_BASE_NS + 0x03D0UL)
#define GPDMA2_Channel0_BASE_NS (GPDMA2_BASE_NS + 0x0050UL)
#define GPDMA2_Channel1_BASE_NS (GPDMA2_BASE_NS + 0x00D0UL)
#define GPDMA2_Channel2_BASE_NS (GPDMA2_BASE_NS + 0x0150UL)
#define GPDMA2_Channel3_BASE_NS (GPDMA2_BASE_NS + 0x01D0UL)
#define GPDMA2_Channel4_BASE_NS (GPDMA2_BASE_NS + 0x0250UL)
#define GPDMA2_Channel5_BASE_NS (GPDMA2_BASE_NS + 0x02D0UL)
#define GPDMA2_Channel6_BASE_NS (GPDMA2_BASE_NS + 0x0350UL)
#define GPDMA2_Channel7_BASE_NS (GPDMA2_BASE_NS + 0x03D0UL)

#define RAMCFG_SRAM1_BASE_NS (RAMCFG_BASE_NS)
#define RAMCFG_SRAM2_BASE_NS (RAMCFG_BASE_NS + 0x0040UL)
#define RAMCFG_BKPRAM_BASE_NS (RAMCFG_BASE_NS + 0x0100UL)

/*!< AHB2 Non secure peripherals */
#define GPIOA_BASE_NS (AHB2PERIPH_BASE_NS + 0x00000UL)
#define GPIOB_BASE_NS (AHB2PERIPH_BASE_NS + 0x00400UL)
#define GPIOC_BASE_NS (AHB2PERIPH_BASE_NS + 0x00800UL)
#define GPIOD_BASE_NS (AHB2PERIPH_BASE_NS + 0x00C00UL)
#define GPIOH_BASE_NS (AHB2PERIPH_BASE_NS + 0x01C00UL)
#define ADC1_BASE_NS (AHB2PERIPH_BASE_NS + 0x08000UL)
#define ADC12_COMMON_BASE_NS (AHB2PERIPH_BASE_NS + 0x08300UL)
#define DAC1_BASE_NS (AHB2PERIPH_BASE_NS + 0x08400UL)

#define HASH_BASE_NS (AHB2PERIPH_BASE_NS + 0xA0400UL)
#define HASH_DIGEST_BASE_NS (AHB2PERIPH_BASE_NS + 0xA0710UL)
#define RNG_BASE_NS (AHB2PERIPH_BASE_NS + 0xA0800UL)

/*!< APB3 Non secure peripherals */
#define SBS_BASE_NS (APB3PERIPH_BASE_NS + 0x0400UL)
#define LPUART1_BASE_NS (APB3PERIPH_BASE_NS + 0x2400UL)
#define I3C2_BASE_NS (APB3PERIPH_BASE_NS + 0x3000UL)
#define LPTIM1_BASE_NS (APB3PERIPH_BASE_NS + 0x4400UL)
#define RTC_BASE_NS (APB3PERIPH_BASE_NS + 0x7800UL)
#define TAMP_BASE_NS (APB3PERIPH_BASE_NS + 0x7C00UL)

/*!< AHB3 Non secure peripherals */
#define PWR_BASE_NS (AHB3PERIPH_BASE_NS + 0x0800UL)
#define RCC_BASE_NS (AHB3PERIPH_BASE_NS + 0x0C00UL)
#define EXTI_BASE_NS (AHB3PERIPH_BASE_NS + 0x2000UL)
#define DEBUG_BASE_NS (AHB3PERIPH_BASE_NS + 0x4000UL)

/* Debug MCU registers base address */
#define DBGMCU_BASE (0x44024000UL)

#define PACKAGE_BASE \
    (0x08FFF80EUL)              /*!< Package data register base address     */
#define UID_BASE (0x08FFF800UL) /*!< Unique device ID register base address */
#define FLASHSIZE_BASE \
    (0x08FFF80CUL) /*!< Flash size data register base address  */

/* Internal Flash OTP Area */
#define FLASH_OTP_BASE \
    (0x08FFF000UL) /*!< FLASH OTP (one-time programmable) base address */
#define FLASH_OTP_SIZE \
    (0x800U) /*!< 2048 bytes OTP (one-time programmable)         */

/* Flash system Area */
#define FLASH_SYSTEM_BASE_NS \
    (0x0BF80000UL) /*!< FLASH System non-secure base address  */
#define FLASH_SYSTEM_SIZE (0x8000U) /*!< 32 Kbytes system Flash */

/*!< USB PMA SIZE */
#define USB_DRD_PMA_SIZE (2048U) /*!< USB PMA Size 2Kbyte */

/*!< Non Secure Service Library */
/************ RSSLIB SAU system Flash region definition constants *************/
#define NSSLIB_SYS_FLASH_NS_PFUNC_START (0xBF8FE6CUL)
#define NSSLIB_SYS_FLASH_NS_PFUNC_END (0xBF8FE74UL)

/************ RSSLIB function return constants ********************************/
#define NSSLIB_ERROR (0xF5F5F5F5UL)
#define NSSLIB_SUCCESS (0xEAEAEAEAUL)

/*!< RSSLIB  pointer function structure address definition */
#define NSSLIB_PFUNC_BASE (0xBF8FE6CUL)
#define NSSLIB_PFUNC ((NSSLIB_pFunc_TypeDef*)NSSLIB_PFUNC_BASE)

    /**
  * @brief  Prototype of RSSLIB Jump to HDP level2 Function
  * @detail This function increments HDP level up to HDP level 2
  *         Then it enables the MPU region corresponding the MPU index
  *         provided as input parameter. The Vector Table shall be located
  *         within this MPU region.
  *         Then it jumps to the reset handler present within the
  *         Vector table. The function does not return on successful execution.
  * @param  pointer on the vector table containing the reset handler the function
  *         jumps to.
  * @param  MPU region index containing the vector table
  *         jumps to.
  * @retval NSSLIB_RSS_ERROR on error on input parameter, otherwise does not return.
  */
    typedef uint32_t (*NSSLIB_S_JumpHDPlvl2_TypeDef)(uint32_t VectorTableAddr,
                                                     uint32_t MPUIndex);

    /**
  * @brief  Prototype of RSSLIB Jump to HDP level3 Function
  * @detail This function increments HDP level up to HDP level 3
  *         Then it enables the MPU region corresponding the MPU index
  *         provided as input parameter. The Vector Table shall be located
  *         within this MPU region.
  *         Then it jumps to the reset handler present within the
  *         Vector table. The function does not return on successful execution.
  * @param  pointer on the vector table containing the reset handler the function
  *         jumps to.
  * @param  MPU region index containing the vector table
  *         jumps to.
  * @retval NSSLIB_RSS_ERROR on error on input parameter, otherwise does not return.
  */
    typedef uint32_t (*NSSLIB_S_JumpHDPlvl3_TypeDef)(uint32_t VectorTableAddr,
                                                     uint32_t MPUIndex);

    /**
  * @brief RSSLib secure callable function pointer structure
  */
    typedef struct
    {
        __IM NSSLIB_S_JumpHDPlvl2_TypeDef JumpHDPLvl2;
        __IM NSSLIB_S_JumpHDPlvl3_TypeDef JumpHDPLvl3;
    } NSSLIB_pFunc_TypeDef;

/** @} */ /* End of group STM32H5xx_Peripheral_peripheralAddr */

/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */

/** @addtogroup STM32H5xx_Peripheral_declaration
  * @{
  */

/*!< APB1 Non secure peripherals */
#define TIM2_NS ((TIM_TypeDef*)TIM2_BASE_NS)
#define TIM3_NS ((TIM_TypeDef*)TIM3_BASE_NS)
#define TIM6_NS ((TIM_TypeDef*)TIM6_BASE_NS)
#define TIM7_NS ((TIM_TypeDef*)TIM7_BASE_NS)
#define WWDG_NS ((WWDG_TypeDef*)WWDG_BASE_NS)
#define IWDG_NS ((IWDG_TypeDef*)IWDG_BASE_NS)
#define OPAMP1_NS ((OPAMP_TypeDef*)OPAMP1_BASE_NS)
#define SPI2_NS ((SPI_TypeDef*)SPI2_BASE_NS)
#define SPI3_NS ((SPI_TypeDef*)SPI3_BASE_NS)
#define COMP1_NS ((COMP_TypeDef*)COMP1_BASE_NS)
#define USART2_NS ((USART_TypeDef*)USART2_BASE_NS)
#define USART3_NS ((USART_TypeDef*)USART3_BASE_NS)
#define I2C1_NS ((I2C_TypeDef*)I2C1_BASE_NS)
#define I2C2_NS ((I2C_TypeDef*)I2C2_BASE_NS)
#define I3C1_NS ((I3C_TypeDef*)I3C1_BASE_NS)
#define CRS_NS ((CRS_TypeDef*)CRS_BASE_NS)
#define DTS_NS ((DTS_TypeDef*)DTS_BASE_NS)
#define LPTIM2_NS ((LPTIM_TypeDef*)LPTIM2_BASE_NS)
#define FDCAN1_NS ((FDCAN_GlobalTypeDef*)FDCAN1_BASE_NS)
#define FDCAN_CONFIG_NS ((FDCAN_Config_TypeDef*)FDCAN_CONFIG_BASE_NS)

/*!< APB2 Non secure peripherals */
#define TIM1_NS ((TIM_TypeDef*)TIM1_BASE_NS)
#define SPI1_NS ((SPI_TypeDef*)SPI1_BASE_NS)
#define USART1_NS ((USART_TypeDef*)USART1_BASE_NS)
#define USB_DRD_FS_NS ((USB_DRD_TypeDef*)USB_DRD_BASE_NS)
#define USB_DRD_PMA_BUFF_NS ((USB_DRD_PMABuffDescTypeDef*)USB_DRD_PMAADDR_NS)

/*!< AHB1 Non secure peripherals */
#define GPDMA1_NS ((DMA_TypeDef*)GPDMA1_BASE_NS)
#define GPDMA2_NS ((DMA_TypeDef*)GPDMA2_BASE_NS)
#define FLASH_NS ((FLASH_TypeDef*)FLASH_R_BASE_NS)
#define CRC_NS ((CRC_TypeDef*)CRC_BASE_NS)
#define RAMCFG_SRAM1_NS ((RAMCFG_TypeDef*)RAMCFG_SRAM1_BASE_NS)
#define RAMCFG_SRAM2_NS ((RAMCFG_TypeDef*)RAMCFG_SRAM2_BASE_NS)
#define RAMCFG_BKPRAM_NS ((RAMCFG_TypeDef*)RAMCFG_BKPRAM_BASE_NS)
#define ICACHE_NS ((ICACHE_TypeDef*)ICACHE_BASE_NS)
#define GTZC_TZSC1_NS ((GTZC_TZSC_TypeDef*)GTZC_TZSC1_BASE_NS)
#define GTZC_MPCBB1_NS ((GTZC_MPCBB_TypeDef*)GTZC_MPCBB1_BASE_NS)
#define GTZC_MPCBB2_NS ((GTZC_MPCBB_TypeDef*)GTZC_MPCBB2_BASE_NS)
#define GPDMA1_Channel0_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel0_BASE_NS)
#define GPDMA1_Channel1_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel1_BASE_NS)
#define GPDMA1_Channel2_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel2_BASE_NS)
#define GPDMA1_Channel3_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel3_BASE_NS)
#define GPDMA1_Channel4_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel4_BASE_NS)
#define GPDMA1_Channel5_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel5_BASE_NS)
#define GPDMA1_Channel6_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel6_BASE_NS)
#define GPDMA1_Channel7_NS ((DMA_Channel_TypeDef*)GPDMA1_Channel7_BASE_NS)
#define GPDMA2_Channel0_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel0_BASE_NS)
#define GPDMA2_Channel1_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel1_BASE_NS)
#define GPDMA2_Channel2_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel2_BASE_NS)
#define GPDMA2_Channel3_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel3_BASE_NS)
#define GPDMA2_Channel4_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel4_BASE_NS)
#define GPDMA2_Channel5_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel5_BASE_NS)
#define GPDMA2_Channel6_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel6_BASE_NS)
#define GPDMA2_Channel7_NS ((DMA_Channel_TypeDef*)GPDMA2_Channel7_BASE_NS)

/*!< AHB2 Non secure peripherals */
#define GPIOA_NS ((GPIO_TypeDef*)GPIOA_BASE_NS)
#define GPIOB_NS ((GPIO_TypeDef*)GPIOB_BASE_NS)
#define GPIOC_NS ((GPIO_TypeDef*)GPIOC_BASE_NS)
#define GPIOD_NS ((GPIO_TypeDef*)GPIOD_BASE_NS)
#define GPIOH_NS ((GPIO_TypeDef*)GPIOH_BASE_NS)
#define ADC1_NS ((ADC_TypeDef*)ADC1_BASE_NS)
#define ADC12_COMMON_NS ((ADC_Common_TypeDef*)ADC12_COMMON_BASE_NS)
#define DAC1_NS ((DAC_TypeDef*)DAC1_BASE_NS)
#define HASH_NS ((HASH_TypeDef*)HASH_BASE_NS)
#define HASH_DIGEST_NS ((HASH_DIGEST_TypeDef*)HASH_DIGEST_BASE_NS)
#define RNG_NS ((RNG_TypeDef*)RNG_BASE_NS)

/*!< APB3 Non secure peripherals */
#define SBS_NS ((SBS_TypeDef*)SBS_BASE_NS)
#define LPUART1_NS ((USART_TypeDef*)LPUART1_BASE_NS)
#define I3C2_NS ((I3C_TypeDef*)I3C2_BASE_NS)
#define LPTIM1_NS ((LPTIM_TypeDef*)LPTIM1_BASE_NS)
#define RTC_NS ((RTC_TypeDef*)RTC_BASE_NS)
#define TAMP_NS ((TAMP_TypeDef*)TAMP_BASE_NS)

/*!< AHB3 Non secure peripherals */
#define PWR_NS ((PWR_TypeDef*)PWR_BASE_NS)
#define RCC_NS ((RCC_TypeDef*)RCC_BASE_NS)
#define EXTI_NS ((EXTI_TypeDef*)EXTI_BASE_NS)

#define DBGMCU ((DBGMCU_TypeDef*)DBGMCU_BASE)

/*!< Memory base addresses for Non secure peripherals */
#define FLASH_BASE FLASH_BASE_NS
#define FLASH_SYSTEM_BASE FLASH_SYSTEM_BASE_NS
#define SRAM1_BASE SRAM1_BASE_NS
#define SRAM2_BASE SRAM2_BASE_NS
#define BKPSRAM_BASE BKPSRAM_BASE_NS

#define PERIPH_BASE PERIPH_BASE_NS
#define APB1PERIPH_BASE APB1PERIPH_BASE_NS
#define APB2PERIPH_BASE APB2PERIPH_BASE_NS
#define APB3PERIPH_BASE APB3PERIPH_BASE_NS
#define AHB1PERIPH_BASE AHB1PERIPH_BASE_NS
#define AHB2PERIPH_BASE AHB2PERIPH_BASE_NS
#define AHB3PERIPH_BASE AHB3PERIPH_BASE_NS

/*!< Instance aliases and base addresses for Non secure peripherals */
#define RCC RCC_NS
#define RCC_BASE RCC_BASE_NS

#define DTS DTS_NS
#define DTS_BASE DTS_BASE_NS

#define FLASH FLASH_NS
#define FLASH_R_BASE FLASH_R_BASE_NS

#define GPDMA1 GPDMA1_NS
#define GPDMA1_BASE GPDMA1_BASE_NS

#define GPDMA1_Channel0 GPDMA1_Channel0_NS
#define GPDMA1_Channel0_BASE GPDMA1_Channel0_BASE_NS

#define GPDMA1_Channel1 GPDMA1_Channel1_NS
#define GPDMA1_Channel1_BASE GPDMA1_Channel1_BASE_NS

#define GPDMA1_Channel2 GPDMA1_Channel2_NS
#define GPDMA1_Channel2_BASE GPDMA1_Channel2_BASE_NS

#define GPDMA1_Channel3 GPDMA1_Channel3_NS
#define GPDMA1_Channel3_BASE GPDMA1_Channel3_BASE_NS

#define GPDMA1_Channel4 GPDMA1_Channel4_NS
#define GPDMA1_Channel4_BASE GPDMA1_Channel4_BASE_NS

#define GPDMA1_Channel5 GPDMA1_Channel5_NS
#define GPDMA1_Channel5_BASE GPDMA1_Channel5_BASE_NS

#define GPDMA1_Channel6 GPDMA1_Channel6_NS
#define GPDMA1_Channel6_BASE GPDMA1_Channel6_BASE_NS

#define GPDMA1_Channel7 GPDMA1_Channel7_NS
#define GPDMA1_Channel7_BASE GPDMA1_Channel7_BASE_NS

#define GPDMA2 GPDMA2_NS
#define GPDMA2_BASE GPDMA2_BASE_NS

#define GPDMA2_Channel0 GPDMA2_Channel0_NS
#define GPDMA2_Channel0_BASE GPDMA2_Channel0_BASE_NS

#define GPDMA2_Channel1 GPDMA2_Channel1_NS
#define GPDMA2_Channel1_BASE GPDMA2_Channel1_BASE_NS

#define GPDMA2_Channel2 GPDMA2_Channel2_NS
#define GPDMA2_Channel2_BASE GPDMA2_Channel2_BASE_NS

#define GPDMA2_Channel3 GPDMA2_Channel3_NS
#define GPDMA2_Channel3_BASE GPDMA2_Channel3_BASE_NS

#define GPDMA2_Channel4 GPDMA2_Channel4_NS
#define GPDMA2_Channel4_BASE GPDMA2_Channel4_BASE_NS

#define GPDMA2_Channel5 GPDMA2_Channel5_NS
#define GPDMA2_Channel5_BASE GPDMA2_Channel5_BASE_NS

#define GPDMA2_Channel6 GPDMA2_Channel6_NS
#define GPDMA2_Channel6_BASE GPDMA2_Channel6_BASE_NS

#define GPDMA2_Channel7 GPDMA2_Channel7_NS
#define GPDMA2_Channel7_BASE GPDMA2_Channel7_BASE_NS

#define GPIOA GPIOA_NS
#define GPIOA_BASE GPIOA_BASE_NS

#define GPIOB GPIOB_NS
#define GPIOB_BASE GPIOB_BASE_NS

#define GPIOC GPIOC_NS
#define GPIOC_BASE GPIOC_BASE_NS

#define GPIOD GPIOD_NS
#define GPIOD_BASE GPIOD_BASE_NS

#define GPIOH GPIOH_NS
#define GPIOH_BASE GPIOH_BASE_NS

#define PWR PWR_NS
#define PWR_BASE PWR_BASE_NS

#define RAMCFG_SRAM1 RAMCFG_SRAM1_NS
#define RAMCFG_SRAM1_BASE RAMCFG_SRAM1_BASE_NS

#define RAMCFG_SRAM2 RAMCFG_SRAM2_NS
#define RAMCFG_SRAM2_BASE RAMCFG_SRAM2_BASE_NS

#define RAMCFG_BKPRAM RAMCFG_BKPRAM_NS
#define RAMCFG_BKPRAM_BASE RAMCFG_BKPRAM_BASE_NS

#define EXTI EXTI_NS
#define EXTI_BASE EXTI_BASE_NS

#define ICACHE ICACHE_NS
#define ICACHE_BASE ICACHE_BASE_NS

#define GTZC_TZSC1 GTZC_TZSC1_NS
#define GTZC_TZSC1_BASE GTZC_TZSC1_BASE_NS

#define GTZC_MPCBB1 GTZC_MPCBB1_NS
#define GTZC_MPCBB1_BASE GTZC_MPCBB1_BASE_NS

#define GTZC_MPCBB2 GTZC_MPCBB2_NS
#define GTZC_MPCBB2_BASE GTZC_MPCBB2_BASE_NS

#define RTC RTC_NS
#define RTC_BASE RTC_BASE_NS

#define TAMP TAMP_NS
#define TAMP_BASE TAMP_BASE_NS

#define TIM1 TIM1_NS
#define TIM1_BASE TIM1_BASE_NS

#define TIM2 TIM2_NS
#define TIM2_BASE TIM2_BASE_NS

#define TIM3 TIM3_NS
#define TIM3_BASE TIM3_BASE_NS

#define TIM6 TIM6_NS
#define TIM6_BASE TIM6_BASE_NS

#define TIM7 TIM7_NS
#define TIM7_BASE TIM7_BASE_NS

#define WWDG WWDG_NS
#define WWDG_BASE WWDG_BASE_NS

#define IWDG IWDG_NS
#define IWDG_BASE IWDG_BASE_NS

#define OPAMP1 OPAMP1_NS
#define OPAMP1_BASE OPAMP1_BASE_NS

#define SPI1 SPI1_NS
#define SPI1_BASE SPI1_BASE_NS

#define SPI2 SPI2_NS
#define SPI2_BASE SPI2_BASE_NS

#define SPI3 SPI3_NS
#define SPI3_BASE SPI3_BASE_NS

#define COMP1 COMP1_NS
#define COMP1_BASE COMP1_BASE_NS

#define USART1 USART1_NS
#define USART1_BASE USART1_BASE_NS

#define USART2 USART2_NS
#define USART2_BASE USART2_BASE_NS

#define USART3 USART3_NS
#define USART3_BASE USART3_BASE_NS

#define I2C1 I2C1_NS
#define I2C1_BASE I2C1_BASE_NS

#define I2C2 I2C2_NS
#define I2C2_BASE I2C2_BASE_NS

#define I3C1 I3C1_NS
#define I3C1_BASE I3C1_BASE_NS

#define I3C2 I3C2_NS
#define I3C2_BASE I3C2_BASE_NS

#define CRS CRS_NS
#define CRS_BASE CRS_BASE_NS

#define FDCAN1 FDCAN1_NS
#define FDCAN1_BASE FDCAN1_BASE_NS

#define FDCAN_CONFIG FDCAN_CONFIG_NS
#define FDCAN_CONFIG_BASE FDCAN_CONFIG_BASE_NS
#define SRAMCAN_BASE SRAMCAN_BASE_NS

#define DAC1 DAC1_NS
#define DAC1_BASE DAC1_BASE_NS

#define LPTIM1 LPTIM1_NS
#define LPTIM1_BASE LPTIM1_BASE_NS

#define LPTIM2 LPTIM2_NS
#define LPTIM2_BASE LPTIM2_BASE_NS

#define LPUART1 LPUART1_NS
#define LPUART1_BASE LPUART1_BASE_NS

#define SBS SBS_NS
#define SBS_BASE SBS_BASE_NS

#define USB_DRD_FS USB_DRD_FS_NS
#define USB_DRD_FS_BASE USB_DRD_BASE_NS
#define USB_DRD_PMAADDR USB_DRD_PMAADDR_NS
#define USB_DRD_PMA_BUFF USB_DRD_PMA_BUFF_NS

#define CRC CRC_NS
#define CRC_BASE CRC_BASE_NS

#define ADC1 ADC1_NS
#define ADC1_BASE ADC1_BASE_NS

#define ADC12_COMMON ADC12_COMMON_NS
#define ADC12_COMMON_BASE ADC12_COMMON_BASE_NS

#define HASH HASH_NS
#define HASH_BASE HASH_BASE_NS

#define HASH_DIGEST HASH_DIGEST_NS
#define HASH_DIGEST_BASE HASH_DIGEST_BASE_NS

#define RNG RNG_NS
#define RNG_BASE RNG_BASE_NS

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for ADC_ISR register  *******************/
#define ADC_ISR_ADRDY_Pos (0U)
#define ADC_ISR_ADRDY_Msk (0x1UL << ADC_ISR_ADRDY_Pos) /*!< 0x00000001 */
#define ADC_ISR_ADRDY ADC_ISR_ADRDY_Msk                /*!< ADC ready flag */
#define ADC_ISR_EOSMP_Pos (1U)
#define ADC_ISR_EOSMP_Msk (0x1UL << ADC_ISR_EOSMP_Pos) /*!< 0x00000002 */
#define ADC_ISR_EOSMP \
    ADC_ISR_EOSMP_Msk /*!< ADC group regular end of sampling flag */
#define ADC_ISR_EOC_Pos (2U)
#define ADC_ISR_EOC_Msk (0x1UL << ADC_ISR_EOC_Pos) /*!< 0x00000004 */
#define ADC_ISR_EOC \
    ADC_ISR_EOC_Msk /*!< ADC group regular end of unitary conversion flag */
#define ADC_ISR_EOS_Pos (3U)
#define ADC_ISR_EOS_Msk (0x1UL << ADC_ISR_EOS_Pos) /*!< 0x00000008 */
#define ADC_ISR_EOS \
    ADC_ISR_EOS_Msk /*!< ADC group regular end of sequence conversions flag */
#define ADC_ISR_OVR_Pos (4U)
#define ADC_ISR_OVR_Msk (0x1UL << ADC_ISR_OVR_Pos) /*!< 0x00000010 */
#define ADC_ISR_OVR ADC_ISR_OVR_Msk /*!< ADC group regular overrun flag */
#define ADC_ISR_JEOC_Pos (5U)
#define ADC_ISR_JEOC_Msk (0x1UL << ADC_ISR_JEOC_Pos) /*!< 0x00000020 */
#define ADC_ISR_JEOC \
    ADC_ISR_JEOC_Msk /*!< ADC group injected end of unitary conversion flag */
#define ADC_ISR_JEOS_Pos (6U)
#define ADC_ISR_JEOS_Msk (0x1UL << ADC_ISR_JEOS_Pos) /*!< 0x00000040 */
#define ADC_ISR_JEOS \
    ADC_ISR_JEOS_Msk /*!< ADC group injected end of sequence conversions flag */
#define ADC_ISR_AWD1_Pos (7U)
#define ADC_ISR_AWD1_Msk (0x1UL << ADC_ISR_AWD1_Pos) /*!< 0x00000080 */
#define ADC_ISR_AWD1 ADC_ISR_AWD1_Msk /*!< ADC analog watchdog 1 flag */
#define ADC_ISR_AWD2_Pos (8U)
#define ADC_ISR_AWD2_Msk (0x1UL << ADC_ISR_AWD2_Pos) /*!< 0x00000100 */
#define ADC_ISR_AWD2 ADC_ISR_AWD2_Msk /*!< ADC analog watchdog 2 flag */
#define ADC_ISR_AWD3_Pos (9U)
#define ADC_ISR_AWD3_Msk (0x1UL << ADC_ISR_AWD3_Pos) /*!< 0x00000200 */
#define ADC_ISR_AWD3 ADC_ISR_AWD3_Msk /*!< ADC analog watchdog 3 flag */
#define ADC_ISR_JQOVF_Pos (10U)
#define ADC_ISR_JQOVF_Msk (0x1UL << ADC_ISR_JQOVF_Pos) /*!< 0x00000400 */
#define ADC_ISR_JQOVF \
    ADC_ISR_JQOVF_Msk /*!< ADC group injected contexts queue overflow flag */

/********************  Bit definition for ADC_IER register  *******************/
#define ADC_IER_ADRDYIE_Pos (0U)
#define ADC_IER_ADRDYIE_Msk (0x1UL << ADC_IER_ADRDYIE_Pos) /*!< 0x00000001 */
#define ADC_IER_ADRDYIE ADC_IER_ADRDYIE_Msk /*!< ADC ready interrupt */
#define ADC_IER_EOSMPIE_Pos (1U)
#define ADC_IER_EOSMPIE_Msk (0x1UL << ADC_IER_EOSMPIE_Pos) /*!< 0x00000002 */
#define ADC_IER_EOSMPIE \
    ADC_IER_EOSMPIE_Msk /*!< ADC group regular end of sampling interrupt */
#define ADC_IER_EOCIE_Pos (2U)
#define ADC_IER_EOCIE_Msk (0x1UL << ADC_IER_EOCIE_Pos) /*!< 0x00000004 */
#define ADC_IER_EOCIE \
    ADC_IER_EOCIE_Msk /*!< ADC group regular end of unitary conversion interrupt */
#define ADC_IER_EOSIE_Pos (3U)
#define ADC_IER_EOSIE_Msk (0x1UL << ADC_IER_EOSIE_Pos) /*!< 0x00000008 */
#define ADC_IER_EOSIE \
    ADC_IER_EOSIE_Msk /*!< ADC group regular end of sequence conversions interrupt */
#define ADC_IER_OVRIE_Pos (4U)
#define ADC_IER_OVRIE_Msk (0x1UL << ADC_IER_OVRIE_Pos) /*!< 0x00000010 */
#define ADC_IER_OVRIE \
    ADC_IER_OVRIE_Msk /*!< ADC group regular overrun interrupt */
#define ADC_IER_JEOCIE_Pos (5U)
#define ADC_IER_JEOCIE_Msk (0x1UL << ADC_IER_JEOCIE_Pos) /*!< 0x00000020 */
#define ADC_IER_JEOCIE \
    ADC_IER_JEOCIE_Msk /*!< ADC group injected end of unitary conversion interrupt */
#define ADC_IER_JEOSIE_Pos (6U)
#define ADC_IER_JEOSIE_Msk (0x1UL << ADC_IER_JEOSIE_Pos) /*!< 0x00000040 */
#define ADC_IER_JEOSIE \
    ADC_IER_JEOSIE_Msk /*!< ADC group injected end of sequence conversions interrupt */
#define ADC_IER_AWD1IE_Pos (7U)
#define ADC_IER_AWD1IE_Msk (0x1UL << ADC_IER_AWD1IE_Pos) /*!< 0x00000080 */
#define ADC_IER_AWD1IE \
    ADC_IER_AWD1IE_Msk /*!< ADC analog watchdog 1 interrupt */
#define ADC_IER_AWD2IE_Pos (8U)
#define ADC_IER_AWD2IE_Msk (0x1UL << ADC_IER_AWD2IE_Pos) /*!< 0x00000100 */
#define ADC_IER_AWD2IE \
    ADC_IER_AWD2IE_Msk /*!< ADC analog watchdog 2 interrupt */
#define ADC_IER_AWD3IE_Pos (9U)
#define ADC_IER_AWD3IE_Msk (0x1UL << ADC_IER_AWD3IE_Pos) /*!< 0x00000200 */
#define ADC_IER_AWD3IE \
    ADC_IER_AWD3IE_Msk /*!< ADC analog watchdog 3 interrupt */
#define ADC_IER_JQOVFIE_Pos (10U)
#define ADC_IER_JQOVFIE_Msk (0x1UL << ADC_IER_JQOVFIE_Pos) /*!< 0x00000400 */
#define ADC_IER_JQOVFIE \
    ADC_IER_JQOVFIE_Msk /*!< ADC group injected contexts queue overflow interrupt */

/********************  Bit definition for ADC_CR register  ********************/
#define ADC_CR_ADEN_Pos (0U)
#define ADC_CR_ADEN_Msk (0x1UL << ADC_CR_ADEN_Pos) /*!< 0x00000001 */
#define ADC_CR_ADEN ADC_CR_ADEN_Msk                /*!< ADC enable */
#define ADC_CR_ADDIS_Pos (1U)
#define ADC_CR_ADDIS_Msk (0x1UL << ADC_CR_ADDIS_Pos) /*!< 0x00000002 */
#define ADC_CR_ADDIS ADC_CR_ADDIS_Msk                /*!< ADC disable */
#define ADC_CR_ADSTART_Pos (2U)
#define ADC_CR_ADSTART_Msk (0x1UL << ADC_CR_ADSTART_Pos) /*!< 0x00000004 */
#define ADC_CR_ADSTART \
    ADC_CR_ADSTART_Msk /*!< ADC group regular conversion start */
#define ADC_CR_JADSTART_Pos (3U)
#define ADC_CR_JADSTART_Msk (0x1UL << ADC_CR_JADSTART_Pos) /*!< 0x00000008 */
#define ADC_CR_JADSTART \
    ADC_CR_JADSTART_Msk /*!< ADC group injected conversion start */
#define ADC_CR_ADSTP_Pos (4U)
#define ADC_CR_ADSTP_Msk (0x1UL << ADC_CR_ADSTP_Pos) /*!< 0x00000010 */
#define ADC_CR_ADSTP ADC_CR_ADSTP_Msk /*!< ADC group regular conversion stop */
#define ADC_CR_JADSTP_Pos (5U)
#define ADC_CR_JADSTP_Msk (0x1UL << ADC_CR_JADSTP_Pos) /*!< 0x00000020 */
#define ADC_CR_JADSTP \
    ADC_CR_JADSTP_Msk /*!< ADC group injected conversion stop */
#define ADC_CR_ADVREGEN_Pos (28U)
#define ADC_CR_ADVREGEN_Msk (0x1UL << ADC_CR_ADVREGEN_Pos) /*!< 0x10000000 */
#define ADC_CR_ADVREGEN ADC_CR_ADVREGEN_Msk /*!< ADC voltage regulator enable */
#define ADC_CR_DEEPPWD_Pos (29U)
#define ADC_CR_DEEPPWD_Msk (0x1UL << ADC_CR_DEEPPWD_Pos) /*!< 0x20000000 */
#define ADC_CR_DEEPPWD ADC_CR_DEEPPWD_Msk /*!< ADC deep power down enable */
#define ADC_CR_ADCALDIF_Pos (30U)
#define ADC_CR_ADCALDIF_Msk (0x1UL << ADC_CR_ADCALDIF_Pos) /*!< 0x40000000 */
#define ADC_CR_ADCALDIF \
    ADC_CR_ADCALDIF_Msk /*!< ADC differential mode for calibration */
#define ADC_CR_ADCAL_Pos (31U)
#define ADC_CR_ADCAL_Msk (0x1UL << ADC_CR_ADCAL_Pos) /*!< 0x80000000 */
#define ADC_CR_ADCAL ADC_CR_ADCAL_Msk                /*!< ADC calibration */

/********************  Bit definition for ADC_CFGR register  ******************/
#define ADC_CFGR_DMAEN_Pos (0U)
#define ADC_CFGR_DMAEN_Msk (0x1UL << ADC_CFGR_DMAEN_Pos) /*!< 0x00000001 */
#define ADC_CFGR_DMAEN ADC_CFGR_DMAEN_Msk /*!< ADC DMA transfer enable */
#define ADC_CFGR_DMACFG_Pos (1U)
#define ADC_CFGR_DMACFG_Msk (0x1UL << ADC_CFGR_DMACFG_Pos) /*!< 0x00000002 */
#define ADC_CFGR_DMACFG \
    ADC_CFGR_DMACFG_Msk /*!< ADC DMA transfer configuration */

#define ADC_CFGR_RES_Pos (3U)
#define ADC_CFGR_RES_Msk (0x3UL << ADC_CFGR_RES_Pos) /*!< 0x00000018 */
#define ADC_CFGR_RES ADC_CFGR_RES_Msk                /*!< ADC data resolution */
#define ADC_CFGR_RES_0 (0x1UL << ADC_CFGR_RES_Pos)   /*!< 0x00000008 */
#define ADC_CFGR_RES_1 (0x2UL << ADC_CFGR_RES_Pos)   /*!< 0x00000010 */

#define ADC_CFGR_EXTSEL_Pos (5U)
#define ADC_CFGR_EXTSEL_Msk (0x1FUL << ADC_CFGR_EXTSEL_Pos) /*!< 0x000003E0 */
#define ADC_CFGR_EXTSEL \
    ADC_CFGR_EXTSEL_Msk /*!< ADC group regular external trigger source */
#define ADC_CFGR_EXTSEL_0 (0x1UL << ADC_CFGR_EXTSEL_Pos)  /*!< 0x00000020 */
#define ADC_CFGR_EXTSEL_1 (0x2UL << ADC_CFGR_EXTSEL_Pos)  /*!< 0x00000040 */
#define ADC_CFGR_EXTSEL_2 (0x4UL << ADC_CFGR_EXTSEL_Pos)  /*!< 0x00000080 */
#define ADC_CFGR_EXTSEL_3 (0x8UL << ADC_CFGR_EXTSEL_Pos)  /*!< 0x00000100 */
#define ADC_CFGR_EXTSEL_4 (0x10UL << ADC_CFGR_EXTSEL_Pos) /*!< 0x00000200 */

#define ADC_CFGR_EXTEN_Pos (10U)
#define ADC_CFGR_EXTEN_Msk (0x3UL << ADC_CFGR_EXTEN_Pos) /*!< 0x00000C00 */
#define ADC_CFGR_EXTEN \
    ADC_CFGR_EXTEN_Msk /*!< ADC group regular external trigger polarity */
#define ADC_CFGR_EXTEN_0 (0x1UL << ADC_CFGR_EXTEN_Pos) /*!< 0x00000400 */
#define ADC_CFGR_EXTEN_1 (0x2UL << ADC_CFGR_EXTEN_Pos) /*!< 0x00000800 */

#define ADC_CFGR_OVRMOD_Pos (12U)
#define ADC_CFGR_OVRMOD_Msk (0x1UL << ADC_CFGR_OVRMOD_Pos) /*!< 0x00001000 */
#define ADC_CFGR_OVRMOD \
    ADC_CFGR_OVRMOD_Msk /*!< ADC group regular overrun configuration */
#define ADC_CFGR_CONT_Pos (13U)
#define ADC_CFGR_CONT_Msk (0x1UL << ADC_CFGR_CONT_Pos) /*!< 0x00002000 */
#define ADC_CFGR_CONT \
    ADC_CFGR_CONT_Msk /*!< ADC group regular continuous conversion mode */
#define ADC_CFGR_AUTDLY_Pos (14U)
#define ADC_CFGR_AUTDLY_Msk (0x1UL << ADC_CFGR_AUTDLY_Pos) /*!< 0x00004000 */
#define ADC_CFGR_AUTDLY ADC_CFGR_AUTDLY_Msk /*!< ADC low power auto wait */
#define ADC_CFGR_ALIGN_Pos (15U)
#define ADC_CFGR_ALIGN_Msk (0x1UL << ADC_CFGR_ALIGN_Pos) /*!< 0x00008000 */
#define ADC_CFGR_ALIGN ADC_CFGR_ALIGN_Msk /*!< ADC data alignment */
#define ADC_CFGR_DISCEN_Pos (16U)
#define ADC_CFGR_DISCEN_Msk (0x1UL << ADC_CFGR_DISCEN_Pos) /*!< 0x00010000 */
#define ADC_CFGR_DISCEN \
    ADC_CFGR_DISCEN_Msk /*!< ADC group regular sequencer discontinuous mode */

#define ADC_CFGR_DISCNUM_Pos (17U)
#define ADC_CFGR_DISCNUM_Msk (0x7UL << ADC_CFGR_DISCNUM_Pos) /*!< 0x000E0000 */
#define ADC_CFGR_DISCNUM \
    ADC_CFGR_DISCNUM_Msk /*!< ADC group regular sequencer discontinuous number of ranks */
#define ADC_CFGR_DISCNUM_0 (0x1UL << ADC_CFGR_DISCNUM_Pos) /*!< 0x00020000 */
#define ADC_CFGR_DISCNUM_1 (0x2UL << ADC_CFGR_DISCNUM_Pos) /*!< 0x00040000 */
#define ADC_CFGR_DISCNUM_2 (0x4UL << ADC_CFGR_DISCNUM_Pos) /*!< 0x00080000 */

#define ADC_CFGR_JDISCEN_Pos (20U)
#define ADC_CFGR_JDISCEN_Msk (0x1UL << ADC_CFGR_JDISCEN_Pos) /*!< 0x00100000 */
#define ADC_CFGR_JDISCEN \
    ADC_CFGR_JDISCEN_Msk /*!< ADC group injected sequencer discontinuous mode */
#define ADC_CFGR_JQM_Pos (21U)
#define ADC_CFGR_JQM_Msk (0x1UL << ADC_CFGR_JQM_Pos) /*!< 0x00200000 */
#define ADC_CFGR_JQM \
    ADC_CFGR_JQM_Msk /*!< ADC group injected contexts queue mode */
#define ADC_CFGR_AWD1SGL_Pos (22U)
#define ADC_CFGR_AWD1SGL_Msk (0x1UL << ADC_CFGR_AWD1SGL_Pos) /*!< 0x00400000 */
#define ADC_CFGR_AWD1SGL \
    ADC_CFGR_AWD1SGL_Msk /*!< ADC analog watchdog 1 monitoring a single channel or all channels */
#define ADC_CFGR_AWD1EN_Pos (23U)
#define ADC_CFGR_AWD1EN_Msk (0x1UL << ADC_CFGR_AWD1EN_Pos) /*!< 0x00800000 */
#define ADC_CFGR_AWD1EN \
    ADC_CFGR_AWD1EN_Msk /*!< ADC analog watchdog 1 enable on scope ADC group regular */
#define ADC_CFGR_JAWD1EN_Pos (24U)
#define ADC_CFGR_JAWD1EN_Msk (0x1UL << ADC_CFGR_JAWD1EN_Pos) /*!< 0x01000000 */
#define ADC_CFGR_JAWD1EN \
    ADC_CFGR_JAWD1EN_Msk /*!< ADC analog watchdog 1 enable on scope ADC group injected */
#define ADC_CFGR_JAUTO_Pos (25U)
#define ADC_CFGR_JAUTO_Msk (0x1UL << ADC_CFGR_JAUTO_Pos) /*!< 0x02000000 */
#define ADC_CFGR_JAUTO \
    ADC_CFGR_JAUTO_Msk /*!< ADC group injected automatic trigger mode */

#define ADC_CFGR_AWD1CH_Pos (26U)
#define ADC_CFGR_AWD1CH_Msk (0x1FUL << ADC_CFGR_AWD1CH_Pos) /*!< 0x7C000000 */
#define ADC_CFGR_AWD1CH \
    ADC_CFGR_AWD1CH_Msk /*!< ADC analog watchdog 1 monitored channel selection */
#define ADC_CFGR_AWD1CH_0 (0x01UL << ADC_CFGR_AWD1CH_Pos) /*!< 0x04000000 */
#define ADC_CFGR_AWD1CH_1 (0x02UL << ADC_CFGR_AWD1CH_Pos) /*!< 0x08000000 */
#define ADC_CFGR_AWD1CH_2 (0x04UL << ADC_CFGR_AWD1CH_Pos) /*!< 0x10000000 */
#define ADC_CFGR_AWD1CH_3 (0x08UL << ADC_CFGR_AWD1CH_Pos) /*!< 0x20000000 */
#define ADC_CFGR_AWD1CH_4 (0x10UL << ADC_CFGR_AWD1CH_Pos) /*!< 0x40000000 */

#define ADC_CFGR_JQDIS_Pos (31U)
#define ADC_CFGR_JQDIS_Msk (0x1UL << ADC_CFGR_JQDIS_Pos) /*!< 0x80000000 */
#define ADC_CFGR_JQDIS \
    ADC_CFGR_JQDIS_Msk /*!< ADC group injected contexts queue disable */

/********************  Bit definition for ADC_CFGR2 register  *****************/
#define ADC_CFGR2_ROVSE_Pos (0U)
#define ADC_CFGR2_ROVSE_Msk (0x1UL << ADC_CFGR2_ROVSE_Pos) /*!< 0x00000001 */
#define ADC_CFGR2_ROVSE \
    ADC_CFGR2_ROVSE_Msk /*!< ADC oversampler enable on scope ADC group regular */
#define ADC_CFGR2_JOVSE_Pos (1U)
#define ADC_CFGR2_JOVSE_Msk (0x1UL << ADC_CFGR2_JOVSE_Pos) /*!< 0x00000002 */
#define ADC_CFGR2_JOVSE \
    ADC_CFGR2_JOVSE_Msk /*!< ADC oversampler enable on scope ADC group injected */

#define ADC_CFGR2_OVSR_Pos (2U)
#define ADC_CFGR2_OVSR_Msk (0x7UL << ADC_CFGR2_OVSR_Pos) /*!< 0x0000001C */
#define ADC_CFGR2_OVSR ADC_CFGR2_OVSR_Msk /*!< ADC oversampling ratio */
#define ADC_CFGR2_OVSR_0 (0x1UL << ADC_CFGR2_OVSR_Pos) /*!< 0x00000004 */
#define ADC_CFGR2_OVSR_1 (0x2UL << ADC_CFGR2_OVSR_Pos) /*!< 0x00000008 */
#define ADC_CFGR2_OVSR_2 (0x4UL << ADC_CFGR2_OVSR_Pos) /*!< 0x00000010 */

#define ADC_CFGR2_OVSS_Pos (5U)
#define ADC_CFGR2_OVSS_Msk (0xFUL << ADC_CFGR2_OVSS_Pos) /*!< 0x000001E0 */
#define ADC_CFGR2_OVSS ADC_CFGR2_OVSS_Msk /*!< ADC oversampling shift */
#define ADC_CFGR2_OVSS_0 (0x1UL << ADC_CFGR2_OVSS_Pos) /*!< 0x00000020 */
#define ADC_CFGR2_OVSS_1 (0x2UL << ADC_CFGR2_OVSS_Pos) /*!< 0x00000040 */
#define ADC_CFGR2_OVSS_2 (0x4UL << ADC_CFGR2_OVSS_Pos) /*!< 0x00000080 */
#define ADC_CFGR2_OVSS_3 (0x8UL << ADC_CFGR2_OVSS_Pos) /*!< 0x00000100 */

#define ADC_CFGR2_TROVS_Pos (9U)
#define ADC_CFGR2_TROVS_Msk (0x1UL << ADC_CFGR2_TROVS_Pos) /*!< 0x00000200 */
#define ADC_CFGR2_TROVS \
    ADC_CFGR2_TROVS_Msk /*!< ADC oversampling discontinuous mode (triggered mode) for ADC group regular */
#define ADC_CFGR2_ROVSM_Pos (10U)
#define ADC_CFGR2_ROVSM_Msk (0x1UL << ADC_CFGR2_ROVSM_Pos) /*!< 0x00000400 */
#define ADC_CFGR2_ROVSM \
    ADC_CFGR2_ROVSM_Msk /*!< ADC oversampling mode managing interlaced conversions of ADC group regular and group injected */

#define ADC_CFGR2_GCOMP_Pos (16U)
#define ADC_CFGR2_GCOMP_Msk (0x1UL << ADC_CFGR2_GCOMP_Pos) /*!< 0x00010000 */
#define ADC_CFGR2_GCOMP ADC_CFGR2_GCOMP_Msk /*!< ADC Gain Compensation mode */

#define ADC_CFGR2_SWTRIG_Pos (25U)
#define ADC_CFGR2_SWTRIG_Msk (0x1UL << ADC_CFGR2_SWTRIG_Pos) /*!< 0x02000000 */
#define ADC_CFGR2_SWTRIG \
    ADC_CFGR2_SWTRIG_Msk /*!< ADC Software Trigger Bit for Sample time control trigger mode */
#define ADC_CFGR2_BULB_Pos (26U)
#define ADC_CFGR2_BULB_Msk (0x1UL << ADC_CFGR2_BULB_Pos) /*!< 0x04000000 */
#define ADC_CFGR2_BULB ADC_CFGR2_BULB_Msk /*!< ADC Bulb sampling mode */
#define ADC_CFGR2_SMPTRIG_Pos (27U)
#define ADC_CFGR2_SMPTRIG_Msk \
    (0x1UL << ADC_CFGR2_SMPTRIG_Pos) /*!< 0x08000000 */
#define ADC_CFGR2_SMPTRIG \
    ADC_CFGR2_SMPTRIG_Msk /*!< ADC Sample Time Control Trigger mode */

#define ADC_CFGR2_LFTRIG_Pos (29U)
#define ADC_CFGR2_LFTRIG_Msk (0x1UL << ADC_CFGR2_LFTRIG_Pos) /*!< 0x20000000 */
#define ADC_CFGR2_LFTRIG ADC_CFGR2_LFTRIG_Msk /*!< ADC Low Frequency Trigger */

/********************  Bit definition for ADC_SMPR1 register  *****************/
#define ADC_SMPR1_SMP0_Pos (0U)
#define ADC_SMPR1_SMP0_Msk (0x7UL << ADC_SMPR1_SMP0_Pos) /*!< 0x00000007 */
#define ADC_SMPR1_SMP0 \
    ADC_SMPR1_SMP0_Msk /*!< ADC channel 0 sampling time selection  */
#define ADC_SMPR1_SMP0_0 (0x1UL << ADC_SMPR1_SMP0_Pos) /*!< 0x00000001 */
#define ADC_SMPR1_SMP0_1 (0x2UL << ADC_SMPR1_SMP0_Pos) /*!< 0x00000002 */
#define ADC_SMPR1_SMP0_2 (0x4UL << ADC_SMPR1_SMP0_Pos) /*!< 0x00000004 */

#define ADC_SMPR1_SMP1_Pos (3U)
#define ADC_SMPR1_SMP1_Msk (0x7UL << ADC_SMPR1_SMP1_Pos) /*!< 0x00000038 */
#define ADC_SMPR1_SMP1 \
    ADC_SMPR1_SMP1_Msk /*!< ADC channel 1 sampling time selection  */
#define ADC_SMPR1_SMP1_0 (0x1UL << ADC_SMPR1_SMP1_Pos) /*!< 0x00000008 */
#define ADC_SMPR1_SMP1_1 (0x2UL << ADC_SMPR1_SMP1_Pos) /*!< 0x00000010 */
#define ADC_SMPR1_SMP1_2 (0x4UL << ADC_SMPR1_SMP1_Pos) /*!< 0x00000020 */

#define ADC_SMPR1_SMP2_Pos (6U)
#define ADC_SMPR1_SMP2_Msk (0x7UL << ADC_SMPR1_SMP2_Pos) /*!< 0x000001C0 */
#define ADC_SMPR1_SMP2 \
    ADC_SMPR1_SMP2_Msk /*!< ADC channel 2 sampling time selection  */
#define ADC_SMPR1_SMP2_0 (0x1UL << ADC_SMPR1_SMP2_Pos) /*!< 0x00000040 */
#define ADC_SMPR1_SMP2_1 (0x2UL << ADC_SMPR1_SMP2_Pos) /*!< 0x00000080 */
#define ADC_SMPR1_SMP2_2 (0x4UL << ADC_SMPR1_SMP2_Pos) /*!< 0x00000100 */

#define ADC_SMPR1_SMP3_Pos (9U)
#define ADC_SMPR1_SMP3_Msk (0x7UL << ADC_SMPR1_SMP3_Pos) /*!< 0x00000E00 */
#define ADC_SMPR1_SMP3 \
    ADC_SMPR1_SMP3_Msk /*!< ADC channel 3 sampling time selection  */
#define ADC_SMPR1_SMP3_0 (0x1UL << ADC_SMPR1_SMP3_Pos) /*!< 0x00000200 */
#define ADC_SMPR1_SMP3_1 (0x2UL << ADC_SMPR1_SMP3_Pos) /*!< 0x00000400 */
#define ADC_SMPR1_SMP3_2 (0x4UL << ADC_SMPR1_SMP3_Pos) /*!< 0x00000800 */

#define ADC_SMPR1_SMP4_Pos (12U)
#define ADC_SMPR1_SMP4_Msk (0x7UL << ADC_SMPR1_SMP4_Pos) /*!< 0x00007000 */
#define ADC_SMPR1_SMP4 \
    ADC_SMPR1_SMP4_Msk /*!< ADC channel 4 sampling time selection  */
#define ADC_SMPR1_SMP4_0 (0x1UL << ADC_SMPR1_SMP4_Pos) /*!< 0x00001000 */
#define ADC_SMPR1_SMP4_1 (0x2UL << ADC_SMPR1_SMP4_Pos) /*!< 0x00002000 */
#define ADC_SMPR1_SMP4_2 (0x4UL << ADC_SMPR1_SMP4_Pos) /*!< 0x00004000 */

#define ADC_SMPR1_SMP5_Pos (15U)
#define ADC_SMPR1_SMP5_Msk (0x7UL << ADC_SMPR1_SMP5_Pos) /*!< 0x00038000 */
#define ADC_SMPR1_SMP5 \
    ADC_SMPR1_SMP5_Msk /*!< ADC channel 5 sampling time selection  */
#define ADC_SMPR1_SMP5_0 (0x1UL << ADC_SMPR1_SMP5_Pos) /*!< 0x00008000 */
#define ADC_SMPR1_SMP5_1 (0x2UL << ADC_SMPR1_SMP5_Pos) /*!< 0x00010000 */
#define ADC_SMPR1_SMP5_2 (0x4UL << ADC_SMPR1_SMP5_Pos) /*!< 0x00020000 */

#define ADC_SMPR1_SMP6_Pos (18U)
#define ADC_SMPR1_SMP6_Msk (0x7UL << ADC_SMPR1_SMP6_Pos) /*!< 0x001C0000 */
#define ADC_SMPR1_SMP6 \
    ADC_SMPR1_SMP6_Msk /*!< ADC channel 6 sampling time selection  */
#define ADC_SMPR1_SMP6_0 (0x1UL << ADC_SMPR1_SMP6_Pos) /*!< 0x00040000 */
#define ADC_SMPR1_SMP6_1 (0x2UL << ADC_SMPR1_SMP6_Pos) /*!< 0x00080000 */
#define ADC_SMPR1_SMP6_2 (0x4UL << ADC_SMPR1_SMP6_Pos) /*!< 0x00100000 */

#define ADC_SMPR1_SMP7_Pos (21U)
#define ADC_SMPR1_SMP7_Msk (0x7UL << ADC_SMPR1_SMP7_Pos) /*!< 0x00E00000 */
#define ADC_SMPR1_SMP7 \
    ADC_SMPR1_SMP7_Msk /*!< ADC channel 7 sampling time selection  */
#define ADC_SMPR1_SMP7_0 (0x1UL << ADC_SMPR1_SMP7_Pos) /*!< 0x00200000 */
#define ADC_SMPR1_SMP7_1 (0x2UL << ADC_SMPR1_SMP7_Pos) /*!< 0x00400000 */
#define ADC_SMPR1_SMP7_2 (0x4UL << ADC_SMPR1_SMP7_Pos) /*!< 0x00800000 */

#define ADC_SMPR1_SMP8_Pos (24U)
#define ADC_SMPR1_SMP8_Msk (0x7UL << ADC_SMPR1_SMP8_Pos) /*!< 0x07000000 */
#define ADC_SMPR1_SMP8 \
    ADC_SMPR1_SMP8_Msk /*!< ADC channel 8 sampling time selection  */
#define ADC_SMPR1_SMP8_0 (0x1UL << ADC_SMPR1_SMP8_Pos) /*!< 0x01000000 */
#define ADC_SMPR1_SMP8_1 (0x2UL << ADC_SMPR1_SMP8_Pos) /*!< 0x02000000 */
#define ADC_SMPR1_SMP8_2 (0x4UL << ADC_SMPR1_SMP8_Pos) /*!< 0x04000000 */

#define ADC_SMPR1_SMP9_Pos (27U)
#define ADC_SMPR1_SMP9_Msk (0x7UL << ADC_SMPR1_SMP9_Pos) /*!< 0x38000000 */
#define ADC_SMPR1_SMP9 \
    ADC_SMPR1_SMP9_Msk /*!< ADC channel 9 sampling time selection  */
#define ADC_SMPR1_SMP9_0 (0x1UL << ADC_SMPR1_SMP9_Pos) /*!< 0x08000000 */
#define ADC_SMPR1_SMP9_1 (0x2UL << ADC_SMPR1_SMP9_Pos) /*!< 0x10000000 */
#define ADC_SMPR1_SMP9_2 (0x4UL << ADC_SMPR1_SMP9_Pos) /*!< 0x20000000 */

#define ADC_SMPR1_SMPPLUS_Pos (31U)
#define ADC_SMPR1_SMPPLUS_Msk \
    (0x1UL << ADC_SMPR1_SMPPLUS_Pos) /*!< 0x80000000 */
#define ADC_SMPR1_SMPPLUS \
    ADC_SMPR1_SMPPLUS_Msk /*!< ADC channels sampling time additional setting */

/********************  Bit definition for ADC_SMPR2 register  *****************/
#define ADC_SMPR2_SMP10_Pos (0U)
#define ADC_SMPR2_SMP10_Msk (0x7UL << ADC_SMPR2_SMP10_Pos) /*!< 0x00000007 */
#define ADC_SMPR2_SMP10 \
    ADC_SMPR2_SMP10_Msk /*!< ADC channel 10 sampling time selection  */
#define ADC_SMPR2_SMP10_0 (0x1UL << ADC_SMPR2_SMP10_Pos) /*!< 0x00000001 */
#define ADC_SMPR2_SMP10_1 (0x2UL << ADC_SMPR2_SMP10_Pos) /*!< 0x00000002 */
#define ADC_SMPR2_SMP10_2 (0x4UL << ADC_SMPR2_SMP10_Pos) /*!< 0x00000004 */

#define ADC_SMPR2_SMP11_Pos (3U)
#define ADC_SMPR2_SMP11_Msk (0x7UL << ADC_SMPR2_SMP11_Pos) /*!< 0x00000038 */
#define ADC_SMPR2_SMP11 \
    ADC_SMPR2_SMP11_Msk /*!< ADC channel 11 sampling time selection  */
#define ADC_SMPR2_SMP11_0 (0x1UL << ADC_SMPR2_SMP11_Pos) /*!< 0x00000008 */
#define ADC_SMPR2_SMP11_1 (0x2UL << ADC_SMPR2_SMP11_Pos) /*!< 0x00000010 */
#define ADC_SMPR2_SMP11_2 (0x4UL << ADC_SMPR2_SMP11_Pos) /*!< 0x00000020 */

#define ADC_SMPR2_SMP12_Pos (6U)
#define ADC_SMPR2_SMP12_Msk (0x7UL << ADC_SMPR2_SMP12_Pos) /*!< 0x000001C0 */
#define ADC_SMPR2_SMP12 \
    ADC_SMPR2_SMP12_Msk /*!< ADC channel 12 sampling time selection  */
#define ADC_SMPR2_SMP12_0 (0x1UL << ADC_SMPR2_SMP12_Pos) /*!< 0x00000040 */
#define ADC_SMPR2_SMP12_1 (0x2UL << ADC_SMPR2_SMP12_Pos) /*!< 0x00000080 */
#define ADC_SMPR2_SMP12_2 (0x4UL << ADC_SMPR2_SMP12_Pos) /*!< 0x00000100 */

#define ADC_SMPR2_SMP13_Pos (9U)
#define ADC_SMPR2_SMP13_Msk (0x7UL << ADC_SMPR2_SMP13_Pos) /*!< 0x00000E00 */
#define ADC_SMPR2_SMP13 \
    ADC_SMPR2_SMP13_Msk /*!< ADC channel 13 sampling time selection  */
#define ADC_SMPR2_SMP13_0 (0x1UL << ADC_SMPR2_SMP13_Pos) /*!< 0x00000200 */
#define ADC_SMPR2_SMP13_1 (0x2UL << ADC_SMPR2_SMP13_Pos) /*!< 0x00000400 */
#define ADC_SMPR2_SMP13_2 (0x4UL << ADC_SMPR2_SMP13_Pos) /*!< 0x00000800 */

#define ADC_SMPR2_SMP14_Pos (12U)
#define ADC_SMPR2_SMP14_Msk (0x7UL << ADC_SMPR2_SMP14_Pos) /*!< 0x00007000 */
#define ADC_SMPR2_SMP14 \
    ADC_SMPR2_SMP14_Msk /*!< ADC channel 14 sampling time selection  */
#define ADC_SMPR2_SMP14_0 (0x1UL << ADC_SMPR2_SMP14_Pos) /*!< 0x00001000 */
#define ADC_SMPR2_SMP14_1 (0x2UL << ADC_SMPR2_SMP14_Pos) /*!< 0x00002000 */
#define ADC_SMPR2_SMP14_2 (0x4UL << ADC_SMPR2_SMP14_Pos) /*!< 0x00004000 */

#define ADC_SMPR2_SMP15_Pos (15U)
#define ADC_SMPR2_SMP15_Msk (0x7UL << ADC_SMPR2_SMP15_Pos) /*!< 0x00038000 */
#define ADC_SMPR2_SMP15 \
    ADC_SMPR2_SMP15_Msk /*!< ADC channel 15 sampling time selection  */
#define ADC_SMPR2_SMP15_0 (0x1UL << ADC_SMPR2_SMP15_Pos) /*!< 0x00008000 */
#define ADC_SMPR2_SMP15_1 (0x2UL << ADC_SMPR2_SMP15_Pos) /*!< 0x00010000 */
#define ADC_SMPR2_SMP15_2 (0x4UL << ADC_SMPR2_SMP15_Pos) /*!< 0x00020000 */

#define ADC_SMPR2_SMP16_Pos (18U)
#define ADC_SMPR2_SMP16_Msk (0x7UL << ADC_SMPR2_SMP16_Pos) /*!< 0x001C0000 */
#define ADC_SMPR2_SMP16 \
    ADC_SMPR2_SMP16_Msk /*!< ADC channel 16 sampling time selection  */
#define ADC_SMPR2_SMP16_0 (0x1UL << ADC_SMPR2_SMP16_Pos) /*!< 0x00040000 */
#define ADC_SMPR2_SMP16_1 (0x2UL << ADC_SMPR2_SMP16_Pos) /*!< 0x00080000 */
#define ADC_SMPR2_SMP16_2 (0x4UL << ADC_SMPR2_SMP16_Pos) /*!< 0x00100000 */

#define ADC_SMPR2_SMP17_Pos (21U)
#define ADC_SMPR2_SMP17_Msk (0x7UL << ADC_SMPR2_SMP17_Pos) /*!< 0x00E00000 */
#define ADC_SMPR2_SMP17 \
    ADC_SMPR2_SMP17_Msk /*!< ADC channel 17 sampling time selection  */
#define ADC_SMPR2_SMP17_0 (0x1UL << ADC_SMPR2_SMP17_Pos) /*!< 0x00200000 */
#define ADC_SMPR2_SMP17_1 (0x2UL << ADC_SMPR2_SMP17_Pos) /*!< 0x00400000 */
#define ADC_SMPR2_SMP17_2 (0x4UL << ADC_SMPR2_SMP17_Pos) /*!< 0x00800000 */

#define ADC_SMPR2_SMP18_Pos (24U)
#define ADC_SMPR2_SMP18_Msk (0x7UL << ADC_SMPR2_SMP18_Pos) /*!< 0x07000000 */
#define ADC_SMPR2_SMP18 \
    ADC_SMPR2_SMP18_Msk /*!< ADC channel 18 sampling time selection  */
#define ADC_SMPR2_SMP18_0 (0x1UL << ADC_SMPR2_SMP18_Pos) /*!< 0x01000000 */
#define ADC_SMPR2_SMP18_1 (0x2UL << ADC_SMPR2_SMP18_Pos) /*!< 0x02000000 */
#define ADC_SMPR2_SMP18_2 (0x4UL << ADC_SMPR2_SMP18_Pos) /*!< 0x04000000 */

/********************  Bit definition for ADC_TR1 register  *******************/
#define ADC_TR1_LT1_Pos (0U)
#define ADC_TR1_LT1_Msk (0xFFFUL << ADC_TR1_LT1_Pos) /*!< 0x00000FFF */
#define ADC_TR1_LT1 ADC_TR1_LT1_Msk /*!< ADC analog watchdog 1 threshold low */

#define ADC_TR1_AWDFILT_Pos (12U)
#define ADC_TR1_AWDFILT_Msk (0x7UL << ADC_TR1_AWDFILT_Pos) /*!< 0x00007000 */
#define ADC_TR1_AWDFILT \
    ADC_TR1_AWDFILT_Msk /*!< ADC analog watchdog filtering parameter  */
#define ADC_TR1_AWDFILT_0 (0x1UL << ADC_TR1_AWDFILT_Pos) /*!< 0x00001000 */
#define ADC_TR1_AWDFILT_1 (0x2UL << ADC_TR1_AWDFILT_Pos) /*!< 0x00002000 */
#define ADC_TR1_AWDFILT_2 (0x4UL << ADC_TR1_AWDFILT_Pos) /*!< 0x00004000 */

#define ADC_TR1_HT1_Pos (16U)
#define ADC_TR1_HT1_Msk (0xFFFUL << ADC_TR1_HT1_Pos) /*!< 0x0FFF0000 */
#define ADC_TR1_HT1 ADC_TR1_HT1_Msk /*!< ADC analog watchdog 1 threshold high */

/********************  Bit definition for ADC_TR2 register  *******************/
#define ADC_TR2_LT2_Pos (0U)
#define ADC_TR2_LT2_Msk (0xFFUL << ADC_TR2_LT2_Pos) /*!< 0x000000FF */
#define ADC_TR2_LT2 ADC_TR2_LT2_Msk /*!< ADC analog watchdog 2 threshold low */

#define ADC_TR2_HT2_Pos (16U)
#define ADC_TR2_HT2_Msk (0xFFUL << ADC_TR2_HT2_Pos) /*!< 0x00FF0000 */
#define ADC_TR2_HT2 ADC_TR2_HT2_Msk /*!< ADC analog watchdog 2 threshold high */

/********************  Bit definition for ADC_TR3 register  *******************/
#define ADC_TR3_LT3_Pos (0U)
#define ADC_TR3_LT3_Msk (0xFFUL << ADC_TR3_LT3_Pos) /*!< 0x000000FF */
#define ADC_TR3_LT3 ADC_TR3_LT3_Msk /*!< ADC analog watchdog 3 threshold low */

#define ADC_TR3_HT3_Pos (16U)
#define ADC_TR3_HT3_Msk (0xFFUL << ADC_TR3_HT3_Pos) /*!< 0x00FF0000 */
#define ADC_TR3_HT3 ADC_TR3_HT3_Msk /*!< ADC analog watchdog 3 threshold high */

/********************  Bit definition for ADC_SQR1 register  ******************/
#define ADC_SQR1_L_Pos (0U)
#define ADC_SQR1_L_Msk (0xFUL << ADC_SQR1_L_Pos) /*!< 0x0000000F */
#define ADC_SQR1_L \
    ADC_SQR1_L_Msk /*!< ADC group regular sequencer scan length */
#define ADC_SQR1_L_0 (0x1UL << ADC_SQR1_L_Pos) /*!< 0x00000001 */
#define ADC_SQR1_L_1 (0x2UL << ADC_SQR1_L_Pos) /*!< 0x00000002 */
#define ADC_SQR1_L_2 (0x4UL << ADC_SQR1_L_Pos) /*!< 0x00000004 */
#define ADC_SQR1_L_3 (0x8UL << ADC_SQR1_L_Pos) /*!< 0x00000008 */

#define ADC_SQR1_SQ1_Pos (6U)
#define ADC_SQR1_SQ1_Msk (0x1FUL << ADC_SQR1_SQ1_Pos) /*!< 0x000007C0 */
#define ADC_SQR1_SQ1 ADC_SQR1_SQ1_Msk /*!< ADC group regular sequencer rank 1 */
#define ADC_SQR1_SQ1_0 (0x01UL << ADC_SQR1_SQ1_Pos) /*!< 0x00000040 */
#define ADC_SQR1_SQ1_1 (0x02UL << ADC_SQR1_SQ1_Pos) /*!< 0x00000080 */
#define ADC_SQR1_SQ1_2 (0x04UL << ADC_SQR1_SQ1_Pos) /*!< 0x00000100 */
#define ADC_SQR1_SQ1_3 (0x08UL << ADC_SQR1_SQ1_Pos) /*!< 0x00000200 */
#define ADC_SQR1_SQ1_4 (0x10UL << ADC_SQR1_SQ1_Pos) /*!< 0x00000400 */

#define ADC_SQR1_SQ2_Pos (12U)
#define ADC_SQR1_SQ2_Msk (0x1FUL << ADC_SQR1_SQ2_Pos) /*!< 0x0001F000 */
#define ADC_SQR1_SQ2 ADC_SQR1_SQ2_Msk /*!< ADC group regular sequencer rank 2 */
#define ADC_SQR1_SQ2_0 (0x01UL << ADC_SQR1_SQ2_Pos) /*!< 0x00001000 */
#define ADC_SQR1_SQ2_1 (0x02UL << ADC_SQR1_SQ2_Pos) /*!< 0x00002000 */
#define ADC_SQR1_SQ2_2 (0x04UL << ADC_SQR1_SQ2_Pos) /*!< 0x00004000 */
#define ADC_SQR1_SQ2_3 (0x08UL << ADC_SQR1_SQ2_Pos) /*!< 0x00008000 */
#define ADC_SQR1_SQ2_4 (0x10UL << ADC_SQR1_SQ2_Pos) /*!< 0x00010000 */

#define ADC_SQR1_SQ3_Pos (18U)
#define ADC_SQR1_SQ3_Msk (0x1FUL << ADC_SQR1_SQ3_Pos) /*!< 0x007C0000 */
#define ADC_SQR1_SQ3 ADC_SQR1_SQ3_Msk /*!< ADC group regular sequencer rank 3 */
#define ADC_SQR1_SQ3_0 (0x01UL << ADC_SQR1_SQ3_Pos) /*!< 0x00040000 */
#define ADC_SQR1_SQ3_1 (0x02UL << ADC_SQR1_SQ3_Pos) /*!< 0x00080000 */
#define ADC_SQR1_SQ3_2 (0x04UL << ADC_SQR1_SQ3_Pos) /*!< 0x00100000 */
#define ADC_SQR1_SQ3_3 (0x08UL << ADC_SQR1_SQ3_Pos) /*!< 0x00200000 */
#define ADC_SQR1_SQ3_4 (0x10UL << ADC_SQR1_SQ3_Pos) /*!< 0x00400000 */

#define ADC_SQR1_SQ4_Pos (24U)
#define ADC_SQR1_SQ4_Msk (0x1FUL << ADC_SQR1_SQ4_Pos) /*!< 0x1F000000 */
#define ADC_SQR1_SQ4 ADC_SQR1_SQ4_Msk /*!< ADC group regular sequencer rank 4 */
#define ADC_SQR1_SQ4_0 (0x01UL << ADC_SQR1_SQ4_Pos) /*!< 0x01000000 */
#define ADC_SQR1_SQ4_1 (0x02UL << ADC_SQR1_SQ4_Pos) /*!< 0x02000000 */
#define ADC_SQR1_SQ4_2 (0x04UL << ADC_SQR1_SQ4_Pos) /*!< 0x04000000 */
#define ADC_SQR1_SQ4_3 (0x08UL << ADC_SQR1_SQ4_Pos) /*!< 0x08000000 */
#define ADC_SQR1_SQ4_4 (0x10UL << ADC_SQR1_SQ4_Pos) /*!< 0x10000000 */

/********************  Bit definition for ADC_SQR2 register  ******************/
#define ADC_SQR2_SQ5_Pos (0U)
#define ADC_SQR2_SQ5_Msk (0x1FUL << ADC_SQR2_SQ5_Pos) /*!< 0x0000001F */
#define ADC_SQR2_SQ5 ADC_SQR2_SQ5_Msk /*!< ADC group regular sequencer rank 5 */
#define ADC_SQR2_SQ5_0 (0x01UL << ADC_SQR2_SQ5_Pos) /*!< 0x00000001 */
#define ADC_SQR2_SQ5_1 (0x02UL << ADC_SQR2_SQ5_Pos) /*!< 0x00000002 */
#define ADC_SQR2_SQ5_2 (0x04UL << ADC_SQR2_SQ5_Pos) /*!< 0x00000004 */
#define ADC_SQR2_SQ5_3 (0x08UL << ADC_SQR2_SQ5_Pos) /*!< 0x00000008 */
#define ADC_SQR2_SQ5_4 (0x10UL << ADC_SQR2_SQ5_Pos) /*!< 0x00000010 */

#define ADC_SQR2_SQ6_Pos (6U)
#define ADC_SQR2_SQ6_Msk (0x1FUL << ADC_SQR2_SQ6_Pos) /*!< 0x000007C0 */
#define ADC_SQR2_SQ6 ADC_SQR2_SQ6_Msk /*!< ADC group regular sequencer rank 6 */
#define ADC_SQR2_SQ6_0 (0x01UL << ADC_SQR2_SQ6_Pos) /*!< 0x00000040 */
#define ADC_SQR2_SQ6_1 (0x02UL << ADC_SQR2_SQ6_Pos) /*!< 0x00000080 */
#define ADC_SQR2_SQ6_2 (0x04UL << ADC_SQR2_SQ6_Pos) /*!< 0x00000100 */
#define ADC_SQR2_SQ6_3 (0x08UL << ADC_SQR2_SQ6_Pos) /*!< 0x00000200 */
#define ADC_SQR2_SQ6_4 (0x10UL << ADC_SQR2_SQ6_Pos) /*!< 0x00000400 */

#define ADC_SQR2_SQ7_Pos (12U)
#define ADC_SQR2_SQ7_Msk (0x1FUL << ADC_SQR2_SQ7_Pos) /*!< 0x0001F000 */
#define ADC_SQR2_SQ7 ADC_SQR2_SQ7_Msk /*!< ADC group regular sequencer rank 7 */
#define ADC_SQR2_SQ7_0 (0x01UL << ADC_SQR2_SQ7_Pos) /*!< 0x00001000 */
#define ADC_SQR2_SQ7_1 (0x02UL << ADC_SQR2_SQ7_Pos) /*!< 0x00002000 */
#define ADC_SQR2_SQ7_2 (0x04UL << ADC_SQR2_SQ7_Pos) /*!< 0x00004000 */
#define ADC_SQR2_SQ7_3 (0x08UL << ADC_SQR2_SQ7_Pos) /*!< 0x00008000 */
#define ADC_SQR2_SQ7_4 (0x10UL << ADC_SQR2_SQ7_Pos) /*!< 0x00010000 */

#define ADC_SQR2_SQ8_Pos (18U)
#define ADC_SQR2_SQ8_Msk (0x1FUL << ADC_SQR2_SQ8_Pos) /*!< 0x007C0000 */
#define ADC_SQR2_SQ8 ADC_SQR2_SQ8_Msk /*!< ADC group regular sequencer rank 8 */
#define ADC_SQR2_SQ8_0 (0x01UL << ADC_SQR2_SQ8_Pos) /*!< 0x00040000 */
#define ADC_SQR2_SQ8_1 (0x02UL << ADC_SQR2_SQ8_Pos) /*!< 0x00080000 */
#define ADC_SQR2_SQ8_2 (0x04UL << ADC_SQR2_SQ8_Pos) /*!< 0x00100000 */
#define ADC_SQR2_SQ8_3 (0x08UL << ADC_SQR2_SQ8_Pos) /*!< 0x00200000 */
#define ADC_SQR2_SQ8_4 (0x10UL << ADC_SQR2_SQ8_Pos) /*!< 0x00400000 */

#define ADC_SQR2_SQ9_Pos (24U)
#define ADC_SQR2_SQ9_Msk (0x1FUL << ADC_SQR2_SQ9_Pos) /*!< 0x1F000000 */
#define ADC_SQR2_SQ9 ADC_SQR2_SQ9_Msk /*!< ADC group regular sequencer rank 9 */
#define ADC_SQR2_SQ9_0 (0x01UL << ADC_SQR2_SQ9_Pos) /*!< 0x01000000 */
#define ADC_SQR2_SQ9_1 (0x02UL << ADC_SQR2_SQ9_Pos) /*!< 0x02000000 */
#define ADC_SQR2_SQ9_2 (0x04UL << ADC_SQR2_SQ9_Pos) /*!< 0x04000000 */
#define ADC_SQR2_SQ9_3 (0x08UL << ADC_SQR2_SQ9_Pos) /*!< 0x08000000 */
#define ADC_SQR2_SQ9_4 (0x10UL << ADC_SQR2_SQ9_Pos) /*!< 0x10000000 */

/********************  Bit definition for ADC_SQR3 register  ******************/
#define ADC_SQR3_SQ10_Pos (0U)
#define ADC_SQR3_SQ10_Msk (0x1FUL << ADC_SQR3_SQ10_Pos) /*!< 0x0000001F */
#define ADC_SQR3_SQ10 \
    ADC_SQR3_SQ10_Msk /*!< ADC group regular sequencer rank 10 */
#define ADC_SQR3_SQ10_0 (0x01UL << ADC_SQR3_SQ10_Pos) /*!< 0x00000001 */
#define ADC_SQR3_SQ10_1 (0x02UL << ADC_SQR3_SQ10_Pos) /*!< 0x00000002 */
#define ADC_SQR3_SQ10_2 (0x04UL << ADC_SQR3_SQ10_Pos) /*!< 0x00000004 */
#define ADC_SQR3_SQ10_3 (0x08UL << ADC_SQR3_SQ10_Pos) /*!< 0x00000008 */
#define ADC_SQR3_SQ10_4 (0x10UL << ADC_SQR3_SQ10_Pos) /*!< 0x00000010 */

#define ADC_SQR3_SQ11_Pos (6U)
#define ADC_SQR3_SQ11_Msk (0x1FUL << ADC_SQR3_SQ11_Pos) /*!< 0x000007C0 */
#define ADC_SQR3_SQ11 \
    ADC_SQR3_SQ11_Msk /*!< ADC group regular sequencer rank 11 */
#define ADC_SQR3_SQ11_0 (0x01UL << ADC_SQR3_SQ11_Pos) /*!< 0x00000040 */
#define ADC_SQR3_SQ11_1 (0x02UL << ADC_SQR3_SQ11_Pos) /*!< 0x00000080 */
#define ADC_SQR3_SQ11_2 (0x04UL << ADC_SQR3_SQ11_Pos) /*!< 0x00000100 */
#define ADC_SQR3_SQ11_3 (0x08UL << ADC_SQR3_SQ11_Pos) /*!< 0x00000200 */
#define ADC_SQR3_SQ11_4 (0x10UL << ADC_SQR3_SQ11_Pos) /*!< 0x00000400 */

#define ADC_SQR3_SQ12_Pos (12U)
#define ADC_SQR3_SQ12_Msk (0x1FUL << ADC_SQR3_SQ12_Pos) /*!< 0x0001F000 */
#define ADC_SQR3_SQ12 \
    ADC_SQR3_SQ12_Msk /*!< ADC group regular sequencer rank 12 */
#define ADC_SQR3_SQ12_0 (0x01UL << ADC_SQR3_SQ12_Pos) /*!< 0x00001000 */
#define ADC_SQR3_SQ12_1 (0x02UL << ADC_SQR3_SQ12_Pos) /*!< 0x00002000 */
#define ADC_SQR3_SQ12_2 (0x04UL << ADC_SQR3_SQ12_Pos) /*!< 0x00004000 */
#define ADC_SQR3_SQ12_3 (0x08UL << ADC_SQR3_SQ12_Pos) /*!< 0x00008000 */
#define ADC_SQR3_SQ12_4 (0x10UL << ADC_SQR3_SQ12_Pos) /*!< 0x00010000 */

#define ADC_SQR3_SQ13_Pos (18U)
#define ADC_SQR3_SQ13_Msk (0x1FUL << ADC_SQR3_SQ13_Pos) /*!< 0x007C0000 */
#define ADC_SQR3_SQ13 \
    ADC_SQR3_SQ13_Msk /*!< ADC group regular sequencer rank 13 */
#define ADC_SQR3_SQ13_0 (0x01UL << ADC_SQR3_SQ13_Pos) /*!< 0x00040000 */
#define ADC_SQR3_SQ13_1 (0x02UL << ADC_SQR3_SQ13_Pos) /*!< 0x00080000 */
#define ADC_SQR3_SQ13_2 (0x04UL << ADC_SQR3_SQ13_Pos) /*!< 0x00100000 */
#define ADC_SQR3_SQ13_3 (0x08UL << ADC_SQR3_SQ13_Pos) /*!< 0x00200000 */
#define ADC_SQR3_SQ13_4 (0x10UL << ADC_SQR3_SQ13_Pos) /*!< 0x00400000 */

#define ADC_SQR3_SQ14_Pos (24U)
#define ADC_SQR3_SQ14_Msk (0x1FUL << ADC_SQR3_SQ14_Pos) /*!< 0x1F000000 */
#define ADC_SQR3_SQ14 \
    ADC_SQR3_SQ14_Msk /*!< ADC group regular sequencer rank 14 */
#define ADC_SQR3_SQ14_0 (0x01UL << ADC_SQR3_SQ14_Pos) /*!< 0x01000000 */
#define ADC_SQR3_SQ14_1 (0x02UL << ADC_SQR3_SQ14_Pos) /*!< 0x02000000 */
#define ADC_SQR3_SQ14_2 (0x04UL << ADC_SQR3_SQ14_Pos) /*!< 0x04000000 */
#define ADC_SQR3_SQ14_3 (0x08UL << ADC_SQR3_SQ14_Pos) /*!< 0x08000000 */
#define ADC_SQR3_SQ14_4 (0x10UL << ADC_SQR3_SQ14_Pos) /*!< 0x10000000 */

/********************  Bit definition for ADC_SQR4 register  ******************/
#define ADC_SQR4_SQ15_Pos (0U)
#define ADC_SQR4_SQ15_Msk (0x1FUL << ADC_SQR4_SQ15_Pos) /*!< 0x0000001F */
#define ADC_SQR4_SQ15 \
    ADC_SQR4_SQ15_Msk /*!< ADC group regular sequencer rank 15 */
#define ADC_SQR4_SQ15_0 (0x01UL << ADC_SQR4_SQ15_Pos) /*!< 0x00000001 */
#define ADC_SQR4_SQ15_1 (0x02UL << ADC_SQR4_SQ15_Pos) /*!< 0x00000002 */
#define ADC_SQR4_SQ15_2 (0x04UL << ADC_SQR4_SQ15_Pos) /*!< 0x00000004 */
#define ADC_SQR4_SQ15_3 (0x08UL << ADC_SQR4_SQ15_Pos) /*!< 0x00000008 */
#define ADC_SQR4_SQ15_4 (0x10UL << ADC_SQR4_SQ15_Pos) /*!< 0x00000010 */

#define ADC_SQR4_SQ16_Pos (6U)
#define ADC_SQR4_SQ16_Msk (0x1FUL << ADC_SQR4_SQ16_Pos) /*!< 0x000007C0 */
#define ADC_SQR4_SQ16 \
    ADC_SQR4_SQ16_Msk /*!< ADC group regular sequencer rank 16 */
#define ADC_SQR4_SQ16_0 (0x01UL << ADC_SQR4_SQ16_Pos) /*!< 0x00000040 */
#define ADC_SQR4_SQ16_1 (0x02UL << ADC_SQR4_SQ16_Pos) /*!< 0x00000080 */
#define ADC_SQR4_SQ16_2 (0x04UL << ADC_SQR4_SQ16_Pos) /*!< 0x00000100 */
#define ADC_SQR4_SQ16_3 (0x08UL << ADC_SQR4_SQ16_Pos) /*!< 0x00000200 */
#define ADC_SQR4_SQ16_4 (0x10UL << ADC_SQR4_SQ16_Pos) /*!< 0x00000400 */

/********************  Bit definition for ADC_DR register  ********************/
#define ADC_DR_RDATA_Pos (0U)
#define ADC_DR_RDATA_Msk (0xFFFFUL << ADC_DR_RDATA_Pos) /*!< 0x0000FFFF */
#define ADC_DR_RDATA ADC_DR_RDATA_Msk /*!< ADC group regular conversion data */

/********************  Bit definition for ADC_JSQR register  ******************/
#define ADC_JSQR_JL_Pos (0U)
#define ADC_JSQR_JL_Msk (0x3UL << ADC_JSQR_JL_Pos) /*!< 0x00000003 */
#define ADC_JSQR_JL \
    ADC_JSQR_JL_Msk /*!< ADC group injected sequencer scan length */
#define ADC_JSQR_JL_0 (0x1UL << ADC_JSQR_JL_Pos) /*!< 0x00000001 */
#define ADC_JSQR_JL_1 (0x2UL << ADC_JSQR_JL_Pos) /*!< 0x00000002 */

#define ADC_JSQR_JEXTSEL_Pos (2U)
#define ADC_JSQR_JEXTSEL_Msk (0x1FUL << ADC_JSQR_JEXTSEL_Pos) /*!< 0x0000007C */
#define ADC_JSQR_JEXTSEL \
    ADC_JSQR_JEXTSEL_Msk /*!< ADC group injected external trigger source */
#define ADC_JSQR_JEXTSEL_0 (0x1UL << ADC_JSQR_JEXTSEL_Pos)  /*!< 0x00000004 */
#define ADC_JSQR_JEXTSEL_1 (0x2UL << ADC_JSQR_JEXTSEL_Pos)  /*!< 0x00000008 */
#define ADC_JSQR_JEXTSEL_2 (0x4UL << ADC_JSQR_JEXTSEL_Pos)  /*!< 0x00000010 */
#define ADC_JSQR_JEXTSEL_3 (0x8UL << ADC_JSQR_JEXTSEL_Pos)  /*!< 0x00000020 */
#define ADC_JSQR_JEXTSEL_4 (0x10UL << ADC_JSQR_JEXTSEL_Pos) /*!< 0x00000040 */

#define ADC_JSQR_JEXTEN_Pos (7U)
#define ADC_JSQR_JEXTEN_Msk (0x3UL << ADC_JSQR_JEXTEN_Pos) /*!< 0x00000180 */
#define ADC_JSQR_JEXTEN \
    ADC_JSQR_JEXTEN_Msk /*!< ADC group injected external trigger polarity */
#define ADC_JSQR_JEXTEN_0 (0x1UL << ADC_JSQR_JEXTEN_Pos) /*!< 0x00000080 */
#define ADC_JSQR_JEXTEN_1 (0x2UL << ADC_JSQR_JEXTEN_Pos) /*!< 0x00000100 */

#define ADC_JSQR_JSQ1_Pos (9U)
#define ADC_JSQR_JSQ1_Msk (0x1FUL << ADC_JSQR_JSQ1_Pos) /*!< 0x00003E00 */
#define ADC_JSQR_JSQ1 \
    ADC_JSQR_JSQ1_Msk /*!< ADC group injected sequencer rank 1 */
#define ADC_JSQR_JSQ1_0 (0x01UL << ADC_JSQR_JSQ1_Pos) /*!< 0x00000200 */
#define ADC_JSQR_JSQ1_1 (0x02UL << ADC_JSQR_JSQ1_Pos) /*!< 0x00000400 */
#define ADC_JSQR_JSQ1_2 (0x04UL << ADC_JSQR_JSQ1_Pos) /*!< 0x00000800 */
#define ADC_JSQR_JSQ1_3 (0x08UL << ADC_JSQR_JSQ1_Pos) /*!< 0x00001000 */
#define ADC_JSQR_JSQ1_4 (0x10UL << ADC_JSQR_JSQ1_Pos) /*!< 0x00002000 */

#define ADC_JSQR_JSQ2_Pos (15U)
#define ADC_JSQR_JSQ2_Msk (0x1FUL << ADC_JSQR_JSQ2_Pos) /*!< 0x0007C000 */
#define ADC_JSQR_JSQ2 \
    ADC_JSQR_JSQ2_Msk /*!< ADC group injected sequencer rank 2 */
#define ADC_JSQR_JSQ2_0 (0x01UL << ADC_JSQR_JSQ2_Pos) /*!< 0x00004000 */
#define ADC_JSQR_JSQ2_1 (0x02UL << ADC_JSQR_JSQ2_Pos) /*!< 0x00008000 */
#define ADC_JSQR_JSQ2_2 (0x04UL << ADC_JSQR_JSQ2_Pos) /*!< 0x00010000 */
#define ADC_JSQR_JSQ2_3 (0x08UL << ADC_JSQR_JSQ2_Pos) /*!< 0x00020000 */
#define ADC_JSQR_JSQ2_4 (0x10UL << ADC_JSQR_JSQ2_Pos) /*!< 0x00040000 */

#define ADC_JSQR_JSQ3_Pos (21U)
#define ADC_JSQR_JSQ3_Msk (0x1FUL << ADC_JSQR_JSQ3_Pos) /*!< 0x03E00000 */
#define ADC_JSQR_JSQ3 \
    ADC_JSQR_JSQ3_Msk /*!< ADC group injected sequencer rank 3 */
#define ADC_JSQR_JSQ3_0 (0x01UL << ADC_JSQR_JSQ3_Pos) /*!< 0x00200000 */
#define ADC_JSQR_JSQ3_1 (0x02UL << ADC_JSQR_JSQ3_Pos) /*!< 0x00400000 */
#define ADC_JSQR_JSQ3_2 (0x04UL << ADC_JSQR_JSQ3_Pos) /*!< 0x00800000 */
#define ADC_JSQR_JSQ3_3 (0x08UL << ADC_JSQR_JSQ3_Pos) /*!< 0x01000000 */
#define ADC_JSQR_JSQ3_4 (0x10UL << ADC_JSQR_JSQ3_Pos) /*!< 0x02000000 */

#define ADC_JSQR_JSQ4_Pos (27U)
#define ADC_JSQR_JSQ4_Msk (0x1FUL << ADC_JSQR_JSQ4_Pos) /*!< 0xF8000000 */
#define ADC_JSQR_JSQ4 \
    ADC_JSQR_JSQ4_Msk /*!< ADC group injected sequencer rank 4 */
#define ADC_JSQR_JSQ4_0 (0x01UL << ADC_JSQR_JSQ4_Pos) /*!< 0x08000000 */
#define ADC_JSQR_JSQ4_1 (0x02UL << ADC_JSQR_JSQ4_Pos) /*!< 0x10000000 */
#define ADC_JSQR_JSQ4_2 (0x04UL << ADC_JSQR_JSQ4_Pos) /*!< 0x20000000 */
#define ADC_JSQR_JSQ4_3 (0x08UL << ADC_JSQR_JSQ4_Pos) /*!< 0x40000000 */
#define ADC_JSQR_JSQ4_4 (0x10UL << ADC_JSQR_JSQ4_Pos) /*!< 0x80000000 */

/********************  Bit definition for ADC_OFR1 register  ******************/
#define ADC_OFR1_OFFSET1_Pos (0U)
#define ADC_OFR1_OFFSET1_Msk \
    (0xFFFUL << ADC_OFR1_OFFSET1_Pos) /*!< 0x00000FFF */
#define ADC_OFR1_OFFSET1 \
    ADC_OFR1_OFFSET1_Msk /*!< ADC offset number 1 offset level */

#define ADC_OFR1_OFFSETPOS_Pos (24U)
#define ADC_OFR1_OFFSETPOS_Msk \
    (0x1UL << ADC_OFR1_OFFSETPOS_Pos) /*!< 0x01000000 */
#define ADC_OFR1_OFFSETPOS \
    ADC_OFR1_OFFSETPOS_Msk /*!< ADC offset number 1 positive */
#define ADC_OFR1_SATEN_Pos (25U)
#define ADC_OFR1_SATEN_Msk (0x1UL << ADC_OFR1_SATEN_Pos) /*!< 0x02000000 */
#define ADC_OFR1_SATEN \
    ADC_OFR1_SATEN_Msk /*!< ADC offset number 1 saturation enable */

#define ADC_OFR1_OFFSET1_CH_Pos (26U)
#define ADC_OFR1_OFFSET1_CH_Msk \
    (0x1FUL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x7C000000 */
#define ADC_OFR1_OFFSET1_CH \
    ADC_OFR1_OFFSET1_CH_Msk /*!< ADC offset number 1 channel selection */
#define ADC_OFR1_OFFSET1_CH_0 \
    (0x01UL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x04000000 */
#define ADC_OFR1_OFFSET1_CH_1 \
    (0x02UL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x08000000 */
#define ADC_OFR1_OFFSET1_CH_2 \
    (0x04UL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x10000000 */
#define ADC_OFR1_OFFSET1_CH_3 \
    (0x08UL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x20000000 */
#define ADC_OFR1_OFFSET1_CH_4 \
    (0x10UL << ADC_OFR1_OFFSET1_CH_Pos) /*!< 0x40000000 */

#define ADC_OFR1_OFFSET1_EN_Pos (31U)
#define ADC_OFR1_OFFSET1_EN_Msk \
    (0x1UL << ADC_OFR1_OFFSET1_EN_Pos) /*!< 0x80000000 */
#define ADC_OFR1_OFFSET1_EN \
    ADC_OFR1_OFFSET1_EN_Msk /*!< ADC offset number 1 enable */

/********************  Bit definition for ADC_OFR2 register  ******************/
#define ADC_OFR2_OFFSET2_Pos (0U)
#define ADC_OFR2_OFFSET2_Msk \
    (0xFFFUL << ADC_OFR2_OFFSET2_Pos) /*!< 0x00000FFF */
#define ADC_OFR2_OFFSET2 \
    ADC_OFR2_OFFSET2_Msk /*!< ADC offset number 2 offset level */

#define ADC_OFR2_OFFSETPOS_Pos (24U)
#define ADC_OFR2_OFFSETPOS_Msk \
    (0x1UL << ADC_OFR2_OFFSETPOS_Pos) /*!< 0x01000000 */
#define ADC_OFR2_OFFSETPOS \
    ADC_OFR2_OFFSETPOS_Msk /*!< ADC offset number 2 positive */
#define ADC_OFR2_SATEN_Pos (25U)
#define ADC_OFR2_SATEN_Msk (0x1UL << ADC_OFR2_SATEN_Pos) /*!< 0x02000000 */
#define ADC_OFR2_SATEN \
    ADC_OFR2_SATEN_Msk /*!< ADC offset number 2 saturation enable */

#define ADC_OFR2_OFFSET2_CH_Pos (26U)
#define ADC_OFR2_OFFSET2_CH_Msk \
    (0x1FUL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x7C000000 */
#define ADC_OFR2_OFFSET2_CH \
    ADC_OFR2_OFFSET2_CH_Msk /*!< ADC offset number 2 channel selection */
#define ADC_OFR2_OFFSET2_CH_0 \
    (0x01UL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x04000000 */
#define ADC_OFR2_OFFSET2_CH_1 \
    (0x02UL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x08000000 */
#define ADC_OFR2_OFFSET2_CH_2 \
    (0x04UL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x10000000 */
#define ADC_OFR2_OFFSET2_CH_3 \
    (0x08UL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x20000000 */
#define ADC_OFR2_OFFSET2_CH_4 \
    (0x10UL << ADC_OFR2_OFFSET2_CH_Pos) /*!< 0x40000000 */

#define ADC_OFR2_OFFSET2_EN_Pos (31U)
#define ADC_OFR2_OFFSET2_EN_Msk \
    (0x1UL << ADC_OFR2_OFFSET2_EN_Pos) /*!< 0x80000000 */
#define ADC_OFR2_OFFSET2_EN \
    ADC_OFR2_OFFSET2_EN_Msk /*!< ADC offset number 2 enable */

/********************  Bit definition for ADC_OFR3 register  ******************/
#define ADC_OFR3_OFFSET3_Pos (0U)
#define ADC_OFR3_OFFSET3_Msk \
    (0xFFFUL << ADC_OFR3_OFFSET3_Pos) /*!< 0x00000FFF */
#define ADC_OFR3_OFFSET3 \
    ADC_OFR3_OFFSET3_Msk /*!< ADC offset number 3 offset level */

#define ADC_OFR3_OFFSETPOS_Pos (24U)
#define ADC_OFR3_OFFSETPOS_Msk \
    (0x1UL << ADC_OFR3_OFFSETPOS_Pos) /*!< 0x01000000 */
#define ADC_OFR3_OFFSETPOS \
    ADC_OFR3_OFFSETPOS_Msk /*!< ADC offset number 3 positive */
#define ADC_OFR3_SATEN_Pos (25U)
#define ADC_OFR3_SATEN_Msk (0x1UL << ADC_OFR3_SATEN_Pos) /*!< 0x02000000 */
#define ADC_OFR3_SATEN \
    ADC_OFR3_SATEN_Msk /*!< ADC offset number 3 saturation enable */

#define ADC_OFR3_OFFSET3_CH_Pos (26U)
#define ADC_OFR3_OFFSET3_CH_Msk \
    (0x1FUL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x7C000000 */
#define ADC_OFR3_OFFSET3_CH \
    ADC_OFR3_OFFSET3_CH_Msk /*!< ADC offset number 3 channel selection */
#define ADC_OFR3_OFFSET3_CH_0 \
    (0x01UL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x04000000 */
#define ADC_OFR3_OFFSET3_CH_1 \
    (0x02UL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x08000000 */
#define ADC_OFR3_OFFSET3_CH_2 \
    (0x04UL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x10000000 */
#define ADC_OFR3_OFFSET3_CH_3 \
    (0x08UL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x20000000 */
#define ADC_OFR3_OFFSET3_CH_4 \
    (0x10UL << ADC_OFR3_OFFSET3_CH_Pos) /*!< 0x40000000 */

#define ADC_OFR3_OFFSET3_EN_Pos (31U)
#define ADC_OFR3_OFFSET3_EN_Msk \
    (0x1UL << ADC_OFR3_OFFSET3_EN_Pos) /*!< 0x80000000 */
#define ADC_OFR3_OFFSET3_EN \
    ADC_OFR3_OFFSET3_EN_Msk /*!< ADC offset number 3 enable */

/********************  Bit definition for ADC_OFR4 register  ******************/
#define ADC_OFR4_OFFSET4_Pos (0U)
#define ADC_OFR4_OFFSET4_Msk \
    (0xFFFUL << ADC_OFR4_OFFSET4_Pos) /*!< 0x00000FFF */
#define ADC_OFR4_OFFSET4 \
    ADC_OFR4_OFFSET4_Msk /*!< ADC offset number 4 offset level */

#define ADC_OFR4_OFFSETPOS_Pos (24U)
#define ADC_OFR4_OFFSETPOS_Msk \
    (0x1UL << ADC_OFR4_OFFSETPOS_Pos) /*!< 0x01000000 */
#define ADC_OFR4_OFFSETPOS \
    ADC_OFR4_OFFSETPOS_Msk /*!< ADC offset number 4 positive */
#define ADC_OFR4_SATEN_Pos (25U)
#define ADC_OFR4_SATEN_Msk (0x1UL << ADC_OFR4_SATEN_Pos) /*!< 0x02000000 */
#define ADC_OFR4_SATEN \
    ADC_OFR4_SATEN_Msk /*!< ADC offset number 4 saturation enable */

#define ADC_OFR4_OFFSET4_CH_Pos (26U)
#define ADC_OFR4_OFFSET4_CH_Msk \
    (0x1FUL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x7C000000 */
#define ADC_OFR4_OFFSET4_CH \
    ADC_OFR4_OFFSET4_CH_Msk /*!< ADC offset number 4 channel selection */
#define ADC_OFR4_OFFSET4_CH_0 \
    (0x01UL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x04000000 */
#define ADC_OFR4_OFFSET4_CH_1 \
    (0x02UL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x08000000 */
#define ADC_OFR4_OFFSET4_CH_2 \
    (0x04UL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x10000000 */
#define ADC_OFR4_OFFSET4_CH_3 \
    (0x08UL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x20000000 */
#define ADC_OFR4_OFFSET4_CH_4 \
    (0x10UL << ADC_OFR4_OFFSET4_CH_Pos) /*!< 0x40000000 */

#define ADC_OFR4_OFFSET4_EN_Pos (31U)
#define ADC_OFR4_OFFSET4_EN_Msk \
    (0x1UL << ADC_OFR4_OFFSET4_EN_Pos) /*!< 0x80000000 */
#define ADC_OFR4_OFFSET4_EN \
    ADC_OFR4_OFFSET4_EN_Msk /*!< ADC offset number 4 enable */

/********************  Bit definition for ADC_JDR1 register  ******************/
#define ADC_JDR1_JDATA_Pos (0U)
#define ADC_JDR1_JDATA_Msk (0xFFFFUL << ADC_JDR1_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR1_JDATA \
    ADC_JDR1_JDATA_Msk /*!< ADC group injected sequencer rank 1 conversion data */

/********************  Bit definition for ADC_JDR2 register  ******************/
#define ADC_JDR2_JDATA_Pos (0U)
#define ADC_JDR2_JDATA_Msk (0xFFFFUL << ADC_JDR2_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR2_JDATA \
    ADC_JDR2_JDATA_Msk /*!< ADC group injected sequencer rank 2 conversion data */

/********************  Bit definition for ADC_JDR3 register  ******************/
#define ADC_JDR3_JDATA_Pos (0U)
#define ADC_JDR3_JDATA_Msk (0xFFFFUL << ADC_JDR3_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR3_JDATA \
    ADC_JDR3_JDATA_Msk /*!< ADC group injected sequencer rank 3 conversion data */

/********************  Bit definition for ADC_JDR4 register  ******************/
#define ADC_JDR4_JDATA_Pos (0U)
#define ADC_JDR4_JDATA_Msk (0xFFFFUL << ADC_JDR4_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR4_JDATA \
    ADC_JDR4_JDATA_Msk /*!< ADC group injected sequencer rank 4 conversion data */

/********************  Bit definition for ADC_AWD2CR register  ****************/
#define ADC_AWD2CR_AWD2CH_Pos (0U)
#define ADC_AWD2CR_AWD2CH_Msk \
    (0xFFFFFUL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x0007FFFF */
#define ADC_AWD2CR_AWD2CH \
    ADC_AWD2CR_AWD2CH_Msk /*!< ADC analog watchdog 2 monitored channel selection */
#define ADC_AWD2CR_AWD2CH_0 \
    (0x00001UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000001 */
#define ADC_AWD2CR_AWD2CH_1 \
    (0x00002UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000002 */
#define ADC_AWD2CR_AWD2CH_2 \
    (0x00004UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000004 */
#define ADC_AWD2CR_AWD2CH_3 \
    (0x00008UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000008 */
#define ADC_AWD2CR_AWD2CH_4 \
    (0x00010UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000010 */
#define ADC_AWD2CR_AWD2CH_5 \
    (0x00020UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000020 */
#define ADC_AWD2CR_AWD2CH_6 \
    (0x00040UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000040 */
#define ADC_AWD2CR_AWD2CH_7 \
    (0x00080UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000080 */
#define ADC_AWD2CR_AWD2CH_8 \
    (0x00100UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000100 */
#define ADC_AWD2CR_AWD2CH_9 \
    (0x00200UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000200 */
#define ADC_AWD2CR_AWD2CH_10 \
    (0x00400UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000400 */
#define ADC_AWD2CR_AWD2CH_11 \
    (0x00800UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00000800 */
#define ADC_AWD2CR_AWD2CH_12 \
    (0x01000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00001000 */
#define ADC_AWD2CR_AWD2CH_13 \
    (0x02000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00002000 */
#define ADC_AWD2CR_AWD2CH_14 \
    (0x04000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00004000 */
#define ADC_AWD2CR_AWD2CH_15 \
    (0x08000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00008000 */
#define ADC_AWD2CR_AWD2CH_16 \
    (0x10000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00010000 */
#define ADC_AWD2CR_AWD2CH_17 \
    (0x20000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00020000 */
#define ADC_AWD2CR_AWD2CH_18 \
    (0x40000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00040000 */
#define ADC_AWD2CR_AWD2CH_19 \
    (0x80000UL << ADC_AWD2CR_AWD2CH_Pos) /*!< 0x00080000 */

/********************  Bit definition for ADC_AWD3CR register  ****************/
#define ADC_AWD3CR_AWD3CH_Pos (0U)
#define ADC_AWD3CR_AWD3CH_Msk \
    (0xFFFFFUL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x0007FFFF */
#define ADC_AWD3CR_AWD3CH \
    ADC_AWD3CR_AWD3CH_Msk /*!< ADC analog watchdog 3 monitored channel selection */
#define ADC_AWD3CR_AWD3CH_0 \
    (0x00001UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000001 */
#define ADC_AWD3CR_AWD3CH_1 \
    (0x00002UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000002 */
#define ADC_AWD3CR_AWD3CH_2 \
    (0x00004UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000004 */
#define ADC_AWD3CR_AWD3CH_3 \
    (0x00008UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000008 */
#define ADC_AWD3CR_AWD3CH_4 \
    (0x00010UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000010 */
#define ADC_AWD3CR_AWD3CH_5 \
    (0x00020UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000020 */
#define ADC_AWD3CR_AWD3CH_6 \
    (0x00040UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000040 */
#define ADC_AWD3CR_AWD3CH_7 \
    (0x00080UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000080 */
#define ADC_AWD3CR_AWD3CH_8 \
    (0x00100UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000100 */
#define ADC_AWD3CR_AWD3CH_9 \
    (0x00200UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000200 */
#define ADC_AWD3CR_AWD3CH_10 \
    (0x00400UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000400 */
#define ADC_AWD3CR_AWD3CH_11 \
    (0x00800UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00000800 */
#define ADC_AWD3CR_AWD3CH_12 \
    (0x01000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00001000 */
#define ADC_AWD3CR_AWD3CH_13 \
    (0x02000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00002000 */
#define ADC_AWD3CR_AWD3CH_14 \
    (0x04000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00004000 */
#define ADC_AWD3CR_AWD3CH_15 \
    (0x08000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00008000 */
#define ADC_AWD3CR_AWD3CH_16 \
    (0x10000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00010000 */
#define ADC_AWD3CR_AWD3CH_17 \
    (0x20000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00020000 */
#define ADC_AWD3CR_AWD3CH_18 \
    (0x40000UL << ADC_AWD3CR_AWD3CH_Pos) /*!< 0x00040000 */
#define ADC_AWD3CR_AWD2CH_19 \
    (0x80000UL << ADC_AWD3CR_AWD2CH_Pos) /*!< 0x00080000 */

/********************  Bit definition for ADC_DIFSEL register  ****************/
#define ADC_DIFSEL_DIFSEL_Pos (0U)
#define ADC_DIFSEL_DIFSEL_Msk \
    (0xFFFFFUL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x0007FFFF */
#define ADC_DIFSEL_DIFSEL \
    ADC_DIFSEL_DIFSEL_Msk /*!< ADC channel differential or single-ended mode */
#define ADC_DIFSEL_DIFSEL_0 \
    (0x00001UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000001 */
#define ADC_DIFSEL_DIFSEL_1 \
    (0x00002UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000002 */
#define ADC_DIFSEL_DIFSEL_2 \
    (0x00004UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000004 */
#define ADC_DIFSEL_DIFSEL_3 \
    (0x00008UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000008 */
#define ADC_DIFSEL_DIFSEL_4 \
    (0x00010UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000010 */
#define ADC_DIFSEL_DIFSEL_5 \
    (0x00020UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000020 */
#define ADC_DIFSEL_DIFSEL_6 \
    (0x00040UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000040 */
#define ADC_DIFSEL_DIFSEL_7 \
    (0x00080UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000080 */
#define ADC_DIFSEL_DIFSEL_8 \
    (0x00100UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000100 */
#define ADC_DIFSEL_DIFSEL_9 \
    (0x00200UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000200 */
#define ADC_DIFSEL_DIFSEL_10 \
    (0x00400UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000400 */
#define ADC_DIFSEL_DIFSEL_11 \
    (0x00800UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00000800 */
#define ADC_DIFSEL_DIFSEL_12 \
    (0x01000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00001000 */
#define ADC_DIFSEL_DIFSEL_13 \
    (0x02000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00002000 */
#define ADC_DIFSEL_DIFSEL_14 \
    (0x04000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00004000 */
#define ADC_DIFSEL_DIFSEL_15 \
    (0x08000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00008000 */
#define ADC_DIFSEL_DIFSEL_16 \
    (0x10000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00010000 */
#define ADC_DIFSEL_DIFSEL_17 \
    (0x20000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00020000 */
#define ADC_DIFSEL_DIFSEL_18 \
    (0x40000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00040000 */
#define ADC_DIFSEL_DIFSEL_19 \
    (0x80000UL << ADC_DIFSEL_DIFSEL_Pos) /*!< 0x00080000 */

/********************  Bit definition for ADC_CALFACT register  ***************/
#define ADC_CALFACT_CALFACT_S_Pos (0U)
#define ADC_CALFACT_CALFACT_S_Msk \
    (0x7FUL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x0000007F */
#define ADC_CALFACT_CALFACT_S \
    ADC_CALFACT_CALFACT_S_Msk /*!< ADC calibration factor in single-ended mode */
#define ADC_CALFACT_CALFACT_S_0 \
    (0x01UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000001 */
#define ADC_CALFACT_CALFACT_S_1 \
    (0x02UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000002 */
#define ADC_CALFACT_CALFACT_S_2 \
    (0x04UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000004 */
#define ADC_CALFACT_CALFACT_S_3 \
    (0x08UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000008 */
#define ADC_CALFACT_CALFACT_S_4 \
    (0x10UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000010 */
#define ADC_CALFACT_CALFACT_S_5 \
    (0x20UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000020 */
#define ADC_CALFACT_CALFACT_S_6 \
    (0x40UL << ADC_CALFACT_CALFACT_S_Pos) /*!< 0x00000030 */

#define ADC_CALFACT_CALFACT_D_Pos (16U)
#define ADC_CALFACT_CALFACT_D_Msk \
    (0x7FUL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x007F0000 */
#define ADC_CALFACT_CALFACT_D \
    ADC_CALFACT_CALFACT_D_Msk /*!< ADC calibration factor in differential mode */
#define ADC_CALFACT_CALFACT_D_0 \
    (0x01UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00010000 */
#define ADC_CALFACT_CALFACT_D_1 \
    (0x02UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00020000 */
#define ADC_CALFACT_CALFACT_D_2 \
    (0x04UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00040000 */
#define ADC_CALFACT_CALFACT_D_3 \
    (0x08UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00080000 */
#define ADC_CALFACT_CALFACT_D_4 \
    (0x10UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00100000 */
#define ADC_CALFACT_CALFACT_D_5 \
    (0x20UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00200000 */
#define ADC_CALFACT_CALFACT_D_6 \
    (0x40UL << ADC_CALFACT_CALFACT_D_Pos) /*!< 0x00300000 */

/********************  Bit definition for ADC_OR register  *****************/
#define ADC_OR_OP0_Pos (0U)
#define ADC_OR_OP0_Msk (0x01UL << ADC_OR_OP0_Pos) /*!< 0x00000001 */
#define ADC_OR_OP0 ADC_OR_OP0_Msk                 /*!< ADC Option bit 0 */
#define ADC_OR_OP1_Pos (1U)
#define ADC_OR_OP1_Msk (0x01UL << ADC_OR_OP1_Pos) /*!< 0x00000001 */
#define ADC_OR_OP1 ADC_OR_OP1_Msk                 /*!< ADC Option bit 1 */

/*************************  ADC Common registers  *****************************/
/********************  Bit definition for ADC_CSR register  *******************/
#define ADC_CSR_ADRDY_MST_Pos (0U)
#define ADC_CSR_ADRDY_MST_Msk \
    (0x1UL << ADC_CSR_ADRDY_MST_Pos) /*!< 0x00000001 */
#define ADC_CSR_ADRDY_MST \
    ADC_CSR_ADRDY_MST_Msk /*!< ADC multimode master ready flag */
#define ADC_CSR_EOSMP_MST_Pos (1U)
#define ADC_CSR_EOSMP_MST_Msk \
    (0x1UL << ADC_CSR_EOSMP_MST_Pos) /*!< 0x00000002 */
#define ADC_CSR_EOSMP_MST \
    ADC_CSR_EOSMP_MST_Msk /*!< ADC multimode master group regular end of sampling flag */
#define ADC_CSR_EOC_MST_Pos (2U)
#define ADC_CSR_EOC_MST_Msk (0x1UL << ADC_CSR_EOC_MST_Pos) /*!< 0x00000004 */
#define ADC_CSR_EOC_MST \
    ADC_CSR_EOC_MST_Msk /*!< ADC multimode master group regular end of unitary conversion flag */
#define ADC_CSR_EOS_MST_Pos (3U)
#define ADC_CSR_EOS_MST_Msk (0x1UL << ADC_CSR_EOS_MST_Pos) /*!< 0x00000008 */
#define ADC_CSR_EOS_MST \
    ADC_CSR_EOS_MST_Msk /*!< ADC multimode master group regular end of sequence conversions flag */
#define ADC_CSR_OVR_MST_Pos (4U)
#define ADC_CSR_OVR_MST_Msk (0x1UL << ADC_CSR_OVR_MST_Pos) /*!< 0x00000010 */
#define ADC_CSR_OVR_MST \
    ADC_CSR_OVR_MST_Msk /*!< ADC multimode master group regular overrun flag */
#define ADC_CSR_JEOC_MST_Pos (5U)
#define ADC_CSR_JEOC_MST_Msk (0x1UL << ADC_CSR_JEOC_MST_Pos) /*!< 0x00000020 */
#define ADC_CSR_JEOC_MST \
    ADC_CSR_JEOC_MST_Msk /*!< ADC multimode master group injected end of unitary conversion flag */
#define ADC_CSR_JEOS_MST_Pos (6U)
#define ADC_CSR_JEOS_MST_Msk (0x1UL << ADC_CSR_JEOS_MST_Pos) /*!< 0x00000040 */
#define ADC_CSR_JEOS_MST \
    ADC_CSR_JEOS_MST_Msk /*!< ADC multimode master group injected end of sequence conversions flag */
#define ADC_CSR_AWD1_MST_Pos (7U)
#define ADC_CSR_AWD1_MST_Msk (0x1UL << ADC_CSR_AWD1_MST_Pos) /*!< 0x00000080 */
#define ADC_CSR_AWD1_MST \
    ADC_CSR_AWD1_MST_Msk /*!< ADC multimode master analog watchdog 1 flag */
#define ADC_CSR_AWD2_MST_Pos (8U)
#define ADC_CSR_AWD2_MST_Msk (0x1UL << ADC_CSR_AWD2_MST_Pos) /*!< 0x00000100 */
#define ADC_CSR_AWD2_MST \
    ADC_CSR_AWD2_MST_Msk /*!< ADC multimode master analog watchdog 2 flag */
#define ADC_CSR_AWD3_MST_Pos (9U)
#define ADC_CSR_AWD3_MST_Msk (0x1UL << ADC_CSR_AWD3_MST_Pos) /*!< 0x00000200 */
#define ADC_CSR_AWD3_MST \
    ADC_CSR_AWD3_MST_Msk /*!< ADC multimode master analog watchdog 3 flag */
#define ADC_CSR_JQOVF_MST_Pos (10U)
#define ADC_CSR_JQOVF_MST_Msk \
    (0x1UL << ADC_CSR_JQOVF_MST_Pos) /*!< 0x00000400 */
#define ADC_CSR_JQOVF_MST \
    ADC_CSR_JQOVF_MST_Msk /*!< ADC multimode master group injected contexts queue overflow flag */

#define ADC_CSR_ADRDY_SLV_Pos (16U)
#define ADC_CSR_ADRDY_SLV_Msk \
    (0x1UL << ADC_CSR_ADRDY_SLV_Pos) /*!< 0x00010000 */
#define ADC_CSR_ADRDY_SLV \
    ADC_CSR_ADRDY_SLV_Msk /*!< ADC multimode slave ready flag */
#define ADC_CSR_EOSMP_SLV_Pos (17U)
#define ADC_CSR_EOSMP_SLV_Msk \
    (0x1UL << ADC_CSR_EOSMP_SLV_Pos) /*!< 0x00020000 */
#define ADC_CSR_EOSMP_SLV \
    ADC_CSR_EOSMP_SLV_Msk /*!< ADC multimode slave group regular end of sampling flag */
#define ADC_CSR_EOC_SLV_Pos (18U)
#define ADC_CSR_EOC_SLV_Msk (0x1UL << ADC_CSR_EOC_SLV_Pos) /*!< 0x00040000 */
#define ADC_CSR_EOC_SLV \
    ADC_CSR_EOC_SLV_Msk /*!< ADC multimode slave group regular end of unitary conversion flag */
#define ADC_CSR_EOS_SLV_Pos (19U)
#define ADC_CSR_EOS_SLV_Msk (0x1UL << ADC_CSR_EOS_SLV_Pos) /*!< 0x00080000 */
#define ADC_CSR_EOS_SLV \
    ADC_CSR_EOS_SLV_Msk /*!< ADC multimode slave group regular end of sequence conversions flag */
#define ADC_CSR_OVR_SLV_Pos (20U)
#define ADC_CSR_OVR_SLV_Msk (0x1UL << ADC_CSR_OVR_SLV_Pos) /*!< 0x00100000 */
#define ADC_CSR_OVR_SLV \
    ADC_CSR_OVR_SLV_Msk /*!< ADC multimode slave group regular overrun flag */
#define ADC_CSR_JEOC_SLV_Pos (21U)
#define ADC_CSR_JEOC_SLV_Msk (0x1UL << ADC_CSR_JEOC_SLV_Pos) /*!< 0x00200000 */
#define ADC_CSR_JEOC_SLV \
    ADC_CSR_JEOC_SLV_Msk /*!< ADC multimode slave group injected end of unitary conversion flag */
#define ADC_CSR_JEOS_SLV_Pos (22U)
#define ADC_CSR_JEOS_SLV_Msk (0x1UL << ADC_CSR_JEOS_SLV_Pos) /*!< 0x00400000 */
#define ADC_CSR_JEOS_SLV \
    ADC_CSR_JEOS_SLV_Msk /*!< ADC multimode slave group injected end of sequence conversions flag */
#define ADC_CSR_AWD1_SLV_Pos (23U)
#define ADC_CSR_AWD1_SLV_Msk (0x1UL << ADC_CSR_AWD1_SLV_Pos) /*!< 0x00800000 */
#define ADC_CSR_AWD1_SLV \
    ADC_CSR_AWD1_SLV_Msk /*!< ADC multimode slave analog watchdog 1 flag */
#define ADC_CSR_AWD2_SLV_Pos (24U)
#define ADC_CSR_AWD2_SLV_Msk (0x1UL << ADC_CSR_AWD2_SLV_Pos) /*!< 0x01000000 */
#define ADC_CSR_AWD2_SLV \
    ADC_CSR_AWD2_SLV_Msk /*!< ADC multimode slave analog watchdog 2 flag */
#define ADC_CSR_AWD3_SLV_Pos (25U)
#define ADC_CSR_AWD3_SLV_Msk (0x1UL << ADC_CSR_AWD3_SLV_Pos) /*!< 0x02000000 */
#define ADC_CSR_AWD3_SLV \
    ADC_CSR_AWD3_SLV_Msk /*!< ADC multimode slave analog watchdog 3 flag */
#define ADC_CSR_JQOVF_SLV_Pos (26U)
#define ADC_CSR_JQOVF_SLV_Msk \
    (0x1UL << ADC_CSR_JQOVF_SLV_Pos) /*!< 0x04000000 */
#define ADC_CSR_JQOVF_SLV \
    ADC_CSR_JQOVF_SLV_Msk /*!< ADC multimode slave group injected contexts queue overflow flag */

/********************  Bit definition for ADC_CCR register  *******************/
#define ADC_CCR_DUAL_Pos (0U)
#define ADC_CCR_DUAL_Msk (0x1FUL << ADC_CCR_DUAL_Pos) /*!< 0x0000001F */
#define ADC_CCR_DUAL ADC_CCR_DUAL_Msk /*!< ADC multimode mode selection */
#define ADC_CCR_DUAL_0 (0x01UL << ADC_CCR_DUAL_Pos) /*!< 0x00000001 */
#define ADC_CCR_DUAL_1 (0x02UL << ADC_CCR_DUAL_Pos) /*!< 0x00000002 */
#define ADC_CCR_DUAL_2 (0x04UL << ADC_CCR_DUAL_Pos) /*!< 0x00000004 */
#define ADC_CCR_DUAL_3 (0x08UL << ADC_CCR_DUAL_Pos) /*!< 0x00000008 */
#define ADC_CCR_DUAL_4 (0x10UL << ADC_CCR_DUAL_Pos) /*!< 0x00000010 */

#define ADC_CCR_DELAY_Pos (8U)
#define ADC_CCR_DELAY_Msk (0xFUL << ADC_CCR_DELAY_Pos) /*!< 0x00000F00 */
#define ADC_CCR_DELAY \
    ADC_CCR_DELAY_Msk /*!< ADC multimode delay between 2 sampling phases */
#define ADC_CCR_DELAY_0 (0x1UL << ADC_CCR_DELAY_Pos) /*!< 0x00000100 */
#define ADC_CCR_DELAY_1 (0x2UL << ADC_CCR_DELAY_Pos) /*!< 0x00000200 */
#define ADC_CCR_DELAY_2 (0x4UL << ADC_CCR_DELAY_Pos) /*!< 0x00000400 */
#define ADC_CCR_DELAY_3 (0x8UL << ADC_CCR_DELAY_Pos) /*!< 0x00000800 */

#define ADC_CCR_DMACFG_Pos (13U)
#define ADC_CCR_DMACFG_Msk (0x1UL << ADC_CCR_DMACFG_Pos) /*!< 0x00002000 */
#define ADC_CCR_DMACFG \
    ADC_CCR_DMACFG_Msk /*!< ADC multimode DMA transfer configuration */

#define ADC_CCR_MDMA_Pos (14U)
#define ADC_CCR_MDMA_Msk (0x3UL << ADC_CCR_MDMA_Pos) /*!< 0x0000C000 */
#define ADC_CCR_MDMA ADC_CCR_MDMA_Msk /*!< ADC multimode DMA transfer enable */
#define ADC_CCR_MDMA_0 (0x1UL << ADC_CCR_MDMA_Pos) /*!< 0x00004000 */
#define ADC_CCR_MDMA_1 (0x2UL << ADC_CCR_MDMA_Pos) /*!< 0x00008000 */

#define ADC_CCR_CKMODE_Pos (16U)
#define ADC_CCR_CKMODE_Msk (0x3UL << ADC_CCR_CKMODE_Pos) /*!< 0x00030000 */
#define ADC_CCR_CKMODE \
    ADC_CCR_CKMODE_Msk /*!< ADC common clock source and prescaler (prescaler only for clock source synchronous) */
#define ADC_CCR_CKMODE_0 (0x1UL << ADC_CCR_CKMODE_Pos) /*!< 0x00010000 */
#define ADC_CCR_CKMODE_1 (0x2UL << ADC_CCR_CKMODE_Pos) /*!< 0x00020000 */

#define ADC_CCR_PRESC_Pos (18U)
#define ADC_CCR_PRESC_Msk (0xFUL << ADC_CCR_PRESC_Pos) /*!< 0x003C0000 */
#define ADC_CCR_PRESC \
    ADC_CCR_PRESC_Msk /*!< ADC common clock prescaler, only for clock source asynchronous */
#define ADC_CCR_PRESC_0 (0x1UL << ADC_CCR_PRESC_Pos) /*!< 0x00040000 */
#define ADC_CCR_PRESC_1 (0x2UL << ADC_CCR_PRESC_Pos) /*!< 0x00080000 */
#define ADC_CCR_PRESC_2 (0x4UL << ADC_CCR_PRESC_Pos) /*!< 0x00100000 */
#define ADC_CCR_PRESC_3 (0x8UL << ADC_CCR_PRESC_Pos) /*!< 0x00200000 */

#define ADC_CCR_VREFEN_Pos (22U)
#define ADC_CCR_VREFEN_Msk (0x1UL << ADC_CCR_VREFEN_Pos) /*!< 0x00400000 */
#define ADC_CCR_VREFEN \
    ADC_CCR_VREFEN_Msk /*!< ADC internal path to VrefInt enable */
#define ADC_CCR_TSEN_Pos (23U)
#define ADC_CCR_TSEN_Msk (0x1UL << ADC_CCR_TSEN_Pos) /*!< 0x00800000 */
#define ADC_CCR_TSEN \
    ADC_CCR_TSEN_Msk /*!< ADC internal path to temperature sensor enable */
#define ADC_CCR_VBATEN_Pos (24U)
#define ADC_CCR_VBATEN_Msk (0x1UL << ADC_CCR_VBATEN_Pos) /*!< 0x01000000 */
#define ADC_CCR_VBATEN \
    ADC_CCR_VBATEN_Msk /*!< ADC internal path to battery voltage enable */

/********************  Bit definition for ADC_CDR register  *******************/
#define ADC_CDR_RDATA_MST_Pos (0U)
#define ADC_CDR_RDATA_MST_Msk \
    (0xFFFFUL << ADC_CDR_RDATA_MST_Pos) /*!< 0x0000FFFF */
#define ADC_CDR_RDATA_MST \
    ADC_CDR_RDATA_MST_Msk /*!< ADC multimode master group regular conversion data */

#define ADC_CDR_RDATA_SLV_Pos (16U)
#define ADC_CDR_RDATA_SLV_Msk \
    (0xFFFFUL << ADC_CDR_RDATA_SLV_Pos) /*!< 0xFFFF0000 */
#define ADC_CDR_RDATA_SLV \
    ADC_CDR_RDATA_SLV_Msk /*!< ADC multimode slave group regular conversion data */

/**********************************************************************************************************************/
/*                                                                                                                    */
/*                                            Analog Comparators (COMP)                                               */
/*                                                                                                                    */
/**********************************************************************************************************************/

/**********************************      Bit definition for COMP_SR register  *****************************************/
#define COMP_SR_C1VAL_Pos (0U)
#define COMP_SR_C1VAL_Msk \
    (0x1UL << COMP_SR_C1VAL_Pos) /*!< 0x00000001                            */
#define COMP_SR_C1VAL COMP_SR_C1VAL_Msk

#define COMP_SR_C1IF_Pos (16U)
#define COMP_SR_C1IF_Msk \
    (0x1UL << COMP_SR_C1IF_Pos) /*!< 0x00010000                            */
#define COMP_SR_C1IF COMP_SR_C1IF_Msk

/**********************************     Bit definition for COMP_ICFR register *****************************************/
#define COMP_ICFR_CC1IF_Pos (16U)
#define COMP_ICFR_CC1IF_Msk \
    (0x1UL << COMP_ICFR_CC1IF_Pos) /*!< 0x00010000                            */
#define COMP_ICFR_CC1IF COMP_ICFR_CC1IF_Msk

/**********************************      Bit definition for COMP_CFGR1 register  **************************************/
#define COMP_CFGR1_EN_Pos (0U)
#define COMP_CFGR1_EN_Msk \
    (0x1UL << COMP_CFGR1_EN_Pos) /*!< 0x00000001                            */
#define COMP_CFGR1_EN \
    COMP_CFGR1_EN_Msk /*!< COMP1 enable bit                      */

#define COMP_CFGR1_BRGEN_Pos (1U)
#define COMP_CFGR1_BRGEN_Msk \
    (0x1UL                   \
     << COMP_CFGR1_BRGEN_Pos) /*!< 0x00000002                            */
#define COMP_CFGR1_BRGEN \
    COMP_CFGR1_BRGEN_Msk /*!< COMP1 Scaler bridge enable            */

#define COMP_CFGR1_SCALEN_Pos (2U)
#define COMP_CFGR1_SCALEN_Msk \
    (0x1UL                    \
     << COMP_CFGR1_SCALEN_Pos) /*!< 0x00000004                            */
#define COMP_CFGR1_SCALEN \
    COMP_CFGR1_SCALEN_Msk /*!< COMP1 Voltage scaler enable bit       */

#define COMP_CFGR1_POLARITY_Pos (3U)
#define COMP_CFGR1_POLARITY_Msk \
    (0x1UL                      \
     << COMP_CFGR1_POLARITY_Pos) /*!< 0x00000008                            */
#define COMP_CFGR1_POLARITY \
    COMP_CFGR1_POLARITY_Msk /*!< COMP1 polarity selection bit          */

#define COMP_CFGR1_ITEN_Pos (6U)
#define COMP_CFGR1_ITEN_Msk \
    (0x1UL << COMP_CFGR1_ITEN_Pos) /*!< 0x00000040                            */
#define COMP_CFGR1_ITEN \
    COMP_CFGR1_ITEN_Msk /*!< COMP1 interrupt enable                */

#define COMP_CFGR1_HYST_Pos (8U)
#define COMP_CFGR1_HYST_Msk \
    (0x3UL << COMP_CFGR1_HYST_Pos) /*!< 0x00000300                            */
#define COMP_CFGR1_HYST \
    COMP_CFGR1_HYST_Msk /*!< COMP1 hysteresis selection bits       */
#define COMP_CFGR1_HYST_0 \
    (0x1UL << COMP_CFGR1_HYST_Pos) /*!< 0x00000100                            */
#define COMP_CFGR1_HYST_1 \
    (0x2UL << COMP_CFGR1_HYST_Pos) /*!< 0x00000200                            */

#define COMP_CFGR1_PWRMODE_Pos (12U)
#define COMP_CFGR1_PWRMODE_Msk \
    (0x3UL                     \
     << COMP_CFGR1_PWRMODE_Pos) /*!< 0x00003000                            */
#define COMP_CFGR1_PWRMODE \
    COMP_CFGR1_PWRMODE_Msk /*!< COMP1 Power Mode of the comparator    */
#define COMP_CFGR1_PWRMODE_0 \
    (0x1UL                   \
     << COMP_CFGR1_PWRMODE_Pos) /*!< 0x00001000                            */
#define COMP_CFGR1_PWRMODE_1 \
    (0x2UL                   \
     << COMP_CFGR1_PWRMODE_Pos) /*!< 0x00002000                            */

#define COMP_CFGR1_INMSEL_Pos (16U)
#define COMP_CFGR1_INMSEL_Msk \
    (0xFUL                    \
     << COMP_CFGR1_INMSEL_Pos) /*!< 0x000F0000                            */
#define COMP_CFGR1_INMSEL \
    COMP_CFGR1_INMSEL_Msk /*!< COMP1 input minus selection bit       */
#define COMP_CFGR1_INMSEL_0 \
    (0x1UL                  \
     << COMP_CFGR1_INMSEL_Pos) /*!< 0x00010000                            */
#define COMP_CFGR1_INMSEL_1 \
    (0x2UL                  \
     << COMP_CFGR1_INMSEL_Pos) /*!< 0x00020000                            */
#define COMP_CFGR1_INMSEL_2 \
    (0x4UL                  \
     << COMP_CFGR1_INMSEL_Pos) /*!< 0x00040000                            */
#define COMP_CFGR1_INMSEL_3 \
    (0x8UL                  \
     << COMP_CFGR1_INMSEL_Pos) /*!< 0x00080000                            */

#define COMP_CFGR1_INPSEL1_Pos (20U)
#define COMP_CFGR1_INPSEL1_Msk \
    (0x1UL                     \
     << COMP_CFGR1_INPSEL1_Pos) /*!< 0x00100000                            */
#define COMP_CFGR1_INPSEL1 \
    COMP_CFGR1_INPSEL1_Msk /*!< COMP1 input plus 1 selection bit      */

#define COMP_CFGR1_INPSEL2_Pos (22U)
#define COMP_CFGR1_INPSEL2_Msk \
    (0x1UL                     \
     << COMP_CFGR1_INPSEL2_Pos) /*!< 0x00400000                            */
#define COMP_CFGR1_INPSEL2 \
    COMP_CFGR1_INPSEL2_Msk /*!< COMP1 input plus 2 selection bit      */

#define COMP_CFGR1_BLANKING_Pos (24U)
#define COMP_CFGR1_BLANKING_Msk \
    (0xFUL                      \
     << COMP_CFGR1_BLANKING_Pos) /*!< 0x0F000000                            */
#define COMP_CFGR1_BLANKING \
    COMP_CFGR1_BLANKING_Msk /*!< COMP1 blanking source selection bits  */
#define COMP_CFGR1_BLANKING_0 \
    (0x1UL                    \
     << COMP_CFGR1_BLANKING_Pos) /*!< 0x01000000                            */
#define COMP_CFGR1_BLANKING_1 \
    (0x2UL                    \
     << COMP_CFGR1_BLANKING_Pos) /*!< 0x02000000                            */
#define COMP_CFGR1_BLANKING_2 \
    (0x4UL                    \
     << COMP_CFGR1_BLANKING_Pos) /*!< 0x04000000                            */
#define COMP_CFGR1_BLANKING_3 \
    (0x8UL                    \
     << COMP_CFGR1_BLANKING_Pos) /*!< 0x08000000                            */

#define COMP_CFGR1_LOCK_Pos (31U)
#define COMP_CFGR1_LOCK_Msk \
    (0x1UL << COMP_CFGR1_LOCK_Pos) /*!< 0x80000000                            */
#define COMP_CFGR1_LOCK \
    COMP_CFGR1_LOCK_Msk /*!< COMP1 Lock Bit                        */

/*********************************  Bit definition for COMP_CFGR2 register  *******************************************/
#define COMP_CFGR2_INPSEL0_Pos (4U)
#define COMP_CFGR2_INPSEL0_Msk \
    (0x1UL                     \
     << COMP_CFGR2_INPSEL0_Pos) /*!< 0x00000010                            */
#define COMP_CFGR2_INPSEL0 \
    COMP_CFGR2_INPSEL0_Msk /*!< COMP1 input plus 0 selection bit      */

/**********************************************************************************************************************/
/*                                                                                                                    */
/*                                        Operational Amplifier (OPAMP)                                               */
/*                                                                                                                    */
/**********************************************************************************************************************/

/**********************************   Bit definition for OPAMP_CSR register   *****************************************/
#define OPAMP_CSR_OPAMPxEN_Pos (0U)
#define OPAMP_CSR_OPAMPxEN_Msk \
    (0x1UL                     \
     << OPAMP_CSR_OPAMPxEN_Pos) /*!< 0x00000001                               */
#define OPAMP_CSR_OPAMPxEN \
    OPAMP_CSR_OPAMPxEN_Msk /*!< OPAMP enable                             */

#define OPAMP_CSR_FORCEVP_Pos (1U)
#define OPAMP_CSR_FORCEVP_Msk \
    (0x1UL                    \
     << OPAMP_CSR_FORCEVP_Pos) /*!< 0x00000002                               */
#define OPAMP_CSR_FORCEVP \
    OPAMP_CSR_FORCEVP_Msk /*!< Force internal reference on VP           */

#define OPAMP_CSR_VPSEL_Pos (2U)
#define OPAMP_CSR_VPSEL_Msk \
    (0x3UL                  \
     << OPAMP_CSR_VPSEL_Pos) /*!< 0x0000000C                               */
#define OPAMP_CSR_VPSEL \
    OPAMP_CSR_VPSEL_Msk /*!< Non inverted input selection             */
#define OPAMP_CSR_VPSEL_0 \
    (0x1UL                \
     << OPAMP_CSR_VPSEL_Pos) /*!< 0x00000004                               */
#define OPAMP_CSR_VPSEL_1 \
    (0x2UL                \
     << OPAMP_CSR_VPSEL_Pos) /*!< 0x00000008                               */

#define OPAMP_CSR_VMSEL_Pos (5U)
#define OPAMP_CSR_VMSEL_Msk \
    (0x3UL                  \
     << OPAMP_CSR_VMSEL_Pos) /*!< 0x00000060                               */
#define OPAMP_CSR_VMSEL \
    OPAMP_CSR_VMSEL_Msk /*!< Inverting input selection                */
#define OPAMP_CSR_VMSEL_0 \
    (0x1UL                \
     << OPAMP_CSR_VMSEL_Pos) /*!< 0x00000020                               */
#define OPAMP_CSR_VMSEL_1 \
    (0x2UL                \
     << OPAMP_CSR_VMSEL_Pos) /*!< 0x00000040                               */

#define OPAMP_CSR_OPAHSM_Pos (8U)
#define OPAMP_CSR_OPAHSM_Msk \
    (0x1UL                   \
     << OPAMP_CSR_OPAHSM_Pos) /*!< 0x00000100                               */
#define OPAMP_CSR_OPAHSM \
    OPAMP_CSR_OPAHSM_Msk /*!< high speed mode                          */

#define OPAMP_CSR_CALON_Pos (11U)
#define OPAMP_CSR_CALON_Msk \
    (0x1UL                  \
     << OPAMP_CSR_CALON_Pos) /*!< 0x00000800                               */
#define OPAMP_CSR_CALON \
    OPAMP_CSR_CALON_Msk /*!< Calibration mode enable                  */

#define OPAMP_CSR_CALSEL_Pos (12U)
#define OPAMP_CSR_CALSEL_Msk \
    (0x3UL                   \
     << OPAMP_CSR_CALSEL_Pos) /*!< 0x00003000                               */
#define OPAMP_CSR_CALSEL \
    OPAMP_CSR_CALSEL_Msk /*!< Calibration selection                    */
#define OPAMP_CSR_CALSEL_0 \
    (0x1UL                 \
     << OPAMP_CSR_CALSEL_Pos) /*!< 0x00001000                               */
#define OPAMP_CSR_CALSEL_1 \
    (0x2UL                 \
     << OPAMP_CSR_CALSEL_Pos) /*!< 0x00002000                               */

#define OPAMP_CSR_PGGAIN_Pos (14U)
#define OPAMP_CSR_PGGAIN_Msk \
    (0xFUL                   \
     << OPAMP_CSR_PGGAIN_Pos) /*!< 0x0003C000                               */
#define OPAMP_CSR_PGGAIN \
    OPAMP_CSR_PGGAIN_Msk /*!< Programmable amplifier gain value        */
#define OPAMP_CSR_PGGAIN_0 \
    (0x1UL                 \
     << OPAMP_CSR_PGGAIN_Pos) /*!< 0x00004000                               */
#define OPAMP_CSR_PGGAIN_1 \
    (0x2UL                 \
     << OPAMP_CSR_PGGAIN_Pos) /*!< 0x00008000                               */
#define OPAMP_CSR_PGGAIN_2 \
    (0x4UL                 \
     << OPAMP_CSR_PGGAIN_Pos) /*!< 0x00010000                               */
#define OPAMP_CSR_PGGAIN_3 \
    (0x8UL                 \
     << OPAMP_CSR_PGGAIN_Pos) /*!< 0x00020000                               */

#define OPAMP_CSR_USERTRIM_Pos (18U)
#define OPAMP_CSR_USERTRIM_Msk \
    (0x1UL                     \
     << OPAMP_CSR_USERTRIM_Pos) /*!< 0x00040000                               */
#define OPAMP_CSR_USERTRIM \
    OPAMP_CSR_USERTRIM_Msk /*!< User trimming enable                     */

#define OPAMP_CSR_TSTREF_Pos (29U)
#define OPAMP_CSR_TSTREF_Msk \
    (0x1UL                   \
     << OPAMP_CSR_TSTREF_Pos) /*!< 0x20000000                               */
#define OPAMP_CSR_TSTREF \
    OPAMP_CSR_TSTREF_Msk /*!< calibration reference voltage output     */

#define OPAMP_CSR_CALOUT_Pos (30U)
#define OPAMP_CSR_CALOUT_Msk \
    (0x1UL                   \
     << OPAMP_CSR_CALOUT_Pos) /*!< 0x40000000                               */
#define OPAMP_CSR_CALOUT \
    OPAMP_CSR_CALOUT_Msk /*!< Calibration output                       */

/**********************************   Bit definition for OPAMP_OTR register  ******************************************/
#define OPAMP_OTR_TRIMOFFSETN_Pos (0U)
#define OPAMP_OTR_TRIMOFFSETN_Msk \
    (0x1FUL                       \
     << OPAMP_OTR_TRIMOFFSETN_Pos) /*!< 0x0000001F                        */
#define OPAMP_OTR_TRIMOFFSETN \
    OPAMP_OTR_TRIMOFFSETN_Msk /*!< Trim for NMOS differential pairs  */

#define OPAMP_OTR_TRIMOFFSETP_Pos (8U)
#define OPAMP_OTR_TRIMOFFSETP_Msk \
    (0x1FUL                       \
     << OPAMP_OTR_TRIMOFFSETP_Pos) /*!< 0x00001F00                        */
#define OPAMP_OTR_TRIMOFFSETP \
    OPAMP_OTR_TRIMOFFSETP_Msk /*!< Trim for PMOS differential pairs  */

/**********************************   Bit definition for OPAMP_HSOTR register   ***************************************/
#define OPAMP_HSOTR_TRIMHSOFFSETN_Pos (0U)
#define OPAMP_HSOTR_TRIMHSOFFSETN_Msk \
    (0x1FUL                           \
     << OPAMP_HSOTR_TRIMHSOFFSETN_Pos) /*!< 0x0000001F                    */
#define OPAMP_HSOTR_TRIMHSOFFSETN \
    OPAMP_HSOTR_TRIMHSOFFSETN_Msk /*!< Trim for NMOS pairs           */

#define OPAMP_HSOTR_TRIMHSOFFSETP_Pos (8U)
#define OPAMP_HSOTR_TRIMHSOFFSETP_Msk \
    (0x1FUL                           \
     << OPAMP_HSOTR_TRIMHSOFFSETP_Pos) /*!< 0x00001F00                    */
#define OPAMP_HSOTR_TRIMHSOFFSETP \
    OPAMP_HSOTR_TRIMHSOFFSETP_Msk /*!< Trim for PMOS pairs           */

/******************************************************************************/
/*                                                                            */
/*                          CRC calculation unit                              */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for CRC_DR register  *********************/
#define CRC_DR_DR_Pos (0U)
#define CRC_DR_DR_Msk (0xFFFFFFFFUL << CRC_DR_DR_Pos) /*!< 0xFFFFFFFF */
#define CRC_DR_DR CRC_DR_DR_Msk                       /*!< Data register bits */

/*******************  Bit definition for CRC_IDR register  ********************/
#define CRC_IDR_IDR_Pos (0U)
#define CRC_IDR_IDR_Msk (0xFFFFFFFFUL << CRC_IDR_IDR_Pos) /*!< 0xFFFFFFFF */
#define CRC_IDR_IDR \
    CRC_IDR_IDR_Msk /*!< General-purpose 32-bits data register bits */

/********************  Bit definition for CRC_CR register  ********************/
#define CRC_CR_RESET_Pos (0U)
#define CRC_CR_RESET_Msk (0x1UL << CRC_CR_RESET_Pos) /*!< 0x00000001 */
#define CRC_CR_RESET CRC_CR_RESET_Msk /*!< RESET the CRC computation unit bit */
#define CRC_CR_POLYSIZE_Pos (3U)
#define CRC_CR_POLYSIZE_Msk (0x3UL << CRC_CR_POLYSIZE_Pos) /*!< 0x00000018 */
#define CRC_CR_POLYSIZE CRC_CR_POLYSIZE_Msk /*!< Polynomial size bits */
#define CRC_CR_POLYSIZE_0 (0x1UL << CRC_CR_POLYSIZE_Pos) /*!< 0x00000008 */
#define CRC_CR_POLYSIZE_1 (0x2UL << CRC_CR_POLYSIZE_Pos) /*!< 0x00000010 */
#define CRC_CR_REV_IN_Pos (5U)
#define CRC_CR_REV_IN_Msk (0x3UL << CRC_CR_REV_IN_Pos) /*!< 0x00000060 */
#define CRC_CR_REV_IN CRC_CR_REV_IN_Msk /*!< REV_IN Reverse Input Data bits */
#define CRC_CR_REV_IN_0 (0x1UL << CRC_CR_REV_IN_Pos) /*!< 0x00000020 */
#define CRC_CR_REV_IN_1 (0x2UL << CRC_CR_REV_IN_Pos) /*!< 0x00000040 */
#define CRC_CR_REV_OUT_Pos (7U)
#define CRC_CR_REV_OUT_Msk (0x1UL << CRC_CR_REV_OUT_Pos) /*!< 0x00000080 */
#define CRC_CR_REV_OUT \
    CRC_CR_REV_OUT_Msk /*!< REV_OUT Reverse Output Data bits */

/*******************  Bit definition for CRC_INIT register  *******************/
#define CRC_INIT_INIT_Pos (0U)
#define CRC_INIT_INIT_Msk (0xFFFFFFFFUL << CRC_INIT_INIT_Pos) /*!< 0xFFFFFFFF */
#define CRC_INIT_INIT CRC_INIT_INIT_Msk /*!< Initial CRC value bits */

/*******************  Bit definition for CRC_POL register  ********************/
#define CRC_POL_POL_Pos (0U)
#define CRC_POL_POL_Msk (0xFFFFFFFFUL << CRC_POL_POL_Pos) /*!< 0xFFFFFFFF */
#define CRC_POL_POL CRC_POL_POL_Msk /*!< Coefficients of the polynomial */

/******************************************************************************/
/*                                                                            */
/*                          CRS Clock Recovery System                         */
/******************************************************************************/
/*******************  Bit definition for CRS_CR register  *********************/
#define CRS_CR_SYNCOKIE_Pos (0U)
#define CRS_CR_SYNCOKIE_Msk (0x1UL << CRS_CR_SYNCOKIE_Pos) /*!< 0x00000001 */
#define CRS_CR_SYNCOKIE \
    CRS_CR_SYNCOKIE_Msk /*!< SYNC event OK interrupt enable */
#define CRS_CR_SYNCWARNIE_Pos (1U)
#define CRS_CR_SYNCWARNIE_Msk \
    (0x1UL << CRS_CR_SYNCWARNIE_Pos) /*!< 0x00000002 */
#define CRS_CR_SYNCWARNIE \
    CRS_CR_SYNCWARNIE_Msk /*!< SYNC warning interrupt enable */
#define CRS_CR_ERRIE_Pos (2U)
#define CRS_CR_ERRIE_Msk (0x1UL << CRS_CR_ERRIE_Pos) /*!< 0x00000004 */
#define CRS_CR_ERRIE \
    CRS_CR_ERRIE_Msk /*!< SYNC error or trimming error interrupt enable */
#define CRS_CR_ESYNCIE_Pos (3U)
#define CRS_CR_ESYNCIE_Msk (0x1UL << CRS_CR_ESYNCIE_Pos) /*!< 0x00000008 */
#define CRS_CR_ESYNCIE CRS_CR_ESYNCIE_Msk /*!< Expected SYNC interrupt enable */
#define CRS_CR_CEN_Pos (5U)
#define CRS_CR_CEN_Msk (0x1UL << CRS_CR_CEN_Pos) /*!< 0x00000020 */
#define CRS_CR_CEN CRS_CR_CEN_Msk /*!< Frequency error counter enable */
#define CRS_CR_AUTOTRIMEN_Pos (6U)
#define CRS_CR_AUTOTRIMEN_Msk \
    (0x1UL << CRS_CR_AUTOTRIMEN_Pos) /*!< 0x00000040 */
#define CRS_CR_AUTOTRIMEN \
    CRS_CR_AUTOTRIMEN_Msk /*!< Automatic trimming enable */
#define CRS_CR_SWSYNC_Pos (7U)
#define CRS_CR_SWSYNC_Msk (0x1UL << CRS_CR_SWSYNC_Pos) /*!< 0x00000080 */
#define CRS_CR_SWSYNC CRS_CR_SWSYNC_Msk /*!< Generate software SYNC event */
#define CRS_CR_TRIM_Pos (8U)
#define CRS_CR_TRIM_Msk (0x3FUL << CRS_CR_TRIM_Pos) /*!< 0x00003F00 */
#define CRS_CR_TRIM CRS_CR_TRIM_Msk /*!< HSI48 oscillator smooth trimming */

/*******************  Bit definition for CRS_CFGR register  *********************/
#define CRS_CFGR_RELOAD_Pos (0U)
#define CRS_CFGR_RELOAD_Msk (0xFFFFUL << CRS_CFGR_RELOAD_Pos) /*!< 0x0000FFFF */
#define CRS_CFGR_RELOAD CRS_CFGR_RELOAD_Msk /*!< Counter reload value */
#define CRS_CFGR_FELIM_Pos (16U)
#define CRS_CFGR_FELIM_Msk (0xFFUL << CRS_CFGR_FELIM_Pos) /*!< 0x00FF0000 */
#define CRS_CFGR_FELIM CRS_CFGR_FELIM_Msk /*!< Frequency error limit */
#define CRS_CFGR_SYNCDIV_Pos (24U)
#define CRS_CFGR_SYNCDIV_Msk (0x7UL << CRS_CFGR_SYNCDIV_Pos) /*!< 0x07000000 */
#define CRS_CFGR_SYNCDIV CRS_CFGR_SYNCDIV_Msk              /*!< SYNC divider */
#define CRS_CFGR_SYNCDIV_0 (0x1UL << CRS_CFGR_SYNCDIV_Pos) /*!< 0x01000000 */
#define CRS_CFGR_SYNCDIV_1 (0x2UL << CRS_CFGR_SYNCDIV_Pos) /*!< 0x02000000 */
#define CRS_CFGR_SYNCDIV_2 (0x4UL << CRS_CFGR_SYNCDIV_Pos) /*!< 0x04000000 */
#define CRS_CFGR_SYNCSRC_Pos (28U)
#define CRS_CFGR_SYNCSRC_Msk (0x3UL << CRS_CFGR_SYNCSRC_Pos) /*!< 0x30000000 */
#define CRS_CFGR_SYNCSRC \
    CRS_CFGR_SYNCSRC_Msk /*!< SYNC signal source selection */
#define CRS_CFGR_SYNCSRC_0 (0x1UL << CRS_CFGR_SYNCSRC_Pos) /*!< 0x10000000 */
#define CRS_CFGR_SYNCSRC_1 (0x2UL << CRS_CFGR_SYNCSRC_Pos) /*!< 0x20000000 */
#define CRS_CFGR_SYNCPOL_Pos (31U)
#define CRS_CFGR_SYNCPOL_Msk (0x1UL << CRS_CFGR_SYNCPOL_Pos) /*!< 0x80000000 */
#define CRS_CFGR_SYNCPOL CRS_CFGR_SYNCPOL_Msk /*!< SYNC polarity selection */

/*******************  Bit definition for CRS_ISR register  *********************/
#define CRS_ISR_SYNCOKF_Pos (0U)
#define CRS_ISR_SYNCOKF_Msk (0x1UL << CRS_ISR_SYNCOKF_Pos) /*!< 0x00000001 */
#define CRS_ISR_SYNCOKF CRS_ISR_SYNCOKF_Msk /*!< SYNC event OK flag */
#define CRS_ISR_SYNCWARNF_Pos (1U)
#define CRS_ISR_SYNCWARNF_Msk \
    (0x1UL << CRS_ISR_SYNCWARNF_Pos)            /*!< 0x00000002 */
#define CRS_ISR_SYNCWARNF CRS_ISR_SYNCWARNF_Msk /*!< SYNC warning flag */
#define CRS_ISR_ERRF_Pos (2U)
#define CRS_ISR_ERRF_Msk (0x1UL << CRS_ISR_ERRF_Pos) /*!< 0x00000004 */
#define CRS_ISR_ERRF CRS_ISR_ERRF_Msk                /*!< Error flag */
#define CRS_ISR_ESYNCF_Pos (3U)
#define CRS_ISR_ESYNCF_Msk (0x1UL << CRS_ISR_ESYNCF_Pos) /*!< 0x00000008 */
#define CRS_ISR_ESYNCF CRS_ISR_ESYNCF_Msk /*!< Expected SYNC flag */
#define CRS_ISR_SYNCERR_Pos (8U)
#define CRS_ISR_SYNCERR_Msk (0x1UL << CRS_ISR_SYNCERR_Pos) /*!< 0x00000100 */
#define CRS_ISR_SYNCERR CRS_ISR_SYNCERR_Msk                /*!< SYNC error */
#define CRS_ISR_SYNCMISS_Pos (9U)
#define CRS_ISR_SYNCMISS_Msk (0x1UL << CRS_ISR_SYNCMISS_Pos) /*!< 0x00000200 */
#define CRS_ISR_SYNCMISS CRS_ISR_SYNCMISS_Msk                /*!< SYNC missed */
#define CRS_ISR_TRIMOVF_Pos (10U)
#define CRS_ISR_TRIMOVF_Msk (0x1UL << CRS_ISR_TRIMOVF_Pos) /*!< 0x00000400 */
#define CRS_ISR_TRIMOVF \
    CRS_ISR_TRIMOVF_Msk /*!< Trimming overflow or underflow */
#define CRS_ISR_FEDIR_Pos (15U)
#define CRS_ISR_FEDIR_Msk (0x1UL << CRS_ISR_FEDIR_Pos) /*!< 0x00008000 */
#define CRS_ISR_FEDIR CRS_ISR_FEDIR_Msk /*!< Frequency error direction */
#define CRS_ISR_FECAP_Pos (16U)
#define CRS_ISR_FECAP_Msk (0xFFFFUL << CRS_ISR_FECAP_Pos) /*!< 0xFFFF0000 */
#define CRS_ISR_FECAP CRS_ISR_FECAP_Msk /*!< Frequency error capture */

/*******************  Bit definition for CRS_ICR register  *********************/
#define CRS_ICR_SYNCOKC_Pos (0U)
#define CRS_ICR_SYNCOKC_Msk (0x1UL << CRS_ICR_SYNCOKC_Pos) /*!< 0x00000001 */
#define CRS_ICR_SYNCOKC CRS_ICR_SYNCOKC_Msk /*!< SYNC event OK clear flag */
#define CRS_ICR_SYNCWARNC_Pos (1U)
#define CRS_ICR_SYNCWARNC_Msk \
    (0x1UL << CRS_ICR_SYNCWARNC_Pos)            /*!< 0x00000002 */
#define CRS_ICR_SYNCWARNC CRS_ICR_SYNCWARNC_Msk /*!< SYNC warning clear flag */
#define CRS_ICR_ERRC_Pos (2U)
#define CRS_ICR_ERRC_Msk (0x1UL << CRS_ICR_ERRC_Pos) /*!< 0x00000004 */
#define CRS_ICR_ERRC CRS_ICR_ERRC_Msk                /*!< Error clear flag */
#define CRS_ICR_ESYNCC_Pos (3U)
#define CRS_ICR_ESYNCC_Msk (0x1UL << CRS_ICR_ESYNCC_Pos) /*!< 0x00000008 */
#define CRS_ICR_ESYNCC CRS_ICR_ESYNCC_Msk /*!< Expected SYNC clear flag */

/******************************************************************************/
/*                                                                            */
/*                                    RNG                                     */
/*                                                                            */
/******************************************************************************/
/********************  Bits definition for RNG_CR register  *******************/
#define RNG_CR_RNGEN_Pos (2U)
#define RNG_CR_RNGEN_Msk (0x1UL << RNG_CR_RNGEN_Pos) /*!< 0x00000004 */
#define RNG_CR_RNGEN RNG_CR_RNGEN_Msk
#define RNG_CR_IE_Pos (3U)
#define RNG_CR_IE_Msk (0x1UL << RNG_CR_IE_Pos) /*!< 0x00000008 */
#define RNG_CR_IE RNG_CR_IE_Msk
#define RNG_CR_CED_Pos (5U)
#define RNG_CR_CED_Msk (0x1UL << RNG_CR_CED_Pos) /*!< 0x00000020 */
#define RNG_CR_CED RNG_CR_CED_Msk
#define RNG_CR_ARDIS_Pos (7U)
#define RNG_CR_ARDIS_Msk (0x1UL << RNG_CR_ARDIS_Pos)
#define RNG_CR_ARDIS RNG_CR_ARDIS_Msk
#define RNG_CR_RNG_CONFIG3_Pos (8U)
#define RNG_CR_RNG_CONFIG3_Msk (0xFUL << RNG_CR_RNG_CONFIG3_Pos)
#define RNG_CR_RNG_CONFIG3 RNG_CR_RNG_CONFIG3_Msk
#define RNG_CR_NISTC_Pos (12U)
#define RNG_CR_NISTC_Msk (0x1UL << RNG_CR_NISTC_Pos)
#define RNG_CR_NISTC RNG_CR_NISTC_Msk
#define RNG_CR_RNG_CONFIG2_Pos (13U)
#define RNG_CR_RNG_CONFIG2_Msk (0x7UL << RNG_CR_RNG_CONFIG2_Pos)
#define RNG_CR_RNG_CONFIG2 RNG_CR_RNG_CONFIG2_Msk
#define RNG_CR_CLKDIV_Pos (16U)
#define RNG_CR_CLKDIV_Msk (0xFUL << RNG_CR_CLKDIV_Pos)
#define RNG_CR_CLKDIV RNG_CR_CLKDIV_Msk
#define RNG_CR_CLKDIV_0 (0x1UL << RNG_CR_CLKDIV_Pos) /*!< 0x00010000 */
#define RNG_CR_CLKDIV_1 (0x2UL << RNG_CR_CLKDIV_Pos) /*!< 0x00020000 */
#define RNG_CR_CLKDIV_2 (0x4UL << RNG_CR_CLKDIV_Pos) /*!< 0x00040000 */
#define RNG_CR_CLKDIV_3 (0x8UL << RNG_CR_CLKDIV_Pos) /*!< 0x00080000 */
#define RNG_CR_RNG_CONFIG1_Pos (20U)
#define RNG_CR_RNG_CONFIG1_Msk (0x3FUL << RNG_CR_RNG_CONFIG1_Pos)
#define RNG_CR_RNG_CONFIG1 RNG_CR_RNG_CONFIG1_Msk
#define RNG_CR_CONDRST_Pos (30U)
#define RNG_CR_CONDRST_Msk (0x1UL << RNG_CR_CONDRST_Pos)
#define RNG_CR_CONDRST RNG_CR_CONDRST_Msk
#define RNG_CR_CONFIGLOCK_Pos (31U)
#define RNG_CR_CONFIGLOCK_Msk (0x1UL << RNG_CR_CONFIGLOCK_Pos)
#define RNG_CR_CONFIGLOCK RNG_CR_CONFIGLOCK_Msk

/********************  Bits definition for RNG_SR register  *******************/
#define RNG_SR_DRDY_Pos (0U)
#define RNG_SR_DRDY_Msk (0x1UL << RNG_SR_DRDY_Pos) /*!< 0x00000001 */
#define RNG_SR_DRDY RNG_SR_DRDY_Msk
#define RNG_SR_CECS_Pos (1U)
#define RNG_SR_CECS_Msk (0x1UL << RNG_SR_CECS_Pos) /*!< 0x00000002 */
#define RNG_SR_CECS RNG_SR_CECS_Msk
#define RNG_SR_SECS_Pos (2U)
#define RNG_SR_SECS_Msk (0x1UL << RNG_SR_SECS_Pos) /*!< 0x00000004 */
#define RNG_SR_SECS RNG_SR_SECS_Msk
#define RNG_SR_CEIS_Pos (5U)
#define RNG_SR_CEIS_Msk (0x1UL << RNG_SR_CEIS_Pos) /*!< 0x00000020 */
#define RNG_SR_CEIS RNG_SR_CEIS_Msk
#define RNG_SR_SEIS_Pos (6U)
#define RNG_SR_SEIS_Msk (0x1UL << RNG_SR_SEIS_Pos) /*!< 0x00000040 */
#define RNG_SR_SEIS RNG_SR_SEIS_Msk

/********************  Bits definition for RNG_HTCR register  *******************/
#define RNG_HTCR_HTCFG_Pos (0U)
#define RNG_HTCR_HTCFG_Msk \
    (0xFFFFFFFFUL << RNG_HTCR_HTCFG_Pos) /*!< 0xFFFFFFFF */
#define RNG_HTCR_HTCFG RNG_HTCR_HTCFG_Msk

/******************************************************************************/
/*                                                                            */
/*                      Digital to Analog Converter                           */
/*                                                                            */
/******************************************************************************/
#define DAC_CHANNEL2_SUPPORT /*!< DAC feature available only on specific devices: DAC channel 2 available */

/********************  Bit definition for DAC_CR register  ********************/
#define DAC_CR_EN1_Pos (0U)
#define DAC_CR_EN1_Msk (0x1UL << DAC_CR_EN1_Pos) /*!< 0x00000001 */
#define DAC_CR_EN1 DAC_CR_EN1_Msk                /*!<DAC channel1 enable */
#define DAC_CR_TEN1_Pos (1U)
#define DAC_CR_TEN1_Msk (0x1UL << DAC_CR_TEN1_Pos) /*!< 0x00000002 */
#define DAC_CR_TEN1 DAC_CR_TEN1_Msk /*!<DAC channel1 Trigger enable */
#define DAC_CR_TSEL1_Pos (2U)
#define DAC_CR_TSEL1_Msk (0xFUL << DAC_CR_TSEL1_Pos) /*!< 0x0000003C */
#define DAC_CR_TSEL1 \
    DAC_CR_TSEL1_Msk /*!<TSEL1[3:0] (DAC channel1 Trigger selection) */
#define DAC_CR_TSEL1_0 (0x1UL << DAC_CR_TSEL1_Pos) /*!< 0x00000004 */
#define DAC_CR_TSEL1_1 (0x2UL << DAC_CR_TSEL1_Pos) /*!< 0x00000008 */
#define DAC_CR_TSEL1_2 (0x4UL << DAC_CR_TSEL1_Pos) /*!< 0x00000010 */
#define DAC_CR_TSEL1_3 (0x8UL << DAC_CR_TSEL1_Pos) /*!< 0x00000020 */
#define DAC_CR_WAVE1_Pos (6U)
#define DAC_CR_WAVE1_Msk (0x3UL << DAC_CR_WAVE1_Pos) /*!< 0x000000C0 */
#define DAC_CR_WAVE1 \
    DAC_CR_WAVE1_Msk /*!<WAVE1[1:0] (DAC channel1 noise/triangle wave generation enable) */
#define DAC_CR_WAVE1_0 (0x1UL << DAC_CR_WAVE1_Pos) /*!< 0x00000040 */
#define DAC_CR_WAVE1_1 (0x2UL << DAC_CR_WAVE1_Pos) /*!< 0x00000080 */
#define DAC_CR_MAMP1_Pos (8U)
#define DAC_CR_MAMP1_Msk (0xFUL << DAC_CR_MAMP1_Pos) /*!< 0x00000F00 */
#define DAC_CR_MAMP1 \
    DAC_CR_MAMP1_Msk /*!<MAMP1[3:0] (DAC channel1 Mask/Amplitude selector) */
#define DAC_CR_MAMP1_0 (0x1UL << DAC_CR_MAMP1_Pos) /*!< 0x00000100 */
#define DAC_CR_MAMP1_1 (0x2UL << DAC_CR_MAMP1_Pos) /*!< 0x00000200 */
#define DAC_CR_MAMP1_2 (0x4UL << DAC_CR_MAMP1_Pos) /*!< 0x00000400 */
#define DAC_CR_MAMP1_3 (0x8UL << DAC_CR_MAMP1_Pos) /*!< 0x00000800 */
#define DAC_CR_DMAEN1_Pos (12U)
#define DAC_CR_DMAEN1_Msk (0x1UL << DAC_CR_DMAEN1_Pos) /*!< 0x00001000 */
#define DAC_CR_DMAEN1 DAC_CR_DMAEN1_Msk /*!<DAC channel1 DMA enable */
#define DAC_CR_DMAUDRIE1_Pos (13U)
#define DAC_CR_DMAUDRIE1_Msk (0x1UL << DAC_CR_DMAUDRIE1_Pos) /*!< 0x00002000 */
#define DAC_CR_DMAUDRIE1 \
    DAC_CR_DMAUDRIE1_Msk /*!<DAC channel 1 DMA underrun interrupt enable  >*/
#define DAC_CR_CEN1_Pos (14U)
#define DAC_CR_CEN1_Msk (0x1UL << DAC_CR_CEN1_Pos) /*!< 0x00004000 */
#define DAC_CR_CEN1 DAC_CR_CEN1_Msk /*!<DAC channel 1 calibration enable >*/
#define DAC_CR_EN2_Pos (16U)
#define DAC_CR_EN2_Msk (0x1UL << DAC_CR_EN2_Pos) /*!< 0x00010000 */
#define DAC_CR_EN2 DAC_CR_EN2_Msk                /*!<DAC channel2 enable */
#define DAC_CR_TEN2_Pos (17U)
#define DAC_CR_TEN2_Msk (0x1UL << DAC_CR_TEN2_Pos) /*!< 0x00020000 */
#define DAC_CR_TEN2 DAC_CR_TEN2_Msk /*!<DAC channel2 Trigger enable */
#define DAC_CR_TSEL2_Pos (18U)
#define DAC_CR_TSEL2_Msk (0xFUL << DAC_CR_TSEL2_Pos) /*!< 0x003C0000 */
#define DAC_CR_TSEL2 \
    DAC_CR_TSEL2_Msk /*!<TSEL2[3:0] (DAC channel2 Trigger selection) */
#define DAC_CR_TSEL2_0 (0x1UL << DAC_CR_TSEL2_Pos) /*!< 0x00040000 */
#define DAC_CR_TSEL2_1 (0x2UL << DAC_CR_TSEL2_Pos) /*!< 0x00080000 */
#define DAC_CR_TSEL2_2 (0x4UL << DAC_CR_TSEL2_Pos) /*!< 0x00100000 */
#define DAC_CR_TSEL2_3 (0x8UL << DAC_CR_TSEL2_Pos) /*!< 0x00200000 */
#define DAC_CR_WAVE2_Pos (22U)
#define DAC_CR_WAVE2_Msk (0x3UL << DAC_CR_WAVE2_Pos) /*!< 0x00C00000 */
#define DAC_CR_WAVE2 \
    DAC_CR_WAVE2_Msk /*!<WAVE2[1:0] (DAC channel2 noise/triangle wave generation enable) */
#define DAC_CR_WAVE2_0 (0x1UL << DAC_CR_WAVE2_Pos) /*!< 0x00400000 */
#define DAC_CR_WAVE2_1 (0x2UL << DAC_CR_WAVE2_Pos) /*!< 0x00800000 */
#define DAC_CR_MAMP2_Pos (24U)
#define DAC_CR_MAMP2_Msk (0xFUL << DAC_CR_MAMP2_Pos) /*!< 0x0F000000 */
#define DAC_CR_MAMP2 \
    DAC_CR_MAMP2_Msk /*!<MAMP2[3:0] (DAC channel2 Mask/Amplitude selector) */
#define DAC_CR_MAMP2_0 (0x1UL << DAC_CR_MAMP2_Pos) /*!< 0x01000000 */
#define DAC_CR_MAMP2_1 (0x2UL << DAC_CR_MAMP2_Pos) /*!< 0x02000000 */
#define DAC_CR_MAMP2_2 (0x4UL << DAC_CR_MAMP2_Pos) /*!< 0x04000000 */
#define DAC_CR_MAMP2_3 (0x8UL << DAC_CR_MAMP2_Pos) /*!< 0x08000000 */
#define DAC_CR_DMAEN2_Pos (28U)
#define DAC_CR_DMAEN2_Msk (0x1UL << DAC_CR_DMAEN2_Pos) /*!< 0x10000000 */
#define DAC_CR_DMAEN2 DAC_CR_DMAEN2_Msk /*!<DAC channel2 DMA enabled */
#define DAC_CR_DMAUDRIE2_Pos (29U)
#define DAC_CR_DMAUDRIE2_Msk (0x1UL << DAC_CR_DMAUDRIE2_Pos) /*!< 0x20000000 */
#define DAC_CR_DMAUDRIE2 \
    DAC_CR_DMAUDRIE2_Msk /*!<DAC channel2 DMA underrun interrupt enable  >*/
#define DAC_CR_CEN2_Pos (30U)
#define DAC_CR_CEN2_Msk (0x1UL << DAC_CR_CEN2_Pos) /*!< 0x40000000 */
#define DAC_CR_CEN2 DAC_CR_CEN2_Msk /*!<DAC channel2 calibration enable >*/

/*****************  Bit definition for DAC_SWTRIGR register  ******************/
#define DAC_SWTRIGR_SWTRIG1_Pos (0U)
#define DAC_SWTRIGR_SWTRIG1_Msk \
    (0x1UL << DAC_SWTRIGR_SWTRIG1_Pos) /*!< 0x00000001 */
#define DAC_SWTRIGR_SWTRIG1 \
    DAC_SWTRIGR_SWTRIG1_Msk /*!<DAC channel1 software trigger */
#define DAC_SWTRIGR_SWTRIG2_Pos (1U)
#define DAC_SWTRIGR_SWTRIG2_Msk \
    (0x1UL << DAC_SWTRIGR_SWTRIG2_Pos) /*!< 0x00000002 */
#define DAC_SWTRIGR_SWTRIG2 \
    DAC_SWTRIGR_SWTRIG2_Msk /*!<DAC channel2 software trigger */
#define DAC_SWTRIGR_SWTRIGB1_Pos (16U)
#define DAC_SWTRIGR_SWTRIGB1_Msk \
    (0x1UL << DAC_SWTRIGR_SWTRIGB1_Pos) /*!< 0x00010000 */
#define DAC_SWTRIGR_SWTRIGB1 \
    DAC_SWTRIGR_SWTRIGB1_Msk /*!<DAC channel1 software trigger B */
#define DAC_SWTRIGR_SWTRIGB2_Pos (17U)
#define DAC_SWTRIGR_SWTRIGB2_Msk \
    (0x1UL << DAC_SWTRIGR_SWTRIGB2_Pos) /*!< 0x00020000 */
#define DAC_SWTRIGR_SWTRIGB2 \
    DAC_SWTRIGR_SWTRIGB2_Msk /*!<DAC channel2 software trigger B */

/*****************  Bit definition for DAC_DHR12R1 register  ******************/
#define DAC_DHR12R1_DACC1DHR_Pos (0U)
#define DAC_DHR12R1_DACC1DHR_Msk \
    (0xFFFUL << DAC_DHR12R1_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R1_DACC1DHR \
    DAC_DHR12R1_DACC1DHR_Msk /*!<DAC channel1 12-bit Right aligned data */
#define DAC_DHR12R1_DACC1DHRB_Pos (16U)
#define DAC_DHR12R1_DACC1DHRB_Msk \
    (0xFFFUL << DAC_DHR12R1_DACC1DHRB_Pos) /*!< 0x0FFF0000 */
#define DAC_DHR12R1_DACC1DHRB \
    DAC_DHR12R1_DACC1DHRB_Msk /*!<DAC channel1 12-bit Right-aligned data B */

/*****************  Bit definition for DAC_DHR12L1 register  ******************/
#define DAC_DHR12L1_DACC1DHR_Pos (4U)
#define DAC_DHR12L1_DACC1DHR_Msk \
    (0xFFFUL << DAC_DHR12L1_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L1_DACC1DHR \
    DAC_DHR12L1_DACC1DHR_Msk /*!<DAC channel1 12-bit Left aligned data */
#define DAC_DHR12L1_DACC1DHRB_Pos (20U)
#define DAC_DHR12L1_DACC1DHRB_Msk \
    (0xFFFUL << DAC_DHR12L1_DACC1DHRB_Pos) /*!< 0xFFF00000 */
#define DAC_DHR12L1_DACC1DHRB \
    DAC_DHR12L1_DACC1DHRB_Msk /*!<DAC channel1 12-bit Left aligned data B */

/******************  Bit definition for DAC_DHR8R1 register  ******************/
#define DAC_DHR8R1_DACC1DHR_Pos (0U)
#define DAC_DHR8R1_DACC1DHR_Msk \
    (0xFFUL << DAC_DHR8R1_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R1_DACC1DHR \
    DAC_DHR8R1_DACC1DHR_Msk /*!<DAC channel1 8-bit Right aligned data */
#define DAC_DHR8R1_DACC1DHRB_Pos (8U)
#define DAC_DHR8R1_DACC1DHRB_Msk \
    (0xFFUL << DAC_DHR8R1_DACC1DHRB_Pos) /*!< 0x0000FF00 */
#define DAC_DHR8R1_DACC1DHRB \
    DAC_DHR8R1_DACC1DHRB_Msk /*!<DAC channel1 8-bit Right aligned data B */

/*****************  Bit definition for DAC_DHR12R2 register  ******************/
#define DAC_DHR12R2_DACC2DHR_Pos (0U)
#define DAC_DHR12R2_DACC2DHR_Msk \
    (0xFFFUL << DAC_DHR12R2_DACC2DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R2_DACC2DHR \
    DAC_DHR12R2_DACC2DHR_Msk /*!<DAC channel2 12-bit Right aligned data */
#define DAC_DHR12R2_DACC2DHRB_Pos (16U)
#define DAC_DHR12R2_DACC2DHRB_Msk \
    (0xFFFUL << DAC_DHR12R2_DACC2DHRB_Pos) /*!< 0x0FFF0000 */
#define DAC_DHR12R2_DACC2DHRB \
    DAC_DHR12R2_DACC2DHRB_Msk /*!<DAC channel2 12-bit Right-aligned data B */

/*****************  Bit definition for DAC_DHR12L2 register  ******************/
#define DAC_DHR12L2_DACC2DHR_Pos (4U)
#define DAC_DHR12L2_DACC2DHR_Msk \
    (0xFFFUL << DAC_DHR12L2_DACC2DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L2_DACC2DHR \
    DAC_DHR12L2_DACC2DHR_Msk /*!<DAC channel2 12-bit Left aligned data */
#define DAC_DHR12L2_DACC2DHRB_Pos (20U)
#define DAC_DHR12L2_DACC2DHRB_Msk \
    (0xFFFUL << DAC_DHR12L2_DACC2DHRB_Pos) /*!< 0xFFF00000 */
#define DAC_DHR12L2_DACC2DHRB \
    DAC_DHR12L2_DACC2DHRB_Msk /*!<DAC channel2 12-bit Left aligned data B */

/******************  Bit definition for DAC_DHR8R2 register  ******************/
#define DAC_DHR8R2_DACC2DHR_Pos (0U)
#define DAC_DHR8R2_DACC2DHR_Msk \
    (0xFFUL << DAC_DHR8R2_DACC2DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R2_DACC2DHR \
    DAC_DHR8R2_DACC2DHR_Msk /*!<DAC channel2 8-bit Right aligned data */
#define DAC_DHR8R2_DACC2DHRB_Pos (8U)
#define DAC_DHR8R2_DACC2DHRB_Msk \
    (0xFFUL << DAC_DHR8R2_DACC2DHRB_Pos) /*!< 0x0000FF00 */
#define DAC_DHR8R2_DACC2DHRB \
    DAC_DHR8R2_DACC2DHRB_Msk /*!<DAC channel2 8-bit Right aligned data B */

/*****************  Bit definition for DAC_DHR12RD register  ******************/
#define DAC_DHR12RD_DACC1DHR_Pos (0U)
#define DAC_DHR12RD_DACC1DHR_Msk \
    (0xFFFUL << DAC_DHR12RD_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12RD_DACC1DHR \
    DAC_DHR12RD_DACC1DHR_Msk /*!<DAC channel1 12-bit Right aligned data */
#define DAC_DHR12RD_DACC2DHR_Pos (16U)
#define DAC_DHR12RD_DACC2DHR_Msk \
    (0xFFFUL << DAC_DHR12RD_DACC2DHR_Pos) /*!< 0x0FFF0000 */
#define DAC_DHR12RD_DACC2DHR \
    DAC_DHR12RD_DACC2DHR_Msk /*!<DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12LD register  ******************/
#define DAC_DHR12LD_DACC1DHR_Pos (4U)
#define DAC_DHR12LD_DACC1DHR_Msk \
    (0xFFFUL << DAC_DHR12LD_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12LD_DACC1DHR \
    DAC_DHR12LD_DACC1DHR_Msk /*!<DAC channel1 12-bit Left aligned data */
#define DAC_DHR12LD_DACC2DHR_Pos (20U)
#define DAC_DHR12LD_DACC2DHR_Msk \
    (0xFFFUL << DAC_DHR12LD_DACC2DHR_Pos) /*!< 0xFFF00000 */
#define DAC_DHR12LD_DACC2DHR \
    DAC_DHR12LD_DACC2DHR_Msk /*!<DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8RD register  ******************/
#define DAC_DHR8RD_DACC1DHR_Pos (0U)
#define DAC_DHR8RD_DACC1DHR_Msk \
    (0xFFUL << DAC_DHR8RD_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8RD_DACC1DHR \
    DAC_DHR8RD_DACC1DHR_Msk /*!<DAC channel1 8-bit Right aligned data */
#define DAC_DHR8RD_DACC2DHR_Pos (8U)
#define DAC_DHR8RD_DACC2DHR_Msk \
    (0xFFUL << DAC_DHR8RD_DACC2DHR_Pos) /*!< 0x0000FF00 */
#define DAC_DHR8RD_DACC2DHR \
    DAC_DHR8RD_DACC2DHR_Msk /*!<DAC channel2 8-bit Right aligned data */

/*******************  Bit definition for DAC_DOR1 register  *******************/
#define DAC_DOR1_DACC1DOR_Pos (0U)
#define DAC_DOR1_DACC1DOR_Msk \
    (0xFFFUL << DAC_DOR1_DACC1DOR_Pos)          /*!< 0x00000FFF */
#define DAC_DOR1_DACC1DOR DAC_DOR1_DACC1DOR_Msk /*!<DAC channel1 data output */
#define DAC_DOR1_DACC1DORB_Pos (16U)
#define DAC_DOR1_DACC1DORB_Msk \
    (0xFFFUL << DAC_DOR1_DACC1DORB_Pos) /*!< 0x0FFF0000 */
#define DAC_DOR1_DACC1DORB \
    DAC_DOR1_DACC1DORB_Msk /*!<DAC channel1 data output B */

/*******************  Bit definition for DAC_DOR2 register  *******************/
#define DAC_DOR2_DACC2DOR_Pos (0U)
#define DAC_DOR2_DACC2DOR_Msk \
    (0xFFFUL << DAC_DOR2_DACC2DOR_Pos)          /*!< 0x00000FFF */
#define DAC_DOR2_DACC2DOR DAC_DOR2_DACC2DOR_Msk /*!<DAC channel2 data output */
#define DAC_DOR2_DACC2DORB_Pos (16U)
#define DAC_DOR2_DACC2DORB_Msk \
    (0xFFFUL << DAC_DOR2_DACC2DORB_Pos) /*!< 0x0FFF0000 */
#define DAC_DOR2_DACC2DORB \
    DAC_DOR2_DACC2DORB_Msk /*!<DAC channel2 data output B */

/********************  Bit definition for DAC_SR register  ********************/
#define DAC_SR_DAC1RDY_Pos (11U)
#define DAC_SR_DAC1RDY_Msk (0x1UL << DAC_SR_DAC1RDY_Pos) /*!< 0x00000800 */
#define DAC_SR_DAC1RDY DAC_SR_DAC1RDY_Msk /*!<DAC channel 1 ready status bit */
#define DAC_SR_DORSTAT1_Pos (12U)
#define DAC_SR_DORSTAT1_Msk (0x1UL << DAC_SR_DORSTAT1_Pos) /*!< 0x00001000 */
#define DAC_SR_DORSTAT1 \
    DAC_SR_DORSTAT1_Msk /*!<DAC channel 1 output register status bit */
#define DAC_SR_DMAUDR1_Pos (13U)
#define DAC_SR_DMAUDR1_Msk (0x1UL << DAC_SR_DMAUDR1_Pos) /*!< 0x00002000 */
#define DAC_SR_DMAUDR1 DAC_SR_DMAUDR1_Msk /*!<DAC channel1 DMA underrun flag */
#define DAC_SR_CAL_FLAG1_Pos (14U)
#define DAC_SR_CAL_FLAG1_Msk (0x1UL << DAC_SR_CAL_FLAG1_Pos) /*!< 0x00004000 */
#define DAC_SR_CAL_FLAG1 \
    DAC_SR_CAL_FLAG1_Msk /*!<DAC channel1 calibration offset status */
#define DAC_SR_BWST1_Pos (15U)
#define DAC_SR_BWST1_Msk (0x1UL << DAC_SR_BWST1_Pos) /*!< 0x00008000 */
#define DAC_SR_BWST1 \
    DAC_SR_BWST1_Msk /*!<DAC channel1 busy writing sample time flag */

#define DAC_SR_DAC2RDY_Pos (27U)
#define DAC_SR_DAC2RDY_Msk (0x1UL << DAC_SR_DAC2RDY_Pos) /*!< 0x08000000 */
#define DAC_SR_DAC2RDY DAC_SR_DAC2RDY_Msk /*!<DAC channel 2 ready status bit */
#define DAC_SR_DORSTAT2_Pos (28U)
#define DAC_SR_DORSTAT2_Msk (0x1UL << DAC_SR_DORSTAT2_Pos) /*!< 0x10000000 */
#define DAC_SR_DORSTAT2 \
    DAC_SR_DORSTAT2_Msk /*!<DAC channel 2 output register status bit */
#define DAC_SR_DMAUDR2_Pos (29U)
#define DAC_SR_DMAUDR2_Msk (0x1UL << DAC_SR_DMAUDR2_Pos) /*!< 0x20000000 */
#define DAC_SR_DMAUDR2 DAC_SR_DMAUDR2_Msk /*!<DAC channel2 DMA underrun flag */
#define DAC_SR_CAL_FLAG2_Pos (30U)
#define DAC_SR_CAL_FLAG2_Msk (0x1UL << DAC_SR_CAL_FLAG2_Pos) /*!< 0x40000000 */
#define DAC_SR_CAL_FLAG2 \
    DAC_SR_CAL_FLAG2_Msk /*!<DAC channel2 calibration offset status */
#define DAC_SR_BWST2_Pos (31U)
#define DAC_SR_BWST2_Msk (0x1UL << DAC_SR_BWST2_Pos) /*!< 0x80000000 */
#define DAC_SR_BWST2 \
    DAC_SR_BWST2_Msk /*!<DAC channel2 busy writing sample time flag */

/*******************  Bit definition for DAC_CCR register  ********************/
#define DAC_CCR_OTRIM1_Pos (0U)
#define DAC_CCR_OTRIM1_Msk (0x1FUL << DAC_CCR_OTRIM1_Pos) /*!< 0x0000001F */
#define DAC_CCR_OTRIM1 \
    DAC_CCR_OTRIM1_Msk /*!<DAC channel1 offset trimming value */
#define DAC_CCR_OTRIM2_Pos (16U)
#define DAC_CCR_OTRIM2_Msk (0x1FUL << DAC_CCR_OTRIM2_Pos) /*!< 0x001F0000 */
#define DAC_CCR_OTRIM2 \
    DAC_CCR_OTRIM2_Msk /*!<DAC channel2 offset trimming value */

/*******************  Bit definition for DAC_MCR register  *******************/
#define DAC_MCR_MODE1_Pos (0U)
#define DAC_MCR_MODE1_Msk (0x7UL << DAC_MCR_MODE1_Pos) /*!< 0x00000007 */
#define DAC_MCR_MODE1 DAC_MCR_MODE1_Msk /*!<MODE1[2:0] (DAC channel1 mode) */
#define DAC_MCR_MODE1_0 (0x1UL << DAC_MCR_MODE1_Pos) /*!< 0x00000001 */
#define DAC_MCR_MODE1_1 (0x2UL << DAC_MCR_MODE1_Pos) /*!< 0x00000002 */
#define DAC_MCR_MODE1_2 (0x4UL << DAC_MCR_MODE1_Pos) /*!< 0x00000004 */
#define DAC_MCR_DMADOUBLE1_Pos (8U)
#define DAC_MCR_DMADOUBLE1_Msk \
    (0x1UL << DAC_MCR_DMADOUBLE1_Pos) /*!< 0x00000100 */
#define DAC_MCR_DMADOUBLE1 \
    DAC_MCR_DMADOUBLE1_Msk /*!<DAC Channel 1 DMA double data mode */
#define DAC_MCR_SINFORMAT1_Pos (9U)
#define DAC_MCR_SINFORMAT1_Msk \
    (0x1UL << DAC_MCR_SINFORMAT1_Pos) /*!< 0x00000200 */
#define DAC_MCR_SINFORMAT1 \
    DAC_MCR_SINFORMAT1_Msk /*!<DAC Channel 1 enable signed format */
#define DAC_MCR_HFSEL_Pos (14U)
#define DAC_MCR_HFSEL_Msk (0x3UL << DAC_MCR_HFSEL_Pos) /*!< 0x0000C000 */
#define DAC_MCR_HFSEL \
    DAC_MCR_HFSEL_Msk /*!<HFSEL[1:0] (High Frequency interface mode selection) */
#define DAC_MCR_HFSEL_0 (0x1UL << DAC_MCR_HFSEL_Pos) /*!< 0x00004000 */
#define DAC_MCR_HFSEL_1 (0x2UL << DAC_MCR_HFSEL_Pos) /*!< 0x00008000 */
#define DAC_MCR_MODE2_Pos (16U)
#define DAC_MCR_MODE2_Msk (0x7UL << DAC_MCR_MODE2_Pos) /*!< 0x00070000 */
#define DAC_MCR_MODE2 DAC_MCR_MODE2_Msk /*!<MODE2[2:0] (DAC channel2 mode) */
#define DAC_MCR_MODE2_0 (0x1UL << DAC_MCR_MODE2_Pos) /*!< 0x00010000 */
#define DAC_MCR_MODE2_1 (0x2UL << DAC_MCR_MODE2_Pos) /*!< 0x00020000 */
#define DAC_MCR_MODE2_2 (0x4UL << DAC_MCR_MODE2_Pos) /*!< 0x00040000 */
#define DAC_MCR_DMADOUBLE2_Pos (24U)
#define DAC_MCR_DMADOUBLE2_Msk \
    (0x1UL << DAC_MCR_DMADOUBLE2_Pos) /*!< 0x01000000 */
#define DAC_MCR_DMADOUBLE2 \
    DAC_MCR_DMADOUBLE2_Msk /*!<DAC Channel 2 DMA double data mode */
#define DAC_MCR_SINFORMAT2_Pos (25U)
#define DAC_MCR_SINFORMAT2_Msk \
    (0x1UL << DAC_MCR_SINFORMAT2_Pos) /*!< 0x02000000 */
#define DAC_MCR_SINFORMAT2 \
    DAC_MCR_SINFORMAT2_Msk /*!<DAC Channel 2 enable signed format */

/******************  Bit definition for DAC_SHSR1 register  ******************/
#define DAC_SHSR1_TSAMPLE1_Pos (0U)
#define DAC_SHSR1_TSAMPLE1_Msk \
    (0x3FFUL << DAC_SHSR1_TSAMPLE1_Pos) /*!< 0x000003FF */
#define DAC_SHSR1_TSAMPLE1 \
    DAC_SHSR1_TSAMPLE1_Msk /*!<DAC channel1 sample time */

/******************  Bit definition for DAC_SHSR2 register  ******************/
#define DAC_SHSR2_TSAMPLE2_Pos (0U)
#define DAC_SHSR2_TSAMPLE2_Msk \
    (0x3FFUL << DAC_SHSR2_TSAMPLE2_Pos) /*!< 0x000003FF */
#define DAC_SHSR2_TSAMPLE2 \
    DAC_SHSR2_TSAMPLE2_Msk /*!<DAC channel2 sample time */

/******************  Bit definition for DAC_SHHR register  ******************/
#define DAC_SHHR_THOLD1_Pos (0U)
#define DAC_SHHR_THOLD1_Msk (0x3FFUL << DAC_SHHR_THOLD1_Pos) /*!< 0x000003FF */
#define DAC_SHHR_THOLD1 DAC_SHHR_THOLD1_Msk /*!<DAC channel1 hold time */
#define DAC_SHHR_THOLD2_Pos (16U)
#define DAC_SHHR_THOLD2_Msk (0x3FFUL << DAC_SHHR_THOLD2_Pos) /*!< 0x03FF0000 */
#define DAC_SHHR_THOLD2 DAC_SHHR_THOLD2_Msk /*!<DAC channel2 hold time */

/******************  Bit definition for DAC_SHRR register  ******************/
#define DAC_SHRR_TREFRESH1_Pos (0U)
#define DAC_SHRR_TREFRESH1_Msk \
    (0xFFUL << DAC_SHRR_TREFRESH1_Pos) /*!< 0x000000FF */
#define DAC_SHRR_TREFRESH1 \
    DAC_SHRR_TREFRESH1_Msk /*!<DAC channel1 refresh time */
#define DAC_SHRR_TREFRESH2_Pos (16U)
#define DAC_SHRR_TREFRESH2_Msk \
    (0xFFUL << DAC_SHRR_TREFRESH2_Pos) /*!< 0x00FF0000 */
#define DAC_SHRR_TREFRESH2 \
    DAC_SHRR_TREFRESH2_Msk /*!<DAC channel2 refresh time */

/******************  Bit definition for DAC_AUTOCR register  ******************/
#define DAC_AUTOCR_AUTOMODE_Pos (22U)
#define DAC_AUTOCR_AUTOMODE_Msk \
    (0x1UL << DAC_AUTOCR_AUTOMODE_Pos)              /*!< 0x00400000 */
#define DAC_AUTOCR_AUTOMODE DAC_AUTOCR_AUTOMODE_Msk /*!< AUTOCR Enable */

/******************************************************************************/
/*                                                                            */
/*                                    HASH                                    */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for HASH_CR register  ********************/
#define HASH_CR_INIT_Pos (2U)
#define HASH_CR_INIT_Msk (0x1UL << HASH_CR_INIT_Pos) /*!< 0x00000004 */
#define HASH_CR_INIT HASH_CR_INIT_Msk
#define HASH_CR_DMAE_Pos (3U)
#define HASH_CR_DMAE_Msk (0x1UL << HASH_CR_DMAE_Pos) /*!< 0x00000008 */
#define HASH_CR_DMAE HASH_CR_DMAE_Msk
#define HASH_CR_DATATYPE_Pos (4U)
#define HASH_CR_DATATYPE_Msk (0x3UL << HASH_CR_DATATYPE_Pos) /*!< 0x00000030 */
#define HASH_CR_DATATYPE HASH_CR_DATATYPE_Msk
#define HASH_CR_DATATYPE_0 (0x1UL << HASH_CR_DATATYPE_Pos) /*!< 0x00000010 */
#define HASH_CR_DATATYPE_1 (0x2UL << HASH_CR_DATATYPE_Pos) /*!< 0x00000020 */
#define HASH_CR_MODE_Pos (6U)
#define HASH_CR_MODE_Msk (0x1UL << HASH_CR_MODE_Pos) /*!< 0x00000040 */
#define HASH_CR_MODE HASH_CR_MODE_Msk
#define HASH_CR_NBW_Pos (8U)
#define HASH_CR_NBW_Msk (0xFUL << HASH_CR_NBW_Pos) /*!< 0x00000F00 */
#define HASH_CR_NBW HASH_CR_NBW_Msk
#define HASH_CR_NBW_0 (0x1UL << HASH_CR_NBW_Pos) /*!< 0x00000100 */
#define HASH_CR_NBW_1 (0x2UL << HASH_CR_NBW_Pos) /*!< 0x00000200 */
#define HASH_CR_NBW_2 (0x4UL << HASH_CR_NBW_Pos) /*!< 0x00000400 */
#define HASH_CR_NBW_3 (0x8UL << HASH_CR_NBW_Pos) /*!< 0x00000800 */
#define HASH_CR_DINNE_Pos (12U)
#define HASH_CR_DINNE_Msk (0x1UL << HASH_CR_DINNE_Pos) /*!< 0x00001000 */
#define HASH_CR_DINNE HASH_CR_DINNE_Msk
#define HASH_CR_MDMAT_Pos (13U)
#define HASH_CR_MDMAT_Msk (0x1UL << HASH_CR_MDMAT_Pos) /*!< 0x00002000 */
#define HASH_CR_MDMAT HASH_CR_MDMAT_Msk
#define HASH_CR_LKEY_Pos (16U)
#define HASH_CR_LKEY_Msk (0x1UL << HASH_CR_LKEY_Pos) /*!< 0x00010000 */
#define HASH_CR_LKEY HASH_CR_LKEY_Msk
#define HASH_CR_ALGO_Pos (17U)
#define HASH_CR_ALGO_Msk (0x3UL << HASH_CR_ALGO_Pos) /*!< 0x00060000 */
#define HASH_CR_ALGO HASH_CR_ALGO_Msk
#define HASH_CR_ALGO_0 (0x1UL << HASH_CR_ALGO_Pos) /*!< 0x00020000 */
#define HASH_CR_ALGO_1 (0x2UL << HASH_CR_ALGO_Pos) /*!< 0x00040000 */

/******************  Bits definition for HASH_STR register  *******************/
#define HASH_STR_NBLW_Pos (0U)
#define HASH_STR_NBLW_Msk (0x1FUL << HASH_STR_NBLW_Pos) /*!< 0x0000001F */
#define HASH_STR_NBLW HASH_STR_NBLW_Msk
#define HASH_STR_NBLW_0 (0x01UL << HASH_STR_NBLW_Pos) /*!< 0x00000001 */
#define HASH_STR_NBLW_1 (0x02UL << HASH_STR_NBLW_Pos) /*!< 0x00000002 */
#define HASH_STR_NBLW_2 (0x04UL << HASH_STR_NBLW_Pos) /*!< 0x00000004 */
#define HASH_STR_NBLW_3 (0x08UL << HASH_STR_NBLW_Pos) /*!< 0x00000008 */
#define HASH_STR_NBLW_4 (0x10UL << HASH_STR_NBLW_Pos) /*!< 0x00000010 */
#define HASH_STR_DCAL_Pos (8U)
#define HASH_STR_DCAL_Msk (0x1UL << HASH_STR_DCAL_Pos) /*!< 0x00000100 */
#define HASH_STR_DCAL HASH_STR_DCAL_Msk

/******************  Bits definition for HASH_IMR register  *******************/
#define HASH_IMR_DINIE_Pos (0U)
#define HASH_IMR_DINIE_Msk (0x1UL << HASH_IMR_DINIE_Pos) /*!< 0x00000001 */
#define HASH_IMR_DINIE HASH_IMR_DINIE_Msk
#define HASH_IMR_DCIE_Pos (1U)
#define HASH_IMR_DCIE_Msk (0x1UL << HASH_IMR_DCIE_Pos) /*!< 0x00000002 */
#define HASH_IMR_DCIE HASH_IMR_DCIE_Msk

/******************  Bits definition for HASH_SR register  ********************/
#define HASH_SR_DINIS_Pos (0U)
#define HASH_SR_DINIS_Msk (0x1UL << HASH_SR_DINIS_Pos) /*!< 0x00000001 */
#define HASH_SR_DINIS HASH_SR_DINIS_Msk
#define HASH_SR_DCIS_Pos (1U)
#define HASH_SR_DCIS_Msk (0x1UL << HASH_SR_DCIS_Pos) /*!< 0x00000002 */
#define HASH_SR_DCIS HASH_SR_DCIS_Msk
#define HASH_SR_DMAS_Pos (2U)
#define HASH_SR_DMAS_Msk (0x1UL << HASH_SR_DMAS_Pos) /*!< 0x00000004 */
#define HASH_SR_DMAS HASH_SR_DMAS_Msk
#define HASH_SR_BUSY_Pos (3U)
#define HASH_SR_BUSY_Msk (0x1UL << HASH_SR_BUSY_Pos) /*!< 0x00000008 */
#define HASH_SR_BUSY HASH_SR_BUSY_Msk
#define HASH_SR_NBWE_Pos (16U)
#define HASH_SR_NBWE_Msk (0xFUL << HASH_SR_NBWE_Pos) /*!< 0x000F0000 */
#define HASH_SR_NBWE HASH_SR_NBWE_Msk
#define HASH_SR_NBWE_0 (0x01UL << HASH_SR_NBWE_Pos) /*!< 0x00010000 */
#define HASH_SR_NBWE_1 (0x02UL << HASH_SR_NBWE_Pos) /*!< 0x00020000 */
#define HASH_SR_NBWE_2 (0x04UL << HASH_SR_NBWE_Pos) /*!< 0x00040000 */
#define HASH_SR_NBWE_3 (0x08UL << HASH_SR_NBWE_Pos) /*!< 0x00080000 */
#define HASH_SR_DINNE_Pos (15U)
#define HASH_SR_DINNE_Msk (0x1UL << HASH_SR_DINNE_Pos) /*!< 0x00008000 */
#define HASH_SR_DINNE HASH_SR_DINNE_Msk
#define HASH_SR_NBWP_Pos (9U)
#define HASH_SR_NBWP_Msk (0xFUL << HASH_SR_NBWP_Pos) /*!< 0x000F0000 */
#define HASH_SR_NBWP HASH_SR_NBWP_Msk
#define HASH_SR_NBWP_0 (0x01UL << HASH_SR_NBWP_Pos) /*!< 0x000O0200 */
#define HASH_SR_NBWP_1 (0x02UL << HASH_SR_NBWP_Pos) /*!< 0x00000400 */
#define HASH_SR_NBWP_2 (0x04UL << HASH_SR_NBWP_Pos) /*!< 0x00000800 */
#define HASH_SR_NBWP_3 (0x08UL << HASH_SR_NBWP_Pos) /*!< 0x00001000 */

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for DBGMCU_IDCODE register  *************/
#define DBGMCU_IDCODE_DEV_ID_Pos (0U)
#define DBGMCU_IDCODE_DEV_ID_Msk \
    (0xFFFUL << DBGMCU_IDCODE_DEV_ID_Pos) /*!< 0x00000FFF */
#define DBGMCU_IDCODE_DEV_ID DBGMCU_IDCODE_DEV_ID_Msk
#define DBGMCU_IDCODE_REV_ID_Pos (16U)
#define DBGMCU_IDCODE_REV_ID_Msk \
    (0xFFFFUL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0xFFFF0000 */
#define DBGMCU_IDCODE_REV_ID DBGMCU_IDCODE_REV_ID_Msk

/********************  Bit definition for DBGMCU_CR register  *****************/
#define DBGMCU_CR_DBG_STOP_Pos (1U)
#define DBGMCU_CR_DBG_STOP_Msk \
    (0x1UL << DBGMCU_CR_DBG_STOP_Pos) /*!< 0x00000002 */
#define DBGMCU_CR_DBG_STOP DBGMCU_CR_DBG_STOP_Msk
#define DBGMCU_CR_DBG_STANDBY_Pos (2U)
#define DBGMCU_CR_DBG_STANDBY_Msk \
    (0x1UL << DBGMCU_CR_DBG_STANDBY_Pos) /*!< 0x00000004 */
#define DBGMCU_CR_DBG_STANDBY DBGMCU_CR_DBG_STANDBY_Msk
#define DBGMCU_CR_TRACE_IOEN_Pos (4U)
#define DBGMCU_CR_TRACE_IOEN_Msk \
    (0x1UL << DBGMCU_CR_TRACE_IOEN_Pos) /*!< 0x00000010 */
#define DBGMCU_CR_TRACE_IOEN DBGMCU_CR_TRACE_IOEN_Msk
#define DBGMCU_CR_TRACE_CLKEN_Pos (5U)
#define DBGMCU_CR_TRACE_CLKEN_Msk \
    (0x1UL << DBGMCU_CR_TRACE_CLKEN_Pos) /*!< 0x00000020 */
#define DBGMCU_CR_TRACE_CLKEN DBGMCU_CR_TRACE_CLKEN_Msk
#define DBGMCU_CR_TRACE_MODE_Pos (6U)
#define DBGMCU_CR_TRACE_MODE_Msk \
    (0x3UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x000000C0 */
#define DBGMCU_CR_TRACE_MODE DBGMCU_CR_TRACE_MODE_Msk
#define DBGMCU_CR_TRACE_MODE_0 \
    (0x1UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000040 */
#define DBGMCU_CR_TRACE_MODE_1 \
    (0x2UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000080 */
#define DBGMCU_CR_DCRT_Pos (16U)
#define DBGMCU_CR_DCRT_Msk (0x1UL << DBGMCU_CR_DCRT_Pos) /*!< 0x00010000 */
#define DBGMCU_CR_DCRT DBGMCU_CR_DCRT_Msk

/********************  Bit definition for DBGMCU_APB1FZR1 register  ***********/
#define DBGMCU_APB1FZR1_DBG_TIM2_STOP_Pos (0U)
#define DBGMCU_APB1FZR1_DBG_TIM2_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_TIM2_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_TIM2_STOP DBGMCU_APB1FZR1_DBG_TIM2_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_TIM3_STOP_Pos (1U)
#define DBGMCU_APB1FZR1_DBG_TIM3_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_TIM3_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_TIM3_STOP DBGMCU_APB1FZR1_DBG_TIM3_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_TIM6_STOP_Pos (4U)
#define DBGMCU_APB1FZR1_DBG_TIM6_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_TIM6_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_TIM6_STOP DBGMCU_APB1FZR1_DBG_TIM6_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_TIM7_STOP_Pos (5U)
#define DBGMCU_APB1FZR1_DBG_TIM7_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_TIM7_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_TIM7_STOP DBGMCU_APB1FZR1_DBG_TIM7_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_WWDG_STOP_Pos (11U)
#define DBGMCU_APB1FZR1_DBG_WWDG_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_WWDG_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_WWDG_STOP DBGMCU_APB1FZR1_DBG_WWDG_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_IWDG_STOP_Pos (12U)
#define DBGMCU_APB1FZR1_DBG_IWDG_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_IWDG_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_IWDG_STOP DBGMCU_APB1FZR1_DBG_IWDG_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_I2C1_STOP_Pos (21U)
#define DBGMCU_APB1FZR1_DBG_I2C1_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_I2C1_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_I2C1_STOP DBGMCU_APB1FZR1_DBG_I2C1_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_I2C2_STOP_Pos (22U)
#define DBGMCU_APB1FZR1_DBG_I2C2_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_I2C2_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_I2C2_STOP DBGMCU_APB1FZR1_DBG_I2C2_STOP_Msk
#define DBGMCU_APB1FZR1_DBG_I3C1_STOP_Pos (23U)
#define DBGMCU_APB1FZR1_DBG_I3C1_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR1_DBG_I3C1_STOP_Pos)
#define DBGMCU_APB1FZR1_DBG_I3C1_STOP DBGMCU_APB1FZR1_DBG_I3C1_STOP_Msk

/********************  Bit definition for DBGMCU_APB1FZR2 register  ***********/
#define DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Pos (5U)
#define DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Msk \
    (0x1UL << DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Pos)
#define DBGMCU_APB1FZR2_DBG_LPTIM2_STOP DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Msk

/********************  Bit definition for DBGMCU_APB2FZR register  ***********/
#define DBGMCU_APB2FZR_DBG_TIM1_STOP_Pos (11U)
#define DBGMCU_APB2FZR_DBG_TIM1_STOP_Msk \
    (0x1UL << DBGMCU_APB2FZR_DBG_TIM1_STOP_Pos)
#define DBGMCU_APB2FZR_DBG_TIM1_STOP DBGMCU_APB2FZR_DBG_TIM1_STOP_Msk

/********************  Bit definition for DBGMCU_APB3FZR register  ***********/
#define DBGMCU_APB3FZR_DBG_I3C2_STOP_Pos (12U)
#define DBGMCU_APB3FZR_DBG_I3C2_STOP_Msk \
    (0x1UL << DBGMCU_APB3FZR_DBG_I3C2_STOP_Pos)
#define DBGMCU_APB3FZR_DBG_I3C2_STOP DBGMCU_APB3FZR_DBG_I3C2_STOP_Msk
#define DBGMCU_APB3FZR_DBG_LPTIM1_STOP_Pos (17U)
#define DBGMCU_APB3FZR_DBG_LPTIM1_STOP_Msk \
    (0x1UL << DBGMCU_APB3FZR_DBG_LPTIM1_STOP_Pos)
#define DBGMCU_APB3FZR_DBG_LPTIM1_STOP DBGMCU_APB3FZR_DBG_LPTIM1_STOP_Msk
#define DBGMCU_APB3FZR_DBG_RTC_STOP_Pos (30U)
#define DBGMCU_APB3FZR_DBG_RTC_STOP_Msk \
    (0x1UL << DBGMCU_APB3FZR_DBG_RTC_STOP_Pos)
#define DBGMCU_APB3FZR_DBG_RTC_STOP DBGMCU_APB3FZR_DBG_RTC_STOP_Msk

/********************  Bit definition for DBGMCU_AHB1FZR register  ***********/
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_Pos (0U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_Pos (1U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_Pos (2U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_Pos (3U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_Pos (4U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_Pos (5U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_Pos (6U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_Pos (7U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH8_STOP_Pos (8U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH8_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH8_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH8_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH8_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH9_STOP_Pos (9U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH9_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH9_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH9_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH9_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH10_STOP_Pos (10U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH10_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH10_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH10_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH10_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH11_STOP_Pos (11U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH11_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH11_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH11_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH11_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH12_STOP_Pos (12U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH12_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH12_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH12_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH12_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH13_STOP_Pos (13U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH13_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH13_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH13_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH13_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH14_STOP_Pos (14U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH14_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH14_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH14_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH14_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH15_STOP_Pos (15U)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH15_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA1_CH15_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA1_CH15_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA1_CH15_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH0_STOP_Pos (16U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH0_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH0_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH0_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH0_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH1_STOP_Pos (17U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH1_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH1_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH1_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH1_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH2_STOP_Pos (18U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH2_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH2_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH2_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH2_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH3_STOP_Pos (19U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH3_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH3_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH3_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH3_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH4_STOP_Pos (20U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH4_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH4_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH4_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH4_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH5_STOP_Pos (21U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH5_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH5_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH5_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH5_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH6_STOP_Pos (22U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH6_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH6_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH6_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH6_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH7_STOP_Pos (23U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH7_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH7_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH7_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH7_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH8_STOP_Pos (24U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH8_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH8_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH8_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH8_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH9_STOP_Pos (25U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH9_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH9_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH9_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH9_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH10_STOP_Pos (26U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH10_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH10_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH10_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH10_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH11_STOP_Pos (27U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH11_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH11_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH11_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH11_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH12_STOP_Pos (28U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH12_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH12_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH12_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH12_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH13_STOP_Pos (29U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH13_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH13_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH13_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH13_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH14_STOP_Pos (30U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH14_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH14_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH14_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH14_STOP_Msk
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH15_STOP_Pos (31U)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH15_STOP_Msk \
    (0x1UL << DBGMCU_AHB1FZR_DBG_GPDMA2_CH15_STOP_Pos)
#define DBGMCU_AHB1FZR_DBG_GPDMA2_CH15_STOP \
    DBGMCU_AHB1FZR_DBG_GPDMA2_CH15_STOP_Msk

/********************  Bit definition for DBGMCU_SR register  ***********/
#define DBGMCU_SR_ACC_PORT_PRES_Pos (0U)
#define DBGMCU_SR_ACC_PORT_PRES_Msk \
    (0xFFFFUL << DBGMCU_SR_ACC_PORT_PRES_Pos) /*!< 0x0000FFFF */
#define DBGMCU_SR_ACC_PORT_PRES DBGMCU_SR_ACC_PORT_PRES_Msk
#define DBGMCU_SR_ACC_PORT_ENBL_Pos (16U)
#define DBGMCU_SR_ACC_PORT_ENBL_Msk \
    (0xFFFFUL << DBGMCU_SR_ACC_PORT_ENBL_Pos) /*!< 0xFFFF0000 */
#define DBGMCU_SR_ACC_PORT_ENBL DBGMCU_SR_ACC_PORT_ENBL_Msk

/********************  Bit definition for DBGMCU_DBG_AUTH_HOST register  ***********/
#define DBGMCU_DBG_AUTH_HOST_Pos (0U)
#define DBGMCU_DBG_AUTH_HOST_Msk \
    (0xFFFFFFFFUL << DBGMCU_DBG_AUTH_HOST_Pos) /*!< 0xFFFFFFFF */
#define DBGMCU_DBG_AUTH_HOST DBGMCU_DBG_AUTH_HOST_Msk

/********************  Bit definition for DBGMCU_DBG_AUTH_DEV register  ***********/
#define DBGMCU_DBG_AUTH_DEV_Pos (0U)
#define DBGMCU_DBG_AUTH_DEV_Msk \
    (0xFFFFFFFFUL << DBGMCU_DBG_AUTH_DEV_Pos) /*!< 0xFFFFFFFF */
#define DBGMCU_DBG_AUTH_DEV DBGMCU_DBG_AUTH_DEV_Msk

/********************  Bit definition for DBGMCU_DBG_AUTH_ACK register  ***********/
#define DBGMCU_DBG_AUTH_ACK_HOST_Pos (0U)
#define DBGMCU_DBG_AUTH_ACK_HOST_Msk \
    (0x1UL << DBGMCU_DBG_AUTH_ACK_HOST_Pos) /*!< 0x00000001 */
#define DBGMCU_DBG_AUTH_ACK_HOST DBGMCU_DBG_AUTH_ACK_HOST_Msk
#define DBGMCU_DBG_AUTH_ACK_DEV_Pos (1U)
#define DBGMCU_DBG_AUTH_ACK_DEV_Msk \
    (0x1UL << DBGMCU_DBG_AUTH_ACK_DEV_Pos) /*!< 0x00000002 */
#define DBGMCU_DBG_AUTH_ACK_DEV DBGMCU_DBG_AUTH_ACK_DEV_Msk

/********************  Bit definition for DBGMCU_PIDR4 register  ************/
#define DBGMCU_PIDR4_JEP106CON_Pos (0U)
#define DBGMCU_PIDR4_JEP106CON_Msk \
    (0xFUL << DBGMCU_PIDR4_JEP106CON_Pos) /*!< 0x0000000F */
#define DBGMCU_PIDR4_JEP106CON DBGMCU_PIDR4_JEP106CON_Msk
#define DBGMCU_PIDR4_4KCOUNT_Pos (4U)
#define DBGMCU_PIDR4_4KCOUNT_Msk \
    (0xFUL << DBGMCU_PIDR4_4KCOUNT_Pos) /*!< 0x000000F0 */
#define DBGMCU_PIDR4_4KCOUNT DBGMCU_PIDR4_4KCOUNT_Msk

/********************  Bit definition for DBGMCU_PIDR0 register  ************/
#define DBGMCU_PIDR0_PARTNUM_Pos (0U)
#define DBGMCU_PIDR0_PARTNUM_Msk \
    (0xFFUL << DBGMCU_PIDR0_PARTNUM_Pos) /*!< 0x000000FF */
#define DBGMCU_PIDR0_PARTNUM DBGMCU_PIDR0_PARTNUM_Msk

/********************  Bit definition for DBGMCU_PIDR1 register  ************/
#define DBGMCU_PIDR1_PARTNUM_Pos (0U)
#define DBGMCU_PIDR1_PARTNUM_Msk \
    (0xFUL << DBGMCU_PIDR1_PARTNUM_Pos) /*!< 0x0000000F */
#define DBGMCU_PIDR1_PARTNUM DBGMCU_PIDR1_PARTNUM_Msk
#define DBGMCU_PIDR1_JEP106ID_Pos (4U)
#define DBGMCU_PIDR1_JEP106ID_Msk \
    (0xFUL << DBGMCU_PIDR1_JEP106ID_Pos) /*!< 0x000000F0 */
#define DBGMCU_PIDR1_JEP106ID DBGMCU_PIDR1_JEP106ID_Msk

/********************  Bit definition for DBGMCU_PIDR2 register  ************/
#define DBGMCU_PIDR2_JEP106ID_Pos (0U)
#define DBGMCU_PIDR2_JEP106ID_Msk \
    (0x7UL << DBGMCU_PIDR2_JEP106ID_Pos) /*!< 0x00000007 */
#define DBGMCU_PIDR2_JEP106ID DBGMCU_PIDR2_JEP106ID_Msk
#define DBGMCU_PIDR2_JEDEC_Pos (3U)
#define DBGMCU_PIDR2_JEDEC_Msk \
    (0x1UL << DBGMCU_PIDR2_JEDEC_Pos) /*!< 0x00000008 */
#define DBGMCU_PIDR2_JEDEC DBGMCU_PIDR2_JEDEC_Msk
#define DBGMCU_PIDR2_REVISION_Pos (4U)
#define DBGMCU_PIDR2_REVISION_Msk \
    (0xFUL << DBGMCU_PIDR2_REVISION_Pos) /*!< 0x000000F0 */
#define DBGMCU_PIDR2_REVISION DBGMCU_PIDR2_REVISION_Msk

/********************  Bit definition for DBGMCU_PIDR3 register  ************/
#define DBGMCU_PIDR3_CMOD_Pos (0U)
#define DBGMCU_PIDR3_CMOD_Msk \
    (0xFUL << DBGMCU_PIDR3_CMOD_Pos) /*!< 0x0000000F */
#define DBGMCU_PIDR3_CMOD DBGMCU_PIDR3_CMOD_Msk
#define DBGMCU_PIDR3_REVAND_Pos (4U)
#define DBGMCU_PIDR3_REVAND_Msk \
    (0xFUL << DBGMCU_PIDR3_REVAND_Pos) /*!< 0x000000F0 */
#define DBGMCU_PIDR3_REVAND DBGMCU_PIDR3_REVAND_Msk

/********************  Bit definition for DBGMCU_CIDR0 register  ************/
#define DBGMCU_CIDR0_PREAMBLE_Pos (0U)
#define DBGMCU_CIDR0_PREAMBLE_Msk \
    (0xFFUL << DBGMCU_CIDR0_PREAMBLE_Pos) /*!< 0x000000FF */
#define DBGMCU_CIDR0_PREAMBLE DBGMCU_CIDR0_PREAMBLE_Msk

/********************  Bit definition for DBGMCU_CIDR1 register  ************/
#define DBGMCU_CIDR1_PREAMBLE_Pos (0U)
#define DBGMCU_CIDR1_PREAMBLE_Msk \
    (0xFUL << DBGMCU_CIDR1_PREAMBLE_Pos) /*!< 0x0000000F */
#define DBGMCU_CIDR1_PREAMBLE DBGMCU_CIDR1_PREAMBLE_Msk
#define DBGMCU_CIDR1_CLASS_Pos (4U)
#define DBGMCU_CIDR1_CLASS_Msk \
    (0xFUL << DBGMCU_CIDR1_CLASS_Pos) /*!< 0x000000F0 */
#define DBGMCU_CIDR1_CLASS DBGMCU_CIDR1_CLASS_Msk

/********************  Bit definition for DBGMCU_CIDR2 register  ************/
#define DBGMCU_CIDR2_PREAMBLE_Pos (0U)
#define DBGMCU_CIDR2_PREAMBLE_Msk \
    (0xFFUL << DBGMCU_CIDR2_PREAMBLE_Pos) /*!< 0x000000FF */
#define DBGMCU_CIDR2_PREAMBLE DBGMCU_CIDR2_PREAMBLE_Msk

/********************  Bit definition for DBGMCU_CIDR3 register  ************/
#define DBGMCU_CIDR3_PREAMBLE_Pos (0U)
#define DBGMCU_CIDR3_PREAMBLE_Msk \
    (0xFFUL << DBGMCU_CIDR3_PREAMBLE_Pos) /*!< 0x000000FF */
#define DBGMCU_CIDR3_PREAMBLE DBGMCU_CIDR3_PREAMBLE_Msk
/******************************************************************************/
/*                                                                            */
/*                           DMA Controller (DMA)                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_PRIVCFGR register  ****************/
#define DMA_PRIVCFGR_PRIV0_Pos (0U)
#define DMA_PRIVCFGR_PRIV0_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV0_Pos) /*!< 0x00000001 */
#define DMA_PRIVCFGR_PRIV0 \
    DMA_PRIVCFGR_PRIV0_Msk /*!< Privileged State of Channel 0  */
#define DMA_PRIVCFGR_PRIV1_Pos (1U)
#define DMA_PRIVCFGR_PRIV1_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV1_Pos) /*!< 0x00000002 */
#define DMA_PRIVCFGR_PRIV1 \
    DMA_PRIVCFGR_PRIV1_Msk /*!< Privileged State of Channel 1  */
#define DMA_PRIVCFGR_PRIV2_Pos (2U)
#define DMA_PRIVCFGR_PRIV2_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV2_Pos) /*!< 0x00000004 */
#define DMA_PRIVCFGR_PRIV2 \
    DMA_PRIVCFGR_PRIV2_Msk /*!< Privileged State of Channel 2  */
#define DMA_PRIVCFGR_PRIV3_Pos (3U)
#define DMA_PRIVCFGR_PRIV3_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV3_Pos) /*!< 0x00000008 */
#define DMA_PRIVCFGR_PRIV3 \
    DMA_PRIVCFGR_PRIV3_Msk /*!< Privileged State of Channel 3  */
#define DMA_PRIVCFGR_PRIV4_Pos (4U)
#define DMA_PRIVCFGR_PRIV4_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV4_Pos) /*!< 0x00000010 */
#define DMA_PRIVCFGR_PRIV4 \
    DMA_PRIVCFGR_PRIV4_Msk /*!< Privileged State of Channel 4  */
#define DMA_PRIVCFGR_PRIV5_Pos (5U)
#define DMA_PRIVCFGR_PRIV5_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV5_Pos) /*!< 0x00000020 */
#define DMA_PRIVCFGR_PRIV5 \
    DMA_PRIVCFGR_PRIV5_Msk /*!< Privileged State of Channel 5  */
#define DMA_PRIVCFGR_PRIV6_Pos (6U)
#define DMA_PRIVCFGR_PRIV6_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV6_Pos) /*!< 0x00000040 */
#define DMA_PRIVCFGR_PRIV6 \
    DMA_PRIVCFGR_PRIV6_Msk /*!< Privileged State of Channel 6  */
#define DMA_PRIVCFGR_PRIV7_Pos (7U)
#define DMA_PRIVCFGR_PRIV7_Msk \
    (0x1UL << DMA_PRIVCFGR_PRIV7_Pos) /*!< 0x00000080 */
#define DMA_PRIVCFGR_PRIV7 \
    DMA_PRIVCFGR_PRIV7_Msk /*!< Privileged State of Channel 7  */

/*******************  Bit definition for DMA_MISR register  ****************/
#define DMA_MISR_MIS0_Pos (0U)
#define DMA_MISR_MIS0_Msk (0x1UL << DMA_MISR_MIS0_Pos) /*!< 0x00000001 */
#define DMA_MISR_MIS0 \
    DMA_MISR_MIS0_Msk /*!< Masked Interrupt State of Non-Secure Channel 0  */
#define DMA_MISR_MIS1_Pos (1U)
#define DMA_MISR_MIS1_Msk (0x1UL << DMA_MISR_MIS1_Pos) /*!< 0x00000002 */
#define DMA_MISR_MIS1 \
    DMA_MISR_MIS1_Msk /*!< Masked Interrupt State of Non-Secure Channel 1  */
#define DMA_MISR_MIS2_Pos (2U)
#define DMA_MISR_MIS2_Msk (0x1UL << DMA_MISR_MIS2_Pos) /*!< 0x00000004 */
#define DMA_MISR_MIS2 \
    DMA_MISR_MIS2_Msk /*!< Masked Interrupt State of Non-Secure Channel 2  */
#define DMA_MISR_MIS3_Pos (3U)
#define DMA_MISR_MIS3_Msk (0x1UL << DMA_MISR_MIS3_Pos) /*!< 0x00000008 */
#define DMA_MISR_MIS3 \
    DMA_MISR_MIS3_Msk /*!< Masked Interrupt State of Non-Secure Channel 3  */
#define DMA_MISR_MIS4_Pos (4U)
#define DMA_MISR_MIS4_Msk (0x1UL << DMA_MISR_MIS4_Pos) /*!< 0x00000010 */
#define DMA_MISR_MIS4 \
    DMA_MISR_MIS4_Msk /*!< Masked Interrupt State of Non-Secure Channel 4  */
#define DMA_MISR_MIS5_Pos (5U)
#define DMA_MISR_MIS5_Msk (0x1UL << DMA_MISR_MIS5_Pos) /*!< 0x00000020 */
#define DMA_MISR_MIS5 \
    DMA_MISR_MIS5_Msk /*!< Masked Interrupt State of Non-Secure Channel 5  */
#define DMA_MISR_MIS6_Pos (6U)
#define DMA_MISR_MIS6_Msk (0x1UL << DMA_MISR_MIS6_Pos) /*!< 0x00000040 */
#define DMA_MISR_MIS6 \
    DMA_MISR_MIS6_Msk /*!< Masked Interrupt State of Non-Secure Channel 6  */
#define DMA_MISR_MIS7_Pos (7U)
#define DMA_MISR_MIS7_Msk (0x1UL << DMA_MISR_MIS7_Pos) /*!< 0x00000080 */
#define DMA_MISR_MIS7 \
    DMA_MISR_MIS7_Msk /*!< Masked Interrupt State of Non-Secure Channel 7  */

/*******************  Bit definition for DMA_CLBAR register  ****************/
#define DMA_CLBAR_LBA_Pos (16U)
#define DMA_CLBAR_LBA_Msk (0xFFFFUL << DMA_CLBAR_LBA_Pos) /*!< 0xFFFF0000 */
#define DMA_CLBAR_LBA \
    DMA_CLBAR_LBA_Msk /*!< Linked-list Base Address of DMA channel x */

/*******************  Bit definition for DMA_CFCR register  *******************/
#define DMA_CFCR_TCF_Pos (8U)
#define DMA_CFCR_TCF_Msk (0x1UL << DMA_CFCR_TCF_Pos) /*!< 0x00000100 */
#define DMA_CFCR_TCF \
    DMA_CFCR_TCF_Msk /*!< Transfer complete flag clear             */
#define DMA_CFCR_HTF_Pos (9U)
#define DMA_CFCR_HTF_Msk (0x1UL << DMA_CFCR_HTF_Pos) /*!< 0x00000200 */
#define DMA_CFCR_HTF \
    DMA_CFCR_HTF_Msk /*!< Half transfer complete flag clear        */
#define DMA_CFCR_DTEF_Pos (10U)
#define DMA_CFCR_DTEF_Msk (0x1UL << DMA_CFCR_DTEF_Pos) /*!< 0x00000400 */
#define DMA_CFCR_DTEF \
    DMA_CFCR_DTEF_Msk /*!< Data transfer error flag clear           */
#define DMA_CFCR_ULEF_Pos (11U)
#define DMA_CFCR_ULEF_Msk (0x1UL << DMA_CFCR_ULEF_Pos) /*!< 0x00000800 */
#define DMA_CFCR_ULEF \
    DMA_CFCR_ULEF_Msk /*!< Update linked-list item error flag clear */
#define DMA_CFCR_USEF_Pos (12U)
#define DMA_CFCR_USEF_Msk (0x1UL << DMA_CFCR_USEF_Pos) /*!< 0x00001000 */
#define DMA_CFCR_USEF \
    DMA_CFCR_USEF_Msk /*!< User setting error flag clear            */
#define DMA_CFCR_SUSPF_Pos (13U)
#define DMA_CFCR_SUSPF_Msk (0x1UL << DMA_CFCR_SUSPF_Pos) /*!< 0x00002000 */
#define DMA_CFCR_SUSPF \
    DMA_CFCR_SUSPF_Msk /*!< Completed suspension flag clear          */
#define DMA_CFCR_TOF_Pos (14U)
#define DMA_CFCR_TOF_Msk (0x1UL << DMA_CFCR_TOF_Pos) /*!< 0x00004000 */
#define DMA_CFCR_TOF \
    DMA_CFCR_TOF_Msk /*!< Trigger overrun flag clear               */

/*******************  Bit definition for DMA_CSR register  *******************/
#define DMA_CSR_IDLEF_Pos (0U)
#define DMA_CSR_IDLEF_Msk (0x1UL << DMA_CSR_IDLEF_Pos) /*!< 0x00000001 */
#define DMA_CSR_IDLEF \
    DMA_CSR_IDLEF_Msk /*!< Idle flag                          */
#define DMA_CSR_TCF_Pos (8U)
#define DMA_CSR_TCF_Msk (0x1UL << DMA_CSR_TCF_Pos) /*!< 0x00000100 */
#define DMA_CSR_TCF DMA_CSR_TCF_Msk /*!< Transfer complete flag             */
#define DMA_CSR_HTF_Pos (9U)
#define DMA_CSR_HTF_Msk (0x1UL << DMA_CSR_HTF_Pos) /*!< 0x00000200 */
#define DMA_CSR_HTF DMA_CSR_HTF_Msk /*!< Half transfer complete flag        */
#define DMA_CSR_DTEF_Pos (10U)
#define DMA_CSR_DTEF_Msk (0x1UL << DMA_CSR_DTEF_Pos) /*!< 0x00000400 */
#define DMA_CSR_DTEF DMA_CSR_DTEF_Msk /*!< Data transfer error flag           */
#define DMA_CSR_ULEF_Pos (11U)
#define DMA_CSR_ULEF_Msk (0x1UL << DMA_CSR_ULEF_Pos) /*!< 0x00000800 */
#define DMA_CSR_ULEF DMA_CSR_ULEF_Msk /*!< Update linked-list item error flag */
#define DMA_CSR_USEF_Pos (12U)
#define DMA_CSR_USEF_Msk (0x1UL << DMA_CSR_USEF_Pos) /*!< 0x00001000 */
#define DMA_CSR_USEF DMA_CSR_USEF_Msk /*!< User setting error flag            */
#define DMA_CSR_SUSPF_Pos (13U)
#define DMA_CSR_SUSPF_Msk (0x1UL << DMA_CSR_SUSPF_Pos) /*!< 0x00002000 */
#define DMA_CSR_SUSPF \
    DMA_CSR_SUSPF_Msk /*!< User setting error flag            */
#define DMA_CSR_TOF_Pos (14U)
#define DMA_CSR_TOF_Msk (0x1UL << DMA_CSR_TOF_Pos) /*!< 0x00004000 */
#define DMA_CSR_TOF DMA_CSR_TOF_Msk /*!< Trigger overrun flag               */
#define DMA_CSR_FIFOL_Pos (16U)
#define DMA_CSR_FIFOL_Msk (0xFFUL << DMA_CSR_FIFOL_Pos) /*!< 0x00FF0000 */
#define DMA_CSR_FIFOL \
    DMA_CSR_FIFOL_Msk /*!< Monitored FIFO level in bytes      */

/*******************  Bit definition for DMA_CCR register  ********************/
#define DMA_CCR_EN_Pos (0U)
#define DMA_CCR_EN_Msk (0x1UL << DMA_CCR_EN_Pos) /*!< 0x00000001 */
#define DMA_CCR_EN \
    DMA_CCR_EN_Msk /*!< Channel enable                                 */
#define DMA_CCR_RESET_Pos (1U)
#define DMA_CCR_RESET_Msk (0x1UL << DMA_CCR_RESET_Pos) /*!< 0x00000002 */
#define DMA_CCR_RESET \
    DMA_CCR_RESET_Msk /*!< Channel reset                                  */
#define DMA_CCR_SUSP_Pos (2U)
#define DMA_CCR_SUSP_Msk (0x1UL << DMA_CCR_SUSP_Pos) /*!< 0x00000004 */
#define DMA_CCR_SUSP \
    DMA_CCR_SUSP_Msk /*!< Channel suspend                                */
#define DMA_CCR_TCIE_Pos (8U)
#define DMA_CCR_TCIE_Msk (0x1UL << DMA_CCR_TCIE_Pos) /*!< 0x00000100 */
#define DMA_CCR_TCIE \
    DMA_CCR_TCIE_Msk /*!< Transfer complete interrupt enable             */
#define DMA_CCR_HTIE_Pos (9U)
#define DMA_CCR_HTIE_Msk (0x1UL << DMA_CCR_HTIE_Pos) /*!< 0x00000200 */
#define DMA_CCR_HTIE \
    DMA_CCR_HTIE_Msk /*!< Half transfer complete interrupt enable        */
#define DMA_CCR_DTEIE_Pos (10U)
#define DMA_CCR_DTEIE_Msk (0x1UL << DMA_CCR_DTEIE_Pos) /*!< 0x00000400 */
#define DMA_CCR_DTEIE \
    DMA_CCR_DTEIE_Msk /*!< Data transfer error interrupt enable           */
#define DMA_CCR_ULEIE_Pos (11U)
#define DMA_CCR_ULEIE_Msk (0x1UL << DMA_CCR_ULEIE_Pos) /*!< 0x00000800 */
#define DMA_CCR_ULEIE \
    DMA_CCR_ULEIE_Msk /*!< Update linked-list item error interrupt enable */
#define DMA_CCR_USEIE_Pos (12U)
#define DMA_CCR_USEIE_Msk (0x1UL << DMA_CCR_USEIE_Pos) /*!< 0x00001000 */
#define DMA_CCR_USEIE \
    DMA_CCR_USEIE_Msk /*!< User setting error interrupt enable            */
#define DMA_CCR_SUSPIE_Pos (13U)
#define DMA_CCR_SUSPIE_Msk (0x1UL << DMA_CCR_SUSPIE_Pos) /*!< 0x00002000 */
#define DMA_CCR_SUSPIE \
    DMA_CCR_SUSPIE_Msk /*!< Completed suspension interrupt enable          */
#define DMA_CCR_TOIE_Pos (14U)
#define DMA_CCR_TOIE_Msk (0x1UL << DMA_CCR_TOIE_Pos) /*!< 0x00004000 */
#define DMA_CCR_TOIE \
    DMA_CCR_TOIE_Msk /*!< Trigger overrun interrupt enable               */
#define DMA_CCR_LSM_Pos (16U)
#define DMA_CCR_LSM_Msk (0x1UL << DMA_CCR_LSM_Pos) /*!< 0x00010000 */
#define DMA_CCR_LSM \
    DMA_CCR_LSM_Msk /*!< Link step mode                                 */
#define DMA_CCR_LAP_Pos (17U)
#define DMA_CCR_LAP_Msk (0x1UL << DMA_CCR_LAP_Pos) /*!< 0x00020000 */
#define DMA_CCR_LAP \
    DMA_CCR_LAP_Msk /*!< Linked-list allocated port                     */
#define DMA_CCR_PRIO_Pos (22U)
#define DMA_CCR_PRIO_Msk (0x3UL << DMA_CCR_PRIO_Pos) /*!< 0x00C00000 */
#define DMA_CCR_PRIO \
    DMA_CCR_PRIO_Msk /*!< Priority level                                 */
#define DMA_CCR_PRIO_0 (0x1UL << DMA_CCR_PRIO_Pos) /*!< 0x00400000 */
#define DMA_CCR_PRIO_1 (0x2UL << DMA_CCR_PRIO_Pos) /*!< 0x00800000 */

/*******************  Bit definition for DMA_CTR1 register  *******************/
#define DMA_CTR1_SDW_LOG2_Pos (0U)
#define DMA_CTR1_SDW_LOG2_Msk \
    (0x3UL << DMA_CTR1_SDW_LOG2_Pos) /*!< 0x00000003 */
#define DMA_CTR1_SDW_LOG2 \
    DMA_CTR1_SDW_LOG2_Msk /*!< Binary logarithm of the source data width of a burst                    */
#define DMA_CTR1_SDW_LOG2_0 (0x1UL << DMA_CTR1_SDW_LOG2_Pos) /*!< Bit 0 */
#define DMA_CTR1_SDW_LOG2_1 (0x2UL << DMA_CTR1_SDW_LOG2_Pos) /*!< Bit 1 */
#define DMA_CTR1_SINC_Pos (3U)
#define DMA_CTR1_SINC_Msk (0x1UL << DMA_CTR1_SINC_Pos) /*!< 0x00000008 */
#define DMA_CTR1_SINC \
    DMA_CTR1_SINC_Msk /*!< Source incrementing burst                                               */
#define DMA_CTR1_SBL_1_Pos (4U)
#define DMA_CTR1_SBL_1_Msk (0x3FUL << DMA_CTR1_SBL_1_Pos) /*!< 0x000003F0 */
#define DMA_CTR1_SBL_1 \
    DMA_CTR1_SBL_1_Msk /*!< Source burst length minus 1                                             */
#define DMA_CTR1_PAM_Pos (11U)
#define DMA_CTR1_PAM_Msk (0x3UL << DMA_CTR1_PAM_Pos) /*!< 0x0001800 */
#define DMA_CTR1_PAM \
    DMA_CTR1_PAM_Msk /*!< Padding / alignment mode                                                */
#define DMA_CTR1_PAM_0 (0x1UL << DMA_CTR1_PAM_Pos) /*!< Bit 0 */
#define DMA_CTR1_PAM_1 (0x2UL << DMA_CTR1_PAM_Pos) /*!< Bit 1 */
#define DMA_CTR1_SBX_Pos (13U)
#define DMA_CTR1_SBX_Msk (0x1UL << DMA_CTR1_SBX_Pos) /*!< 0x00002000 */
#define DMA_CTR1_SBX \
    DMA_CTR1_SBX_Msk /*!< Source byte exchange within the unaligned half-word of each source word */
#define DMA_CTR1_SAP_Pos (14U)
#define DMA_CTR1_SAP_Msk (0x1UL << DMA_CTR1_SAP_Pos) /*!< 0x00004000 */
#define DMA_CTR1_SAP \
    DMA_CTR1_SAP_Msk /*!< Source allocated port                                                   */
#define DMA_CTR1_DDW_LOG2_Pos (16U)
#define DMA_CTR1_DDW_LOG2_Msk \
    (0x3UL << DMA_CTR1_DDW_LOG2_Pos) /*!< 0x00030000 */
#define DMA_CTR1_DDW_LOG2 \
    DMA_CTR1_DDW_LOG2_Msk /*!< Binary logarithm of the destination data width of a burst               */
#define DMA_CTR1_DDW_LOG2_0 (0x1UL << DMA_CTR1_DDW_LOG2_Pos) /*!< Bit 0 */
#define DMA_CTR1_DDW_LOG2_1 (0x2UL << DMA_CTR1_DDW_LOG2_Pos) /*!< Bit 1 */
#define DMA_CTR1_DINC_Pos (19U)
#define DMA_CTR1_DINC_Msk (0x1UL << DMA_CTR1_DINC_Pos) /*!< 0x00080000 */
#define DMA_CTR1_DINC \
    DMA_CTR1_DINC_Msk /*!< Destination incrementing burst                                          */
#define DMA_CTR1_DBL_1_Pos (20U)
#define DMA_CTR1_DBL_1_Msk (0x3FUL << DMA_CTR1_DBL_1_Pos) /*!< 0x03F00000 */
#define DMA_CTR1_DBL_1 \
    DMA_CTR1_DBL_1_Msk /*!< Destination burst length minus 1                                        */
#define DMA_CTR1_DBX_Pos (26U)
#define DMA_CTR1_DBX_Msk (0x1UL << DMA_CTR1_DBX_Pos) /*!< 0x04000000 */
#define DMA_CTR1_DBX \
    DMA_CTR1_DBX_Msk /*!< Destination byte exchange                                               */
#define DMA_CTR1_DHX_Pos (27U)
#define DMA_CTR1_DHX_Msk (0x1UL << DMA_CTR1_DHX_Pos) /*!< 0x08000000 */
#define DMA_CTR1_DHX \
    DMA_CTR1_DHX_Msk /*!< Destination half-word exchange                                          */
#define DMA_CTR1_DAP_Pos (30U)
#define DMA_CTR1_DAP_Msk (0x1UL << DMA_CTR1_DAP_Pos) /*!< 0x40000000 */
#define DMA_CTR1_DAP \
    DMA_CTR1_DAP_Msk /*!< Destination allocated port                                              */

/******************  Bit definition for DMA_CTR2 register  *******************/
#define DMA_CTR2_REQSEL_Pos (0U)
#define DMA_CTR2_REQSEL_Msk (0xFFUL << DMA_CTR2_REQSEL_Pos) /*!< 0x000000FF */
#define DMA_CTR2_REQSEL \
    DMA_CTR2_REQSEL_Msk /*!< DMA hardware request selection */
#define DMA_CTR2_SWREQ_Pos (9U)
#define DMA_CTR2_SWREQ_Msk (0x1UL << DMA_CTR2_SWREQ_Pos) /*!< 0x00000200 */
#define DMA_CTR2_SWREQ DMA_CTR2_SWREQ_Msk /*!< Software request               */
#define DMA_CTR2_DREQ_Pos (10U)
#define DMA_CTR2_DREQ_Msk (0x1UL << DMA_CTR2_DREQ_Pos) /*!< 0x00000400 */
#define DMA_CTR2_DREQ DMA_CTR2_DREQ_Msk /*!< Destination hardware request   */
#define DMA_CTR2_BREQ_Pos (11U)
#define DMA_CTR2_BREQ_Msk (0x1UL << DMA_CTR2_BREQ_Pos) /*!< 0x00000800 */
#define DMA_CTR2_BREQ DMA_CTR2_BREQ_Msk /*!< Block hardware request         */
#define DMA_CTR2_PFREQ_Pos (12U)
#define DMA_CTR2_PFREQ_Msk (0x1U << DMA_CTR2_PFREQ_Pos) /*!< 0x00001000 */
#define DMA_CTR2_PFREQ DMA_CTR2_PFREQ_Msk /*!< Block hardware request */
#define DMA_CTR2_TRIGM_Pos (14U)
#define DMA_CTR2_TRIGM_Msk (0x3UL << DMA_CTR2_TRIGM_Pos) /*!< 0x0000C000 */
#define DMA_CTR2_TRIGM DMA_CTR2_TRIGM_Msk /*!< Trigger mode                   */
#define DMA_CTR2_TRIGM_0 (0x1UL << DMA_CTR2_TRIGM_Pos) /*!< Bit 0 */
#define DMA_CTR2_TRIGM_1 (0x2UL << DMA_CTR2_TRIGM_Pos) /*!< Bit 1 */
#define DMA_CTR2_TRIGSEL_Pos (16U)
#define DMA_CTR2_TRIGSEL_Msk (0x3FUL << DMA_CTR2_TRIGSEL_Pos) /*!< 0x003F0000 */
#define DMA_CTR2_TRIGSEL \
    DMA_CTR2_TRIGSEL_Msk /*!< Trigger event input selection  */
#define DMA_CTR2_TRIGPOL_Pos (24U)
#define DMA_CTR2_TRIGPOL_Msk (0x3UL << DMA_CTR2_TRIGPOL_Pos) /*!< 0x03000000 */
#define DMA_CTR2_TRIGPOL \
    DMA_CTR2_TRIGPOL_Msk /*!< Trigger event polarity         */
#define DMA_CTR2_TRIGPOL_0 (0x1UL << DMA_CTR2_TRIGPOL_Pos) /*!< Bit 0 */
#define DMA_CTR2_TRIGPOL_1 (0x2UL << DMA_CTR2_TRIGPOL_Pos) /*!< Bit 1 */
#define DMA_CTR2_TCEM_Pos (30U)
#define DMA_CTR2_TCEM_Msk (0x3UL << DMA_CTR2_TCEM_Pos) /*!< 0xC0000000 */
#define DMA_CTR2_TCEM DMA_CTR2_TCEM_Msk /*!< Transfer complete event mode   */
#define DMA_CTR2_TCEM_0 (0x1UL << DMA_CTR2_TCEM_Pos) /*!< Bit 0 */
#define DMA_CTR2_TCEM_1 (0x2UL << DMA_CTR2_TCEM_Pos) /*!< Bit 1 */

/******************  Bit definition for DMA_CBR1 register  *******************/
#define DMA_CBR1_BNDT_Pos (0U)
#define DMA_CBR1_BNDT_Msk (0xFFFFUL << DMA_CBR1_BNDT_Pos) /*!< 0x0000FFFF */
#define DMA_CBR1_BNDT \
    DMA_CBR1_BNDT_Msk /*!< Block number of data bytes to transfer from the source */
#define DMA_CBR1_BRC_Pos (16U)
#define DMA_CBR1_BRC_Msk (0x7FFUL << DMA_CBR1_BRC_Pos) /*!< 0x07FF0000 */
#define DMA_CBR1_BRC \
    DMA_CBR1_BRC_Msk /*!< Block repeat counter                                   */
#define DMA_CBR1_SDEC_Pos (28U)
#define DMA_CBR1_SDEC_Msk (0x1UL << DMA_CBR1_SDEC_Pos) /*!< 0x10000000 */
#define DMA_CBR1_SDEC \
    DMA_CBR1_SDEC_Msk /*!< Source address decrement                               */
#define DMA_CBR1_DDEC_Pos (29U)
#define DMA_CBR1_DDEC_Msk (0x1UL << DMA_CBR1_DDEC_Pos) /*!< 0x20000000 */
#define DMA_CBR1_DDEC \
    DMA_CBR1_DDEC_Msk /*!< Destination address decrement                          */
#define DMA_CBR1_BRSDEC_Pos (30U)
#define DMA_CBR1_BRSDEC_Msk (0x1UL << DMA_CBR1_BRSDEC_Pos) /*!< 0x40000000 */
#define DMA_CBR1_BRSDEC \
    DMA_CBR1_BRSDEC_Msk /*!< Block repeat source address decrement                  */
#define DMA_CBR1_BRDDEC_Pos (31U)
#define DMA_CBR1_BRDDEC_Msk (0x1UL << DMA_CBR1_BRDDEC_Pos) /*!< 0x80000000 */
#define DMA_CBR1_BRDDEC \
    DMA_CBR1_BRDDEC_Msk /*!< Block repeat destination address decrement             */

/******************  Bit definition for DMA_CSAR register  ********************/
#define DMA_CSAR_SA_Pos (0U)
#define DMA_CSAR_SA_Msk (0xFFFFFFFFUL << DMA_CSAR_SA_Pos) /*!< 0xFFFFFFFF */
#define DMA_CSAR_SA DMA_CSAR_SA_Msk                       /*!< Source Address */

/******************  Bit definition for DMA_CDAR register  *******************/
#define DMA_CDAR_DA_Pos (0U)
#define DMA_CDAR_DA_Msk (0xFFFFFFFFUL << DMA_CDAR_DA_Pos) /*!< 0xFFFFFFFF */
#define DMA_CDAR_DA DMA_CDAR_DA_Msk /*!< Destination address */

/******************  Bit definition for DMA_CTR3 register  *******************/
#define DMA_CTR3_SAO_Pos (0U)
#define DMA_CTR3_SAO_Msk (0x1FFFUL << DMA_CTR3_SAO_Pos) /*!< 0x00001FFF */
#define DMA_CTR3_SAO \
    DMA_CTR3_SAO_Msk /*!< Source address offset increment      */
#define DMA_CTR3_DAO_Pos (16U)
#define DMA_CTR3_DAO_Msk (0x1FFFUL << DMA_CTR3_DAO_Pos) /*!< 0x1FFF0000 */
#define DMA_CTR3_DAO \
    DMA_CTR3_DAO_Msk /*!< Destination address offset increment */

/******************  Bit definition for DMA_CBR2 register  *******************/
#define DMA_CBR2_BRSAO_Pos (0U)
#define DMA_CBR2_BRSAO_Msk (0xFFFFUL << DMA_CBR2_BRSAO_Pos) /*!< 0x0000FFFF */
#define DMA_CBR2_BRSAO \
    DMA_CBR2_BRSAO_Msk /*!< Block repeated source address offset      */
#define DMA_CBR2_BRDAO_Pos (16U)
#define DMA_CBR2_BRDAO_Msk (0xFFFFUL << DMA_CBR2_BRDAO_Pos) /*!< 0xFFFF0000 */
#define DMA_CBR2_BRDAO \
    DMA_CBR2_BRDAO_Msk /*!< Block repeated destination address offset */

/******************  Bit definition for DMA_CLLR register  *******************/
#define DMA_CLLR_LA_Pos (2U)
#define DMA_CLLR_LA_Msk (0x3FFFUL << DMA_CLLR_LA_Pos) /*!< 0x0000FFFC */
#define DMA_CLLR_LA \
    DMA_CLLR_LA_Msk /*!< Pointer to the next linked-list data structure */
#define DMA_CLLR_ULL_Pos (16U)
#define DMA_CLLR_ULL_Msk (0x1UL << DMA_CLLR_ULL_Pos) /*!< 0x00010000 */
#define DMA_CLLR_ULL \
    DMA_CLLR_ULL_Msk /*!< Update link address register from memory       */
#define DMA_CLLR_UB2_Pos (25U)
#define DMA_CLLR_UB2_Msk (0x1UL << DMA_CLLR_UB2_Pos) /*!< 0x02000000 */
#define DMA_CLLR_UB2 \
    DMA_CLLR_UB2_Msk /*!< Update block register 2 from memory            */
#define DMA_CLLR_UT3_Pos (26U)
#define DMA_CLLR_UT3_Msk (0x1UL << DMA_CLLR_UT3_Pos) /*!< 0x04000000 */
#define DMA_CLLR_UT3 \
    DMA_CLLR_UT3_Msk /*!< Update transfer register 3 from SRAM           */
#define DMA_CLLR_UDA_Pos (27U)
#define DMA_CLLR_UDA_Msk (0x1UL << DMA_CLLR_UDA_Pos) /*!< 0x08000000 */
#define DMA_CLLR_UDA \
    DMA_CLLR_UDA_Msk /*!< Update destination address register from SRAM  */
#define DMA_CLLR_USA_Pos (28U)
#define DMA_CLLR_USA_Msk (0x1UL << DMA_CLLR_USA_Pos) /*!< 0x10000000 */
#define DMA_CLLR_USA \
    DMA_CLLR_USA_Msk /*!< Update source address register from SRAM       */
#define DMA_CLLR_UB1_Pos (29U)
#define DMA_CLLR_UB1_Msk (0x1UL << DMA_CLLR_UB1_Pos) /*!< 0x20000000 */
#define DMA_CLLR_UB1 \
    DMA_CLLR_UB1_Msk /*!< Update block register 1 from SRAM              */
#define DMA_CLLR_UT2_Pos (30U)
#define DMA_CLLR_UT2_Msk (0x1UL << DMA_CLLR_UT2_Pos) /*!< 0x40000000 */
#define DMA_CLLR_UT2 \
    DMA_CLLR_UT2_Msk /*!< Update transfer register 2 from SRAM           */
#define DMA_CLLR_UT1_Pos (31U)
#define DMA_CLLR_UT1_Msk (0x1UL << DMA_CLLR_UT1_Pos) /*!< 0x80000000 */
#define DMA_CLLR_UT1 \
    DMA_CLLR_UT1_Msk /*!< Update transfer register 1 from SRAM           */

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for EXTI_RTSR1 register  ******************/
#define EXTI_RTSR1_RT0_Pos (0U)
#define EXTI_RTSR1_RT0_Msk (0x1UL << EXTI_RTSR1_RT0_Pos) /*!< 0x00000001 */
#define EXTI_RTSR1_RT0 \
    EXTI_RTSR1_RT0_Msk /*!< Rising trigger configuration for input line 0 */
#define EXTI_RTSR1_RT1_Pos (1U)
#define EXTI_RTSR1_RT1_Msk (0x1UL << EXTI_RTSR1_RT1_Pos) /*!< 0x00000002 */
#define EXTI_RTSR1_RT1 \
    EXTI_RTSR1_RT1_Msk /*!< Rising trigger configuration for input line 1 */
#define EXTI_RTSR1_RT2_Pos (2U)
#define EXTI_RTSR1_RT2_Msk (0x1UL << EXTI_RTSR1_RT2_Pos) /*!< 0x00000004 */
#define EXTI_RTSR1_RT2 \
    EXTI_RTSR1_RT2_Msk /*!< Rising trigger configuration for input line 2 */
#define EXTI_RTSR1_RT3_Pos (3U)
#define EXTI_RTSR1_RT3_Msk (0x1UL << EXTI_RTSR1_RT3_Pos) /*!< 0x00000008 */
#define EXTI_RTSR1_RT3 \
    EXTI_RTSR1_RT3_Msk /*!< Rising trigger configuration for input line 3 */
#define EXTI_RTSR1_RT4_Pos (4U)
#define EXTI_RTSR1_RT4_Msk (0x1UL << EXTI_RTSR1_RT4_Pos) /*!< 0x00000010 */
#define EXTI_RTSR1_RT4 \
    EXTI_RTSR1_RT4_Msk /*!< Rising trigger configuration for input line 4 */
#define EXTI_RTSR1_RT5_Pos (5U)
#define EXTI_RTSR1_RT5_Msk (0x1UL << EXTI_RTSR1_RT5_Pos) /*!< 0x00000020 */
#define EXTI_RTSR1_RT5 \
    EXTI_RTSR1_RT5_Msk /*!< Rising trigger configuration for input line 5 */
#define EXTI_RTSR1_RT6_Pos (6U)
#define EXTI_RTSR1_RT6_Msk (0x1UL << EXTI_RTSR1_RT6_Pos) /*!< 0x00000040 */
#define EXTI_RTSR1_RT6 \
    EXTI_RTSR1_RT6_Msk /*!< Rising trigger configuration for input line 6 */
#define EXTI_RTSR1_RT7_Pos (7U)
#define EXTI_RTSR1_RT7_Msk (0x1UL << EXTI_RTSR1_RT7_Pos) /*!< 0x00000080 */
#define EXTI_RTSR1_RT7 \
    EXTI_RTSR1_RT7_Msk /*!< Rising trigger configuration for input line 7 */
#define EXTI_RTSR1_RT8_Pos (8U)
#define EXTI_RTSR1_RT8_Msk (0x1UL << EXTI_RTSR1_RT8_Pos) /*!< 0x00000100 */
#define EXTI_RTSR1_RT8 \
    EXTI_RTSR1_RT8_Msk /*!< Rising trigger configuration for input line 8 */
#define EXTI_RTSR1_RT9_Pos (9U)
#define EXTI_RTSR1_RT9_Msk (0x1UL << EXTI_RTSR1_RT9_Pos) /*!< 0x00000200 */
#define EXTI_RTSR1_RT9 \
    EXTI_RTSR1_RT9_Msk /*!< Rising trigger configuration for input line 9 */
#define EXTI_RTSR1_RT10_Pos (10U)
#define EXTI_RTSR1_RT10_Msk (0x1UL << EXTI_RTSR1_RT10_Pos) /*!< 0x00000400 */
#define EXTI_RTSR1_RT10 \
    EXTI_RTSR1_RT10_Msk /*!< Rising trigger configuration for input line 10 */
#define EXTI_RTSR1_RT11_Pos (11U)
#define EXTI_RTSR1_RT11_Msk (0x1UL << EXTI_RTSR1_RT11_Pos) /*!< 0x00000800 */
#define EXTI_RTSR1_RT11 \
    EXTI_RTSR1_RT11_Msk /*!< Rising trigger configuration for input line 11 */
#define EXTI_RTSR1_RT12_Pos (12U)
#define EXTI_RTSR1_RT12_Msk (0x1UL << EXTI_RTSR1_RT12_Pos) /*!< 0x00001000 */
#define EXTI_RTSR1_RT12 \
    EXTI_RTSR1_RT12_Msk /*!< Rising trigger configuration for input line 12 */
#define EXTI_RTSR1_RT13_Pos (13U)
#define EXTI_RTSR1_RT13_Msk (0x1UL << EXTI_RTSR1_RT13_Pos) /*!< 0x00002000 */
#define EXTI_RTSR1_RT13 \
    EXTI_RTSR1_RT13_Msk /*!< Rising trigger configuration for input line 13 */
#define EXTI_RTSR1_RT14_Pos (14U)
#define EXTI_RTSR1_RT14_Msk (0x1UL << EXTI_RTSR1_RT14_Pos) /*!< 0x00004000 */
#define EXTI_RTSR1_RT14 \
    EXTI_RTSR1_RT14_Msk /*!< Rising trigger configuration for input line 14 */
#define EXTI_RTSR1_RT15_Pos (15U)
#define EXTI_RTSR1_RT15_Msk (0x1UL << EXTI_RTSR1_RT15_Pos) /*!< 0x00008000 */
#define EXTI_RTSR1_RT15 \
    EXTI_RTSR1_RT15_Msk /*!< Rising trigger configuration for input line 15 */
#define EXTI_RTSR1_RT16_Pos (16U)
#define EXTI_RTSR1_RT16_Msk (0x1UL << EXTI_RTSR1_RT16_Pos) /*!< 0x00010000 */
#define EXTI_RTSR1_RT16 \
    EXTI_RTSR1_RT16_Msk /*!< Rising trigger configuration for input line 16 */

/******************  Bit definition for EXTI_FTSR1 register  ******************/
#define EXTI_FTSR1_FT0_Pos (0U)
#define EXTI_FTSR1_FT0_Msk (0x1UL << EXTI_FTSR1_FT0_Pos) /*!< 0x00000001 */
#define EXTI_FTSR1_FT0 \
    EXTI_FTSR1_FT0_Msk /*!< Falling trigger configuration for input line 0 */
#define EXTI_FTSR1_FT1_Pos (1U)
#define EXTI_FTSR1_FT1_Msk (0x1UL << EXTI_FTSR1_FT1_Pos) /*!< 0x00000002 */
#define EXTI_FTSR1_FT1 \
    EXTI_FTSR1_FT1_Msk /*!< Falling trigger configuration for input line 1 */
#define EXTI_FTSR1_FT2_Pos (2U)
#define EXTI_FTSR1_FT2_Msk (0x1UL << EXTI_FTSR1_FT2_Pos) /*!< 0x00000004 */
#define EXTI_FTSR1_FT2 \
    EXTI_FTSR1_FT2_Msk /*!< Falling trigger configuration for input line 2 */
#define EXTI_FTSR1_FT3_Pos (3U)
#define EXTI_FTSR1_FT3_Msk (0x1UL << EXTI_FTSR1_FT3_Pos) /*!< 0x00000008 */
#define EXTI_FTSR1_FT3 \
    EXTI_FTSR1_FT3_Msk /*!< Falling trigger configuration for input line 3 */
#define EXTI_FTSR1_FT4_Pos (4U)
#define EXTI_FTSR1_FT4_Msk (0x1UL << EXTI_FTSR1_FT4_Pos) /*!< 0x00000010 */
#define EXTI_FTSR1_FT4 \
    EXTI_FTSR1_FT4_Msk /*!< Falling trigger configuration for input line 4 */
#define EXTI_FTSR1_FT5_Pos (5U)
#define EXTI_FTSR1_FT5_Msk (0x1UL << EXTI_FTSR1_FT5_Pos) /*!< 0x00000020 */
#define EXTI_FTSR1_FT5 \
    EXTI_FTSR1_FT5_Msk /*!< Falling trigger configuration for input line 5 */
#define EXTI_FTSR1_FT6_Pos (6U)
#define EXTI_FTSR1_FT6_Msk (0x1UL << EXTI_FTSR1_FT6_Pos) /*!< 0x00000040 */
#define EXTI_FTSR1_FT6 \
    EXTI_FTSR1_FT6_Msk /*!< Falling trigger configuration for input line 6 */
#define EXTI_FTSR1_FT7_Pos (7U)
#define EXTI_FTSR1_FT7_Msk (0x1UL << EXTI_FTSR1_FT7_Pos) /*!< 0x00000080 */
#define EXTI_FTSR1_FT7 \
    EXTI_FTSR1_FT7_Msk /*!< Falling trigger configuration for input line 7 */
#define EXTI_FTSR1_FT8_Pos (8U)
#define EXTI_FTSR1_FT8_Msk (0x1UL << EXTI_FTSR1_FT8_Pos) /*!< 0x00000100 */
#define EXTI_FTSR1_FT8 \
    EXTI_FTSR1_FT8_Msk /*!< Falling trigger configuration for input line 8 */
#define EXTI_FTSR1_FT9_Pos (9U)
#define EXTI_FTSR1_FT9_Msk (0x1UL << EXTI_FTSR1_FT9_Pos) /*!< 0x00000200 */
#define EXTI_FTSR1_FT9 \
    EXTI_FTSR1_FT9_Msk /*!< Falling trigger configuration for input line 9 */
#define EXTI_FTSR1_FT10_Pos (10U)
#define EXTI_FTSR1_FT10_Msk (0x1UL << EXTI_FTSR1_FT10_Pos) /*!< 0x00000400 */
#define EXTI_FTSR1_FT10 \
    EXTI_FTSR1_FT10_Msk /*!< Falling trigger configuration for input line 10 */
#define EXTI_FTSR1_FT11_Pos (11U)
#define EXTI_FTSR1_FT11_Msk (0x1UL << EXTI_FTSR1_FT11_Pos) /*!< 0x00000800 */
#define EXTI_FTSR1_FT11 \
    EXTI_FTSR1_FT11_Msk /*!< Falling trigger configuration for input line 11 */
#define EXTI_FTSR1_FT12_Pos (12U)
#define EXTI_FTSR1_FT12_Msk (0x1UL << EXTI_FTSR1_FT12_Pos) /*!< 0x00001000 */
#define EXTI_FTSR1_FT12 \
    EXTI_FTSR1_FT12_Msk /*!< Falling trigger configuration for input line 12 */
#define EXTI_FTSR1_FT13_Pos (13U)
#define EXTI_FTSR1_FT13_Msk (0x1UL << EXTI_FTSR1_FT13_Pos) /*!< 0x00002000 */
#define EXTI_FTSR1_FT13 \
    EXTI_FTSR1_FT13_Msk /*!< Falling trigger configuration for input line 13 */
#define EXTI_FTSR1_FT14_Pos (14U)
#define EXTI_FTSR1_FT14_Msk (0x1UL << EXTI_FTSR1_FT14_Pos) /*!< 0x00004000 */
#define EXTI_FTSR1_FT14 \
    EXTI_FTSR1_FT14_Msk /*!< Falling trigger configuration for input line 14 */
#define EXTI_FTSR1_FT15_Pos (15U)
#define EXTI_FTSR1_FT15_Msk (0x1UL << EXTI_FTSR1_FT15_Pos) /*!< 0x00008000 */
#define EXTI_FTSR1_FT15 \
    EXTI_FTSR1_FT15_Msk /*!< Falling trigger configuration for input line 15 */
#define EXTI_FTSR1_FT16_Pos (16U)
#define EXTI_FTSR1_FT16_Msk (0x1UL << EXTI_FTSR1_FT16_Pos) /*!< 0x00010000 */
#define EXTI_FTSR1_FT16 \
    EXTI_FTSR1_FT16_Msk /*!< Falling trigger configuration for input line 16 */

/******************  Bit definition for EXTI_SWIER1 register  *****************/
#define EXTI_SWIER1_SWI0_Pos (0U)
#define EXTI_SWIER1_SWI0_Msk (0x1UL << EXTI_SWIER1_SWI0_Pos) /*!< 0x00000001 */
#define EXTI_SWIER1_SWI0 \
    EXTI_SWIER1_SWI0_Msk /*!< Software Interrupt on line 0 */
#define EXTI_SWIER1_SWI1_Pos (1U)
#define EXTI_SWIER1_SWI1_Msk (0x1UL << EXTI_SWIER1_SWI1_Pos) /*!< 0x00000002 */
#define EXTI_SWIER1_SWI1 \
    EXTI_SWIER1_SWI1_Msk /*!< Software Interrupt on line 1 */
#define EXTI_SWIER1_SWI2_Pos (2U)
#define EXTI_SWIER1_SWI2_Msk (0x1UL << EXTI_SWIER1_SWI2_Pos) /*!< 0x00000004 */
#define EXTI_SWIER1_SWI2 \
    EXTI_SWIER1_SWI2_Msk /*!< Software Interrupt on line 2 */
#define EXTI_SWIER1_SWI3_Pos (3U)
#define EXTI_SWIER1_SWI3_Msk (0x1UL << EXTI_SWIER1_SWI3_Pos) /*!< 0x00000008 */
#define EXTI_SWIER1_SWI3 \
    EXTI_SWIER1_SWI3_Msk /*!< Software Interrupt on line 3 */
#define EXTI_SWIER1_SWI4_Pos (4U)
#define EXTI_SWIER1_SWI4_Msk (0x1UL << EXTI_SWIER1_SWI4_Pos) /*!< 0x00000010 */
#define EXTI_SWIER1_SWI4 \
    EXTI_SWIER1_SWI4_Msk /*!< Software Interrupt on line 4 */
#define EXTI_SWIER1_SWI5_Pos (5U)
#define EXTI_SWIER1_SWI5_Msk (0x1UL << EXTI_SWIER1_SWI5_Pos) /*!< 0x00000020 */
#define EXTI_SWIER1_SWI5 \
    EXTI_SWIER1_SWI5_Msk /*!< Software Interrupt on line 5 */
#define EXTI_SWIER1_SWI6_Pos (6U)
#define EXTI_SWIER1_SWI6_Msk (0x1UL << EXTI_SWIER1_SWI6_Pos) /*!< 0x00000040 */
#define EXTI_SWIER1_SWI6 \
    EXTI_SWIER1_SWI6_Msk /*!< Software Interrupt on line 6 */
#define EXTI_SWIER1_SWI7_Pos (7U)
#define EXTI_SWIER1_SWI7_Msk (0x1UL << EXTI_SWIER1_SWI7_Pos) /*!< 0x00000080 */
#define EXTI_SWIER1_SWI7 \
    EXTI_SWIER1_SWI7_Msk /*!< Software Interrupt on line 7 */
#define EXTI_SWIER1_SWI8_Pos (8U)
#define EXTI_SWIER1_SWI8_Msk (0x1UL << EXTI_SWIER1_SWI8_Pos) /*!< 0x00000100 */
#define EXTI_SWIER1_SWI8 \
    EXTI_SWIER1_SWI8_Msk /*!< Software Interrupt on line 8 */
#define EXTI_SWIER1_SWI9_Pos (9U)
#define EXTI_SWIER1_SWI9_Msk (0x1UL << EXTI_SWIER1_SWI9_Pos) /*!< 0x00000200 */
#define EXTI_SWIER1_SWI9 \
    EXTI_SWIER1_SWI9_Msk /*!< Software Interrupt on line 9 */
#define EXTI_SWIER1_SWI10_Pos (10U)
#define EXTI_SWIER1_SWI10_Msk \
    (0x1UL << EXTI_SWIER1_SWI10_Pos) /*!< 0x00000400 */
#define EXTI_SWIER1_SWI10 \
    EXTI_SWIER1_SWI10_Msk /*!< Software Interrupt on line 10 */
#define EXTI_SWIER1_SWI11_Pos (11U)
#define EXTI_SWIER1_SWI11_Msk \
    (0x1UL << EXTI_SWIER1_SWI11_Pos) /*!< 0x00000800 */
#define EXTI_SWIER1_SWI11 \
    EXTI_SWIER1_SWI11_Msk /*!< Software Interrupt on line 11 */
#define EXTI_SWIER1_SWI12_Pos (12U)
#define EXTI_SWIER1_SWI12_Msk \
    (0x1UL << EXTI_SWIER1_SWI12_Pos) /*!< 0x00001000 */
#define EXTI_SWIER1_SWI12 \
    EXTI_SWIER1_SWI12_Msk /*!< Software Interrupt on line 12 */
#define EXTI_SWIER1_SWI13_Pos (13U)
#define EXTI_SWIER1_SWI13_Msk \
    (0x1UL << EXTI_SWIER1_SWI13_Pos) /*!< 0x00002000 */
#define EXTI_SWIER1_SWI13 \
    EXTI_SWIER1_SWI13_Msk /*!< Software Interrupt on line 13 */
#define EXTI_SWIER1_SWI14_Pos (14U)
#define EXTI_SWIER1_SWI14_Msk \
    (0x1UL << EXTI_SWIER1_SWI14_Pos) /*!< 0x00004000 */
#define EXTI_SWIER1_SWI14 \
    EXTI_SWIER1_SWI14_Msk /*!< Software Interrupt on line 14 */
#define EXTI_SWIER1_SWI15_Pos (15U)
#define EXTI_SWIER1_SWI15_Msk \
    (0x1UL << EXTI_SWIER1_SWI15_Pos) /*!< 0x00008000 */
#define EXTI_SWIER1_SWI15 \
    EXTI_SWIER1_SWI15_Msk /*!< Software Interrupt on line 15 */
#define EXTI_SWIER1_SWI16_Pos (16U)
#define EXTI_SWIER1_SWI16_Msk \
    (0x1UL << EXTI_SWIER1_SWI16_Pos) /*!< 0x00010000 */
#define EXTI_SWIER1_SWI16 \
    EXTI_SWIER1_SWI16_Msk /*!< Software Interrupt on line 16 */

/*******************  Bit definition for EXTI_RPR1 register  ******************/
#define EXTI_RPR1_RPIF0_Pos (0U)
#define EXTI_RPR1_RPIF0_Msk (0x1UL << EXTI_RPR1_RPIF0_Pos) /*!< 0x00000001 */
#define EXTI_RPR1_RPIF0 \
    EXTI_RPR1_RPIF0_Msk /*!< Rising Pending Interrupt Flag on line 0 */
#define EXTI_RPR1_RPIF1_Pos (1U)
#define EXTI_RPR1_RPIF1_Msk (0x1UL << EXTI_RPR1_RPIF1_Pos) /*!< 0x00000002 */
#define EXTI_RPR1_RPIF1 \
    EXTI_RPR1_RPIF1_Msk /*!< Rising Pending Interrupt Flag on line 1 */
#define EXTI_RPR1_RPIF2_Pos (2U)
#define EXTI_RPR1_RPIF2_Msk (0x1UL << EXTI_RPR1_RPIF2_Pos) /*!< 0x00000004 */
#define EXTI_RPR1_RPIF2 \
    EXTI_RPR1_RPIF2_Msk /*!< Rising Pending Interrupt Flag on line 2 */
#define EXTI_RPR1_RPIF3_Pos (3U)
#define EXTI_RPR1_RPIF3_Msk (0x1UL << EXTI_RPR1_RPIF3_Pos) /*!< 0x00000008 */
#define EXTI_RPR1_RPIF3 \
    EXTI_RPR1_RPIF3_Msk /*!< Rising Pending Interrupt Flag on line 3 */
#define EXTI_RPR1_RPIF4_Pos (4U)
#define EXTI_RPR1_RPIF4_Msk (0x1UL << EXTI_RPR1_RPIF4_Pos) /*!< 0x00000010 */
#define EXTI_RPR1_RPIF4 \
    EXTI_RPR1_RPIF4_Msk /*!< Rising Pending Interrupt Flag on line 4 */
#define EXTI_RPR1_RPIF5_Pos (5U)
#define EXTI_RPR1_RPIF5_Msk (0x1UL << EXTI_RPR1_RPIF5_Pos) /*!< 0x00000020 */
#define EXTI_RPR1_RPIF5 \
    EXTI_RPR1_RPIF5_Msk /*!< Rising Pending Interrupt Flag on line 5 */
#define EXTI_RPR1_RPIF6_Pos (6U)
#define EXTI_RPR1_RPIF6_Msk (0x1UL << EXTI_RPR1_RPIF6_Pos) /*!< 0x00000040 */
#define EXTI_RPR1_RPIF6 \
    EXTI_RPR1_RPIF6_Msk /*!< Rising Pending Interrupt Flag on line 6 */
#define EXTI_RPR1_RPIF7_Pos (7U)
#define EXTI_RPR1_RPIF7_Msk (0x1UL << EXTI_RPR1_RPIF7_Pos) /*!< 0x00000080 */
#define EXTI_RPR1_RPIF7 \
    EXTI_RPR1_RPIF7_Msk /*!< Rising Pending Interrupt Flag on line 7 */
#define EXTI_RPR1_RPIF8_Pos (8U)
#define EXTI_RPR1_RPIF8_Msk (0x1UL << EXTI_RPR1_RPIF8_Pos) /*!< 0x00000100 */
#define EXTI_RPR1_RPIF8 \
    EXTI_RPR1_RPIF8_Msk /*!< Rising Pending Interrupt Flag on line 8 */
#define EXTI_RPR1_RPIF9_Pos (9U)
#define EXTI_RPR1_RPIF9_Msk (0x1UL << EXTI_RPR1_RPIF9_Pos) /*!< 0x00000200 */
#define EXTI_RPR1_RPIF9 \
    EXTI_RPR1_RPIF9_Msk /*!< Rising Pending Interrupt Flag on line 9 */
#define EXTI_RPR1_RPIF10_Pos (10U)
#define EXTI_RPR1_RPIF10_Msk (0x1UL << EXTI_RPR1_RPIF10_Pos) /*!< 0x00000400 */
#define EXTI_RPR1_RPIF10 \
    EXTI_RPR1_RPIF10_Msk /*!< Rising Pending Interrupt Flag on line 10 */
#define EXTI_RPR1_RPIF11_Pos (11U)
#define EXTI_RPR1_RPIF11_Msk (0x1UL << EXTI_RPR1_RPIF11_Pos) /*!< 0x00000800 */
#define EXTI_RPR1_RPIF11 \
    EXTI_RPR1_RPIF11_Msk /*!< Rising Pending Interrupt Flag on line 11 */
#define EXTI_RPR1_RPIF12_Pos (12U)
#define EXTI_RPR1_RPIF12_Msk (0x1UL << EXTI_RPR1_RPIF12_Pos) /*!< 0x00001000 */
#define EXTI_RPR1_RPIF12 \
    EXTI_RPR1_RPIF12_Msk /*!< Rising Pending Interrupt Flag on line 12 */
#define EXTI_RPR1_RPIF13_Pos (13U)
#define EXTI_RPR1_RPIF13_Msk (0x1UL << EXTI_RPR1_RPIF13_Pos) /*!< 0x00002000 */
#define EXTI_RPR1_RPIF13 \
    EXTI_RPR1_RPIF13_Msk /*!< Rising Pending Interrupt Flag on line 13 */
#define EXTI_RPR1_RPIF14_Pos (14U)
#define EXTI_RPR1_RPIF14_Msk (0x1UL << EXTI_RPR1_RPIF14_Pos) /*!< 0x00004000 */
#define EXTI_RPR1_RPIF14 \
    EXTI_RPR1_RPIF14_Msk /*!< Rising Pending Interrupt Flag on line 14 */
#define EXTI_RPR1_RPIF15_Pos (15U)
#define EXTI_RPR1_RPIF15_Msk (0x1UL << EXTI_RPR1_RPIF15_Pos) /*!< 0x00008000 */
#define EXTI_RPR1_RPIF15 \
    EXTI_RPR1_RPIF15_Msk /*!< Rising Pending Interrupt Flag on line 15 */
#define EXTI_RPR1_RPIF16_Pos (16U)
#define EXTI_RPR1_RPIF16_Msk (0x1UL << EXTI_RPR1_RPIF16_Pos) /*!< 0x00010000 */
#define EXTI_RPR1_RPIF16 \
    EXTI_RPR1_RPIF16_Msk /*!< Rising Pending Interrupt Flag on line 16 */

/*******************  Bit definition for EXTI_FPR1 register  ******************/
#define EXTI_FPR1_FPIF0_Pos (0U)
#define EXTI_FPR1_FPIF0_Msk (0x1UL << EXTI_FPR1_FPIF0_Pos) /*!< 0x00000001 */
#define EXTI_FPR1_FPIF0 \
    EXTI_FPR1_FPIF0_Msk /*!< Falling Pending Interrupt Flag on line 0 */
#define EXTI_FPR1_FPIF1_Pos (1U)
#define EXTI_FPR1_FPIF1_Msk (0x1UL << EXTI_FPR1_FPIF1_Pos) /*!< 0x00000002 */
#define EXTI_FPR1_FPIF1 \
    EXTI_FPR1_FPIF1_Msk /*!< Falling Pending Interrupt Flag on line 1 */
#define EXTI_FPR1_FPIF2_Pos (2U)
#define EXTI_FPR1_FPIF2_Msk (0x1UL << EXTI_FPR1_FPIF2_Pos) /*!< 0x00000004 */
#define EXTI_FPR1_FPIF2 \
    EXTI_FPR1_FPIF2_Msk /*!< Falling Pending Interrupt Flag on line 2 */
#define EXTI_FPR1_FPIF3_Pos (3U)
#define EXTI_FPR1_FPIF3_Msk (0x1UL << EXTI_FPR1_FPIF3_Pos) /*!< 0x00000008 */
#define EXTI_FPR1_FPIF3 \
    EXTI_FPR1_FPIF3_Msk /*!< Falling Pending Interrupt Flag on line 3 */
#define EXTI_FPR1_FPIF4_Pos (4U)
#define EXTI_FPR1_FPIF4_Msk (0x1UL << EXTI_FPR1_FPIF4_Pos) /*!< 0x00000010 */
#define EXTI_FPR1_FPIF4 \
    EXTI_FPR1_FPIF4_Msk /*!< Falling Pending Interrupt Flag on line 4 */
#define EXTI_FPR1_FPIF5_Pos (5U)
#define EXTI_FPR1_FPIF5_Msk (0x1UL << EXTI_FPR1_FPIF5_Pos) /*!< 0x00000020 */
#define EXTI_FPR1_FPIF5 \
    EXTI_FPR1_FPIF5_Msk /*!< Falling Pending Interrupt Flag on line 5 */
#define EXTI_FPR1_FPIF6_Pos (6U)
#define EXTI_FPR1_FPIF6_Msk (0x1UL << EXTI_FPR1_FPIF6_Pos) /*!< 0x00000040 */
#define EXTI_FPR1_FPIF6 \
    EXTI_FPR1_FPIF6_Msk /*!< Falling Pending Interrupt Flag on line 6 */
#define EXTI_FPR1_FPIF7_Pos (7U)
#define EXTI_FPR1_FPIF7_Msk (0x1UL << EXTI_FPR1_FPIF7_Pos) /*!< 0x00000080 */
#define EXTI_FPR1_FPIF7 \
    EXTI_FPR1_FPIF7_Msk /*!< Falling Pending Interrupt Flag on line 7 */
#define EXTI_FPR1_FPIF8_Pos (8U)
#define EXTI_FPR1_FPIF8_Msk (0x1UL << EXTI_FPR1_FPIF8_Pos) /*!< 0x00000100 */
#define EXTI_FPR1_FPIF8 \
    EXTI_FPR1_FPIF8_Msk /*!< Falling Pending Interrupt Flag on line 8 */
#define EXTI_FPR1_FPIF9_Pos (9U)
#define EXTI_FPR1_FPIF9_Msk (0x1UL << EXTI_FPR1_FPIF9_Pos) /*!< 0x00000200 */
#define EXTI_FPR1_FPIF9 \
    EXTI_FPR1_FPIF9_Msk /*!< Falling Pending Interrupt Flag on line 9 */
#define EXTI_FPR1_FPIF10_Pos (10U)
#define EXTI_FPR1_FPIF10_Msk (0x1UL << EXTI_FPR1_FPIF10_Pos) /*!< 0x00000400 */
#define EXTI_FPR1_FPIF10 \
    EXTI_FPR1_FPIF10_Msk /*!< Falling Pending Interrupt Flag on line 10 */
#define EXTI_FPR1_FPIF11_Pos (11U)
#define EXTI_FPR1_FPIF11_Msk (0x1UL << EXTI_FPR1_FPIF11_Pos) /*!< 0x00000800 */
#define EXTI_FPR1_FPIF11 \
    EXTI_FPR1_FPIF11_Msk /*!< Falling Pending Interrupt Flag on line 11 */
#define EXTI_FPR1_FPIF12_Pos (12U)
#define EXTI_FPR1_FPIF12_Msk (0x1UL << EXTI_FPR1_FPIF12_Pos) /*!< 0x00001000 */
#define EXTI_FPR1_FPIF12 \
    EXTI_FPR1_FPIF12_Msk /*!< Falling Pending Interrupt Flag on line 12 */
#define EXTI_FPR1_FPIF13_Pos (13U)
#define EXTI_FPR1_FPIF13_Msk (0x1UL << EXTI_FPR1_FPIF13_Pos) /*!< 0x00002000 */
#define EXTI_FPR1_FPIF13 \
    EXTI_FPR1_FPIF13_Msk /*!< Falling Pending Interrupt Flag on line 13 */
#define EXTI_FPR1_FPIF14_Pos (14U)
#define EXTI_FPR1_FPIF14_Msk (0x1UL << EXTI_FPR1_FPIF14_Pos) /*!< 0x00004000 */
#define EXTI_FPR1_FPIF14 \
    EXTI_FPR1_FPIF14_Msk /*!< Falling Pending Interrupt Flag on line 14 */
#define EXTI_FPR1_FPIF15_Pos (15U)
#define EXTI_FPR1_FPIF15_Msk (0x1UL << EXTI_FPR1_FPIF15_Pos) /*!< 0x00008000 */
#define EXTI_FPR1_FPIF15 \
    EXTI_FPR1_FPIF15_Msk /*!< Falling Pending Interrupt Flag on line 15 */
#define EXTI_FPR1_FPIF16_Pos (16U)
#define EXTI_FPR1_FPIF16_Msk (0x1UL << EXTI_FPR1_FPIF16_Pos) /*!< 0x00010000 */
#define EXTI_FPR1_FPIF16 \
    EXTI_FPR1_FPIF16_Msk /*!< Falling Pending Interrupt Flag on line 16 */

/*******************  Bit definition for EXTI_SECENR1 register  ******************/
#define EXTI_SECENR1_SEC0_Pos (0U)
#define EXTI_SECENR1_SEC0_Msk \
    (0x1UL << EXTI_SECENR1_SEC0_Pos) /*!< 0x00000001 */
#define EXTI_SECENR1_SEC0 \
    EXTI_SECENR1_SEC0_Msk /*!< Security enable on line 0 */
#define EXTI_SECENR1_SEC1_Pos (1U)
#define EXTI_SECENR1_SEC1_Msk \
    (0x1UL << EXTI_SECENR1_SEC1_Pos) /*!< 0x00000002 */
#define EXTI_SECENR1_SEC1 \
    EXTI_SECENR1_SEC1_Msk /*!< Security enable on line 1 */
#define EXTI_SECENR1_SEC2_Pos (2U)
#define EXTI_SECENR1_SEC2_Msk \
    (0x1UL << EXTI_SECENR1_SEC2_Pos) /*!< 0x00000004 */
#define EXTI_SECENR1_SEC2 \
    EXTI_SECENR1_SEC2_Msk /*!< Security enable on line 2 */
#define EXTI_SECENR1_SEC3_Pos (3U)
#define EXTI_SECENR1_SEC3_Msk \
    (0x1UL << EXTI_SECENR1_SEC3_Pos) /*!< 0x00000008 */
#define EXTI_SECENR1_SEC3 \
    EXTI_SECENR1_SEC3_Msk /*!< Security enable on line 3 */
#define EXTI_SECENR1_SEC4_Pos (4U)
#define EXTI_SECENR1_SEC4_Msk \
    (0x1UL << EXTI_SECENR1_SEC4_Pos) /*!< 0x00000010 */
#define EXTI_SECENR1_SEC4 \
    EXTI_SECENR1_SEC4_Msk /*!< Security enable on line 4 */
#define EXTI_SECENR1_SEC5_Pos (5U)
#define EXTI_SECENR1_SEC5_Msk \
    (0x1UL << EXTI_SECENR1_SEC5_Pos) /*!< 0x00000020 */
#define EXTI_SECENR1_SEC5 \
    EXTI_SECENR1_SEC5_Msk /*!< Security enable on line 5 */
#define EXTI_SECENR1_SEC6_Pos (6U)
#define EXTI_SECENR1_SEC6_Msk \
    (0x1UL << EXTI_SECENR1_SEC6_Pos) /*!< 0x00000040 */
#define EXTI_SECENR1_SEC6 \
    EXTI_SECENR1_SEC6_Msk /*!< Security enable on line 6 */
#define EXTI_SECENR1_SEC7_Pos (7U)
#define EXTI_SECENR1_SEC7_Msk \
    (0x1UL << EXTI_SECENR1_SEC7_Pos) /*!< 0x00000080 */
#define EXTI_SECENR1_SEC7 \
    EXTI_SECENR1_SEC7_Msk /*!< Security enable on line 7 */
#define EXTI_SECENR1_SEC8_Pos (8U)
#define EXTI_SECENR1_SEC8_Msk \
    (0x1UL << EXTI_SECENR1_SEC8_Pos) /*!< 0x00000100 */
#define EXTI_SECENR1_SEC8 \
    EXTI_SECENR1_SEC8_Msk /*!< Security enable on line 8 */
#define EXTI_SECENR1_SEC9_Pos (9U)
#define EXTI_SECENR1_SEC9_Msk \
    (0x1UL << EXTI_SECENR1_SEC9_Pos) /*!< 0x00000200 */
#define EXTI_SECENR1_SEC9 \
    EXTI_SECENR1_SEC9_Msk /*!< Security enable on line 9 */
#define EXTI_SECENR1_SEC10_Pos (10U)
#define EXTI_SECENR1_SEC10_Msk \
    (0x1UL << EXTI_SECENR1_SEC10_Pos) /*!< 0x00000400 */
#define EXTI_SECENR1_SEC10 \
    EXTI_SECENR1_SEC10_Msk /*!< Security enable on line 10 */
#define EXTI_SECENR1_SEC11_Pos (11U)
#define EXTI_SECENR1_SEC11_Msk \
    (0x1UL << EXTI_SECENR1_SEC11_Pos) /*!< 0x00000800 */
#define EXTI_SECENR1_SEC11 \
    EXTI_SECENR1_SEC11_Msk /*!< Security enable on line 11 */
#define EXTI_SECENR1_SEC12_Pos (12U)
#define EXTI_SECENR1_SEC12_Msk \
    (0x1UL << EXTI_SECENR1_SEC12_Pos) /*!< 0x00001000 */
#define EXTI_SECENR1_SEC12 \
    EXTI_SECENR1_SEC12_Msk /*!< Security enable on line 12 */
#define EXTI_SECENR1_SEC13_Pos (13U)
#define EXTI_SECENR1_SEC13_Msk \
    (0x1UL << EXTI_SECENR1_SEC13_Pos) /*!< 0x00002000 */
#define EXTI_SECENR1_SEC13 \
    EXTI_SECENR1_SEC13_Msk /*!< Security enable on line 13 */
#define EXTI_SECENR1_SEC14_Pos (14U)
#define EXTI_SECENR1_SEC14_Msk \
    (0x1UL << EXTI_SECENR1_SEC14_Pos) /*!< 0x00004000 */
#define EXTI_SECENR1_SEC14 \
    EXTI_SECENR1_SEC14_Msk /*!< Security enable on line 14 */
#define EXTI_SECENR1_SEC15_Pos (15U)
#define EXTI_SECENR1_SEC15_Msk \
    (0x1UL << EXTI_SECENR1_SEC15_Pos) /*!< 0x00008000 */
#define EXTI_SECENR1_SEC15 \
    EXTI_SECENR1_SEC15_Msk /*!< Security enable on line 15 */
#define EXTI_SECENR1_SEC16_Pos (16U)
#define EXTI_SECENR1_SEC16_Msk \
    (0x1UL << EXTI_SECENR1_SEC16_Pos) /*!< 0x00010000 */
#define EXTI_SECENR1_SEC16 \
    EXTI_SECENR1_SEC16_Msk /*!< Security enable on line 16 */
#define EXTI_SECENR1_SEC17_Pos (17U)
#define EXTI_SECENR1_SEC17_Msk \
    (0x1UL << EXTI_SECENR1_SEC17_Pos) /*!< 0x00020000 */
#define EXTI_SECENR1_SEC17 \
    EXTI_SECENR1_SEC17_Msk /*!< Security enable on line 17 */
#define EXTI_SECENR1_SEC18_Pos (18U)
#define EXTI_SECENR1_SEC18_Msk \
    (0x1UL << EXTI_SECENR1_SEC18_Pos) /*!< 0x00040000 */
#define EXTI_SECENR1_SEC18 \
    EXTI_SECENR1_SEC18_Msk /*!< Security enable on line 18 */
#define EXTI_SECENR1_SEC19_Pos (19U)
#define EXTI_SECENR1_SEC19_Msk \
    (0x1UL << EXTI_SECENR1_SEC19_Pos) /*!< 0x00080000 */
#define EXTI_SECENR1_SEC19 \
    EXTI_SECENR1_SEC19_Msk /*!< Security enable on line 19 */
#define EXTI_SECENR1_SEC20_Pos (20U)
#define EXTI_SECENR1_SEC20_Msk \
    (0x1UL << EXTI_SECENR1_SEC20_Pos) /*!< 0x00100000 */
#define EXTI_SECENR1_SEC20 \
    EXTI_SECENR1_SEC20_Msk /*!< Security enable on line 20 */
#define EXTI_SECENR1_SEC21_Pos (21U)
#define EXTI_SECENR1_SEC21_Msk \
    (0x1UL << EXTI_SECENR1_SEC21_Pos) /*!< 0x00200000 */
#define EXTI_SECENR1_SEC21 \
    EXTI_SECENR1_SEC21_Msk /*!< Security enable on line 21 */
#define EXTI_SECENR1_SEC22_Pos (22U)
#define EXTI_SECENR1_SEC22_Msk \
    (0x1UL << EXTI_SECENR1_SEC22_Pos) /*!< 0x00400000 */
#define EXTI_SECENR1_SEC22 \
    EXTI_SECENR1_SEC22_Msk /*!< Security enable on line 22 */
#define EXTI_SECENR1_SEC23_Pos (23U)
#define EXTI_SECENR1_SEC23_Msk \
    (0x1UL << EXTI_SECENR1_SEC23_Pos) /*!< 0x00800000 */
#define EXTI_SECENR1_SEC23 \
    EXTI_SECENR1_SEC23_Msk /*!< Security enable on line 23 */
#define EXTI_SECENR1_SEC24_Pos (24U)
#define EXTI_SECENR1_SEC24_Msk \
    (0x1UL << EXTI_SECENR1_SEC24_Pos) /*!< 0x01000000 */
#define EXTI_SECENR1_SEC24 \
    EXTI_SECENR1_SEC24_Msk /*!< Security enable on line 24 */
#define EXTI_SECENR1_SEC25_Pos (25U)
#define EXTI_SECENR1_SEC25_Msk \
    (0x1UL << EXTI_SECENR1_SEC25_Pos) /*!< 0x02000000 */
#define EXTI_SECENR1_SEC25 \
    EXTI_SECENR1_SEC25_Msk /*!< Security enable on line 25 */
#define EXTI_SECENR1_SEC26_Pos (26U)
#define EXTI_SECENR1_SEC26_Msk \
    (0x1UL << EXTI_SECENR1_SEC26_Pos) /*!< 0x04000000 */
#define EXTI_SECENR1_SEC26 \
    EXTI_SECENR1_SEC26_Msk /*!< Security enable on line 26 */
#define EXTI_SECENR1_SEC27_Pos (27U)
#define EXTI_SECENR1_SEC27_Msk \
    (0x1UL << EXTI_SECENR1_SEC27_Pos) /*!< 0x08000000 */
#define EXTI_SECENR1_SEC27 \
    EXTI_SECENR1_SEC27_Msk /*!< Security enable on line 27 */
#define EXTI_SECENR1_SEC28_Pos (28U)
#define EXTI_SECENR1_SEC28_Msk \
    (0x1UL << EXTI_SECENR1_SEC28_Pos) /*!< 0x10000000 */
#define EXTI_SECENR1_SEC28 \
    EXTI_SECENR1_SEC28_Msk /*!< Security enable on line 28 */
#define EXTI_SECENR1_SEC29_Pos (29U)
#define EXTI_SECENR1_SEC29_Msk \
    (0x1UL << EXTI_SECENR1_SEC29_Pos) /*!< 0x20000000 */
#define EXTI_SECENR1_SEC29 \
    EXTI_SECENR1_SEC29_Msk /*!< Security enable on line 29 */
#define EXTI_SECENR1_SEC30_Pos (30U)
#define EXTI_SECENR1_SEC30_Msk \
    (0x1UL << EXTI_SECENR1_SEC30_Pos) /*!< 0x40000000 */
#define EXTI_SECENR1_SEC30 \
    EXTI_SECENR1_SEC30_Msk /*!< Security enable on line 30 */
#define EXTI_SECENR1_SEC31_Pos (31U)
#define EXTI_SECENR1_SEC31_Msk \
    (0x1UL << EXTI_SECENR1_SEC31_Pos) /*!< 0x80000000 */
#define EXTI_SECENR1_SEC31 \
    EXTI_SECENR1_SEC31_Msk /*!< Security enable on line 31 */

/*******************  Bit definition for EXTI_PRIVENR1 register  ******************/
#define EXTI_PRIVENR1_PRIV0_Pos (0U)
#define EXTI_PRIVENR1_PRIV0_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV0_Pos) /*!< 0x00000001 */
#define EXTI_PRIVENR1_PRIV0 \
    EXTI_PRIVENR1_PRIV0_Msk /*!< Privilege enable on line 0 */
#define EXTI_PRIVENR1_PRIV1_Pos (1U)
#define EXTI_PRIVENR1_PRIV1_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV1_Pos) /*!< 0x00000002 */
#define EXTI_PRIVENR1_PRIV1 \
    EXTI_PRIVENR1_PRIV1_Msk /*!< Privilege enable on line 1 */
#define EXTI_PRIVENR1_PRIV2_Pos (2U)
#define EXTI_PRIVENR1_PRIV2_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV2_Pos) /*!< 0x00000004 */
#define EXTI_PRIVENR1_PRIV2 \
    EXTI_PRIVENR1_PRIV2_Msk /*!< Privilege enable on line 2 */
#define EXTI_PRIVENR1_PRIV3_Pos (3U)
#define EXTI_PRIVENR1_PRIV3_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV3_Pos) /*!< 0x00000008 */
#define EXTI_PRIVENR1_PRIV3 \
    EXTI_PRIVENR1_PRIV3_Msk /*!< Privilege enable on line 3 */
#define EXTI_PRIVENR1_PRIV4_Pos (4U)
#define EXTI_PRIVENR1_PRIV4_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV4_Pos) /*!< 0x00000010 */
#define EXTI_PRIVENR1_PRIV4 \
    EXTI_PRIVENR1_PRIV4_Msk /*!< Privilege enable on line 4 */
#define EXTI_PRIVENR1_PRIV5_Pos (5U)
#define EXTI_PRIVENR1_PRIV5_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV5_Pos) /*!< 0x00000020 */
#define EXTI_PRIVENR1_PRIV5 \
    EXTI_PRIVENR1_PRIV5_Msk /*!< Privilege enable on line 5 */
#define EXTI_PRIVENR1_PRIV6_Pos (6U)
#define EXTI_PRIVENR1_PRIV6_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV6_Pos) /*!< 0x00000040 */
#define EXTI_PRIVENR1_PRIV6 \
    EXTI_PRIVENR1_PRIV6_Msk /*!< Privilege enable on line 6 */
#define EXTI_PRIVENR1_PRIV7_Pos (7U)
#define EXTI_PRIVENR1_PRIV7_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV7_Pos) /*!< 0x00000080 */
#define EXTI_PRIVENR1_PRIV7 \
    EXTI_PRIVENR1_PRIV7_Msk /*!< Privilege enable on line 7 */
#define EXTI_PRIVENR1_PRIV8_Pos (8U)
#define EXTI_PRIVENR1_PRIV8_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV8_Pos) /*!< 0x00000100 */
#define EXTI_PRIVENR1_PRIV8 \
    EXTI_PRIVENR1_PRIV8_Msk /*!< Privilege enable on line 8 */
#define EXTI_PRIVENR1_PRIV9_Pos (9U)
#define EXTI_PRIVENR1_PRIV9_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV9_Pos) /*!< 0x00000200 */
#define EXTI_PRIVENR1_PRIV9 \
    EXTI_PRIVENR1_PRIV9_Msk /*!< Privilege enable on line 9 */
#define EXTI_PRIVENR1_PRIV10_Pos (10U)
#define EXTI_PRIVENR1_PRIV10_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV10_Pos) /*!< 0x00000400 */
#define EXTI_PRIVENR1_PRIV10 \
    EXTI_PRIVENR1_PRIV10_Msk /*!< Privilege enable on line 10 */
#define EXTI_PRIVENR1_PRIV11_Pos (11U)
#define EXTI_PRIVENR1_PRIV11_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV11_Pos) /*!< 0x00000800 */
#define EXTI_PRIVENR1_PRIV11 \
    EXTI_PRIVENR1_PRIV11_Msk /*!< Privilege enable on line 11 */
#define EXTI_PRIVENR1_PRIV12_Pos (12U)
#define EXTI_PRIVENR1_PRIV12_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV12_Pos) /*!< 0x00001000 */
#define EXTI_PRIVENR1_PRIV12 \
    EXTI_PRIVENR1_PRIV12_Msk /*!< Privilege enable on line 12 */
#define EXTI_PRIVENR1_PRIV13_Pos (13U)
#define EXTI_PRIVENR1_PRIV13_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV13_Pos) /*!< 0x00002000 */
#define EXTI_PRIVENR1_PRIV13 \
    EXTI_PRIVENR1_PRIV13_Msk /*!< Privilege enable on line 13 */
#define EXTI_PRIVENR1_PRIV14_Pos (14U)
#define EXTI_PRIVENR1_PRIV14_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV14_Pos) /*!< 0x00004000 */
#define EXTI_PRIVENR1_PRIV14 \
    EXTI_PRIVENR1_PRIV14_Msk /*!< Privilege enable on line 14 */
#define EXTI_PRIVENR1_PRIV15_Pos (15U)
#define EXTI_PRIVENR1_PRIV15_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV15_Pos) /*!< 0x00008000 */
#define EXTI_PRIVENR1_PRIV15 \
    EXTI_PRIVENR1_PRIV15_Msk /*!< Privilege enable on line 15 */
#define EXTI_PRIVENR1_PRIV16_Pos (16U)
#define EXTI_PRIVENR1_PRIV16_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV16_Pos) /*!< 0x00010000 */
#define EXTI_PRIVENR1_PRIV16 \
    EXTI_PRIVENR1_PRIV16_Msk /*!< Privilege enable on line 16 */
#define EXTI_PRIVENR1_PRIV17_Pos (17U)
#define EXTI_PRIVENR1_PRIV17_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV17_Pos) /*!< 0x00020000 */
#define EXTI_PRIVENR1_PRIV17 \
    EXTI_PRIVENR1_PRIV17_Msk /*!< Privilege enable on line 17 */
#define EXTI_PRIVENR1_PRIV18_Pos (18U)
#define EXTI_PRIVENR1_PRIV18_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV18_Pos) /*!< 0x00040000 */
#define EXTI_PRIVENR1_PRIV18 \
    EXTI_PRIVENR1_PRIV18_Msk /*!< Privilege enable on line 18 */
#define EXTI_PRIVENR1_PRIV19_Pos (19U)
#define EXTI_PRIVENR1_PRIV19_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV19_Pos) /*!< 0x00080000 */
#define EXTI_PRIVENR1_PRIV19 \
    EXTI_PRIVENR1_PRIV19_Msk /*!< Privilege enable on line 19 */
#define EXTI_PRIVENR1_PRIV20_Pos (20U)
#define EXTI_PRIVENR1_PRIV20_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV20_Pos) /*!< 0x00100000 */
#define EXTI_PRIVENR1_PRIV20 \
    EXTI_PRIVENR1_PRIV20_Msk /*!< Privilege enable on line 20 */
#define EXTI_PRIVENR1_PRIV21_Pos (21U)
#define EXTI_PRIVENR1_PRIV21_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV21_Pos) /*!< 0x00200000 */
#define EXTI_PRIVENR1_PRIV21 \
    EXTI_PRIVENR1_PRIV21_Msk /*!< Privilege enable on line 21 */
#define EXTI_PRIVENR1_PRIV22_Pos (22U)
#define EXTI_PRIVENR1_PRIV22_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV22_Pos) /*!< 0x00400000 */
#define EXTI_PRIVENR1_PRIV22 \
    EXTI_PRIVENR1_PRIV22_Msk /*!< Privilege enable on line 22 */
#define EXTI_PRIVENR1_PRIV23_Pos (23U)
#define EXTI_PRIVENR1_PRIV23_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV23_Pos) /*!< 0x00800000 */
#define EXTI_PRIVENR1_PRIV23 \
    EXTI_PRIVENR1_PRIV23_Msk /*!< Privilege enable on line 23 */
#define EXTI_PRIVENR1_PRIV24_Pos (24U)
#define EXTI_PRIVENR1_PRIV24_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV24_Pos) /*!< 0x01000000 */
#define EXTI_PRIVENR1_PRIV24 \
    EXTI_PRIVENR1_PRIV24_Msk /*!< Privilege enable on line 24 */
#define EXTI_PRIVENR1_PRIV25_Pos (25U)
#define EXTI_PRIVENR1_PRIV25_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV25_Pos) /*!< 0x02000000 */
#define EXTI_PRIVENR1_PRIV25 \
    EXTI_PRIVENR1_PRIV25_Msk /*!< Privilege enable on line 25 */
#define EXTI_PRIVENR1_PRIV26_Pos (26U)
#define EXTI_PRIVENR1_PRIV26_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV26_Pos) /*!< 0x04000000 */
#define EXTI_PRIVENR1_PRIV26 \
    EXTI_PRIVENR1_PRIV26_Msk /*!< Privilege enable on line 26 */
#define EXTI_PRIVENR1_PRIV27_Pos (27U)
#define EXTI_PRIVENR1_PRIV27_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV27_Pos) /*!< 0x08000000 */
#define EXTI_PRIVENR1_PRIV27 \
    EXTI_PRIVENR1_PRIV27_Msk /*!< Privilege enable on line 27 */
#define EXTI_PRIVENR1_PRIV28_Pos (28U)
#define EXTI_PRIVENR1_PRIV28_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV28_Pos) /*!< 0x10000000 */
#define EXTI_PRIVENR1_PRIV28 \
    EXTI_PRIVENR1_PRIV28_Msk /*!< Privilege enable on line 28 */
#define EXTI_PRIVENR1_PRIV29_Pos (29U)
#define EXTI_PRIVENR1_PRIV29_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV29_Pos) /*!< 0x20000000 */
#define EXTI_PRIVENR1_PRIV29 \
    EXTI_PRIVENR1_PRIV29_Msk /*!< Privilege enable on line 29 */
#define EXTI_PRIVENR1_PRIV30_Pos (30U)
#define EXTI_PRIVENR1_PRIV30_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV30_Pos) /*!< 0x40000000 */
#define EXTI_PRIVENR1_PRIV30 \
    EXTI_PRIVENR1_PRIV30_Msk /*!< Privilege enable on line 30 */
#define EXTI_PRIVENR1_PRIV31_Pos (31U)
#define EXTI_PRIVENR1_PRIV31_Msk \
    (0x1UL << EXTI_PRIVENR1_PRIV31_Pos) /*!< 0x80000000 */
#define EXTI_PRIVENR1_PRIV31 \
    EXTI_PRIVENR1_PRIV31_Msk /*!< Privilege enable on line 31 */

/******************  Bit definition for EXTI_RTSR2 register  *******************/
#define EXTI_RTSR2_TR_Pos (14U)
#define EXTI_RTSR2_TR_Msk (0x244UL << EXTI_RTSR2_TR_Pos) /*!< 0x00244000 */
#define EXTI_RTSR2_TR \
    EXTI_RTSR2_TR_Msk /*!< Rising trigger event configuration bit */
#define EXTI_RTSR2_TR46_Pos (14U)
#define EXTI_RTSR2_TR46_Msk (0x1UL << EXTI_RTSR2_TR46_Pos) /*!< 0x00004000 */
#define EXTI_RTSR2_TR46 \
    EXTI_RTSR2_TR46_Msk /*!< Rising trigger event configuration bit of line 46 */
#define EXTI_RTSR2_TR50_Pos (18U)
#define EXTI_RTSR2_TR50_Msk (0x1UL << EXTI_RTSR2_TR50_Pos) /*!< 0x00040000 */
#define EXTI_RTSR2_TR50 \
    EXTI_RTSR2_TR50_Msk /*!< Rising trigger event configuration bit of line 50 */
#define EXTI_RTSR2_TR53_Pos (21U)
#define EXTI_RTSR2_TR53_Msk (0x1UL << EXTI_RTSR2_TR53_Pos) /*!< 0x00200000 */
#define EXTI_RTSR2_TR53 \
    EXTI_RTSR2_TR53_Msk /*!< Rising trigger event configuration bit of line 53 */

/******************  Bit definition for EXTI_FTSR2 register  *******************/
#define EXTI_FTSR2_TR_Pos (14U)
#define EXTI_FTSR2_TR_Msk (0x244 << EXTI_FTSR2_TR_Pos) /*!< 0x00244000 */
#define EXTI_FTSR2_TR \
    EXTI_FTSR2_TR_Msk /*!< Falling trigger event configuration bit */
#define EXTI_FTSR2_TR46_Pos (14U)
#define EXTI_FTSR2_TR46_Msk (0x1UL << EXTI_FTSR2_TR46_Pos) /*!< 0x00004000 */
#define EXTI_FTSR2_TR46 \
    EXTI_FTSR2_TR46_Msk /*!< Falling trigger event configuration bit of line 46 */
#define EXTI_FTSR2_TR50_Pos (18U)
#define EXTI_FTSR2_TR50_Msk (0x1UL << EXTI_FTSR2_TR50_Pos) /*!< 0x00040000 */
#define EXTI_FTSR2_TR50 \
    EXTI_FTSR2_TR50_Msk /*!< Falling trigger event configuration bit of line 50 */
#define EXTI_FTSR2_TR53_Pos (21U)
#define EXTI_FTSR2_TR53_Msk (0x1UL << EXTI_FTSR2_TR53_Pos) /*!< 0x00200000 */
#define EXTI_FTSR2_TR53 \
    EXTI_FTSR2_TR53_Msk /*!< Falling trigger event configuration bit of line 53 */

/******************  Bit definition for EXTI_SWIER2 register  ******************/
#define EXTI_SWIER2_SWIER46_Pos (14U)
#define EXTI_SWIER2_SWIER46_Msk \
    (0x1UL << EXTI_SWIER2_SWIER46_Pos) /*!< 0x00004000 */
#define EXTI_SWIER2_SWIER46 \
    EXTI_SWIER2_SWIER46_Msk /*!< Software Interrupt on line 46 */
#define EXTI_SWIER2_SWIER50_Pos (18U)
#define EXTI_SWIER2_SWIER50_Msk \
    (0x1UL << EXTI_SWIER2_SWIER50_Pos) /*!< 0x00040000 */
#define EXTI_SWIER2_SWIER50 \
    EXTI_SWIER2_SWIER50_Msk /*!< Software Interrupt on line 50 */
#define EXTI_SWIER2_SWIER53_Pos (21U)
#define EXTI_SWIER2_SWIER53_Msk \
    (0x1UL << EXTI_SWIER2_SWIER53_Pos) /*!< 0x00200000 */
#define EXTI_SWIER2_SWIER53 \
    EXTI_SWIER2_SWIER53_Msk /*!< Software Interrupt on line 53 */

/******************  Bit definition for EXTI_RPR2 register  *******************/
#define EXTI_RPR2_RPIF_Pos (14U)
#define EXTI_RPR2_RPIF_Msk (0x244UL << EXTI_RPR2_RPIF_Pos) /*!< 0x00244000 */
#define EXTI_RPR2_RPIF \
    EXTI_RPR2_RPIF_Msk /*!< Rising pending edge configuration bits */
#define EXTI_RPR2_RPIF46_Pos (14U)
#define EXTI_RPR2_RPIF46_Msk (0x1UL << EXTI_RPR2_RPIF46_Pos) /*!< 0x00004000 */
#define EXTI_RPR2_RPIF46 \
    EXTI_RPR2_RPIF46_Msk /*!< Rising pending edge configuration bit of line 46 */
#define EXTI_RPR2_RPIF50_Pos (18U)
#define EXTI_RPR2_RPIF50_Msk (0x1UL << EXTI_RPR2_RPIF50_Pos) /*!< 0x00040000 */
#define EXTI_RPR2_RPIF50 \
    EXTI_RPR2_RPIF50_Msk /*!< Rising pending edge configuration bit of line 50 */
#define EXTI_RPR2_RPIF53_Pos (21U)
#define EXTI_RPR2_RPIF53_Msk (0x1UL << EXTI_RPR2_RPIF53_Pos) /*!< 0x00200000 */
#define EXTI_RPR2_RPIF53 \
    EXTI_RPR2_RPIF53_Msk /*!< Rising pending edge configuration bit of line 53 */

/******************  Bit definition for EXTI_FPR2 register  *******************/
#define EXTI_FPR2_FPIF_Pos (14U)
#define EXTI_FPR2_FPIF_Msk (0x244UL << EXTI_FPR2_FPIF_Pos) /*!< 0x00244000 */
#define EXTI_FPR2_FPIF \
    EXTI_FPR2_FPIF_Msk /*!< Rising falling edge configuration bits */
#define EXTI_FPR2_FPIF46_Pos (14U)
#define EXTI_FPR2_FPIF46_Msk (0x1UL << EXTI_FPR2_FPIF46_Pos) /*!< 0x00004000 */
#define EXTI_FPR2_FPIF46 \
    EXTI_FPR2_FPIF46_Msk /*!< Rising falling edge configuration bit of line 46 */
#define EXTI_FPR2_FPIF50_Pos (18U)
#define EXTI_FPR2_FPIF50_Msk (0x1UL << EXTI_FPR2_FPIF50_Pos) /*!< 0x00040000 */
#define EXTI_FPR2_FPIF50 \
    EXTI_FPR2_FPIF50_Msk /*!< Rising falling edge configuration bit of line 50 */
#define EXTI_FPR2_FPIF53_Pos (21U)
#define EXTI_FPR2_FPIF53_Msk (0x1UL << EXTI_FPR2_FPIF53_Pos) /*!< 0x00200000 */
#define EXTI_FPR2_FPIF53 \
    EXTI_FPR2_FPIF53_Msk /*!< Rising falling edge configuration bit of line 53 */

/*******************  Bit definition for EXTI_SECENR2 register  ******************/
#define EXTI_SECENR2_SEC32_Pos (0U)
#define EXTI_SECENR2_SEC32_Msk \
    (0x1UL << EXTI_SECENR2_SEC32_Pos) /*!< 0x00000001 */
#define EXTI_SECENR2_SEC32 \
    EXTI_SECENR2_SEC32_Msk /*!< Security enable on line 32 */
#define EXTI_SECENR2_SEC33_Pos (1U)
#define EXTI_SECENR2_SEC33_Msk \
    (0x1UL << EXTI_SECENR2_SEC33_Pos) /*!< 0x00000002 */
#define EXTI_SECENR2_SEC33 \
    EXTI_SECENR2_SEC33_Msk /*!< Security enable on line 33 */
#define EXTI_SECENR2_SEC34_Pos (2U)
#define EXTI_SECENR2_SEC34_Msk \
    (0x1UL << EXTI_SECENR2_SEC34_Pos) /*!< 0x00000004 */
#define EXTI_SECENR2_SEC34 \
    EXTI_SECENR2_SEC34_Msk /*!< Security enable on line 2 */
#define EXTI_SECENR2_SEC35_Pos (3U)
#define EXTI_SECENR2_SEC35_Msk \
    (0x1UL << EXTI_SECENR2_SEC35_Pos) /*!< 0x00000008 */
#define EXTI_SECENR2_SEC35 \
    EXTI_SECENR2_SEC35_Msk /*!< Security enable on line 3 */
#define EXTI_SECENR2_SEC36_Pos (4U)
#define EXTI_SECENR2_SEC36_Msk \
    (0x1UL << EXTI_SECENR2_SEC36_Pos) /*!< 0x00000010 */
#define EXTI_SECENR2_SEC36 \
    EXTI_SECENR2_SEC36_Msk /*!< Security enable on line 4 */
#define EXTI_SECENR2_SEC37_Pos (5U)
#define EXTI_SECENR2_SEC37_Msk \
    (0x1UL << EXTI_SECENR2_SEC37_Pos) /*!< 0x00000020 */
#define EXTI_SECENR2_SEC37 \
    EXTI_SECENR2_SEC37_Msk /*!< Security enable on line 5 */
#define EXTI_SECENR2_SEC38_Pos (6U)
#define EXTI_SECENR2_SEC38_Msk \
    (0x1UL << EXTI_SECENR2_SEC38_Pos) /*!< 0x00000040 */
#define EXTI_SECENR2_SEC38 \
    EXTI_SECENR2_SEC38_Msk /*!< Security enable on line 6 */
#define EXTI_SECENR2_SEC39_Pos (7U)
#define EXTI_SECENR2_SEC39_Msk \
    (0x1UL << EXTI_SECENR2_SEC39_Pos) /*!< 0x00000080 */
#define EXTI_SECENR2_SEC39 \
    EXTI_SECENR2_SEC39_Msk /*!< Security enable on line 7 */
#define EXTI_SECENR2_SEC40_Pos (8U)
#define EXTI_SECENR2_SEC40_Msk \
    (0x1UL << EXTI_SECENR2_SEC40_Pos) /*!< 0x00000100 */
#define EXTI_SECENR2_SEC40 \
    EXTI_SECENR2_SEC40_Msk /*!< Security enable on line 8 */
#define EXTI_SECENR2_SEC41_Pos (9U)
#define EXTI_SECENR2_SEC41_Msk \
    (0x1UL << EXTI_SECENR2_SEC41_Pos) /*!< 0x00000200 */
#define EXTI_SECENR2_SEC41 \
    EXTI_SECENR2_SEC41_Msk /*!< Security enable on line 9 */
#define EXTI_SECENR2_SEC42_Pos (10U)
#define EXTI_SECENR2_SEC42_Msk \
    (0x1UL << EXTI_SECENR2_SEC42_Pos) /*!< 0x00000400 */
#define EXTI_SECENR2_SEC42 \
    EXTI_SECENR2_SEC42_Msk /*!< Security enable on line 10 */
#define EXTI_SECENR2_SEC43_Pos (11U)
#define EXTI_SECENR2_SEC43_Msk \
    (0x1UL << EXTI_SECENR2_SEC43_Pos) /*!< 0x00000800 */
#define EXTI_SECENR2_SEC43 \
    EXTI_SECENR2_SEC43_Msk /*!< Security enable on line 11 */
#define EXTI_SECENR2_SEC44_Pos (12U)
#define EXTI_SECENR2_SEC44_Msk \
    (0x1UL << EXTI_SECENR2_SEC44_Pos) /*!< 0x00001000 */
#define EXTI_SECENR2_SEC44 \
    EXTI_SECENR2_SEC44_Msk /*!< Security enable on line 12 */
#define EXTI_SECENR2_SEC45_Pos (13U)
#define EXTI_SECENR2_SEC45_Msk \
    (0x1UL << EXTI_SECENR2_SEC45_Pos) /*!< 0x00002000 */
#define EXTI_SECENR2_SEC45 \
    EXTI_SECENR2_SEC45_Msk /*!< Security enable on line 13 */
#define EXTI_SECENR2_SEC46_Pos (14U)
#define EXTI_SECENR2_SEC46_Msk \
    (0x1UL << EXTI_SECENR2_SEC46_Pos) /*!< 0x00004000 */
#define EXTI_SECENR2_SEC46 \
    EXTI_SECENR2_SEC46_Msk /*!< Security enable on line 14 */
#define EXTI_SECENR2_SEC47_Pos (15U)
#define EXTI_SECENR2_SEC47_Msk \
    (0x1UL << EXTI_SECENR2_SEC47_Pos) /*!< 0x00008000 */
#define EXTI_SECENR2_SEC47 \
    EXTI_SECENR2_SEC47_Msk /*!< Security enable on line 15 */
#define EXTI_SECENR2_SEC48_Pos (16U)
#define EXTI_SECENR2_SEC48_Msk \
    (0x1UL << EXTI_SECENR2_SEC48_Pos) /*!< 0x00010000 */
#define EXTI_SECENR2_SEC48 \
    EXTI_SECENR2_SEC48_Msk /*!< Security enable on line 16 */
#define EXTI_SECENR2_SEC49_Pos (17U)
#define EXTI_SECENR2_SEC49_Msk \
    (0x1UL << EXTI_SECENR2_SEC49_Pos) /*!< 0x00020000 */
#define EXTI_SECENR2_SEC49 \
    EXTI_SECENR2_SEC49_Msk /*!< Security enable on line 17 */
#define EXTI_SECENR2_SEC50_Pos (18U)
#define EXTI_SECENR2_SEC50_Msk \
    (0x1UL << EXTI_SECENR2_SEC50_Pos) /*!< 0x00040000 */
#define EXTI_SECENR2_SEC50 \
    EXTI_SECENR2_SEC50_Msk /*!< Security enable on line 18 */
#define EXTI_SECENR2_SEC51_Pos (19U)
#define EXTI_SECENR2_SEC51_Msk \
    (0x1UL << EXTI_SECENR2_SEC51_Pos) /*!< 0x00080000 */
#define EXTI_SECENR2_SEC51 \
    EXTI_SECENR2_SEC51_Msk /*!< Security enable on line 19 */
#define EXTI_SECENR2_SEC52_Pos (20U)
#define EXTI_SECENR2_SEC52_Msk \
    (0x1UL << EXTI_SECENR2_SEC52_Pos) /*!< 0x00100000 */
#define EXTI_SECENR2_SEC52 \
    EXTI_SECENR2_SEC52_Msk /*!< Security enable on line 20 */
#define EXTI_SECENR2_SEC53_Pos (21U)
#define EXTI_SECENR2_SEC53_Msk \
    (0x1UL << EXTI_SECENR2_SEC53_Pos) /*!< 0x00200000 */
#define EXTI_SECENR2_SEC53 \
    EXTI_SECENR2_SEC53_Msk /*!< Security enable on line 21 */
#define EXTI_SECENR2_SEC54_Pos (22U)
#define EXTI_SECENR2_SEC54_Msk \
    (0x1UL << EXTI_SECENR2_SEC54_Pos) /*!< 0x00400000 */
#define EXTI_SECENR2_SEC54 \
    EXTI_SECENR2_SEC54_Msk /*!< Security enable on line 22 */
#define EXTI_SECENR2_SEC55_Pos (23U)
#define EXTI_SECENR2_SEC55_Msk \
    (0x1UL << EXTI_SECENR2_SEC55_Pos) /*!< 0x00800000 */
#define EXTI_SECENR2_SEC55 \
    EXTI_SECENR2_SEC55_Msk /*!< Security enable on line 23 */
#define EXTI_SECENR2_SEC56_Pos (24U)
#define EXTI_SECENR2_SEC56_Msk \
    (0x1UL << EXTI_SECENR2_SEC56_Pos) /*!< 0x01000000 */
#define EXTI_SECENR2_SEC56 \
    EXTI_SECENR2_SEC56_Msk /*!< Security enable on line 24 */
#define EXTI_SECENR2_SEC57_Pos (25U)
#define EXTI_SECENR2_SEC57_Msk \
    (0x1UL << EXTI_SECENR2_SEC57_Pos) /*!< 0x02000000 */
#define EXTI_SECENR2_SEC57 \
    EXTI_SECENR2_SEC57_Msk /*!< Security enable on line 25 */

/*******************  Bit definition for EXTI_PRIVENR2 register  ******************/
#define EXTI_PRIVENR2_PRIV32_Pos (0U)
#define EXTI_PRIVENR2_PRIV32_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV32_Pos) /*!< 0x00000001 */
#define EXTI_PRIVENR2_PRIV32 \
    EXTI_PRIVENR2_PRIV32_Msk /*!< Security enable on line 32 */
#define EXTI_PRIVENR2_PRIV33_Pos (1U)
#define EXTI_PRIVENR2_PRIV33_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV33_Pos) /*!< 0x00000002 */
#define EXTI_PRIVENR2_PRIV33 \
    EXTI_PRIVENR2_PRIV33_Msk /*!< Security enable on line 33 */
#define EXTI_PRIVENR2_PRIV34_Pos (2U)
#define EXTI_PRIVENR2_PRIV34_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV34_Pos) /*!< 0x00000004 */
#define EXTI_PRIVENR2_PRIV34 \
    EXTI_PRIVENR2_PRIV34_Msk /*!< Security enable on line 2 */
#define EXTI_PRIVENR2_PRIV35_Pos (3U)
#define EXTI_PRIVENR2_PRIV35_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV35_Pos) /*!< 0x00000008 */
#define EXTI_PRIVENR2_PRIV35 \
    EXTI_PRIVENR2_PRIV35_Msk /*!< Security enable on line 3 */
#define EXTI_PRIVENR2_PRIV36_Pos (4U)
#define EXTI_PRIVENR2_PRIV36_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV36_Pos) /*!< 0x00000010 */
#define EXTI_PRIVENR2_PRIV36 \
    EXTI_PRIVENR2_PRIV36_Msk /*!< Security enable on line 4 */
#define EXTI_PRIVENR2_PRIV37_Pos (5U)
#define EXTI_PRIVENR2_PRIV37_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV37_Pos) /*!< 0x00000020 */
#define EXTI_PRIVENR2_PRIV37 \
    EXTI_PRIVENR2_PRIV37_Msk /*!< Security enable on line 5 */
#define EXTI_PRIVENR2_PRIV38_Pos (6U)
#define EXTI_PRIVENR2_PRIV38_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV38_Pos) /*!< 0x00000040 */
#define EXTI_PRIVENR2_PRIV38 \
    EXTI_PRIVENR2_PRIV38_Msk /*!< Security enable on line 6 */
#define EXTI_PRIVENR2_PRIV39_Pos (7U)
#define EXTI_PRIVENR2_PRIV39_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV39_Pos) /*!< 0x00000080 */
#define EXTI_PRIVENR2_PRIV39 \
    EXTI_PRIVENR2_PRIV39_Msk /*!< Security enable on line 7 */
#define EXTI_PRIVENR2_PRIV40_Pos (8U)
#define EXTI_PRIVENR2_PRIV40_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV40_Pos) /*!< 0x00000100 */
#define EXTI_PRIVENR2_PRIV40 \
    EXTI_PRIVENR2_PRIV40_Msk /*!< Security enable on line 8 */
#define EXTI_PRIVENR2_PRIV41_Pos (9U)
#define EXTI_PRIVENR2_PRIV41_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV41_Pos) /*!< 0x00000200 */
#define EXTI_PRIVENR2_PRIV41 \
    EXTI_PRIVENR2_PRIV41_Msk /*!< Security enable on line 9 */
#define EXTI_PRIVENR2_PRIV42_Pos (10U)
#define EXTI_PRIVENR2_PRIV42_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV42_Pos) /*!< 0x00000400 */
#define EXTI_PRIVENR2_PRIV42 \
    EXTI_PRIVENR2_PRIV42_Msk /*!< Security enable on line 10 */
#define EXTI_PRIVENR2_PRIV43_Pos (11U)
#define EXTI_PRIVENR2_PRIV43_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV43_Pos) /*!< 0x00000800 */
#define EXTI_PRIVENR2_PRIV43 \
    EXTI_PRIVENR2_PRIV43_Msk /*!< Security enable on line 11 */
#define EXTI_PRIVENR2_PRIV44_Pos (12U)
#define EXTI_PRIVENR2_PRIV44_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV44_Pos) /*!< 0x00001000 */
#define EXTI_PRIVENR2_PRIV44 \
    EXTI_PRIVENR2_PRIV44_Msk /*!< Security enable on line 12 */
#define EXTI_PRIVENR2_PRIV45_Pos (13U)
#define EXTI_PRIVENR2_PRIV45_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV45_Pos) /*!< 0x00002000 */
#define EXTI_PRIVENR2_PRIV45 \
    EXTI_PRIVENR2_PRIV45_Msk /*!< Security enable on line 13 */
#define EXTI_PRIVENR2_PRIV46_Pos (14U)
#define EXTI_PRIVENR2_PRIV46_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV46_Pos) /*!< 0x00004000 */
#define EXTI_PRIVENR2_PRIV46 \
    EXTI_PRIVENR2_PRIV46_Msk /*!< Security enable on line 14 */
#define EXTI_PRIVENR2_PRIV47_Pos (15U)
#define EXTI_PRIVENR2_PRIV47_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV47_Pos) /*!< 0x00008000 */
#define EXTI_PRIVENR2_PRIV47 \
    EXTI_PRIVENR2_PRIV47_Msk /*!< Security enable on line 15 */
#define EXTI_PRIVENR2_PRIV48_Pos (16U)
#define EXTI_PRIVENR2_PRIV48_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV48_Pos) /*!< 0x00010000 */
#define EXTI_PRIVENR2_PRIV48 \
    EXTI_PRIVENR2_PRIV48_Msk /*!< Security enable on line 16 */
#define EXTI_PRIVENR2_PRIV49_Pos (17U)
#define EXTI_PRIVENR2_PRIV49_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV49_Pos) /*!< 0x00020000 */
#define EXTI_PRIVENR2_PRIV49 \
    EXTI_PRIVENR2_PRIV49_Msk /*!< Security enable on line 17 */
#define EXTI_PRIVENR2_PRIV50_Pos (18U)
#define EXTI_PRIVENR2_PRIV50_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV50_Pos) /*!< 0x00040000 */
#define EXTI_PRIVENR2_PRIV50 \
    EXTI_PRIVENR2_PRIV50_Msk /*!< Security enable on line 18 */
#define EXTI_PRIVENR2_PRIV51_Pos (19U)
#define EXTI_PRIVENR2_PRIV51_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV51_Pos) /*!< 0x00080000 */
#define EXTI_PRIVENR2_PRIV51 \
    EXTI_PRIVENR2_PRIV51_Msk /*!< Security enable on line 19 */
#define EXTI_PRIVENR2_PRIV52_Pos (20U)
#define EXTI_PRIVENR2_PRIV52_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV52_Pos) /*!< 0x00100000 */
#define EXTI_PRIVENR2_PRIV52 \
    EXTI_PRIVENR2_PRIV52_Msk /*!< Security enable on line 20 */
#define EXTI_PRIVENR2_PRIV53_Pos (21U)
#define EXTI_PRIVENR2_PRIV53_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV53_Pos) /*!< 0x00200000 */
#define EXTI_PRIVENR2_PRIV53 \
    EXTI_PRIVENR2_PRIV53_Msk /*!< Security enable on line 21 */
#define EXTI_PRIVENR2_PRIV54_Pos (22U)
#define EXTI_PRIVENR2_PRIV54_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV54_Pos) /*!< 0x00400000 */
#define EXTI_PRIVENR2_PRIV54 \
    EXTI_PRIVENR2_PRIV54_Msk /*!< Security enable on line 22 */
#define EXTI_PRIVENR2_PRIV55_Pos (23U)
#define EXTI_PRIVENR2_PRIV55_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV55_Pos) /*!< 0x00800000 */
#define EXTI_PRIVENR2_PRIV55 \
    EXTI_PRIVENR2_PRIV55_Msk /*!< Security enable on line 23 */
#define EXTI_PRIVENR2_PRIV56_Pos (24U)
#define EXTI_PRIVENR2_PRIV56_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV56_Pos) /*!< 0x01000000 */
#define EXTI_PRIVENR2_PRIV56 \
    EXTI_PRIVENR2_PRIV56_Msk /*!< Security enable on line 24 */
#define EXTI_PRIVENR2_PRIV57_Pos (25U)
#define EXTI_PRIVENR2_PRIV57_Msk \
    (0x1UL << EXTI_PRIVENR2_PRIV57_Pos) /*!< 0x02000000 */
#define EXTI_PRIVENR2_PRIV57 \
    EXTI_PRIVENR2_PRIV57_Msk /*!< Security enable on line 25 */

/*****************  Bit definition for EXTI_EXTICR1 register  **************/
#define EXTI_EXTICR1_EXTI0_Pos (0U)
#define EXTI_EXTICR1_EXTI0_Msk \
    (0xFUL << EXTI_EXTICR1_EXTI0_Pos)             /*!< 0x00000007 */
#define EXTI_EXTICR1_EXTI0 EXTI_EXTICR1_EXTI0_Msk /*!< EXTI 0 configuration */
#define EXTI_EXTICR1_EXTI0_0 \
    (0x1UL << EXTI_EXTICR1_EXTI0_Pos) /*!< 0x00000001 */
#define EXTI_EXTICR1_EXTI0_1 \
    (0x2UL << EXTI_EXTICR1_EXTI0_Pos) /*!< 0x00000002 */
#define EXTI_EXTICR1_EXTI0_2 \
    (0x4UL << EXTI_EXTICR1_EXTI0_Pos) /*!< 0x00000004 */
#define EXTI_EXTICR1_EXTI0_3 \
    (0x8UL << EXTI_EXTICR1_EXTI0_Pos) /*!< 0x00000008 */
#define EXTI_EXTICR1_EXTI1_Pos (8U)
#define EXTI_EXTICR1_EXTI1_Msk \
    (0xFUL << EXTI_EXTICR1_EXTI1_Pos)             /*!< 0x00000700 */
#define EXTI_EXTICR1_EXTI1 EXTI_EXTICR1_EXTI1_Msk /*!< EXTI 1 configuration */
#define EXTI_EXTICR1_EXTI1_0 \
    (0x1UL << EXTI_EXTICR1_EXTI1_Pos) /*!< 0x00000100 */
#define EXTI_EXTICR1_EXTI1_1 \
    (0x2UL << EXTI_EXTICR1_EXTI1_Pos) /*!< 0x00000200 */
#define EXTI_EXTICR1_EXTI1_2 \
    (0x4UL << EXTI_EXTICR1_EXTI1_Pos) /*!< 0x00000400 */
#define EXTI_EXTICR1_EXTI1_3 \
    (0x8UL << EXTI_EXTICR1_EXTI1_Pos) /*!< 0x00000800 */
#define EXTI_EXTICR1_EXTI2_Pos (16U)
#define EXTI_EXTICR1_EXTI2_Msk \
    (0xFUL << EXTI_EXTICR1_EXTI2_Pos)             /*!< 0x00070000 */
#define EXTI_EXTICR1_EXTI2 EXTI_EXTICR1_EXTI2_Msk /*!< EXTI 2 configuration */
#define EXTI_EXTICR1_EXTI2_0 \
    (0x1UL << EXTI_EXTICR1_EXTI2_Pos) /*!< 0x00010000 */
#define EXTI_EXTICR1_EXTI2_1 \
    (0x2UL << EXTI_EXTICR1_EXTI2_Pos) /*!< 0x00020000 */
#define EXTI_EXTICR1_EXTI2_2 \
    (0x4UL << EXTI_EXTICR1_EXTI2_Pos) /*!< 0x00040000 */
#define EXTI_EXTICR1_EXTI2_3 \
    (0x8UL << EXTI_EXTICR1_EXTI2_Pos) /*!< 0x00080000 */
#define EXTI_EXTICR1_EXTI3_Pos (24U)
#define EXTI_EXTICR1_EXTI3_Msk \
    (0xFUL << EXTI_EXTICR1_EXTI3_Pos)             /*!< 0x07000000 */
#define EXTI_EXTICR1_EXTI3 EXTI_EXTICR1_EXTI3_Msk /*!< EXTI 3 configuration */
#define EXTI_EXTICR1_EXTI3_0 \
    (0x1UL << EXTI_EXTICR1_EXTI3_Pos) /*!< 0x01000000 */
#define EXTI_EXTICR1_EXTI3_1 \
    (0x2UL << EXTI_EXTICR1_EXTI3_Pos) /*!< 0x02000000 */
#define EXTI_EXTICR1_EXTI3_2 \
    (0x4UL << EXTI_EXTICR1_EXTI3_Pos) /*!< 0x04000000 */
#define EXTI_EXTICR1_EXTI3_3 \
    (0x8UL << EXTI_EXTICR1_EXTI3_Pos) /*!< 0x08000000 */

/*****************  Bit definition for EXTI_EXTICR2 register  **************/
#define EXTI_EXTICR2_EXTI4_Pos (0U)
#define EXTI_EXTICR2_EXTI4_Msk \
    (0xFUL << EXTI_EXTICR2_EXTI4_Pos)             /*!< 0x00000007 */
#define EXTI_EXTICR2_EXTI4 EXTI_EXTICR2_EXTI4_Msk /*!< EXTI 4 configuration */
#define EXTI_EXTICR2_EXTI4_0 \
    (0x1UL << EXTI_EXTICR2_EXTI4_Pos) /*!< 0x00000001 */
#define EXTI_EXTICR2_EXTI4_1 \
    (0x2UL << EXTI_EXTICR2_EXTI4_Pos) /*!< 0x00000002 */
#define EXTI_EXTICR2_EXTI4_2 \
    (0x4UL << EXTI_EXTICR2_EXTI4_Pos) /*!< 0x00000004 */
#define EXTI_EXTICR2_EXTI4_3 \
    (0x8UL << EXTI_EXTICR2_EXTI4_Pos) /*!< 0x00000008 */
#define EXTI_EXTICR2_EXTI5_Pos (8U)
#define EXTI_EXTICR2_EXTI5_Msk \
    (0xFUL << EXTI_EXTICR2_EXTI5_Pos)             /*!< 0x00000700 */
#define EXTI_EXTICR2_EXTI5 EXTI_EXTICR2_EXTI5_Msk /*!< EXTI 5 configuration */
#define EXTI_EXTICR2_EXTI5_0 \
    (0x1UL << EXTI_EXTICR2_EXTI5_Pos) /*!< 0x00000100 */
#define EXTI_EXTICR2_EXTI5_1 \
    (0x2UL << EXTI_EXTICR2_EXTI5_Pos) /*!< 0x00000200 */
#define EXTI_EXTICR2_EXTI5_2 \
    (0x4UL << EXTI_EXTICR2_EXTI5_Pos) /*!< 0x00000400 */
#define EXTI_EXTICR2_EXTI5_3 \
    (0x8UL << EXTI_EXTICR2_EXTI5_Pos) /*!< 0x00000800 */
#define EXTI_EXTICR2_EXTI6_Pos (16U)
#define EXTI_EXTICR2_EXTI6_Msk \
    (0xFUL << EXTI_EXTICR2_EXTI6_Pos)             /*!< 0x00070000 */
#define EXTI_EXTICR2_EXTI6 EXTI_EXTICR2_EXTI6_Msk /*!< EXTI 6 configuration */
#define EXTI_EXTICR2_EXTI6_0 \
    (0x1UL << EXTI_EXTICR2_EXTI6_Pos) /*!< 0x00010000 */
#define EXTI_EXTICR2_EXTI6_1 \
    (0x2UL << EXTI_EXTICR2_EXTI6_Pos) /*!< 0x00020000 */
#define EXTI_EXTICR2_EXTI6_2 \
    (0x4UL << EXTI_EXTICR2_EXTI6_Pos) /*!< 0x00040000 */
#define EXTI_EXTICR2_EXTI6_3 \
    (0x8UL << EXTI_EXTICR2_EXTI6_Pos) /*!< 0x00080000 */
#define EXTI_EXTICR2_EXTI7_Pos (24U)
#define EXTI_EXTICR2_EXTI7_Msk \
    (0xFUL << EXTI_EXTICR2_EXTI7_Pos)             /*!< 0x07000000 */
#define EXTI_EXTICR2_EXTI7 EXTI_EXTICR2_EXTI7_Msk /*!< EXTI 7 configuration */
#define EXTI_EXTICR2_EXTI7_0 \
    (0x1UL << EXTI_EXTICR2_EXTI7_Pos) /*!< 0x01000000 */
#define EXTI_EXTICR2_EXTI7_1 \
    (0x2UL << EXTI_EXTICR2_EXTI7_Pos) /*!< 0x02000000 */
#define EXTI_EXTICR2_EXTI7_2 \
    (0x4UL << EXTI_EXTICR2_EXTI7_Pos) /*!< 0x04000000 */
#define EXTI_EXTICR2_EXTI7_3 \
    (0x8UL << EXTI_EXTICR2_EXTI7_Pos) /*!< 0x08000000 */

/*****************  Bit definition for EXTI_EXTICR3 register  **************/
#define EXTI_EXTICR3_EXTI8_Pos (0U)
#define EXTI_EXTICR3_EXTI8_Msk \
    (0xFUL << EXTI_EXTICR3_EXTI8_Pos)             /*!< 0x00000007 */
#define EXTI_EXTICR3_EXTI8 EXTI_EXTICR3_EXTI8_Msk /*!< EXTI 8 configuration */
#define EXTI_EXTICR3_EXTI8_0 \
    (0x1UL << EXTI_EXTICR3_EXTI8_Pos) /*!< 0x00000001 */
#define EXTI_EXTICR3_EXTI8_1 \
    (0x2UL << EXTI_EXTICR3_EXTI8_Pos) /*!< 0x00000002 */
#define EXTI_EXTICR3_EXTI8_2 \
    (0x4UL << EXTI_EXTICR3_EXTI8_Pos) /*!< 0x00000004 */
#define EXTI_EXTICR3_EXTI8_3 \
    (0x8UL << EXTI_EXTICR3_EXTI8_Pos) /*!< 0x00000008 */
#define EXTI_EXTICR3_EXTI9_Pos (8U)
#define EXTI_EXTICR3_EXTI9_Msk \
    (0xFUL << EXTI_EXTICR3_EXTI9_Pos)             /*!< 0x00000700 */
#define EXTI_EXTICR3_EXTI9 EXTI_EXTICR3_EXTI9_Msk /*!< EXTI 9 configuration */
#define EXTI_EXTICR3_EXTI9_0 \
    (0x1UL << EXTI_EXTICR3_EXTI9_Pos) /*!< 0x00000100 */
#define EXTI_EXTICR3_EXTI9_1 \
    (0x2UL << EXTI_EXTICR3_EXTI9_Pos) /*!< 0x00000200 */
#define EXTI_EXTICR3_EXTI9_2 \
    (0x4UL << EXTI_EXTICR3_EXTI9_Pos) /*!< 0x00000400 */
#define EXTI_EXTICR3_EXTI9_3 \
    (0x8UL << EXTI_EXTICR3_EXTI9_Pos) /*!< 0x00000800 */
#define EXTI_EXTICR3_EXTI10_Pos (16U)
#define EXTI_EXTICR3_EXTI10_Msk \
    (0xFUL << EXTI_EXTICR3_EXTI10_Pos) /*!< 0x00070000 */
#define EXTI_EXTICR3_EXTI10 \
    EXTI_EXTICR3_EXTI10_Msk /*!< EXTI 10 configuration */
#define EXTI_EXTICR3_EXTI10_0 \
    (0x1UL << EXTI_EXTICR3_EXTI10_Pos) /*!< 0x00010000 */
#define EXTI_EXTICR3_EXTI10_1 \
    (0x2UL << EXTI_EXTICR3_EXTI10_Pos) /*!< 0x00020000 */
#define EXTI_EXTICR3_EXTI10_2 \
    (0x4UL << EXTI_EXTICR3_EXTI10_Pos) /*!< 0x00040000 */
#define EXTI_EXTICR3_EXTI10_3 \
    (0x8UL << EXTI_EXTICR3_EXTI10_Pos) /*!< 0x00080000 */
#define EXTI_EXTICR3_EXTI11_Pos (24U)
#define EXTI_EXTICR3_EXTI11_Msk \
    (0xFUL << EXTI_EXTICR3_EXTI11_Pos) /*!< 0x07000000 */
#define EXTI_EXTICR3_EXTI11 \
    EXTI_EXTICR3_EXTI11_Msk /*!< EXTI 11 configuration */
#define EXTI_EXTICR3_EXTI11_0 \
    (0x1UL << EXTI_EXTICR3_EXTI11_Pos) /*!< 0x01000000 */
#define EXTI_EXTICR3_EXTI11_1 \
    (0x2UL << EXTI_EXTICR3_EXTI11_Pos) /*!< 0x02000000 */
#define EXTI_EXTICR3_EXTI11_2 \
    (0x4UL << EXTI_EXTICR3_EXTI11_Pos) /*!< 0x04000000 */
#define EXTI_EXTICR3_EXTI11_3 \
    (0x8UL << EXTI_EXTICR3_EXTI11_Pos) /*!< 0x08000000 */

/*****************  Bit definition for EXTI_EXTICR4 register  **************/
#define EXTI_EXTICR4_EXTI12_Pos (0U)
#define EXTI_EXTICR4_EXTI12_Msk \
    (0xFUL << EXTI_EXTICR4_EXTI12_Pos) /*!< 0x00000007 */
#define EXTI_EXTICR4_EXTI12 \
    EXTI_EXTICR4_EXTI12_Msk /*!< EXTI 12 configuration */
#define EXTI_EXTICR4_EXTI12_0 \
    (0x1UL << EXTI_EXTICR4_EXTI12_Pos) /*!< 0x00000001 */
#define EXTI_EXTICR4_EXTI12_1 \
    (0x2UL << EXTI_EXTICR4_EXTI12_Pos) /*!< 0x00000002 */
#define EXTI_EXTICR4_EXTI12_2 \
    (0x4UL << EXTI_EXTICR4_EXTI12_Pos) /*!< 0x00000004 */
#define EXTI_EXTICR4_EXTI12_3 \
    (0x8UL << EXTI_EXTICR4_EXTI12_Pos) /*!< 0x00000008 */
#define EXTI_EXTICR4_EXTI13_Pos (8U)
#define EXTI_EXTICR4_EXTI13_Msk \
    (0xFUL << EXTI_EXTICR4_EXTI13_Pos) /*!< 0x00000700 */
#define EXTI_EXTICR4_EXTI13 \
    EXTI_EXTICR4_EXTI13_Msk /*!< EXTI 13 configuration */
#define EXTI_EXTICR4_EXTI13_0 \
    (0x1UL << EXTI_EXTICR4_EXTI13_Pos) /*!< 0x00000100 */
#define EXTI_EXTICR4_EXTI13_1 \
    (0x2UL << EXTI_EXTICR4_EXTI13_Pos) /*!< 0x00000200 */
#define EXTI_EXTICR4_EXTI13_2 \
    (0x4UL << EXTI_EXTICR4_EXTI13_Pos) /*!< 0x00000400 */
#define EXTI_EXTICR4_EXTI13_3 \
    (0x8UL << EXTI_EXTICR4_EXTI13_Pos) /*!< 0x00000800 */
#define EXTI_EXTICR4_EXTI14_Pos (16U)
#define EXTI_EXTICR4_EXTI14_Msk \
    (0xFUL << EXTI_EXTICR4_EXTI14_Pos) /*!< 0x00070000 */
#define EXTI_EXTICR4_EXTI14 \
    EXTI_EXTICR4_EXTI14_Msk /*!< EXTI 14 configuration */
#define EXTI_EXTICR4_EXTI14_0 \
    (0x1UL << EXTI_EXTICR4_EXTI14_Pos) /*!< 0x00010000 */
#define EXTI_EXTICR4_EXTI14_1 \
    (0x2UL << EXTI_EXTICR4_EXTI14_Pos) /*!< 0x00020000 */
#define EXTI_EXTICR4_EXTI14_2 \
    (0x4UL << EXTI_EXTICR4_EXTI14_Pos) /*!< 0x00040000 */
#define EXTI_EXTICR4_EXTI14_3 \
    (0x8UL << EXTI_EXTICR4_EXTI14_Pos) /*!< 0x00080000 */
#define EXTI_EXTICR4_EXTI15_Pos (24U)
#define EXTI_EXTICR4_EXTI15_Msk \
    (0xFUL << EXTI_EXTICR4_EXTI15_Pos) /*!< 0x07000000 */
#define EXTI_EXTICR4_EXTI15 \
    EXTI_EXTICR4_EXTI15_Msk /*!< EXTI 15 configuration */
#define EXTI_EXTICR4_EXTI15_0 \
    (0x1UL << EXTI_EXTICR4_EXTI15_Pos) /*!< 0x01000000 */
#define EXTI_EXTICR4_EXTI15_1 \
    (0x2UL << EXTI_EXTICR4_EXTI15_Pos) /*!< 0x02000000 */
#define EXTI_EXTICR4_EXTI15_2 \
    (0x4UL << EXTI_EXTICR4_EXTI15_Pos) /*!< 0x04000000 */
#define EXTI_EXTICR4_EXTI15_3 \
    (0x8UL << EXTI_EXTICR4_EXTI15_Pos) /*!< 0x08000000 */

/*******************  Bit definition for EXTI_IMR1 register  ******************/
#define EXTI_IMR1_IM_Pos (0U)
#define EXTI_IMR1_IM_Msk (0xFFFFFFFFUL << EXTI_IMR1_IM_Pos) /*!< 0xFFFFFFFF */
#define EXTI_IMR1_IM EXTI_IMR1_IM_Msk /*!< Interrupt Mask */
#define EXTI_IMR1_IM0_Pos (0U)
#define EXTI_IMR1_IM0_Msk (0x1UL << EXTI_IMR1_IM0_Pos) /*!< 0x00000001 */
#define EXTI_IMR1_IM0 EXTI_IMR1_IM0_Msk /*!< Interrupt Mask on line 0 */
#define EXTI_IMR1_IM1_Pos (1U)
#define EXTI_IMR1_IM1_Msk (0x1UL << EXTI_IMR1_IM1_Pos) /*!< 0x00000002 */
#define EXTI_IMR1_IM1 EXTI_IMR1_IM1_Msk /*!< Interrupt Mask on line 1 */
#define EXTI_IMR1_IM2_Pos (2U)
#define EXTI_IMR1_IM2_Msk (0x1UL << EXTI_IMR1_IM2_Pos) /*!< 0x00000004 */
#define EXTI_IMR1_IM2 EXTI_IMR1_IM2_Msk /*!< Interrupt Mask on line 2 */
#define EXTI_IMR1_IM3_Pos (3U)
#define EXTI_IMR1_IM3_Msk (0x1UL << EXTI_IMR1_IM3_Pos) /*!< 0x00000008 */
#define EXTI_IMR1_IM3 EXTI_IMR1_IM3_Msk /*!< Interrupt Mask on line 3 */
#define EXTI_IMR1_IM4_Pos (4U)
#define EXTI_IMR1_IM4_Msk (0x1UL << EXTI_IMR1_IM4_Pos) /*!< 0x00000010 */
#define EXTI_IMR1_IM4 EXTI_IMR1_IM4_Msk /*!< Interrupt Mask on line 4 */
#define EXTI_IMR1_IM5_Pos (5U)
#define EXTI_IMR1_IM5_Msk (0x1UL << EXTI_IMR1_IM5_Pos) /*!< 0x00000020 */
#define EXTI_IMR1_IM5 EXTI_IMR1_IM5_Msk /*!< Interrupt Mask on line 5 */
#define EXTI_IMR1_IM6_Pos (6U)
#define EXTI_IMR1_IM6_Msk (0x1UL << EXTI_IMR1_IM6_Pos) /*!< 0x00000040 */
#define EXTI_IMR1_IM6 EXTI_IMR1_IM6_Msk /*!< Interrupt Mask on line 6 */
#define EXTI_IMR1_IM7_Pos (7U)
#define EXTI_IMR1_IM7_Msk (0x1UL << EXTI_IMR1_IM7_Pos) /*!< 0x00000080 */
#define EXTI_IMR1_IM7 EXTI_IMR1_IM7_Msk /*!< Interrupt Mask on line 7 */
#define EXTI_IMR1_IM8_Pos (8U)
#define EXTI_IMR1_IM8_Msk (0x1UL << EXTI_IMR1_IM8_Pos) /*!< 0x00000100 */
#define EXTI_IMR1_IM8 EXTI_IMR1_IM8_Msk /*!< Interrupt Mask on line 8 */
#define EXTI_IMR1_IM9_Pos (9U)
#define EXTI_IMR1_IM9_Msk (0x1UL << EXTI_IMR1_IM9_Pos) /*!< 0x00000200 */
#define EXTI_IMR1_IM9 EXTI_IMR1_IM9_Msk /*!< Interrupt Mask on line 9 */
#define EXTI_IMR1_IM10_Pos (10U)
#define EXTI_IMR1_IM10_Msk (0x1UL << EXTI_IMR1_IM10_Pos) /*!< 0x00000400 */
#define EXTI_IMR1_IM10 EXTI_IMR1_IM10_Msk /*!< Interrupt Mask on line 10 */
#define EXTI_IMR1_IM11_Pos (11U)
#define EXTI_IMR1_IM11_Msk (0x1UL << EXTI_IMR1_IM11_Pos) /*!< 0x00000800 */
#define EXTI_IMR1_IM11 EXTI_IMR1_IM11_Msk /*!< Interrupt Mask on line 11 */
#define EXTI_IMR1_IM12_Pos (12U)
#define EXTI_IMR1_IM12_Msk (0x1UL << EXTI_IMR1_IM12_Pos) /*!< 0x00001000 */
#define EXTI_IMR1_IM12 EXTI_IMR1_IM12_Msk /*!< Interrupt Mask on line 12 */
#define EXTI_IMR1_IM13_Pos (13U)
#define EXTI_IMR1_IM13_Msk (0x1UL << EXTI_IMR1_IM13_Pos) /*!< 0x00002000 */
#define EXTI_IMR1_IM13 EXTI_IMR1_IM13_Msk /*!< Interrupt Mask on line 13 */
#define EXTI_IMR1_IM14_Pos (14U)
#define EXTI_IMR1_IM14_Msk (0x1UL << EXTI_IMR1_IM14_Pos) /*!< 0x00004000 */
#define EXTI_IMR1_IM14 EXTI_IMR1_IM14_Msk /*!< Interrupt Mask on line 14 */
#define EXTI_IMR1_IM15_Pos (15U)
#define EXTI_IMR1_IM15_Msk (0x1UL << EXTI_IMR1_IM15_Pos) /*!< 0x00008000 */
#define EXTI_IMR1_IM15 EXTI_IMR1_IM15_Msk /*!< Interrupt Mask on line 15 */
#define EXTI_IMR1_IM16_Pos (16U)
#define EXTI_IMR1_IM16_Msk (0x1UL << EXTI_IMR1_IM16_Pos) /*!< 0x00010000 */
#define EXTI_IMR1_IM16 EXTI_IMR1_IM16_Msk /*!< Interrupt Mask on line 16 */
#define EXTI_IMR1_IM17_Pos (17U)
#define EXTI_IMR1_IM17_Msk (0x1UL << EXTI_IMR1_IM17_Pos) /*!< 0x00020000 */
#define EXTI_IMR1_IM17 EXTI_IMR1_IM17_Msk /*!< Interrupt Mask on line 17 */
#define EXTI_IMR1_IM18_Pos (18U)
#define EXTI_IMR1_IM18_Msk (0x1UL << EXTI_IMR1_IM18_Pos) /*!< 0x00040000 */
#define EXTI_IMR1_IM18 EXTI_IMR1_IM18_Msk /*!< Interrupt Mask on line 18 */
#define EXTI_IMR1_IM19_Pos (19U)
#define EXTI_IMR1_IM19_Msk (0x1UL << EXTI_IMR1_IM19_Pos) /*!< 0x00080000 */
#define EXTI_IMR1_IM19 EXTI_IMR1_IM19_Msk /*!< Interrupt Mask on line 19 */
#define EXTI_IMR1_IM20_Pos (20U)
#define EXTI_IMR1_IM20_Msk (0x1UL << EXTI_IMR1_IM20_Pos) /*!< 0x00100000 */
#define EXTI_IMR1_IM20 EXTI_IMR1_IM20_Msk /*!< Interrupt Mask on line 20 */
#define EXTI_IMR1_IM21_Pos (21U)
#define EXTI_IMR1_IM21_Msk (0x1UL << EXTI_IMR1_IM21_Pos) /*!< 0x00200000 */
#define EXTI_IMR1_IM21 EXTI_IMR1_IM21_Msk /*!< Interrupt Mask on line 21 */
#define EXTI_IMR1_IM22_Pos (22U)
#define EXTI_IMR1_IM22_Msk (0x1UL << EXTI_IMR1_IM22_Pos) /*!< 0x00400000 */
#define EXTI_IMR1_IM22 EXTI_IMR1_IM22_Msk /*!< Interrupt Mask on line 22 */
#define EXTI_IMR1_IM23_Pos (23U)
#define EXTI_IMR1_IM23_Msk (0x1UL << EXTI_IMR1_IM23_Pos) /*!< 0x00800000 */
#define EXTI_IMR1_IM23 EXTI_IMR1_IM23_Msk /*!< Interrupt Mask on line 23 */
#define EXTI_IMR1_IM24_Pos (24U)
#define EXTI_IMR1_IM24_Msk (0x1UL << EXTI_IMR1_IM24_Pos) /*!< 0x01000000 */
#define EXTI_IMR1_IM24 EXTI_IMR1_IM24_Msk /*!< Interrupt Mask on line 24 */
#define EXTI_IMR1_IM25_Pos (25U)
#define EXTI_IMR1_IM25_Msk (0x1UL << EXTI_IMR1_IM25_Pos) /*!< 0x02000000 */
#define EXTI_IMR1_IM25 EXTI_IMR1_IM25_Msk /*!< Interrupt Mask on line 25 */
#define EXTI_IMR1_IM26_Pos (26U)
#define EXTI_IMR1_IM26_Msk (0x1UL << EXTI_IMR1_IM26_Pos) /*!< 0x04000000 */
#define EXTI_IMR1_IM26 EXTI_IMR1_IM26_Msk /*!< Interrupt Mask on line 26 */
#define EXTI_IMR1_IM27_Pos (27U)
#define EXTI_IMR1_IM27_Msk (0x1UL << EXTI_IMR1_IM27_Pos) /*!< 0x08000000 */
#define EXTI_IMR1_IM27 EXTI_IMR1_IM27_Msk /*!< Interrupt Mask on line 27 */
#define EXTI_IMR1_IM28_Pos (28U)
#define EXTI_IMR1_IM28_Msk (0x1UL << EXTI_IMR1_IM28_Pos) /*!< 0x10000000 */
#define EXTI_IMR1_IM28 EXTI_IMR1_IM28_Msk /*!< Interrupt Mask on line 28 */
#define EXTI_IMR1_IM29_Pos (29U)
#define EXTI_IMR1_IM29_Msk (0x1UL << EXTI_IMR1_IM29_Pos) /*!< 0x20000000 */
#define EXTI_IMR1_IM29 EXTI_IMR1_IM29_Msk /*!< Interrupt Mask on line 29 */
#define EXTI_IMR1_IM30_Pos (30U)
#define EXTI_IMR1_IM30_Msk (0x1UL << EXTI_IMR1_IM30_Pos) /*!< 0x40000000 */
#define EXTI_IMR1_IM30 EXTI_IMR1_IM30_Msk /*!< Interrupt Mask on line 30 */
#define EXTI_IMR1_IM31_Pos (31U)
#define EXTI_IMR1_IM31_Msk (0x1UL << EXTI_IMR1_IM31_Pos) /*!< 0x80000000 */
#define EXTI_IMR1_IM31 EXTI_IMR1_IM31_Msk /*!< Interrupt Mask on line 31 */

/*******************  Bit definition for EXTI_EMR1 register  ******************/
#define EXTI_EMR1_EM_Pos (0U)
#define EXTI_EMR1_EM_Msk (0xFFFFFFFFUL << EXTI_EMR1_EM_Pos) /*!< 0xFFFFFFFF */
#define EXTI_EMR1_EM EXTI_EMR1_EM_Msk                       /*!< Event Mask */
#define EXTI_EMR1_EM0_Pos (0U)
#define EXTI_EMR1_EM0_Msk (0x1UL << EXTI_EMR1_EM0_Pos) /*!< 0x00000001 */
#define EXTI_EMR1_EM0 EXTI_EMR1_EM0_Msk /*!< Event Mask on line 0 */
#define EXTI_EMR1_EM1_Pos (1U)
#define EXTI_EMR1_EM1_Msk (0x1UL << EXTI_EMR1_EM1_Pos) /*!< 0x00000002 */
#define EXTI_EMR1_EM1 EXTI_EMR1_EM1_Msk /*!< Event Mask on line 1 */
#define EXTI_EMR1_EM2_Pos (2U)
#define EXTI_EMR1_EM2_Msk (0x1UL << EXTI_EMR1_EM2_Pos) /*!< 0x00000004 */
#define EXTI_EMR1_EM2 EXTI_EMR1_EM2_Msk /*!< Event Mask on line 2 */
#define EXTI_EMR1_EM3_Pos (3U)
#define EXTI_EMR1_EM3_Msk (0x1UL << EXTI_EMR1_EM3_Pos) /*!< 0x00000008 */
#define EXTI_EMR1_EM3 EXTI_EMR1_EM3_Msk /*!< Event Mask on line 3 */
#define EXTI_EMR1_EM4_Pos (4U)
#define EXTI_EMR1_EM4_Msk (0x1UL << EXTI_EMR1_EM4_Pos) /*!< 0x00000010 */
#define EXTI_EMR1_EM4 EXTI_EMR1_EM4_Msk /*!< Event Mask on line 4 */
#define EXTI_EMR1_EM5_Pos (5U)
#define EXTI_EMR1_EM5_Msk (0x1UL << EXTI_EMR1_EM5_Pos) /*!< 0x00000020 */
#define EXTI_EMR1_EM5 EXTI_EMR1_EM5_Msk /*!< Event Mask on line 5 */
#define EXTI_EMR1_EM6_Pos (6U)
#define EXTI_EMR1_EM6_Msk (0x1UL << EXTI_EMR1_EM6_Pos) /*!< 0x00000040 */
#define EXTI_EMR1_EM6 EXTI_EMR1_EM6_Msk /*!< Event Mask on line 6 */
#define EXTI_EMR1_EM7_Pos (7U)
#define EXTI_EMR1_EM7_Msk (0x1UL << EXTI_EMR1_EM7_Pos) /*!< 0x00000080 */
#define EXTI_EMR1_EM7 EXTI_EMR1_EM7_Msk /*!< Event Mask on line 7 */
#define EXTI_EMR1_EM8_Pos (8U)
#define EXTI_EMR1_EM8_Msk (0x1UL << EXTI_EMR1_EM8_Pos) /*!< 0x00000100 */
#define EXTI_EMR1_EM8 EXTI_EMR1_EM8_Msk /*!< Event Mask on line 8 */
#define EXTI_EMR1_EM9_Pos (9U)
#define EXTI_EMR1_EM9_Msk (0x1UL << EXTI_EMR1_EM9_Pos) /*!< 0x00000200 */
#define EXTI_EMR1_EM9 EXTI_EMR1_EM9_Msk /*!< Event Mask on line 9 */
#define EXTI_EMR1_EM10_Pos (10U)
#define EXTI_EMR1_EM10_Msk (0x1UL << EXTI_EMR1_EM10_Pos) /*!< 0x00000400 */
#define EXTI_EMR1_EM10 EXTI_EMR1_EM10_Msk /*!< Event Mask on line 10 */
#define EXTI_EMR1_EM11_Pos (11U)
#define EXTI_EMR1_EM11_Msk (0x1UL << EXTI_EMR1_EM11_Pos) /*!< 0x00000800 */
#define EXTI_EMR1_EM11 EXTI_EMR1_EM11_Msk /*!< Event Mask on line 11 */
#define EXTI_EMR1_EM12_Pos (12U)
#define EXTI_EMR1_EM12_Msk (0x1UL << EXTI_EMR1_EM12_Pos) /*!< 0x00001000 */
#define EXTI_EMR1_EM12 EXTI_EMR1_EM12_Msk /*!< Event Mask on line 12 */
#define EXTI_EMR1_EM13_Pos (13U)
#define EXTI_EMR1_EM13_Msk (0x1UL << EXTI_EMR1_EM13_Pos) /*!< 0x00002000 */
#define EXTI_EMR1_EM13 EXTI_EMR1_EM13_Msk /*!< Event Mask on line 13 */
#define EXTI_EMR1_EM14_Pos (14U)
#define EXTI_EMR1_EM14_Msk (0x1UL << EXTI_EMR1_EM14_Pos) /*!< 0x00004000 */
#define EXTI_EMR1_EM14 EXTI_EMR1_EM14_Msk /*!< Event Mask on line 14 */
#define EXTI_EMR1_EM15_Pos (15U)
#define EXTI_EMR1_EM15_Msk (0x1UL << EXTI_EMR1_EM15_Pos) /*!< 0x00008000 */
#define EXTI_EMR1_EM15 EXTI_EMR1_EM15_Msk /*!< Event Mask on line 15 */
#define EXTI_EMR1_EM16_Pos (16U)
#define EXTI_EMR1_EM16_Msk (0x1UL << EXTI_EMR1_EM16_Pos) /*!< 0x00010000 */
#define EXTI_EMR1_EM16 EXTI_EMR1_EM16_Msk /*!< Event Mask on line 16 */
#define EXTI_EMR1_EM17_Pos (17U)
#define EXTI_EMR1_EM17_Msk (0x1UL << EXTI_EMR1_EM17_Pos) /*!< 0x00020000 */
#define EXTI_EMR1_EM17 EXTI_EMR1_EM17_Msk /*!< Event Mask on line 17 */
#define EXTI_EMR1_EM18_Pos (18U)
#define EXTI_EMR1_EM18_Msk (0x1UL << EXTI_EMR1_EM18_Pos) /*!< 0x00040000 */
#define EXTI_EMR1_EM18 EXTI_EMR1_EM18_Msk /*!< Event Mask on line 18 */
#define EXTI_EMR1_EM19_Pos (19U)
#define EXTI_EMR1_EM19_Msk (0x1UL << EXTI_EMR1_EM19_Pos) /*!< 0x00080000 */
#define EXTI_EMR1_EM19 EXTI_EMR1_EM19_Msk /*!< Event Mask on line 19 */
#define EXTI_EMR1_EM20_Pos (20U)
#define EXTI_EMR1_EM20_Msk (0x1UL << EXTI_EMR1_EM20_Pos) /*!< 0x00100000 */
#define EXTI_EMR1_EM20 EXTI_EMR1_EM20_Msk /*!< Event Mask on line 20 */
#define EXTI_EMR1_EM21_Pos (21U)
#define EXTI_EMR1_EM21_Msk (0x1UL << EXTI_EMR1_EM21_Pos) /*!< 0x00200000 */
#define EXTI_EMR1_EM21 EXTI_EMR1_EM21_Msk /*!< Event Mask on line 21 */
#define EXTI_EMR1_EM22_Pos (22U)
#define EXTI_EMR1_EM22_Msk (0x1UL << EXTI_EMR1_EM22_Pos) /*!< 0x00400000 */
#define EXTI_EMR1_EM22 EXTI_EMR1_EM22_Msk /*!< Event Mask on line 22 */
#define EXTI_EMR1_EM23_Pos (23U)
#define EXTI_EMR1_EM23_Msk (0x1UL << EXTI_EMR1_EM23_Pos) /*!< 0x00800000 */
#define EXTI_EMR1_EM23 EXTI_EMR1_EM23_Msk /*!< Event Mask on line 23 */
#define EXTI_EMR1_EM24_Pos (24U)
#define EXTI_EMR1_EM24_Msk (0x1UL << EXTI_EMR1_EM24_Pos) /*!< 0x01000000 */
#define EXTI_EMR1_EM24 EXTI_EMR1_EM24_Msk /*!< Event Mask on line 24 */
#define EXTI_EMR1_EM25_Pos (25U)
#define EXTI_EMR1_EM25_Msk (0x1UL << EXTI_EMR1_EM25_Pos) /*!< 0x02000000 */
#define EXTI_EMR1_EM25 EXTI_EMR1_EM25_Msk /*!< Event Mask on line 25 */
#define EXTI_EMR1_EM26_Pos (26U)
#define EXTI_EMR1_EM26_Msk (0x1UL << EXTI_EMR1_EM26_Pos) /*!< 0x04000000 */
#define EXTI_EMR1_EM26 EXTI_EMR1_EM26_Msk /*!< Event Mask on line 26 */
#define EXTI_EMR1_EM27_Pos (27U)
#define EXTI_EMR1_EM27_Msk (0x1UL << EXTI_EMR1_EM27_Pos) /*!< 0x08000000 */
#define EXTI_EMR1_EM27 EXTI_EMR1_EM27_Msk /*!< Event Mask on line 27 */
#define EXTI_EMR1_EM28_Pos (28U)
#define EXTI_EMR1_EM28_Msk (0x1UL << EXTI_EMR1_EM28_Pos) /*!< 0x10000000 */
#define EXTI_EMR1_EM28 EXTI_EMR1_EM28_Msk /*!< Event Mask on line 28 */
#define EXTI_EMR1_EM29_Pos (29U)
#define EXTI_EMR1_EM29_Msk (0x1UL << EXTI_EMR1_EM29_Pos) /*!< 0x20000000 */
#define EXTI_EMR1_EM29 EXTI_EMR1_EM29_Msk /*!< Event Mask on line 29 */
#define EXTI_EMR1_EM30_Pos (30U)
#define EXTI_EMR1_EM30_Msk (0x1UL << EXTI_EMR1_EM30_Pos) /*!< 0x40000000 */
#define EXTI_EMR1_EM30 EXTI_EMR1_EM30_Msk /*!< Event Mask on line 30 */
#define EXTI_EMR1_EM31_Pos (31U)
#define EXTI_EMR1_EM31_Msk (0x1UL << EXTI_EMR1_EM31_Pos) /*!< 0x80000000 */
#define EXTI_EMR1_EM31 EXTI_EMR1_EM31_Msk /*!< Event Mask on line 31 */

/*******************  Bit definition for EXTI_IMR2 register  *******************/
#define EXTI_IMR2_IM_Pos (0U)
#define EXTI_IMR2_IM_Msk (0x003FFFFFUL << EXTI_IMR2_IM_Pos) /*!< 0x003FFFFF */
#define EXTI_IMR2_IM EXTI_IMR2_IM_Msk /*!< Interrupt Mask */
#define EXTI_IMR2_IM32_Pos (0U)
#define EXTI_IMR2_IM32_Msk (0x1UL << EXTI_IMR2_IM32_Pos) /*!< 0x00000001 */
#define EXTI_IMR2_IM32 EXTI_IMR2_IM32_Msk /*!< Interrupt Mask on line 32 */
#define EXTI_IMR2_IM33_Pos (1U)
#define EXTI_IMR2_IM33_Msk (0x1UL << EXTI_IMR2_IM33_Pos) /*!< 0x00000002 */
#define EXTI_IMR2_IM33 EXTI_IMR2_IM33_Msk /*!< Interrupt Mask on line 33 */
#define EXTI_IMR2_IM34_Pos (2U)
#define EXTI_IMR2_IM34_Msk (0x1UL << EXTI_IMR2_IM34_Pos) /*!< 0x00000004 */
#define EXTI_IMR2_IM34 EXTI_IMR2_IM34_Msk /*!< Interrupt Mask on line 34 */
#define EXTI_IMR2_IM35_Pos (3U)
#define EXTI_IMR2_IM35_Msk (0x1UL << EXTI_IMR2_IM35_Pos) /*!< 0x00000008 */
#define EXTI_IMR2_IM35 EXTI_IMR2_IM35_Msk /*!< Interrupt Mask on line 35 */
#define EXTI_IMR2_IM36_Pos (4U)
#define EXTI_IMR2_IM36_Msk (0x1UL << EXTI_IMR2_IM36_Pos) /*!< 0x00000010 */
#define EXTI_IMR2_IM36 EXTI_IMR2_IM36_Msk /*!< Interrupt Mask on line 36 */
#define EXTI_IMR2_IM37_Pos (5U)
#define EXTI_IMR2_IM37_Msk (0x1UL << EXTI_IMR2_IM37_Pos) /*!< 0x00000020 */
#define EXTI_IMR2_IM37 EXTI_IMR2_IM37_Msk /*!< Interrupt Mask on line 37 */
#define EXTI_IMR2_IM38_Pos (6U)
#define EXTI_IMR2_IM38_Msk (0x1UL << EXTI_IMR2_IM38_Pos) /*!< 0x00000040 */
#define EXTI_IMR2_IM38 EXTI_IMR2_IM38_Msk /*!< Interrupt Mask on line 38 */
#define EXTI_IMR2_IM39_Pos (7U)
#define EXTI_IMR2_IM39_Msk (0x1UL << EXTI_IMR2_IM39_Pos) /*!< 0x00000080 */
#define EXTI_IMR2_IM39 EXTI_IMR2_IM39_Msk /*!< Interrupt Mask on line 39 */
#define EXTI_IMR2_IM40_Pos (8U)
#define EXTI_IMR2_IM40_Msk (0x1UL << EXTI_IMR2_IM40_Pos) /*!< 0x00000100 */
#define EXTI_IMR2_IM40 EXTI_IMR2_IM40_Msk /*!< Interrupt Mask on line 40 */
#define EXTI_IMR2_IM41_Pos (9U)
#define EXTI_IMR2_IM41_Msk (0x1UL << EXTI_IMR2_IM41_Pos) /*!< 0x00000200 */
#define EXTI_IMR2_IM41 EXTI_IMR2_IM41_Msk /*!< Interrupt Mask on line 41 */
#define EXTI_IMR2_IM42_Pos (10U)
#define EXTI_IMR2_IM42_Msk (0x1UL << EXTI_IMR2_IM42_Pos) /*!< 0x00000400 */
#define EXTI_IMR2_IM42 EXTI_IMR2_IM42_Msk /*!< Interrupt Mask on line 42 */
#define EXTI_IMR2_IM43_Pos (11U)
#define EXTI_IMR2_IM43_Msk (0x1UL << EXTI_IMR2_IM43_Pos) /*!< 0x00000800 */
#define EXTI_IMR2_IM43 EXTI_IMR2_IM43_Msk /*!< Interrupt Mask on line 43 */
#define EXTI_IMR2_IM44_Pos (12U)
#define EXTI_IMR2_IM44_Msk (0x1UL << EXTI_IMR2_IM44_Pos) /*!< 0x00001000 */
#define EXTI_IMR2_IM44 EXTI_IMR2_IM44_Msk /*!< Interrupt Mask on line 44 */
#define EXTI_IMR2_IM46_Pos (14U)
#define EXTI_IMR2_IM46_Msk (0x1UL << EXTI_IMR2_IM46_Pos) /*!< 0x00004000 */
#define EXTI_IMR2_IM46 EXTI_IMR2_IM46_Msk /*!< Interrupt Mask on line 46 */
#define EXTI_IMR2_IM47_Pos (15U)
#define EXTI_IMR2_IM47_Msk (0x1UL << EXTI_IMR2_IM47_Pos) /*!< 0x00008000 */
#define EXTI_IMR2_IM47 EXTI_IMR2_IM47_Msk /*!< Interrupt Mask on line 47 */
#define EXTI_IMR2_IM48_Pos (16U)
#define EXTI_IMR2_IM48_Msk (0x1UL << EXTI_IMR2_IM48_Pos) /*!< 0x00010000 */
#define EXTI_IMR2_IM48 EXTI_IMR2_IM48_Msk /*!< Interrupt Mask on line 48 */
#define EXTI_IMR2_IM49_Pos (17U)
#define EXTI_IMR2_IM49_Msk (0x1UL << EXTI_IMR2_IM49_Pos) /*!< 0x00020000 */
#define EXTI_IMR2_IM49 EXTI_IMR2_IM49_Msk /*!< Interrupt Mask on line 49 */
#define EXTI_IMR2_IM50_Pos (18U)
#define EXTI_IMR2_IM50_Msk (0x1UL << EXTI_IMR2_IM50_Pos) /*!< 0x00040000 */
#define EXTI_IMR2_IM50 EXTI_IMR2_IM50_Msk /*!< Interrupt Mask on line 50 */
#define EXTI_IMR2_IM51_Pos (19U)
#define EXTI_IMR2_IM51_Msk (0x1UL << EXTI_IMR2_IM51_Pos) /*!< 0x00080000 */
#define EXTI_IMR2_IM51 EXTI_IMR2_IM51_Msk /*!< Interrupt Mask on line 51 */
#define EXTI_IMR2_IM52_Pos (20U)
#define EXTI_IMR2_IM52_Msk (0x1UL << EXTI_IMR2_IM52_Pos) /*!< 0x00100000 */
#define EXTI_IMR2_IM52 EXTI_IMR2_IM52_Msk /*!< Interrupt Mask on line 52 */
#define EXTI_IMR2_IM53_Pos (21U)
#define EXTI_IMR2_IM53_Msk (0x1UL << EXTI_IMR2_IM53_Pos) /*!< 0x00200000 */
#define EXTI_IMR2_IM53 EXTI_IMR2_IM53_Msk /*!< Interrupt Mask on line 53 */
#define EXTI_IMR2_IM54_Pos (22U)
#define EXTI_IMR2_IM54_Msk (0x1UL << EXTI_IMR2_IM54_Pos) /*!< 0x00400000 */
#define EXTI_IMR2_IM54 EXTI_IMR2_IM54_Msk /*!< Interrupt Mask on line 54 */
#define EXTI_IMR2_IM55_Pos (23U)
#define EXTI_IMR2_IM55_Msk (0x1UL << EXTI_IMR2_IM55_Pos) /*!< 0x00800000 */
#define EXTI_IMR2_IM55 EXTI_IMR2_IM55_Msk /*!< Interrupt Mask on line 55 */
#define EXTI_IMR2_IM56_Pos (24U)
#define EXTI_IMR2_IM56_Msk (0x1UL << EXTI_IMR2_IM56_Pos) /*!< 0x01000000 */
#define EXTI_IMR2_IM56 EXTI_IMR2_IM56_Msk /*!< Interrupt Mask on line 56 */
#define EXTI_IMR2_IM57_Pos (25U)
#define EXTI_IMR2_IM57_Msk (0x1UL << EXTI_IMR2_IM57_Pos) /*!< 0x02000000 */
#define EXTI_IMR2_IM57 EXTI_IMR2_IM57_Msk /*!< Interrupt Mask on line 57 */

/*******************  Bit definition for EXTI_EMR2 register  *******************/
#define EXTI_EMR2_EM_Pos (0U)
#define EXTI_EMR2_EM_Msk (0x03FFFFFFUL << EXTI_EMR2_EM_Pos) /*!< 0x03FFFFFF */
#define EXTI_EMR2_EM EXTI_EMR2_EM_Msk                       /*!< Event Mask */
#define EXTI_EMR2_EM32_Pos (0U)
#define EXTI_EMR2_EM32_Msk (0x1UL << EXTI_EMR2_EM32_Pos) /*!< 0x00000001 */
#define EXTI_EMR2_EM32 EXTI_EMR2_EM32_Msk /*!< Event Mask on line 32*/
#define EXTI_EMR2_EM33_Pos (1U)
#define EXTI_EMR2_EM33_Msk (0x1UL << EXTI_EMR2_EM33_Pos) /*!< 0x00000002 */
#define EXTI_EMR2_EM33 EXTI_EMR2_EM33_Msk /*!< Event Mask on line 33*/
#define EXTI_EMR2_EM34_Pos (2U)
#define EXTI_EMR2_EM34_Msk (0x1UL << EXTI_EMR2_EM34_Pos) /*!< 0x00000004 */
#define EXTI_EMR2_EM34 EXTI_EMR2_EM34_Msk /*!< Event Mask on line 34*/
#define EXTI_EMR2_EM35_Pos (3U)
#define EXTI_EMR2_EM35_Msk (0x1UL << EXTI_EMR2_EM35_Pos) /*!< 0x00000008 */
#define EXTI_EMR2_EM35 EXTI_EMR2_EM35_Msk /*!< Event Mask on line 35*/
#define EXTI_EMR2_EM36_Pos (4U)
#define EXTI_EMR2_EM36_Msk (0x1UL << EXTI_EMR2_EM36_Pos) /*!< 0x00000010 */
#define EXTI_EMR2_EM36 EXTI_EMR2_EM36_Msk /*!< Event Mask on line 36*/
#define EXTI_EMR2_EM37_Pos (5U)
#define EXTI_EMR2_EM37_Msk (0x1UL << EXTI_EMR2_EM37_Pos) /*!< 0x00000020 */
#define EXTI_EMR2_EM37 EXTI_EMR2_EM37_Msk /*!< Event Mask on line 37*/
#define EXTI_EMR2_EM38_Pos (6U)
#define EXTI_EMR2_EM38_Msk (0x1UL << EXTI_EMR2_EM38_Pos) /*!< 0x00000040 */
#define EXTI_EMR2_EM38 EXTI_EMR2_EM38_Msk /*!< Event Mask on line 38*/
#define EXTI_EMR2_EM39_Pos (7U)
#define EXTI_EMR2_EM39_Msk (0x1UL << EXTI_EMR2_EM39_Pos) /*!< 0x00000080 */
#define EXTI_EMR2_EM39 EXTI_EMR2_EM39_Msk /*!< Event Mask on line 39*/
#define EXTI_EMR2_EM40_Pos (8U)
#define EXTI_EMR2_EM40_Msk (0x1UL << EXTI_EMR2_EM40_Pos) /*!< 0x00000100 */
#define EXTI_EMR2_EM40 EXTI_EMR2_EM40_Msk /*!< Event Mask on line 40*/
#define EXTI_EMR2_EM41_Pos (9U)
#define EXTI_EMR2_EM41_Msk (0x1UL << EXTI_EMR2_EM41_Pos) /*!< 0x00000200 */
#define EXTI_EMR2_EM41 EXTI_EMR2_EM41_Msk /*!< Event Mask on line 41*/
#define EXTI_EMR2_EM42_Pos (10U)
#define EXTI_EMR2_EM42_Msk (0x1UL << EXTI_EMR2_EM42_Pos) /*!< 0x00000400 */
#define EXTI_EMR2_EM42 EXTI_EMR2_EM42_Msk /*!< Event Mask on line 42 */
#define EXTI_EMR2_EM43_Pos (11U)
#define EXTI_EMR2_EM43_Msk (0x1UL << EXTI_EMR2_EM43_Pos) /*!< 0x00000800 */
#define EXTI_EMR2_EM43 EXTI_EMR2_EM43_Msk /*!< Event Mask on line 43 */
#define EXTI_EMR2_EM44_Pos (12U)
#define EXTI_EMR2_EM44_Msk (0x1UL << EXTI_EMR2_EM44_Pos) /*!< 0x00001000 */
#define EXTI_EMR2_EM44 EXTI_EMR2_EM44_Msk /*!< Event Mask on line 44 */
#define EXTI_EMR2_EM46_Pos (14U)
#define EXTI_EMR2_EM46_Msk (0x1UL << EXTI_EMR2_EM46_Pos) /*!< 0x00004000 */
#define EXTI_EMR2_EM46 EXTI_EMR2_EM46_Msk /*!< Event Mask on line 46 */
#define EXTI_EMR2_EM47_Pos (15U)
#define EXTI_EMR2_EM47_Msk (0x1UL << EXTI_EMR2_EM47_Pos) /*!< 0x00008000 */
#define EXTI_EMR2_EM47 EXTI_EMR2_EM47_Msk /*!< Event Mask on line 47 */
#define EXTI_EMR2_EM48_Pos (16U)
#define EXTI_EMR2_EM48_Msk (0x1UL << EXTI_EMR2_EM48_Pos) /*!< 0x00010000 */
#define EXTI_EMR2_EM48 EXTI_EMR2_EM48_Msk /*!< Event Mask on line 48 */
#define EXTI_EMR2_EM49_Pos (17U)
#define EXTI_EMR2_EM49_Msk (0x1UL << EXTI_EMR2_EM49_Pos) /*!< 0x00020000 */
#define EXTI_EMR2_EM49 EXTI_EMR2_EM49_Msk /*!< Event Mask on line 49 */
#define EXTI_EMR2_EM50_Pos (18U)
#define EXTI_EMR2_EM50_Msk (0x1UL << EXTI_EMR2_EM50_Pos) /*!< 0x00040000 */
#define EXTI_EMR2_EM50 EXTI_EMR2_EM50_Msk /*!< Event Mask on line 50 */
#define EXTI_EMR2_EM51_Pos (19U)
#define EXTI_EMR2_EM51_Msk (0x1UL << EXTI_EMR2_EM51_Pos) /*!< 0x00080000 */
#define EXTI_EMR2_EM51 EXTI_EMR2_EM51_Msk /*!< Event Mask on line 51 */
#define EXTI_EMR2_EM52_Pos (20U)
#define EXTI_EMR2_EM52_Msk (0x1UL << EXTI_EMR2_EM52_Pos) /*!< 0x00100000 */
#define EXTI_EMR2_EM52 EXTI_EMR2_EM52_Msk /*!< Event Mask on line 52 */
#define EXTI_EMR2_EM53_Pos (21U)
#define EXTI_EMR2_EM53_Msk (0x1UL << EXTI_EMR2_EM53_Pos) /*!< 0x00200000 */
#define EXTI_EMR2_EM53 EXTI_EMR2_EM53_Msk /*!< Event Mask on line 53 */
#define EXTI_EMR2_EM54_Pos (22U)
#define EXTI_EMR2_EM54_Msk (0x1UL << EXTI_EMR2_EM54_Pos) /*!< 0x00400000 */
#define EXTI_EMR2_EM54 EXTI_EMR2_EM54_Msk /*!< Event Mask on line 54 */
#define EXTI_EMR2_EM55_Pos (23U)
#define EXTI_EMR2_EM55_Msk (0x1UL << EXTI_EMR2_EM55_Pos) /*!< 0x00800000 */
#define EXTI_EMR2_EM55 EXTI_EMR2_EM55_Msk /*!< Event Mask on line 55 */
#define EXTI_EMR2_EM56_Pos (24U)
#define EXTI_EMR2_EM56_Msk (0x1UL << EXTI_EMR2_EM56_Pos) /*!< 0x01000000 */
#define EXTI_EMR2_EM56 EXTI_EMR2_EM56_Msk /*!< Event Mask on line 56 */
#define EXTI_EMR2_EM57_Pos (25U)
#define EXTI_EMR2_EM57_Msk (0x1UL << EXTI_EMR2_EM57_Pos) /*!< 0x02000000 */
#define EXTI_EMR2_EM57 EXTI_EMR2_EM57_Msk /*!< Event Mask on line 57 */

/******************************************************************************/
/*                                                                            */
/*                 Flexible Datarate Controller Area Network                  */
/*                                                                            */
/******************************************************************************/
/*!<FDCAN control and status registers */
/*****************  Bit definition for FDCAN_CREL register  *******************/
#define FDCAN_CREL_DAY_Pos (0U)
#define FDCAN_CREL_DAY_Msk (0xFFUL << FDCAN_CREL_DAY_Pos) /*!< 0x000000FF */
#define FDCAN_CREL_DAY \
    FDCAN_CREL_DAY_Msk /*!<Timestamp Day                           */
#define FDCAN_CREL_MON_Pos (8U)
#define FDCAN_CREL_MON_Msk (0xFFUL << FDCAN_CREL_MON_Pos) /*!< 0x0000FF00 */
#define FDCAN_CREL_MON \
    FDCAN_CREL_MON_Msk /*!<Timestamp Month                         */
#define FDCAN_CREL_YEAR_Pos (16U)
#define FDCAN_CREL_YEAR_Msk (0xFUL << FDCAN_CREL_YEAR_Pos) /*!< 0x000F0000 */
#define FDCAN_CREL_YEAR \
    FDCAN_CREL_YEAR_Msk /*!<Timestamp Year                          */
#define FDCAN_CREL_SUBSTEP_Pos (20U)
#define FDCAN_CREL_SUBSTEP_Msk \
    (0xFUL << FDCAN_CREL_SUBSTEP_Pos) /*!< 0x00F00000 */
#define FDCAN_CREL_SUBSTEP \
    FDCAN_CREL_SUBSTEP_Msk /*!<Sub-step of Core release                */
#define FDCAN_CREL_STEP_Pos (24U)
#define FDCAN_CREL_STEP_Msk (0xFUL << FDCAN_CREL_STEP_Pos) /*!< 0x0F000000 */
#define FDCAN_CREL_STEP \
    FDCAN_CREL_STEP_Msk /*!<Step of Core release                    */
#define FDCAN_CREL_REL_Pos (28U)
#define FDCAN_CREL_REL_Msk (0xFUL << FDCAN_CREL_REL_Pos) /*!< 0xF0000000 */
#define FDCAN_CREL_REL \
    FDCAN_CREL_REL_Msk /*!<Core release                            */

/*****************  Bit definition for FDCAN_ENDN register  *******************/
#define FDCAN_ENDN_ETV_Pos (0U)
#define FDCAN_ENDN_ETV_Msk \
    (0xFFFFFFFFUL << FDCAN_ENDN_ETV_Pos) /*!< 0xFFFFFFFF */
#define FDCAN_ENDN_ETV \
    FDCAN_ENDN_ETV_Msk /*!<Endianness Test Value                   */

/*****************  Bit definition for FDCAN_DBTP register  *******************/
#define FDCAN_DBTP_DSJW_Pos (0U)
#define FDCAN_DBTP_DSJW_Msk (0xFUL << FDCAN_DBTP_DSJW_Pos) /*!< 0x0000000F */
#define FDCAN_DBTP_DSJW \
    FDCAN_DBTP_DSJW_Msk /*!<Synchronization Jump Width              */
#define FDCAN_DBTP_DTSEG2_Pos (4U)
#define FDCAN_DBTP_DTSEG2_Msk \
    (0xFUL << FDCAN_DBTP_DTSEG2_Pos) /*!< 0x000000F0 */
#define FDCAN_DBTP_DTSEG2 \
    FDCAN_DBTP_DTSEG2_Msk /*!<Data time segment after sample point    */
#define FDCAN_DBTP_DTSEG1_Pos (8U)
#define FDCAN_DBTP_DTSEG1_Msk \
    (0x1FUL << FDCAN_DBTP_DTSEG1_Pos) /*!< 0x00001F00 */
#define FDCAN_DBTP_DTSEG1 \
    FDCAN_DBTP_DTSEG1_Msk /*!<Data time segment before sample point   */
#define FDCAN_DBTP_DBRP_Pos (16U)
#define FDCAN_DBTP_DBRP_Msk (0x1FUL << FDCAN_DBTP_DBRP_Pos) /*!< 0x001F0000 */
#define FDCAN_DBTP_DBRP \
    FDCAN_DBTP_DBRP_Msk /*!<Data BIt Rate Prescaler                 */
#define FDCAN_DBTP_TDC_Pos (23U)
#define FDCAN_DBTP_TDC_Msk (0x1UL << FDCAN_DBTP_TDC_Pos) /*!< 0x00800000 */
#define FDCAN_DBTP_TDC \
    FDCAN_DBTP_TDC_Msk /*!<Transceiver Delay Compensation          */

/*****************  Bit definition for FDCAN_TEST register  *******************/
#define FDCAN_TEST_LBCK_Pos (4U)
#define FDCAN_TEST_LBCK_Msk (0x1UL << FDCAN_TEST_LBCK_Pos) /*!< 0x00000010 */
#define FDCAN_TEST_LBCK \
    FDCAN_TEST_LBCK_Msk /*!<Loop Back mode                           */
#define FDCAN_TEST_TX_Pos (5U)
#define FDCAN_TEST_TX_Msk (0x3UL << FDCAN_TEST_TX_Pos) /*!< 0x00000060 */
#define FDCAN_TEST_TX \
    FDCAN_TEST_TX_Msk /*!<Control of Transmit Pin                  */
#define FDCAN_TEST_RX_Pos (7U)
#define FDCAN_TEST_RX_Msk (0x1UL << FDCAN_TEST_RX_Pos) /*!< 0x00000080 */
#define FDCAN_TEST_RX \
    FDCAN_TEST_RX_Msk /*!<Receive Pin                              */

/*****************  Bit definition for FDCAN_RWD register  ********************/
#define FDCAN_RWD_WDC_Pos (0U)
#define FDCAN_RWD_WDC_Msk (0xFFUL << FDCAN_RWD_WDC_Pos) /*!< 0x000000FF */
#define FDCAN_RWD_WDC \
    FDCAN_RWD_WDC_Msk /*!<Watchdog configuration                   */
#define FDCAN_RWD_WDV_Pos (8U)
#define FDCAN_RWD_WDV_Msk (0xFFUL << FDCAN_RWD_WDV_Pos) /*!< 0x0000FF00 */
#define FDCAN_RWD_WDV \
    FDCAN_RWD_WDV_Msk /*!<Watchdog value                           */

/*****************  Bit definition for FDCAN_CCCR register  ********************/
#define FDCAN_CCCR_INIT_Pos (0U)
#define FDCAN_CCCR_INIT_Msk (0x1UL << FDCAN_CCCR_INIT_Pos) /*!< 0x00000001 */
#define FDCAN_CCCR_INIT \
    FDCAN_CCCR_INIT_Msk /*!<Initialization                           */
#define FDCAN_CCCR_CCE_Pos (1U)
#define FDCAN_CCCR_CCE_Msk (0x1UL << FDCAN_CCCR_CCE_Pos) /*!< 0x00000002 */
#define FDCAN_CCCR_CCE \
    FDCAN_CCCR_CCE_Msk /*!<Configuration Change Enable              */
#define FDCAN_CCCR_ASM_Pos (2U)
#define FDCAN_CCCR_ASM_Msk (0x1UL << FDCAN_CCCR_ASM_Pos) /*!< 0x00000004 */
#define FDCAN_CCCR_ASM \
    FDCAN_CCCR_ASM_Msk /*!<ASM Restricted Operation Mode            */
#define FDCAN_CCCR_CSA_Pos (3U)
#define FDCAN_CCCR_CSA_Msk (0x1UL << FDCAN_CCCR_CSA_Pos) /*!< 0x00000008 */
#define FDCAN_CCCR_CSA \
    FDCAN_CCCR_CSA_Msk /*!<Clock Stop Acknowledge                   */
#define FDCAN_CCCR_CSR_Pos (4U)
#define FDCAN_CCCR_CSR_Msk (0x1UL << FDCAN_CCCR_CSR_Pos) /*!< 0x00000010 */
#define FDCAN_CCCR_CSR \
    FDCAN_CCCR_CSR_Msk /*!<Clock Stop Request                       */
#define FDCAN_CCCR_MON_Pos (5U)
#define FDCAN_CCCR_MON_Msk (0x1UL << FDCAN_CCCR_MON_Pos) /*!< 0x00000020 */
#define FDCAN_CCCR_MON \
    FDCAN_CCCR_MON_Msk /*!<Bus Monitoring Mode                      */
#define FDCAN_CCCR_DAR_Pos (6U)
#define FDCAN_CCCR_DAR_Msk (0x1UL << FDCAN_CCCR_DAR_Pos) /*!< 0x00000040 */
#define FDCAN_CCCR_DAR \
    FDCAN_CCCR_DAR_Msk /*!<Disable Automatic Retransmission         */
#define FDCAN_CCCR_TEST_Pos (7U)
#define FDCAN_CCCR_TEST_Msk (0x1UL << FDCAN_CCCR_TEST_Pos) /*!< 0x00000080 */
#define FDCAN_CCCR_TEST \
    FDCAN_CCCR_TEST_Msk /*!<Test Mode Enable                         */
#define FDCAN_CCCR_FDOE_Pos (8U)
#define FDCAN_CCCR_FDOE_Msk (0x1UL << FDCAN_CCCR_FDOE_Pos) /*!< 0x00000100 */
#define FDCAN_CCCR_FDOE \
    FDCAN_CCCR_FDOE_Msk /*!<FD Operation Enable                      */
#define FDCAN_CCCR_BRSE_Pos (9U)
#define FDCAN_CCCR_BRSE_Msk (0x1UL << FDCAN_CCCR_BRSE_Pos) /*!< 0x00000200 */
#define FDCAN_CCCR_BRSE \
    FDCAN_CCCR_BRSE_Msk /*!<FDCAN Bit Rate Switching                 */
#define FDCAN_CCCR_PXHD_Pos (12U)
#define FDCAN_CCCR_PXHD_Msk (0x1UL << FDCAN_CCCR_PXHD_Pos) /*!< 0x00001000 */
#define FDCAN_CCCR_PXHD \
    FDCAN_CCCR_PXHD_Msk /*!<Protocol Exception Handling Disable      */
#define FDCAN_CCCR_EFBI_Pos (13U)
#define FDCAN_CCCR_EFBI_Msk (0x1UL << FDCAN_CCCR_EFBI_Pos) /*!< 0x00002000 */
#define FDCAN_CCCR_EFBI \
    FDCAN_CCCR_EFBI_Msk /*!<Edge Filtering during Bus Integration    */
#define FDCAN_CCCR_TXP_Pos (14U)
#define FDCAN_CCCR_TXP_Msk (0x1UL << FDCAN_CCCR_TXP_Pos) /*!< 0x00004000 */
#define FDCAN_CCCR_TXP \
    FDCAN_CCCR_TXP_Msk /*!<Two CAN bit times Pause                  */
#define FDCAN_CCCR_NISO_Pos (15U)
#define FDCAN_CCCR_NISO_Msk (0x1UL << FDCAN_CCCR_NISO_Pos) /*!< 0x00008000 */
#define FDCAN_CCCR_NISO \
    FDCAN_CCCR_NISO_Msk /*!<Non ISO Operation                        */

/*****************  Bit definition for FDCAN_NBTP register  ******************* */
#define FDCAN_NBTP_NTSEG2_Pos (0U)
#define FDCAN_NBTP_NTSEG2_Msk \
    (0x7FUL << FDCAN_NBTP_NTSEG2_Pos) /*!< 0x0000007F */
#define FDCAN_NBTP_NTSEG2 \
    FDCAN_NBTP_NTSEG2_Msk /*!<Nominal Time segment after sample point  */
#define FDCAN_NBTP_NTSEG1_Pos (8U)
#define FDCAN_NBTP_NTSEG1_Msk \
    (0xFFUL << FDCAN_NBTP_NTSEG1_Pos) /*!< 0x0000FF00 */
#define FDCAN_NBTP_NTSEG1 \
    FDCAN_NBTP_NTSEG1_Msk /*!<Nominal Time segment before sample point */
#define FDCAN_NBTP_NBRP_Pos (16U)
#define FDCAN_NBTP_NBRP_Msk (0x1FFUL << FDCAN_NBTP_NBRP_Pos) /*!< 0x01FF0000 */
#define FDCAN_NBTP_NBRP \
    FDCAN_NBTP_NBRP_Msk /*!<Bit Rate Prescaler                       */
#define FDCAN_NBTP_NSJW_Pos (25U)
#define FDCAN_NBTP_NSJW_Msk (0x7FUL << FDCAN_NBTP_NSJW_Pos) /*!< 0xFE000000 */
#define FDCAN_NBTP_NSJW \
    FDCAN_NBTP_NSJW_Msk /*!<Nominal (Re)Synchronization Jump Width   */

/*****************  Bit definition for FDCAN_TSCC register  ********************/
#define FDCAN_TSCC_TSS_Pos (0U)
#define FDCAN_TSCC_TSS_Msk (0x3UL << FDCAN_TSCC_TSS_Pos) /*!< 0x00000003 */
#define FDCAN_TSCC_TSS \
    FDCAN_TSCC_TSS_Msk /*!<Timestamp Select                         */
#define FDCAN_TSCC_TCP_Pos (16U)
#define FDCAN_TSCC_TCP_Msk (0xFUL << FDCAN_TSCC_TCP_Pos) /*!< 0x000F0000 */
#define FDCAN_TSCC_TCP \
    FDCAN_TSCC_TCP_Msk /*!<Timestamp Counter Prescaler              */

/*****************  Bit definition for FDCAN_TSCV register  ********************/
#define FDCAN_TSCV_TSC_Pos (0U)
#define FDCAN_TSCV_TSC_Msk (0xFFFFUL << FDCAN_TSCV_TSC_Pos) /*!< 0x0000FFFF */
#define FDCAN_TSCV_TSC \
    FDCAN_TSCV_TSC_Msk /*!<Timestamp Counter                        */

/*****************  Bit definition for FDCAN_TOCC register  ********************/
#define FDCAN_TOCC_ETOC_Pos (0U)
#define FDCAN_TOCC_ETOC_Msk (0x1UL << FDCAN_TOCC_ETOC_Pos) /*!< 0x00000001 */
#define FDCAN_TOCC_ETOC \
    FDCAN_TOCC_ETOC_Msk /*!<Enable Timeout Counter                   */
#define FDCAN_TOCC_TOS_Pos (1U)
#define FDCAN_TOCC_TOS_Msk (0x3UL << FDCAN_TOCC_TOS_Pos) /*!< 0x00000006 */
#define FDCAN_TOCC_TOS \
    FDCAN_TOCC_TOS_Msk /*!<Timeout Select                           */
#define FDCAN_TOCC_TOP_Pos (16U)
#define FDCAN_TOCC_TOP_Msk (0xFFFFUL << FDCAN_TOCC_TOP_Pos) /*!< 0xFFFF0000 */
#define FDCAN_TOCC_TOP \
    FDCAN_TOCC_TOP_Msk /*!<Timeout Period                           */

/*****************  Bit definition for FDCAN_TOCV register  ******************* */
#define FDCAN_TOCV_TOC_Pos (0U)
#define FDCAN_TOCV_TOC_Msk (0xFFFFUL << FDCAN_TOCV_TOC_Pos) /*!< 0x0000FFFF */
#define FDCAN_TOCV_TOC \
    FDCAN_TOCV_TOC_Msk /*!<Timeout Counter                          */

/*****************  Bit definition for FDCAN_ECR register  ******************** */
#define FDCAN_ECR_TEC_Pos (0U)
#define FDCAN_ECR_TEC_Msk (0xFFUL << FDCAN_ECR_TEC_Pos) /*!< 0x000000FF */
#define FDCAN_ECR_TEC \
    FDCAN_ECR_TEC_Msk /*!<Transmit Error Counter                   */
#define FDCAN_ECR_REC_Pos (8U)
#define FDCAN_ECR_REC_Msk (0x7FUL << FDCAN_ECR_REC_Pos) /*!< 0x00007F00 */
#define FDCAN_ECR_REC \
    FDCAN_ECR_REC_Msk /*!<Receive Error Counter                    */
#define FDCAN_ECR_RP_Pos (15U)
#define FDCAN_ECR_RP_Msk (0x1UL << FDCAN_ECR_RP_Pos) /*!< 0x00008000 */
#define FDCAN_ECR_RP \
    FDCAN_ECR_RP_Msk /*!<Receive Error Passive                    */
#define FDCAN_ECR_CEL_Pos (16U)
#define FDCAN_ECR_CEL_Msk (0xFFUL << FDCAN_ECR_CEL_Pos) /*!< 0x00FF0000 */
#define FDCAN_ECR_CEL \
    FDCAN_ECR_CEL_Msk /*!<CAN Error Logging                        */

/*****************  Bit definition for FDCAN_PSR register  ******************** */
#define FDCAN_PSR_LEC_Pos (0U)
#define FDCAN_PSR_LEC_Msk (0x7UL << FDCAN_PSR_LEC_Pos) /*!< 0x00000007 */
#define FDCAN_PSR_LEC \
    FDCAN_PSR_LEC_Msk /*!<Last Error Code                          */
#define FDCAN_PSR_ACT_Pos (3U)
#define FDCAN_PSR_ACT_Msk (0x3UL << FDCAN_PSR_ACT_Pos) /*!< 0x00000018 */
#define FDCAN_PSR_ACT \
    FDCAN_PSR_ACT_Msk /*!<Activity                                 */
#define FDCAN_PSR_EP_Pos (5U)
#define FDCAN_PSR_EP_Msk (0x1UL << FDCAN_PSR_EP_Pos) /*!< 0x00000020 */
#define FDCAN_PSR_EP \
    FDCAN_PSR_EP_Msk /*!<Error Passive                            */
#define FDCAN_PSR_EW_Pos (6U)
#define FDCAN_PSR_EW_Msk (0x1UL << FDCAN_PSR_EW_Pos) /*!< 0x00000040 */
#define FDCAN_PSR_EW \
    FDCAN_PSR_EW_Msk /*!<Warning Status                           */
#define FDCAN_PSR_BO_Pos (7U)
#define FDCAN_PSR_BO_Msk (0x1UL << FDCAN_PSR_BO_Pos) /*!< 0x00000080 */
#define FDCAN_PSR_BO \
    FDCAN_PSR_BO_Msk /*!<Bus_Off Status                           */
#define FDCAN_PSR_DLEC_Pos (8U)
#define FDCAN_PSR_DLEC_Msk (0x7UL << FDCAN_PSR_DLEC_Pos) /*!< 0x00000700 */
#define FDCAN_PSR_DLEC \
    FDCAN_PSR_DLEC_Msk /*!<Data Last Error Code                     */
#define FDCAN_PSR_RESI_Pos (11U)
#define FDCAN_PSR_RESI_Msk (0x1UL << FDCAN_PSR_RESI_Pos) /*!< 0x00000800 */
#define FDCAN_PSR_RESI \
    FDCAN_PSR_RESI_Msk /*!<ESI flag of last received FDCAN Message  */
#define FDCAN_PSR_RBRS_Pos (12U)
#define FDCAN_PSR_RBRS_Msk (0x1UL << FDCAN_PSR_RBRS_Pos) /*!< 0x00001000 */
#define FDCAN_PSR_RBRS \
    FDCAN_PSR_RBRS_Msk /*!<BRS flag of last received FDCAN Message  */
#define FDCAN_PSR_REDL_Pos (13U)
#define FDCAN_PSR_REDL_Msk (0x1UL << FDCAN_PSR_REDL_Pos) /*!< 0x00002000 */
#define FDCAN_PSR_REDL \
    FDCAN_PSR_REDL_Msk /*!<Received FDCAN Message                   */
#define FDCAN_PSR_PXE_Pos (14U)
#define FDCAN_PSR_PXE_Msk (0x1UL << FDCAN_PSR_PXE_Pos) /*!< 0x00004000 */
#define FDCAN_PSR_PXE \
    FDCAN_PSR_PXE_Msk /*!<Protocol Exception Event                 */
#define FDCAN_PSR_TDCV_Pos (16U)
#define FDCAN_PSR_TDCV_Msk (0x7FUL << FDCAN_PSR_TDCV_Pos) /*!< 0x007F0000 */
#define FDCAN_PSR_TDCV \
    FDCAN_PSR_TDCV_Msk /*!<Transmitter Delay Compensation Value     */

/*****************  Bit definition for FDCAN_TDCR register  ******************* */
#define FDCAN_TDCR_TDCF_Pos (0U)
#define FDCAN_TDCR_TDCF_Msk (0x7FUL << FDCAN_TDCR_TDCF_Pos) /*!< 0x0000007F */
#define FDCAN_TDCR_TDCF \
    FDCAN_TDCR_TDCF_Msk /*!<Transmitter Delay Compensation Filter    */
#define FDCAN_TDCR_TDCO_Pos (8U)
#define FDCAN_TDCR_TDCO_Msk (0x7FUL << FDCAN_TDCR_TDCO_Pos) /*!< 0x00007F00 */
#define FDCAN_TDCR_TDCO \
    FDCAN_TDCR_TDCO_Msk /*!<Transmitter Delay Compensation Offset    */

/*****************  Bit definition for FDCAN_IR register  ********************* */
#define FDCAN_IR_RF0N_Pos (0U)
#define FDCAN_IR_RF0N_Msk (0x1UL << FDCAN_IR_RF0N_Pos) /*!< 0x00000001 */
#define FDCAN_IR_RF0N \
    FDCAN_IR_RF0N_Msk /*!<Rx FIFO 0 New Message                    */
#define FDCAN_IR_RF0F_Pos (1U)
#define FDCAN_IR_RF0F_Msk (0x1UL << FDCAN_IR_RF0F_Pos) /*!< 0x00000002 */
#define FDCAN_IR_RF0F \
    FDCAN_IR_RF0F_Msk /*!<Rx FIFO 0 Full                           */
#define FDCAN_IR_RF0L_Pos (2U)
#define FDCAN_IR_RF0L_Msk (0x1UL << FDCAN_IR_RF0L_Pos) /*!< 0x00000004 */
#define FDCAN_IR_RF0L \
    FDCAN_IR_RF0L_Msk /*!<Rx FIFO 0 Message Lost                   */
#define FDCAN_IR_RF1N_Pos (3U)
#define FDCAN_IR_RF1N_Msk (0x1UL << FDCAN_IR_RF1N_Pos) /*!< 0x00000008 */
#define FDCAN_IR_RF1N \
    FDCAN_IR_RF1N_Msk /*!<Rx FIFO 1 New Message                    */
#define FDCAN_IR_RF1F_Pos (4U)
#define FDCAN_IR_RF1F_Msk (0x1UL << FDCAN_IR_RF1F_Pos) /*!< 0x00000010 */
#define FDCAN_IR_RF1F \
    FDCAN_IR_RF1F_Msk /*!<Rx FIFO 1 Full                           */
#define FDCAN_IR_RF1L_Pos (5U)
#define FDCAN_IR_RF1L_Msk (0x1UL << FDCAN_IR_RF1L_Pos) /*!< 0x00000020 */
#define FDCAN_IR_RF1L \
    FDCAN_IR_RF1L_Msk /*!<Rx FIFO 1 Message Lost                   */
#define FDCAN_IR_HPM_Pos (6U)
#define FDCAN_IR_HPM_Msk (0x1UL << FDCAN_IR_HPM_Pos) /*!< 0x00000040 */
#define FDCAN_IR_HPM \
    FDCAN_IR_HPM_Msk /*!<High Priority Message                    */
#define FDCAN_IR_TC_Pos (7U)
#define FDCAN_IR_TC_Msk (0x1UL << FDCAN_IR_TC_Pos) /*!< 0x00000080 */
#define FDCAN_IR_TC \
    FDCAN_IR_TC_Msk /*!<Transmission Completed                   */
#define FDCAN_IR_TCF_Pos (8U)
#define FDCAN_IR_TCF_Msk (0x1UL << FDCAN_IR_TCF_Pos) /*!< 0x00000100 */
#define FDCAN_IR_TCF \
    FDCAN_IR_TCF_Msk /*!<Transmission Cancellation Finished       */
#define FDCAN_IR_TFE_Pos (9U)
#define FDCAN_IR_TFE_Msk (0x1UL << FDCAN_IR_TFE_Pos) /*!< 0x00000200 */
#define FDCAN_IR_TFE \
    FDCAN_IR_TFE_Msk /*!<Tx FIFO Empty                            */
#define FDCAN_IR_TEFN_Pos (10U)
#define FDCAN_IR_TEFN_Msk (0x1UL << FDCAN_IR_TEFN_Pos) /*!< 0x00000400 */
#define FDCAN_IR_TEFN \
    FDCAN_IR_TEFN_Msk /*!<Tx Event FIFO New Entry                  */
#define FDCAN_IR_TEFF_Pos (11U)
#define FDCAN_IR_TEFF_Msk (0x1UL << FDCAN_IR_TEFF_Pos) /*!< 0x00000800 */
#define FDCAN_IR_TEFF \
    FDCAN_IR_TEFF_Msk /*!<Tx Event FIFO Full                       */
#define FDCAN_IR_TEFL_Pos (12U)
#define FDCAN_IR_TEFL_Msk (0x1UL << FDCAN_IR_TEFL_Pos) /*!< 0x00001000 */
#define FDCAN_IR_TEFL \
    FDCAN_IR_TEFL_Msk /*!<Tx Event FIFO Element Lost               */
#define FDCAN_IR_TSW_Pos (13U)
#define FDCAN_IR_TSW_Msk (0x1UL << FDCAN_IR_TSW_Pos) /*!< 0x00002000 */
#define FDCAN_IR_TSW \
    FDCAN_IR_TSW_Msk /*!<Timestamp Wraparound                     */
#define FDCAN_IR_MRAF_Pos (14U)
#define FDCAN_IR_MRAF_Msk (0x1UL << FDCAN_IR_MRAF_Pos) /*!< 0x00004000 */
#define FDCAN_IR_MRAF \
    FDCAN_IR_MRAF_Msk /*!<Message RAM Access Failure               */
#define FDCAN_IR_TOO_Pos (15U)
#define FDCAN_IR_TOO_Msk (0x1UL << FDCAN_IR_TOO_Pos) /*!< 0x00008000 */
#define FDCAN_IR_TOO \
    FDCAN_IR_TOO_Msk /*!<Timeout Occurred                         */
#define FDCAN_IR_ELO_Pos (16U)
#define FDCAN_IR_ELO_Msk (0x1UL << FDCAN_IR_ELO_Pos) /*!< 0x00010000 */
#define FDCAN_IR_ELO \
    FDCAN_IR_ELO_Msk /*!<Error Logging Overflow                   */
#define FDCAN_IR_EP_Pos (17U)
#define FDCAN_IR_EP_Msk (0x1UL << FDCAN_IR_EP_Pos) /*!< 0x00020000 */
#define FDCAN_IR_EP \
    FDCAN_IR_EP_Msk /*!<Error Passive                            */
#define FDCAN_IR_EW_Pos (18U)
#define FDCAN_IR_EW_Msk (0x1UL << FDCAN_IR_EW_Pos) /*!< 0x00040000 */
#define FDCAN_IR_EW \
    FDCAN_IR_EW_Msk /*!<Warning Status                           */
#define FDCAN_IR_BO_Pos (19U)
#define FDCAN_IR_BO_Msk (0x1UL << FDCAN_IR_BO_Pos) /*!< 0x00080000 */
#define FDCAN_IR_BO \
    FDCAN_IR_BO_Msk /*!<Bus_Off Status                           */
#define FDCAN_IR_WDI_Pos (20U)
#define FDCAN_IR_WDI_Msk (0x1UL << FDCAN_IR_WDI_Pos) /*!< 0x00100000 */
#define FDCAN_IR_WDI \
    FDCAN_IR_WDI_Msk /*!<Watchdog Interrupt                       */
#define FDCAN_IR_PEA_Pos (21U)
#define FDCAN_IR_PEA_Msk (0x1UL << FDCAN_IR_PEA_Pos) /*!< 0x00200000 */
#define FDCAN_IR_PEA \
    FDCAN_IR_PEA_Msk /*!<Protocol Error in Arbitration Phase      */
#define FDCAN_IR_PED_Pos (22U)
#define FDCAN_IR_PED_Msk (0x1UL << FDCAN_IR_PED_Pos) /*!< 0x00400000 */
#define FDCAN_IR_PED \
    FDCAN_IR_PED_Msk /*!<Protocol Error in Data Phase             */
#define FDCAN_IR_ARA_Pos (23U)
#define FDCAN_IR_ARA_Msk (0x1UL << FDCAN_IR_ARA_Pos) /*!< 0x00800000 */
#define FDCAN_IR_ARA \
    FDCAN_IR_ARA_Msk /*!<Access to Reserved Address               */

/*****************  Bit definition for FDCAN_IE register  ********************* */
#define FDCAN_IE_RF0NE_Pos (0U)
#define FDCAN_IE_RF0NE_Msk (0x1UL << FDCAN_IE_RF0NE_Pos) /*!< 0x00000001 */
#define FDCAN_IE_RF0NE \
    FDCAN_IE_RF0NE_Msk /*!<Rx FIFO 0 New Message Enable             */
#define FDCAN_IE_RF0FE_Pos (1U)
#define FDCAN_IE_RF0FE_Msk (0x1UL << FDCAN_IE_RF0FE_Pos) /*!< 0x00000002 */
#define FDCAN_IE_RF0FE \
    FDCAN_IE_RF0FE_Msk /*!<Rx FIFO 0 Full Enable                    */
#define FDCAN_IE_RF0LE_Pos (2U)
#define FDCAN_IE_RF0LE_Msk (0x1UL << FDCAN_IE_RF0LE_Pos) /*!< 0x00000004 */
#define FDCAN_IE_RF0LE \
    FDCAN_IE_RF0LE_Msk /*!<Rx FIFO 0 Message Lost Enable            */
#define FDCAN_IE_RF1NE_Pos (3U)
#define FDCAN_IE_RF1NE_Msk (0x1UL << FDCAN_IE_RF1NE_Pos) /*!< 0x00000008 */
#define FDCAN_IE_RF1NE \
    FDCAN_IE_RF1NE_Msk /*!<Rx FIFO 1 New Message Enable             */
#define FDCAN_IE_RF1FE_Pos (4U)
#define FDCAN_IE_RF1FE_Msk (0x1UL << FDCAN_IE_RF1FE_Pos) /*!< 0x00000010 */
#define FDCAN_IE_RF1FE \
    FDCAN_IE_RF1FE_Msk /*!<Rx FIFO 1 Full Enable                    */
#define FDCAN_IE_RF1LE_Pos (5U)
#define FDCAN_IE_RF1LE_Msk (0x1UL << FDCAN_IE_RF1LE_Pos) /*!< 0x00000020 */
#define FDCAN_IE_RF1LE \
    FDCAN_IE_RF1LE_Msk /*!<Rx FIFO 1 Message Lost Enable            */
#define FDCAN_IE_HPME_Pos (6U)
#define FDCAN_IE_HPME_Msk (0x1UL << FDCAN_IE_HPME_Pos) /*!< 0x00000040 */
#define FDCAN_IE_HPME \
    FDCAN_IE_HPME_Msk /*!<High Priority Message Enable             */
#define FDCAN_IE_TCE_Pos (7U)
#define FDCAN_IE_TCE_Msk (0x1UL << FDCAN_IE_TCE_Pos) /*!< 0x00000080 */
#define FDCAN_IE_TCE \
    FDCAN_IE_TCE_Msk /*!<Transmission Completed Enable            */
#define FDCAN_IE_TCFE_Pos (8U)
#define FDCAN_IE_TCFE_Msk (0x1UL << FDCAN_IE_TCFE_Pos) /*!< 0x00000100 */
#define FDCAN_IE_TCFE \
    FDCAN_IE_TCFE_Msk /*!<Transmission Cancellation Finished Enable*/
#define FDCAN_IE_TFEE_Pos (9U)
#define FDCAN_IE_TFEE_Msk (0x1UL << FDCAN_IE_TFEE_Pos) /*!< 0x00000200 */
#define FDCAN_IE_TFEE \
    FDCAN_IE_TFEE_Msk /*!<Tx FIFO Empty Enable                     */
#define FDCAN_IE_TEFNE_Pos (10U)
#define FDCAN_IE_TEFNE_Msk (0x1UL << FDCAN_IE_TEFNE_Pos) /*!< 0x00000400 */
#define FDCAN_IE_TEFNE \
    FDCAN_IE_TEFNE_Msk /*!<Tx Event FIFO New Entry Enable           */
#define FDCAN_IE_TEFFE_Pos (11U)
#define FDCAN_IE_TEFFE_Msk (0x1UL << FDCAN_IE_TEFFE_Pos) /*!< 0x00000800 */
#define FDCAN_IE_TEFFE \
    FDCAN_IE_TEFFE_Msk /*!<Tx Event FIFO Full Enable                */
#define FDCAN_IE_TEFLE_Pos (12U)
#define FDCAN_IE_TEFLE_Msk (0x1UL << FDCAN_IE_TEFLE_Pos) /*!< 0x00001000 */
#define FDCAN_IE_TEFLE \
    FDCAN_IE_TEFLE_Msk /*!<Tx Event FIFO Element Lost Enable        */
#define FDCAN_IE_TSWE_Pos (13U)
#define FDCAN_IE_TSWE_Msk (0x1UL << FDCAN_IE_TSWE_Pos) /*!< 0x00002000 */
#define FDCAN_IE_TSWE \
    FDCAN_IE_TSWE_Msk /*!<Timestamp Wraparound Enable              */
#define FDCAN_IE_MRAFE_Pos (14U)
#define FDCAN_IE_MRAFE_Msk (0x1UL << FDCAN_IE_MRAFE_Pos) /*!< 0x00004000 */
#define FDCAN_IE_MRAFE \
    FDCAN_IE_MRAFE_Msk /*!<Message RAM Access Failure Enable        */
#define FDCAN_IE_TOOE_Pos (15U)
#define FDCAN_IE_TOOE_Msk (0x1UL << FDCAN_IE_TOOE_Pos) /*!< 0x00008000 */
#define FDCAN_IE_TOOE \
    FDCAN_IE_TOOE_Msk /*!<Timeout Occurred Enable                  */
#define FDCAN_IE_ELOE_Pos (16U)
#define FDCAN_IE_ELOE_Msk (0x1UL << FDCAN_IE_ELOE_Pos) /*!< 0x00010000 */
#define FDCAN_IE_ELOE \
    FDCAN_IE_ELOE_Msk /*!<Error Logging Overflow Enable            */
#define FDCAN_IE_EPE_Pos (17U)
#define FDCAN_IE_EPE_Msk (0x1UL << FDCAN_IE_EPE_Pos) /*!< 0x00020000 */
#define FDCAN_IE_EPE \
    FDCAN_IE_EPE_Msk /*!<Error Passive Enable                     */
#define FDCAN_IE_EWE_Pos (18U)
#define FDCAN_IE_EWE_Msk (0x1UL << FDCAN_IE_EWE_Pos) /*!< 0x00040000 */
#define FDCAN_IE_EWE \
    FDCAN_IE_EWE_Msk /*!<Warning Status Enable                    */
#define FDCAN_IE_BOE_Pos (19U)
#define FDCAN_IE_BOE_Msk (0x1UL << FDCAN_IE_BOE_Pos) /*!< 0x00080000 */
#define FDCAN_IE_BOE \
    FDCAN_IE_BOE_Msk /*!<Bus_Off Status Enable                    */
#define FDCAN_IE_WDIE_Pos (20U)
#define FDCAN_IE_WDIE_Msk (0x1UL << FDCAN_IE_WDIE_Pos) /*!< 0x00100000 */
#define FDCAN_IE_WDIE \
    FDCAN_IE_WDIE_Msk /*!<Watchdog Interrupt Enable                */
#define FDCAN_IE_PEAE_Pos (21U)
#define FDCAN_IE_PEAE_Msk (0x1UL << FDCAN_IE_PEAE_Pos) /*!< 0x00200000 */
#define FDCAN_IE_PEAE \
    FDCAN_IE_PEAE_Msk /*!<Protocol Error in Arbitration Phase Enable*/
#define FDCAN_IE_PEDE_Pos (22U)
#define FDCAN_IE_PEDE_Msk (0x1UL << FDCAN_IE_PEDE_Pos) /*!< 0x00400000 */
#define FDCAN_IE_PEDE \
    FDCAN_IE_PEDE_Msk /*!<Protocol Error in Data Phase Enable      */
#define FDCAN_IE_ARAE_Pos (23U)
#define FDCAN_IE_ARAE_Msk (0x1UL << FDCAN_IE_ARAE_Pos) /*!< 0x00800000 */
#define FDCAN_IE_ARAE \
    FDCAN_IE_ARAE_Msk /*!<Access to Reserved Address Enable        */

/*****************  Bit definition for FDCAN_ILS register  ******************** **/
#define FDCAN_ILS_RXFIFO0_Pos (0U)
#define FDCAN_ILS_RXFIFO0_Msk \
    (0x1UL << FDCAN_ILS_RXFIFO0_Pos) /*!< 0x00000001 */
#define FDCAN_ILS_RXFIFO0 \
    FDCAN_ILS_RXFIFO0_Msk /*!<Rx FIFO 0 Message Lost
                                                                                        Rx FIFO 0 is Full
                                                                                        Rx FIFO 0 Has New Message                */
#define FDCAN_ILS_RXFIFO1_Pos (1U)
#define FDCAN_ILS_RXFIFO1_Msk \
    (0x1UL << FDCAN_ILS_RXFIFO1_Pos) /*!< 0x00000002 */
#define FDCAN_ILS_RXFIFO1 \
    FDCAN_ILS_RXFIFO1_Msk /*!<Rx FIFO 1 Message Lost
                                                                                        Rx FIFO 1 is Full
                                                                                        Rx FIFO 1 Has New Message                */
#define FDCAN_ILS_SMSG_Pos (2U)
#define FDCAN_ILS_SMSG_Msk (0x1UL << FDCAN_ILS_SMSG_Pos) /*!< 0x00000004 */
#define FDCAN_ILS_SMSG \
    FDCAN_ILS_SMSG_Msk /*!<Transmission Cancellation Finished
                                                                                        Transmission Completed
                                                                                        High Priority Message                    */
#define FDCAN_ILS_TFERR_Pos (3U)
#define FDCAN_ILS_TFERR_Msk (0x1UL << FDCAN_ILS_TFERR_Pos) /*!< 0x00000008 */
#define FDCAN_ILS_TFERR \
    FDCAN_ILS_TFERR_Msk /*!<Tx Event FIFO Element Lost
                                                                                        Tx Event FIFO Full
                                                                                        Tx Event FIFO New Entry
                                                                                        Tx FIFO Empty Interrupt Line             */
#define FDCAN_ILS_MISC_Pos (4U)
#define FDCAN_ILS_MISC_Msk (0x1UL << FDCAN_ILS_MISC_Pos) /*!< 0x00000010 */
#define FDCAN_ILS_MISC \
    FDCAN_ILS_MISC_Msk /*!<Timeout Occurred
                                                                                        Message RAM Access Failure
                                                                                        Timestamp Wraparound                    */
#define FDCAN_ILS_BERR_Pos (5U)
#define FDCAN_ILS_BERR_Msk (0x1UL << FDCAN_ILS_BERR_Pos) /*!< 0x00000020 */
#define FDCAN_ILS_BERR \
    FDCAN_ILS_BERR_Msk /*!<Error Passive
                                                                                        Error Logging Overflow                   */
#define FDCAN_ILS_PERR_Pos (6U)
#define FDCAN_ILS_PERR_Msk (0x1UL << FDCAN_ILS_PERR_Pos) /*!< 0x00000040 */
#define FDCAN_ILS_PERR \
    FDCAN_ILS_PERR_Msk /*!<Access to Reserved Address Line
                                                                                        Protocol Error in Data Phase Line
                                                                                        Protocol Error in Arbitration Phase Line
                                                                                        Watchdog Interrupt Line
                                                                                        Bus_Off Status
                                                                                        Warning Status                           */

/*****************  Bit definition for FDCAN_ILE register  ******************** **/
#define FDCAN_ILE_EINT0_Pos (0U)
#define FDCAN_ILE_EINT0_Msk (0x1UL << FDCAN_ILE_EINT0_Pos) /*!< 0x00000001 */
#define FDCAN_ILE_EINT0 \
    FDCAN_ILE_EINT0_Msk /*!<Enable Interrupt Line 0                  */
#define FDCAN_ILE_EINT1_Pos (1U)
#define FDCAN_ILE_EINT1_Msk (0x1UL << FDCAN_ILE_EINT1_Pos) /*!< 0x00000002 */
#define FDCAN_ILE_EINT1 \
    FDCAN_ILE_EINT1_Msk /*!<Enable Interrupt Line 1                  */

/*****************  Bit definition for FDCAN_RXGFC register  ****************** **/
#define FDCAN_RXGFC_RRFE_Pos (0U)
#define FDCAN_RXGFC_RRFE_Msk (0x1UL << FDCAN_RXGFC_RRFE_Pos) /*!< 0x00000001 */
#define FDCAN_RXGFC_RRFE \
    FDCAN_RXGFC_RRFE_Msk /*!<Reject Remote Frames Extended            */
#define FDCAN_RXGFC_RRFS_Pos (1U)
#define FDCAN_RXGFC_RRFS_Msk (0x1UL << FDCAN_RXGFC_RRFS_Pos) /*!< 0x00000002 */
#define FDCAN_RXGFC_RRFS \
    FDCAN_RXGFC_RRFS_Msk /*!<Reject Remote Frames Standard            */
#define FDCAN_RXGFC_ANFE_Pos (2U)
#define FDCAN_RXGFC_ANFE_Msk (0x3UL << FDCAN_RXGFC_ANFE_Pos) /*!< 0x0000000C */
#define FDCAN_RXGFC_ANFE \
    FDCAN_RXGFC_ANFE_Msk /*!<Accept Non-matching Frames Extended      */
#define FDCAN_RXGFC_ANFS_Pos (4U)
#define FDCAN_RXGFC_ANFS_Msk (0x3UL << FDCAN_RXGFC_ANFS_Pos) /*!< 0x00000030 */
#define FDCAN_RXGFC_ANFS \
    FDCAN_RXGFC_ANFS_Msk /*!<Accept Non-matching Frames Standard      */
#define FDCAN_RXGFC_F1OM_Pos (8U)
#define FDCAN_RXGFC_F1OM_Msk (0x1UL << FDCAN_RXGFC_F1OM_Pos) /*!< 0x00000100 */
#define FDCAN_RXGFC_F1OM \
    FDCAN_RXGFC_F1OM_Msk /*!<FIFO 1 operation mode                    */
#define FDCAN_RXGFC_F0OM_Pos (9U)
#define FDCAN_RXGFC_F0OM_Msk (0x1UL << FDCAN_RXGFC_F0OM_Pos) /*!< 0x00000200 */
#define FDCAN_RXGFC_F0OM \
    FDCAN_RXGFC_F0OM_Msk /*!<FIFO 0 operation mode                    */
#define FDCAN_RXGFC_LSS_Pos (16U)
#define FDCAN_RXGFC_LSS_Msk (0x1FUL << FDCAN_RXGFC_LSS_Pos) /*!< 0x001F0000 */
#define FDCAN_RXGFC_LSS \
    FDCAN_RXGFC_LSS_Msk /*!<List Size Standard                       */
#define FDCAN_RXGFC_LSE_Pos (24U)
#define FDCAN_RXGFC_LSE_Msk (0xFUL << FDCAN_RXGFC_LSE_Pos) /*!< 0x0F000000 */
#define FDCAN_RXGFC_LSE \
    FDCAN_RXGFC_LSE_Msk /*!<List Size Extended                       */

/*****************  Bit definition for FDCAN_XIDAM register  ****************** **/
#define FDCAN_XIDAM_EIDM_Pos (0U)
#define FDCAN_XIDAM_EIDM_Msk \
    (0x1FFFFFFFUL << FDCAN_XIDAM_EIDM_Pos) /*!< 0x1FFFFFFF */
#define FDCAN_XIDAM_EIDM \
    FDCAN_XIDAM_EIDM_Msk /*!<Extended ID Mask                         */

/*****************  Bit definition for FDCAN_HPMS register  ******************* **/
#define FDCAN_HPMS_BIDX_Pos (0U)
#define FDCAN_HPMS_BIDX_Msk (0x7UL << FDCAN_HPMS_BIDX_Pos) /*!< 0x00000007 */
#define FDCAN_HPMS_BIDX \
    FDCAN_HPMS_BIDX_Msk /*!<Buffer Index                             */
#define FDCAN_HPMS_MSI_Pos (6U)
#define FDCAN_HPMS_MSI_Msk (0x3UL << FDCAN_HPMS_MSI_Pos) /*!< 0x000000C0 */
#define FDCAN_HPMS_MSI \
    FDCAN_HPMS_MSI_Msk /*!<Message Storage Indicator                */
#define FDCAN_HPMS_FIDX_Pos (8U)
#define FDCAN_HPMS_FIDX_Msk (0x1FUL << FDCAN_HPMS_FIDX_Pos) /*!< 0x00001F00 */
#define FDCAN_HPMS_FIDX \
    FDCAN_HPMS_FIDX_Msk /*!<Filter Index                             */
#define FDCAN_HPMS_FLST_Pos (15U)
#define FDCAN_HPMS_FLST_Msk (0x1UL << FDCAN_HPMS_FLST_Pos) /*!< 0x00008000 */
#define FDCAN_HPMS_FLST \
    FDCAN_HPMS_FLST_Msk /*!<Filter List                              */

/*****************  Bit definition for FDCAN_RXF0S register  ****************** **/
#define FDCAN_RXF0S_F0FL_Pos (0U)
#define FDCAN_RXF0S_F0FL_Msk (0xFUL << FDCAN_RXF0S_F0FL_Pos) /*!< 0x0000000F */
#define FDCAN_RXF0S_F0FL \
    FDCAN_RXF0S_F0FL_Msk /*!<Rx FIFO 0 Fill Level                     */
#define FDCAN_RXF0S_F0GI_Pos (8U)
#define FDCAN_RXF0S_F0GI_Msk (0x3UL << FDCAN_RXF0S_F0GI_Pos) /*!< 0x00000300 */
#define FDCAN_RXF0S_F0GI \
    FDCAN_RXF0S_F0GI_Msk /*!<Rx FIFO 0 Get Index                      */
#define FDCAN_RXF0S_F0PI_Pos (16U)
#define FDCAN_RXF0S_F0PI_Msk (0x3UL << FDCAN_RXF0S_F0PI_Pos) /*!< 0x00030000 */
#define FDCAN_RXF0S_F0PI \
    FDCAN_RXF0S_F0PI_Msk /*!<Rx FIFO 0 Put Index                      */
#define FDCAN_RXF0S_F0F_Pos (24U)
#define FDCAN_RXF0S_F0F_Msk (0x1UL << FDCAN_RXF0S_F0F_Pos) /*!< 0x01000000 */
#define FDCAN_RXF0S_F0F \
    FDCAN_RXF0S_F0F_Msk /*!<Rx FIFO 0 Full                           */
#define FDCAN_RXF0S_RF0L_Pos (25U)
#define FDCAN_RXF0S_RF0L_Msk (0x1UL << FDCAN_RXF0S_RF0L_Pos) /*!< 0x02000000 */
#define FDCAN_RXF0S_RF0L \
    FDCAN_RXF0S_RF0L_Msk /*!<Rx FIFO 0 Message Lost                   */

/*****************  Bit definition for FDCAN_RXF0A register  ****************** **/
#define FDCAN_RXF0A_F0AI_Pos (0U)
#define FDCAN_RXF0A_F0AI_Msk (0x7UL << FDCAN_RXF0A_F0AI_Pos) /*!< 0x00000007 */
#define FDCAN_RXF0A_F0AI \
    FDCAN_RXF0A_F0AI_Msk /*!<Rx FIFO 0 Acknowledge Index              */

/*****************  Bit definition for FDCAN_RXF1S register  ****************** **/
#define FDCAN_RXF1S_F1FL_Pos (0U)
#define FDCAN_RXF1S_F1FL_Msk (0xFUL << FDCAN_RXF1S_F1FL_Pos) /*!< 0x0000000F */
#define FDCAN_RXF1S_F1FL \
    FDCAN_RXF1S_F1FL_Msk /*!<Rx FIFO 1 Fill Level                     */
#define FDCAN_RXF1S_F1GI_Pos (8U)
#define FDCAN_RXF1S_F1GI_Msk (0x3UL << FDCAN_RXF1S_F1GI_Pos) /*!< 0x00000300 */
#define FDCAN_RXF1S_F1GI \
    FDCAN_RXF1S_F1GI_Msk /*!<Rx FIFO 1 Get Index                      */
#define FDCAN_RXF1S_F1PI_Pos (16U)
#define FDCAN_RXF1S_F1PI_Msk (0x3UL << FDCAN_RXF1S_F1PI_Pos) /*!< 0x00030000 */
#define FDCAN_RXF1S_F1PI \
    FDCAN_RXF1S_F1PI_Msk /*!<Rx FIFO 1 Put Index                      */
#define FDCAN_RXF1S_F1F_Pos (24U)
#define FDCAN_RXF1S_F1F_Msk (0x1UL << FDCAN_RXF1S_F1F_Pos) /*!< 0x01000000 */
#define FDCAN_RXF1S_F1F \
    FDCAN_RXF1S_F1F_Msk /*!<Rx FIFO 1 Full                           */
#define FDCAN_RXF1S_RF1L_Pos (25U)
#define FDCAN_RXF1S_RF1L_Msk (0x1UL << FDCAN_RXF1S_RF1L_Pos) /*!< 0x02000000 */
#define FDCAN_RXF1S_RF1L \
    FDCAN_RXF1S_RF1L_Msk /*!<Rx FIFO 1 Message Lost                   */

/*****************  Bit definition for FDCAN_RXF1A register  ****************** **/
#define FDCAN_RXF1A_F1AI_Pos (0U)
#define FDCAN_RXF1A_F1AI_Msk (0x7UL << FDCAN_RXF1A_F1AI_Pos) /*!< 0x00000007 */
#define FDCAN_RXF1A_F1AI \
    FDCAN_RXF1A_F1AI_Msk /*!<Rx FIFO 1 Acknowledge Index              */

/*****************  Bit definition for FDCAN_TXBC register  ******************* **/
#define FDCAN_TXBC_TFQM_Pos (24U)
#define FDCAN_TXBC_TFQM_Msk (0x1UL << FDCAN_TXBC_TFQM_Pos) /*!< 0x01000000 */
#define FDCAN_TXBC_TFQM \
    FDCAN_TXBC_TFQM_Msk /*!<Tx FIFO/Queue Mode                       */

/*****************  Bit definition for FDCAN_TXFQS register  ****************** ***/
#define FDCAN_TXFQS_TFFL_Pos (0U)
#define FDCAN_TXFQS_TFFL_Msk (0x7UL << FDCAN_TXFQS_TFFL_Pos) /*!< 0x00000007 */
#define FDCAN_TXFQS_TFFL \
    FDCAN_TXFQS_TFFL_Msk /*!<Tx FIFO Free Level                       */
#define FDCAN_TXFQS_TFGI_Pos (8U)
#define FDCAN_TXFQS_TFGI_Msk (0x3UL << FDCAN_TXFQS_TFGI_Pos) /*!< 0x00000300 */
#define FDCAN_TXFQS_TFGI \
    FDCAN_TXFQS_TFGI_Msk /*!<Tx FIFO Get Index                        */
#define FDCAN_TXFQS_TFQPI_Pos (16U)
#define FDCAN_TXFQS_TFQPI_Msk \
    (0x3UL << FDCAN_TXFQS_TFQPI_Pos) /*!< 0x00030000 */
#define FDCAN_TXFQS_TFQPI \
    FDCAN_TXFQS_TFQPI_Msk /*!<Tx FIFO/Queue Put Index                  */
#define FDCAN_TXFQS_TFQF_Pos (21U)
#define FDCAN_TXFQS_TFQF_Msk (0x1UL << FDCAN_TXFQS_TFQF_Pos) /*!< 0x00200000 */
#define FDCAN_TXFQS_TFQF \
    FDCAN_TXFQS_TFQF_Msk /*!<Tx FIFO/Queue Full                       */

/*****************  Bit definition for FDCAN_TXBRP register  ****************** ***/
#define FDCAN_TXBRP_TRP_Pos (0U)
#define FDCAN_TXBRP_TRP_Msk (0x7UL << FDCAN_TXBRP_TRP_Pos) /*!< 0x00000007 */
#define FDCAN_TXBRP_TRP \
    FDCAN_TXBRP_TRP_Msk /*!<Transmission Request Pending             */

/*****************  Bit definition for FDCAN_TXBAR register  ****************** ***/
#define FDCAN_TXBAR_AR_Pos (0U)
#define FDCAN_TXBAR_AR_Msk (0x7UL << FDCAN_TXBAR_AR_Pos) /*!< 0x00000007 */
#define FDCAN_TXBAR_AR \
    FDCAN_TXBAR_AR_Msk /*!<Add Request                              */

/*****************  Bit definition for FDCAN_TXBCR register  ****************** ***/
#define FDCAN_TXBCR_CR_Pos (0U)
#define FDCAN_TXBCR_CR_Msk (0x7UL << FDCAN_TXBCR_CR_Pos) /*!< 0x00000007 */
#define FDCAN_TXBCR_CR \
    FDCAN_TXBCR_CR_Msk /*!<Cancellation Request                     */

/*****************  Bit definition for FDCAN_TXBTO register  ****************** ***/
#define FDCAN_TXBTO_TO_Pos (0U)
#define FDCAN_TXBTO_TO_Msk (0x7UL << FDCAN_TXBTO_TO_Pos) /*!< 0x00000007 */
#define FDCAN_TXBTO_TO \
    FDCAN_TXBTO_TO_Msk /*!<Transmission Occurred                    */

/*****************  Bit definition for FDCAN_TXBCF register  ****************** ***/
#define FDCAN_TXBCF_CF_Pos (0U)
#define FDCAN_TXBCF_CF_Msk (0x7UL << FDCAN_TXBCF_CF_Pos) /*!< 0x00000007 */
#define FDCAN_TXBCF_CF \
    FDCAN_TXBCF_CF_Msk /*!<Cancellation Finished                    */

/*****************  Bit definition for FDCAN_TXBTIE register  ***************** ***/
#define FDCAN_TXBTIE_TIE_Pos (0U)
#define FDCAN_TXBTIE_TIE_Msk (0x7UL << FDCAN_TXBTIE_TIE_Pos) /*!< 0x00000007 */
#define FDCAN_TXBTIE_TIE \
    FDCAN_TXBTIE_TIE_Msk /*!<Transmission Interrupt Enable            */

/*****************  Bit definition for FDCAN_ TXBCIE register  **************** ***/
#define FDCAN_TXBCIE_CFIE_Pos (0U)
#define FDCAN_TXBCIE_CFIE_Msk \
    (0x7UL << FDCAN_TXBCIE_CFIE_Pos) /*!< 0x00000007 */
#define FDCAN_TXBCIE_CFIE \
    FDCAN_TXBCIE_CFIE_Msk /*!<Cancellation Finished Interrupt Enable   */

/*****************  Bit definition for FDCAN_TXEFS register  ****************** ***/
#define FDCAN_TXEFS_EFFL_Pos (0U)
#define FDCAN_TXEFS_EFFL_Msk (0x7UL << FDCAN_TXEFS_EFFL_Pos) /*!< 0x00000007 */
#define FDCAN_TXEFS_EFFL \
    FDCAN_TXEFS_EFFL_Msk /*!<Event FIFO Fill Level                    */
#define FDCAN_TXEFS_EFGI_Pos (8U)
#define FDCAN_TXEFS_EFGI_Msk (0x3UL << FDCAN_TXEFS_EFGI_Pos) /*!< 0x00000300 */
#define FDCAN_TXEFS_EFGI \
    FDCAN_TXEFS_EFGI_Msk /*!<Event FIFO Get Index                     */
#define FDCAN_TXEFS_EFPI_Pos (16U)
#define FDCAN_TXEFS_EFPI_Msk (0x3UL << FDCAN_TXEFS_EFPI_Pos) /*!< 0x00030000 */
#define FDCAN_TXEFS_EFPI \
    FDCAN_TXEFS_EFPI_Msk /*!<Event FIFO Put Index                     */
#define FDCAN_TXEFS_EFF_Pos (24U)
#define FDCAN_TXEFS_EFF_Msk (0x1UL << FDCAN_TXEFS_EFF_Pos) /*!< 0x01000000 */
#define FDCAN_TXEFS_EFF \
    FDCAN_TXEFS_EFF_Msk /*!<Event FIFO Full                          */
#define FDCAN_TXEFS_TEFL_Pos (25U)
#define FDCAN_TXEFS_TEFL_Msk (0x1UL << FDCAN_TXEFS_TEFL_Pos) /*!< 0x02000000 */
#define FDCAN_TXEFS_TEFL \
    FDCAN_TXEFS_TEFL_Msk /*!<Tx Event FIFO Element Lost               */

/*****************  Bit definition for FDCAN_TXEFA register  ****************** ***/
#define FDCAN_TXEFA_EFAI_Pos (0U)
#define FDCAN_TXEFA_EFAI_Msk (0x3UL << FDCAN_TXEFA_EFAI_Pos) /*!< 0x00000003 */
#define FDCAN_TXEFA_EFAI \
    FDCAN_TXEFA_EFAI_Msk /*!<Event FIFO Acknowledge Index             */

/*!<FDCAN config registers */
/*****************  Bit definition for FDCAN_CKDIV register  ****************** ***/
#define FDCAN_CKDIV_PDIV_Pos (0U)
#define FDCAN_CKDIV_PDIV_Msk (0xFUL << FDCAN_CKDIV_PDIV_Pos) /*!< 0x0000000F */
#define FDCAN_CKDIV_PDIV \
    FDCAN_CKDIV_PDIV_Msk /*!<Input Clock Divider                      */
/******************************************************************************/
/*                                                                            */
/*                                    FLASH                                   */
/*                                                                            */
/******************************************************************************/
#define FLASH_LATENCY_DEFAULT \
    FLASH_ACR_LATENCY_3WS /* FLASH Three Latency cycle */
#define FLASH_BLOCKBASED_NB_REG \
    (1U) /*!< 1 Block-based registers for each Flash bank */
#define FLASH_SIZE_DEFAULT (0x20000U) /*!< FLASH Size */
#define FLASH_SECTOR_NB (8U)          /*!< Flash Sector number */
#define FLASH_SIZE                                                        \
    ((((*((uint16_t*)FLASHSIZE_BASE)) == 0xFFFFU))                        \
         ? FLASH_SIZE_DEFAULT                                             \
         : ((((*((uint16_t*)FLASHSIZE_BASE)) == 0x0000U))                 \
                ? FLASH_SIZE_DEFAULT                                      \
                : (((uint32_t)(*((uint16_t*)FLASHSIZE_BASE)) & (0xFFFFU)) \
                   << 10U)))
#define FLASH_BANK_SIZE (FLASH_SIZE >> 1U) /*!< FLASH Bank Size */
#define FLASH_SECTOR_SIZE 0x2000U          /*!< Flash Sector Size: 8 KB */

/*******************  Bits definition for FLASH_ACR register  *****************/
#define FLASH_ACR_LATENCY_Pos (0U)
#define FLASH_ACR_LATENCY_Msk \
    (0xFUL << FLASH_ACR_LATENCY_Pos)            /*!< 0x0000000F */
#define FLASH_ACR_LATENCY FLASH_ACR_LATENCY_Msk /*!< Latency    */
#define FLASH_ACR_LATENCY_0WS (0x00000000U)
#define FLASH_ACR_LATENCY_1WS (0x00000001U)
#define FLASH_ACR_LATENCY_2WS (0x00000002U)
#define FLASH_ACR_LATENCY_3WS (0x00000003U)
#define FLASH_ACR_LATENCY_4WS (0x00000004U)
#define FLASH_ACR_LATENCY_5WS (0x00000005U)
#define FLASH_ACR_LATENCY_6WS (0x00000006U)
#define FLASH_ACR_LATENCY_7WS (0x00000007U)
#define FLASH_ACR_LATENCY_8WS (0x00000008U)
#define FLASH_ACR_LATENCY_9WS (0x00000009U)
#define FLASH_ACR_LATENCY_10WS (0x0000000AU)
#define FLASH_ACR_LATENCY_11WS (0x0000000BU)
#define FLASH_ACR_LATENCY_12WS (0x0000000CU)
#define FLASH_ACR_LATENCY_13WS (0x0000000DU)
#define FLASH_ACR_LATENCY_14WS (0x0000000EU)
#define FLASH_ACR_LATENCY_15WS (0x0000000FU)
#define FLASH_ACR_WRHIGHFREQ_Pos (4U)
#define FLASH_ACR_WRHIGHFREQ_Msk \
    (0x3UL << FLASH_ACR_WRHIGHFREQ_Pos)               /*!< 0x00000030 */
#define FLASH_ACR_WRHIGHFREQ FLASH_ACR_WRHIGHFREQ_Msk /*!< Flash signal delay */
#define FLASH_ACR_WRHIGHFREQ_0 \
    (0x1UL << FLASH_ACR_WRHIGHFREQ_Pos) /*!< 0x00000010 */
#define FLASH_ACR_WRHIGHFREQ_1 \
    (0x2UL << FLASH_ACR_WRHIGHFREQ_Pos) /*!< 0x00000020 */
#define FLASH_ACR_PRFTEN_Pos (8U)
#define FLASH_ACR_PRFTEN_Msk (0x1UL << FLASH_ACR_PRFTEN_Pos) /*!< 0x00000100 */
#define FLASH_ACR_PRFTEN FLASH_ACR_PRFTEN_Msk /*!< Prefetch enable */

/*******************  Bits definition for FLASH_OPSR register  ***************/
#define FLASH_OPSR_ADDR_OP_Pos (0U)
#define FLASH_OPSR_ADDR_OP_Msk \
    (0xFFFFFUL << FLASH_OPSR_ADDR_OP_Pos) /*!< 0x000FFFFF */
#define FLASH_OPSR_ADDR_OP \
    FLASH_OPSR_ADDR_OP_Msk /*!< Interrupted operation address */
#define FLASH_OPSR_BK_OP_Pos (22U)
#define FLASH_OPSR_BK_OP_Msk (0x1UL << FLASH_OPSR_BK_OP_Pos) /*!< 0x00400000 */
#define FLASH_OPSR_BK_OP FLASH_OPSR_BK_OP_Msk /*!< Interrupted operation bank */
#define FLASH_OPSR_SYSF_OP_Pos (23U)
#define FLASH_OPSR_SYSF_OP_Msk \
    (0x1UL << FLASH_OPSR_SYSF_OP_Pos) /*!< 0x00800000 */
#define FLASH_OPSR_SYSF_OP \
    FLASH_OPSR_SYSF_OP_Msk /*!< Operation in System Flash interrupted */
#define FLASH_OPSR_OTP_OP_Pos (24U)
#define FLASH_OPSR_OTP_OP_Msk \
    (0x1UL << FLASH_OPSR_OTP_OP_Pos) /*!< 0x01000000 */
#define FLASH_OPSR_OTP_OP \
    FLASH_OPSR_OTP_OP_Msk /*!< Operation in OTP area interrupted */
#define FLASH_OPSR_CODE_OP_Pos (29U)
#define FLASH_OPSR_CODE_OP_Msk \
    (0x7UL << FLASH_OPSR_CODE_OP_Pos) /*!< 0xE0000000 */
#define FLASH_OPSR_CODE_OP \
    FLASH_OPSR_CODE_OP_Msk /*!< Flash memory operation code */
#define FLASH_OPSR_CODE_OP_0 \
    (0x1UL << FLASH_OPSR_CODE_OP_Pos) /*!< 0x20000000 */
#define FLASH_OPSR_CODE_OP_1 \
    (0x2UL << FLASH_OPSR_CODE_OP_Pos) /*!< 0x40000000 */
#define FLASH_OPSR_CODE_OP_2 \
    (0x4UL << FLASH_OPSR_CODE_OP_Pos) /*!< 0x80000000 */

/*******************  Bits definition for FLASH_OPTCR register  *******************/
#define FLASH_OPTCR_OPTLOCK_Pos (0U)
#define FLASH_OPTCR_OPTLOCK_Msk \
    (0x1UL << FLASH_OPTCR_OPTLOCK_Pos) /*!< 0x00000001 */
#define FLASH_OPTCR_OPTLOCK \
    FLASH_OPTCR_OPTLOCK_Msk /*!< FLASH_OPTCR lock option configuration bit */
#define FLASH_OPTCR_OPTSTART_Pos (1U)
#define FLASH_OPTCR_OPTSTART_Msk \
    (0x1UL << FLASH_OPTCR_OPTSTART_Pos) /*!< 0x00000002 */
#define FLASH_OPTCR_OPTSTART \
    FLASH_OPTCR_OPTSTART_Msk /*!< Option byte start change option configuration bit */
#define FLASH_OPTCR_SWAP_BANK_Pos (31U)
#define FLASH_OPTCR_SWAP_BANK_Msk \
    (0x1UL << FLASH_OPTCR_SWAP_BANK_Pos) /*!< 0x80000000 */
#define FLASH_OPTCR_SWAP_BANK \
    FLASH_OPTCR_SWAP_BANK_Msk /*!< Bank swapping option configuration bit */

/*******************  Bits definition for FLASH_SR register  ***********************/
#define FLASH_SR_BSY_Pos (0U)
#define FLASH_SR_BSY_Msk (0x1UL << FLASH_SR_BSY_Pos) /*!< 0x00000001 */
#define FLASH_SR_BSY FLASH_SR_BSY_Msk                /*!< Busy flag */
#define FLASH_SR_WBNE_Pos (1U)
#define FLASH_SR_WBNE_Msk (0x1UL << FLASH_SR_WBNE_Pos) /*!< 0x00000002 */
#define FLASH_SR_WBNE FLASH_SR_WBNE_Msk /*!< Write buffer not empty flag */
#define FLASH_SR_DBNE_Pos (3U)
#define FLASH_SR_DBNE_Msk (0x1UL << FLASH_SR_DBNE_Pos) /*!< 0x00000008 */
#define FLASH_SR_DBNE FLASH_SR_DBNE_Msk /*!< Data buffer not empty flag */
#define FLASH_SR_EOP_Pos (16U)
#define FLASH_SR_EOP_Msk (0x1UL << FLASH_SR_EOP_Pos) /*!< 0x00010000 */
#define FLASH_SR_EOP FLASH_SR_EOP_Msk                /*!< End-of-program flag */
#define FLASH_SR_WRPERR_Pos (17U)
#define FLASH_SR_WRPERR_Msk (0x1UL << FLASH_SR_WRPERR_Pos) /*!< 0x00020000 */
#define FLASH_SR_WRPERR FLASH_SR_WRPERR_Msk /*!< Write protection error flag */
#define FLASH_SR_PGSERR_Pos (18U)
#define FLASH_SR_PGSERR_Msk (0x1UL << FLASH_SR_PGSERR_Pos) /*!< 0x00040000 */
#define FLASH_SR_PGSERR \
    FLASH_SR_PGSERR_Msk /*!< Programming sequence error flag */
#define FLASH_SR_STRBERR_Pos (19U)
#define FLASH_SR_STRBERR_Msk (0x1UL << FLASH_SR_STRBERR_Pos) /*!< 0x00080000 */
#define FLASH_SR_STRBERR FLASH_SR_STRBERR_Msk /*!< Strobe error flag */
#define FLASH_SR_INCERR_Pos (20U)
#define FLASH_SR_INCERR_Msk (0x1UL << FLASH_SR_INCERR_Pos) /*!< 0x00100000 */
#define FLASH_SR_INCERR FLASH_SR_INCERR_Msk /*!< Inconsistency error flag */
#define FLASH_SR_OPTCHANGEERR_Pos (23U)
#define FLASH_SR_OPTCHANGEERR_Msk \
    (0x1UL << FLASH_SR_OPTCHANGEERR_Pos) /*!< 0x00800000 */
#define FLASH_SR_OPTCHANGEERR \
    FLASH_SR_OPTCHANGEERR_Msk /*!< Option byte change error flag */

/*******************  Bits definition for FLASH_CR register  ***********************/
#define FLASH_CR_LOCK_Pos (0U)
#define FLASH_CR_LOCK_Msk (0x1UL << FLASH_CR_LOCK_Pos) /*!< 0x00000001 */
#define FLASH_CR_LOCK FLASH_CR_LOCK_Msk /*!< Configuration lock bit */
#define FLASH_CR_PG_Pos (1U)
#define FLASH_CR_PG_Msk (0x1UL << FLASH_CR_PG_Pos) /*!< 0x00000002 */
#define FLASH_CR_PG FLASH_CR_PG_Msk /*!< Programming control bit */
#define FLASH_CR_SER_Pos (2U)
#define FLASH_CR_SER_Msk (0x1UL << FLASH_CR_SER_Pos) /*!< 0x00000004 */
#define FLASH_CR_SER FLASH_CR_SER_Msk /*!< Sector erase request */
#define FLASH_CR_BER_Pos (3U)
#define FLASH_CR_BER_Msk (0x1UL << FLASH_CR_BER_Pos) /*!< 0x00000008 */
#define FLASH_CR_BER FLASH_CR_BER_Msk                /*!< Bank erase request */
#define FLASH_CR_FW_Pos (4U)
#define FLASH_CR_FW_Msk (0x1UL << FLASH_CR_FW_Pos) /*!< 0x00000010 */
#define FLASH_CR_FW FLASH_CR_FW_Msk /*!< Write forcing control bit */
#define FLASH_CR_START_Pos (5U)
#define FLASH_CR_START_Msk (0x1UL << FLASH_CR_START_Pos) /*!< 0x00000020 */
#define FLASH_CR_START FLASH_CR_START_Msk /*!< Erase start control bit */
#define FLASH_CR_SNB_Pos (6U)
#define FLASH_CR_SNB_Msk (0x7FUL << FLASH_CR_SNB_Pos) /*!< 0x00001FC0 */
#define FLASH_CR_SNB FLASH_CR_SNB_Msk /*!< Sector erase selection number */
#define FLASH_CR_SNB_0 (0x01UL << FLASH_CR_SNB_Pos) /*!< 0x00000040 */
#define FLASH_CR_SNB_1 (0x02UL << FLASH_CR_SNB_Pos) /*!< 0x00000080 */
#define FLASH_CR_SNB_2 (0x04UL << FLASH_CR_SNB_Pos) /*!< 0x00000100 */
#define FLASH_CR_SNB_3 (0x08UL << FLASH_CR_SNB_Pos) /*!< 0x00000200 */
#define FLASH_CR_SNB_4 (0x10UL << FLASH_CR_SNB_Pos) /*!< 0x00000400 */
#define FLASH_CR_SNB_5 (0x20UL << FLASH_CR_SNB_Pos) /*!< 0x00000800 */
#define FLASH_CR_SNB_6 (0x40UL << FLASH_CR_SNB_Pos) /*!< 0x00001000 */
#define FLASH_CR_MER_Pos (15U)
#define FLASH_CR_MER_Msk (0x1UL << FLASH_CR_MER_Pos) /*!< 0x00008000 */
#define FLASH_CR_MER FLASH_CR_MER_Msk                /*!< Mass erase */
#define FLASH_CR_EOPIE_Pos (16U)
#define FLASH_CR_EOPIE_Msk (0x1UL << FLASH_CR_EOPIE_Pos) /*!< 0x00010000 */
#define FLASH_CR_EOPIE \
    FLASH_CR_EOPIE_Msk /*!< End-of-operation interrupt control bit */
#define FLASH_CR_WRPERRIE_Pos (17U)
#define FLASH_CR_WRPERRIE_Msk \
    (0x1UL << FLASH_CR_WRPERRIE_Pos) /*!< 0x00020000 */
#define FLASH_CR_WRPERRIE \
    FLASH_CR_WRPERRIE_Msk /*!< Write protection error interrupt enable bit */
#define FLASH_CR_PGSERRIE_Pos (18U)
#define FLASH_CR_PGSERRIE_Msk \
    (0x1UL << FLASH_CR_PGSERRIE_Pos) /*!< 0x00040000 */
#define FLASH_CR_PGSERRIE \
    FLASH_CR_PGSERRIE_Msk /*!< Programming sequence error interrupt enable bit */
#define FLASH_CR_STRBERRIE_Pos (19U)
#define FLASH_CR_STRBERRIE_Msk \
    (0x1UL << FLASH_CR_STRBERRIE_Pos) /*!< 0x00080000 */
#define FLASH_CR_STRBERRIE \
    FLASH_CR_STRBERRIE_Msk /*!< Strobe error interrupt enable bit */
#define FLASH_CR_INCERRIE_Pos (20U)
#define FLASH_CR_INCERRIE_Msk \
    (0x1UL << FLASH_CR_INCERRIE_Pos) /*!< 0x00100000 */
#define FLASH_CR_INCERRIE \
    FLASH_CR_INCERRIE_Msk /*!< Inconsistency error interrupt enable bit */
#define FLASH_CR_OPTCHANGEERRIE_Pos (23U)
#define FLASH_CR_OPTCHANGEERRIE_Msk \
    (0x1UL << FLASH_CR_OPTCHANGEERRIE_Pos) /*!< 0x00800000 */
#define FLASH_CR_OPTCHANGEERRIE \
    FLASH_CR_OPTCHANGEERRIE_Msk /*!< Option byte change error interrupt enable bit */
#define FLASH_CR_INV_Pos (29U)
#define FLASH_CR_INV_Msk (0x1UL << FLASH_CR_INV_Pos) /*!< 0x20000000 */
#define FLASH_CR_INV FLASH_CR_INV_Msk /*!< Flash Security State Invert */
#define FLASH_CR_BKSEL_Pos (31U)
#define FLASH_CR_BKSEL_Msk (0x1UL << FLASH_CR_BKSEL_Pos) /*!< 0x10000000 */
#define FLASH_CR_BKSEL FLASH_CR_BKSEL_Msk                /*!< Bank selector */

/*******************  Bits definition for FLASH_CCR register  *******************/
#define FLASH_CCR_CLR_EOP_Pos (16U)
#define FLASH_CCR_CLR_EOP_Msk \
    (0x1UL << FLASH_CCR_CLR_EOP_Pos)            /*!< 0x00010000 */
#define FLASH_CCR_CLR_EOP FLASH_CCR_CLR_EOP_Msk /*!< EOP flag clear bit */
#define FLASH_CCR_CLR_WRPERR_Pos (17U)
#define FLASH_CCR_CLR_WRPERR_Msk \
    (0x1UL << FLASH_CCR_CLR_WRPERR_Pos) /*!< 0x00020000 */
#define FLASH_CCR_CLR_WRPERR \
    FLASH_CCR_CLR_WRPERR_Msk /*!< WRPERR flag clear bit */
#define FLASH_CCR_CLR_PGSERR_Pos (18U)
#define FLASH_CCR_CLR_PGSERR_Msk \
    (0x1UL << FLASH_CCR_CLR_PGSERR_Pos) /*!< 0x00040000 */
#define FLASH_CCR_CLR_PGSERR \
    FLASH_CCR_CLR_PGSERR_Msk /*!< PGSERR flag clear bit */
#define FLASH_CCR_CLR_STRBERR_Pos (19U)
#define FLASH_CCR_CLR_STRBERR_Msk \
    (0x1UL << FLASH_CCR_CLR_STRBERR_Pos) /*!< 0x00080000 */
#define FLASH_CCR_CLR_STRBERR \
    FLASH_CCR_CLR_STRBERR_Msk /*!< STRBERR flag clear bit */
#define FLASH_CCR_CLR_INCERR_Pos (20U)
#define FLASH_CCR_CLR_INCERR_Msk \
    (0x1UL << FLASH_CCR_CLR_INCERR_Pos) /*!< 0x00100000 */
#define FLASH_CCR_CLR_INCERR \
    FLASH_CCR_CLR_INCERR_Msk /*!< INCERR flag clear bit */
#define FLASH_CCR_CLR_OPTCHANGEERR_Pos (23U)
#define FLASH_CCR_CLR_OPTCHANGEERR_Msk \
    (0x1UL << FLASH_CCR_CLR_OPTCHANGEERR_Pos) /*!< 0x00800000 */
#define FLASH_CCR_CLR_OPTCHANGEERR \
    FLASH_CCR_CLR_OPTCHANGEERR_Msk /*!< Option byte change error clear bit */

/******************  Bits definition for FLASH_PRIVCFGR register  ***********/
#define FLASH_PRIVCFGR_NSPRIV_Pos (1U)
#define FLASH_PRIVCFGR_NSPRIV_Msk \
    (0x1UL << FLASH_PRIVCFGR_NSPRIV_Pos) /*!< 0x00000002 */
#define FLASH_PRIVCFGR_NSPRIV \
    FLASH_PRIVCFGR_NSPRIV_Msk /*!< Privilege protection for non-secure registers */

/******************  Bits definition for FLASH_HDPEXTR register  *****************/
#define FLASH_HDPEXTR_HDP1_EXT_Pos (0U)
#define FLASH_HDPEXTR_HDP1_EXT_Msk \
    (0x7FUL << FLASH_HDPEXTR_HDP1_EXT_Pos) /*!< 0x0000007F */
#define FLASH_HDPEXTR_HDP1_EXT \
    FLASH_HDPEXTR_HDP1_EXT_Msk /*!< HDP area extension in 8kB sectors in bank 1 */
#define FLASH_HDPEXTR_HDP2_EXT_Pos (16U)
#define FLASH_HDPEXTR_HDP2_EXT_Msk \
    (0x7FUL << FLASH_HDPEXTR_HDP2_EXT_Pos) /*!< 0x007F0000 */
#define FLASH_HDPEXTR_HDP2_EXT \
    FLASH_HDPEXTR_HDP2_EXT_Msk /*!< HDP area extension in 8kB sectors in bank 2 */

/*******************  Bits definition for FLASH_OPTSR register  ***************/
#define FLASH_OPTSR_BOR_LEV_Pos (0U)
#define FLASH_OPTSR_BOR_LEV_Msk \
    (0x3UL << FLASH_OPTSR_BOR_LEV_Pos) /*!< 0x00000003 */
#define FLASH_OPTSR_BOR_LEV \
    FLASH_OPTSR_BOR_LEV_Msk /*!< Brownout level option bit */
#define FLASH_OPTSR_BOR_LEV_0 \
    (0x1UL << FLASH_OPTSR_BOR_LEV_Pos) /*!< 0x00000001 */
#define FLASH_OPTSR_BOR_LEV_1 \
    (0x2UL << FLASH_OPTSR_BOR_LEV_Pos) /*!< 0x00000002 */
#define FLASH_OPTSR_BORH_EN_Pos (2U)
#define FLASH_OPTSR_BORH_EN_Msk \
    (0x1UL << FLASH_OPTSR_BORH_EN_Pos) /*!< 0x00000004 */
#define FLASH_OPTSR_BORH_EN \
    FLASH_OPTSR_BORH_EN_Msk /*!< Brownout high enable configuration bit */
#define FLASH_OPTSR_IWDG_SW_Pos (3U)
#define FLASH_OPTSR_IWDG_SW_Msk \
    (0x1UL << FLASH_OPTSR_IWDG_SW_Pos) /*!< 0x00000008 */
#define FLASH_OPTSR_IWDG_SW \
    FLASH_OPTSR_IWDG_SW_Msk /*!< IWDG control mode option bit */
#define FLASH_OPTSR_WWDG_SW_Pos (4U)
#define FLASH_OPTSR_WWDG_SW_Msk \
    (0x1UL << FLASH_OPTSR_WWDG_SW_Pos) /*!< 0x00000010 */
#define FLASH_OPTSR_WWDG_SW \
    FLASH_OPTSR_WWDG_SW_Msk /*!< WWDG control mode option bit */
#define FLASH_OPTSR_NRST_STOP_Pos (6U)
#define FLASH_OPTSR_NRST_STOP_Msk \
    (0x1UL << FLASH_OPTSR_NRST_STOP_Pos) /*!< 0x00000040 */
#define FLASH_OPTSR_NRST_STOP \
    FLASH_OPTSR_NRST_STOP_Msk /*!< Stop mode entry reset option bit */
#define FLASH_OPTSR_NRST_STDBY_Pos (7U)
#define FLASH_OPTSR_NRST_STDBY_Msk \
    (0x1UL << FLASH_OPTSR_NRST_STDBY_Pos) /*!< 0x00000080 */
#define FLASH_OPTSR_NRST_STDBY \
    FLASH_OPTSR_NRST_STDBY_Msk /*!< Standby mode entry reset option bit */
#define FLASH_OPTSR_PRODUCT_STATE_Pos (8U)
#define FLASH_OPTSR_PRODUCT_STATE_Msk \
    (0xFFUL << FLASH_OPTSR_PRODUCT_STATE_Pos) /*!< 0x0000FF00 */
#define FLASH_OPTSR_PRODUCT_STATE \
    FLASH_OPTSR_PRODUCT_STATE_Msk /*!< Life state code option byte */
#define FLASH_OPTSR_IO_VDD_HSLV_Pos (16U)
#define FLASH_OPTSR_IO_VDD_HSLV_Msk \
    (0x1UL << FLASH_OPTSR_IO_VDD_HSLV_Pos) /*!< 0x00010000 */
#define FLASH_OPTSR_IO_VDD_HSLV \
    FLASH_OPTSR_IO_VDD_HSLV_Msk /*!< VDD I/O high-speed at low-voltage option bit */
#define FLASH_OPTSR_IO_VDDIO2_HSLV_Pos (17U)
#define FLASH_OPTSR_IO_VDDIO2_HSLV_Msk \
    (0x1UL << FLASH_OPTSR_IO_VDDIO2_HSLV_Pos) /*!< 0x00020000 */
#define FLASH_OPTSR_IO_VDDIO2_HSLV \
    FLASH_OPTSR_IO_VDDIO2_HSLV_Msk /*!< VDDIO2 I/O high-speed at low-voltage option bit */
#define FLASH_OPTSR_IWDG_STOP_Pos (20U)
#define FLASH_OPTSR_IWDG_STOP_Msk \
    (0x1UL << FLASH_OPTSR_IWDG_STOP_Pos) /*!< 0x00100000 */
#define FLASH_OPTSR_IWDG_STOP \
    FLASH_OPTSR_IWDG_STOP_Msk /*!< Independent watchdog counter freeze in Stop mode */
#define FLASH_OPTSR_IWDG_STDBY_Pos (21U)
#define FLASH_OPTSR_IWDG_STDBY_Msk \
    (0x1UL << FLASH_OPTSR_IWDG_STDBY_Pos) /*!< 0x00200000 */
#define FLASH_OPTSR_IWDG_STDBY \
    FLASH_OPTSR_IWDG_STDBY_Msk /*!< Independent watchdog counter freeze in Standby mode */
#define FLASH_OPTSR_SWAP_BANK_Pos (31U)
#define FLASH_OPTSR_SWAP_BANK_Msk \
    (0x1UL << FLASH_OPTSR_SWAP_BANK_Pos) /*!< 0x80000000 */
#define FLASH_OPTSR_SWAP_BANK \
    FLASH_OPTSR_SWAP_BANK_Msk /*!< Bank swapping option bit */

/*******************  Bits definition for FLASH_EPOCHR register  ***************/
#define FLASH_EPOCHR_EPOCH_Pos (0U)
#define FLASH_EPOCHR_EPOCH_Msk \
    (0xFFFFFFUL << FLASH_EPOCHR_EPOCH_Pos)        /*!< 0x00FFFFFF */
#define FLASH_EPOCHR_EPOCH FLASH_EPOCHR_EPOCH_Msk /*!< EPOCH counter */

/*******************  Bits definition for FLASH_OPTSR2 register  ***************/
#define FLASH_OPTSR2_SRAM2_RST_Pos (3U)
#define FLASH_OPTSR2_SRAM2_RST_Msk \
    (0x1UL << FLASH_OPTSR2_SRAM2_RST_Pos) /*!< 0x00000008 */
#define FLASH_OPTSR2_SRAM2_RST \
    FLASH_OPTSR2_SRAM2_RST_Msk /*!< SRAM2 erased when a system reset occurs*/
#define FLASH_OPTSR2_BKPRAM_ECC_Pos (4U)
#define FLASH_OPTSR2_BKPRAM_ECC_Msk \
    (0x1UL << FLASH_OPTSR2_BKPRAM_ECC_Pos) /*!< 0x00000010 */
#define FLASH_OPTSR2_BKPRAM_ECC \
    FLASH_OPTSR2_BKPRAM_ECC_Msk /*!< Backup RAM ECC detection and correction enable */
#define FLASH_OPTSR2_SRAM2_ECC_Pos (6U)
#define FLASH_OPTSR2_SRAM2_ECC_Msk \
    (0x1UL << FLASH_OPTSR2_SRAM2_ECC_Pos) /*!< 0x00000040 */
#define FLASH_OPTSR2_SRAM2_ECC \
    FLASH_OPTSR2_SRAM2_ECC_Msk /*!< SRAM2 ECC detection and correction disable */
#define FLASH_OPTSR2_SRAM1_RST_Pos (9U)
#define FLASH_OPTSR2_SRAM1_RST_Msk \
    (0x1UL << FLASH_OPTSR2_SRAM1_RST_Pos) /*!< 0x00000200 */
#define FLASH_OPTSR2_SRAM1_RST \
    FLASH_OPTSR2_SRAM1_RST_Msk /*!< SRAM1 erase upon a system reset */
#define FLASH_OPTSR2_SRAM1_ECC_Pos (10U)
#define FLASH_OPTSR2_SRAM1_ECC_Msk \
    (0x1UL << FLASH_OPTSR2_SRAM1_ECC_Pos) /*!< 0x00000400 */
#define FLASH_OPTSR2_SRAM1_ECC \
    FLASH_OPTSR2_SRAM1_ECC_Msk /*!< SRAM1 ECC detection and correction disable */

/****************  Bits definition for FLASH_BOOTR register  **********************/
#define FLASH_BOOTR_BOOT_LOCK_Pos (0U)
#define FLASH_BOOTR_BOOT_LOCK_Msk \
    (0xFFUL << FLASH_BOOTR_BOOT_LOCK_Pos)               /*!< 0x000000FF */
#define FLASH_BOOTR_BOOT_LOCK FLASH_BOOTR_BOOT_LOCK_Msk /*!< Boot Lock */
#define FLASH_BOOTR_BOOTADD_Pos (8U)
#define FLASH_BOOTR_BOOTADD_Msk \
    (0xFFFFFFUL << FLASH_BOOTR_BOOTADD_Pos)         /*!< 0xFFFFFF00 */
#define FLASH_BOOTR_BOOTADD FLASH_BOOTR_BOOTADD_Msk /*!< Boot address */

/****************  Bits definition for FLASH_PRIVBBR register  *******************/
#define FLASH_PRIVBBR_PRIVBB_Pos (0U)
#define FLASH_PRIVBBR_PRIVBB_Msk \
    (0x000000FFUL << FLASH_PRIVBBR_PRIVBB_Pos) /*!< 0x000000FF */
#define FLASH_PRIVBBR_PRIVBB \
    FLASH_PRIVBBR_PRIVBB_Msk /*!< Privileged/unprivileged 8-Kbyte Flash sector attribute */

/*****************  Bits definition for FLASH_WRPR register  *********************/
#define FLASH_WRPR_WRPSG_Pos (0U)
#define FLASH_WRPR_WRPSG_Msk \
    (0x000000FFUL << FLASH_WRPR_WRPSG_Pos) /*!< 0x000000FF */
#define FLASH_WRPR_WRPSG \
    FLASH_WRPR_WRPSG_Msk /*!< Sector group protection option status */

/*****************  Bits definition for FLASH_HDPR register  ********************/
#define FLASH_HDPR_HDP_STRT_Pos (0U)
#define FLASH_HDPR_HDP_STRT_Msk \
    (0x07UL << FLASH_HDPR_HDP_STRT_Pos) /*!< 0x00000007 */
#define FLASH_HDPR_HDP_STRT \
    FLASH_HDPR_HDP_STRT_Msk /*!< Start sector of hide protection area */
#define FLASH_HDPR_HDP_END_Pos (16U)
#define FLASH_HDPR_HDP_END_Msk \
    (0x07UL << FLASH_HDPR_HDP_END_Pos) /*!< 0x00070000 */
#define FLASH_HDPR_HDP_END \
    FLASH_HDPR_HDP_END_Msk /*!< End sector of hide protection area */

/*******************  Bits definition for FLASH_ECCR register  ***************/
#define FLASH_ECCR_ADDR_ECC_Pos (0U)
#define FLASH_ECCR_ADDR_ECC_Msk \
    (0xFFFFUL << FLASH_ECCR_ADDR_ECC_Pos)           /*!< 0x0000FFFF */
#define FLASH_ECCR_ADDR_ECC FLASH_ECCR_ADDR_ECC_Msk /*!< ECC fail address */
#define FLASH_ECCR_BK_ECC_Pos (22U)
#define FLASH_ECCR_BK_ECC_Msk \
    (0x1UL << FLASH_ECCR_BK_ECC_Pos)            /*!< 0x00400000 */
#define FLASH_ECCR_BK_ECC FLASH_ECCR_BK_ECC_Msk /*!< ECC fail bank */
#define FLASH_ECCR_SYSF_ECC_Pos (23U)
#define FLASH_ECCR_SYSF_ECC_Msk \
    (0x1UL << FLASH_ECCR_SYSF_ECC_Pos) /*!< 0x00800000 */
#define FLASH_ECCR_SYSF_ECC \
    FLASH_ECCR_SYSF_ECC_Msk /*!< System Flash ECC fail */
#define FLASH_ECCR_OTP_ECC_Pos (24U)
#define FLASH_ECCR_OTP_ECC_Msk \
    (0x1UL << FLASH_ECCR_OTP_ECC_Pos)             /*!< 0x01000000 */
#define FLASH_ECCR_OTP_ECC FLASH_ECCR_OTP_ECC_Msk /*!< Flash OTP ECC fail */
#define FLASH_ECCR_ECCIE_Pos (25U)
#define FLASH_ECCR_ECCIE_Msk (0x1UL << FLASH_ECCR_ECCIE_Pos) /*!< 0x02000000 */
#define FLASH_ECCR_ECCIE \
    FLASH_ECCR_ECCIE_Msk /*!< ECC correction interrupt enable */
#define FLASH_ECCR_ECCC_Pos (30U)
#define FLASH_ECCR_ECCC_Msk (0x1UL << FLASH_ECCR_ECCC_Pos) /*!< 0x40000000 */
#define FLASH_ECCR_ECCC FLASH_ECCR_ECCC_Msk /*!< ECC correction */
#define FLASH_ECCR_ECCD_Pos (31U)
#define FLASH_ECCR_ECCD_Msk (0x1UL << FLASH_ECCR_ECCD_Pos) /*!< 0x80000000 */
#define FLASH_ECCR_ECCD FLASH_ECCR_ECCD_Msk                /*!< ECC detection */

/*******************  Bits definition for FLASH_ECCDR register  ***************/
#define FLASH_ECCDR_FAIL_DATA_Pos (0U)
#define FLASH_ECCDR_FAIL_DATA_Msk \
    (0xFFFFUL << FLASH_ECCDR_FAIL_DATA_Pos)             /*!< 0x0000FFFF */
#define FLASH_ECCDR_FAIL_DATA FLASH_ECCDR_FAIL_DATA_Msk /*!< ECC fail data */

/******************************************************************************/
/*                                                                            */
/*                       General Purpose IOs (GPIO)                           */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODE0_Pos (0U)
#define GPIO_MODER_MODE0_Msk (0x3UL << GPIO_MODER_MODE0_Pos) /*!< 0x00000003 */
#define GPIO_MODER_MODE0 GPIO_MODER_MODE0_Msk
#define GPIO_MODER_MODE0_0 (0x1UL << GPIO_MODER_MODE0_Pos) /*!< 0x00000001 */
#define GPIO_MODER_MODE0_1 (0x2UL << GPIO_MODER_MODE0_Pos) /*!< 0x00000002 */
#define GPIO_MODER_MODE1_Pos (2U)
#define GPIO_MODER_MODE1_Msk (0x3UL << GPIO_MODER_MODE1_Pos) /*!< 0x0000000C */
#define GPIO_MODER_MODE1 GPIO_MODER_MODE1_Msk
#define GPIO_MODER_MODE1_0 (0x1UL << GPIO_MODER_MODE1_Pos) /*!< 0x00000004 */
#define GPIO_MODER_MODE1_1 (0x2UL << GPIO_MODER_MODE1_Pos) /*!< 0x00000008 */
#define GPIO_MODER_MODE2_Pos (4U)
#define GPIO_MODER_MODE2_Msk (0x3UL << GPIO_MODER_MODE2_Pos) /*!< 0x00000030 */
#define GPIO_MODER_MODE2 GPIO_MODER_MODE2_Msk
#define GPIO_MODER_MODE2_0 (0x1UL << GPIO_MODER_MODE2_Pos) /*!< 0x00000010 */
#define GPIO_MODER_MODE2_1 (0x2UL << GPIO_MODER_MODE2_Pos) /*!< 0x00000020 */
#define GPIO_MODER_MODE3_Pos (6U)
#define GPIO_MODER_MODE3_Msk (0x3UL << GPIO_MODER_MODE3_Pos) /*!< 0x000000C0 */
#define GPIO_MODER_MODE3 GPIO_MODER_MODE3_Msk
#define GPIO_MODER_MODE3_0 (0x1UL << GPIO_MODER_MODE3_Pos) /*!< 0x00000040 */
#define GPIO_MODER_MODE3_1 (0x2UL << GPIO_MODER_MODE3_Pos) /*!< 0x00000080 */
#define GPIO_MODER_MODE4_Pos (8U)
#define GPIO_MODER_MODE4_Msk (0x3UL << GPIO_MODER_MODE4_Pos) /*!< 0x00000300 */
#define GPIO_MODER_MODE4 GPIO_MODER_MODE4_Msk
#define GPIO_MODER_MODE4_0 (0x1UL << GPIO_MODER_MODE4_Pos) /*!< 0x00000100 */
#define GPIO_MODER_MODE4_1 (0x2UL << GPIO_MODER_MODE4_Pos) /*!< 0x00000200 */
#define GPIO_MODER_MODE5_Pos (10U)
#define GPIO_MODER_MODE5_Msk (0x3UL << GPIO_MODER_MODE5_Pos) /*!< 0x00000C00 */
#define GPIO_MODER_MODE5 GPIO_MODER_MODE5_Msk
#define GPIO_MODER_MODE5_0 (0x1UL << GPIO_MODER_MODE5_Pos) /*!< 0x00000400 */
#define GPIO_MODER_MODE5_1 (0x2UL << GPIO_MODER_MODE5_Pos) /*!< 0x00000800 */
#define GPIO_MODER_MODE6_Pos (12U)
#define GPIO_MODER_MODE6_Msk (0x3UL << GPIO_MODER_MODE6_Pos) /*!< 0x00003000 */
#define GPIO_MODER_MODE6 GPIO_MODER_MODE6_Msk
#define GPIO_MODER_MODE6_0 (0x1UL << GPIO_MODER_MODE6_Pos) /*!< 0x00001000 */
#define GPIO_MODER_MODE6_1 (0x2UL << GPIO_MODER_MODE6_Pos) /*!< 0x00002000 */
#define GPIO_MODER_MODE7_Pos (14U)
#define GPIO_MODER_MODE7_Msk (0x3UL << GPIO_MODER_MODE7_Pos) /*!< 0x0000C000 */
#define GPIO_MODER_MODE7 GPIO_MODER_MODE7_Msk
#define GPIO_MODER_MODE7_0 (0x1UL << GPIO_MODER_MODE7_Pos) /*!< 0x00004000 */
#define GPIO_MODER_MODE7_1 (0x2UL << GPIO_MODER_MODE7_Pos) /*!< 0x00008000 */
#define GPIO_MODER_MODE8_Pos (16U)
#define GPIO_MODER_MODE8_Msk (0x3UL << GPIO_MODER_MODE8_Pos) /*!< 0x00030000 */
#define GPIO_MODER_MODE8 GPIO_MODER_MODE8_Msk
#define GPIO_MODER_MODE8_0 (0x1UL << GPIO_MODER_MODE8_Pos) /*!< 0x00010000 */
#define GPIO_MODER_MODE8_1 (0x2UL << GPIO_MODER_MODE8_Pos) /*!< 0x00020000 */
#define GPIO_MODER_MODE9_Pos (18U)
#define GPIO_MODER_MODE9_Msk (0x3UL << GPIO_MODER_MODE9_Pos) /*!< 0x000C0000 */
#define GPIO_MODER_MODE9 GPIO_MODER_MODE9_Msk
#define GPIO_MODER_MODE9_0 (0x1UL << GPIO_MODER_MODE9_Pos) /*!< 0x00040000 */
#define GPIO_MODER_MODE9_1 (0x2UL << GPIO_MODER_MODE9_Pos) /*!< 0x00080000 */
#define GPIO_MODER_MODE10_Pos (20U)
#define GPIO_MODER_MODE10_Msk \
    (0x3UL << GPIO_MODER_MODE10_Pos) /*!< 0x00300000 */
#define GPIO_MODER_MODE10 GPIO_MODER_MODE10_Msk
#define GPIO_MODER_MODE10_0 (0x1UL << GPIO_MODER_MODE10_Pos) /*!< 0x00100000 */
#define GPIO_MODER_MODE10_1 (0x2UL << GPIO_MODER_MODE10_Pos) /*!< 0x00200000 */
#define GPIO_MODER_MODE11_Pos (22U)
#define GPIO_MODER_MODE11_Msk \
    (0x3UL << GPIO_MODER_MODE11_Pos) /*!< 0x00C00000 */
#define GPIO_MODER_MODE11 GPIO_MODER_MODE11_Msk
#define GPIO_MODER_MODE11_0 (0x1UL << GPIO_MODER_MODE11_Pos) /*!< 0x00400000 */
#define GPIO_MODER_MODE11_1 (0x2UL << GPIO_MODER_MODE11_Pos) /*!< 0x00800000 */
#define GPIO_MODER_MODE12_Pos (24U)
#define GPIO_MODER_MODE12_Msk \
    (0x3UL << GPIO_MODER_MODE12_Pos) /*!< 0x03000000 */
#define GPIO_MODER_MODE12 GPIO_MODER_MODE12_Msk
#define GPIO_MODER_MODE12_0 (0x1UL << GPIO_MODER_MODE12_Pos) /*!< 0x01000000 */
#define GPIO_MODER_MODE12_1 (0x2UL << GPIO_MODER_MODE12_Pos) /*!< 0x02000000 */
#define GPIO_MODER_MODE13_Pos (26U)
#define GPIO_MODER_MODE13_Msk \
    (0x3UL << GPIO_MODER_MODE13_Pos) /*!< 0x0C000000 */
#define GPIO_MODER_MODE13 GPIO_MODER_MODE13_Msk
#define GPIO_MODER_MODE13_0 (0x1UL << GPIO_MODER_MODE13_Pos) /*!< 0x04000000 */
#define GPIO_MODER_MODE13_1 (0x2UL << GPIO_MODER_MODE13_Pos) /*!< 0x08000000 */
#define GPIO_MODER_MODE14_Pos (28U)
#define GPIO_MODER_MODE14_Msk \
    (0x3UL << GPIO_MODER_MODE14_Pos) /*!< 0x30000000 */
#define GPIO_MODER_MODE14 GPIO_MODER_MODE14_Msk
#define GPIO_MODER_MODE14_0 (0x1UL << GPIO_MODER_MODE14_Pos) /*!< 0x10000000 */
#define GPIO_MODER_MODE14_1 (0x2UL << GPIO_MODER_MODE14_Pos) /*!< 0x20000000 */
#define GPIO_MODER_MODE15_Pos (30U)
#define GPIO_MODER_MODE15_Msk \
    (0x3UL << GPIO_MODER_MODE15_Pos) /*!< 0xC0000000 */
#define GPIO_MODER_MODE15 GPIO_MODER_MODE15_Msk
#define GPIO_MODER_MODE15_0 (0x1UL << GPIO_MODER_MODE15_Pos) /*!< 0x40000000 */
#define GPIO_MODER_MODE15_1 (0x2UL << GPIO_MODER_MODE15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_OTYPER register  ****************/
#define GPIO_OTYPER_OT0_Pos (0U)
#define GPIO_OTYPER_OT0_Msk (0x1UL << GPIO_OTYPER_OT0_Pos) /*!< 0x00000001 */
#define GPIO_OTYPER_OT0 GPIO_OTYPER_OT0_Msk
#define GPIO_OTYPER_OT1_Pos (1U)
#define GPIO_OTYPER_OT1_Msk (0x1UL << GPIO_OTYPER_OT1_Pos) /*!< 0x00000002 */
#define GPIO_OTYPER_OT1 GPIO_OTYPER_OT1_Msk
#define GPIO_OTYPER_OT2_Pos (2U)
#define GPIO_OTYPER_OT2_Msk (0x1UL << GPIO_OTYPER_OT2_Pos) /*!< 0x00000004 */
#define GPIO_OTYPER_OT2 GPIO_OTYPER_OT2_Msk
#define GPIO_OTYPER_OT3_Pos (3U)
#define GPIO_OTYPER_OT3_Msk (0x1UL << GPIO_OTYPER_OT3_Pos) /*!< 0x00000008 */
#define GPIO_OTYPER_OT3 GPIO_OTYPER_OT3_Msk
#define GPIO_OTYPER_OT4_Pos (4U)
#define GPIO_OTYPER_OT4_Msk (0x1UL << GPIO_OTYPER_OT4_Pos) /*!< 0x00000010 */
#define GPIO_OTYPER_OT4 GPIO_OTYPER_OT4_Msk
#define GPIO_OTYPER_OT5_Pos (5U)
#define GPIO_OTYPER_OT5_Msk (0x1UL << GPIO_OTYPER_OT5_Pos) /*!< 0x00000020 */
#define GPIO_OTYPER_OT5 GPIO_OTYPER_OT5_Msk
#define GPIO_OTYPER_OT6_Pos (6U)
#define GPIO_OTYPER_OT6_Msk (0x1UL << GPIO_OTYPER_OT6_Pos) /*!< 0x00000040 */
#define GPIO_OTYPER_OT6 GPIO_OTYPER_OT6_Msk
#define GPIO_OTYPER_OT7_Pos (7U)
#define GPIO_OTYPER_OT7_Msk (0x1UL << GPIO_OTYPER_OT7_Pos) /*!< 0x00000080 */
#define GPIO_OTYPER_OT7 GPIO_OTYPER_OT7_Msk
#define GPIO_OTYPER_OT8_Pos (8U)
#define GPIO_OTYPER_OT8_Msk (0x1UL << GPIO_OTYPER_OT8_Pos) /*!< 0x00000100 */
#define GPIO_OTYPER_OT8 GPIO_OTYPER_OT8_Msk
#define GPIO_OTYPER_OT9_Pos (9U)
#define GPIO_OTYPER_OT9_Msk (0x1UL << GPIO_OTYPER_OT9_Pos) /*!< 0x00000200 */
#define GPIO_OTYPER_OT9 GPIO_OTYPER_OT9_Msk
#define GPIO_OTYPER_OT10_Pos (10U)
#define GPIO_OTYPER_OT10_Msk (0x1UL << GPIO_OTYPER_OT10_Pos) /*!< 0x00000400 */
#define GPIO_OTYPER_OT10 GPIO_OTYPER_OT10_Msk
#define GPIO_OTYPER_OT11_Pos (11U)
#define GPIO_OTYPER_OT11_Msk (0x1UL << GPIO_OTYPER_OT11_Pos) /*!< 0x00000800 */
#define GPIO_OTYPER_OT11 GPIO_OTYPER_OT11_Msk
#define GPIO_OTYPER_OT12_Pos (12U)
#define GPIO_OTYPER_OT12_Msk (0x1UL << GPIO_OTYPER_OT12_Pos) /*!< 0x00001000 */
#define GPIO_OTYPER_OT12 GPIO_OTYPER_OT12_Msk
#define GPIO_OTYPER_OT13_Pos (13U)
#define GPIO_OTYPER_OT13_Msk (0x1UL << GPIO_OTYPER_OT13_Pos) /*!< 0x00002000 */
#define GPIO_OTYPER_OT13 GPIO_OTYPER_OT13_Msk
#define GPIO_OTYPER_OT14_Pos (14U)
#define GPIO_OTYPER_OT14_Msk (0x1UL << GPIO_OTYPER_OT14_Pos) /*!< 0x00004000 */
#define GPIO_OTYPER_OT14 GPIO_OTYPER_OT14_Msk
#define GPIO_OTYPER_OT15_Pos (15U)
#define GPIO_OTYPER_OT15_Msk (0x1UL << GPIO_OTYPER_OT15_Pos) /*!< 0x00008000 */
#define GPIO_OTYPER_OT15 GPIO_OTYPER_OT15_Msk

/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDR_OSPEED0_Pos (0U)
#define GPIO_OSPEEDR_OSPEED0_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000003 */
#define GPIO_OSPEEDR_OSPEED0 GPIO_OSPEEDR_OSPEED0_Msk
#define GPIO_OSPEEDR_OSPEED0_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000001 */
#define GPIO_OSPEEDR_OSPEED0_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000002 */
#define GPIO_OSPEEDR_OSPEED1_Pos (2U)
#define GPIO_OSPEEDR_OSPEED1_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x0000000C */
#define GPIO_OSPEEDR_OSPEED1 GPIO_OSPEEDR_OSPEED1_Msk
#define GPIO_OSPEEDR_OSPEED1_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x00000004 */
#define GPIO_OSPEEDR_OSPEED1_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x00000008 */
#define GPIO_OSPEEDR_OSPEED2_Pos (4U)
#define GPIO_OSPEEDR_OSPEED2_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000030 */
#define GPIO_OSPEEDR_OSPEED2 GPIO_OSPEEDR_OSPEED2_Msk
#define GPIO_OSPEEDR_OSPEED2_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000010 */
#define GPIO_OSPEEDR_OSPEED2_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000020 */
#define GPIO_OSPEEDR_OSPEED3_Pos (6U)
#define GPIO_OSPEEDR_OSPEED3_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x000000C0 */
#define GPIO_OSPEEDR_OSPEED3 GPIO_OSPEEDR_OSPEED3_Msk
#define GPIO_OSPEEDR_OSPEED3_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x00000040 */
#define GPIO_OSPEEDR_OSPEED3_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x00000080 */
#define GPIO_OSPEEDR_OSPEED4_Pos (8U)
#define GPIO_OSPEEDR_OSPEED4_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000300 */
#define GPIO_OSPEEDR_OSPEED4 GPIO_OSPEEDR_OSPEED4_Msk
#define GPIO_OSPEEDR_OSPEED4_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000100 */
#define GPIO_OSPEEDR_OSPEED4_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000200 */
#define GPIO_OSPEEDR_OSPEED5_Pos (10U)
#define GPIO_OSPEEDR_OSPEED5_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000C00 */
#define GPIO_OSPEEDR_OSPEED5 GPIO_OSPEEDR_OSPEED5_Msk
#define GPIO_OSPEEDR_OSPEED5_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000400 */
#define GPIO_OSPEEDR_OSPEED5_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000800 */
#define GPIO_OSPEEDR_OSPEED6_Pos (12U)
#define GPIO_OSPEEDR_OSPEED6_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00003000 */
#define GPIO_OSPEEDR_OSPEED6 GPIO_OSPEEDR_OSPEED6_Msk
#define GPIO_OSPEEDR_OSPEED6_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00001000 */
#define GPIO_OSPEEDR_OSPEED6_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00002000 */
#define GPIO_OSPEEDR_OSPEED7_Pos (14U)
#define GPIO_OSPEEDR_OSPEED7_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x0000C000 */
#define GPIO_OSPEEDR_OSPEED7 GPIO_OSPEEDR_OSPEED7_Msk
#define GPIO_OSPEEDR_OSPEED7_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x00004000 */
#define GPIO_OSPEEDR_OSPEED7_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x00008000 */
#define GPIO_OSPEEDR_OSPEED8_Pos (16U)
#define GPIO_OSPEEDR_OSPEED8_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00030000 */
#define GPIO_OSPEEDR_OSPEED8 GPIO_OSPEEDR_OSPEED8_Msk
#define GPIO_OSPEEDR_OSPEED8_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00010000 */
#define GPIO_OSPEEDR_OSPEED8_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00020000 */
#define GPIO_OSPEEDR_OSPEED9_Pos (18U)
#define GPIO_OSPEEDR_OSPEED9_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x000C0000 */
#define GPIO_OSPEEDR_OSPEED9 GPIO_OSPEEDR_OSPEED9_Msk
#define GPIO_OSPEEDR_OSPEED9_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x00040000 */
#define GPIO_OSPEEDR_OSPEED9_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x00080000 */
#define GPIO_OSPEEDR_OSPEED10_Pos (20U)
#define GPIO_OSPEEDR_OSPEED10_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00300000 */
#define GPIO_OSPEEDR_OSPEED10 GPIO_OSPEEDR_OSPEED10_Msk
#define GPIO_OSPEEDR_OSPEED10_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00100000 */
#define GPIO_OSPEEDR_OSPEED10_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00200000 */
#define GPIO_OSPEEDR_OSPEED11_Pos (22U)
#define GPIO_OSPEEDR_OSPEED11_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00C00000 */
#define GPIO_OSPEEDR_OSPEED11 GPIO_OSPEEDR_OSPEED11_Msk
#define GPIO_OSPEEDR_OSPEED11_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00400000 */
#define GPIO_OSPEEDR_OSPEED11_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00800000 */
#define GPIO_OSPEEDR_OSPEED12_Pos (24U)
#define GPIO_OSPEEDR_OSPEED12_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x03000000 */
#define GPIO_OSPEEDR_OSPEED12 GPIO_OSPEEDR_OSPEED12_Msk
#define GPIO_OSPEEDR_OSPEED12_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x01000000 */
#define GPIO_OSPEEDR_OSPEED12_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x02000000 */
#define GPIO_OSPEEDR_OSPEED13_Pos (26U)
#define GPIO_OSPEEDR_OSPEED13_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x0C000000 */
#define GPIO_OSPEEDR_OSPEED13 GPIO_OSPEEDR_OSPEED13_Msk
#define GPIO_OSPEEDR_OSPEED13_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x04000000 */
#define GPIO_OSPEEDR_OSPEED13_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x08000000 */
#define GPIO_OSPEEDR_OSPEED14_Pos (28U)
#define GPIO_OSPEEDR_OSPEED14_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x30000000 */
#define GPIO_OSPEEDR_OSPEED14 GPIO_OSPEEDR_OSPEED14_Msk
#define GPIO_OSPEEDR_OSPEED14_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x10000000 */
#define GPIO_OSPEEDR_OSPEED14_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x20000000 */
#define GPIO_OSPEEDR_OSPEED15_Pos (30U)
#define GPIO_OSPEEDR_OSPEED15_Msk \
    (0x3UL << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0xC0000000 */
#define GPIO_OSPEEDR_OSPEED15 GPIO_OSPEEDR_OSPEED15_Msk
#define GPIO_OSPEEDR_OSPEED15_0 \
    (0x1UL << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0x40000000 */
#define GPIO_OSPEEDR_OSPEED15_1 \
    (0x2UL << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPD0_Pos (0U)
#define GPIO_PUPDR_PUPD0_Msk (0x3UL << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000003 */
#define GPIO_PUPDR_PUPD0 GPIO_PUPDR_PUPD0_Msk
#define GPIO_PUPDR_PUPD0_0 (0x1UL << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000001 */
#define GPIO_PUPDR_PUPD0_1 (0x2UL << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000002 */
#define GPIO_PUPDR_PUPD1_Pos (2U)
#define GPIO_PUPDR_PUPD1_Msk (0x3UL << GPIO_PUPDR_PUPD1_Pos) /*!< 0x0000000C */
#define GPIO_PUPDR_PUPD1 GPIO_PUPDR_PUPD1_Msk
#define GPIO_PUPDR_PUPD1_0 (0x1UL << GPIO_PUPDR_PUPD1_Pos) /*!< 0x00000004 */
#define GPIO_PUPDR_PUPD1_1 (0x2UL << GPIO_PUPDR_PUPD1_Pos) /*!< 0x00000008 */
#define GPIO_PUPDR_PUPD2_Pos (4U)
#define GPIO_PUPDR_PUPD2_Msk (0x3UL << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000030 */
#define GPIO_PUPDR_PUPD2 GPIO_PUPDR_PUPD2_Msk
#define GPIO_PUPDR_PUPD2_0 (0x1UL << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000010 */
#define GPIO_PUPDR_PUPD2_1 (0x2UL << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000020 */
#define GPIO_PUPDR_PUPD3_Pos (6U)
#define GPIO_PUPDR_PUPD3_Msk (0x3UL << GPIO_PUPDR_PUPD3_Pos) /*!< 0x000000C0 */
#define GPIO_PUPDR_PUPD3 GPIO_PUPDR_PUPD3_Msk
#define GPIO_PUPDR_PUPD3_0 (0x1UL << GPIO_PUPDR_PUPD3_Pos) /*!< 0x00000040 */
#define GPIO_PUPDR_PUPD3_1 (0x2UL << GPIO_PUPDR_PUPD3_Pos) /*!< 0x00000080 */
#define GPIO_PUPDR_PUPD4_Pos (8U)
#define GPIO_PUPDR_PUPD4_Msk (0x3UL << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000300 */
#define GPIO_PUPDR_PUPD4 GPIO_PUPDR_PUPD4_Msk
#define GPIO_PUPDR_PUPD4_0 (0x1UL << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000100 */
#define GPIO_PUPDR_PUPD4_1 (0x2UL << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000200 */
#define GPIO_PUPDR_PUPD5_Pos (10U)
#define GPIO_PUPDR_PUPD5_Msk (0x3UL << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000C00 */
#define GPIO_PUPDR_PUPD5 GPIO_PUPDR_PUPD5_Msk
#define GPIO_PUPDR_PUPD5_0 (0x1UL << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000400 */
#define GPIO_PUPDR_PUPD5_1 (0x2UL << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000800 */
#define GPIO_PUPDR_PUPD6_Pos (12U)
#define GPIO_PUPDR_PUPD6_Msk (0x3UL << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00003000 */
#define GPIO_PUPDR_PUPD6 GPIO_PUPDR_PUPD6_Msk
#define GPIO_PUPDR_PUPD6_0 (0x1UL << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00001000 */
#define GPIO_PUPDR_PUPD6_1 (0x2UL << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00002000 */
#define GPIO_PUPDR_PUPD7_Pos (14U)
#define GPIO_PUPDR_PUPD7_Msk (0x3UL << GPIO_PUPDR_PUPD7_Pos) /*!< 0x0000C000 */
#define GPIO_PUPDR_PUPD7 GPIO_PUPDR_PUPD7_Msk
#define GPIO_PUPDR_PUPD7_0 (0x1UL << GPIO_PUPDR_PUPD7_Pos) /*!< 0x00004000 */
#define GPIO_PUPDR_PUPD7_1 (0x2UL << GPIO_PUPDR_PUPD7_Pos) /*!< 0x00008000 */
#define GPIO_PUPDR_PUPD8_Pos (16U)
#define GPIO_PUPDR_PUPD8_Msk (0x3UL << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00030000 */
#define GPIO_PUPDR_PUPD8 GPIO_PUPDR_PUPD8_Msk
#define GPIO_PUPDR_PUPD8_0 (0x1UL << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00010000 */
#define GPIO_PUPDR_PUPD8_1 (0x2UL << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00020000 */
#define GPIO_PUPDR_PUPD9_Pos (18U)
#define GPIO_PUPDR_PUPD9_Msk (0x3UL << GPIO_PUPDR_PUPD9_Pos) /*!< 0x000C0000 */
#define GPIO_PUPDR_PUPD9 GPIO_PUPDR_PUPD9_Msk
#define GPIO_PUPDR_PUPD9_0 (0x1UL << GPIO_PUPDR_PUPD9_Pos) /*!< 0x00040000 */
#define GPIO_PUPDR_PUPD9_1 (0x2UL << GPIO_PUPDR_PUPD9_Pos) /*!< 0x00080000 */
#define GPIO_PUPDR_PUPD10_Pos (20U)
#define GPIO_PUPDR_PUPD10_Msk \
    (0x3UL << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00300000 */
#define GPIO_PUPDR_PUPD10 GPIO_PUPDR_PUPD10_Msk
#define GPIO_PUPDR_PUPD10_0 (0x1UL << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00100000 */
#define GPIO_PUPDR_PUPD10_1 (0x2UL << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00200000 */
#define GPIO_PUPDR_PUPD11_Pos (22U)
#define GPIO_PUPDR_PUPD11_Msk \
    (0x3UL << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00C00000 */
#define GPIO_PUPDR_PUPD11 GPIO_PUPDR_PUPD11_Msk
#define GPIO_PUPDR_PUPD11_0 (0x1UL << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00400000 */
#define GPIO_PUPDR_PUPD11_1 (0x2UL << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00800000 */
#define GPIO_PUPDR_PUPD12_Pos (24U)
#define GPIO_PUPDR_PUPD12_Msk \
    (0x3UL << GPIO_PUPDR_PUPD12_Pos) /*!< 0x03000000 */
#define GPIO_PUPDR_PUPD12 GPIO_PUPDR_PUPD12_Msk
#define GPIO_PUPDR_PUPD12_0 (0x1UL << GPIO_PUPDR_PUPD12_Pos) /*!< 0x01000000 */
#define GPIO_PUPDR_PUPD12_1 (0x2UL << GPIO_PUPDR_PUPD12_Pos) /*!< 0x02000000 */
#define GPIO_PUPDR_PUPD13_Pos (26U)
#define GPIO_PUPDR_PUPD13_Msk \
    (0x3UL << GPIO_PUPDR_PUPD13_Pos) /*!< 0x0C000000 */
#define GPIO_PUPDR_PUPD13 GPIO_PUPDR_PUPD13_Msk
#define GPIO_PUPDR_PUPD13_0 (0x1UL << GPIO_PUPDR_PUPD13_Pos) /*!< 0x04000000 */
#define GPIO_PUPDR_PUPD13_1 (0x2UL << GPIO_PUPDR_PUPD13_Pos) /*!< 0x08000000 */
#define GPIO_PUPDR_PUPD14_Pos (28U)
#define GPIO_PUPDR_PUPD14_Msk \
    (0x3UL << GPIO_PUPDR_PUPD14_Pos) /*!< 0x30000000 */
#define GPIO_PUPDR_PUPD14 GPIO_PUPDR_PUPD14_Msk
#define GPIO_PUPDR_PUPD14_0 (0x1UL << GPIO_PUPDR_PUPD14_Pos) /*!< 0x10000000 */
#define GPIO_PUPDR_PUPD14_1 (0x2UL << GPIO_PUPDR_PUPD14_Pos) /*!< 0x20000000 */
#define GPIO_PUPDR_PUPD15_Pos (30U)
#define GPIO_PUPDR_PUPD15_Msk \
    (0x3UL << GPIO_PUPDR_PUPD15_Pos) /*!< 0xC0000000 */
#define GPIO_PUPDR_PUPD15 GPIO_PUPDR_PUPD15_Msk
#define GPIO_PUPDR_PUPD15_0 (0x1UL << GPIO_PUPDR_PUPD15_Pos) /*!< 0x40000000 */
#define GPIO_PUPDR_PUPD15_1 (0x2UL << GPIO_PUPDR_PUPD15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_IDR register  *******************/
#define GPIO_IDR_ID0_Pos (0U)
#define GPIO_IDR_ID0_Msk (0x1UL << GPIO_IDR_ID0_Pos) /*!< 0x00000001 */
#define GPIO_IDR_ID0 GPIO_IDR_ID0_Msk
#define GPIO_IDR_ID1_Pos (1U)
#define GPIO_IDR_ID1_Msk (0x1UL << GPIO_IDR_ID1_Pos) /*!< 0x00000002 */
#define GPIO_IDR_ID1 GPIO_IDR_ID1_Msk
#define GPIO_IDR_ID2_Pos (2U)
#define GPIO_IDR_ID2_Msk (0x1UL << GPIO_IDR_ID2_Pos) /*!< 0x00000004 */
#define GPIO_IDR_ID2 GPIO_IDR_ID2_Msk
#define GPIO_IDR_ID3_Pos (3U)
#define GPIO_IDR_ID3_Msk (0x1UL << GPIO_IDR_ID3_Pos) /*!< 0x00000008 */
#define GPIO_IDR_ID3 GPIO_IDR_ID3_Msk
#define GPIO_IDR_ID4_Pos (4U)
#define GPIO_IDR_ID4_Msk (0x1UL << GPIO_IDR_ID4_Pos) /*!< 0x00000010 */
#define GPIO_IDR_ID4 GPIO_IDR_ID4_Msk
#define GPIO_IDR_ID5_Pos (5U)
#define GPIO_IDR_ID5_Msk (0x1UL << GPIO_IDR_ID5_Pos) /*!< 0x00000020 */
#define GPIO_IDR_ID5 GPIO_IDR_ID5_Msk
#define GPIO_IDR_ID6_Pos (6U)
#define GPIO_IDR_ID6_Msk (0x1UL << GPIO_IDR_ID6_Pos) /*!< 0x00000040 */
#define GPIO_IDR_ID6 GPIO_IDR_ID6_Msk
#define GPIO_IDR_ID7_Pos (7U)
#define GPIO_IDR_ID7_Msk (0x1UL << GPIO_IDR_ID7_Pos) /*!< 0x00000080 */
#define GPIO_IDR_ID7 GPIO_IDR_ID7_Msk
#define GPIO_IDR_ID8_Pos (8U)
#define GPIO_IDR_ID8_Msk (0x1UL << GPIO_IDR_ID8_Pos) /*!< 0x00000100 */
#define GPIO_IDR_ID8 GPIO_IDR_ID8_Msk
#define GPIO_IDR_ID9_Pos (9U)
#define GPIO_IDR_ID9_Msk (0x1UL << GPIO_IDR_ID9_Pos) /*!< 0x00000200 */
#define GPIO_IDR_ID9 GPIO_IDR_ID9_Msk
#define GPIO_IDR_ID10_Pos (10U)
#define GPIO_IDR_ID10_Msk (0x1UL << GPIO_IDR_ID10_Pos) /*!< 0x00000400 */
#define GPIO_IDR_ID10 GPIO_IDR_ID10_Msk
#define GPIO_IDR_ID11_Pos (11U)
#define GPIO_IDR_ID11_Msk (0x1UL << GPIO_IDR_ID11_Pos) /*!< 0x00000800 */
#define GPIO_IDR_ID11 GPIO_IDR_ID11_Msk
#define GPIO_IDR_ID12_Pos (12U)
#define GPIO_IDR_ID12_Msk (0x1UL << GPIO_IDR_ID12_Pos) /*!< 0x00001000 */
#define GPIO_IDR_ID12 GPIO_IDR_ID12_Msk
#define GPIO_IDR_ID13_Pos (13U)
#define GPIO_IDR_ID13_Msk (0x1UL << GPIO_IDR_ID13_Pos) /*!< 0x00002000 */
#define GPIO_IDR_ID13 GPIO_IDR_ID13_Msk
#define GPIO_IDR_ID14_Pos (14U)
#define GPIO_IDR_ID14_Msk (0x1UL << GPIO_IDR_ID14_Pos) /*!< 0x00004000 */
#define GPIO_IDR_ID14 GPIO_IDR_ID14_Msk
#define GPIO_IDR_ID15_Pos (15U)
#define GPIO_IDR_ID15_Msk (0x1UL << GPIO_IDR_ID15_Pos) /*!< 0x00008000 */
#define GPIO_IDR_ID15 GPIO_IDR_ID15_Msk

/******************  Bits definition for GPIO_ODR register  *******************/
#define GPIO_ODR_OD0_Pos (0U)
#define GPIO_ODR_OD0_Msk (0x1UL << GPIO_ODR_OD0_Pos) /*!< 0x00000001 */
#define GPIO_ODR_OD0 GPIO_ODR_OD0_Msk
#define GPIO_ODR_OD1_Pos (1U)
#define GPIO_ODR_OD1_Msk (0x1UL << GPIO_ODR_OD1_Pos) /*!< 0x00000002 */
#define GPIO_ODR_OD1 GPIO_ODR_OD1_Msk
#define GPIO_ODR_OD2_Pos (2U)
#define GPIO_ODR_OD2_Msk (0x1UL << GPIO_ODR_OD2_Pos) /*!< 0x00000004 */
#define GPIO_ODR_OD2 GPIO_ODR_OD2_Msk
#define GPIO_ODR_OD3_Pos (3U)
#define GPIO_ODR_OD3_Msk (0x1UL << GPIO_ODR_OD3_Pos) /*!< 0x00000008 */
#define GPIO_ODR_OD3 GPIO_ODR_OD3_Msk
#define GPIO_ODR_OD4_Pos (4U)
#define GPIO_ODR_OD4_Msk (0x1UL << GPIO_ODR_OD4_Pos) /*!< 0x00000010 */
#define GPIO_ODR_OD4 GPIO_ODR_OD4_Msk
#define GPIO_ODR_OD5_Pos (5U)
#define GPIO_ODR_OD5_Msk (0x1UL << GPIO_ODR_OD5_Pos) /*!< 0x00000020 */
#define GPIO_ODR_OD5 GPIO_ODR_OD5_Msk
#define GPIO_ODR_OD6_Pos (6U)
#define GPIO_ODR_OD6_Msk (0x1UL << GPIO_ODR_OD6_Pos) /*!< 0x00000040 */
#define GPIO_ODR_OD6 GPIO_ODR_OD6_Msk
#define GPIO_ODR_OD7_Pos (7U)
#define GPIO_ODR_OD7_Msk (0x1UL << GPIO_ODR_OD7_Pos) /*!< 0x00000080 */
#define GPIO_ODR_OD7 GPIO_ODR_OD7_Msk
#define GPIO_ODR_OD8_Pos (8U)
#define GPIO_ODR_OD8_Msk (0x1UL << GPIO_ODR_OD8_Pos) /*!< 0x00000100 */
#define GPIO_ODR_OD8 GPIO_ODR_OD8_Msk
#define GPIO_ODR_OD9_Pos (9U)
#define GPIO_ODR_OD9_Msk (0x1UL << GPIO_ODR_OD9_Pos) /*!< 0x00000200 */
#define GPIO_ODR_OD9 GPIO_ODR_OD9_Msk
#define GPIO_ODR_OD10_Pos (10U)
#define GPIO_ODR_OD10_Msk (0x1UL << GPIO_ODR_OD10_Pos) /*!< 0x00000400 */
#define GPIO_ODR_OD10 GPIO_ODR_OD10_Msk
#define GPIO_ODR_OD11_Pos (11U)
#define GPIO_ODR_OD11_Msk (0x1UL << GPIO_ODR_OD11_Pos) /*!< 0x00000800 */
#define GPIO_ODR_OD11 GPIO_ODR_OD11_Msk
#define GPIO_ODR_OD12_Pos (12U)
#define GPIO_ODR_OD12_Msk (0x1UL << GPIO_ODR_OD12_Pos) /*!< 0x00001000 */
#define GPIO_ODR_OD12 GPIO_ODR_OD12_Msk
#define GPIO_ODR_OD13_Pos (13U)
#define GPIO_ODR_OD13_Msk (0x1UL << GPIO_ODR_OD13_Pos) /*!< 0x00002000 */
#define GPIO_ODR_OD13 GPIO_ODR_OD13_Msk
#define GPIO_ODR_OD14_Pos (14U)
#define GPIO_ODR_OD14_Msk (0x1UL << GPIO_ODR_OD14_Pos) /*!< 0x00004000 */
#define GPIO_ODR_OD14 GPIO_ODR_OD14_Msk
#define GPIO_ODR_OD15_Pos (15U)
#define GPIO_ODR_OD15_Msk (0x1UL << GPIO_ODR_OD15_Pos) /*!< 0x00008000 */
#define GPIO_ODR_OD15 GPIO_ODR_OD15_Msk

/******************  Bits definition for GPIO_BSRR register  ******************/
#define GPIO_BSRR_BS0_Pos (0U)
#define GPIO_BSRR_BS0_Msk (0x1UL << GPIO_BSRR_BS0_Pos) /*!< 0x00000001 */
#define GPIO_BSRR_BS0 GPIO_BSRR_BS0_Msk
#define GPIO_BSRR_BS1_Pos (1U)
#define GPIO_BSRR_BS1_Msk (0x1UL << GPIO_BSRR_BS1_Pos) /*!< 0x00000002 */
#define GPIO_BSRR_BS1 GPIO_BSRR_BS1_Msk
#define GPIO_BSRR_BS2_Pos (2U)
#define GPIO_BSRR_BS2_Msk (0x1UL << GPIO_BSRR_BS2_Pos) /*!< 0x00000004 */
#define GPIO_BSRR_BS2 GPIO_BSRR_BS2_Msk
#define GPIO_BSRR_BS3_Pos (3U)
#define GPIO_BSRR_BS3_Msk (0x1UL << GPIO_BSRR_BS3_Pos) /*!< 0x00000008 */
#define GPIO_BSRR_BS3 GPIO_BSRR_BS3_Msk
#define GPIO_BSRR_BS4_Pos (4U)
#define GPIO_BSRR_BS4_Msk (0x1UL << GPIO_BSRR_BS4_Pos) /*!< 0x00000010 */
#define GPIO_BSRR_BS4 GPIO_BSRR_BS4_Msk
#define GPIO_BSRR_BS5_Pos (5U)
#define GPIO_BSRR_BS5_Msk (0x1UL << GPIO_BSRR_BS5_Pos) /*!< 0x00000020 */
#define GPIO_BSRR_BS5 GPIO_BSRR_BS5_Msk
#define GPIO_BSRR_BS6_Pos (6U)
#define GPIO_BSRR_BS6_Msk (0x1UL << GPIO_BSRR_BS6_Pos) /*!< 0x00000040 */
#define GPIO_BSRR_BS6 GPIO_BSRR_BS6_Msk
#define GPIO_BSRR_BS7_Pos (7U)
#define GPIO_BSRR_BS7_Msk (0x1UL << GPIO_BSRR_BS7_Pos) /*!< 0x00000080 */
#define GPIO_BSRR_BS7 GPIO_BSRR_BS7_Msk
#define GPIO_BSRR_BS8_Pos (8U)
#define GPIO_BSRR_BS8_Msk (0x1UL << GPIO_BSRR_BS8_Pos) /*!< 0x00000100 */
#define GPIO_BSRR_BS8 GPIO_BSRR_BS8_Msk
#define GPIO_BSRR_BS9_Pos (9U)
#define GPIO_BSRR_BS9_Msk (0x1UL << GPIO_BSRR_BS9_Pos) /*!< 0x00000200 */
#define GPIO_BSRR_BS9 GPIO_BSRR_BS9_Msk
#define GPIO_BSRR_BS10_Pos (10U)
#define GPIO_BSRR_BS10_Msk (0x1UL << GPIO_BSRR_BS10_Pos) /*!< 0x00000400 */
#define GPIO_BSRR_BS10 GPIO_BSRR_BS10_Msk
#define GPIO_BSRR_BS11_Pos (11U)
#define GPIO_BSRR_BS11_Msk (0x1UL << GPIO_BSRR_BS11_Pos) /*!< 0x00000800 */
#define GPIO_BSRR_BS11 GPIO_BSRR_BS11_Msk
#define GPIO_BSRR_BS12_Pos (12U)
#define GPIO_BSRR_BS12_Msk (0x1UL << GPIO_BSRR_BS12_Pos) /*!< 0x00001000 */
#define GPIO_BSRR_BS12 GPIO_BSRR_BS12_Msk
#define GPIO_BSRR_BS13_Pos (13U)
#define GPIO_BSRR_BS13_Msk (0x1UL << GPIO_BSRR_BS13_Pos) /*!< 0x00002000 */
#define GPIO_BSRR_BS13 GPIO_BSRR_BS13_Msk
#define GPIO_BSRR_BS14_Pos (14U)
#define GPIO_BSRR_BS14_Msk (0x1UL << GPIO_BSRR_BS14_Pos) /*!< 0x00004000 */
#define GPIO_BSRR_BS14 GPIO_BSRR_BS14_Msk
#define GPIO_BSRR_BS15_Pos (15U)
#define GPIO_BSRR_BS15_Msk (0x1UL << GPIO_BSRR_BS15_Pos) /*!< 0x00008000 */
#define GPIO_BSRR_BS15 GPIO_BSRR_BS15_Msk
#define GPIO_BSRR_BR0_Pos (16U)
#define GPIO_BSRR_BR0_Msk (0x1UL << GPIO_BSRR_BR0_Pos) /*!< 0x00010000 */
#define GPIO_BSRR_BR0 GPIO_BSRR_BR0_Msk
#define GPIO_BSRR_BR1_Pos (17U)
#define GPIO_BSRR_BR1_Msk (0x1UL << GPIO_BSRR_BR1_Pos) /*!< 0x00020000 */
#define GPIO_BSRR_BR1 GPIO_BSRR_BR1_Msk
#define GPIO_BSRR_BR2_Pos (18U)
#define GPIO_BSRR_BR2_Msk (0x1UL << GPIO_BSRR_BR2_Pos) /*!< 0x00040000 */
#define GPIO_BSRR_BR2 GPIO_BSRR_BR2_Msk
#define GPIO_BSRR_BR3_Pos (19U)
#define GPIO_BSRR_BR3_Msk (0x1UL << GPIO_BSRR_BR3_Pos) /*!< 0x00080000 */
#define GPIO_BSRR_BR3 GPIO_BSRR_BR3_Msk
#define GPIO_BSRR_BR4_Pos (20U)
#define GPIO_BSRR_BR4_Msk (0x1UL << GPIO_BSRR_BR4_Pos) /*!< 0x00100000 */
#define GPIO_BSRR_BR4 GPIO_BSRR_BR4_Msk
#define GPIO_BSRR_BR5_Pos (21U)
#define GPIO_BSRR_BR5_Msk (0x1UL << GPIO_BSRR_BR5_Pos) /*!< 0x00200000 */
#define GPIO_BSRR_BR5 GPIO_BSRR_BR5_Msk
#define GPIO_BSRR_BR6_Pos (22U)
#define GPIO_BSRR_BR6_Msk (0x1UL << GPIO_BSRR_BR6_Pos) /*!< 0x00400000 */
#define GPIO_BSRR_BR6 GPIO_BSRR_BR6_Msk
#define GPIO_BSRR_BR7_Pos (23U)
#define GPIO_BSRR_BR7_Msk (0x1UL << GPIO_BSRR_BR7_Pos) /*!< 0x00800000 */
#define GPIO_BSRR_BR7 GPIO_BSRR_BR7_Msk
#define GPIO_BSRR_BR8_Pos (24U)
#define GPIO_BSRR_BR8_Msk (0x1UL << GPIO_BSRR_BR8_Pos) /*!< 0x01000000 */
#define GPIO_BSRR_BR8 GPIO_BSRR_BR8_Msk
#define GPIO_BSRR_BR9_Pos (25U)
#define GPIO_BSRR_BR9_Msk (0x1UL << GPIO_BSRR_BR9_Pos) /*!< 0x02000000 */
#define GPIO_BSRR_BR9 GPIO_BSRR_BR9_Msk
#define GPIO_BSRR_BR10_Pos (26U)
#define GPIO_BSRR_BR10_Msk (0x1UL << GPIO_BSRR_BR10_Pos) /*!< 0x04000000 */
#define GPIO_BSRR_BR10 GPIO_BSRR_BR10_Msk
#define GPIO_BSRR_BR11_Pos (27U)
#define GPIO_BSRR_BR11_Msk (0x1UL << GPIO_BSRR_BR11_Pos) /*!< 0x08000000 */
#define GPIO_BSRR_BR11 GPIO_BSRR_BR11_Msk
#define GPIO_BSRR_BR12_Pos (28U)
#define GPIO_BSRR_BR12_Msk (0x1UL << GPIO_BSRR_BR12_Pos) /*!< 0x10000000 */
#define GPIO_BSRR_BR12 GPIO_BSRR_BR12_Msk
#define GPIO_BSRR_BR13_Pos (29U)
#define GPIO_BSRR_BR13_Msk (0x1UL << GPIO_BSRR_BR13_Pos) /*!< 0x20000000 */
#define GPIO_BSRR_BR13 GPIO_BSRR_BR13_Msk
#define GPIO_BSRR_BR14_Pos (30U)
#define GPIO_BSRR_BR14_Msk (0x1UL << GPIO_BSRR_BR14_Pos) /*!< 0x40000000 */
#define GPIO_BSRR_BR14 GPIO_BSRR_BR14_Msk
#define GPIO_BSRR_BR15_Pos (31U)
#define GPIO_BSRR_BR15_Msk (0x1UL << GPIO_BSRR_BR15_Pos) /*!< 0x80000000 */
#define GPIO_BSRR_BR15 GPIO_BSRR_BR15_Msk

/****************** Bit definition for GPIO_LCKR register *********************/
#define GPIO_LCKR_LCK0_Pos (0U)
#define GPIO_LCKR_LCK0_Msk (0x1UL << GPIO_LCKR_LCK0_Pos) /*!< 0x00000001 */
#define GPIO_LCKR_LCK0 GPIO_LCKR_LCK0_Msk
#define GPIO_LCKR_LCK1_Pos (1U)
#define GPIO_LCKR_LCK1_Msk (0x1UL << GPIO_LCKR_LCK1_Pos) /*!< 0x00000002 */
#define GPIO_LCKR_LCK1 GPIO_LCKR_LCK1_Msk
#define GPIO_LCKR_LCK2_Pos (2U)
#define GPIO_LCKR_LCK2_Msk (0x1UL << GPIO_LCKR_LCK2_Pos) /*!< 0x00000004 */
#define GPIO_LCKR_LCK2 GPIO_LCKR_LCK2_Msk
#define GPIO_LCKR_LCK3_Pos (3U)
#define GPIO_LCKR_LCK3_Msk (0x1UL << GPIO_LCKR_LCK3_Pos) /*!< 0x00000008 */
#define GPIO_LCKR_LCK3 GPIO_LCKR_LCK3_Msk
#define GPIO_LCKR_LCK4_Pos (4U)
#define GPIO_LCKR_LCK4_Msk (0x1UL << GPIO_LCKR_LCK4_Pos) /*!< 0x00000010 */
#define GPIO_LCKR_LCK4 GPIO_LCKR_LCK4_Msk
#define GPIO_LCKR_LCK5_Pos (5U)
#define GPIO_LCKR_LCK5_Msk (0x1UL << GPIO_LCKR_LCK5_Pos) /*!< 0x00000020 */
#define GPIO_LCKR_LCK5 GPIO_LCKR_LCK5_Msk
#define GPIO_LCKR_LCK6_Pos (6U)
#define GPIO_LCKR_LCK6_Msk (0x1UL << GPIO_LCKR_LCK6_Pos) /*!< 0x00000040 */
#define GPIO_LCKR_LCK6 GPIO_LCKR_LCK6_Msk
#define GPIO_LCKR_LCK7_Pos (7U)
#define GPIO_LCKR_LCK7_Msk (0x1UL << GPIO_LCKR_LCK7_Pos) /*!< 0x00000080 */
#define GPIO_LCKR_LCK7 GPIO_LCKR_LCK7_Msk
#define GPIO_LCKR_LCK8_Pos (8U)
#define GPIO_LCKR_LCK8_Msk (0x1UL << GPIO_LCKR_LCK8_Pos) /*!< 0x00000100 */
#define GPIO_LCKR_LCK8 GPIO_LCKR_LCK8_Msk
#define GPIO_LCKR_LCK9_Pos (9U)
#define GPIO_LCKR_LCK9_Msk (0x1UL << GPIO_LCKR_LCK9_Pos) /*!< 0x00000200 */
#define GPIO_LCKR_LCK9 GPIO_LCKR_LCK9_Msk
#define GPIO_LCKR_LCK10_Pos (10U)
#define GPIO_LCKR_LCK10_Msk (0x1UL << GPIO_LCKR_LCK10_Pos) /*!< 0x00000400 */
#define GPIO_LCKR_LCK10 GPIO_LCKR_LCK10_Msk
#define GPIO_LCKR_LCK11_Pos (11U)
#define GPIO_LCKR_LCK11_Msk (0x1UL << GPIO_LCKR_LCK11_Pos) /*!< 0x00000800 */
#define GPIO_LCKR_LCK11 GPIO_LCKR_LCK11_Msk
#define GPIO_LCKR_LCK12_Pos (12U)
#define GPIO_LCKR_LCK12_Msk (0x1UL << GPIO_LCKR_LCK12_Pos) /*!< 0x00001000 */
#define GPIO_LCKR_LCK12 GPIO_LCKR_LCK12_Msk
#define GPIO_LCKR_LCK13_Pos (13U)
#define GPIO_LCKR_LCK13_Msk (0x1UL << GPIO_LCKR_LCK13_Pos) /*!< 0x00002000 */
#define GPIO_LCKR_LCK13 GPIO_LCKR_LCK13_Msk
#define GPIO_LCKR_LCK14_Pos (14U)
#define GPIO_LCKR_LCK14_Msk (0x1UL << GPIO_LCKR_LCK14_Pos) /*!< 0x00004000 */
#define GPIO_LCKR_LCK14 GPIO_LCKR_LCK14_Msk
#define GPIO_LCKR_LCK15_Pos (15U)
#define GPIO_LCKR_LCK15_Msk (0x1UL << GPIO_LCKR_LCK15_Pos) /*!< 0x00008000 */
#define GPIO_LCKR_LCK15 GPIO_LCKR_LCK15_Msk
#define GPIO_LCKR_LCKK_Pos (16U)
#define GPIO_LCKR_LCKK_Msk (0x1UL << GPIO_LCKR_LCKK_Pos) /*!< 0x00010000 */
#define GPIO_LCKR_LCKK GPIO_LCKR_LCKK_Msk

/****************** Bit definition for GPIO_AFRL register *********************/
#define GPIO_AFRL_AFSEL0_Pos (0U)
#define GPIO_AFRL_AFSEL0_Msk (0xFUL << GPIO_AFRL_AFSEL0_Pos) /*!< 0x0000000F */
#define GPIO_AFRL_AFSEL0 GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFSEL0_0 (0x1UL << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000001 */
#define GPIO_AFRL_AFSEL0_1 (0x2UL << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000002 */
#define GPIO_AFRL_AFSEL0_2 (0x4UL << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000004 */
#define GPIO_AFRL_AFSEL0_3 (0x8UL << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000008 */
#define GPIO_AFRL_AFSEL1_Pos (4U)
#define GPIO_AFRL_AFSEL1_Msk (0xFUL << GPIO_AFRL_AFSEL1_Pos) /*!< 0x000000F0 */
#define GPIO_AFRL_AFSEL1 GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFSEL1_0 (0x1UL << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000010 */
#define GPIO_AFRL_AFSEL1_1 (0x2UL << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000020 */
#define GPIO_AFRL_AFSEL1_2 (0x4UL << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000040 */
#define GPIO_AFRL_AFSEL1_3 (0x8UL << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000080 */
#define GPIO_AFRL_AFSEL2_Pos (8U)
#define GPIO_AFRL_AFSEL2_Msk (0xFUL << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000F00 */
#define GPIO_AFRL_AFSEL2 GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFSEL2_0 (0x1UL << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000100 */
#define GPIO_AFRL_AFSEL2_1 (0x2UL << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000200 */
#define GPIO_AFRL_AFSEL2_2 (0x4UL << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000400 */
#define GPIO_AFRL_AFSEL2_3 (0x8UL << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000800 */
#define GPIO_AFRL_AFSEL3_Pos (12U)
#define GPIO_AFRL_AFSEL3_Msk (0xFUL << GPIO_AFRL_AFSEL3_Pos) /*!< 0x0000F000 */
#define GPIO_AFRL_AFSEL3 GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFSEL3_0 (0x1UL << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00001000 */
#define GPIO_AFRL_AFSEL3_1 (0x2UL << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00002000 */
#define GPIO_AFRL_AFSEL3_2 (0x4UL << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00004000 */
#define GPIO_AFRL_AFSEL3_3 (0x8UL << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00008000 */
#define GPIO_AFRL_AFSEL4_Pos (16U)
#define GPIO_AFRL_AFSEL4_Msk (0xFUL << GPIO_AFRL_AFSEL4_Pos) /*!< 0x000F0000 */
#define GPIO_AFRL_AFSEL4 GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFSEL4_0 (0x1UL << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00010000 */
#define GPIO_AFRL_AFSEL4_1 (0x2UL << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00020000 */
#define GPIO_AFRL_AFSEL4_2 (0x4UL << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00040000 */
#define GPIO_AFRL_AFSEL4_3 (0x8UL << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00080000 */
#define GPIO_AFRL_AFSEL5_Pos (20U)
#define GPIO_AFRL_AFSEL5_Msk (0xFUL << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00F00000 */
#define GPIO_AFRL_AFSEL5 GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFSEL5_0 (0x1UL << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00100000 */
#define GPIO_AFRL_AFSEL5_1 (0x2UL << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00200000 */
#define GPIO_AFRL_AFSEL5_2 (0x4UL << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00400000 */
#define GPIO_AFRL_AFSEL5_3 (0x8UL << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00800000 */
#define GPIO_AFRL_AFSEL6_Pos (24U)
#define GPIO_AFRL_AFSEL6_Msk (0xFUL << GPIO_AFRL_AFSEL6_Pos) /*!< 0x0F000000 */
#define GPIO_AFRL_AFSEL6 GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFSEL6_0 (0x1UL << GPIO_AFRL_AFSEL6_Pos) /*!< 0x01000000 */
#define GPIO_AFRL_AFSEL6_1 (0x2UL << GPIO_AFRL_AFSEL6_Pos) /*!< 0x02000000 */
#define GPIO_AFRL_AFSEL6_2 (0x4UL << GPIO_AFRL_AFSEL6_Pos) /*!< 0x04000000 */
#define GPIO_AFRL_AFSEL6_3 (0x8UL << GPIO_AFRL_AFSEL6_Pos) /*!< 0x08000000 */
#define GPIO_AFRL_AFSEL7_Pos (28U)
#define GPIO_AFRL_AFSEL7_Msk (0xFUL << GPIO_AFRL_AFSEL7_Pos) /*!< 0xF0000000 */
#define GPIO_AFRL_AFSEL7 GPIO_AFRL_AFSEL7_Msk
#define GPIO_AFRL_AFSEL7_0 (0x1UL << GPIO_AFRL_AFSEL7_Pos) /*!< 0x10000000 */
#define GPIO_AFRL_AFSEL7_1 (0x2UL << GPIO_AFRL_AFSEL7_Pos) /*!< 0x20000000 */
#define GPIO_AFRL_AFSEL7_2 (0x4UL << GPIO_AFRL_AFSEL7_Pos) /*!< 0x40000000 */
#define GPIO_AFRL_AFSEL7_3 (0x8UL << GPIO_AFRL_AFSEL7_Pos) /*!< 0x80000000 */

/****************** Bit definition for GPIO_AFRH register *********************/
#define GPIO_AFRH_AFSEL8_Pos (0U)
#define GPIO_AFRH_AFSEL8_Msk (0xFUL << GPIO_AFRH_AFSEL8_Pos) /*!< 0x0000000F */
#define GPIO_AFRH_AFSEL8 GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFSEL8_0 (0x1UL << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000001 */
#define GPIO_AFRH_AFSEL8_1 (0x2UL << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000002 */
#define GPIO_AFRH_AFSEL8_2 (0x4UL << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000004 */
#define GPIO_AFRH_AFSEL8_3 (0x8UL << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000008 */
#define GPIO_AFRH_AFSEL9_Pos (4U)
#define GPIO_AFRH_AFSEL9_Msk (0xFUL << GPIO_AFRH_AFSEL9_Pos) /*!< 0x000000F0 */
#define GPIO_AFRH_AFSEL9 GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFSEL9_0 (0x1UL << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000010 */
#define GPIO_AFRH_AFSEL9_1 (0x2UL << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000020 */
#define GPIO_AFRH_AFSEL9_2 (0x4UL << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000040 */
#define GPIO_AFRH_AFSEL9_3 (0x8UL << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000080 */
#define GPIO_AFRH_AFSEL10_Pos (8U)
#define GPIO_AFRH_AFSEL10_Msk \
    (0xFUL << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000F00 */
#define GPIO_AFRH_AFSEL10 GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFSEL10_0 (0x1UL << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000100 */
#define GPIO_AFRH_AFSEL10_1 (0x2UL << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000200 */
#define GPIO_AFRH_AFSEL10_2 (0x4UL << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000400 */
#define GPIO_AFRH_AFSEL10_3 (0x8UL << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000800 */
#define GPIO_AFRH_AFSEL11_Pos (12U)
#define GPIO_AFRH_AFSEL11_Msk \
    (0xFUL << GPIO_AFRH_AFSEL11_Pos) /*!< 0x0000F000 */
#define GPIO_AFRH_AFSEL11 GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFSEL11_0 (0x1UL << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00001000 */
#define GPIO_AFRH_AFSEL11_1 (0x2UL << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00002000 */
#define GPIO_AFRH_AFSEL11_2 (0x4UL << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00004000 */
#define GPIO_AFRH_AFSEL11_3 (0x8UL << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00008000 */
#define GPIO_AFRH_AFSEL12_Pos (16U)
#define GPIO_AFRH_AFSEL12_Msk \
    (0xFUL << GPIO_AFRH_AFSEL12_Pos) /*!< 0x000F0000 */
#define GPIO_AFRH_AFSEL12 GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFSEL12_0 (0x1UL << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00010000 */
#define GPIO_AFRH_AFSEL12_1 (0x2UL << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00020000 */
#define GPIO_AFRH_AFSEL12_2 (0x4UL << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00040000 */
#define GPIO_AFRH_AFSEL12_3 (0x8UL << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00080000 */
#define GPIO_AFRH_AFSEL13_Pos (20U)
#define GPIO_AFRH_AFSEL13_Msk \
    (0xFUL << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00F00000 */
#define GPIO_AFRH_AFSEL13 GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFSEL13_0 (0x1UL << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00100000 */
#define GPIO_AFRH_AFSEL13_1 (0x2UL << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00200000 */
#define GPIO_AFRH_AFSEL13_2 (0x4UL << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00400000 */
#define GPIO_AFRH_AFSEL13_3 (0x8UL << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00800000 */
#define GPIO_AFRH_AFSEL14_Pos (24U)
#define GPIO_AFRH_AFSEL14_Msk \
    (0xFUL << GPIO_AFRH_AFSEL14_Pos) /*!< 0x0F000000 */
#define GPIO_AFRH_AFSEL14 GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFSEL14_0 (0x1UL << GPIO_AFRH_AFSEL14_Pos) /*!< 0x01000000 */
#define GPIO_AFRH_AFSEL14_1 (0x2UL << GPIO_AFRH_AFSEL14_Pos) /*!< 0x02000000 */
#define GPIO_AFRH_AFSEL14_2 (0x4UL << GPIO_AFRH_AFSEL14_Pos) /*!< 0x04000000 */
#define GPIO_AFRH_AFSEL14_3 (0x8UL << GPIO_AFRH_AFSEL14_Pos) /*!< 0x08000000 */
#define GPIO_AFRH_AFSEL15_Pos (28U)
#define GPIO_AFRH_AFSEL15_Msk \
    (0xFUL << GPIO_AFRH_AFSEL15_Pos) /*!< 0xF0000000 */
#define GPIO_AFRH_AFSEL15 GPIO_AFRH_AFSEL15_Msk
#define GPIO_AFRH_AFSEL15_0 (0x1UL << GPIO_AFRH_AFSEL15_Pos) /*!< 0x10000000 */
#define GPIO_AFRH_AFSEL15_1 (0x2UL << GPIO_AFRH_AFSEL15_Pos) /*!< 0x20000000 */
#define GPIO_AFRH_AFSEL15_2 (0x4UL << GPIO_AFRH_AFSEL15_Pos) /*!< 0x40000000 */
#define GPIO_AFRH_AFSEL15_3 (0x8UL << GPIO_AFRH_AFSEL15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_BRR register  ******************/
#define GPIO_BRR_BR0_Pos (0U)
#define GPIO_BRR_BR0_Msk (0x1UL << GPIO_BRR_BR0_Pos) /*!< 0x00000001 */
#define GPIO_BRR_BR0 GPIO_BRR_BR0_Msk
#define GPIO_BRR_BR1_Pos (1U)
#define GPIO_BRR_BR1_Msk (0x1UL << GPIO_BRR_BR1_Pos) /*!< 0x00000002 */
#define GPIO_BRR_BR1 GPIO_BRR_BR1_Msk
#define GPIO_BRR_BR2_Pos (2U)
#define GPIO_BRR_BR2_Msk (0x1UL << GPIO_BRR_BR2_Pos) /*!< 0x00000004 */
#define GPIO_BRR_BR2 GPIO_BRR_BR2_Msk
#define GPIO_BRR_BR3_Pos (3U)
#define GPIO_BRR_BR3_Msk (0x1UL << GPIO_BRR_BR3_Pos) /*!< 0x00000008 */
#define GPIO_BRR_BR3 GPIO_BRR_BR3_Msk
#define GPIO_BRR_BR4_Pos (4U)
#define GPIO_BRR_BR4_Msk (0x1UL << GPIO_BRR_BR4_Pos) /*!< 0x00000010 */
#define GPIO_BRR_BR4 GPIO_BRR_BR4_Msk
#define GPIO_BRR_BR5_Pos (5U)
#define GPIO_BRR_BR5_Msk (0x1UL << GPIO_BRR_BR5_Pos) /*!< 0x00000020 */
#define GPIO_BRR_BR5 GPIO_BRR_BR5_Msk
#define GPIO_BRR_BR6_Pos (6U)
#define GPIO_BRR_BR6_Msk (0x1UL << GPIO_BRR_BR6_Pos) /*!< 0x00000040 */
#define GPIO_BRR_BR6 GPIO_BRR_BR6_Msk
#define GPIO_BRR_BR7_Pos (7U)
#define GPIO_BRR_BR7_Msk (0x1UL << GPIO_BRR_BR7_Pos) /*!< 0x00000080 */
#define GPIO_BRR_BR7 GPIO_BRR_BR7_Msk
#define GPIO_BRR_BR8_Pos (8U)
#define GPIO_BRR_BR8_Msk (0x1UL << GPIO_BRR_BR8_Pos) /*!< 0x00000100 */
#define GPIO_BRR_BR8 GPIO_BRR_BR8_Msk
#define GPIO_BRR_BR9_Pos (9U)
#define GPIO_BRR_BR9_Msk (0x1UL << GPIO_BRR_BR9_Pos) /*!< 0x00000200 */
#define GPIO_BRR_BR9 GPIO_BRR_BR9_Msk
#define GPIO_BRR_BR10_Pos (10U)
#define GPIO_BRR_BR10_Msk (0x1UL << GPIO_BRR_BR10_Pos) /*!< 0x00000400 */
#define GPIO_BRR_BR10 GPIO_BRR_BR10_Msk
#define GPIO_BRR_BR11_Pos (11U)
#define GPIO_BRR_BR11_Msk (0x1UL << GPIO_BRR_BR11_Pos) /*!< 0x00000800 */
#define GPIO_BRR_BR11 GPIO_BRR_BR11_Msk
#define GPIO_BRR_BR12_Pos (12U)
#define GPIO_BRR_BR12_Msk (0x1UL << GPIO_BRR_BR12_Pos) /*!< 0x00001000 */
#define GPIO_BRR_BR12 GPIO_BRR_BR12_Msk
#define GPIO_BRR_BR13_Pos (13U)
#define GPIO_BRR_BR13_Msk (0x1UL << GPIO_BRR_BR13_Pos) /*!< 0x00002000 */
#define GPIO_BRR_BR13 GPIO_BRR_BR13_Msk
#define GPIO_BRR_BR14_Pos (14U)
#define GPIO_BRR_BR14_Msk (0x1UL << GPIO_BRR_BR14_Pos) /*!< 0x00004000 */
#define GPIO_BRR_BR14 GPIO_BRR_BR14_Msk
#define GPIO_BRR_BR15_Pos (15U)
#define GPIO_BRR_BR15_Msk (0x1UL << GPIO_BRR_BR15_Pos) /*!< 0x00008000 */
#define GPIO_BRR_BR15 GPIO_BRR_BR15_Msk

/******************  Bits definition for GPIO_HSLVR register  ******************/
#define GPIO_HSLVR_HSLV0_Pos (0U)
#define GPIO_HSLVR_HSLV0_Msk (0x1UL << GPIO_HSLVR_HSLV0_Pos) /*!< 0x00000001 */
#define GPIO_HSLVR_HSLV0 GPIO_HSLVR_HSLV0_Msk
#define GPIO_HSLVR_HSLV1_Pos (1U)
#define GPIO_HSLVR_HSLV1_Msk (0x1UL << GPIO_HSLVR_HSLV1_Pos) /*!< 0x00000002 */
#define GPIO_HSLVR_HSLV1 GPIO_HSLVR_HSLV1_Msk
#define GPIO_HSLVR_HSLV2_Pos (2U)
#define GPIO_HSLVR_HSLV2_Msk (0x1UL << GPIO_HSLVR_HSLV2_Pos) /*!< 0x00000004 */
#define GPIO_HSLVR_HSLV2 GPIO_HSLVR_HSLV2_Msk
#define GPIO_HSLVR_HSLV3_Pos (3U)
#define GPIO_HSLVR_HSLV3_Msk (0x1UL << GPIO_HSLVR_HSLV3_Pos) /*!< 0x00000008 */
#define GPIO_HSLVR_HSLV3 GPIO_HSLVR_HSLV3_Msk
#define GPIO_HSLVR_HSLV4_Pos (4U)
#define GPIO_HSLVR_HSLV4_Msk (0x1UL << GPIO_HSLVR_HSLV4_Pos) /*!< 0x00000010 */
#define GPIO_HSLVR_HSLV4 GPIO_HSLVR_HSLV4_Msk
#define GPIO_HSLVR_HSLV5_Pos (5U)
#define GPIO_HSLVR_HSLV5_Msk (0x1UL << GPIO_HSLVR_HSLV5_Pos) /*!< 0x00000020 */
#define GPIO_HSLVR_HSLV5 GPIO_HSLVR_HSLV5_Msk
#define GPIO_HSLVR_HSLV6_Pos (6U)
#define GPIO_HSLVR_HSLV6_Msk (0x1UL << GPIO_HSLVR_HSLV6_Pos) /*!< 0x00000040 */
#define GPIO_HSLVR_HSLV6 GPIO_HSLVR_HSLV6_Msk
#define GPIO_HSLVR_HSLV7_Pos (7U)
#define GPIO_HSLVR_HSLV7_Msk (0x1UL << GPIO_HSLVR_HSLV7_Pos) /*!< 0x00000080 */
#define GPIO_HSLVR_HSLV7 GPIO_HSLVR_HSLV7_Msk
#define GPIO_HSLVR_HSLV8_Pos (8U)
#define GPIO_HSLVR_HSLV8_Msk (0x1UL << GPIO_HSLVR_HSLV8_Pos) /*!< 0x00000100 */
#define GPIO_HSLVR_HSLV8 GPIO_HSLVR_HSLV8_Msk
#define GPIO_HSLVR_HSLV9_Pos (9U)
#define GPIO_HSLVR_HSLV9_Msk (0x1UL << GPIO_HSLVR_HSLV9_Pos) /*!< 0x00000200 */
#define GPIO_HSLVR_HSLV9 GPIO_HSLVR_HSLV9_Msk
#define GPIO_HSLVR_HSLV10_Pos (10U)
#define GPIO_HSLVR_HSLV10_Msk \
    (0x1UL << GPIO_HSLVR_HSLV10_Pos) /*!< 0x00000400 */
#define GPIO_HSLVR_HSLV10 GPIO_HSLVR_HSLV10_Msk
#define GPIO_HSLVR_HSLV11_Pos (11U)
#define GPIO_HSLVR_HSLV11_Msk (x1UL << GPIO_HSLVR_HSLV11_Pos) /*!< 0x00000800 */
#define GPIO_HSLVR_HSLV11 GPIO_HSLVR_HSLV11_Msk
#define GPIO_HSLVR_HSLV12_Pos (12U)
#define GPIO_HSLVR_HSLV12_Msk \
    (0x1UL << GPIO_HSLVR_HSLV12_Pos) /*!< 0x00001000 */
#define GPIO_HSLVR_HSLV12 GPIO_HSLVR_HSLV12_Msk
#define GPIO_HSLVR_HSLV13_Pos (13U)
#define GPIO_HSLVR_HSLV13_Msk \
    (0x1UL << GPIO_HSLVR_HSLV13_Pos) /*!< 0x00002000 */
#define GPIO_HSLVR_HSLV13 GPIO_HSLVR_HSLV13_Msk
#define GPIO_HSLVR_HSLV14_Pos (14U)
#define GPIO_HSLVR_HSLV14_Msk \
    (0x1UL << GPIO_HSLVR_HSLV14_Pos) /*!< 0x00004000 */
#define GPIO_HSLVR_HSLV14 GPIO_HSLVR_HSLV14_Msk
#define GPIO_HSLVR_HSLV15_Pos (15U)
#define GPIO_HSLVR_HSLV15_Msk \
    (0x1UL << GPIO_HSLVR_HSLV15_Pos) /*!< 0x00008000 */
#define GPIO_HSLVR_HSLV15 GPIO_HSLVR_HSLV15_Msk

/******************  Bits definition for GPIO_SECCFGR register  ******************/
#define GPIO_SECCFGR_SEC0_Pos (0U)
#define GPIO_SECCFGR_SEC0_Msk \
    (0x1UL << GPIO_SECCFGR_SEC0_Pos) /*!< 0x00000001 */
#define GPIO_SECCFGR_SEC0 GPIO_SECCFGR_SEC0_Msk
#define GPIO_SECCFGR_SEC1_Pos (1U)
#define GPIO_SECCFGR_SEC1_Msk \
    (0x1UL << GPIO_SECCFGR_SEC1_Pos) /*!< 0x00000002 */
#define GPIO_SECCFGR_SEC1 GPIO_SECCFGR_SEC1_Msk
#define GPIO_SECCFGR_SEC2_Pos (2U)
#define GPIO_SECCFGR_SEC2_Msk \
    (0x1UL << GPIO_SECCFGR_SEC2_Pos) /*!< 0x00000004 */
#define GPIO_SECCFGR_SEC2 GPIO_SECCFGR_SEC2_Msk
#define GPIO_SECCFGR_SEC3_Pos (3U)
#define GPIO_SECCFGR_SEC3_Msk \
    (0x1UL << GPIO_SECCFGR_SEC3_Pos) /*!< 0x00000008 */
#define GPIO_SECCFGR_SEC3 GPIO_SECCFGR_SEC3_Msk
#define GPIO_SECCFGR_SEC4_Pos (4U)
#define GPIO_SECCFGR_SEC4_Msk \
    (0x1UL << GPIO_SECCFGR_SEC4_Pos) /*!< 0x00000010 */
#define GPIO_SECCFGR_SEC4 GPIO_SECCFGR_SEC4_Msk
#define GPIO_SECCFGR_SEC5_Pos (5U)
#define GPIO_SECCFGR_SEC5_Msk \
    (0x1UL << GPIO_SECCFGR_SEC5_Pos) /*!< 0x00000020 */
#define GPIO_SECCFGR_SEC5 GPIO_SECCFGR_SEC5_Msk
#define GPIO_SECCFGR_SEC6_Pos (6U)
#define GPIO_SECCFGR_SEC6_Msk \
    (0x1UL << GPIO_SECCFGR_SEC6_Pos) /*!< 0x00000040 */
#define GPIO_SECCFGR_SEC6 GPIO_SECCFGR_SEC6_Msk
#define GPIO_SECCFGR_SEC7_Pos (7U)
#define GPIO_SECCFGR_SEC7_Msk \
    (0x1UL << GPIO_SECCFGR_SEC7_Pos) /*!< 0x00000080 */
#define GPIO_SECCFGR_SEC7 GPIO_SECCFGR_SEC7_Msk
#define GPIO_SECCFGR_SEC8_Pos (8U)
#define GPIO_SECCFGR_SEC8_Msk \
    (0x1UL << GPIO_SECCFGR_SEC8_Pos) /*!< 0x00000100 */
#define GPIO_SECCFGR_SEC8 GPIO_SECCFGR_SEC8_Msk
#define GPIO_SECCFGR_SEC9_Pos (9U)
#define GPIO_SECCFGR_SEC9_Msk \
    (0x1UL << GPIO_SECCFGR_SEC9_Pos) /*!< 0x00000200 */
#define GPIO_SECCFGR_SEC9 GPIO_SECCFGR_SEC9_Msk
#define GPIO_SECCFGR_SEC10_Pos (10U)
#define GPIO_SECCFGR_SEC10_Msk \
    (0x1UL << GPIO_SECCFGR_SEC10_Pos) /*!< 0x00000400 */
#define GPIO_SECCFGR_SEC10 GPIO_SECCFGR_SEC10_Msk
#define GPIO_SECCFGR_SEC11_Pos (11U)
#define GPIO_SECCFGR_SEC11_Msk \
    (x1UL << GPIO_SECCFGR_SEC11_Pos) /*!< 0x00000800 */
#define GPIO_SECCFGR_SEC11 GPIO_SECCFGR_SEC11_Msk
#define GPIO_SECCFGR_SEC12_Pos (12U)
#define GPIO_SECCFGR_SEC12_Msk \
    (0x1UL << GPIO_SECCFGR_SEC12_Pos) /*!< 0x00001000 */
#define GPIO_SECCFGR_SEC12 GPIO_SECCFGR_SEC12_Msk
#define GPIO_SECCFGR_SEC13_Pos (13U)
#define GPIO_SECCFGR_SEC13_Msk \
    (0x1UL << GPIO_SECCFGR_SEC13_Pos) /*!< 0x00002000 */
#define GPIO_SECCFGR_SEC13 GPIO_SECCFGR_SEC13_Msk
#define GPIO_SECCFGR_SEC14_Pos (14U)
#define GPIO_SECCFGR_SEC14_Msk \
    (0x1UL << GPIO_SECCFGR_SEC14_Pos) /*!< 0x00004000 */
#define GPIO_SECCFGR_SEC14 GPIO_SECCFGR_SEC14_Msk
#define GPIO_SECCFGR_SEC15_Pos (15U)
#define GPIO_SECCFGR_SEC15_Msk \
    (0x1UL << GPIO_SECCFGR_SEC15_Pos) /*!< 0x00008000 */
#define GPIO_SECCFGR_SEC15 GPIO_SECCFGR_SEC15_Msk

/******************************************************************************/
/*                                                                            */
/*                                 ICACHE                                     */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for ICACHE_CR register  *******************/
#define ICACHE_CR_EN_Pos (0U)
#define ICACHE_CR_EN_Msk (0x1UL << ICACHE_CR_EN_Pos) /*!< 0x00000001 */
#define ICACHE_CR_EN ICACHE_CR_EN_Msk                /*!< Enable */
#define ICACHE_CR_CACHEINV_Pos (1U)
#define ICACHE_CR_CACHEINV_Msk \
    (0x1UL << ICACHE_CR_CACHEINV_Pos)             /*!< 0x00000002 */
#define ICACHE_CR_CACHEINV ICACHE_CR_CACHEINV_Msk /*!< Cache invalidation */
#define ICACHE_CR_WAYSEL_Pos (2U)
#define ICACHE_CR_WAYSEL_Msk (0x1UL << ICACHE_CR_WAYSEL_Pos) /*!< 0x00000004 */
#define ICACHE_CR_WAYSEL ICACHE_CR_WAYSEL_Msk /*!< Ways selection */
#define ICACHE_CR_HITMEN_Pos (16U)
#define ICACHE_CR_HITMEN_Msk (0x1UL << ICACHE_CR_HITMEN_Pos) /*!< 0x00010000 */
#define ICACHE_CR_HITMEN ICACHE_CR_HITMEN_Msk /*!< Hit monitor enable */
#define ICACHE_CR_MISSMEN_Pos (17U)
#define ICACHE_CR_MISSMEN_Msk \
    (0x1UL << ICACHE_CR_MISSMEN_Pos)            /*!< 0x00020000 */
#define ICACHE_CR_MISSMEN ICACHE_CR_MISSMEN_Msk /*!< Miss monitor enable */
#define ICACHE_CR_HITMRST_Pos (18U)
#define ICACHE_CR_HITMRST_Msk \
    (0x1UL << ICACHE_CR_HITMRST_Pos)            /*!< 0x00040000 */
#define ICACHE_CR_HITMRST ICACHE_CR_HITMRST_Msk /*!< Hit monitor reset */
#define ICACHE_CR_MISSMRST_Pos (19U)
#define ICACHE_CR_MISSMRST_Msk \
    (0x1UL << ICACHE_CR_MISSMRST_Pos)             /*!< 0x00080000 */
#define ICACHE_CR_MISSMRST ICACHE_CR_MISSMRST_Msk /*!< Miss monitor reset */

/******************  Bit definition for ICACHE_SR register  *******************/
#define ICACHE_SR_BUSYF_Pos (0U)
#define ICACHE_SR_BUSYF_Msk (0x1UL << ICACHE_SR_BUSYF_Pos) /*!< 0x00000001 */
#define ICACHE_SR_BUSYF ICACHE_SR_BUSYF_Msk                /*!< Busy flag */
#define ICACHE_SR_BSYENDF_Pos (1U)
#define ICACHE_SR_BSYENDF_Msk \
    (0x1UL << ICACHE_SR_BSYENDF_Pos)            /*!< 0x00000002 */
#define ICACHE_SR_BSYENDF ICACHE_SR_BSYENDF_Msk /*!< Busy end flag */
#define ICACHE_SR_ERRF_Pos (2U)
#define ICACHE_SR_ERRF_Msk (0x1UL << ICACHE_SR_ERRF_Pos) /*!< 0x00000004 */
#define ICACHE_SR_ERRF ICACHE_SR_ERRF_Msk /*!< Cache error flag */

/******************  Bit definition for ICACHE_IER register  ******************/
#define ICACHE_IER_BSYENDIE_Pos (1U)
#define ICACHE_IER_BSYENDIE_Msk \
    (0x1UL << ICACHE_IER_BSYENDIE_Pos) /*!< 0x00000002 */
#define ICACHE_IER_BSYENDIE \
    ICACHE_IER_BSYENDIE_Msk /*!< Busy end interrupt enable */
#define ICACHE_IER_ERRIE_Pos (2U)
#define ICACHE_IER_ERRIE_Msk (0x1UL << ICACHE_IER_ERRIE_Pos) /*!< 0x00000004 */
#define ICACHE_IER_ERRIE \
    ICACHE_IER_ERRIE_Msk /*!< Cache error interrupt enable */

/******************  Bit definition for ICACHE_FCR register  ******************/
#define ICACHE_FCR_CBSYENDF_Pos (1U)
#define ICACHE_FCR_CBSYENDF_Msk \
    (0x1UL << ICACHE_FCR_CBSYENDF_Pos)              /*!< 0x00000002 */
#define ICACHE_FCR_CBSYENDF ICACHE_FCR_CBSYENDF_Msk /*!< Busy end flag clear */
#define ICACHE_FCR_CERRF_Pos (2U)
#define ICACHE_FCR_CERRF_Msk (0x1UL << ICACHE_FCR_CERRF_Pos) /*!< 0x00000004 */
#define ICACHE_FCR_CERRF ICACHE_FCR_CERRF_Msk /*!< Cache error flag clear */

/******************  Bit definition for ICACHE_HMONR register  ****************/
#define ICACHE_HMONR_HITMON_Pos (0U)
#define ICACHE_HMONR_HITMON_Msk \
    (0xFFFFFFFFUL << ICACHE_HMONR_HITMON_Pos) /*!< 0xFFFFFFFF */
#define ICACHE_HMONR_HITMON \
    ICACHE_HMONR_HITMON_Msk /*!< Cache hit monitor register */

/******************  Bit definition for ICACHE_MMONR register  ****************/
#define ICACHE_MMONR_MISSMON_Pos (0U)
#define ICACHE_MMONR_MISSMON_Msk \
    (0xFFFFUL << ICACHE_MMONR_MISSMON_Pos) /*!< 0x0000FFFF */
#define ICACHE_MMONR_MISSMON \
    ICACHE_MMONR_MISSMON_Msk /*!< Cache miss monitor register */

/******************************************************************************/
/*                                                                            */
/*                    Digital Temperature Sensor (DTS)                        */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for DTS_CFGR1 register  ******************/
#define DTS_CFGR1_TS1_EN_Pos (0U)
#define DTS_CFGR1_TS1_EN_Msk (0x1UL << DTS_CFGR1_TS1_EN_Pos) /*!< 0x00000001 */
#define DTS_CFGR1_TS1_EN DTS_CFGR1_TS1_EN_Msk                /*!< DTS Enable */
#define DTS_CFGR1_TS1_START_Pos (4U)
#define DTS_CFGR1_TS1_START_Msk \
    (0x1UL << DTS_CFGR1_TS1_START_Pos) /*!< 0x00000010 */
#define DTS_CFGR1_TS1_START \
    DTS_CFGR1_TS1_START_Msk /*!< Proceed to a frequency measurement on DTS */
#define DTS_CFGR1_TS1_INTRIG_SEL_Pos (8U)
#define DTS_CFGR1_TS1_INTRIG_SEL_Msk \
    (0xFUL << DTS_CFGR1_TS1_INTRIG_SEL_Pos) /*!< 0x00000F00 */
#define DTS_CFGR1_TS1_INTRIG_SEL \
    DTS_CFGR1_TS1_INTRIG_SEL_Msk /*!< Input triggers selection bits [3:0] for DTS */
#define DTS_CFGR1_TS1_INTRIG_SEL_0 \
    (0x1UL << DTS_CFGR1_TS1_INTRIG_SEL_Pos) /*!< 0x00000100 */
#define DTS_CFGR1_TS1_INTRIG_SEL_1 \
    (0x2UL << DTS_CFGR1_TS1_INTRIG_SEL_Pos) /*!< 0x00000200 */
#define DTS_CFGR1_TS1_INTRIG_SEL_2 \
    (0x4UL << DTS_CFGR1_TS1_INTRIG_SEL_Pos) /*!< 0x00000400 */
#define DTS_CFGR1_TS1_INTRIG_SEL_3 \
    (0x8UL << DTS_CFGR1_TS1_INTRIG_SEL_Pos) /*!< 0x00000800 */
#define DTS_CFGR1_TS1_SMP_TIME_Pos (16U)
#define DTS_CFGR1_TS1_SMP_TIME_Msk \
    (0xFUL << DTS_CFGR1_TS1_SMP_TIME_Pos) /*!< 0x000F0000 */
#define DTS_CFGR1_TS1_SMP_TIME \
    DTS_CFGR1_TS1_SMP_TIME_Msk /*!< Sample time [3:0] for DTS */
#define DTS_CFGR1_TS1_SMP_TIME_0 \
    (0x1UL << DTS_CFGR1_TS1_SMP_TIME_Pos) /*!< 0x00010000 */
#define DTS_CFGR1_TS1_SMP_TIME_1 \
    (0x2UL << DTS_CFGR1_TS1_SMP_TIME_Pos) /*!< 0x00020000 */
#define DTS_CFGR1_TS1_SMP_TIME_2 \
    (0x4UL << DTS_CFGR1_TS1_SMP_TIME_Pos) /*!< 0x00040000 */
#define DTS_CFGR1_TS1_SMP_TIME_3 \
    (0x8UL << DTS_CFGR1_TS1_SMP_TIME_Pos) /*!< 0x00080000 */
#define DTS_CFGR1_REFCLK_SEL_Pos (20U)
#define DTS_CFGR1_REFCLK_SEL_Msk \
    (0x1UL << DTS_CFGR1_REFCLK_SEL_Pos) /*!< 0x00100000 */
#define DTS_CFGR1_REFCLK_SEL \
    DTS_CFGR1_REFCLK_SEL_Msk /*!< Reference Clock Selection */
#define DTS_CFGR1_Q_MEAS_OPT_Pos (21U)
#define DTS_CFGR1_Q_MEAS_OPT_Msk \
    (0x1UL << DTS_CFGR1_Q_MEAS_OPT_Pos) /*!< 0x00200000 */
#define DTS_CFGR1_Q_MEAS_OPT \
    DTS_CFGR1_Q_MEAS_OPT_Msk /*!< Quick measure option bit  */
#define DTS_CFGR1_HSREF_CLK_DIV_Pos (24U)
#define DTS_CFGR1_HSREF_CLK_DIV_Msk \
    (0x7FUL << DTS_CFGR1_HSREF_CLK_DIV_Pos) /*!< 0x7F000000 */
#define DTS_CFGR1_HSREF_CLK_DIV \
    DTS_CFGR1_HSREF_CLK_DIV_Msk /*!< High Speed Clock Divider Ratio [6:0]*/

/******************  Bit definition for DTS_T0VALR1 register  ******************/
#define DTS_T0VALR1_TS1_FMT0_Pos (0U)
#define DTS_T0VALR1_TS1_FMT0_Msk \
    (0xFFFFUL << DTS_T0VALR1_TS1_FMT0_Pos) /*!< 0x0000FFFF */
#define DTS_T0VALR1_TS1_FMT0 \
    DTS_T0VALR1_TS1_FMT0_Msk /*!< Engineering value of the measured frequency at T0 for DTS */
#define DTS_T0VALR1_TS1_T0_Pos (16U)
#define DTS_T0VALR1_TS1_T0_Msk \
    (0x3UL << DTS_T0VALR1_TS1_T0_Pos) /*!< 0x00030000 */
#define DTS_T0VALR1_TS1_T0 \
    DTS_T0VALR1_TS1_T0_Msk /*!< Engineering value of the DTSerature T0 for DTS */

/******************  Bit definition for DTS_RAMPVALR register  ******************/
#define DTS_RAMPVALR_TS1_RAMP_COEFF_Pos (0U)
#define DTS_RAMPVALR_TS1_RAMP_COEFF_Msk \
    (0xFFFFUL << DTS_RAMPVALR_TS1_RAMP_COEFF_Pos) /*!< 0x0000FFFF */
#define DTS_RAMPVALR_TS1_RAMP_COEFF \
    DTS_RAMPVALR_TS1_RAMP_COEFF_Msk /*!< Engineering value of the ramp coefficient for DTS */

/******************  Bit definition for DTS_ITR1 register      ******************/
#define DTS_ITR1_TS1_LITTHD_Pos (0U)
#define DTS_ITR1_TS1_LITTHD_Msk \
    (0xFFFFUL << DTS_ITR1_TS1_LITTHD_Pos) /*!< 0x0000FFFF */
#define DTS_ITR1_TS1_LITTHD \
    DTS_ITR1_TS1_LITTHD_Msk /*!< Low interrupt threshold[15:0] for DTS */
#define DTS_ITR1_TS1_HITTHD_Pos (16U)
#define DTS_ITR1_TS1_HITTHD_Msk \
    (0xFFFFUL << DTS_ITR1_TS1_HITTHD_Pos) /*!< 0xFFFF0000 */
#define DTS_ITR1_TS1_HITTHD \
    DTS_ITR1_TS1_HITTHD_Msk /*!< High interrupt threshold[15:0] for DTS */

/******************  Bit definition for DTS_DR register        ******************/
#define DTS_DR_TS1_MFREQ_Pos (0U)
#define DTS_DR_TS1_MFREQ_Msk \
    (0xFFFFUL << DTS_DR_TS1_MFREQ_Pos) /*!< 0x0000FFFF */
#define DTS_DR_TS1_MFREQ \
    DTS_DR_TS1_MFREQ_Msk /*!< Measured Frequency[15:0] for DTS */

/******************  Bit definition for DTS_SR register        ******************/
#define DTS_SR_TS1_ITEF_Pos (0U)
#define DTS_SR_TS1_ITEF_Msk (0x1UL << DTS_SR_TS1_ITEF_Pos) /*!< 0x00000001 */
#define DTS_SR_TS1_ITEF \
    DTS_SR_TS1_ITEF_Msk /*!< Interrupt flag for end of measure for DTS */
#define DTS_SR_TS1_ITLF_Pos (1U)
#define DTS_SR_TS1_ITLF_Msk (0x1UL << DTS_SR_TS1_ITLF_Pos) /*!< 0x00000002 */
#define DTS_SR_TS1_ITLF \
    DTS_SR_TS1_ITLF_Msk /*!< Interrupt flag for low threshold for DTS  */
#define DTS_SR_TS1_ITHF_Pos (2U)
#define DTS_SR_TS1_ITHF_Msk (0x1UL << DTS_SR_TS1_ITHF_Pos) /*!< 0x00000004 */
#define DTS_SR_TS1_ITHF \
    DTS_SR_TS1_ITHF_Msk /*!< Interrupt flag for high threshold for DTS */
#define DTS_SR_TS1_AITEF_Pos (4U)
#define DTS_SR_TS1_AITEF_Msk (0x1UL << DTS_SR_TS1_AITEF_Pos) /*!< 0x00000010 */
#define DTS_SR_TS1_AITEF \
    DTS_SR_TS1_AITEF_Msk /*!< Asynchronous interrupt flag for end of measure for DTS */
#define DTS_SR_TS1_AITLF_Pos (5U)
#define DTS_SR_TS1_AITLF_Msk (0x1UL << DTS_SR_TS1_AITLF_Pos) /*!< 0x00000020 */
#define DTS_SR_TS1_AITLF \
    DTS_SR_TS1_AITLF_Msk /*!< Asynchronous interrupt flag for low threshold for DTS  */
#define DTS_SR_TS1_AITHF_Pos (6U)
#define DTS_SR_TS1_AITHF_Msk (0x1UL << DTS_SR_TS1_AITHF_Pos) /*!< 0x00000040 */
#define DTS_SR_TS1_AITHF \
    DTS_SR_TS1_AITHF_Msk /*!< Asynchronous interrupt flag for high threshold for DTS */
#define DTS_SR_TS1_RDY_Pos (15U)
#define DTS_SR_TS1_RDY_Msk (0x1UL << DTS_SR_TS1_RDY_Pos) /*!< 0x00008000 */
#define DTS_SR_TS1_RDY DTS_SR_TS1_RDY_Msk                /*!< DTS ready flag */

/******************  Bit definition for DTS_ITENR register      ******************/
#define DTS_ITENR_TS1_ITEEN_Pos (0U)
#define DTS_ITENR_TS1_ITEEN_Msk \
    (0x1UL << DTS_ITENR_TS1_ITEEN_Pos) /*!< 0x00000001 */
#define DTS_ITENR_TS1_ITEEN \
    DTS_ITENR_TS1_ITEEN_Msk /*!< Enable interrupt flag for end of measure for DTS */
#define DTS_ITENR_TS1_ITLEN_Pos (1U)
#define DTS_ITENR_TS1_ITLEN_Msk \
    (0x1UL << DTS_ITENR_TS1_ITLEN_Pos) /*!< 0x00000002 */
#define DTS_ITENR_TS1_ITLEN \
    DTS_ITENR_TS1_ITLEN_Msk /*!< Enable interrupt flag for low threshold for DTS  */
#define DTS_ITENR_TS1_ITHEN_Pos (2U)
#define DTS_ITENR_TS1_ITHEN_Msk \
    (0x1UL << DTS_ITENR_TS1_ITHEN_Pos) /*!< 0x00000004 */
#define DTS_ITENR_TS1_ITHEN \
    DTS_ITENR_TS1_ITHEN_Msk /*!< Enable interrupt flag for high threshold for DTS */
#define DTS_ITENR_TS1_AITEEN_Pos (4U)
#define DTS_ITENR_TS1_AITEEN_Msk \
    (0x1UL << DTS_ITENR_TS1_AITEEN_Pos) /*!< 0x00000010 */
#define DTS_ITENR_TS1_AITEEN \
    DTS_ITENR_TS1_AITEEN_Msk /*!< Enable asynchronous interrupt flag for end of measure for DTS */
#define DTS_ITENR_TS1_AITLEN_Pos (5U)
#define DTS_ITENR_TS1_AITLEN_Msk \
    (0x1UL << DTS_ITENR_TS1_AITLEN_Pos) /*!< 0x00000020 */
#define DTS_ITENR_TS1_AITLEN \
    DTS_ITENR_TS1_AITLEN_Msk /*!< Enable Asynchronous interrupt flag for low threshold for DTS  */
#define DTS_ITENR_TS1_AITHEN_Pos (6U)
#define DTS_ITENR_TS1_AITHEN_Msk \
    (0x1UL << DTS_ITENR_TS1_AITHEN_Pos) /*!< 0x00000040 */
#define DTS_ITENR_TS1_AITHEN \
    DTS_ITENR_TS1_AITHEN_Msk /*!< Enable asynchronous interrupt flag for high threshold for DTS */

/******************  Bit definition for DTS_ICIFR register      ******************/
#define DTS_ICIFR_TS1_CITEF_Pos (0U)
#define DTS_ICIFR_TS1_CITEF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CITEF_Pos) /*!< 0x00000001 */
#define DTS_ICIFR_TS1_CITEF \
    DTS_ICIFR_TS1_CITEF_Msk /*!< Clear the IT flag for End Of Measure for DTS */
#define DTS_ICIFR_TS1_CITLF_Pos (1U)
#define DTS_ICIFR_TS1_CITLF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CITLF_Pos) /*!< 0x00000002 */
#define DTS_ICIFR_TS1_CITLF \
    DTS_ICIFR_TS1_CITLF_Msk /*!< Clear the IT flag for low threshold for DTS  */
#define DTS_ICIFR_TS1_CITHF_Pos (2U)
#define DTS_ICIFR_TS1_CITHF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CITHF_Pos) /*!< 0x00000004 */
#define DTS_ICIFR_TS1_CITHF \
    DTS_ICIFR_TS1_CITHF_Msk /*!< Clear the IT flag for high threshold on DTS  */
#define DTS_ICIFR_TS1_CAITEF_Pos (4U)
#define DTS_ICIFR_TS1_CAITEF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CAITEF_Pos) /*!< 0x00000010 */
#define DTS_ICIFR_TS1_CAITEF \
    DTS_ICIFR_TS1_CAITEF_Msk /*!< Clear the asynchronous IT flag for End Of Measure for DTS */
#define DTS_ICIFR_TS1_CAITLF_Pos (5U)
#define DTS_ICIFR_TS1_CAITLF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CAITLF_Pos) /*!< 0x00000020 */
#define DTS_ICIFR_TS1_CAITLF \
    DTS_ICIFR_TS1_CAITLF_Msk /*!< Clear the asynchronous IT flag for low threshold for DTS  */
#define DTS_ICIFR_TS1_CAITHF_Pos (6U)
#define DTS_ICIFR_TS1_CAITHF_Msk \
    (0x1UL << DTS_ICIFR_TS1_CAITHF_Pos) /*!< 0x00000040 */
#define DTS_ICIFR_TS1_CAITHF \
    DTS_ICIFR_TS1_CAITHF_Msk /*!< Clear the asynchronous IT flag for high threshold on DTS  */

/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for TIM_CR1 register  ********************/
#define TIM_CR1_CEN_Pos (0U)
#define TIM_CR1_CEN_Msk (0x1UL << TIM_CR1_CEN_Pos) /*!< 0x00000001 */
#define TIM_CR1_CEN TIM_CR1_CEN_Msk                /*!<Counter enable */
#define TIM_CR1_UDIS_Pos (1U)
#define TIM_CR1_UDIS_Msk (0x1UL << TIM_CR1_UDIS_Pos) /*!< 0x00000002 */
#define TIM_CR1_UDIS TIM_CR1_UDIS_Msk                /*!<Update disable */
#define TIM_CR1_URS_Pos (2U)
#define TIM_CR1_URS_Msk (0x1UL << TIM_CR1_URS_Pos) /*!< 0x00000004 */
#define TIM_CR1_URS TIM_CR1_URS_Msk                /*!<Update request source */
#define TIM_CR1_OPM_Pos (3U)
#define TIM_CR1_OPM_Msk (0x1UL << TIM_CR1_OPM_Pos) /*!< 0x00000008 */
#define TIM_CR1_OPM TIM_CR1_OPM_Msk                /*!<One pulse mode */
#define TIM_CR1_DIR_Pos (4U)
#define TIM_CR1_DIR_Msk (0x1UL << TIM_CR1_DIR_Pos) /*!< 0x00000010 */
#define TIM_CR1_DIR TIM_CR1_DIR_Msk                /*!<Direction */
#define TIM_CR1_CMS_Pos (5U)
#define TIM_CR1_CMS_Msk (0x3UL << TIM_CR1_CMS_Pos) /*!< 0x00000060 */
#define TIM_CR1_CMS \
    TIM_CR1_CMS_Msk /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0 (0x1UL << TIM_CR1_CMS_Pos) /*!< 0x00000020 */
#define TIM_CR1_CMS_1 (0x2UL << TIM_CR1_CMS_Pos) /*!< 0x00000040 */
#define TIM_CR1_ARPE_Pos (7U)
#define TIM_CR1_ARPE_Msk (0x1UL << TIM_CR1_ARPE_Pos) /*!< 0x00000080 */
#define TIM_CR1_ARPE TIM_CR1_ARPE_Msk /*!<Auto-reload preload enable */
#define TIM_CR1_CKD_Pos (8U)
#define TIM_CR1_CKD_Msk (0x3UL << TIM_CR1_CKD_Pos) /*!< 0x00000300 */
#define TIM_CR1_CKD TIM_CR1_CKD_Msk /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0 (0x1UL << TIM_CR1_CKD_Pos) /*!< 0x00000100 */
#define TIM_CR1_CKD_1 (0x2UL << TIM_CR1_CKD_Pos) /*!< 0x00000200 */
#define TIM_CR1_UIFREMAP_Pos (11U)
#define TIM_CR1_UIFREMAP_Msk (0x1UL << TIM_CR1_UIFREMAP_Pos) /*!< 0x00000800 */
#define TIM_CR1_UIFREMAP TIM_CR1_UIFREMAP_Msk /*!<Update interrupt flag remap */
#define TIM_CR1_DITHEN_Pos (12U)
#define TIM_CR1_DITHEN_Msk (0x1UL << TIM_CR1_DITHEN_Pos) /*!< 0x00001000 */
#define TIM_CR1_DITHEN TIM_CR1_DITHEN_Msk                /*!<Dithering enable */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define TIM_CR2_CCPC_Pos (0U)
#define TIM_CR2_CCPC_Msk (0x1UL << TIM_CR2_CCPC_Pos) /*!< 0x00000001 */
#define TIM_CR2_CCPC TIM_CR2_CCPC_Msk /*!<Capture/Compare Preloaded Control */
#define TIM_CR2_CCUS_Pos (2U)
#define TIM_CR2_CCUS_Msk (0x1UL << TIM_CR2_CCUS_Pos) /*!< 0x00000004 */
#define TIM_CR2_CCUS \
    TIM_CR2_CCUS_Msk /*!<Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS_Pos (3U)
#define TIM_CR2_CCDS_Msk (0x1UL << TIM_CR2_CCDS_Pos) /*!< 0x00000008 */
#define TIM_CR2_CCDS TIM_CR2_CCDS_Msk /*!<Capture/Compare DMA Selection */
#define TIM_CR2_MMS_Pos (4U)
#define TIM_CR2_MMS_Msk (0x200007UL << TIM_CR2_MMS_Pos) /*!< 0x02000070 */
#define TIM_CR2_MMS TIM_CR2_MMS_Msk /*!<MMS[3:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS_0 (0x000001UL << TIM_CR2_MMS_Pos) /*!< 0x00000010 */
#define TIM_CR2_MMS_1 (0x000002UL << TIM_CR2_MMS_Pos) /*!< 0x00000020 */
#define TIM_CR2_MMS_2 (0x000004UL << TIM_CR2_MMS_Pos) /*!< 0x00000040 */
#define TIM_CR2_MMS_3 (0x200000UL << TIM_CR2_MMS_Pos) /*!< 0x02000000 */
#define TIM_CR2_TI1S_Pos (7U)
#define TIM_CR2_TI1S_Msk (0x1UL << TIM_CR2_TI1S_Pos) /*!< 0x00000080 */
#define TIM_CR2_TI1S TIM_CR2_TI1S_Msk                /*!<TI1 Selection */
#define TIM_CR2_OIS1_Pos (8U)
#define TIM_CR2_OIS1_Msk (0x1UL << TIM_CR2_OIS1_Pos) /*!< 0x00000100 */
#define TIM_CR2_OIS1 TIM_CR2_OIS1_Msk /*!<Output Idle state 1 (OC1 output) */
#define TIM_CR2_OIS1N_Pos (9U)
#define TIM_CR2_OIS1N_Msk (0x1UL << TIM_CR2_OIS1N_Pos) /*!< 0x00000200 */
#define TIM_CR2_OIS1N TIM_CR2_OIS1N_Msk /*!<Output Idle state 1 (OC1N output) */
#define TIM_CR2_OIS2_Pos (10U)
#define TIM_CR2_OIS2_Msk (0x1UL << TIM_CR2_OIS2_Pos) /*!< 0x00000400 */
#define TIM_CR2_OIS2 TIM_CR2_OIS2_Msk /*!<Output Idle state 2 (OC2 output) */
#define TIM_CR2_OIS2N_Pos (11U)
#define TIM_CR2_OIS2N_Msk (0x1UL << TIM_CR2_OIS2N_Pos) /*!< 0x00000800 */
#define TIM_CR2_OIS2N TIM_CR2_OIS2N_Msk /*!<Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3_Pos (12U)
#define TIM_CR2_OIS3_Msk (0x1UL << TIM_CR2_OIS3_Pos) /*!< 0x00001000 */
#define TIM_CR2_OIS3 TIM_CR2_OIS3_Msk /*!<Output Idle state 3 (OC3 output) */
#define TIM_CR2_OIS3N_Pos (13U)
#define TIM_CR2_OIS3N_Msk (0x1UL << TIM_CR2_OIS3N_Pos) /*!< 0x00002000 */
#define TIM_CR2_OIS3N TIM_CR2_OIS3N_Msk /*!<Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4_Pos (14U)
#define TIM_CR2_OIS4_Msk (0x1UL << TIM_CR2_OIS4_Pos) /*!< 0x00004000 */
#define TIM_CR2_OIS4 TIM_CR2_OIS4_Msk /*!<Output Idle state 4 (OC4 output) */
#define TIM_CR2_OIS4N_Pos (15U)
#define TIM_CR2_OIS4N_Msk (0x1UL << TIM_CR2_OIS4N_Pos) /*!< 0x00008000 */
#define TIM_CR2_OIS4N TIM_CR2_OIS4N_Msk /*!<Output Idle state 4 (OC4N output) */
#define TIM_CR2_OIS5_Pos (16U)
#define TIM_CR2_OIS5_Msk (0x1UL << TIM_CR2_OIS5_Pos) /*!< 0x00010000 */
#define TIM_CR2_OIS5 TIM_CR2_OIS5_Msk /*!<Output Idle state 5 (OC5 output) */
#define TIM_CR2_OIS6_Pos (18U)
#define TIM_CR2_OIS6_Msk (0x1UL << TIM_CR2_OIS6_Pos) /*!< 0x00040000 */
#define TIM_CR2_OIS6 TIM_CR2_OIS6_Msk /*!<Output Idle state 6 (OC6 output) */
#define TIM_CR2_MMS2_Pos (20U)
#define TIM_CR2_MMS2_Msk (0xFUL << TIM_CR2_MMS2_Pos) /*!< 0x00F00000 */
#define TIM_CR2_MMS2 \
    TIM_CR2_MMS2_Msk /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS2_0 (0x1UL << TIM_CR2_MMS2_Pos) /*!< 0x00100000 */
#define TIM_CR2_MMS2_1 (0x2UL << TIM_CR2_MMS2_Pos) /*!< 0x00200000 */
#define TIM_CR2_MMS2_2 (0x4UL << TIM_CR2_MMS2_Pos) /*!< 0x00400000 */
#define TIM_CR2_MMS2_3 (0x8UL << TIM_CR2_MMS2_Pos) /*!< 0x00800000 */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define TIM_SMCR_SMS_Pos (0U)
#define TIM_SMCR_SMS_Msk (0x10007UL << TIM_SMCR_SMS_Pos) /*!< 0x00010007 */
#define TIM_SMCR_SMS \
    TIM_SMCR_SMS_Msk /*!<SMS[2:0] bits (Slave mode selection) */
#define TIM_SMCR_SMS_0 (0x00001UL << TIM_SMCR_SMS_Pos) /*!< 0x00000001 */
#define TIM_SMCR_SMS_1 (0x00002UL << TIM_SMCR_SMS_Pos) /*!< 0x00000002 */
#define TIM_SMCR_SMS_2 (0x00004UL << TIM_SMCR_SMS_Pos) /*!< 0x00000004 */
#define TIM_SMCR_SMS_3 (0x10000UL << TIM_SMCR_SMS_Pos) /*!< 0x00010000 */
#define TIM_SMCR_OCCS_Pos (3U)
#define TIM_SMCR_OCCS_Msk (0x1UL << TIM_SMCR_OCCS_Pos) /*!< 0x00000008 */
#define TIM_SMCR_OCCS TIM_SMCR_OCCS_Msk /*!< OCREF clear selection */
#define TIM_SMCR_TS_Pos (4U)
#define TIM_SMCR_TS_Msk (0x30007UL << TIM_SMCR_TS_Pos) /*!< 0x00300070 */
#define TIM_SMCR_TS TIM_SMCR_TS_Msk /*!<TS[2:0] bits (Trigger selection) */
#define TIM_SMCR_TS_0 (0x00001UL << TIM_SMCR_TS_Pos) /*!< 0x00000010 */
#define TIM_SMCR_TS_1 (0x00002UL << TIM_SMCR_TS_Pos) /*!< 0x00000020 */
#define TIM_SMCR_TS_2 (0x00004UL << TIM_SMCR_TS_Pos) /*!< 0x00000040 */
#define TIM_SMCR_TS_3 (0x10000UL << TIM_SMCR_TS_Pos) /*!< 0x00100000 */
#define TIM_SMCR_TS_4 (0x20000UL << TIM_SMCR_TS_Pos) /*!< 0x00200000 */
#define TIM_SMCR_MSM_Pos (7U)
#define TIM_SMCR_MSM_Msk (0x1UL << TIM_SMCR_MSM_Pos) /*!< 0x00000080 */
#define TIM_SMCR_MSM TIM_SMCR_MSM_Msk                /*!<Master/slave mode */
#define TIM_SMCR_ETF_Pos (8U)
#define TIM_SMCR_ETF_Msk (0xFUL << TIM_SMCR_ETF_Pos) /*!< 0x00000F00 */
#define TIM_SMCR_ETF \
    TIM_SMCR_ETF_Msk /*!<ETF[3:0] bits (External trigger filter) */
#define TIM_SMCR_ETF_0 (0x1UL << TIM_SMCR_ETF_Pos) /*!< 0x00000100 */
#define TIM_SMCR_ETF_1 (0x2UL << TIM_SMCR_ETF_Pos) /*!< 0x00000200 */
#define TIM_SMCR_ETF_2 (0x4UL << TIM_SMCR_ETF_Pos) /*!< 0x00000400 */
#define TIM_SMCR_ETF_3 (0x8UL << TIM_SMCR_ETF_Pos) /*!< 0x00000800 */
#define TIM_SMCR_ETPS_Pos (12U)
#define TIM_SMCR_ETPS_Msk (0x3UL << TIM_SMCR_ETPS_Pos) /*!< 0x00003000 */
#define TIM_SMCR_ETPS \
    TIM_SMCR_ETPS_Msk /*!<ETPS[1:0] bits (External trigger prescaler) */
#define TIM_SMCR_ETPS_0 (0x1UL << TIM_SMCR_ETPS_Pos) /*!< 0x00001000 */
#define TIM_SMCR_ETPS_1 (0x2UL << TIM_SMCR_ETPS_Pos) /*!< 0x00002000 */
#define TIM_SMCR_ECE_Pos (14U)
#define TIM_SMCR_ECE_Msk (0x1UL << TIM_SMCR_ECE_Pos) /*!< 0x00004000 */
#define TIM_SMCR_ECE TIM_SMCR_ECE_Msk /*!<External clock enable */
#define TIM_SMCR_ETP_Pos (15U)
#define TIM_SMCR_ETP_Msk (0x1UL << TIM_SMCR_ETP_Pos) /*!< 0x00008000 */
#define TIM_SMCR_ETP TIM_SMCR_ETP_Msk /*!<External trigger polarity */
#define TIM_SMCR_SMSPE_Pos (24U)
#define TIM_SMCR_SMSPE_Msk (0x1UL << TIM_SMCR_SMSPE_Pos) /*!< 0x02000000 */
#define TIM_SMCR_SMSPE TIM_SMCR_SMSPE_Msk /*!<SMS preload enable */
#define TIM_SMCR_SMSPS_Pos (25U)
#define TIM_SMCR_SMSPS_Msk (0x1UL << TIM_SMCR_SMSPS_Pos) /*!< 0x04000000 */
#define TIM_SMCR_SMSPS TIM_SMCR_SMSPS_Msk /*!<SMS preload source */

/*******************  Bit definition for TIM_DIER register  *******************/
#define TIM_DIER_UIE_Pos (0U)
#define TIM_DIER_UIE_Msk (0x1UL << TIM_DIER_UIE_Pos) /*!< 0x00000001 */
#define TIM_DIER_UIE TIM_DIER_UIE_Msk /*!<Update interrupt enable */
#define TIM_DIER_CC1IE_Pos (1U)
#define TIM_DIER_CC1IE_Msk (0x1UL << TIM_DIER_CC1IE_Pos) /*!< 0x00000002 */
#define TIM_DIER_CC1IE \
    TIM_DIER_CC1IE_Msk /*!<Capture/Compare 1 interrupt enable */
#define TIM_DIER_CC2IE_Pos (2U)
#define TIM_DIER_CC2IE_Msk (0x1UL << TIM_DIER_CC2IE_Pos) /*!< 0x00000004 */
#define TIM_DIER_CC2IE \
    TIM_DIER_CC2IE_Msk /*!<Capture/Compare 2 interrupt enable */
#define TIM_DIER_CC3IE_Pos (3U)
#define TIM_DIER_CC3IE_Msk (0x1UL << TIM_DIER_CC3IE_Pos) /*!< 0x00000008 */
#define TIM_DIER_CC3IE \
    TIM_DIER_CC3IE_Msk /*!<Capture/Compare 3 interrupt enable */
#define TIM_DIER_CC4IE_Pos (4U)
#define TIM_DIER_CC4IE_Msk (0x1UL << TIM_DIER_CC4IE_Pos) /*!< 0x00000010 */
#define TIM_DIER_CC4IE \
    TIM_DIER_CC4IE_Msk /*!<Capture/Compare 4 interrupt enable */
#define TIM_DIER_COMIE_Pos (5U)
#define TIM_DIER_COMIE_Msk (0x1UL << TIM_DIER_COMIE_Pos) /*!< 0x00000020 */
#define TIM_DIER_COMIE TIM_DIER_COMIE_Msk /*!<COM interrupt enable */
#define TIM_DIER_TIE_Pos (6U)
#define TIM_DIER_TIE_Msk (0x1UL << TIM_DIER_TIE_Pos) /*!< 0x00000040 */
#define TIM_DIER_TIE TIM_DIER_TIE_Msk /*!<Trigger interrupt enable */
#define TIM_DIER_BIE_Pos (7U)
#define TIM_DIER_BIE_Msk (0x1UL << TIM_DIER_BIE_Pos) /*!< 0x00000080 */
#define TIM_DIER_BIE TIM_DIER_BIE_Msk /*!<Break interrupt enable */
#define TIM_DIER_UDE_Pos (8U)
#define TIM_DIER_UDE_Msk (0x1UL << TIM_DIER_UDE_Pos) /*!< 0x00000100 */
#define TIM_DIER_UDE TIM_DIER_UDE_Msk /*!<Update DMA request enable */
#define TIM_DIER_CC1DE_Pos (9U)
#define TIM_DIER_CC1DE_Msk (0x1UL << TIM_DIER_CC1DE_Pos) /*!< 0x00000200 */
#define TIM_DIER_CC1DE \
    TIM_DIER_CC1DE_Msk /*!<Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC2DE_Pos (10U)
#define TIM_DIER_CC2DE_Msk (0x1UL << TIM_DIER_CC2DE_Pos) /*!< 0x00000400 */
#define TIM_DIER_CC2DE \
    TIM_DIER_CC2DE_Msk /*!<Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC3DE_Pos (11U)
#define TIM_DIER_CC3DE_Msk (0x1UL << TIM_DIER_CC3DE_Pos) /*!< 0x00000800 */
#define TIM_DIER_CC3DE \
    TIM_DIER_CC3DE_Msk /*!<Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC4DE_Pos (12U)
#define TIM_DIER_CC4DE_Msk (0x1UL << TIM_DIER_CC4DE_Pos) /*!< 0x00001000 */
#define TIM_DIER_CC4DE \
    TIM_DIER_CC4DE_Msk /*!<Capture/Compare 4 DMA request enable */
#define TIM_DIER_COMDE_Pos (13U)
#define TIM_DIER_COMDE_Msk (0x1UL << TIM_DIER_COMDE_Pos) /*!< 0x00002000 */
#define TIM_DIER_COMDE TIM_DIER_COMDE_Msk /*!<COM DMA request enable */
#define TIM_DIER_TDE_Pos (14U)
#define TIM_DIER_TDE_Msk (0x1UL << TIM_DIER_TDE_Pos) /*!< 0x00004000 */
#define TIM_DIER_TDE TIM_DIER_TDE_Msk /*!<Trigger DMA request enable */
#define TIM_DIER_IDXIE_Pos (20U)
#define TIM_DIER_IDXIE_Msk (0x1UL << TIM_DIER_IDXIE_Pos) /*!< 0x00100000 */
#define TIM_DIER_IDXIE TIM_DIER_IDXIE_Msk /*!<Encoder index interrupt enable */
#define TIM_DIER_DIRIE_Pos (21U)
#define TIM_DIER_DIRIE_Msk (0x1UL << TIM_DIER_DIRIE_Pos) /*!< 0x00200000 */
#define TIM_DIER_DIRIE \
    TIM_DIER_DIRIE_Msk /*!<Encoder direction change interrupt enable */
#define TIM_DIER_IERRIE_Pos (22U)
#define TIM_DIER_IERRIE_Msk (0x1UL << TIM_DIER_IERRIE_Pos) /*!< 0x00400000 */
#define TIM_DIER_IERRIE TIM_DIER_IERRIE_Msk /*!<Encoder index error enable */
#define TIM_DIER_TERRIE_Pos (23U)
#define TIM_DIER_TERRIE_Msk (0x1UL << TIM_DIER_TERRIE_Pos) /*!< 0x00800000 */
#define TIM_DIER_TERRIE \
    TIM_DIER_TERRIE_Msk /*!<Encoder transition error enable */

/********************  Bit definition for TIM_SR register  ********************/
#define TIM_SR_UIF_Pos (0U)
#define TIM_SR_UIF_Msk (0x1UL << TIM_SR_UIF_Pos) /*!< 0x00000001 */
#define TIM_SR_UIF TIM_SR_UIF_Msk                /*!<Update interrupt Flag */
#define TIM_SR_CC1IF_Pos (1U)
#define TIM_SR_CC1IF_Msk (0x1UL << TIM_SR_CC1IF_Pos) /*!< 0x00000002 */
#define TIM_SR_CC1IF TIM_SR_CC1IF_Msk /*!<Capture/Compare 1 interrupt Flag */
#define TIM_SR_CC2IF_Pos (2U)
#define TIM_SR_CC2IF_Msk (0x1UL << TIM_SR_CC2IF_Pos) /*!< 0x00000004 */
#define TIM_SR_CC2IF TIM_SR_CC2IF_Msk /*!<Capture/Compare 2 interrupt Flag */
#define TIM_SR_CC3IF_Pos (3U)
#define TIM_SR_CC3IF_Msk (0x1UL << TIM_SR_CC3IF_Pos) /*!< 0x00000008 */
#define TIM_SR_CC3IF TIM_SR_CC3IF_Msk /*!<Capture/Compare 3 interrupt Flag */
#define TIM_SR_CC4IF_Pos (4U)
#define TIM_SR_CC4IF_Msk (0x1UL << TIM_SR_CC4IF_Pos) /*!< 0x00000010 */
#define TIM_SR_CC4IF TIM_SR_CC4IF_Msk /*!<Capture/Compare 4 interrupt Flag */
#define TIM_SR_COMIF_Pos (5U)
#define TIM_SR_COMIF_Msk (0x1UL << TIM_SR_COMIF_Pos) /*!< 0x00000020 */
#define TIM_SR_COMIF TIM_SR_COMIF_Msk                /*!<COM interrupt Flag */
#define TIM_SR_TIF_Pos (6U)
#define TIM_SR_TIF_Msk (0x1UL << TIM_SR_TIF_Pos) /*!< 0x00000040 */
#define TIM_SR_TIF TIM_SR_TIF_Msk                /*!<Trigger interrupt Flag */
#define TIM_SR_BIF_Pos (7U)
#define TIM_SR_BIF_Msk (0x1UL << TIM_SR_BIF_Pos) /*!< 0x00000080 */
#define TIM_SR_BIF TIM_SR_BIF_Msk                /*!<Break interrupt Flag */
#define TIM_SR_B2IF_Pos (8U)
#define TIM_SR_B2IF_Msk (0x1UL << TIM_SR_B2IF_Pos) /*!< 0x00000100 */
#define TIM_SR_B2IF TIM_SR_B2IF_Msk                /*!<Break 2 interrupt Flag */
#define TIM_SR_CC1OF_Pos (9U)
#define TIM_SR_CC1OF_Msk (0x1UL << TIM_SR_CC1OF_Pos) /*!< 0x00000200 */
#define TIM_SR_CC1OF TIM_SR_CC1OF_Msk /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF_Pos (10U)
#define TIM_SR_CC2OF_Msk (0x1UL << TIM_SR_CC2OF_Pos) /*!< 0x00000400 */
#define TIM_SR_CC2OF TIM_SR_CC2OF_Msk /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF_Pos (11U)
#define TIM_SR_CC3OF_Msk (0x1UL << TIM_SR_CC3OF_Pos) /*!< 0x00000800 */
#define TIM_SR_CC3OF TIM_SR_CC3OF_Msk /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF_Pos (12U)
#define TIM_SR_CC4OF_Msk (0x1UL << TIM_SR_CC4OF_Pos) /*!< 0x00001000 */
#define TIM_SR_CC4OF TIM_SR_CC4OF_Msk /*!<Capture/Compare 4 Overcapture Flag */
#define TIM_SR_SBIF_Pos (13U)
#define TIM_SR_SBIF_Msk (0x1UL << TIM_SR_SBIF_Pos) /*!< 0x00002000 */
#define TIM_SR_SBIF TIM_SR_SBIF_Msk /*!<System Break interrupt Flag */
#define TIM_SR_CC5IF_Pos (16U)
#define TIM_SR_CC5IF_Msk (0x1UL << TIM_SR_CC5IF_Pos) /*!< 0x00010000 */
#define TIM_SR_CC5IF TIM_SR_CC5IF_Msk /*!<Capture/Compare 5 interrupt Flag */
#define TIM_SR_CC6IF_Pos (17U)
#define TIM_SR_CC6IF_Msk (0x1UL << TIM_SR_CC6IF_Pos) /*!< 0x00020000 */
#define TIM_SR_CC6IF TIM_SR_CC6IF_Msk /*!<Capture/Compare 6 interrupt Flag */
#define TIM_SR_IDXF_Pos (20U)
#define TIM_SR_IDXF_Msk (0x1UL << TIM_SR_IDXF_Pos) /*!< 0x00100000 */
#define TIM_SR_IDXF TIM_SR_IDXF_Msk /*!<Encoder index interrupt flag */
#define TIM_SR_DIRF_Pos (21U)
#define TIM_SR_DIRF_Msk (0x1UL << TIM_SR_DIRF_Pos) /*!< 0x00200000 */
#define TIM_SR_DIRF \
    TIM_SR_DIRF_Msk /*!<Encoder direction change interrupt flag */
#define TIM_SR_IERRF_Pos (22U)
#define TIM_SR_IERRF_Msk (0x1UL << TIM_SR_IERRF_Pos) /*!< 0x00400000 */
#define TIM_SR_IERRF TIM_SR_IERRF_Msk /*!<Encoder index error flag */
#define TIM_SR_TERRF_Pos (23U)
#define TIM_SR_TERRF_Msk (0x1UL << TIM_SR_TERRF_Pos) /*!< 0x00800000 */
#define TIM_SR_TERRF TIM_SR_TERRF_Msk /*!<Encoder transition error flag */

/*******************  Bit definition for TIM_EGR register  ********************/
#define TIM_EGR_UG_Pos (0U)
#define TIM_EGR_UG_Msk (0x1UL << TIM_EGR_UG_Pos) /*!< 0x00000001 */
#define TIM_EGR_UG TIM_EGR_UG_Msk                /*!<Update Generation */
#define TIM_EGR_CC1G_Pos (1U)
#define TIM_EGR_CC1G_Msk (0x1UL << TIM_EGR_CC1G_Pos) /*!< 0x00000002 */
#define TIM_EGR_CC1G TIM_EGR_CC1G_Msk /*!<Capture/Compare 1 Generation */
#define TIM_EGR_CC2G_Pos (2U)
#define TIM_EGR_CC2G_Msk (0x1UL << TIM_EGR_CC2G_Pos) /*!< 0x00000004 */
#define TIM_EGR_CC2G TIM_EGR_CC2G_Msk /*!<Capture/Compare 2 Generation */
#define TIM_EGR_CC3G_Pos (3U)
#define TIM_EGR_CC3G_Msk (0x1UL << TIM_EGR_CC3G_Pos) /*!< 0x00000008 */
#define TIM_EGR_CC3G TIM_EGR_CC3G_Msk /*!<Capture/Compare 3 Generation */
#define TIM_EGR_CC4G_Pos (4U)
#define TIM_EGR_CC4G_Msk (0x1UL << TIM_EGR_CC4G_Pos) /*!< 0x00000010 */
#define TIM_EGR_CC4G TIM_EGR_CC4G_Msk /*!<Capture/Compare 4 Generation */
#define TIM_EGR_COMG_Pos (5U)
#define TIM_EGR_COMG_Msk (0x1UL << TIM_EGR_COMG_Pos) /*!< 0x00000020 */
#define TIM_EGR_COMG \
    TIM_EGR_COMG_Msk /*!<Capture/Compare Control Update Generation */
#define TIM_EGR_TG_Pos (6U)
#define TIM_EGR_TG_Msk (0x1UL << TIM_EGR_TG_Pos) /*!< 0x00000040 */
#define TIM_EGR_TG TIM_EGR_TG_Msk                /*!<Trigger Generation */
#define TIM_EGR_BG_Pos (7U)
#define TIM_EGR_BG_Msk (0x1UL << TIM_EGR_BG_Pos) /*!< 0x00000080 */
#define TIM_EGR_BG TIM_EGR_BG_Msk                /*!<Break Generation */
#define TIM_EGR_B2G_Pos (8U)
#define TIM_EGR_B2G_Msk (0x1UL << TIM_EGR_B2G_Pos) /*!< 0x00000100 */
#define TIM_EGR_B2G TIM_EGR_B2G_Msk                /*!<Break 2 Generation */

/******************  Bit definition for TIM_CCMR1 register  *******************/
#define TIM_CCMR1_CC1S_Pos (0U)
#define TIM_CCMR1_CC1S_Msk (0x3UL << TIM_CCMR1_CC1S_Pos) /*!< 0x00000003 */
#define TIM_CCMR1_CC1S \
    TIM_CCMR1_CC1S_Msk /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define TIM_CCMR1_CC1S_0 (0x1UL << TIM_CCMR1_CC1S_Pos) /*!< 0x00000001 */
#define TIM_CCMR1_CC1S_1 (0x2UL << TIM_CCMR1_CC1S_Pos) /*!< 0x00000002 */
#define TIM_CCMR1_OC1FE_Pos (2U)
#define TIM_CCMR1_OC1FE_Msk (0x1UL << TIM_CCMR1_OC1FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR1_OC1FE TIM_CCMR1_OC1FE_Msk /*!<Output Compare 1 Fast enable */
#define TIM_CCMR1_OC1PE_Pos (3U)
#define TIM_CCMR1_OC1PE_Msk (0x1UL << TIM_CCMR1_OC1PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR1_OC1PE \
    TIM_CCMR1_OC1PE_Msk /*!<Output Compare 1 Preload enable */
#define TIM_CCMR1_OC1M_Pos (4U)
#define TIM_CCMR1_OC1M_Msk (0x1007UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00010070 */
#define TIM_CCMR1_OC1M \
    TIM_CCMR1_OC1M_Msk /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
#define TIM_CCMR1_OC1M_0 (0x0001UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00000010 */
#define TIM_CCMR1_OC1M_1 (0x0002UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00000020 */
#define TIM_CCMR1_OC1M_2 (0x0004UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00000040 */
#define TIM_CCMR1_OC1M_3 (0x1000UL << TIM_CCMR1_OC1M_Pos) /*!< 0x00010000 */
#define TIM_CCMR1_OC1CE_Pos (7U)
#define TIM_CCMR1_OC1CE_Msk (0x1UL << TIM_CCMR1_OC1CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR1_OC1CE TIM_CCMR1_OC1CE_Msk /*!<Output Compare 1 Clear Enable */
#define TIM_CCMR1_CC2S_Pos (8U)
#define TIM_CCMR1_CC2S_Msk (0x3UL << TIM_CCMR1_CC2S_Pos) /*!< 0x00000300 */
#define TIM_CCMR1_CC2S \
    TIM_CCMR1_CC2S_Msk /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define TIM_CCMR1_CC2S_0 (0x1UL << TIM_CCMR1_CC2S_Pos) /*!< 0x00000100 */
#define TIM_CCMR1_CC2S_1 (0x2UL << TIM_CCMR1_CC2S_Pos) /*!< 0x00000200 */
#define TIM_CCMR1_OC2FE_Pos (10U)
#define TIM_CCMR1_OC2FE_Msk (0x1UL << TIM_CCMR1_OC2FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR1_OC2FE TIM_CCMR1_OC2FE_Msk /*!<Output Compare 2 Fast enable */
#define TIM_CCMR1_OC2PE_Pos (11U)
#define TIM_CCMR1_OC2PE_Msk (0x1UL << TIM_CCMR1_OC2PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR1_OC2PE \
    TIM_CCMR1_OC2PE_Msk /*!<Output Compare 2 Preload enable */
#define TIM_CCMR1_OC2M_Pos (12U)
#define TIM_CCMR1_OC2M_Msk (0x1007UL << TIM_CCMR1_OC2M_Pos) /*!< 0x01007000 */
#define TIM_CCMR1_OC2M \
    TIM_CCMR1_OC2M_Msk /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
#define TIM_CCMR1_OC2M_0 (0x0001UL << TIM_CCMR1_OC2M_Pos) /*!< 0x00001000 */
#define TIM_CCMR1_OC2M_1 (0x0002UL << TIM_CCMR1_OC2M_Pos) /*!< 0x00002000 */
#define TIM_CCMR1_OC2M_2 (0x0004UL << TIM_CCMR1_OC2M_Pos) /*!< 0x00004000 */
#define TIM_CCMR1_OC2M_3 (0x1000UL << TIM_CCMR1_OC2M_Pos) /*!< 0x01000000 */
#define TIM_CCMR1_OC2CE_Pos (15U)
#define TIM_CCMR1_OC2CE_Msk (0x1UL << TIM_CCMR1_OC2CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR1_OC2CE TIM_CCMR1_OC2CE_Msk /*!<Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/
#define TIM_CCMR1_IC1PSC_Pos (2U)
#define TIM_CCMR1_IC1PSC_Msk (0x3UL << TIM_CCMR1_IC1PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR1_IC1PSC \
    TIM_CCMR1_IC1PSC_Msk /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define TIM_CCMR1_IC1PSC_0 (0x1UL << TIM_CCMR1_IC1PSC_Pos) /*!< 0x00000004 */
#define TIM_CCMR1_IC1PSC_1 (0x2UL << TIM_CCMR1_IC1PSC_Pos) /*!< 0x00000008 */
#define TIM_CCMR1_IC1F_Pos (4U)
#define TIM_CCMR1_IC1F_Msk (0xFUL << TIM_CCMR1_IC1F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR1_IC1F \
    TIM_CCMR1_IC1F_Msk /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
#define TIM_CCMR1_IC1F_0 (0x1UL << TIM_CCMR1_IC1F_Pos) /*!< 0x00000010 */
#define TIM_CCMR1_IC1F_1 (0x2UL << TIM_CCMR1_IC1F_Pos) /*!< 0x00000020 */
#define TIM_CCMR1_IC1F_2 (0x4UL << TIM_CCMR1_IC1F_Pos) /*!< 0x00000040 */
#define TIM_CCMR1_IC1F_3 (0x8UL << TIM_CCMR1_IC1F_Pos) /*!< 0x00000080 */
#define TIM_CCMR1_IC2PSC_Pos (10U)
#define TIM_CCMR1_IC2PSC_Msk (0x3UL << TIM_CCMR1_IC2PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR1_IC2PSC \
    TIM_CCMR1_IC2PSC_Msk /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define TIM_CCMR1_IC2PSC_0 (0x1UL << TIM_CCMR1_IC2PSC_Pos) /*!< 0x00000400 */
#define TIM_CCMR1_IC2PSC_1 (0x2UL << TIM_CCMR1_IC2PSC_Pos) /*!< 0x00000800 */
#define TIM_CCMR1_IC2F_Pos (12U)
#define TIM_CCMR1_IC2F_Msk (0xFUL << TIM_CCMR1_IC2F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR1_IC2F \
    TIM_CCMR1_IC2F_Msk /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
#define TIM_CCMR1_IC2F_0 (0x1UL << TIM_CCMR1_IC2F_Pos) /*!< 0x00001000 */
#define TIM_CCMR1_IC2F_1 (0x2UL << TIM_CCMR1_IC2F_Pos) /*!< 0x00002000 */
#define TIM_CCMR1_IC2F_2 (0x4UL << TIM_CCMR1_IC2F_Pos) /*!< 0x00004000 */
#define TIM_CCMR1_IC2F_3 (0x8UL << TIM_CCMR1_IC2F_Pos) /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define TIM_CCMR2_CC3S_Pos (0U)
#define TIM_CCMR2_CC3S_Msk (0x3UL << TIM_CCMR2_CC3S_Pos) /*!< 0x00000003 */
#define TIM_CCMR2_CC3S \
    TIM_CCMR2_CC3S_Msk /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define TIM_CCMR2_CC3S_0 (0x1UL << TIM_CCMR2_CC3S_Pos) /*!< 0x00000001 */
#define TIM_CCMR2_CC3S_1 (0x2UL << TIM_CCMR2_CC3S_Pos) /*!< 0x00000002 */
#define TIM_CCMR2_OC3FE_Pos (2U)
#define TIM_CCMR2_OC3FE_Msk (0x1UL << TIM_CCMR2_OC3FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR2_OC3FE TIM_CCMR2_OC3FE_Msk /*!<Output Compare 3 Fast enable */
#define TIM_CCMR2_OC3PE_Pos (3U)
#define TIM_CCMR2_OC3PE_Msk (0x1UL << TIM_CCMR2_OC3PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR2_OC3PE \
    TIM_CCMR2_OC3PE_Msk /*!<Output Compare 3 Preload enable */
#define TIM_CCMR2_OC3M_Pos (4U)
#define TIM_CCMR2_OC3M_Msk (0x1007UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00010070 */
#define TIM_CCMR2_OC3M \
    TIM_CCMR2_OC3M_Msk /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define TIM_CCMR2_OC3M_0 (0x0001UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00000010 */
#define TIM_CCMR2_OC3M_1 (0x0002UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00000020 */
#define TIM_CCMR2_OC3M_2 (0x0004UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00000040 */
#define TIM_CCMR2_OC3M_3 (0x1000UL << TIM_CCMR2_OC3M_Pos) /*!< 0x00010000 */
#define TIM_CCMR2_OC3CE_Pos (7U)
#define TIM_CCMR2_OC3CE_Msk (0x1UL << TIM_CCMR2_OC3CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR2_OC3CE TIM_CCMR2_OC3CE_Msk /*!<Output Compare 3 Clear Enable */
#define TIM_CCMR2_CC4S_Pos (8U)
#define TIM_CCMR2_CC4S_Msk (0x3UL << TIM_CCMR2_CC4S_Pos) /*!< 0x00000300 */
#define TIM_CCMR2_CC4S \
    TIM_CCMR2_CC4S_Msk /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define TIM_CCMR2_CC4S_0 (0x1UL << TIM_CCMR2_CC4S_Pos) /*!< 0x00000100 */
#define TIM_CCMR2_CC4S_1 (0x2UL << TIM_CCMR2_CC4S_Pos) /*!< 0x00000200 */
#define TIM_CCMR2_OC4FE_Pos (10U)
#define TIM_CCMR2_OC4FE_Msk (0x1UL << TIM_CCMR2_OC4FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR2_OC4FE TIM_CCMR2_OC4FE_Msk /*!<Output Compare 4 Fast enable */
#define TIM_CCMR2_OC4PE_Pos (11U)
#define TIM_CCMR2_OC4PE_Msk (0x1UL << TIM_CCMR2_OC4PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR2_OC4PE \
    TIM_CCMR2_OC4PE_Msk /*!<Output Compare 4 Preload enable */
#define TIM_CCMR2_OC4M_Pos (12U)
#define TIM_CCMR2_OC4M_Msk (0x1007UL << TIM_CCMR2_OC4M_Pos) /*!< 0x01007000 */
#define TIM_CCMR2_OC4M \
    TIM_CCMR2_OC4M_Msk /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define TIM_CCMR2_OC4M_0 (0x0001UL << TIM_CCMR2_OC4M_Pos) /*!< 0x00001000 */
#define TIM_CCMR2_OC4M_1 (0x0002UL << TIM_CCMR2_OC4M_Pos) /*!< 0x00002000 */
#define TIM_CCMR2_OC4M_2 (0x0004UL << TIM_CCMR2_OC4M_Pos) /*!< 0x00004000 */
#define TIM_CCMR2_OC4M_3 (0x1000UL << TIM_CCMR2_OC4M_Pos) /*!< 0x01000000 */
#define TIM_CCMR2_OC4CE_Pos (15U)
#define TIM_CCMR2_OC4CE_Msk (0x1UL << TIM_CCMR2_OC4CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR2_OC4CE TIM_CCMR2_OC4CE_Msk /*!<Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/
#define TIM_CCMR2_IC3PSC_Pos (2U)
#define TIM_CCMR2_IC3PSC_Msk (0x3UL << TIM_CCMR2_IC3PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR2_IC3PSC \
    TIM_CCMR2_IC3PSC_Msk /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define TIM_CCMR2_IC3PSC_0 (0x1UL << TIM_CCMR2_IC3PSC_Pos) /*!< 0x00000004 */
#define TIM_CCMR2_IC3PSC_1 (0x2UL << TIM_CCMR2_IC3PSC_Pos) /*!< 0x00000008 */
#define TIM_CCMR2_IC3F_Pos (4U)
#define TIM_CCMR2_IC3F_Msk (0xFUL << TIM_CCMR2_IC3F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR2_IC3F \
    TIM_CCMR2_IC3F_Msk /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define TIM_CCMR2_IC3F_0 (0x1UL << TIM_CCMR2_IC3F_Pos) /*!< 0x00000010 */
#define TIM_CCMR2_IC3F_1 (0x2UL << TIM_CCMR2_IC3F_Pos) /*!< 0x00000020 */
#define TIM_CCMR2_IC3F_2 (0x4UL << TIM_CCMR2_IC3F_Pos) /*!< 0x00000040 */
#define TIM_CCMR2_IC3F_3 (0x8UL << TIM_CCMR2_IC3F_Pos) /*!< 0x00000080 */
#define TIM_CCMR2_IC4PSC_Pos (10U)
#define TIM_CCMR2_IC4PSC_Msk (0x3UL << TIM_CCMR2_IC4PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR2_IC4PSC \
    TIM_CCMR2_IC4PSC_Msk /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define TIM_CCMR2_IC4PSC_0 (0x1UL << TIM_CCMR2_IC4PSC_Pos) /*!< 0x00000400 */
#define TIM_CCMR2_IC4PSC_1 (0x2UL << TIM_CCMR2_IC4PSC_Pos) /*!< 0x00000800 */
#define TIM_CCMR2_IC4F_Pos (12U)
#define TIM_CCMR2_IC4F_Msk (0xFUL << TIM_CCMR2_IC4F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR2_IC4F \
    TIM_CCMR2_IC4F_Msk /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define TIM_CCMR2_IC4F_0 (0x1UL << TIM_CCMR2_IC4F_Pos) /*!< 0x00001000 */
#define TIM_CCMR2_IC4F_1 (0x2UL << TIM_CCMR2_IC4F_Pos) /*!< 0x00002000 */
#define TIM_CCMR2_IC4F_2 (0x4UL << TIM_CCMR2_IC4F_Pos) /*!< 0x00004000 */
#define TIM_CCMR2_IC4F_3 (0x8UL << TIM_CCMR2_IC4F_Pos) /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR3 register  *******************/
#define TIM_CCMR3_OC5FE_Pos (2U)
#define TIM_CCMR3_OC5FE_Msk (0x1UL << TIM_CCMR3_OC5FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR3_OC5FE TIM_CCMR3_OC5FE_Msk /*!<Output Compare 5 Fast enable */
#define TIM_CCMR3_OC5PE_Pos (3U)
#define TIM_CCMR3_OC5PE_Msk (0x1UL << TIM_CCMR3_OC5PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR3_OC5PE \
    TIM_CCMR3_OC5PE_Msk /*!<Output Compare 5 Preload enable */
#define TIM_CCMR3_OC5M_Pos (4U)
#define TIM_CCMR3_OC5M_Msk (0x1007UL << TIM_CCMR3_OC5M_Pos) /*!< 0x00010070 */
#define TIM_CCMR3_OC5M \
    TIM_CCMR3_OC5M_Msk /*!<OC5M[3:0] bits (Output Compare 5 Mode) */
#define TIM_CCMR3_OC5M_0 (0x0001UL << TIM_CCMR3_OC5M_Pos) /*!< 0x00000010 */
#define TIM_CCMR3_OC5M_1 (0x0002UL << TIM_CCMR3_OC5M_Pos) /*!< 0x00000020 */
#define TIM_CCMR3_OC5M_2 (0x0004UL << TIM_CCMR3_OC5M_Pos) /*!< 0x00000040 */
#define TIM_CCMR3_OC5M_3 (0x1000UL << TIM_CCMR3_OC5M_Pos) /*!< 0x00010000 */
#define TIM_CCMR3_OC5CE_Pos (7U)
#define TIM_CCMR3_OC5CE_Msk (0x1UL << TIM_CCMR3_OC5CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR3_OC5CE TIM_CCMR3_OC5CE_Msk /*!<Output Compare 5 Clear Enable */
#define TIM_CCMR3_OC6FE_Pos (10U)
#define TIM_CCMR3_OC6FE_Msk (0x1UL << TIM_CCMR3_OC6FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR3_OC6FE TIM_CCMR3_OC6FE_Msk /*!<Output Compare 6 Fast enable */
#define TIM_CCMR3_OC6PE_Pos (11U)
#define TIM_CCMR3_OC6PE_Msk (0x1UL << TIM_CCMR3_OC6PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR3_OC6PE \
    TIM_CCMR3_OC6PE_Msk /*!<Output Compare 6 Preload enable */
#define TIM_CCMR3_OC6M_Pos (12U)
#define TIM_CCMR3_OC6M_Msk (0x1007UL << TIM_CCMR3_OC6M_Pos) /*!< 0x01007000 */
#define TIM_CCMR3_OC6M \
    TIM_CCMR3_OC6M_Msk /*!<OC6M[3:0] bits (Output Compare 6 Mode) */
#define TIM_CCMR3_OC6M_0 (0x0001UL << TIM_CCMR3_OC6M_Pos) /*!< 0x00001000 */
#define TIM_CCMR3_OC6M_1 (0x0002UL << TIM_CCMR3_OC6M_Pos) /*!< 0x00002000 */
#define TIM_CCMR3_OC6M_2 (0x0004UL << TIM_CCMR3_OC6M_Pos) /*!< 0x00004000 */
#define TIM_CCMR3_OC6M_3 (0x1000UL << TIM_CCMR3_OC6M_Pos) /*!< 0x01000000 */
#define TIM_CCMR3_OC6CE_Pos (15U)
#define TIM_CCMR3_OC6CE_Msk (0x1UL << TIM_CCMR3_OC6CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR3_OC6CE TIM_CCMR3_OC6CE_Msk /*!<Output Compare 6 Clear Enable */

/*******************  Bit definition for TIM_CCER register  *******************/
#define TIM_CCER_CC1E_Pos (0U)
#define TIM_CCER_CC1E_Msk (0x1UL << TIM_CCER_CC1E_Pos) /*!< 0x00000001 */
#define TIM_CCER_CC1E TIM_CCER_CC1E_Msk /*!<Capture/Compare 1 output enable */
#define TIM_CCER_CC1P_Pos (1U)
#define TIM_CCER_CC1P_Msk (0x1UL << TIM_CCER_CC1P_Pos) /*!< 0x00000002 */
#define TIM_CCER_CC1P TIM_CCER_CC1P_Msk /*!<Capture/Compare 1 output Polarity */
#define TIM_CCER_CC1NE_Pos (2U)
#define TIM_CCER_CC1NE_Msk (0x1UL << TIM_CCER_CC1NE_Pos) /*!< 0x00000004 */
#define TIM_CCER_CC1NE \
    TIM_CCER_CC1NE_Msk /*!<Capture/Compare 1 Complementary output enable */
#define TIM_CCER_CC1NP_Pos (3U)
#define TIM_CCER_CC1NP_Msk (0x1UL << TIM_CCER_CC1NP_Pos) /*!< 0x00000008 */
#define TIM_CCER_CC1NP \
    TIM_CCER_CC1NP_Msk /*!<Capture/Compare 1 Complementary output Polarity */
#define TIM_CCER_CC2E_Pos (4U)
#define TIM_CCER_CC2E_Msk (0x1UL << TIM_CCER_CC2E_Pos) /*!< 0x00000010 */
#define TIM_CCER_CC2E TIM_CCER_CC2E_Msk /*!<Capture/Compare 2 output enable */
#define TIM_CCER_CC2P_Pos (5U)
#define TIM_CCER_CC2P_Msk (0x1UL << TIM_CCER_CC2P_Pos) /*!< 0x00000020 */
#define TIM_CCER_CC2P TIM_CCER_CC2P_Msk /*!<Capture/Compare 2 output Polarity */
#define TIM_CCER_CC2NE_Pos (6U)
#define TIM_CCER_CC2NE_Msk (0x1UL << TIM_CCER_CC2NE_Pos) /*!< 0x00000040 */
#define TIM_CCER_CC2NE \
    TIM_CCER_CC2NE_Msk /*!<Capture/Compare 2 Complementary output enable */
#define TIM_CCER_CC2NP_Pos (7U)
#define TIM_CCER_CC2NP_Msk (0x1UL << TIM_CCER_CC2NP_Pos) /*!< 0x00000080 */
#define TIM_CCER_CC2NP \
    TIM_CCER_CC2NP_Msk /*!<Capture/Compare 2 Complementary output Polarity */
#define TIM_CCER_CC3E_Pos (8U)
#define TIM_CCER_CC3E_Msk (0x1UL << TIM_CCER_CC3E_Pos) /*!< 0x00000100 */
#define TIM_CCER_CC3E TIM_CCER_CC3E_Msk /*!<Capture/Compare 3 output enable */
#define TIM_CCER_CC3P_Pos (9U)
#define TIM_CCER_CC3P_Msk (0x1UL << TIM_CCER_CC3P_Pos) /*!< 0x00000200 */
#define TIM_CCER_CC3P TIM_CCER_CC3P_Msk /*!<Capture/Compare 3 output Polarity */
#define TIM_CCER_CC3NE_Pos (10U)
#define TIM_CCER_CC3NE_Msk (0x1UL << TIM_CCER_CC3NE_Pos) /*!< 0x00000400 */
#define TIM_CCER_CC3NE \
    TIM_CCER_CC3NE_Msk /*!<Capture/Compare 3 Complementary output enable */
#define TIM_CCER_CC3NP_Pos (11U)
#define TIM_CCER_CC3NP_Msk (0x1UL << TIM_CCER_CC3NP_Pos) /*!< 0x00000800 */
#define TIM_CCER_CC3NP \
    TIM_CCER_CC3NP_Msk /*!<Capture/Compare 3 Complementary output Polarity */
#define TIM_CCER_CC4E_Pos (12U)
#define TIM_CCER_CC4E_Msk (0x1UL << TIM_CCER_CC4E_Pos) /*!< 0x00001000 */
#define TIM_CCER_CC4E TIM_CCER_CC4E_Msk /*!<Capture/Compare 4 output enable */
#define TIM_CCER_CC4P_Pos (13U)
#define TIM_CCER_CC4P_Msk (0x1UL << TIM_CCER_CC4P_Pos) /*!< 0x00002000 */
#define TIM_CCER_CC4P TIM_CCER_CC4P_Msk /*!<Capture/Compare 4 output Polarity */
#define TIM_CCER_CC4NE_Pos (14U)
#define TIM_CCER_CC4NE_Msk (0x1UL << TIM_CCER_CC4NE_Pos) /*!< 0x00004000 */
#define TIM_CCER_CC4NE \
    TIM_CCER_CC4NE_Msk /*!<Capture/Compare 4 Complementary output enable */
#define TIM_CCER_CC4NP_Pos (15U)
#define TIM_CCER_CC4NP_Msk (0x1UL << TIM_CCER_CC4NP_Pos) /*!< 0x00008000 */
#define TIM_CCER_CC4NP \
    TIM_CCER_CC4NP_Msk /*!<Capture/Compare 4 Complementary output Polarity */
#define TIM_CCER_CC5E_Pos (16U)
#define TIM_CCER_CC5E_Msk (0x1UL << TIM_CCER_CC5E_Pos) /*!< 0x00010000 */
#define TIM_CCER_CC5E TIM_CCER_CC5E_Msk /*!<Capture/Compare 5 output enable */
#define TIM_CCER_CC5P_Pos (17U)
#define TIM_CCER_CC5P_Msk (0x1UL << TIM_CCER_CC5P_Pos) /*!< 0x00020000 */
#define TIM_CCER_CC5P TIM_CCER_CC5P_Msk /*!<Capture/Compare 5 output Polarity */
#define TIM_CCER_CC6E_Pos (20U)
#define TIM_CCER_CC6E_Msk (0x1UL << TIM_CCER_CC6E_Pos) /*!< 0x00100000 */
#define TIM_CCER_CC6E TIM_CCER_CC6E_Msk /*!<Capture/Compare 6 output enable */
#define TIM_CCER_CC6P_Pos (21U)
#define TIM_CCER_CC6P_Msk (0x1UL << TIM_CCER_CC6P_Pos) /*!< 0x00200000 */
#define TIM_CCER_CC6P TIM_CCER_CC6P_Msk /*!<Capture/Compare 6 output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define TIM_CNT_CNT_Pos (0U)
#define TIM_CNT_CNT_Msk (0xFFFFFFFFUL << TIM_CNT_CNT_Pos) /*!< 0xFFFFFFFF */
#define TIM_CNT_CNT TIM_CNT_CNT_Msk                       /*!<Counter Value */
#define TIM_CNT_UIFCPY_Pos (31U)
#define TIM_CNT_UIFCPY_Msk (0x1UL << TIM_CNT_UIFCPY_Pos) /*!< 0x80000000 */
#define TIM_CNT_UIFCPY \
    TIM_CNT_UIFCPY_Msk /*!<Update interrupt flag copy (if UIFREMAP=1) */

/*******************  Bit definition for TIM_PSC register  ********************/
#define TIM_PSC_PSC_Pos (0U)
#define TIM_PSC_PSC_Msk (0xFFFFUL << TIM_PSC_PSC_Pos) /*!< 0x0000FFFF */
#define TIM_PSC_PSC TIM_PSC_PSC_Msk                   /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  ********************/
#define TIM_ARR_ARR_Pos (0U)
#define TIM_ARR_ARR_Msk (0xFFFFFFFFUL << TIM_ARR_ARR_Pos) /*!< 0xFFFFFFFF */
#define TIM_ARR_ARR TIM_ARR_ARR_Msk /*!<Actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define TIM_RCR_REP_Pos (0U)
#define TIM_RCR_REP_Msk (0xFFFFUL << TIM_RCR_REP_Pos) /*!< 0x0000FFFF */
#define TIM_RCR_REP TIM_RCR_REP_Msk /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define TIM_CCR1_CCR1_Pos (0U)
#define TIM_CCR1_CCR1_Msk (0xFFFFUL << TIM_CCR1_CCR1_Pos) /*!< 0x0000FFFF */
#define TIM_CCR1_CCR1 TIM_CCR1_CCR1_Msk /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define TIM_CCR2_CCR2_Pos (0U)
#define TIM_CCR2_CCR2_Msk (0xFFFFUL << TIM_CCR2_CCR2_Pos) /*!< 0x0000FFFF */
#define TIM_CCR2_CCR2 TIM_CCR2_CCR2_Msk /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define TIM_CCR3_CCR3_Pos (0U)
#define TIM_CCR3_CCR3_Msk (0xFFFFUL << TIM_CCR3_CCR3_Pos) /*!< 0x0000FFFF */
#define TIM_CCR3_CCR3 TIM_CCR3_CCR3_Msk /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define TIM_CCR4_CCR4_Pos (0U)
#define TIM_CCR4_CCR4_Msk (0xFFFFUL << TIM_CCR4_CCR4_Pos) /*!< 0x0000FFFF */
#define TIM_CCR4_CCR4 TIM_CCR4_CCR4_Msk /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_CCR5 register  *******************/
#define TIM_CCR5_CCR5_Pos (0U)
#define TIM_CCR5_CCR5_Msk (0xFFFFFFFFUL << TIM_CCR5_CCR5_Pos) /*!< 0xFFFFFFFF */
#define TIM_CCR5_CCR5 TIM_CCR5_CCR5_Msk /*!<Capture/Compare 5 Value */
#define TIM_CCR5_GC5C1_Pos (29U)
#define TIM_CCR5_GC5C1_Msk (0x1UL << TIM_CCR5_GC5C1_Pos) /*!< 0x20000000 */
#define TIM_CCR5_GC5C1 TIM_CCR5_GC5C1_Msk /*!<Group Channel 5 and Channel 1 */
#define TIM_CCR5_GC5C2_Pos (30U)
#define TIM_CCR5_GC5C2_Msk (0x1UL << TIM_CCR5_GC5C2_Pos) /*!< 0x40000000 */
#define TIM_CCR5_GC5C2 TIM_CCR5_GC5C2_Msk /*!<Group Channel 5 and Channel 2 */
#define TIM_CCR5_GC5C3_Pos (31U)
#define TIM_CCR5_GC5C3_Msk (0x1UL << TIM_CCR5_GC5C3_Pos) /*!< 0x80000000 */
#define TIM_CCR5_GC5C3 TIM_CCR5_GC5C3_Msk /*!<Group Channel 5 and Channel 3 */

/*******************  Bit definition for TIM_CCR6 register  *******************/
#define TIM_CCR6_CCR6_Pos (0U)
#define TIM_CCR6_CCR6_Msk (0xFFFFUL << TIM_CCR6_CCR6_Pos) /*!< 0x0000FFFF */
#define TIM_CCR6_CCR6 TIM_CCR6_CCR6_Msk /*!<Capture/Compare 6 Value */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define TIM_BDTR_DTG_Pos (0U)
#define TIM_BDTR_DTG_Msk (0xFFUL << TIM_BDTR_DTG_Pos) /*!< 0x000000FF */
#define TIM_BDTR_DTG \
    TIM_BDTR_DTG_Msk /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define TIM_BDTR_DTG_0 (0x01UL << TIM_BDTR_DTG_Pos) /*!< 0x00000001 */
#define TIM_BDTR_DTG_1 (0x02UL << TIM_BDTR_DTG_Pos) /*!< 0x00000002 */
#define TIM_BDTR_DTG_2 (0x04UL << TIM_BDTR_DTG_Pos) /*!< 0x00000004 */
#define TIM_BDTR_DTG_3 (0x08UL << TIM_BDTR_DTG_Pos) /*!< 0x00000008 */
#define TIM_BDTR_DTG_4 (0x10UL << TIM_BDTR_DTG_Pos) /*!< 0x00000010 */
#define TIM_BDTR_DTG_5 (0x20UL << TIM_BDTR_DTG_Pos) /*!< 0x00000020 */
#define TIM_BDTR_DTG_6 (0x40UL << TIM_BDTR_DTG_Pos) /*!< 0x00000040 */
#define TIM_BDTR_DTG_7 (0x80UL << TIM_BDTR_DTG_Pos) /*!< 0x00000080 */
#define TIM_BDTR_LOCK_Pos (8U)
#define TIM_BDTR_LOCK_Msk (0x3UL << TIM_BDTR_LOCK_Pos) /*!< 0x00000300 */
#define TIM_BDTR_LOCK \
    TIM_BDTR_LOCK_Msk /*!<LOCK[1:0] bits (Lock Configuration) */
#define TIM_BDTR_LOCK_0 (0x1UL << TIM_BDTR_LOCK_Pos) /*!< 0x00000100 */
#define TIM_BDTR_LOCK_1 (0x2UL << TIM_BDTR_LOCK_Pos) /*!< 0x00000200 */
#define TIM_BDTR_OSSI_Pos (10U)
#define TIM_BDTR_OSSI_Msk (0x1UL << TIM_BDTR_OSSI_Pos) /*!< 0x00000400 */
#define TIM_BDTR_OSSI TIM_BDTR_OSSI_Msk /*!<Off-State Selection for Idle mode */
#define TIM_BDTR_OSSR_Pos (11U)
#define TIM_BDTR_OSSR_Msk (0x1UL << TIM_BDTR_OSSR_Pos) /*!< 0x00000800 */
#define TIM_BDTR_OSSR TIM_BDTR_OSSR_Msk /*!<Off-State Selection for Run mode */
#define TIM_BDTR_BKE_Pos (12U)
#define TIM_BDTR_BKE_Msk (0x1UL << TIM_BDTR_BKE_Pos) /*!< 0x00001000 */
#define TIM_BDTR_BKE TIM_BDTR_BKE_Msk /*!<Break enable for Break 1 */
#define TIM_BDTR_BKP_Pos (13U)
#define TIM_BDTR_BKP_Msk (0x1UL << TIM_BDTR_BKP_Pos) /*!< 0x00002000 */
#define TIM_BDTR_BKP TIM_BDTR_BKP_Msk /*!<Break Polarity for Break 1 */
#define TIM_BDTR_AOE_Pos (14U)
#define TIM_BDTR_AOE_Msk (0x1UL << TIM_BDTR_AOE_Pos) /*!< 0x00004000 */
#define TIM_BDTR_AOE TIM_BDTR_AOE_Msk /*!<Automatic Output enable */
#define TIM_BDTR_MOE_Pos (15U)
#define TIM_BDTR_MOE_Msk (0x1UL << TIM_BDTR_MOE_Pos) /*!< 0x00008000 */
#define TIM_BDTR_MOE TIM_BDTR_MOE_Msk                /*!<Main Output enable */
#define TIM_BDTR_BKF_Pos (16U)
#define TIM_BDTR_BKF_Msk (0xFUL << TIM_BDTR_BKF_Pos) /*!< 0x000F0000 */
#define TIM_BDTR_BKF TIM_BDTR_BKF_Msk /*!<Break Filter for Break 1 */
#define TIM_BDTR_BK2F_Pos (20U)
#define TIM_BDTR_BK2F_Msk (0xFUL << TIM_BDTR_BK2F_Pos) /*!< 0x00F00000 */
#define TIM_BDTR_BK2F TIM_BDTR_BK2F_Msk /*!<Break Filter for Break 2 */
#define TIM_BDTR_BK2E_Pos (24U)
#define TIM_BDTR_BK2E_Msk (0x1UL << TIM_BDTR_BK2E_Pos) /*!< 0x01000000 */
#define TIM_BDTR_BK2E TIM_BDTR_BK2E_Msk /*!<Break enable for Break 2 */
#define TIM_BDTR_BK2P_Pos (25U)
#define TIM_BDTR_BK2P_Msk (0x1UL << TIM_BDTR_BK2P_Pos) /*!< 0x02000000 */
#define TIM_BDTR_BK2P TIM_BDTR_BK2P_Msk /*!<Break Polarity for Break 2 */
#define TIM_BDTR_BKDSRM_Pos (26U)
#define TIM_BDTR_BKDSRM_Msk (0x1UL << TIM_BDTR_BKDSRM_Pos) /*!< 0x04000000 */
#define TIM_BDTR_BKDSRM TIM_BDTR_BKDSRM_Msk /*!<Break disarming/re-arming */
#define TIM_BDTR_BK2DSRM_Pos (27U)
#define TIM_BDTR_BK2DSRM_Msk (0x1UL << TIM_BDTR_BK2DSRM_Pos) /*!< 0x08000000 */
#define TIM_BDTR_BK2DSRM TIM_BDTR_BK2DSRM_Msk /*!<Break2 disarming/re-arming */
#define TIM_BDTR_BKBID_Pos (28U)
#define TIM_BDTR_BKBID_Msk (0x1UL << TIM_BDTR_BKBID_Pos) /*!< 0x10000000 */
#define TIM_BDTR_BKBID TIM_BDTR_BKBID_Msk /*!<Break BIDirectional */
#define TIM_BDTR_BK2BID_Pos (29U)
#define TIM_BDTR_BK2BID_Msk (0x1UL << TIM_BDTR_BK2BID_Pos) /*!< 0x20000000 */
#define TIM_BDTR_BK2BID TIM_BDTR_BK2BID_Msk /*!<Break2 BIDirectional */

/*******************  Bit definition for TIM_DCR register  ********************/
#define TIM_DCR_DBA_Pos (0U)
#define TIM_DCR_DBA_Msk (0x1FUL << TIM_DCR_DBA_Pos) /*!< 0x0000001F */
#define TIM_DCR_DBA TIM_DCR_DBA_Msk /*!<DBA[4:0] bits (DMA Base Address) */
#define TIM_DCR_DBA_0 (0x01UL << TIM_DCR_DBA_Pos) /*!< 0x00000001 */
#define TIM_DCR_DBA_1 (0x02UL << TIM_DCR_DBA_Pos) /*!< 0x00000002 */
#define TIM_DCR_DBA_2 (0x04UL << TIM_DCR_DBA_Pos) /*!< 0x00000004 */
#define TIM_DCR_DBA_3 (0x08UL << TIM_DCR_DBA_Pos) /*!< 0x00000008 */
#define TIM_DCR_DBA_4 (0x10UL << TIM_DCR_DBA_Pos) /*!< 0x00000010 */
#define TIM_DCR_DBL_Pos (8U)
#define TIM_DCR_DBL_Msk (0x1FUL << TIM_DCR_DBL_Pos) /*!< 0x00001F00 */
#define TIM_DCR_DBL TIM_DCR_DBL_Msk /*!<DBL[4:0] bits (DMA Burst Length) */
#define TIM_DCR_DBL_0 (0x01UL << TIM_DCR_DBL_Pos) /*!< 0x00000100 */
#define TIM_DCR_DBL_1 (0x02UL << TIM_DCR_DBL_Pos) /*!< 0x00000200 */
#define TIM_DCR_DBL_2 (0x04UL << TIM_DCR_DBL_Pos) /*!< 0x00000400 */
#define TIM_DCR_DBL_3 (0x08UL << TIM_DCR_DBL_Pos) /*!< 0x00000800 */
#define TIM_DCR_DBL_4 (0x10UL << TIM_DCR_DBL_Pos) /*!< 0x00001000 */
#define TIM_DCR_DBSS_Pos (16U)
#define TIM_DCR_DBSS_Msk (0xFUL << TIM_DCR_DBSS_Pos) /*!< 0x00000F00 */
#define TIM_DCR_DBSS \
    TIM_DCR_DBSS_Msk /*!<DBSS[19:16] bits (DMA Burst Source Selection) */
#define TIM_DCR_DBSS_0 (0x01UL << TIM_DCR_DBSS_Pos) /*!< 0x00000100 */
#define TIM_DCR_DBSS_1 (0x02UL << TIM_DCR_DBSS_Pos) /*!< 0x00000200 */
#define TIM_DCR_DBSS_2 (0x04UL << TIM_DCR_DBSS_Pos) /*!< 0x00000400 */
#define TIM_DCR_DBSS_3 (0x08UL << TIM_DCR_DBSS_Pos) /*!< 0x00000800 */

/*******************  Bit definition for TIM1_AF1 register  *******************/
#define TIM1_AF1_BKINE_Pos (0U)
#define TIM1_AF1_BKINE_Msk (0x1UL << TIM1_AF1_BKINE_Pos) /*!< 0x00000001 */
#define TIM1_AF1_BKINE TIM1_AF1_BKINE_Msk /*!<BRK BKIN input enable */
#define TIM1_AF1_BKCMP1E_Pos (1U)
#define TIM1_AF1_BKCMP1E_Msk (0x1UL << TIM1_AF1_BKCMP1E_Pos) /*!< 0x00000002 */
#define TIM1_AF1_BKCMP1E TIM1_AF1_BKCMP1E_Msk /*!<BRK COMP1 enable */
#define TIM1_AF1_BKCMP2E_Pos (2U)
#define TIM1_AF1_BKCMP2E_Msk (0x1UL << TIM1_AF1_BKCMP2E_Pos) /*!< 0x00000004 */
#define TIM1_AF1_BKCMP2E TIM1_AF1_BKCMP2E_Msk /*!<BRK COMP2 enable */
#define TIM1_AF1_BKDF1BK0E_Pos (8U)
#define TIM1_AF1_BKDF1BK0E_Msk \
    (0x1UL << TIM1_AF1_BKDF1BK0E_Pos) /*!< 0x00000100 */
#define TIM1_AF1_BKDF1BK0E \
    TIM1_AF1_BKDF1BK0E_Msk /*!<BRK mdf1_break[0](TIM1) or mdf1_break[2](TIM2) enable */
#define TIM1_AF1_BKINP_Pos (9U)
#define TIM1_AF1_BKINP_Msk (0x1UL << TIM1_AF1_BKINP_Pos) /*!< 0x00000200 */
#define TIM1_AF1_BKINP TIM1_AF1_BKINP_Msk /*!<BRK BKIN input polarity */
#define TIM1_AF1_BKCMP1P_Pos (10U)
#define TIM1_AF1_BKCMP1P_Msk (0x1UL << TIM1_AF1_BKCMP1P_Pos) /*!< 0x00000400 */
#define TIM1_AF1_BKCMP1P TIM1_AF1_BKCMP1P_Msk /*!<BRK COMP1 input polarity */
#define TIM1_AF1_BKCMP2P_Pos (11U)
#define TIM1_AF1_BKCMP2P_Msk (0x1UL << TIM1_AF1_BKCMP2P_Pos) /*!< 0x00000800 */
#define TIM1_AF1_BKCMP2P TIM1_AF1_BKCMP2P_Msk /*!<BRK COMP2 input polarity */
#define TIM1_AF1_ETRSEL_Pos (14U)
#define TIM1_AF1_ETRSEL_Msk (0xFUL << TIM1_AF1_ETRSEL_Pos) /*!< 0x0003C000 */
#define TIM1_AF1_ETRSEL \
    TIM1_AF1_ETRSEL_Msk /*!<ETRSEL[3:0] bits (TIM1 ETR source selection) */
#define TIM1_AF1_ETRSEL_0 (0x1UL << TIM1_AF1_ETRSEL_Pos) /*!< 0x00004000 */
#define TIM1_AF1_ETRSEL_1 (0x2UL << TIM1_AF1_ETRSEL_Pos) /*!< 0x00008000 */
#define TIM1_AF1_ETRSEL_2 (0x4UL << TIM1_AF1_ETRSEL_Pos) /*!< 0x00010000 */
#define TIM1_AF1_ETRSEL_3 (0x8UL << TIM1_AF1_ETRSEL_Pos) /*!< 0x00020000 */

/*******************  Bit definition for TIM1_AF2 register  *********************/
#define TIM1_AF2_BK2INE_Pos (0U)
#define TIM1_AF2_BK2INE_Msk (0x1UL << TIM1_AF2_BK2INE_Pos) /*!< 0x00000001 */
#define TIM1_AF2_BK2INE TIM1_AF2_BK2INE_Msk /*!<BRK2 BKIN input enable */
#define TIM1_AF2_BK2CMP1E_Pos (1U)
#define TIM1_AF2_BK2CMP1E_Msk \
    (0x1UL << TIM1_AF2_BK2CMP1E_Pos)            /*!< 0x00000002 */
#define TIM1_AF2_BK2CMP1E TIM1_AF2_BK2CMP1E_Msk /*!<BRK2 COMP1 enable */
#define TIM1_AF2_BK2CMP2E_Pos (2U)
#define TIM1_AF2_BK2CMP2E_Msk \
    (0x1UL << TIM1_AF2_BK2CMP2E_Pos)            /*!< 0x00000004 */
#define TIM1_AF2_BK2CMP2E TIM1_AF2_BK2CMP2E_Msk /*!<BRK2 COMP2 enable */
#define TIM1_AF2_BK2DF1BK1E_Pos (8U)
#define TIM1_AF2_BK2DF1BK1E_Msk \
    (0x1UL << TIM1_AF2_BK2DF1BK1E_Pos) /*!< 0x00000100 */
#define TIM1_AF2_BK2DF1BK1E \
    TIM1_AF2_BK2DF1BK1E_Msk /*!<BRK2 mdf1_break[1](TIM1) or mdf1_break[3](TIM8) enable */
#define TIM1_AF2_BK2INP_Pos (9U)
#define TIM1_AF2_BK2INP_Msk (0x1UL << TIM1_AF2_BK2INP_Pos) /*!< 0x00000200 */
#define TIM1_AF2_BK2INP TIM1_AF2_BK2INP_Msk /*!<BRK2 BKIN input polarity */
#define TIM1_AF2_BK2CMP1P_Pos (10U)
#define TIM1_AF2_BK2CMP1P_Msk \
    (0x1UL << TIM1_AF2_BK2CMP1P_Pos)            /*!< 0x00000400 */
#define TIM1_AF2_BK2CMP1P TIM1_AF2_BK2CMP1P_Msk /*!<BRK2 COMP1 input polarity */
#define TIM1_AF2_BK2CMP2P_Pos (11U)
#define TIM1_AF2_BK2CMP2P_Msk \
    (0x1UL << TIM1_AF2_BK2CMP2P_Pos)            /*!< 0x00000800 */
#define TIM1_AF2_BK2CMP2P TIM1_AF2_BK2CMP2P_Msk /*!<BRK2 COMP2 input polarity */
#define TIM1_AF2_OCRSEL_Pos (16U)
#define TIM1_AF2_OCRSEL_Msk (0x1UL << TIM1_AF2_OCRSEL_Pos) /*!< 0x00010000 */
#define TIM1_AF2_OCRSEL TIM1_AF2_OCRSEL_Msk /*!<OCREF_CLR source selection */
#define TIM1_AF2_OCRSEL_0 (0x1UL << TIM1_AF2_OCRSEL_Pos) /*!< 0x00010000 */

/*******************  Bit definition for TIM_TISEL register  *********************/
#define TIM_TISEL_TI1SEL_Pos (0U)
#define TIM_TISEL_TI1SEL_Msk (0xFUL << TIM_TISEL_TI1SEL_Pos) /*!< 0x0000000F */
#define TIM_TISEL_TI1SEL \
    TIM_TISEL_TI1SEL_Msk /*!<TI1SEL[3:0] bits (TIM1 TI1 SEL)*/
#define TIM_TISEL_TI1SEL_0 (0x1UL << TIM_TISEL_TI1SEL_Pos) /*!< 0x00000001 */
#define TIM_TISEL_TI1SEL_1 (0x2UL << TIM_TISEL_TI1SEL_Pos) /*!< 0x00000002 */
#define TIM_TISEL_TI1SEL_2 (0x4UL << TIM_TISEL_TI1SEL_Pos) /*!< 0x00000004 */
#define TIM_TISEL_TI1SEL_3 (0x8UL << TIM_TISEL_TI1SEL_Pos) /*!< 0x00000008 */
#define TIM_TISEL_TI2SEL_Pos (8U)
#define TIM_TISEL_TI2SEL_Msk (0xFUL << TIM_TISEL_TI2SEL_Pos) /*!< 0x00000F00 */
#define TIM_TISEL_TI2SEL \
    TIM_TISEL_TI2SEL_Msk /*!<TI2SEL[3:0] bits (TIM1 TI2 SEL)*/
#define TIM_TISEL_TI2SEL_0 (0x1UL << TIM_TISEL_TI2SEL_Pos) /*!< 0x00000100 */
#define TIM_TISEL_TI2SEL_1 (0x2UL << TIM_TISEL_TI2SEL_Pos) /*!< 0x00000200 */
#define TIM_TISEL_TI2SEL_2 (0x4UL << TIM_TISEL_TI2SEL_Pos) /*!< 0x00000400 */
#define TIM_TISEL_TI2SEL_3 (0x8UL << TIM_TISEL_TI2SEL_Pos) /*!< 0x00000800 */
#define TIM_TISEL_TI3SEL_Pos (16U)
#define TIM_TISEL_TI3SEL_Msk (0xFUL << TIM_TISEL_TI3SEL_Pos) /*!< 0x000F0000 */
#define TIM_TISEL_TI3SEL \
    TIM_TISEL_TI3SEL_Msk /*!<TI3SEL[3:0] bits (TIM1 TI3 SEL)*/
#define TIM_TISEL_TI3SEL_0 (0x1UL << TIM_TISEL_TI3SEL_Pos) /*!< 0x00010000 */
#define TIM_TISEL_TI3SEL_1 (0x2UL << TIM_TISEL_TI3SEL_Pos) /*!< 0x00020000 */
#define TIM_TISEL_TI3SEL_2 (0x4UL << TIM_TISEL_TI3SEL_Pos) /*!< 0x00040000 */
#define TIM_TISEL_TI3SEL_3 (0x8UL << TIM_TISEL_TI3SEL_Pos) /*!< 0x00080000 */
#define TIM_TISEL_TI4SEL_Pos (24U)
#define TIM_TISEL_TI4SEL_Msk (0xFUL << TIM_TISEL_TI4SEL_Pos) /*!< 0x0F000000 */
#define TIM_TISEL_TI4SEL \
    TIM_TISEL_TI4SEL_Msk /*!<TI4SEL[3:0] bits (TIM1 TI4 SEL)*/
#define TIM_TISEL_TI4SEL_0 (0x1UL << TIM_TISEL_TI4SEL_Pos) /*!< 0x01000000 */
#define TIM_TISEL_TI4SEL_1 (0x2UL << TIM_TISEL_TI4SEL_Pos) /*!< 0x02000000 */
#define TIM_TISEL_TI4SEL_2 (0x4UL << TIM_TISEL_TI4SEL_Pos) /*!< 0x04000000 */
#define TIM_TISEL_TI4SEL_3 (0x8UL << TIM_TISEL_TI4SEL_Pos) /*!< 0x08000000 */

/*******************  Bit definition for TIM_DTR2 register  *********************/
#define TIM_DTR2_DTGF_Pos (0U)
#define TIM_DTR2_DTGF_Msk (0xFFUL << TIM_DTR2_DTGF_Pos) /*!< 0x0000000F */
#define TIM_DTR2_DTGF \
    TIM_DTR2_DTGF_Msk /*!<DTGF[7:0] bits (Deadtime falling edge generator setup)*/
#define TIM_DTR2_DTGF_0 (0x01UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000001 */
#define TIM_DTR2_DTGF_1 (0x02UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000002 */
#define TIM_DTR2_DTGF_2 (0x04UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000004 */
#define TIM_DTR2_DTGF_3 (0x08UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000008 */
#define TIM_DTR2_DTGF_4 (0x10UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000010 */
#define TIM_DTR2_DTGF_5 (0x20UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000020 */
#define TIM_DTR2_DTGF_6 (0x40UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000040 */
#define TIM_DTR2_DTGF_7 (0x80UL << TIM_DTR2_DTGF_Pos) /*!< 0x00000080 */
#define TIM_DTR2_DTAE_Pos (16U)
#define TIM_DTR2_DTAE_Msk (0x1UL << TIM_DTR2_DTAE_Pos) /*!< 0x00004000 */
#define TIM_DTR2_DTAE TIM_DTR2_DTAE_Msk /*!<Deadtime asymmetric enable */
#define TIM_DTR2_DTPE_Pos (17U)
#define TIM_DTR2_DTPE_Msk (0x1UL << TIM_DTR2_DTPE_Pos) /*!< 0x00008000 */
#define TIM_DTR2_DTPE TIM_DTR2_DTPE_Msk /*!<Deadtime prelaod enable */

/*******************  Bit definition for TIM_ECR register  *********************/
#define TIM_ECR_IE_Pos (0U)
#define TIM_ECR_IE_Msk (0x1UL << TIM_ECR_IE_Pos) /*!< 0x00000001 */
#define TIM_ECR_IE TIM_ECR_IE_Msk                /*!<Index enable */
#define TIM_ECR_IDIR_Pos (1U)
#define TIM_ECR_IDIR_Msk (0x3UL << TIM_ECR_IDIR_Pos) /*!< 0x00000006 */
#define TIM_ECR_IDIR TIM_ECR_IDIR_Msk /*!<IDIR[1:0] bits (Index direction)*/
#define TIM_ECR_IDIR_0 (0x01UL << TIM_ECR_IDIR_Pos) /*!< 0x00000001 */
#define TIM_ECR_IDIR_1 (0x02UL << TIM_ECR_IDIR_Pos) /*!< 0x00000002 */
#define TIM_ECR_IBLK_Pos (3U)
#define TIM_ECR_IBLK_Msk (0x5UL << TIM_ECR_IBLK_Pos) /*!< 0x00000018 */
#define TIM_ECR_IBLK TIM_ECR_IBLK_Msk /*!<IBLK[1:0] bits (Index blanking)*/
#define TIM_ECR_IBLK_0 (0x01UL << TIM_ECR_IBLK_Pos) /*!< 0x00000008 */
#define TIM_ECR_IBLK_1 (0x02UL << TIM_ECR_IBLK_Pos) /*!< 0x00000010 */
#define TIM_ECR_FIDX_Pos (5U)
#define TIM_ECR_FIDX_Msk (0x1UL << TIM_ECR_FIDX_Pos) /*!< 0x00000020 */
#define TIM_ECR_FIDX TIM_ECR_FIDX_Msk                /*!<First index enable */
#define TIM_ECR_IPOS_Pos (6U)
#define TIM_ECR_IPOS_Msk (0x3UL << TIM_ECR_IPOS_Pos) /*!< 0x0000000C0 */
#define TIM_ECR_IPOS TIM_ECR_IPOS_Msk /*!<IPOS[1:0] bits (Index positioning)*/
#define TIM_ECR_IPOS_0 (0x01UL << TIM_ECR_IPOS_Pos) /*!< 0x00000001 */
#define TIM_ECR_IPOS_1 (0x02UL << TIM_ECR_IPOS_Pos) /*!< 0x00000002 */
#define TIM_ECR_PW_Pos (16U)
#define TIM_ECR_PW_Msk (0xFFUL << TIM_ECR_PW_Pos) /*!< 0x00FF0000 */
#define TIM_ECR_PW TIM_ECR_PW_Msk               /*!<PW[7:0] bits (Pulse width)*/
#define TIM_ECR_PW_0 (0x01UL << TIM_ECR_PW_Pos) /*!< 0x00010000 */
#define TIM_ECR_PW_1 (0x02UL << TIM_ECR_PW_Pos) /*!< 0x00020000 */
#define TIM_ECR_PW_2 (0x04UL << TIM_ECR_PW_Pos) /*!< 0x00040000 */
#define TIM_ECR_PW_3 (0x08UL << TIM_ECR_PW_Pos) /*!< 0x00080000 */
#define TIM_ECR_PW_4 (0x10UL << TIM_ECR_PW_Pos) /*!< 0x00100000 */
#define TIM_ECR_PW_5 (0x20UL << TIM_ECR_PW_Pos) /*!< 0x00200000 */
#define TIM_ECR_PW_6 (0x40UL << TIM_ECR_PW_Pos) /*!< 0x00400000 */
#define TIM_ECR_PW_7 (0x80UL << TIM_ECR_PW_Pos) /*!< 0x00800000 */
#define TIM_ECR_PWPRSC_Pos (24U)
#define TIM_ECR_PWPRSC_Msk (0x7UL << TIM_ECR_PWPRSC_Pos) /*!< 0x07000000 */
#define TIM_ECR_PWPRSC \
    TIM_ECR_PWPRSC_Msk /*!<PWPRSC[2:0] bits (Pulse width prescaler)*/
#define TIM_ECR_PWPRSC_0 (0x01UL << TIM_ECR_PWPRSC_Pos) /*!< 0x01000000 */
#define TIM_ECR_PWPRSC_1 (0x02UL << TIM_ECR_PWPRSC_Pos) /*!< 0x02000000 */
#define TIM_ECR_PWPRSC_2 (0x04UL << TIM_ECR_PWPRSC_Pos) /*!< 0x04000000 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define TIM_DMAR_DMAB_Pos (0U)
#define TIM_DMAR_DMAB_Msk (0xFFFFFFFFUL << TIM_DMAR_DMAB_Pos) /*!< 0xFFFFFFFF */
#define TIM_DMAR_DMAB TIM_DMAR_DMAB_Msk /*!<DMA register for burst accesses */

/******************************************************************************/
/*                                                                            */
/*                         Low Power Timer (LPTIM)                            */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for LPTIM_ISR register  *******************/
#define LPTIM_ISR_CC1IF_Pos (0U)
#define LPTIM_ISR_CC1IF_Msk (0x1UL << LPTIM_ISR_CC1IF_Pos) /*!< 0x00000001 */
#define LPTIM_ISR_CC1IF \
    LPTIM_ISR_CC1IF_Msk /*!< Capture/Compare 1 interrupt flag */
#define LPTIM_ISR_ARRM_Pos (1U)
#define LPTIM_ISR_ARRM_Msk (0x1UL << LPTIM_ISR_ARRM_Pos) /*!< 0x00000002 */
#define LPTIM_ISR_ARRM LPTIM_ISR_ARRM_Msk /*!< Autoreload match */
#define LPTIM_ISR_EXTTRIG_Pos (2U)
#define LPTIM_ISR_EXTTRIG_Msk \
    (0x1UL << LPTIM_ISR_EXTTRIG_Pos) /*!< 0x00000004 */
#define LPTIM_ISR_EXTTRIG \
    LPTIM_ISR_EXTTRIG_Msk /*!< External trigger edge event */
#define LPTIM_ISR_CMP1OK_Pos (3U)
#define LPTIM_ISR_CMP1OK_Msk (0x1UL << LPTIM_ISR_CMP1OK_Pos) /*!< 0x00000008 */
#define LPTIM_ISR_CMP1OK \
    LPTIM_ISR_CMP1OK_Msk /*!< Compare register 1 update OK */
#define LPTIM_ISR_ARROK_Pos (4U)
#define LPTIM_ISR_ARROK_Msk (0x1UL << LPTIM_ISR_ARROK_Pos) /*!< 0x00000010 */
#define LPTIM_ISR_ARROK \
    LPTIM_ISR_ARROK_Msk /*!< Autoreload register update OK */
#define LPTIM_ISR_UP_Pos (5U)
#define LPTIM_ISR_UP_Msk (0x1UL << LPTIM_ISR_UP_Pos) /*!< 0x00000020 */
#define LPTIM_ISR_UP \
    LPTIM_ISR_UP_Msk /*!< Counter direction change down to up */
#define LPTIM_ISR_DOWN_Pos (6U)
#define LPTIM_ISR_DOWN_Msk (0x1UL << LPTIM_ISR_DOWN_Pos) /*!< 0x00000040 */
#define LPTIM_ISR_DOWN \
    LPTIM_ISR_DOWN_Msk /*!< Counter direction change up to down */
#define LPTIM_ISR_UE_Pos (7U)
#define LPTIM_ISR_UE_Msk (0x1UL << LPTIM_ISR_UE_Pos) /*!< 0x00000080 */
#define LPTIM_ISR_UE LPTIM_ISR_UE_Msk                /*!< Update event */
#define LPTIM_ISR_REPOK_Pos (8U)
#define LPTIM_ISR_REPOK_Msk (0x1UL << LPTIM_ISR_REPOK_Pos) /*!< 0x00000100 */
#define LPTIM_ISR_REPOK \
    LPTIM_ISR_REPOK_Msk /*!< Repetition register update OK */
#define LPTIM_ISR_CC2IF_Pos (9U)
#define LPTIM_ISR_CC2IF_Msk (0x1UL << LPTIM_ISR_CC2IF_Pos) /*!< 0x00000200 */
#define LPTIM_ISR_CC2IF \
    LPTIM_ISR_CC2IF_Msk /*!< Capture/Compare 2 interrupt flag */
#define LPTIM_ISR_CC1OF_Pos (12U)
#define LPTIM_ISR_CC1OF_Msk (0x1UL << LPTIM_ISR_CC1OF_Pos) /*!< 0x00001000 */
#define LPTIM_ISR_CC1OF \
    LPTIM_ISR_CC1OF_Msk /*!< Capture/Compare 1 over-capture flag */
#define LPTIM_ISR_CC2OF_Pos (13U)
#define LPTIM_ISR_CC2OF_Msk (0x1UL << LPTIM_ISR_CC2OF_Pos) /*!< 0x00002000 */
#define LPTIM_ISR_CC2OF \
    LPTIM_ISR_CC2OF_Msk /*!< Capture/Compare 2 over-capture flag */
#define LPTIM_ISR_CMP2OK_Pos (19U)
#define LPTIM_ISR_CMP2OK_Msk (0x1UL << LPTIM_ISR_CMP2OK_Pos) /*!< 0x00080000 */
#define LPTIM_ISR_CMP2OK \
    LPTIM_ISR_CMP2OK_Msk /*!< Compare register 2 update OK */
#define LPTIM_ISR_DIEROK_Pos (24U)
#define LPTIM_ISR_DIEROK_Msk (0x1UL << LPTIM_ISR_DIEROK_Pos) /*!< 0x01000000 */
#define LPTIM_ISR_DIEROK \
    LPTIM_ISR_DIEROK_Msk /*!< DMA & interrupt enable update OK */

/******************  Bit definition for LPTIM_ICR register  *******************/
#define LPTIM_ICR_CC1CF_Pos (0U)
#define LPTIM_ICR_CC1CF_Msk (0x1UL << LPTIM_ICR_CC1CF_Pos) /*!< 0x00000001 */
#define LPTIM_ICR_CC1CF \
    LPTIM_ICR_CC1CF_Msk /*!< Capture/Compare 1 clear flag  */
#define LPTIM_ICR_ARRMCF_Pos (1U)
#define LPTIM_ICR_ARRMCF_Msk (0x1UL << LPTIM_ICR_ARRMCF_Pos) /*!< 0x00000002 */
#define LPTIM_ICR_ARRMCF \
    LPTIM_ICR_ARRMCF_Msk /*!< Autoreload match clear flag */
#define LPTIM_ICR_EXTTRIGCF_Pos (2U)
#define LPTIM_ICR_EXTTRIGCF_Msk \
    (0x1UL << LPTIM_ICR_EXTTRIGCF_Pos) /*!< 0x00000004 */
#define LPTIM_ICR_EXTTRIGCF \
    LPTIM_ICR_EXTTRIGCF_Msk /*!< External trigger edge event clear flag */
#define LPTIM_ICR_CMP1OKCF_Pos (3U)
#define LPTIM_ICR_CMP1OKCF_Msk \
    (0x1UL << LPTIM_ICR_CMP1OKCF_Pos) /*!< 0x00000008 */
#define LPTIM_ICR_CMP1OKCF \
    LPTIM_ICR_CMP1OKCF_Msk /*!< Compare register 1 update OK clear flag */
#define LPTIM_ICR_ARROKCF_Pos (4U)
#define LPTIM_ICR_ARROKCF_Msk \
    (0x1UL << LPTIM_ICR_ARROKCF_Pos) /*!< 0x00000010 */
#define LPTIM_ICR_ARROKCF \
    LPTIM_ICR_ARROKCF_Msk /*!< Autoreload register update OK clear flag */
#define LPTIM_ICR_UPCF_Pos (5U)
#define LPTIM_ICR_UPCF_Msk (0x1UL << LPTIM_ICR_UPCF_Pos) /*!< 0x00000020 */
#define LPTIM_ICR_UPCF \
    LPTIM_ICR_UPCF_Msk /*!< Counter direction change down to up clear flag */
#define LPTIM_ICR_DOWNCF_Pos (6U)
#define LPTIM_ICR_DOWNCF_Msk (0x1UL << LPTIM_ICR_DOWNCF_Pos) /*!< 0x00000040 */
#define LPTIM_ICR_DOWNCF \
    LPTIM_ICR_DOWNCF_Msk /*!< Counter direction change up to down clear flag */
#define LPTIM_ICR_UECF_Pos (7U)
#define LPTIM_ICR_UECF_Msk (0x1UL << LPTIM_ICR_UECF_Pos) /*!< 0x00000080 */
#define LPTIM_ICR_UECF LPTIM_ICR_UECF_Msk /*!< Update event clear flag */
#define LPTIM_ICR_REPOKCF_Pos (8U)
#define LPTIM_ICR_REPOKCF_Msk \
    (0x1UL << LPTIM_ICR_REPOKCF_Pos) /*!< 0x00000100 */
#define LPTIM_ICR_REPOKCF \
    LPTIM_ICR_REPOKCF_Msk /*!< Repetition register update OK clear flag */
#define LPTIM_ICR_CC2CF_Pos (9U)
#define LPTIM_ICR_CC2CF_Msk (0x1UL << LPTIM_ICR_CC2CF_Pos) /*!< 0x00000200 */
#define LPTIM_ICR_CC2CF \
    LPTIM_ICR_CC2CF_Msk /*!< Capture/Compare 2 clear flag  */
#define LPTIM_ICR_CC1OCF_Pos (12U)
#define LPTIM_ICR_CC1OCF_Msk (0x1UL << LPTIM_ICR_CC1OCF_Pos) /*!< 0x00001000 */
#define LPTIM_ICR_CC1OCF \
    LPTIM_ICR_CC1OCF_Msk /*!< Capture/Compare 1 over-capture clear flag */
#define LPTIM_ICR_CC2OCF_Pos (13U)
#define LPTIM_ICR_CC2OCF_Msk (0x1UL << LPTIM_ICR_CC2OCF_Pos) /*!< 0x00002000 */
#define LPTIM_ICR_CC2OCF \
    LPTIM_ICR_CC2OCF_Msk /*!< Capture/Compare 2 over-capture clear flag */
#define LPTIM_ICR_CMP2OKCF_Pos (19U)
#define LPTIM_ICR_CMP2OKCF_Msk \
    (0x1UL << LPTIM_ICR_CMP2OKCF_Pos) /*!< 0x00080000 */
#define LPTIM_ICR_CMP2OKCF \
    LPTIM_ICR_CMP2OKCF_Msk /*!< Compare register 2 update OK clear flag */
#define LPTIM_ICR_DIEROKCF_Pos (24U)
#define LPTIM_ICR_DIEROKCF_Msk \
    (0x1UL << LPTIM_ICR_DIEROKCF_Pos) /*!< 0x01000000 */
#define LPTIM_ICR_DIEROKCF \
    LPTIM_ICR_DIEROKCF_Msk /*!< Interrupt enable register update OK clear flag */

/******************  Bit definition for LPTIM_DIER register *******************/
#define LPTIM_DIER_CC1IE_Pos (0U)
#define LPTIM_DIER_CC1IE_Msk (0x1UL << LPTIM_DIER_CC1IE_Pos) /*!< 0x00000001 */
#define LPTIM_DIER_CC1IE \
    LPTIM_DIER_CC1IE_Msk /*!< Compare/Compare interrupt enable */
#define LPTIM_DIER_ARRMIE_Pos (1U)
#define LPTIM_DIER_ARRMIE_Msk \
    (0x1UL << LPTIM_DIER_ARRMIE_Pos) /*!< 0x00000002 */
#define LPTIM_DIER_ARRMIE \
    LPTIM_DIER_ARRMIE_Msk /*!< Autoreload match interrupt enable */
#define LPTIM_DIER_EXTTRIGIE_Pos (2U)
#define LPTIM_DIER_EXTTRIGIE_Msk \
    (0x1UL << LPTIM_DIER_EXTTRIGIE_Pos) /*!< 0x00000004 */
#define LPTIM_DIER_EXTTRIGIE \
    LPTIM_DIER_EXTTRIGIE_Msk /*!< External trigger edge event interrupt enable */
#define LPTIM_DIER_CMP1OKIE_Pos (3U)
#define LPTIM_DIER_CMP1OKIE_Msk \
    (0x1UL << LPTIM_DIER_CMP1OKIE_Pos) /*!< 0x00000008 */
#define LPTIM_DIER_CMP1OKIE \
    LPTIM_DIER_CMP1OKIE_Msk /*!< Compare register 1 update OK interrupt enable */
#define LPTIM_DIER_ARROKIE_Pos (4U)
#define LPTIM_DIER_ARROKIE_Msk \
    (0x1UL << LPTIM_DIER_ARROKIE_Pos) /*!< 0x00000010 */
#define LPTIM_DIER_ARROKIE \
    LPTIM_DIER_ARROKIE_Msk /*!< Autoreload register update OK interrupt enable */
#define LPTIM_DIER_UPIE_Pos (5U)
#define LPTIM_DIER_UPIE_Msk (0x1UL << LPTIM_DIER_UPIE_Pos) /*!< 0x00000020 */
#define LPTIM_DIER_UPIE \
    LPTIM_DIER_UPIE_Msk /*!< Counter direction change down to up interrupt enable */
#define LPTIM_DIER_DOWNIE_Pos (6U)
#define LPTIM_DIER_DOWNIE_Msk \
    (0x1UL << LPTIM_DIER_DOWNIE_Pos) /*!< 0x00000040 */
#define LPTIM_DIER_DOWNIE \
    LPTIM_DIER_DOWNIE_Msk /*!< Counter direction change up to down interrupt enable */
#define LPTIM_DIER_UEIE_Pos (7U)
#define LPTIM_DIER_UEIE_Msk (0x1UL << LPTIM_DIER_UEIE_Pos) /*!< 0x00000080 */
#define LPTIM_DIER_UEIE \
    LPTIM_DIER_UEIE_Msk /*!< Update event interrupt enable */
#define LPTIM_DIER_REPOKIE_Pos (8U)
#define LPTIM_DIER_REPOKIE_Msk \
    (0x1UL << LPTIM_DIER_REPOKIE_Pos) /*!< 0x00000100 */
#define LPTIM_DIER_REPOKIE \
    LPTIM_DIER_REPOKIE_Msk /*!< Repetition register update OK interrupt enable */
#define LPTIM_DIER_CC2IE_Pos (9U)
#define LPTIM_DIER_CC2IE_Msk (0x1UL << LPTIM_DIER_CC2IE_Pos) /*!< 0x00000200 */
#define LPTIM_DIER_CC2IE \
    LPTIM_DIER_CC2IE_Msk /*!< Capture/Compare 2 interrupt interrupt enable */
#define LPTIM_DIER_CC1OIE_Pos (12U)
#define LPTIM_DIER_CC1OIE_Msk \
    (0x1UL << LPTIM_DIER_CC1OIE_Pos) /*!< 0x00001000 */
#define LPTIM_DIER_CC1OIE \
    LPTIM_DIER_CC1OIE_Msk /*!< Capture/Compare 1 over-capture interrupt enable */
#define LPTIM_DIER_CC2OIE_Pos (13U)
#define LPTIM_DIER_CC2OIE_Msk \
    (0x1UL << LPTIM_DIER_CC2OIE_Pos) /*!< 0x00002000 */
#define LPTIM_DIER_CC2OIE \
    LPTIM_DIER_CC2OIE_Msk /*!< Capture/Compare 2 over-capture interrupt enable */
#define LPTIM_DIER_CC1DE_Pos (16U)
#define LPTIM_DIER_CC1DE_Msk (0x1UL << LPTIM_DIER_CC1DE_Pos) /*!< 0x00010000 */
#define LPTIM_DIER_CC1DE \
    LPTIM_DIER_CC1DE_Msk /*!< Capture/Compare 1 DMA request enable */
#define LPTIM_DIER_CMP2OKIE_Pos (19U)
#define LPTIM_DIER_CMP2OKIE_Msk \
    (0x1UL << LPTIM_DIER_CMP2OKIE_Pos) /*!< 0x00080000 */
#define LPTIM_DIER_CMP2OKIE \
    LPTIM_DIER_CMP2OKIE_Msk /*!< Compare register 2 update OK interrupt enable */
#define LPTIM_DIER_UEDE_Pos (23U)
#define LPTIM_DIER_UEDE_Msk (0x1UL << LPTIM_DIER_UEDE_Pos) /*!< 0x00800000 */
#define LPTIM_DIER_UEDE \
    LPTIM_DIER_UEDE_Msk /*!< Update event DMA request enable */
#define LPTIM_DIER_CC2DE_Pos (25U)
#define LPTIM_DIER_CC2DE_Msk (0x1UL << LPTIM_DIER_CC2DE_Pos) /*!< 0x02000000 */
#define LPTIM_DIER_CC2DE \
    LPTIM_DIER_CC2DE_Msk /*!< Capture/Compare 2 DMA request enable */

/******************  Bit definition for LPTIM_CFGR register *******************/
#define LPTIM_CFGR_CKSEL_Pos (0U)
#define LPTIM_CFGR_CKSEL_Msk (0x1UL << LPTIM_CFGR_CKSEL_Pos) /*!< 0x00000001 */
#define LPTIM_CFGR_CKSEL LPTIM_CFGR_CKSEL_Msk /*!< Clock selector */
#define LPTIM_CFGR_CKPOL_Pos (1U)
#define LPTIM_CFGR_CKPOL_Msk (0x3UL << LPTIM_CFGR_CKPOL_Pos) /*!< 0x00000006 */
#define LPTIM_CFGR_CKPOL \
    LPTIM_CFGR_CKPOL_Msk /*!< CKPOL[1:0] bits (Clock polarity) */
#define LPTIM_CFGR_CKPOL_0 (0x1UL << LPTIM_CFGR_CKPOL_Pos) /*!< 0x00000002 */
#define LPTIM_CFGR_CKPOL_1 (0x2UL << LPTIM_CFGR_CKPOL_Pos) /*!< 0x00000004 */
#define LPTIM_CFGR_CKFLT_Pos (3U)
#define LPTIM_CFGR_CKFLT_Msk (0x3UL << LPTIM_CFGR_CKFLT_Pos) /*!< 0x00000018 */
#define LPTIM_CFGR_CKFLT \
    LPTIM_CFGR_CKFLT_Msk /*!< CKFLT[1:0] bits (Configurable digital filter for external clock) */
#define LPTIM_CFGR_CKFLT_0 (0x1UL << LPTIM_CFGR_CKFLT_Pos) /*!< 0x00000008 */
#define LPTIM_CFGR_CKFLT_1 (0x2UL << LPTIM_CFGR_CKFLT_Pos) /*!< 0x00000010 */
#define LPTIM_CFGR_TRGFLT_Pos (6U)
#define LPTIM_CFGR_TRGFLT_Msk \
    (0x3UL << LPTIM_CFGR_TRGFLT_Pos) /*!< 0x000000C0 */
#define LPTIM_CFGR_TRGFLT \
    LPTIM_CFGR_TRGFLT_Msk /*!< TRGFLT[1:0] bits (Configurable digital filter for trigger) */
#define LPTIM_CFGR_TRGFLT_0 (0x1UL << LPTIM_CFGR_TRGFLT_Pos) /*!< 0x00000040 */
#define LPTIM_CFGR_TRGFLT_1 (0x2UL << LPTIM_CFGR_TRGFLT_Pos) /*!< 0x00000080 */
#define LPTIM_CFGR_PRESC_Pos (9U)
#define LPTIM_CFGR_PRESC_Msk (0x7UL << LPTIM_CFGR_PRESC_Pos) /*!< 0x00000E00 */
#define LPTIM_CFGR_PRESC \
    LPTIM_CFGR_PRESC_Msk /*!< PRESC[2:0] bits (Clock prescaler) */
#define LPTIM_CFGR_PRESC_0 (0x1UL << LPTIM_CFGR_PRESC_Pos) /*!< 0x00000200 */
#define LPTIM_CFGR_PRESC_1 (0x2UL << LPTIM_CFGR_PRESC_Pos) /*!< 0x00000400 */
#define LPTIM_CFGR_PRESC_2 (0x4UL << LPTIM_CFGR_PRESC_Pos) /*!< 0x00000800 */
#define LPTIM_CFGR_TRIGSEL_Pos (13U)
#define LPTIM_CFGR_TRIGSEL_Msk \
    (0x7UL << LPTIM_CFGR_TRIGSEL_Pos) /*!< 0x0000E000 */
#define LPTIM_CFGR_TRIGSEL \
    LPTIM_CFGR_TRIGSEL_Msk /*!< TRIGSEL[2:0]] bits (Trigger selector) */
#define LPTIM_CFGR_TRIGSEL_0 \
    (0x1UL << LPTIM_CFGR_TRIGSEL_Pos) /*!< 0x00002000 */
#define LPTIM_CFGR_TRIGSEL_1 \
    (0x2UL << LPTIM_CFGR_TRIGSEL_Pos) /*!< 0x00004000 */
#define LPTIM_CFGR_TRIGSEL_2 \
    (0x4UL << LPTIM_CFGR_TRIGSEL_Pos) /*!< 0x00008000 */
#define LPTIM_CFGR_TRIGEN_Pos (17U)
#define LPTIM_CFGR_TRIGEN_Msk \
    (0x3UL << LPTIM_CFGR_TRIGEN_Pos) /*!< 0x00060000 */
#define LPTIM_CFGR_TRIGEN \
    LPTIM_CFGR_TRIGEN_Msk /*!< TRIGEN[1:0] bits (Trigger enable and polarity) */
#define LPTIM_CFGR_TRIGEN_0 (0x1UL << LPTIM_CFGR_TRIGEN_Pos) /*!< 0x00020000 */
#define LPTIM_CFGR_TRIGEN_1 (0x2UL << LPTIM_CFGR_TRIGEN_Pos) /*!< 0x00040000 */
#define LPTIM_CFGR_TIMOUT_Pos (19U)
#define LPTIM_CFGR_TIMOUT_Msk \
    (0x1UL << LPTIM_CFGR_TIMOUT_Pos)            /*!< 0x00080000 */
#define LPTIM_CFGR_TIMOUT LPTIM_CFGR_TIMOUT_Msk /*!< Timout enable */
#define LPTIM_CFGR_WAVE_Pos (20U)
#define LPTIM_CFGR_WAVE_Msk (0x1UL << LPTIM_CFGR_WAVE_Pos) /*!< 0x00100000 */
#define LPTIM_CFGR_WAVE LPTIM_CFGR_WAVE_Msk /*!< Waveform shape */
#define LPTIM_CFGR_WAVPOL_Pos (21U)
#define LPTIM_CFGR_WAVPOL_Msk \
    (0x1UL << LPTIM_CFGR_WAVPOL_Pos)            /*!< 0x00200000 */
#define LPTIM_CFGR_WAVPOL LPTIM_CFGR_WAVPOL_Msk /*!< Waveform shape */
#define LPTIM_CFGR_PRELOAD_Pos (22U)
#define LPTIM_CFGR_PRELOAD_Msk \
    (0x1UL << LPTIM_CFGR_PRELOAD_Pos)             /*!< 0x00400000 */
#define LPTIM_CFGR_PRELOAD LPTIM_CFGR_PRELOAD_Msk /*!< Reg update mode */
#define LPTIM_CFGR_COUNTMODE_Pos (23U)
#define LPTIM_CFGR_COUNTMODE_Msk \
    (0x1UL << LPTIM_CFGR_COUNTMODE_Pos) /*!< 0x00800000 */
#define LPTIM_CFGR_COUNTMODE \
    LPTIM_CFGR_COUNTMODE_Msk /*!< Counter mode enable */
#define LPTIM_CFGR_ENC_Pos (24U)
#define LPTIM_CFGR_ENC_Msk (0x1UL << LPTIM_CFGR_ENC_Pos) /*!< 0x01000000 */
#define LPTIM_CFGR_ENC LPTIM_CFGR_ENC_Msk /*!< Encoder mode enable */

/******************  Bit definition for LPTIM_CR register  ********************/
#define LPTIM_CR_ENABLE_Pos (0U)
#define LPTIM_CR_ENABLE_Msk (0x1UL << LPTIM_CR_ENABLE_Pos) /*!< 0x00000001 */
#define LPTIM_CR_ENABLE LPTIM_CR_ENABLE_Msk /*!< LPTIMer enable */
#define LPTIM_CR_SNGSTRT_Pos (1U)
#define LPTIM_CR_SNGSTRT_Msk (0x1UL << LPTIM_CR_SNGSTRT_Pos) /*!< 0x00000002 */
#define LPTIM_CR_SNGSTRT LPTIM_CR_SNGSTRT_Msk /*!< Timer start in single mode */
#define LPTIM_CR_CNTSTRT_Pos (2U)
#define LPTIM_CR_CNTSTRT_Msk (0x1UL << LPTIM_CR_CNTSTRT_Pos) /*!< 0x00000004 */
#define LPTIM_CR_CNTSTRT \
    LPTIM_CR_CNTSTRT_Msk /*!< Timer start in continuous mode */
#define LPTIM_CR_COUNTRST_Pos (3U)
#define LPTIM_CR_COUNTRST_Msk \
    (0x1UL << LPTIM_CR_COUNTRST_Pos) /*!< 0x00000008 */
#define LPTIM_CR_COUNTRST \
    LPTIM_CR_COUNTRST_Msk /*!< Timer Counter reset in synchronous mode*/
#define LPTIM_CR_RSTARE_Pos (4U)
#define LPTIM_CR_RSTARE_Msk (0x1UL << LPTIM_CR_RSTARE_Pos) /*!< 0x00000010 */
#define LPTIM_CR_RSTARE \
    LPTIM_CR_RSTARE_Msk /*!< Timer Counter reset after read enable (asynchronously)*/

/******************  Bit definition for LPTIM_CCR1 register  ******************/
#define LPTIM_CCR1_CCR1_Pos (0U)
#define LPTIM_CCR1_CCR1_Msk (0xFFFFUL << LPTIM_CCR1_CCR1_Pos) /*!< 0x0000FFFF */
#define LPTIM_CCR1_CCR1 LPTIM_CCR1_CCR1_Msk /*!< Compare register 1 */

/******************  Bit definition for LPTIM_ARR register  *******************/
#define LPTIM_ARR_ARR_Pos (0U)
#define LPTIM_ARR_ARR_Msk (0xFFFFUL << LPTIM_ARR_ARR_Pos) /*!< 0x0000FFFF */
#define LPTIM_ARR_ARR LPTIM_ARR_ARR_Msk /*!< Auto reload register */

/******************  Bit definition for LPTIM_CNT register  *******************/
#define LPTIM_CNT_CNT_Pos (0U)
#define LPTIM_CNT_CNT_Msk (0xFFFFUL << LPTIM_CNT_CNT_Pos) /*!< 0x0000FFFF */
#define LPTIM_CNT_CNT LPTIM_CNT_CNT_Msk /*!< Counter register */

/******************  Bit definition for LPTIM_CFGR2 register  *****************/
#define LPTIM_CFGR2_IN1SEL_Pos (0U)
#define LPTIM_CFGR2_IN1SEL_Msk \
    (0x3UL << LPTIM_CFGR2_IN1SEL_Pos) /*!< 0x00000003 */
#define LPTIM_CFGR2_IN1SEL \
    LPTIM_CFGR2_IN1SEL_Msk /*!< IN1SEL[1:0] bits (Remap selection) */
#define LPTIM_CFGR2_IN1SEL_0 \
    (0x1UL << LPTIM_CFGR2_IN1SEL_Pos) /*!< 0x00000001 */
#define LPTIM_CFGR2_IN1SEL_1 \
    (0x2UL << LPTIM_CFGR2_IN1SEL_Pos) /*!< 0x00000002 */
#define LPTIM_CFGR2_IN2SEL_Pos (4U)
#define LPTIM_CFGR2_IN2SEL_Msk \
    (0x3UL << LPTIM_CFGR2_IN2SEL_Pos) /*!< 0x00000030 */
#define LPTIM_CFGR2_IN2SEL \
    LPTIM_CFGR2_IN2SEL_Msk /*!< IN2SEL[5:4] bits (Remap selection) */
#define LPTIM_CFGR2_IN2SEL_0 \
    (0x1UL << LPTIM_CFGR2_IN2SEL_Pos) /*!< 0x00000010 */
#define LPTIM_CFGR2_IN2SEL_1 \
    (0x2UL << LPTIM_CFGR2_IN2SEL_Pos) /*!< 0x00000020 */
#define LPTIM_CFGR2_IC1SEL_Pos (16U)
#define LPTIM_CFGR2_IC1SEL_Msk \
    (0x3UL << LPTIM_CFGR2_IC1SEL_Pos)             /*!< 0x00000003 */
#define LPTIM_CFGR2_IC1SEL LPTIM_CFGR2_IC1SEL_Msk /*!< IC1SEL[17:16] bits */
#define LPTIM_CFGR2_IC1SEL_0 \
    (0x1UL << LPTIM_CFGR2_IC1SEL_Pos) /*!< 0x00010000 */
#define LPTIM_CFGR2_IC1SEL_1 \
    (0x2UL << LPTIM_CFGR2_IC1SEL_Pos) /*!< 0x00020000 */
#define LPTIM_CFGR2_IC2SEL_Pos (20U)
#define LPTIM_CFGR2_IC2SEL_Msk \
    (0x3UL << LPTIM_CFGR2_IC2SEL_Pos)             /*!< 0x00000030 */
#define LPTIM_CFGR2_IC2SEL LPTIM_CFGR2_IC2SEL_Msk /*!< IC2SEL[21:20] bits */
#define LPTIM_CFGR2_IC2SEL_0 \
    (0x1UL << LPTIM_CFGR2_IC2SEL_Pos) /*!< 0x00100000 */
#define LPTIM_CFGR2_IC2SEL_1 \
    (0x2UL << LPTIM_CFGR2_IC2SEL_Pos) /*!< 0x00200000 */

/******************  Bit definition for LPTIM_RCR register  *******************/
#define LPTIM_RCR_REP_Pos (0U)
#define LPTIM_RCR_REP_Msk (0xFFUL << LPTIM_RCR_REP_Pos) /*!< 0x000000FF */
#define LPTIM_RCR_REP LPTIM_RCR_REP_Msk /*!< Repetition register value */

/*****************  Bit definition for LPTIM_CCMR1 register  ******************/
#define LPTIM_CCMR1_CC1SEL_Pos (0U)
#define LPTIM_CCMR1_CC1SEL_Msk \
    (0x1UL << LPTIM_CCMR1_CC1SEL_Pos) /*!< 0x00000001 */
#define LPTIM_CCMR1_CC1SEL \
    LPTIM_CCMR1_CC1SEL_Msk /*!< Capture/Compare 1 selection */
#define LPTIM_CCMR1_CC1E_Pos (1U)
#define LPTIM_CCMR1_CC1E_Msk (0x1UL << LPTIM_CCMR1_CC1E_Pos) /*!< 0x00000002 */
#define LPTIM_CCMR1_CC1E \
    LPTIM_CCMR1_CC1E_Msk /*!< Capture/Compare 1 output enable */
#define LPTIM_CCMR1_CC1P_Pos (2U)
#define LPTIM_CCMR1_CC1P_Msk (0x3UL << LPTIM_CCMR1_CC1P_Pos) /*!< 0x0000000C */
#define LPTIM_CCMR1_CC1P \
    LPTIM_CCMR1_CC1P_Msk /*!< Capture/Compare 1 output polarity */
#define LPTIM_CCMR1_CC1P_0 (0x1UL << LPTIM_CCMR1_CC1P_Pos) /*!< 0x00000004 */
#define LPTIM_CCMR1_CC1P_1 (0x2UL << LPTIM_CCMR1_CC1P_Pos) /*!< 0x00000008 */
#define LPTIM_CCMR1_IC1PSC_Pos (8U)
#define LPTIM_CCMR1_IC1PSC_Msk \
    (0x3UL << LPTIM_CCMR1_IC1PSC_Pos) /*!< 0x00000300 */
#define LPTIM_CCMR1_IC1PSC \
    LPTIM_CCMR1_IC1PSC_Msk /*!< Input capture 1 prescaler */
#define LPTIM_CCMR1_IC1PSC_0 \
    (0x1UL << LPTIM_CCMR1_IC1PSC_Pos) /*!< 0x00000100 */
#define LPTIM_CCMR1_IC1PSC_1 \
    (0x2UL << LPTIM_CCMR1_IC1PSC_Pos) /*!< 0x00000200 */
#define LPTIM_CCMR1_IC1F_Pos (12U)
#define LPTIM_CCMR1_IC1F_Msk (0x3UL << LPTIM_CCMR1_IC1F_Pos) /*!< 0x00003000 */
#define LPTIM_CCMR1_IC1F LPTIM_CCMR1_IC1F_Msk /*!< Input capture 1 filter */
#define LPTIM_CCMR1_IC1F_0 (0x1UL << LPTIM_CCMR1_IC1F_Pos) /*!< 0x00001000 */
#define LPTIM_CCMR1_IC1F_1 (0x2UL << LPTIM_CCMR1_IC1F_Pos) /*!< 0x00002000 */
#define LPTIM_CCMR1_CC2SEL_Pos (16U)
#define LPTIM_CCMR1_CC2SEL_Msk \
    (0x1UL << LPTIM_CCMR1_CC2SEL_Pos) /*!< 0x00010000 */
#define LPTIM_CCMR1_CC2SEL \
    LPTIM_CCMR1_CC2SEL_Msk /*!< Capture/Compare 2 selection */
#define LPTIM_CCMR1_CC2E_Pos (17U)
#define LPTIM_CCMR1_CC2E_Msk (0x1UL << LPTIM_CCMR1_CC2E_Pos) /*!< 0x00020000 */
#define LPTIM_CCMR1_CC2E \
    LPTIM_CCMR1_CC2E_Msk /*!< Capture/Compare 2 output enable */
#define LPTIM_CCMR1_CC2P_Pos (18U)
#define LPTIM_CCMR1_CC2P_Msk (0x3UL << LPTIM_CCMR1_CC2P_Pos) /*!< 0x000C0000 */
#define LPTIM_CCMR1_CC2P \
    LPTIM_CCMR1_CC2P_Msk /*!< Capture/Compare 2 output polarity */
#define LPTIM_CCMR1_CC2P_0 (0x1UL << LPTIM_CCMR1_CC2P_Pos) /*!< 0x00040000 */
#define LPTIM_CCMR1_CC2P_1 (0x2UL << LPTIM_CCMR1_CC2P_Pos) /*!< 0x00080000 */
#define LPTIM_CCMR1_IC2PSC_Pos (24U)
#define LPTIM_CCMR1_IC2PSC_Msk \
    (0x3UL << LPTIM_CCMR1_IC2PSC_Pos) /*!< 0x03000000 */
#define LPTIM_CCMR1_IC2PSC \
    LPTIM_CCMR1_IC2PSC_Msk /*!< Input capture 2 prescaler */
#define LPTIM_CCMR1_IC2PSC_0 \
    (0x1UL << LPTIM_CCMR1_IC2PSC_Pos) /*!< 0x01000000 */
#define LPTIM_CCMR1_IC2PSC_1 \
    (0x2UL << LPTIM_CCMR1_IC2PSC_Pos) /*!< 0x02000000 */
#define LPTIM_CCMR1_IC2F_Pos (28U)
#define LPTIM_CCMR1_IC2F_Msk (0x3UL << LPTIM_CCMR1_IC2F_Pos) /*!< 0x30000000 */
#define LPTIM_CCMR1_IC2F LPTIM_CCMR1_IC2F_Msk /*!< Input capture 2 filter */
#define LPTIM_CCMR1_IC2F_0 (0x1UL << LPTIM_CCMR1_IC2F_Pos) /*!< 0x10000000 */
#define LPTIM_CCMR1_IC2F_1 (0x2UL << LPTIM_CCMR1_IC2F_Pos) /*!< 0x20000000 */

/******************  Bit definition for LPTIM_CCR2 register  ******************/
#define LPTIM_CCR2_CCR2_Pos (0U)
#define LPTIM_CCR2_CCR2_Msk (0xFFFFUL << LPTIM_CCR2_CCR2_Pos) /*!< 0x0000FFFF */
#define LPTIM_CCR2_CCR2 LPTIM_CCR2_CCR2_Msk /*!< Compare register 2 */

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for PWR_PMCR register  ******************/
#define PWR_PMCR_LPMS_Pos (0U)
#define PWR_PMCR_LPMS_Msk (0x1UL << PWR_PMCR_LPMS_Pos)
#define PWR_PMCR_LPMS PWR_PMCR_LPMS_Msk
#define PWR_PMCR_SVOS_Pos (2U)
#define PWR_PMCR_SVOS_Msk (0x3UL << PWR_PMCR_SVOS_Pos)
#define PWR_PMCR_SVOS PWR_PMCR_SVOS_Msk
#define PWR_PMCR_SVOS_0 (0x1UL << PWR_PMCR_SVOS_Pos)
#define PWR_PMCR_SVOS_1 (0x2UL << PWR_PMCR_SVOS_Pos)
#define PWR_PMCR_CSSF_Pos (7U)
#define PWR_PMCR_CSSF_Msk (0x1UL << PWR_PMCR_CSSF_Pos)
#define PWR_PMCR_CSSF PWR_PMCR_CSSF_Msk
#define PWR_PMCR_FLPS_Pos (9U)
#define PWR_PMCR_FLPS_Msk (0x1UL << PWR_PMCR_FLPS_Pos)
#define PWR_PMCR_FLPS PWR_PMCR_FLPS_Msk
#define PWR_PMCR_BOOSTE_Pos (12U)
#define PWR_PMCR_BOOSTE_Msk (0x1UL << PWR_PMCR_BOOSTE_Pos)
#define PWR_PMCR_BOOSTE PWR_PMCR_BOOSTE_Msk
#define PWR_PMCR_AVD_READY_Pos (13U)
#define PWR_PMCR_AVD_READY_Msk (0x1UL << PWR_PMCR_AVD_READY_Pos)
#define PWR_PMCR_AVD_READY PWR_PMCR_AVD_READY_Msk
#define PWR_PMCR_SRAM2SO_Pos (25U)
#define PWR_PMCR_SRAM2SO_Msk (0x1UL << PWR_PMCR_SRAM2SO_Pos)
#define PWR_PMCR_SRAM2SO PWR_PMCR_SRAM2SO_Msk
#define PWR_PMCR_SRAM1SO_Pos (26U)
#define PWR_PMCR_SRAM1SO_Msk (0x1UL << PWR_PMCR_SRAM1SO_Pos)
#define PWR_PMCR_SRAM1SO PWR_PMCR_SRAM1SO_Msk

/********************  Bit definition for PWR_PMSR register  *******************/
#define PWR_PMSR_STOPF_Pos (5U)
#define PWR_PMSR_STOPF_Msk (0x1UL << PWR_PMSR_STOPF_Pos)
#define PWR_PMSR_STOPF PWR_PMSR_STOPF_Msk
#define PWR_PMSR_SBF_Pos (6U)
#define PWR_PMSR_SBF_Msk (0x1UL << PWR_PMSR_SBF_Pos)
#define PWR_PMSR_SBF PWR_PMSR_SBF_Msk

/********************  Bit definition for PWR_VOSCR register  ******************/
#define PWR_VOSCR_VOS_Pos (4U)
#define PWR_VOSCR_VOS_Msk (0x3UL << PWR_VOSCR_VOS_Pos)
#define PWR_VOSCR_VOS PWR_VOSCR_VOS_Msk
#define PWR_VOSCR_VOS_0 (0x1UL << PWR_VOSCR_VOS_Pos)
#define PWR_VOSCR_VOS_1 (0x2UL << PWR_VOSCR_VOS_Pos)

/********************  Bit definition for PWR_VOSSR register  *****************/
#define PWR_VOSSR_VOSRDY_Pos (3U)
#define PWR_VOSSR_VOSRDY_Msk (0x1UL << PWR_VOSSR_VOSRDY_Pos)
#define PWR_VOSSR_VOSRDY PWR_VOSSR_VOSRDY_Msk
#define PWR_VOSSR_ACTVOSRDY_Pos (13U)
#define PWR_VOSSR_ACTVOSRDY_Msk (0x1UL << PWR_VOSSR_ACTVOSRDY_Pos)
#define PWR_VOSSR_ACTVOSRDY PWR_VOSSR_ACTVOSRDY_Msk
#define PWR_VOSSR_ACTVOS_Pos (14U)
#define PWR_VOSSR_ACTVOS_Msk (0x3UL << PWR_VOSSR_ACTVOS_Pos)
#define PWR_VOSSR_ACTVOS PWR_VOSSR_ACTVOS_Msk
#define PWR_VOSSR_ACTVOS_0 (0x1UL << PWR_VOSSR_ACTVOS_Pos)
#define PWR_VOSSR_ACTVOS_1 (0x2UL << PWR_VOSSR_ACTVOS_Pos)

/********************  Bit definition for PWR_BDCR register  ******************/
#define PWR_BDCR_BREN_Pos (0U)
#define PWR_BDCR_BREN_Msk (0x1UL << PWR_BDCR_BREN_Pos)
#define PWR_BDCR_BREN PWR_BDCR_BREN_Msk
#define PWR_BDCR_MONEN_Pos (1U)
#define PWR_BDCR_MONEN_Msk (0x1UL << PWR_BDCR_MONEN_Pos)
#define PWR_BDCR_MONEN PWR_BDCR_MONEN_Msk
#define PWR_BDCR_VBE_Pos (8U)
#define PWR_BDCR_VBE_Msk (0x1UL << PWR_BDCR_VBE_Pos)
#define PWR_BDCR_VBE PWR_BDCR_VBE_Msk
#define PWR_BDCR_VBRS_Pos (9U)
#define PWR_BDCR_VBRS_Msk (0x1UL << PWR_BDCR_VBRS_Pos)
#define PWR_BDCR_VBRS PWR_BDCR_VBRS_Msk

/********************  Bit definition for PWR_DBPCR register  *****************/
#define PWR_DBPCR_DBP_Pos (0U)
#define PWR_DBPCR_DBP_Msk (0x1UL << PWR_DBPCR_DBP_Pos)
#define PWR_DBPCR_DBP PWR_DBPCR_DBP_Msk

/********************  Bit definition for PWR_BDSR register  ******************/
#define PWR_BDSR_BRRDY_Pos (16U)
#define PWR_BDSR_BRRDY_Msk (0x1UL << PWR_BDSR_BRRDY_Pos)
#define PWR_BDSR_BRRDY PWR_BDSR_BRRDY_Msk
#define PWR_BDSR_VBATL_Pos (20U)
#define PWR_BDSR_VBATL_Msk (0x1UL << PWR_BDSR_VBATL_Pos)
#define PWR_BDSR_VBATL PWR_BDSR_VBATL_Msk
#define PWR_BDSR_VBATH_Pos (21U)
#define PWR_BDSR_VBATH_Msk (0x1UL << PWR_BDSR_VBATH_Pos)
#define PWR_BDSR_VBATH PWR_BDSR_VBATH_Msk
#define PWR_BDSR_TEMPL_Pos (22U)
#define PWR_BDSR_TEMPL_Msk (0x1UL << PWR_BDSR_TEMPL_Pos)
#define PWR_BDSR_TEMPL PWR_BDSR_TEMPL_Msk
#define PWR_BDSR_TEMPH_Pos (23U)
#define PWR_BDSR_TEMPH_Msk (0x1UL << PWR_BDSR_TEMPH_Pos)
#define PWR_BDSR_TEMPH PWR_BDSR_TEMPH_Msk

/********************  Bit definition for PWR_SCCR register  ******************/
#define PWR_SCCR_BYPASS_Pos (0U)
#define PWR_SCCR_BYPASS_Msk (0x1UL << PWR_SCCR_BYPASS_Pos)
#define PWR_SCCR_BYPASS PWR_SCCR_BYPASS_Msk
#define PWR_SCCR_LDOEN_Pos (8U)
#define PWR_SCCR_LDOEN_Msk (0x1UL << PWR_SCCR_LDOEN_Pos)
#define PWR_SCCR_LDOEN PWR_SCCR_LDOEN_Msk

/********************  Bit definition for PWR_VMCR register  ******************/
#define PWR_VMCR_PVDEN_Pos (0U)
#define PWR_VMCR_PVDEN_Msk (0x1UL << PWR_VMCR_PVDEN_Pos)
#define PWR_VMCR_PVDEN PWR_VMCR_PVDEN_Msk
#define PWR_VMCR_PLS_Pos (1U)
#define PWR_VMCR_PLS_Msk (0x7UL << PWR_VMCR_PLS_Pos)
#define PWR_VMCR_PLS PWR_VMCR_PLS_Msk
#define PWR_VMCR_PLS_0 (0x1UL << PWR_VMCR_PLS_Pos)
#define PWR_VMCR_PLS_1 (0x2UL << PWR_VMCR_PLS_Pos)
#define PWR_VMCR_PLS_2 (0x4UL << PWR_VMCR_PLS_Pos)
#define PWR_VMCR_AVDEN_Pos (8U)
#define PWR_VMCR_AVDEN_Msk (0x1UL << PWR_VMCR_AVDEN_Pos)
#define PWR_VMCR_AVDEN PWR_VMCR_AVDEN_Msk
#define PWR_VMCR_ALS_Pos (9U)
#define PWR_VMCR_ALS_Msk (0x3UL << PWR_VMCR_ALS_Pos)
#define PWR_VMCR_ALS PWR_VMCR_ALS_Msk
#define PWR_VMCR_ALS_0 (0x1UL << PWR_VMCR_ALS_Pos)
#define PWR_VMCR_ALS_1 (0x2UL << PWR_VMCR_ALS_Pos)

/********************  Bit definition for PWR_VMSR register  ******************/
#define PWR_VMSR_AVDO_Pos (19U)
#define PWR_VMSR_AVDO_Msk (0x1UL << PWR_VMSR_AVDO_Pos)
#define PWR_VMSR_AVDO PWR_VMSR_AVDO_Msk
#define PWR_VMSR_VDDIO2RDY_Pos (20U)
#define PWR_VMSR_VDDIO2RDY_Msk (0x1UL << PWR_VMSR_VDDIO2RDY_Pos)
#define PWR_VMSR_VDDIO2RDY PWR_VMSR_VDDIO2RDY_Msk
#define PWR_VMSR_PVDO_Pos (22U)
#define PWR_VMSR_PVDO_Msk (0x1UL << PWR_VMSR_PVDO_Pos)
#define PWR_VMSR_PVDO PWR_VMSR_PVDO_Msk

/********************  Bit definition for PWR_WUSCR register  ****************/
#define PWR_WUSCR_CWUF1_Pos (0U)
#define PWR_WUSCR_CWUF1_Msk (0x1UL << PWR_WUSCR_CWUF1_Pos)
#define PWR_WUSCR_CWUF1 PWR_WUSCR_CWUF1_Msk
#define PWR_WUSCR_CWUF2_Pos (1U)
#define PWR_WUSCR_CWUF2_Msk (0x1UL << PWR_WUSCR_CWUF2_Pos)
#define PWR_WUSCR_CWUF2 PWR_WUSCR_CWUF2_Msk
#define PWR_WUSCR_CWUF3_Pos (2U)
#define PWR_WUSCR_CWUF3_Msk (0x1UL << PWR_WUSCR_CWUF3_Pos)
#define PWR_WUSCR_CWUF3 PWR_WUSCR_CWUF3_Msk
#define PWR_WUSCR_CWUF4_Pos (3U)
#define PWR_WUSCR_CWUF4_Msk (0x1UL << PWR_WUSCR_CWUF4_Pos)
#define PWR_WUSCR_CWUF4 PWR_WUSCR_CWUF4_Msk
#define PWR_WUSCR_CWUF5_Pos (4U)
#define PWR_WUSCR_CWUF5_Msk (0x1UL << PWR_WUSCR_CWUF5_Pos)
#define PWR_WUSCR_CWUF5 PWR_WUSCR_CWUF5_Msk
#define PWR_WUSCR_CWUF_Pos (0U)
#define PWR_WUSCR_CWUF_Msk (0x1FUL << PWR_WUSCR_CWUF_Pos)
#define PWR_WUSCR_CWUF PWR_WUSCR_CWUF_Msk

/********************  Bit definition for PWR_WUSR register  ****************/
#define PWR_WUSR_WUF1_Pos (0U)
#define PWR_WUSR_WUF1_Msk (0x1UL << PWR_WUSR_WUF1_Pos)
#define PWR_WUSR_WUF1 PWR_WUSR_WUF1_Msk
#define PWR_WUSR_WUF2_Pos (1U)
#define PWR_WUSR_WUF2_Msk (0x1UL << PWR_WUSR_WUF2_Pos)
#define PWR_WUSR_WUF2 PWR_WUSR_WUF2_Msk
#define PWR_WUSR_WUF3_Pos (2U)
#define PWR_WUSR_WUF3_Msk (0x1UL << PWR_WUSR_WUF3_Pos)
#define PWR_WUSR_WUF3 PWR_WUSR_WUF3_Msk
#define PWR_WUSR_WUF4_Pos (3U)
#define PWR_WUSR_WUF4_Msk (0x1UL << PWR_WUSR_WUF4_Pos)
#define PWR_WUSR_WUF4 PWR_WUSR_WUF4_Msk
#define PWR_WUSR_WUF5_Pos (4U)
#define PWR_WUSR_WUF5_Msk (0x1UL << PWR_WUSR_WUF5_Pos)
#define PWR_WUSR_WUF5 PWR_WUSR_WUF5_Msk

/********************  Bit definition for PWR_WUCR register  ***************/
#define PWR_WUCR_WUPEN1_Pos (0U)
#define PWR_WUCR_WUPEN1_Msk (0x1UL << PWR_WUCR_WUPEN1_Pos)
#define PWR_WUCR_WUPEN1 PWR_WUCR_WUPEN1_Msk
#define PWR_WUCR_WUPEN2_Pos (1U)
#define PWR_WUCR_WUPEN2_Msk (0x1UL << PWR_WUCR_WUPEN2_Pos)
#define PWR_WUCR_WUPEN2 PWR_WUCR_WUPEN2_Msk
#define PWR_WUCR_WUPEN3_Pos (2U)
#define PWR_WUCR_WUPEN3_Msk (0x1UL << PWR_WUCR_WUPEN3_Pos)
#define PWR_WUCR_WUPEN3 PWR_WUCR_WUPEN3_Msk
#define PWR_WUCR_WUPEN4_Pos (3U)
#define PWR_WUCR_WUPEN4_Msk (0x1UL << PWR_WUCR_WUPEN4_Pos)
#define PWR_WUCR_WUPEN4 PWR_WUCR_WUPEN4_Msk
#define PWR_WUCR_WUPEN5_Pos (4U)
#define PWR_WUCR_WUPEN5_Msk (0x1UL << PWR_WUCR_WUPEN5_Pos)
#define PWR_WUCR_WUPEN5 PWR_WUCR_WUPEN5_Msk
#define PWR_WUCR_WUPEN_Pos (0U)
#define PWR_WUCR_WUPEN_Msk (0x1FUL << PWR_WUCR_WUPEN_Pos)
#define PWR_WUCR_WUPEN PWR_WUCR_WUPEN_Msk
#define PWR_WUCR_WUPP1_Pos (8U)
#define PWR_WUCR_WUPP1_Msk (0x1UL << PWR_WUCR_WUPP1_Pos)
#define PWR_WUCR_WUPP1 PWR_WUCR_WUPP1_Msk
#define PWR_WUCR_WUPP2_Pos (9U)
#define PWR_WUCR_WUPP2_Msk (0x1UL << PWR_WUCR_WUPP2_Pos)
#define PWR_WUCR_WUPP2 PWR_WUCR_WUPP2_Msk
#define PWR_WUCR_WUPP3_Pos (10U)
#define PWR_WUCR_WUPP3_Msk (0x1UL << PWR_WUCR_WUPP3_Pos)
#define PWR_WUCR_WUPP3 PWR_WUCR_WUPP3_Msk
#define PWR_WUCR_WUPP4_Pos (11U)
#define PWR_WUCR_WUPP4_Msk (0x1UL << PWR_WUCR_WUPP4_Pos)
#define PWR_WUCR_WUPP4 PWR_WUCR_WUPP4_Msk
#define PWR_WUCR_WUPP5_Pos (12U)
#define PWR_WUCR_WUPP5_Msk (0x1UL << PWR_WUCR_WUPP5_Pos)
#define PWR_WUCR_WUPP5 PWR_WUCR_WUPP5_Msk
#define PWR_WUCR_WUPPUPD1_Pos (16U)
#define PWR_WUCR_WUPPUPD1_Msk (0x3UL << PWR_WUCR_WUPPUPD1_Pos)
#define PWR_WUCR_WUPPUPD1 PWR_WUCR_WUPPUPD1_Msk
#define PWR_WUCR_WUPPUPD1_0 (0x1UL << PWR_WUCR_WUPPUPD1_Pos)
#define PWR_WUCR_WUPPUPD1_1 (0x2UL << PWR_WUCR_WUPPUPD1_Pos)
#define PWR_WUCR_WUPPUPD2_Pos (18U)
#define PWR_WUCR_WUPPUPD2_Msk (0x3UL << PWR_WUCR_WUPPUPD2_Pos)
#define PWR_WUCR_WUPPUPD2 PWR_WUCR_WUPPUPD2_Msk
#define PWR_WUCR_WUPPUPD2_0 (0x1UL << PWR_WUCR_WUPPUPD2_Pos)
#define PWR_WUCR_WUPPUPD2_1 (0x2UL << PWR_WUCR_WUPPUPD2_Pos)
#define PWR_WUCR_WUPPUPD3_Pos (20U)
#define PWR_WUCR_WUPPUPD3_Msk (0x3UL << PWR_WUCR_WUPPUPD3_Pos)
#define PWR_WUCR_WUPPUPD3 PWR_WUCR_WUPPUPD3_Msk
#define PWR_WUCR_WUPPUPD3_0 (0x1UL << PWR_WUCR_WUPPUPD3_Pos)
#define PWR_WUCR_WUPPUPD3_1 (0x2UL << PWR_WUCR_WUPPUPD3_Pos)
#define PWR_WUCR_WUPPUPD4_Pos (22U)
#define PWR_WUCR_WUPPUPD4_Msk (0x3UL << PWR_WUCR_WUPPUPD4_Pos)
#define PWR_WUCR_WUPPUPD4 PWR_WUCR_WUPPUPD4_Msk
#define PWR_WUCR_WUPPUPD4_0 (0x1UL << PWR_WUCR_WUPPUPD4_Pos)
#define PWR_WUCR_WUPPUPD4_1 (0x2UL << PWR_WUCR_WUPPUPD4_Pos)
#define PWR_WUCR_WUPPUPD5_Pos (24U)
#define PWR_WUCR_WUPPUPD5_Msk (0x3UL << PWR_WUCR_WUPPUPD5_Pos)
#define PWR_WUCR_WUPPUPD5 PWR_WUCR_WUPPUPD5_Msk
#define PWR_WUCR_WUPPUPD5_0 (0x1UL << PWR_WUCR_WUPPUPD5_Pos)
#define PWR_WUCR_WUPPUPD5_1 (0x2UL << PWR_WUCR_WUPPUPD5_Pos)

/********************  Bit definition for PWR_IORETR register  ****************/
#define PWR_IORETR_IORETEN_Pos (0U)
#define PWR_IORETR_IORETEN_Msk (0x1UL << PWR_IORETR_IORETEN_Pos)
#define PWR_IORETR_IORETEN PWR_IORETR_IORETEN_Msk
#define PWR_IORETR_JTAGIORETEN_Pos (16U)
#define PWR_IORETR_JTAGIORETEN_Msk (0x1UL << PWR_IORETR_JTAGIORETEN_Pos)
#define PWR_IORETR_JTAGIORETEN PWR_IORETR_JTAGIORETEN_Msk

/********************  Bit definition for PWR_PRIVCFGR register  **************/
#define PWR_PRIVCFGR_PRIV_Pos (1U)
#define PWR_PRIVCFGR_PRIV_Msk (0x1UL << PWR_PRIVCFGR_PRIV_Pos)
#define PWR_PRIVCFGR_PRIV PWR_PRIVCFGR_PRIV_Msk

/******************************************************************************/
/*                                                                            */
/*                      SRAMs configuration controller                        */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for RAMCFG_CR register  ******************/
#define RAMCFG_CR_ECCE_Pos (0U)
#define RAMCFG_CR_ECCE_Msk (0x1UL << RAMCFG_CR_ECCE_Pos) /*!< 0x00000001 */
#define RAMCFG_CR_ECCE RAMCFG_CR_ECCE_Msk                /*!< ECC Enable */
#define RAMCFG_CR_ALE_Pos (4U)
#define RAMCFG_CR_ALE_Msk (0x1UL << RAMCFG_CR_ALE_Pos) /*!< 0x00000010 */
#define RAMCFG_CR_ALE RAMCFG_CR_ALE_Msk /*!< Address Latching Enable */
#define RAMCFG_CR_SRAMER_Pos (8U)
#define RAMCFG_CR_SRAMER_Msk (0x1UL << RAMCFG_CR_SRAMER_Pos) /*!< 0x00000100 */
#define RAMCFG_CR_SRAMER RAMCFG_CR_SRAMER_Msk                /*!< Start Erase */

/*******************  Bit definition for RAMCFG_IER register  *****************/
#define RAMCFG_IER_SEIE_Pos (0U)
#define RAMCFG_IER_SEIE_Msk (0x1UL << RAMCFG_IER_SEIE_Pos) /*!< 0x00000001 */
#define RAMCFG_IER_SEIE \
    RAMCFG_IER_SEIE_Msk /*!< Single Error Interrupt Enable */
#define RAMCFG_IER_DEIE_Pos (1U)
#define RAMCFG_IER_DEIE_Msk (0x1UL << RAMCFG_IER_DEIE_Pos) /*!< 0x00000002 */
#define RAMCFG_IER_DEIE \
    RAMCFG_IER_DEIE_Msk /*!< Double Error Interrupt Enable */
#define RAMCFG_IER_ECCNMI_Pos (3U)
#define RAMCFG_IER_ECCNMI_Msk \
    (0x1UL << RAMCFG_IER_ECCNMI_Pos) /*!< 0x00000008 */
#define RAMCFG_IER_ECCNMI \
    RAMCFG_IER_ECCNMI_Msk /*!< NMI redirection interrupt */

/*******************  Bit definition for RAMCFG_ISR register  *****************/
#define RAMCFG_ISR_SEDC_Pos (0U)
#define RAMCFG_ISR_SEDC_Msk (0x1UL << RAMCFG_ISR_SEDC_Pos) /*!< 0x00000001 */
#define RAMCFG_ISR_SEDC \
    RAMCFG_ISR_SEDC_Msk /*!< Single Error Detected and Corrected flag */
#define RAMCFG_ISR_DED_Pos (1U)
#define RAMCFG_ISR_DED_Msk (0x1UL << RAMCFG_ISR_DED_Pos) /*!< 0x00000002 */
#define RAMCFG_ISR_DED RAMCFG_ISR_DED_Msk /*!< Double Error Detected flag */
#define RAMCFG_ISR_SRAMBUSY_Pos (8U)
#define RAMCFG_ISR_SRAMBUSY_Msk \
    (0x1UL << RAMCFG_ISR_SRAMBUSY_Pos)              /*!< 0x00000100 */
#define RAMCFG_ISR_SRAMBUSY RAMCFG_ISR_SRAMBUSY_Msk /*!< SRAM busy flag */

/*******************  Bit definition for RAMCFG_SEAR register  ****************/
#define RAMCFG_SEAR_ESEA_Pos (0U)
#define RAMCFG_SEAR_ESEA_Msk \
    (0xFFFFFFFFUL << RAMCFG_SEAR_ESEA_Pos)    /*!< 0xFFFFFFFF */
#define RAMCFG_SEAR_ESEA RAMCFG_SEAR_ESEA_Msk /*!< ECC Single Error Address */

/*******************  Bit definition for RAMCFG_DEAR register  ****************/
#define RAMCFG_DEAR_EDEA_Pos (0U)
#define RAMCFG_DEAR_EDEA_Msk \
    (0xFFFFFFFFUL << RAMCFG_DEAR_EDEA_Pos)    /*!< 0xFFFFFFFF */
#define RAMCFG_DEAR_EDEA RAMCFG_DEAR_EDEA_Msk /*!< ECC Double Error Address */

/*******************  Bit definition for RAMCFG_ICR register  *****************/
#define RAMCFG_ICR_CSEDC_Pos (0U)
#define RAMCFG_ICR_CSEDC_Msk (0x1UL << RAMCFG_ICR_CSEDC_Pos) /*!< 0x00000001 */
#define RAMCFG_ICR_CSEDC \
    RAMCFG_ICR_CSEDC_Msk /*!< Clear ECC Single Error Detected and Corrected Flag */
#define RAMCFG_ICR_CDED_Pos (1U)
#define RAMCFG_ICR_CDED_Msk (0x1UL << RAMCFG_ICR_CDED_Pos) /*!< 0x00000002 */
#define RAMCFG_ICR_CDED \
    RAMCFG_ICR_CDED_Msk /*!< Clear ECC Double Error Detected Flag*/

/******************  Bit definition for RAMCFG_WPR1 register  *****************/
#define RAMCFG_WPR1_P0WP_Pos (0U)
#define RAMCFG_WPR1_P0WP_Msk (0x1UL << RAMCFG_WPR1_P0WP_Pos) /*!< 0x00000001 */
#define RAMCFG_WPR1_P0WP RAMCFG_WPR1_P0WP_Msk /*!< Write Protection Page 00 */
#define RAMCFG_WPR1_P1WP_Pos (1U)
#define RAMCFG_WPR1_P1WP_Msk (0x1UL << RAMCFG_WPR1_P1WP_Pos) /*!< 0x00000002 */
#define RAMCFG_WPR1_P1WP RAMCFG_WPR1_P1WP_Msk /*!< Write Protection Page 01 */
#define RAMCFG_WPR1_P2WP_Pos (2U)
#define RAMCFG_WPR1_P2WP_Msk (0x1UL << RAMCFG_WPR1_P2WP_Pos) /*!< 0x00000004 */
#define RAMCFG_WPR1_P2WP RAMCFG_WPR1_P2WP_Msk /*!< Write Protection Page 02 */
#define RAMCFG_WPR1_P3WP_Pos (3U)
#define RAMCFG_WPR1_P3WP_Msk (0x1UL << RAMCFG_WPR1_P3WP_Pos) /*!< 0x00000008 */
#define RAMCFG_WPR1_P3WP RAMCFG_WPR1_P3WP_Msk /*!< Write Protection Page 03 */
#define RAMCFG_WPR1_P4WP_Pos (4U)
#define RAMCFG_WPR1_P4WP_Msk (0x1UL << RAMCFG_WPR1_P4WP_Pos) /*!< 0x00000010 */
#define RAMCFG_WPR1_P4WP RAMCFG_WPR1_P4WP_Msk /*!< Write Protection Page 04 */
#define RAMCFG_WPR1_P5WP_Pos (5U)
#define RAMCFG_WPR1_P5WP_Msk (0x1UL << RAMCFG_WPR1_P5WP_Pos) /*!< 0x00000020 */
#define RAMCFG_WPR1_P5WP RAMCFG_WPR1_P5WP_Msk /*!< Write Protection Page 05 */
#define RAMCFG_WPR1_P6WP_Pos (6U)
#define RAMCFG_WPR1_P6WP_Msk (0x1UL << RAMCFG_WPR1_P6WP_Pos) /*!< 0x00000040 */
#define RAMCFG_WPR1_P6WP RAMCFG_WPR1_P6WP_Msk /*!< Write Protection Page 06 */
#define RAMCFG_WPR1_P7WP_Pos (7U)
#define RAMCFG_WPR1_P7WP_Msk (0x1UL << RAMCFG_WPR1_P7WP_Pos) /*!< 0x00000080 */
#define RAMCFG_WPR1_P7WP RAMCFG_WPR1_P7WP_Msk /*!< Write Protection Page 07 */
#define RAMCFG_WPR1_P8WP_Pos (8U)
#define RAMCFG_WPR1_P8WP_Msk (0x1UL << RAMCFG_WPR1_P8WP_Pos) /*!< 0x00000100 */
#define RAMCFG_WPR1_P8WP RAMCFG_WPR1_P8WP_Msk /*!< Write Protection Page 08 */
#define RAMCFG_WPR1_P9WP_Pos (9U)
#define RAMCFG_WPR1_P9WP_Msk (0x1UL << RAMCFG_WPR1_P9WP_Pos) /*!< 0x00000200 */
#define RAMCFG_WPR1_P9WP RAMCFG_WPR1_P9WP_Msk /*!< Write Protection Page 09 */
#define RAMCFG_WPR1_P10WP_Pos (10U)
#define RAMCFG_WPR1_P10WP_Msk \
    (0x1UL << RAMCFG_WPR1_P10WP_Pos)            /*!< 0x00000400 */
#define RAMCFG_WPR1_P10WP RAMCFG_WPR1_P10WP_Msk /*!< Write Protection Page 10 */
#define RAMCFG_WPR1_P11WP_Pos (11U)
#define RAMCFG_WPR1_P11WP_Msk \
    (0x1UL << RAMCFG_WPR1_P11WP_Pos)            /*!< 0x00000800 */
#define RAMCFG_WPR1_P11WP RAMCFG_WPR1_P11WP_Msk /*!< Write Protection Page 11 */
#define RAMCFG_WPR1_P12WP_Pos (12U)
#define RAMCFG_WPR1_P12WP_Msk \
    (0x1UL << RAMCFG_WPR1_P12WP_Pos)            /*!< 0x00001000 */
#define RAMCFG_WPR1_P12WP RAMCFG_WPR1_P12WP_Msk /*!< Write Protection Page 12 */
#define RAMCFG_WPR1_P13WP_Pos (13U)
#define RAMCFG_WPR1_P13WP_Msk \
    (0x1UL << RAMCFG_WPR1_P13WP_Pos)            /*!< 0x00002000 */
#define RAMCFG_WPR1_P13WP RAMCFG_WPR1_P13WP_Msk /*!< Write Protection Page 13 */
#define RAMCFG_WPR1_P14WP_Pos (14U)
#define RAMCFG_WPR1_P14WP_Msk \
    (0x1UL << RAMCFG_WPR1_P14WP_Pos)            /*!< 0x00004000 */
#define RAMCFG_WPR1_P14WP RAMCFG_WPR1_P14WP_Msk /*!< Write Protection Page 14 */
#define RAMCFG_WPR1_P15WP_Pos (15U)
#define RAMCFG_WPR1_P15WP_Msk \
    (0x1UL << RAMCFG_WPR1_P15WP_Pos)            /*!< 0x00008000 */
#define RAMCFG_WPR1_P15WP RAMCFG_WPR1_P15WP_Msk /*!< Write Protection Page 15 */
#define RAMCFG_WPR1_P16WP_Pos (16U)
#define RAMCFG_WPR1_P16WP_Msk \
    (0x1UL << RAMCFG_WPR1_P16WP_Pos)            /*!< 0x00010000 */
#define RAMCFG_WPR1_P16WP RAMCFG_WPR1_P16WP_Msk /*!< Write Protection Page 16 */

/*****************  Bit definition for RAMCFG_ECCKEYR register  ***************/
#define RAMCFG_ECCKEYR_ECCKEY_Pos (0U)
#define RAMCFG_ECCKEYR_ECCKEY_Msk \
    (0xFFUL << RAMCFG_ECCKEYR_ECCKEY_Pos) /*!< 0x000000FF */
#define RAMCFG_ECCKEYR_ECCKEY \
    RAMCFG_ECCKEYR_ECCKEY_Msk /*!< ECC Write Protection Key */

/*****************  Bit definition for RAMCFG_ERKEYR register  ****************/
#define RAMCFG_ERKEYR_ERASEKEY_Pos (0U)
#define RAMCFG_ERKEYR_ERASEKEY_Msk \
    (0xFFUL << RAMCFG_ERKEYR_ERASEKEY_Pos) /*!< 0x000000FF */
#define RAMCFG_ERKEYR_ERASEKEY \
    RAMCFG_ERKEYR_ERASEKEY_Msk /*!< Erase Write Protection Key */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSION_Pos (0U)
#define RCC_CR_HSION_Msk (0x1UL << RCC_CR_HSION_Pos) /*!< 0x00000001 */
#define RCC_CR_HSION \
    RCC_CR_HSION_Msk /*!< Internal High Speed oscillator (HSI) clock enable */
#define RCC_CR_HSIRDY_Pos (1U)
#define RCC_CR_HSIRDY_Msk (0x1UL << RCC_CR_HSIRDY_Pos) /*!< 0x00000002 */
#define RCC_CR_HSIRDY \
    RCC_CR_HSIRDY_Msk /*!< Internal High Speed oscillator (HSI) clock ready flag */
#define RCC_CR_HSIKERON_Pos (2U)
#define RCC_CR_HSIKERON_Msk (0x1UL << RCC_CR_HSIKERON_Pos) /*!< 0x00000004 */
#define RCC_CR_HSIKERON \
    RCC_CR_HSIKERON_Msk /*!< Internal High Speed oscillator (HSI) clock enable for some IPs Kernel */
#define RCC_CR_HSIDIV_Pos (3U)
#define RCC_CR_HSIDIV_Msk (0x3UL << RCC_CR_HSIDIV_Pos) /*!< 0x00000018 */
#define RCC_CR_HSIDIV \
    RCC_CR_HSIDIV_Msk /*!< Internal High Speed clock divider selection */
#define RCC_CR_HSIDIV_0 (0x1UL << RCC_CR_HSIDIV_Pos) /*!< 0x00000008 */
#define RCC_CR_HSIDIV_1 (0x2UL << RCC_CR_HSIDIV_Pos) /*!< 0x00000010 */
#define RCC_CR_HSIDIVF_Pos (5U)
#define RCC_CR_HSIDIVF_Msk (0x1UL << RCC_CR_HSIDIVF_Pos) /*!< 0x00000020 */
#define RCC_CR_HSIDIVF RCC_CR_HSIDIVF_Msk /*!< HSI Divider flag */
#define RCC_CR_CSION_Pos (8U)
#define RCC_CR_CSION_Msk (0x1UL << RCC_CR_CSION_Pos) /*!< 0x00000100 */
#define RCC_CR_CSION \
    RCC_CR_CSION_Msk /*!< The Internal RC 4MHz oscillator (CSI) clock enable */
#define RCC_CR_CSIRDY_Pos (9U)
#define RCC_CR_CSIRDY_Msk (0x1UL << RCC_CR_CSIRDY_Pos) /*!< 0x00000200 */
#define RCC_CR_CSIRDY \
    RCC_CR_CSIRDY_Msk /*!< The Internal RC 4MHz oscillator (CSI) clock ready */
#define RCC_CR_CSIKERON_Pos (10U)
#define RCC_CR_CSIKERON_Msk (0x1UL << RCC_CR_CSIKERON_Pos) /*!< 0x00000400 */
#define RCC_CR_CSIKERON \
    RCC_CR_CSIKERON_Msk /*!< The Internal RC 4MHz oscillator (CSI) clock enable for some IPs Kernel */
#define RCC_CR_HSI48ON_Pos (12U)
#define RCC_CR_HSI48ON_Msk (0x1UL << RCC_CR_HSI48ON_Pos) /*!< 0x00001000 */
#define RCC_CR_HSI48ON RCC_CR_HSI48ON_Msk /*!< HSI48 clock enable */
#define RCC_CR_HSI48RDY_Pos (13U)
#define RCC_CR_HSI48RDY_Msk (0x1UL << RCC_CR_HSI48RDY_Pos) /*!< 0x00002000 */
#define RCC_CR_HSI48RDY RCC_CR_HSI48RDY_Msk /*!< HSI48 clock ready */
#define RCC_CR_HSEON_Pos (16U)
#define RCC_CR_HSEON_Msk (0x1UL << RCC_CR_HSEON_Pos) /*!< 0x00010000 */
#define RCC_CR_HSEON \
    RCC_CR_HSEON_Msk /*!< External High Speed oscillator (HSE) clock enable */
#define RCC_CR_HSERDY_Pos (17U)
#define RCC_CR_HSERDY_Msk (0x1UL << RCC_CR_HSERDY_Pos) /*!< 0x00020000 */
#define RCC_CR_HSERDY \
    RCC_CR_HSERDY_Msk /*!< External High Speed oscillator (HSE) clock ready */
#define RCC_CR_HSEBYP_Pos (18U)
#define RCC_CR_HSEBYP_Msk (0x1UL << RCC_CR_HSEBYP_Pos) /*!< 0x00040000 */
#define RCC_CR_HSEBYP \
    RCC_CR_HSEBYP_Msk /*!< External High Speed oscillator (HSE) clock bypass */
#define RCC_CR_HSECSSON_Pos (19U)
#define RCC_CR_HSECSSON_Msk (0x1UL << RCC_CR_HSECSSON_Pos) /*!< 0x00080000 */
#define RCC_CR_HSECSSON \
    RCC_CR_HSECSSON_Msk /*!< HSE Clock Security System enable */
#define RCC_CR_HSEEXT_Pos (20U)
#define RCC_CR_HSEEXT_Msk (0x1UL << RCC_CR_HSEEXT_Pos) /*!< 0x00100000 */
#define RCC_CR_HSEEXT \
    RCC_CR_HSEEXT_Msk /*!< External High Speed clock type in Bypass mode */
#define RCC_CR_PLL1ON_Pos (24U)
#define RCC_CR_PLL1ON_Msk (0x1UL << RCC_CR_PLL1ON_Pos) /*!< 0x01000000 */
#define RCC_CR_PLL1ON RCC_CR_PLL1ON_Msk /*!< System PLL clock enable */
#define RCC_CR_PLL1RDY_Pos (25U)
#define RCC_CR_PLL1RDY_Msk (0x1UL << RCC_CR_PLL1RDY_Pos) /*!< 0x02000000 */
#define RCC_CR_PLL1RDY RCC_CR_PLL1RDY_Msk /*!< System PLL clock ready */
#define RCC_CR_PLL2ON_Pos (26U)
#define RCC_CR_PLL2ON_Msk (0x1UL << RCC_CR_PLL2ON_Pos) /*!< 0x04000000 */
#define RCC_CR_PLL2ON RCC_CR_PLL2ON_Msk                /*!< PLL2 enable */
#define RCC_CR_PLL2RDY_Pos (27U)
#define RCC_CR_PLL2RDY_Msk (0x1UL << RCC_CR_PLL2RDY_Pos) /*!< 0x08000000 */
#define RCC_CR_PLL2RDY RCC_CR_PLL2RDY_Msk                /*!< PLL2 ready */

/********************  Bit definition for RCC_HSICFGR register  ***************/
/*!< HSICAL configuration */
#define RCC_HSICFGR_HSICAL_Pos (0U)
#define RCC_HSICFGR_HSICAL_Msk \
    (0xFFFUL << RCC_HSICFGR_HSICAL_Pos)           /*!< 0x00000FFF */
#define RCC_HSICFGR_HSICAL RCC_HSICFGR_HSICAL_Msk /*!< HSICAL[11:0] bits */
#define RCC_HSICFGR_HSICAL_0 \
    (0x01UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000001 */
#define RCC_HSICFGR_HSICAL_1 \
    (0x02UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000002 */
#define RCC_HSICFGR_HSICAL_2 \
    (0x04UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000004 */
#define RCC_HSICFGR_HSICAL_3 \
    (0x08UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000008 */
#define RCC_HSICFGR_HSICAL_4 \
    (0x10UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000010 */
#define RCC_HSICFGR_HSICAL_5 \
    (0x20UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000020 */
#define RCC_HSICFGR_HSICAL_6 \
    (0x40UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000040 */
#define RCC_HSICFGR_HSICAL_7 \
    (0x80UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000080 */
#define RCC_HSICFGR_HSICAL_8 \
    (0x100UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000100 */
#define RCC_HSICFGR_HSICAL_9 \
    (0x200UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000200 */
#define RCC_HSICFGR_HSICAL_10 \
    (0x400UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000400 */
#define RCC_HSICFGR_HSICAL_11 \
    (0x800UL << RCC_HSICFGR_HSICAL_Pos) /*!< 0x00000800 */

/*!< HSITRIM configuration */
#define RCC_HSICFGR_HSITRIM_Pos (16U)
#define RCC_HSICFGR_HSITRIM_Msk \
    (0x7FUL << RCC_HSICFGR_HSITRIM_Pos)             /*!< 0x007F0000 */
#define RCC_HSICFGR_HSITRIM RCC_HSICFGR_HSITRIM_Msk /*!< HSITRIM[6:0] bits */
#define RCC_HSICFGR_HSITRIM_0 \
    (0x01UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00010000 */
#define RCC_HSICFGR_HSITRIM_1 \
    (0x02UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00020000 */
#define RCC_HSICFGR_HSITRIM_2 \
    (0x04UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00040000 */
#define RCC_HSICFGR_HSITRIM_3 \
    (0x08UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00080000 */
#define RCC_HSICFGR_HSITRIM_4 \
    (0x10UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00100000 */
#define RCC_HSICFGR_HSITRIM_5 \
    (0x20UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00200000 */
#define RCC_HSICFGR_HSITRIM_6 \
    (0x40UL << RCC_HSICFGR_HSITRIM_Pos) /*!< 0x00400000 */

/********************  Bit definition for RCC_CRRCR register  *****************/
/*!< HSI48CAL configuration */
#define RCC_CRRCR_HSI48CAL_Pos (0U)
#define RCC_CRRCR_HSI48CAL_Msk \
    (0x3FFUL << RCC_CRRCR_HSI48CAL_Pos)           /*!< 0x000003FF */
#define RCC_CRRCR_HSI48CAL RCC_CRRCR_HSI48CAL_Msk /*!< HSI48CAL[8:0] bits */
#define RCC_CRRCR_HSI48CAL_0 \
    (0x001UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000001 */
#define RCC_CRRCR_HSI48CAL_1 \
    (0x002UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000002 */
#define RCC_CRRCR_HSI48CAL_2 \
    (0x004UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000004 */
#define RCC_CRRCR_HSI48CAL_3 \
    (0x008UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000008 */
#define RCC_CRRCR_HSI48CAL_4 \
    (0x010UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000010 */
#define RCC_CRRCR_HSI48CAL_5 \
    (0x020UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000020 */
#define RCC_CRRCR_HSI48CAL_6 \
    (0x040UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000040 */
#define RCC_CRRCR_HSI48CAL_7 \
    (0x080UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000080 */
#define RCC_CRRCR_HSI48CAL_8 \
    (0x100UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000100 */
#define RCC_CRRCR_HSI48CAL_9 \
    (0x200UL << RCC_CRRCR_HSI48CAL_Pos) /*!< 0x00000200 */

/********************  Bit definition for RCC_CSICFGR register  ***************/
/*!< CSICAL configuration */
#define RCC_CSICFGR_CSICAL_Pos (0U)
#define RCC_CSICFGR_CSICAL_Msk \
    (0xFFUL << RCC_CSICFGR_CSICAL_Pos)            /*!< 0x000000FF */
#define RCC_CSICFGR_CSICAL RCC_CSICFGR_CSICAL_Msk /*!< CSICAL[7:0] bits */
#define RCC_CSICFGR_CSICAL_0 \
    (0x01UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000001 */
#define RCC_CSICFGR_CSICAL_1 \
    (0x02UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000002 */
#define RCC_CSICFGR_CSICAL_2 \
    (0x04UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000004 */
#define RCC_CSICFGR_CSICAL_3 \
    (0x08UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000008 */
#define RCC_CSICFGR_CSICAL_4 \
    (0x10UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000010 */
#define RCC_CSICFGR_CSICAL_5 \
    (0x20UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000020 */
#define RCC_CSICFGR_CSICAL_6 \
    (0x40UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000040 */
#define RCC_CSICFGR_CSICAL_7 \
    (0x80UL << RCC_CSICFGR_CSICAL_Pos) /*!< 0x00000080 */

/*!< CSITRIM configuration */
#define RCC_CSICFGR_CSITRIM_Pos (16U)
#define RCC_CSICFGR_CSITRIM_Msk \
    (0x3FUL << RCC_CSICFGR_CSITRIM_Pos)             /*!< 0x003F0000 */
#define RCC_CSICFGR_CSITRIM RCC_CSICFGR_CSITRIM_Msk /*!< CSITRIM[5:0] bits */
#define RCC_CSICFGR_CSITRIM_0 \
    (0x01UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00010000 */
#define RCC_CSICFGR_CSITRIM_1 \
    (0x02UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00020000 */
#define RCC_CSICFGR_CSITRIM_2 \
    (0x04UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00040000 */
#define RCC_CSICFGR_CSITRIM_3 \
    (0x08UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00080000 */
#define RCC_CSICFGR_CSITRIM_4 \
    (0x10UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00100000 */
#define RCC_CSICFGR_CSITRIM_5 \
    (0x20UL << RCC_CSICFGR_CSITRIM_Pos) /*!< 0x00200000 */

/********************  Bit definition for RCC_CFGR1 register  ******************/
/*!< SW configuration */
#define RCC_CFGR1_SW_Pos (0U)
#define RCC_CFGR1_SW_Msk (0x3UL << RCC_CFGR1_SW_Pos) /*!< 0x00000003 */
#define RCC_CFGR1_SW RCC_CFGR1_SW_Msk /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR1_SW_0 (0x1UL << RCC_CFGR1_SW_Pos) /*!< 0x00000001 */
#define RCC_CFGR1_SW_1 (0x2UL << RCC_CFGR1_SW_Pos) /*!< 0x00000002 */

/*!< SWS configuration */
#define RCC_CFGR1_SWS_Pos (3U)
#define RCC_CFGR1_SWS_Msk (0x3UL << RCC_CFGR1_SWS_Pos) /*!< 0x00000018 */
#define RCC_CFGR1_SWS \
    RCC_CFGR1_SWS_Msk /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR1_SWS_0 (0x1UL << RCC_CFGR1_SWS_Pos) /*!< 0x00000008 */
#define RCC_CFGR1_SWS_1 (0x2UL << RCC_CFGR1_SWS_Pos) /*!< 0x00000010 */

#define RCC_CFGR1_STOPWUCK_Pos (6U)
#define RCC_CFGR1_STOPWUCK_Msk \
    (0x1UL << RCC_CFGR1_STOPWUCK_Pos) /*!< 0x00000040 */
#define RCC_CFGR1_STOPWUCK \
    RCC_CFGR1_STOPWUCK_Msk /*!< Wake Up from stop and HSE CSS backup clock selection */
#define RCC_CFGR1_STOPKERWUCK_Pos (7U)
#define RCC_CFGR1_STOPKERWUCK_Msk \
    (0x1UL << RCC_CFGR1_STOPKERWUCK_Pos) /*!< 0x00000080 */
#define RCC_CFGR1_STOPKERWUCK \
    RCC_CFGR1_STOPKERWUCK_Msk /*!< Kernel Clock Selection after a Wake Up from STOP */

/*!< RTCPRE configuration */
#define RCC_CFGR1_RTCPRE_Pos (8U)
#define RCC_CFGR1_RTCPRE_Msk (0x3FUL << RCC_CFGR1_RTCPRE_Pos) /*!< 0x00003F00 */
#define RCC_CFGR1_RTCPRE \
    RCC_CFGR1_RTCPRE_Msk /*!< HSE division factor for RTC Clock */
#define RCC_CFGR1_RTCPRE_0 (0x1UL << RCC_CFGR1_RTCPRE_Pos)  /*!< 0x00000100 */
#define RCC_CFGR1_RTCPRE_1 (0x2UL << RCC_CFGR1_RTCPRE_Pos)  /*!< 0x00000200 */
#define RCC_CFGR1_RTCPRE_2 (0x4UL << RCC_CFGR1_RTCPRE_Pos)  /*!< 0x00000400 */
#define RCC_CFGR1_RTCPRE_3 (0x8UL << RCC_CFGR1_RTCPRE_Pos)  /*!< 0x00000800 */
#define RCC_CFGR1_RTCPRE_4 (0x10UL << RCC_CFGR1_RTCPRE_Pos) /*!< 0x00001000 */
#define RCC_CFGR1_RTCPRE_5 (0x20UL << RCC_CFGR1_RTCPRE_Pos) /*!< 0x00002000 */

/*!< TIMPRE configuration */
#define RCC_CFGR1_TIMPRE_Pos (15U)
#define RCC_CFGR1_TIMPRE_Msk (0x1UL << RCC_CFGR1_TIMPRE_Pos)
#define RCC_CFGR1_TIMPRE RCC_CFGR1_TIMPRE_Msk /*!< 0x00008000 */

/*!< MCO1 configuration */
#define RCC_CFGR1_MCO1PRE_Pos (18U)
#define RCC_CFGR1_MCO1PRE_Msk (0xFUL << RCC_CFGR1_MCO1PRE_Pos)
#define RCC_CFGR1_MCO1PRE RCC_CFGR1_MCO1PRE_Msk              /*!< 0x003C0000 */
#define RCC_CFGR1_MCO1PRE_0 (0x1UL << RCC_CFGR1_MCO1PRE_Pos) /*!< 0x00040000 */
#define RCC_CFGR1_MCO1PRE_1 (0x2UL << RCC_CFGR1_MCO1PRE_Pos) /*!< 0x00080000 */
#define RCC_CFGR1_MCO1PRE_2 (0x4UL << RCC_CFGR1_MCO1PRE_Pos) /*!< 0x00100000 */
#define RCC_CFGR1_MCO1PRE_3 (0x8UL << RCC_CFGR1_MCO1PRE_Pos) /*!< 0x00200000 */

#define RCC_CFGR1_MCO1SEL_Pos (22U)
#define RCC_CFGR1_MCO1SEL_Msk (0x7UL << RCC_CFGR1_MCO1SEL_Pos)
#define RCC_CFGR1_MCO1SEL RCC_CFGR1_MCO1SEL_Msk              /*!< 0x01C00000 */
#define RCC_CFGR1_MCO1SEL_0 (0x1UL << RCC_CFGR1_MCO1SEL_Pos) /*!< 0x00400000 */
#define RCC_CFGR1_MCO1SEL_1 (0x2UL << RCC_CFGR1_MCO1SEL_Pos) /*!< 0x00800000 */
#define RCC_CFGR1_MCO1SEL_2 (0x4UL << RCC_CFGR1_MCO1SEL_Pos) /*!< 0x01000000 */

/*!< MCO2 configuration */
#define RCC_CFGR1_MCO2PRE_Pos (25U)
#define RCC_CFGR1_MCO2PRE_Msk (0xFUL << RCC_CFGR1_MCO2PRE_Pos)
#define RCC_CFGR1_MCO2PRE RCC_CFGR1_MCO2PRE_Msk              /*!< 0x1E000000 */
#define RCC_CFGR1_MCO2PRE_0 (0x1UL << RCC_CFGR1_MCO2PRE_Pos) /*!< 0x02000000 */
#define RCC_CFGR1_MCO2PRE_1 (0x2UL << RCC_CFGR1_MCO2PRE_Pos) /*!< 0x04000000 */
#define RCC_CFGR1_MCO2PRE_2 (0x4UL << RCC_CFGR1_MCO2PRE_Pos) /*!< 0x08000000 */
#define RCC_CFGR1_MCO2PRE_3 (0x8UL << RCC_CFGR1_MCO2PRE_Pos) /*!< 0x10000000 */

#define RCC_CFGR1_MCO2SEL_Pos (29U)
#define RCC_CFGR1_MCO2SEL_Msk (0x7UL << RCC_CFGR1_MCO2SEL_Pos)
#define RCC_CFGR1_MCO2SEL RCC_CFGR1_MCO2SEL_Msk              /*!< 0xE0000000 */
#define RCC_CFGR1_MCO2SEL_0 (0x1UL << RCC_CFGR1_MCO2SEL_Pos) /*!< 0x20000000 */
#define RCC_CFGR1_MCO2SEL_1 (0x2UL << RCC_CFGR1_MCO2SEL_Pos) /*!< 0x40000000 */
#define RCC_CFGR1_MCO2SEL_2 (0x4UL << RCC_CFGR1_MCO2SEL_Pos) /*!< 0x80000000 */

/********************  Bit definition for RCC_CFGR2 register  ******************/
/*!< HPRE configuration */
#define RCC_CFGR2_HPRE_Pos (0U)
#define RCC_CFGR2_HPRE_Msk (0xFUL << RCC_CFGR2_HPRE_Pos) /*!< 0x0000000F */
#define RCC_CFGR2_HPRE RCC_CFGR2_HPRE_Msk /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR2_HPRE_0 (0x1UL << RCC_CFGR2_HPRE_Pos) /*!< 0x00000001 */
#define RCC_CFGR2_HPRE_1 (0x2UL << RCC_CFGR2_HPRE_Pos) /*!< 0x00000002 */
#define RCC_CFGR2_HPRE_2 (0x4UL << RCC_CFGR2_HPRE_Pos) /*!< 0x00000004 */
#define RCC_CFGR2_HPRE_3 (0x8UL << RCC_CFGR2_HPRE_Pos) /*!< 0x00000008 */

/*!< PPRE1 configuration */
#define RCC_CFGR2_PPRE1_Pos (4U)
#define RCC_CFGR2_PPRE1_Msk (0x7UL << RCC_CFGR2_PPRE1_Pos) /*!< 0x00000070 */
#define RCC_CFGR2_PPRE1 \
    RCC_CFGR2_PPRE1_Msk /*!< PPRE1[2:0] bits (APB1 prescaler) */
#define RCC_CFGR2_PPRE1_0 (0x1UL << RCC_CFGR2_PPRE1_Pos) /*!< 0x00000010 */
#define RCC_CFGR2_PPRE1_1 (0x2UL << RCC_CFGR2_PPRE1_Pos) /*!< 0x00000020 */
#define RCC_CFGR2_PPRE1_2 (0x4UL << RCC_CFGR2_PPRE1_Pos) /*!< 0x00000040 */

/*!< PPRE2 configuration */
#define RCC_CFGR2_PPRE2_Pos (8U)
#define RCC_CFGR2_PPRE2_Msk (0x7UL << RCC_CFGR2_PPRE2_Pos) /*!< 0x00000700 */
#define RCC_CFGR2_PPRE2 \
    RCC_CFGR2_PPRE2_Msk /*!< PPRE2[2:0] bits (APB2 prescaler) */
#define RCC_CFGR2_PPRE2_0 (0x1UL << RCC_CFGR2_PPRE2_Pos) /*!< 0x00000100 */
#define RCC_CFGR2_PPRE2_1 (0x2UL << RCC_CFGR2_PPRE2_Pos) /*!< 0x00000200 */
#define RCC_CFGR2_PPRE2_2 (0x4UL << RCC_CFGR2_PPRE2_Pos) /*!< 0x00000400 */

/*!< PPRE3 configuration */
#define RCC_CFGR2_PPRE3_Pos (12U)
#define RCC_CFGR2_PPRE3_Msk (0x7UL << RCC_CFGR2_PPRE3_Pos) /*!< 0x00007000 */
#define RCC_CFGR2_PPRE3 \
    RCC_CFGR2_PPRE3_Msk /*!< PPRE3[2:0] bits (APB3 prescaler) */
#define RCC_CFGR2_PPRE3_0 (0x1UL << RCC_CFGR2_PPRE3_Pos) /*!< 0x00001000 */
#define RCC_CFGR2_PPRE3_1 (0x2UL << RCC_CFGR2_PPRE3_Pos) /*!< 0x00002000 */
#define RCC_CFGR2_PPRE3_2 (0x4UL << RCC_CFGR2_PPRE3_Pos) /*!< 0x00004000 */

#define RCC_CFGR2_AHB1DIS_Pos (16U)
#define RCC_CFGR2_AHB1DIS_Msk \
    (0x1UL << RCC_CFGR2_AHB1DIS_Pos)            /*!< 0x00010000 */
#define RCC_CFGR2_AHB1DIS RCC_CFGR2_AHB1DIS_Msk /*!< AHB1 clock disable */
#define RCC_CFGR2_AHB2DIS_Pos (17U)
#define RCC_CFGR2_AHB2DIS_Msk \
    (0x1UL << RCC_CFGR2_AHB2DIS_Pos)            /*!< 0x00020000 */
#define RCC_CFGR2_AHB2DIS RCC_CFGR2_AHB2DIS_Msk /*!< AHB2 clock disable */
#define RCC_CFGR2_APB1DIS_Pos (20U)
#define RCC_CFGR2_APB1DIS_Msk \
    (0x1UL << RCC_CFGR2_APB1DIS_Pos)            /*!< 0x00100000 */
#define RCC_CFGR2_APB1DIS RCC_CFGR2_APB1DIS_Msk /*!< APB1 clock disable */
#define RCC_CFGR2_APB2DIS_Pos (21U)
#define RCC_CFGR2_APB2DIS_Msk \
    (0x1UL << RCC_CFGR2_APB2DIS_Pos)            /*!< 0x00200000 */
#define RCC_CFGR2_APB2DIS RCC_CFGR2_APB2DIS_Msk /*!< APB2 clock disable */
#define RCC_CFGR2_APB3DIS_Pos (22U)
#define RCC_CFGR2_APB3DIS_Msk \
    (0x1UL << RCC_CFGR2_APB3DIS_Pos)            /*!< 0x00400000 */
#define RCC_CFGR2_APB3DIS RCC_CFGR2_APB3DIS_Msk /*!< APB3 clock disable */

/********************  Bit definition for RCC_PLL1CFGR register  ***************/
#define RCC_PLL1CFGR_PLL1SRC_Pos (0U)
#define RCC_PLL1CFGR_PLL1SRC_Msk \
    (0x3UL << RCC_PLL1CFGR_PLL1SRC_Pos) /*!< 0x00000003 */
#define RCC_PLL1CFGR_PLL1SRC RCC_PLL1CFGR_PLL1SRC_Msk
#define RCC_PLL1CFGR_PLL1SRC_0 \
    (0x1UL << RCC_PLL1CFGR_PLL1SRC_Pos) /*!< 0x00000001 */
#define RCC_PLL1CFGR_PLL1SRC_1 \
    (0x2UL << RCC_PLL1CFGR_PLL1SRC_Pos) /*!< 0x00000002 */
#define RCC_PLL1CFGR_PLL1RGE_Pos (2U)
#define RCC_PLL1CFGR_PLL1RGE_Msk \
    (0x3UL << RCC_PLL1CFGR_PLL1RGE_Pos) /*!< 0x0000000C */
#define RCC_PLL1CFGR_PLL1RGE RCC_PLL1CFGR_PLL1RGE_Msk
#define RCC_PLL1CFGR_PLL1RGE_0 \
    (0x1UL << RCC_PLL1CFGR_PLL1RGE_Pos) /*!< 0x00000004 */
#define RCC_PLL1CFGR_PLL1RGE_1 \
    (0x2UL << RCC_PLL1CFGR_PLL1RGE_Pos) /*!< 0x00000008 */
#define RCC_PLL1CFGR_PLL1FRACEN_Pos (4U)
#define RCC_PLL1CFGR_PLL1FRACEN_Msk \
    (0x1UL << RCC_PLL1CFGR_PLL1FRACEN_Pos) /*!< 0x00000010 */
#define RCC_PLL1CFGR_PLL1FRACEN RCC_PLL1CFGR_PLL1FRACEN_Msk
#define RCC_PLL1CFGR_PLL1VCOSEL_Pos (5U)
#define RCC_PLL1CFGR_PLL1VCOSEL_Msk \
    (0x1UL << RCC_PLL1CFGR_PLL1VCOSEL_Pos) /*!< 0x00000020 */
#define RCC_PLL1CFGR_PLL1VCOSEL RCC_PLL1CFGR_PLL1VCOSEL_Msk
#define RCC_PLL1CFGR_PLL1M_Pos (8U)
#define RCC_PLL1CFGR_PLL1M_Msk \
    (0x3FUL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00003F00 */
#define RCC_PLL1CFGR_PLL1M RCC_PLL1CFGR_PLL1M_Msk
#define RCC_PLL1CFGR_PLL1M_0 \
    (0x01UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00000100 */
#define RCC_PLL1CFGR_PLL1M_1 \
    (0x02UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00000200 */
#define RCC_PLL1CFGR_PLL1M_2 \
    (0x04UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00000400 */
#define RCC_PLL1CFGR_PLL1M_3 \
    (0x08UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00000800 */
#define RCC_PLL1CFGR_PLL1M_4 \
    (0x10UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00001000 */
#define RCC_PLL1CFGR_PLL1M_5 \
    (0x20UL << RCC_PLL1CFGR_PLL1M_Pos) /*!< 0x00002000 */
#define RCC_PLL1CFGR_PLL1PEN_Pos (16U)
#define RCC_PLL1CFGR_PLL1PEN_Msk \
    (0x1UL << RCC_PLL1CFGR_PLL1PEN_Pos) /*!< 0x00010000 */
#define RCC_PLL1CFGR_PLL1PEN RCC_PLL1CFGR_PLL1PEN_Msk
#define RCC_PLL1CFGR_PLL1QEN_Pos (17U)
#define RCC_PLL1CFGR_PLL1QEN_Msk \
    (0x1UL << RCC_PLL1CFGR_PLL1QEN_Pos) /*!< 0x00020000 */
#define RCC_PLL1CFGR_PLL1QEN RCC_PLL1CFGR_PLL1QEN_Msk
#define RCC_PLL1CFGR_PLL1REN_Pos (18U)
#define RCC_PLL1CFGR_PLL1REN_Msk \
    (0x1UL << RCC_PLL1CFGR_PLL1REN_Pos) /*!< 0x00040000 */
#define RCC_PLL1CFGR_PLL1REN RCC_PLL1CFGR_PLL1REN_Msk

/********************  Bit definition for RCC_PLL2CFGR register  ***************/
#define RCC_PLL2CFGR_PLL2SRC_Pos (0U)
#define RCC_PLL2CFGR_PLL2SRC_Msk \
    (0x3UL << RCC_PLL2CFGR_PLL2SRC_Pos) /*!< 0x00000003 */
#define RCC_PLL2CFGR_PLL2SRC RCC_PLL2CFGR_PLL2SRC_Msk
#define RCC_PLL2CFGR_PLL2SRC_0 \
    (0x1UL << RCC_PLL2CFGR_PLL2SRC_Pos) /*!< 0x00000001 */
#define RCC_PLL2CFGR_PLL2SRC_1 \
    (0x2UL << RCC_PLL2CFGR_PLL2SRC_Pos) /*!< 0x00000002 */
#define RCC_PLL2CFGR_PLL2RGE_Pos (2U)
#define RCC_PLL2CFGR_PLL2RGE_Msk \
    (0x3UL << RCC_PLL2CFGR_PLL2RGE_Pos) /*!< 0x0000000C */
#define RCC_PLL2CFGR_PLL2RGE RCC_PLL2CFGR_PLL2RGE_Msk
#define RCC_PLL2CFGR_PLL2RGE_0 \
    (0x1UL << RCC_PLL2CFGR_PLL2RGE_Pos) /*!< 0x00000004 */
#define RCC_PLL2CFGR_PLL2RGE_1 \
    (0x2UL << RCC_PLL2CFGR_PLL2RGE_Pos) /*!< 0x00000008 */
#define RCC_PLL2CFGR_PLL2FRACEN_Pos (4U)
#define RCC_PLL2CFGR_PLL2FRACEN_Msk \
    (0x1UL << RCC_PLL2CFGR_PLL2FRACEN_Pos) /*!< 0x00000010 */
#define RCC_PLL2CFGR_PLL2FRACEN RCC_PLL2CFGR_PLL2FRACEN_Msk
#define RCC_PLL2CFGR_PLL2VCOSEL_Pos (5U)
#define RCC_PLL2CFGR_PLL2VCOSEL_Msk \
    (0x1UL << RCC_PLL2CFGR_PLL2VCOSEL_Pos) /*!< 0x00000020 */
#define RCC_PLL2CFGR_PLL2VCOSEL RCC_PLL2CFGR_PLL2VCOSEL_Msk
#define RCC_PLL2CFGR_PLL2M_Pos (8U)
#define RCC_PLL2CFGR_PLL2M_Msk \
    (0x3FUL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00003F00 */
#define RCC_PLL2CFGR_PLL2M RCC_PLL2CFGR_PLL2M_Msk
#define RCC_PLL2CFGR_PLL2M_0 \
    (0x01UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00000100 */
#define RCC_PLL2CFGR_PLL2M_1 \
    (0x02UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00000200 */
#define RCC_PLL2CFGR_PLL2M_2 \
    (0x04UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00000400 */
#define RCC_PLL2CFGR_PLL2M_3 \
    (0x08UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00000800 */
#define RCC_PLL2CFGR_PLL2M_4 \
    (0x10UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00001000 */
#define RCC_PLL2CFGR_PLL2M_5 \
    (0x20UL << RCC_PLL2CFGR_PLL2M_Pos) /*!< 0x00002000 */
#define RCC_PLL2CFGR_PLL2PEN_Pos (16U)
#define RCC_PLL2CFGR_PLL2PEN_Msk \
    (0x1UL << RCC_PLL2CFGR_PLL2PEN_Pos) /*!< 0x00010000 */
#define RCC_PLL2CFGR_PLL2PEN RCC_PLL2CFGR_PLL2PEN_Msk
#define RCC_PLL2CFGR_PLL2QEN_Pos (17U)
#define RCC_PLL2CFGR_PLL2QEN_Msk \
    (0x1UL << RCC_PLL2CFGR_PLL2QEN_Pos) /*!< 0x00020000 */
#define RCC_PLL2CFGR_PLL2QEN RCC_PLL2CFGR_PLL2QEN_Msk
#define RCC_PLL2CFGR_PLL2REN_Pos (18U)
#define RCC_PLL2CFGR_PLL2REN_Msk \
    (0x1UL << RCC_PLL2CFGR_PLL2REN_Pos) /*!< 0x00040000 */
#define RCC_PLL2CFGR_PLL2REN RCC_PLL2CFGR_PLL2REN_Msk

/********************  Bit definition for RCC_PLL1DIVR register  ***************/
#define RCC_PLL1DIVR_PLL1N_Pos (0U)
#define RCC_PLL1DIVR_PLL1N_Msk \
    (0x1FFUL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x000001FF */
#define RCC_PLL1DIVR_PLL1N RCC_PLL1DIVR_PLL1N_Msk
#define RCC_PLL1DIVR_PLL1N_0 \
    (0x001UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000001 */
#define RCC_PLL1DIVR_PLL1N_1 \
    (0x002UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000002 */
#define RCC_PLL1DIVR_PLL1N_2 \
    (0x004UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000004 */
#define RCC_PLL1DIVR_PLL1N_3 \
    (0x008UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000008 */
#define RCC_PLL1DIVR_PLL1N_4 \
    (0x010UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000010 */
#define RCC_PLL1DIVR_PLL1N_5 \
    (0x020UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000020 */
#define RCC_PLL1DIVR_PLL1N_6 \
    (0x040UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000040 */
#define RCC_PLL1DIVR_PLL1N_7 \
    (0x080UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000080 */
#define RCC_PLL1DIVR_PLL1N_8 \
    (0x100UL << RCC_PLL1DIVR_PLL1N_Pos) /*!< 0x00000100 */
#define RCC_PLL1DIVR_PLL1P_Pos (9U)
#define RCC_PLL1DIVR_PLL1P_Msk \
    (0x7FUL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x0000FE00 */
#define RCC_PLL1DIVR_PLL1P RCC_PLL1DIVR_PLL1P_Msk
#define RCC_PLL1DIVR_PLL1P_0 \
    (0x001UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00000200 */
#define RCC_PLL1DIVR_PLL1P_1 \
    (0x002UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00000400 */
#define RCC_PLL1DIVR_PLL1P_2 \
    (0x004UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00000800 */
#define RCC_PLL1DIVR_PLL1P_3 \
    (0x008UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00001000 */
#define RCC_PLL1DIVR_PLL1P_4 \
    (0x010UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00002000 */
#define RCC_PLL1DIVR_PLL1P_5 \
    (0x020UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00004000 */
#define RCC_PLL1DIVR_PLL1P_6 \
    (0x040UL << RCC_PLL1DIVR_PLL1P_Pos) /*!< 0x00008000 */
#define RCC_PLL1DIVR_PLL1Q_Pos (16U)
#define RCC_PLL1DIVR_PLL1Q_Msk \
    (0x7FUL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x007F0000 */
#define RCC_PLL1DIVR_PLL1Q RCC_PLL1DIVR_PLL1Q_Msk
#define RCC_PLL1DIVR_PLL1Q_0 \
    (0x001UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00010000 */
#define RCC_PLL1DIVR_PLL1Q_1 \
    (0x002UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00020000 */
#define RCC_PLL1DIVR_PLL1Q_2 \
    (0x004UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00040000 */
#define RCC_PLL1DIVR_PLL1Q_3 \
    (0x008UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00080000 */
#define RCC_PLL1DIVR_PLL1Q_4 \
    (0x010UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00100000 */
#define RCC_PLL1DIVR_PLL1Q_5 \
    (0x020UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00200020 */
#define RCC_PLL1DIVR_PLL1Q_6 \
    (0x040UL << RCC_PLL1DIVR_PLL1Q_Pos) /*!< 0x00400000 */
#define RCC_PLL1DIVR_PLL1R_Pos (24U)
#define RCC_PLL1DIVR_PLL1R_Msk \
    (0x7FUL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x7F000000 */
#define RCC_PLL1DIVR_PLL1R RCC_PLL1DIVR_PLL1R_Msk
#define RCC_PLL1DIVR_PLL1R_0 \
    (0x001UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x01000000 */
#define RCC_PLL1DIVR_PLL1R_1 \
    (0x002UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x02000000 */
#define RCC_PLL1DIVR_PLL1R_2 \
    (0x004UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x04000000 */
#define RCC_PLL1DIVR_PLL1R_3 \
    (0x008UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x08000000 */
#define RCC_PLL1DIVR_PLL1R_4 \
    (0x010UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x10000000 */
#define RCC_PLL1DIVR_PLL1R_5 \
    (0x020UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x20000000 */
#define RCC_PLL1DIVR_PLL1R_6 \
    (0x040UL << RCC_PLL1DIVR_PLL1R_Pos) /*!< 0x40000000 */

/********************  Bit definition for RCC_PLL1FRACR register  ***************/
#define RCC_PLL1FRACR_PLL1FRACN_Pos (3U)
#define RCC_PLL1FRACR_PLL1FRACN_Msk \
    (0x1FFFUL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x0000FFF8 */
#define RCC_PLL1FRACR_PLL1FRACN RCC_PLL1FRACR_PLL1FRACN_Msk
#define RCC_PLL1FRACR_PLL1FRACN_0 \
    (0x0001UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000008 */
#define RCC_PLL1FRACR_PLL1FRACN_1 \
    (0x0002UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000010 */
#define RCC_PLL1FRACR_PLL1FRACN_2 \
    (0x0004UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000020 */
#define RCC_PLL1FRACR_PLL1FRACN_3 \
    (0x0008UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000040 */
#define RCC_PLL1FRACR_PLL1FRACN_4 \
    (0x0010UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000080 */
#define RCC_PLL1FRACR_PLL1FRACN_5 \
    (0x0020UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000100 */
#define RCC_PLL1FRACR_PLL1FRACN_6 \
    (0x0040UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000200 */
#define RCC_PLL1FRACR_PLL1FRACN_7 \
    (0x0080UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000400 */
#define RCC_PLL1FRACR_PLL1FRACN_8 \
    (0x0100UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00000800 */
#define RCC_PLL1FRACR_PLL1FRACN_9 \
    (0x0200UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00001000 */
#define RCC_PLL1FRACR_PLL1FRACN_10 \
    (0x0400UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00002000 */
#define RCC_PLL1FRACR_PLL1FRACN_11 \
    (0x0800UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00004000 */
#define RCC_PLL1FRACR_PLL1FRACN_12 \
    (0x1000UL << RCC_PLL1FRACR_PLL1FRACN_Pos) /*!< 0x00008000 */

/********************  Bit definition for RCC_PLL2DIVR register  ***************/
#define RCC_PLL2DIVR_PLL2N_Pos (0U)
#define RCC_PLL2DIVR_PLL2N_Msk \
    (0x1FFUL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x000001FF */
#define RCC_PLL2DIVR_PLL2N RCC_PLL2DIVR_PLL2N_Msk
#define RCC_PLL2DIVR_PLL2N_0 \
    (0x001UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000001 */
#define RCC_PLL2DIVR_PLL2N_1 \
    (0x002UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000002 */
#define RCC_PLL2DIVR_PLL2N_2 \
    (0x004UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000004 */
#define RCC_PLL2DIVR_PLL2N_3 \
    (0x008UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000008 */
#define RCC_PLL2DIVR_PLL2N_4 \
    (0x010UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000010 */
#define RCC_PLL2DIVR_PLL2N_5 \
    (0x020UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000020 */
#define RCC_PLL2DIVR_PLL2N_6 \
    (0x040UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000040 */
#define RCC_PLL2DIVR_PLL2N_7 \
    (0x080UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000080 */
#define RCC_PLL2DIVR_PLL2N_8 \
    (0x100UL << RCC_PLL2DIVR_PLL2N_Pos) /*!< 0x00000100 */
#define RCC_PLL2DIVR_PLL2P_Pos (9U)
#define RCC_PLL2DIVR_PLL2P_Msk \
    (0x7FUL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x0000FE00 */
#define RCC_PLL2DIVR_PLL2P RCC_PLL2DIVR_PLL2P_Msk
#define RCC_PLL2DIVR_PLL2P_0 \
    (0x001UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00000200 */
#define RCC_PLL2DIVR_PLL2P_1 \
    (0x002UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00000400 */
#define RCC_PLL2DIVR_PLL2P_2 \
    (0x004UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00000800 */
#define RCC_PLL2DIVR_PLL2P_3 \
    (0x008UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00001000 */
#define RCC_PLL2DIVR_PLL2P_4 \
    (0x010UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00002000 */
#define RCC_PLL2DIVR_PLL2P_5 \
    (0x020UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00004000 */
#define RCC_PLL2DIVR_PLL2P_6 \
    (0x040UL << RCC_PLL2DIVR_PLL2P_Pos) /*!< 0x00008000 */
#define RCC_PLL2DIVR_PLL2Q_Pos (16U)
#define RCC_PLL2DIVR_PLL2Q_Msk \
    (0x7FUL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x007F0000 */
#define RCC_PLL2DIVR_PLL2Q RCC_PLL2DIVR_PLL2Q_Msk
#define RCC_PLL2DIVR_PLL2Q_0 \
    (0x001UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00010000 */
#define RCC_PLL2DIVR_PLL2Q_1 \
    (0x002UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00020000 */
#define RCC_PLL2DIVR_PLL2Q_2 \
    (0x004UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00040000 */
#define RCC_PLL2DIVR_PLL2Q_3 \
    (0x008UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00080000 */
#define RCC_PLL2DIVR_PLL2Q_4 \
    (0x010UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00100000 */
#define RCC_PLL2DIVR_PLL2Q_5 \
    (0x020UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00200020 */
#define RCC_PLL2DIVR_PLL2Q_6 \
    (0x040UL << RCC_PLL2DIVR_PLL2Q_Pos) /*!< 0x00400000 */
#define RCC_PLL2DIVR_PLL2R_Pos (24U)
#define RCC_PLL2DIVR_PLL2R_Msk \
    (0x7FUL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x7F000000 */
#define RCC_PLL2DIVR_PLL2R RCC_PLL2DIVR_PLL2R_Msk
#define RCC_PLL2DIVR_PLL2R_0 \
    (0x001UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x01000000 */
#define RCC_PLL2DIVR_PLL2R_1 \
    (0x002UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x02000000 */
#define RCC_PLL2DIVR_PLL2R_2 \
    (0x004UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x04000000 */
#define RCC_PLL2DIVR_PLL2R_3 \
    (0x008UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x08000000 */
#define RCC_PLL2DIVR_PLL2R_4 \
    (0x010UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x10000000 */
#define RCC_PLL2DIVR_PLL2R_5 \
    (0x020UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x20000000 */
#define RCC_PLL2DIVR_PLL2R_6 \
    (0x040UL << RCC_PLL2DIVR_PLL2R_Pos) /*!< 0x40000000 */

/********************  Bit definition for RCC_PLL2FRACR register  ***************/
#define RCC_PLL2FRACR_PLL2FRACN_Pos (3U)
#define RCC_PLL2FRACR_PLL2FRACN_Msk \
    (0x1FFFUL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x0000FFF8 */
#define RCC_PLL2FRACR_PLL2FRACN RCC_PLL2FRACR_PLL2FRACN_Msk
#define RCC_PLL2FRACR_PLL2FRACN_0 \
    (0x0001UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000008 */
#define RCC_PLL2FRACR_PLL2FRACN_1 \
    (0x0002UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000010 */
#define RCC_PLL2FRACR_PLL2FRACN_2 \
    (0x0004UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000020 */
#define RCC_PLL2FRACR_PLL2FRACN_3 \
    (0x0008UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000040 */
#define RCC_PLL2FRACR_PLL2FRACN_4 \
    (0x0010UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000080 */
#define RCC_PLL2FRACR_PLL2FRACN_5 \
    (0x0020UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000100 */
#define RCC_PLL2FRACR_PLL2FRACN_6 \
    (0x0040UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000200 */
#define RCC_PLL2FRACR_PLL2FRACN_7 \
    (0x0080UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000400 */
#define RCC_PLL2FRACR_PLL2FRACN_8 \
    (0x0100UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00000800 */
#define RCC_PLL2FRACR_PLL2FRACN_9 \
    (0x0200UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00001000 */
#define RCC_PLL2FRACR_PLL2FRACN_10 \
    (0x0400UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00002000 */
#define RCC_PLL2FRACR_PLL2FRACN_11 \
    (0x0800UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00004000 */
#define RCC_PLL2FRACR_PLL2FRACN_12 \
    (0x1000UL << RCC_PLL2FRACR_PLL2FRACN_Pos) /*!< 0x00008000 */

/********************  Bit definition for RCC_CIER register  ******************/
#define RCC_CIER_LSIRDYIE_Pos (0U)
#define RCC_CIER_LSIRDYIE_Msk \
    (0x1UL << RCC_CIER_LSIRDYIE_Pos) /*!< 0x00000001 */
#define RCC_CIER_LSIRDYIE RCC_CIER_LSIRDYIE_Msk
#define RCC_CIER_LSERDYIE_Pos (1U)
#define RCC_CIER_LSERDYIE_Msk \
    (0x1UL << RCC_CIER_LSERDYIE_Pos) /*!< 0x00000002 */
#define RCC_CIER_LSERDYIE RCC_CIER_LSERDYIE_Msk
#define RCC_CIER_CSIRDYIE_Pos (2U)
#define RCC_CIER_CSIRDYIE_Msk \
    (0x1UL << RCC_CIER_CSIRDYIE_Pos) /*!< 0x00000004 */
#define RCC_CIER_CSIRDYIE RCC_CIER_CSIRDYIE_Msk
#define RCC_CIER_HSIRDYIE_Pos (3U)
#define RCC_CIER_HSIRDYIE_Msk \
    (0x1UL << RCC_CIER_HSIRDYIE_Pos) /*!< 0x00000008 */
#define RCC_CIER_HSIRDYIE RCC_CIER_HSIRDYIE_Msk
#define RCC_CIER_HSERDYIE_Pos (4U)
#define RCC_CIER_HSERDYIE_Msk \
    (0x1UL << RCC_CIER_HSERDYIE_Pos) /*!< 0x00000010 */
#define RCC_CIER_HSERDYIE RCC_CIER_HSERDYIE_Msk
#define RCC_CIER_HSI48RDYIE_Pos (5U)
#define RCC_CIER_HSI48RDYIE_Msk \
    (0x1UL << RCC_CIER_HSI48RDYIE_Pos) /*!< 0x00000020 */
#define RCC_CIER_HSI48RDYIE RCC_CIER_HSI48RDYIE_Msk
#define RCC_CIER_PLL1RDYIE_Pos (6U)
#define RCC_CIER_PLL1RDYIE_Msk \
    (0x1UL << RCC_CIER_PLL1RDYIE_Pos) /*!< 0x00000040 */
#define RCC_CIER_PLL1RDYIE RCC_CIER_PLL1RDYIE_Msk
#define RCC_CIER_PLL2RDYIE_Pos (7U)
#define RCC_CIER_PLL2RDYIE_Msk \
    (0x1UL << RCC_CIER_PLL2RDYIE_Pos) /*!< 0x00000080 */
#define RCC_CIER_PLL2RDYIE RCC_CIER_PLL2RDYIE_Msk

/********************  Bit definition for RCC_CIFR register  ****************/
#define RCC_CIFR_LSIRDYF_Pos (0U)
#define RCC_CIFR_LSIRDYF_Msk (0x1UL << RCC_CIFR_LSIRDYF_Pos) /*!< 0x00000001 */
#define RCC_CIFR_LSIRDYF RCC_CIFR_LSIRDYF_Msk
#define RCC_CIFR_LSERDYF_Pos (1U)
#define RCC_CIFR_LSERDYF_Msk (0x1UL << RCC_CIFR_LSERDYF_Pos) /*!< 0x00000002 */
#define RCC_CIFR_LSERDYF RCC_CIFR_LSERDYF_Msk
#define RCC_CIFR_CSIRDYF_Pos (2U)
#define RCC_CIFR_CSIRDYF_Msk (0x1UL << RCC_CIFR_CSIRDYF_Pos) /*!< 0x00000004 */
#define RCC_CIFR_CSIRDYF RCC_CIFR_CSIRDYF_Msk
#define RCC_CIFR_HSIRDYF_Pos (3U)
#define RCC_CIFR_HSIRDYF_Msk (0x1UL << RCC_CIFR_HSIRDYF_Pos) /*!< 0x00000008 */
#define RCC_CIFR_HSIRDYF RCC_CIFR_HSIRDYF_Msk
#define RCC_CIFR_HSERDYF_Pos (4U)
#define RCC_CIFR_HSERDYF_Msk (0x1UL << RCC_CIFR_HSERDYF_Pos) /*!< 0x00000010 */
#define RCC_CIFR_HSERDYF RCC_CIFR_HSERDYF_Msk
#define RCC_CIFR_HSI48RDYF_Pos (5U)
#define RCC_CIFR_HSI48RDYF_Msk \
    (0x1UL << RCC_CIFR_HSI48RDYF_Pos) /*!< 0x00000020 */
#define RCC_CIFR_HSI48RDYF RCC_CIFR_HSI48RDYF_Msk
#define RCC_CIFR_PLL1RDYF_Pos (6U)
#define RCC_CIFR_PLL1RDYF_Msk \
    (0x1UL << RCC_CIFR_PLL1RDYF_Pos) /*!< 0x00000040 */
#define RCC_CIFR_PLL1RDYF RCC_CIFR_PLL1RDYF_Msk
#define RCC_CIFR_PLL2RDYF_Pos (7U)
#define RCC_CIFR_PLL2RDYF_Msk \
    (0x1UL << RCC_CIFR_PLL2RDYF_Pos) /*!< 0x00000080 */
#define RCC_CIFR_PLL2RDYF RCC_CIFR_PLL2RDYF_Msk
#define RCC_CIFR_HSECSSF_Pos (10U)
#define RCC_CIFR_HSECSSF_Msk (0x1UL << RCC_CIFR_HSECSSF_Pos) /*!< 0x00000400 */
#define RCC_CIFR_HSECSSF RCC_CIFR_HSECSSF_Msk

/********************  Bit definition for RCC_CICR register  ****************/
#define RCC_CICR_LSIRDYC_Pos (0U)
#define RCC_CICR_LSIRDYC_Msk (0x1UL << RCC_CICR_LSIRDYC_Pos) /*!< 0x00000001 */
#define RCC_CICR_LSIRDYC RCC_CICR_LSIRDYC_Msk
#define RCC_CICR_LSERDYC_Pos (1U)
#define RCC_CICR_LSERDYC_Msk (0x1UL << RCC_CICR_LSERDYC_Pos) /*!< 0x00000002 */
#define RCC_CICR_LSERDYC RCC_CICR_LSERDYC_Msk
#define RCC_CICR_CSIRDYC_Pos (2U)
#define RCC_CICR_CSIRDYC_Msk (0x1UL << RCC_CICR_CSIRDYC_Pos) /*!< 0x00000004 */
#define RCC_CICR_CSIRDYC RCC_CICR_CSIRDYC_Msk
#define RCC_CICR_HSIRDYC_Pos (3U)
#define RCC_CICR_HSIRDYC_Msk (0x1UL << RCC_CICR_HSIRDYC_Pos) /*!< 0x00000008 */
#define RCC_CICR_HSIRDYC RCC_CICR_HSIRDYC_Msk
#define RCC_CICR_HSERDYC_Pos (4U)
#define RCC_CICR_HSERDYC_Msk (0x1UL << RCC_CICR_HSERDYC_Pos) /*!< 0x00000010 */
#define RCC_CICR_HSERDYC RCC_CICR_HSERDYC_Msk
#define RCC_CICR_HSI48RDYC_Pos (5U)
#define RCC_CICR_HSI48RDYC_Msk \
    (0x1UL << RCC_CICR_HSI48RDYC_Pos) /*!< 0x00000020 */
#define RCC_CICR_HSI48RDYC RCC_CICR_HSI48RDYC_Msk
#define RCC_CICR_PLL1RDYC_Pos (6U)
#define RCC_CICR_PLL1RDYC_Msk \
    (0x1UL << RCC_CICR_PLL1RDYC_Pos) /*!< 0x00000040 */
#define RCC_CICR_PLL1RDYC RCC_CICR_PLL1RDYC_Msk
#define RCC_CICR_PLL2RDYC_Pos (7U)
#define RCC_CICR_PLL2RDYC_Msk \
    (0x1UL << RCC_CICR_PLL2RDYC_Pos) /*!< 0x00000080 */
#define RCC_CICR_PLL2RDYC RCC_CICR_PLL2RDYC_Msk
#define RCC_CICR_HSECSSC_Pos (10U)
#define RCC_CICR_HSECSSC_Msk (0x1UL << RCC_CICR_HSECSSC_Pos) /*!< 0x00000400 */
#define RCC_CICR_HSECSSC RCC_CICR_HSECSSC_Msk

/********************  Bit definition for RCC_AHB1RSTR register  **************/
#define RCC_AHB1RSTR_GPDMA1RST_Pos (0U)
#define RCC_AHB1RSTR_GPDMA1RST_Msk \
    (0x1UL << RCC_AHB1RSTR_GPDMA1RST_Pos) /*!< 0x00000001 */
#define RCC_AHB1RSTR_GPDMA1RST RCC_AHB1RSTR_GPDMA1RST_Msk
#define RCC_AHB1RSTR_GPDMA2RST_Pos (1U)
#define RCC_AHB1RSTR_GPDMA2RST_Msk \
    (0x1UL << RCC_AHB1RSTR_GPDMA2RST_Pos) /*!< 0x00000002 */
#define RCC_AHB1RSTR_GPDMA2RST RCC_AHB1RSTR_GPDMA2RST_Msk
#define RCC_AHB1RSTR_CRCRST_Pos (12U)
#define RCC_AHB1RSTR_CRCRST_Msk \
    (0x1UL << RCC_AHB1RSTR_CRCRST_Pos) /*!< 0x00001000 */
#define RCC_AHB1RSTR_CRCRST RCC_AHB1RSTR_CRCRST_Msk
#define RCC_AHB1RSTR_RAMCFGRST_Pos (17U)
#define RCC_AHB1RSTR_RAMCFGRST_Msk \
    (0x1UL << RCC_AHB1RSTR_RAMCFGRST_Pos) /*!< 0x00020000 */
#define RCC_AHB1RSTR_RAMCFGRST RCC_AHB1RSTR_RAMCFGRST_Msk
#define RCC_AHB1RSTR_TZSC1RST_Pos (24U)
#define RCC_AHB1RSTR_TZSC1RST_Msk \
    (0x1UL << RCC_AHB1RSTR_TZSC1RST_Pos) /*!< 0x01000000 */
#define RCC_AHB1RSTR_TZSC1RST RCC_AHB1RSTR_TZSC1RST_Msk

/********************  Bit definition for RCC_AHB2RSTR register  **************/
#define RCC_AHB2RSTR_GPIOARST_Pos (0U)
#define RCC_AHB2RSTR_GPIOARST_Msk \
    (0x1UL << RCC_AHB2RSTR_GPIOARST_Pos) /*!< 0x00000001 */
#define RCC_AHB2RSTR_GPIOARST RCC_AHB2RSTR_GPIOARST_Msk
#define RCC_AHB2RSTR_GPIOBRST_Pos (1U)
#define RCC_AHB2RSTR_GPIOBRST_Msk \
    (0x1UL << RCC_AHB2RSTR_GPIOBRST_Pos) /*!< 0x00000002 */
#define RCC_AHB2RSTR_GPIOBRST RCC_AHB2RSTR_GPIOBRST_Msk
#define RCC_AHB2RSTR_GPIOCRST_Pos (2U)
#define RCC_AHB2RSTR_GPIOCRST_Msk \
    (0x1UL << RCC_AHB2RSTR_GPIOCRST_Pos) /*!< 0x00000004 */
#define RCC_AHB2RSTR_GPIOCRST RCC_AHB2RSTR_GPIOCRST_Msk
#define RCC_AHB2RSTR_GPIODRST_Pos (3U)
#define RCC_AHB2RSTR_GPIODRST_Msk \
    (0x1UL << RCC_AHB2RSTR_GPIODRST_Pos) /*!< 0x00000008 */
#define RCC_AHB2RSTR_GPIODRST RCC_AHB2RSTR_GPIODRST_Msk
#define RCC_AHB2RSTR_GPIOHRST_Pos (7U)
#define RCC_AHB2RSTR_GPIOHRST_Msk \
    (0x1UL << RCC_AHB2RSTR_GPIOHRST_Pos) /*!< 0x00000080 */
#define RCC_AHB2RSTR_GPIOHRST RCC_AHB2RSTR_GPIOHRST_Msk
#define RCC_AHB2RSTR_ADCRST_Pos (10U)
#define RCC_AHB2RSTR_ADCRST_Msk \
    (0x1UL << RCC_AHB2RSTR_ADCRST_Pos) /*!< 0x00000400 */
#define RCC_AHB2RSTR_ADCRST RCC_AHB2RSTR_ADCRST_Msk
#define RCC_AHB2RSTR_DAC1RST_Pos (11U)
#define RCC_AHB2RSTR_DAC1RST_Msk \
    (0x1UL << RCC_AHB2RSTR_DAC1RST_Pos) /*!< 0x00000800 */
#define RCC_AHB2RSTR_DAC1RST RCC_AHB2RSTR_DAC1RST_Msk
#define RCC_AHB2RSTR_HASHRST_Pos (17U)
#define RCC_AHB2RSTR_HASHRST_Msk \
    (0x1UL << RCC_AHB2RSTR_HASHRST_Pos) /*!< 0x00020000 */
#define RCC_AHB2RSTR_HASHRST RCC_AHB2RSTR_HASHRST_Msk
#define RCC_AHB2RSTR_RNGRST_Pos (18U)
#define RCC_AHB2RSTR_RNGRST_Msk \
    (0x1UL << RCC_AHB2RSTR_RNGRST_Pos) /*!< 0x00040000 */
#define RCC_AHB2RSTR_RNGRST RCC_AHB2RSTR_RNGRST_Msk

/********************  Bit definition for RCC_APB1LRSTR register  **************/
#define RCC_APB1LRSTR_TIM2RST_Pos (0U)
#define RCC_APB1LRSTR_TIM2RST_Msk \
    (0x1UL << RCC_APB1LRSTR_TIM2RST_Pos) /*!< 0x00000001 */
#define RCC_APB1LRSTR_TIM2RST RCC_APB1LRSTR_TIM2RST_Msk
#define RCC_APB1LRSTR_TIM3RST_Pos (1U)
#define RCC_APB1LRSTR_TIM3RST_Msk \
    (0x1UL << RCC_APB1LRSTR_TIM3RST_Pos) /*!< 0x00000002 */
#define RCC_APB1LRSTR_TIM3RST RCC_APB1LRSTR_TIM3RST_Msk
#define RCC_APB1LRSTR_TIM6RST_Pos (4U)
#define RCC_APB1LRSTR_TIM6RST_Msk \
    (0x1UL << RCC_APB1LRSTR_TIM6RST_Pos) /*!< 0x00000010 */
#define RCC_APB1LRSTR_TIM6RST RCC_APB1LRSTR_TIM6RST_Msk
#define RCC_APB1LRSTR_TIM7RST_Pos (5U)
#define RCC_APB1LRSTR_TIM7RST_Msk \
    (0x1UL << RCC_APB1LRSTR_TIM7RST_Pos) /*!< 0x00000020 */
#define RCC_APB1LRSTR_TIM7RST RCC_APB1LRSTR_TIM7RST_Msk
#define RCC_APB1LRSTR_OPAMPRST_Pos (13U)
#define RCC_APB1LRSTR_OPAMPRST_Msk \
    (0x1UL << RCC_APB1LRSTR_OPAMPRST_Pos) /*!< 0x00002000 */
#define RCC_APB1LRSTR_OPAMPRST RCC_APB1LRSTR_OPAMPRST_Msk
#define RCC_APB1LRSTR_SPI2RST_Pos (14U)
#define RCC_APB1LRSTR_SPI2RST_Msk \
    (0x1UL << RCC_APB1LRSTR_SPI2RST_Pos) /*!< 0x00004000 */
#define RCC_APB1LRSTR_SPI2RST RCC_APB1LRSTR_SPI2RST_Msk
#define RCC_APB1LRSTR_SPI3RST_Pos (15U)
#define RCC_APB1LRSTR_SPI3RST_Msk \
    (0x1UL << RCC_APB1LRSTR_SPI3RST_Pos) /*!< 0x00008000 */
#define RCC_APB1LRSTR_SPI3RST RCC_APB1LRSTR_SPI3RST_Msk
#define RCC_APB1LRSTR_COMPRST_Pos (16U)
#define RCC_APB1LRSTR_COMPRST_Msk \
    (0x1UL << RCC_APB1LRSTR_COMPRST_Pos) /*!< 0x00010000 */
#define RCC_APB1LRSTR_COMPRST RCC_APB1LRSTR_COMPRST_Msk
#define RCC_APB1LRSTR_USART2RST_Pos (17U)
#define RCC_APB1LRSTR_USART2RST_Msk \
    (0x1UL << RCC_APB1LRSTR_USART2RST_Pos) /*!< 0x00020000 */
#define RCC_APB1LRSTR_USART2RST RCC_APB1LRSTR_USART2RST_Msk
#define RCC_APB1LRSTR_USART3RST_Pos (18U)
#define RCC_APB1LRSTR_USART3RST_Msk \
    (0x1UL << RCC_APB1LRSTR_USART3RST_Pos) /*!< 0x00040000 */
#define RCC_APB1LRSTR_USART3RST RCC_APB1LRSTR_USART3RST_Msk
#define RCC_APB1LRSTR_I2C1RST_Pos (21U)
#define RCC_APB1LRSTR_I2C1RST_Msk \
    (0x1UL << RCC_APB1LRSTR_I2C1RST_Pos) /*!< 0x00200000 */
#define RCC_APB1LRSTR_I2C1RST RCC_APB1LRSTR_I2C1RST_Msk
#define RCC_APB1LRSTR_I2C2RST_Pos (22U)
#define RCC_APB1LRSTR_I2C2RST_Msk \
    (0x1UL << RCC_APB1LRSTR_I2C2RST_Pos) /*!< 0x00400000 */
#define RCC_APB1LRSTR_I2C2RST RCC_APB1LRSTR_I2C2RST_Msk
#define RCC_APB1LRSTR_I3C1RST_Pos (23U)
#define RCC_APB1LRSTR_I3C1RST_Msk \
    (0x1UL << RCC_APB1LRSTR_I3C1RST_Pos) /*!< 0x00800000 */
#define RCC_APB1LRSTR_I3C1RST RCC_APB1LRSTR_I3C1RST_Msk
#define RCC_APB1LRSTR_CRSRST_Pos (24U)
#define RCC_APB1LRSTR_CRSRST_Msk \
    (0x1UL << RCC_APB1LRSTR_CRSRST_Pos) /*!< 0x01000000 */
#define RCC_APB1LRSTR_CRSRST RCC_APB1LRSTR_CRSRST_Msk

/********************  Bit definition for RCC_APB1HRSTR register  **************/
#define RCC_APB1HRSTR_DTSRST_Pos (3U)
#define RCC_APB1HRSTR_DTSRST_Msk \
    (0x1UL << RCC_APB1HRSTR_DTSRST_Pos) /*!< 0x00000008 */
#define RCC_APB1HRSTR_DTSRST RCC_APB1HRSTR_DTSRST_Msk
#define RCC_APB1HRSTR_LPTIM2RST_Pos (5U)
#define RCC_APB1HRSTR_LPTIM2RST_Msk \
    (0x1UL << RCC_APB1HRSTR_LPTIM2RST_Pos) /*!< 0x00000020 */
#define RCC_APB1HRSTR_LPTIM2RST RCC_APB1HRSTR_LPTIM2RST_Msk
#define RCC_APB1HRSTR_FDCANRST_Pos (9U)
#define RCC_APB1HRSTR_FDCANRST_Msk \
    (0x1UL << RCC_APB1HRSTR_FDCANRST_Pos) /*!< 0x00000200 */
#define RCC_APB1HRSTR_FDCANRST RCC_APB1HRSTR_FDCANRST_Msk

/********************  Bit definition for RCC_APB2RSTR register  **************/
#define RCC_APB2RSTR_TIM1RST_Pos (11U)
#define RCC_APB2RSTR_TIM1RST_Msk \
    (0x1UL << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000800 */
#define RCC_APB2RSTR_TIM1RST RCC_APB2RSTR_TIM1RST_Msk
#define RCC_APB2RSTR_SPI1RST_Pos (12U)
#define RCC_APB2RSTR_SPI1RST_Msk \
    (0x1UL << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
#define RCC_APB2RSTR_SPI1RST RCC_APB2RSTR_SPI1RST_Msk
#define RCC_APB2RSTR_USART1RST_Pos (14U)
#define RCC_APB2RSTR_USART1RST_Msk \
    (0x1UL << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00004000 */
#define RCC_APB2RSTR_USART1RST RCC_APB2RSTR_USART1RST_Msk
#define RCC_APB2RSTR_USBRST_Pos (24U)
#define RCC_APB2RSTR_USBRST_Msk \
    (0x1UL << RCC_APB2RSTR_USBRST_Pos) /*!< 0x01000000 */
#define RCC_APB2RSTR_USBRST RCC_APB2RSTR_USBRST_Msk

/********************  Bit definition for RCC_APB3RSTR register  **************/
#define RCC_APB3RSTR_LPUART1RST_Pos (6U)
#define RCC_APB3RSTR_LPUART1RST_Msk \
    (0x1UL << RCC_APB3RSTR_LPUART1RST_Pos) /*!< 0x00000040 */
#define RCC_APB3RSTR_LPUART1RST RCC_APB3RSTR_LPUART1RST_Msk
#define RCC_APB3RSTR_I3C2RST_Pos (9U)
#define RCC_APB3RSTR_I3C2RST_Msk \
    (0x1UL << RCC_APB3RSTR_I3C2RST_Pos) /*!< 0x00000200 */
#define RCC_APB3RSTR_I3C2RST RCC_APB3RSTR_I3C2RST_Msk
#define RCC_APB3RSTR_LPTIM1RST_Pos (11U)
#define RCC_APB3RSTR_LPTIM1RST_Msk \
    (0x1UL << RCC_APB3RSTR_LPTIM1RST_Pos) /*!< 0x00000800 */
#define RCC_APB3RSTR_LPTIM1RST RCC_APB3RSTR_LPTIM1RST_Msk

/********************  Bit definition for RCC_AHB1ENR register  **************/
#define RCC_AHB1ENR_GPDMA1EN_Pos (0U)
#define RCC_AHB1ENR_GPDMA1EN_Msk \
    (0x1UL << RCC_AHB1ENR_GPDMA1EN_Pos) /*!< 0x00000001 */
#define RCC_AHB1ENR_GPDMA1EN RCC_AHB1ENR_GPDMA1EN_Msk
#define RCC_AHB1ENR_GPDMA2EN_Pos (1U)
#define RCC_AHB1ENR_GPDMA2EN_Msk \
    (0x1UL << RCC_AHB1ENR_GPDMA2EN_Pos) /*!< 0x00000002 */
#define RCC_AHB1ENR_GPDMA2EN RCC_AHB1ENR_GPDMA2EN_Msk
#define RCC_AHB1ENR_FLITFEN_Pos (8U)
#define RCC_AHB1ENR_FLITFEN_Msk \
    (0x1UL << RCC_AHB1ENR_FLITFEN_Pos) /*!< 0x00000100 */
#define RCC_AHB1ENR_FLITFEN RCC_AHB1ENR_FLITFEN_Msk
#define RCC_AHB1ENR_CRCEN_Pos (12U)
#define RCC_AHB1ENR_CRCEN_Msk \
    (0x1UL << RCC_AHB1ENR_CRCEN_Pos) /*!< 0x00001000 */
#define RCC_AHB1ENR_CRCEN RCC_AHB1ENR_CRCEN_Msk
#define RCC_AHB1ENR_RAMCFGEN_Pos (17U)
#define RCC_AHB1ENR_RAMCFGEN_Msk \
    (0x1UL << RCC_AHB1ENR_RAMCFGEN_Pos) /*!< 0x00020000 */
#define RCC_AHB1ENR_RAMCFGEN RCC_AHB1ENR_RAMCFGEN_Msk
#define RCC_AHB1ENR_TZSC1EN_Pos (24U)
#define RCC_AHB1ENR_TZSC1EN_Msk \
    (0x1UL << RCC_AHB1ENR_TZSC1EN_Pos) /*!< 0x01000000 */
#define RCC_AHB1ENR_TZSC1EN RCC_AHB1ENR_TZSC1EN_Msk
#define RCC_AHB1ENR_BKPRAMEN_Pos (28U)
#define RCC_AHB1ENR_BKPRAMEN_Msk \
    (0x1UL << RCC_AHB1ENR_BKPRAMEN_Pos) /*!< 0x10000000 */
#define RCC_AHB1ENR_BKPRAMEN RCC_AHB1ENR_BKPRAMEN_Msk
#define RCC_AHB1ENR_SRAM1EN_Pos (31U)
#define RCC_AHB1ENR_SRAM1EN_Msk \
    (0x1UL << RCC_AHB1ENR_SRAM1EN_Pos) /*!< 0x80000000 */
#define RCC_AHB1ENR_SRAM1EN RCC_AHB1ENR_SRAM1EN_Msk

/********************  Bit definition for RCC_AHB2ENR register  **************/
#define RCC_AHB2ENR_GPIOAEN_Pos (0U)
#define RCC_AHB2ENR_GPIOAEN_Msk \
    (0x1UL << RCC_AHB2ENR_GPIOAEN_Pos) /*!< 0x00000001 */
#define RCC_AHB2ENR_GPIOAEN RCC_AHB2ENR_GPIOAEN_Msk
#define RCC_AHB2ENR_GPIOBEN_Pos (1U)
#define RCC_AHB2ENR_GPIOBEN_Msk \
    (0x1UL << RCC_AHB2ENR_GPIOBEN_Pos) /*!< 0x00000002 */
#define RCC_AHB2ENR_GPIOBEN RCC_AHB2ENR_GPIOBEN_Msk
#define RCC_AHB2ENR_GPIOCEN_Pos (2U)
#define RCC_AHB2ENR_GPIOCEN_Msk \
    (0x1UL << RCC_AHB2ENR_GPIOCEN_Pos) /*!< 0x00000004 */
#define RCC_AHB2ENR_GPIOCEN RCC_AHB2ENR_GPIOCEN_Msk
#define RCC_AHB2ENR_GPIODEN_Pos (3U)
#define RCC_AHB2ENR_GPIODEN_Msk \
    (0x1UL << RCC_AHB2ENR_GPIODEN_Pos) /*!< 0x00000008 */
#define RCC_AHB2ENR_GPIODEN RCC_AHB2ENR_GPIODEN_Msk
#define RCC_AHB2ENR_GPIOHEN_Pos (7U)
#define RCC_AHB2ENR_GPIOHEN_Msk \
    (0x1UL << RCC_AHB2ENR_GPIOHEN_Pos) /*!< 0x00000080 */
#define RCC_AHB2ENR_GPIOHEN RCC_AHB2ENR_GPIOHEN_Msk
#define RCC_AHB2ENR_ADCEN_Pos (10U)
#define RCC_AHB2ENR_ADCEN_Msk \
    (0x1UL << RCC_AHB2ENR_ADCEN_Pos) /*!< 0x00000400 */
#define RCC_AHB2ENR_ADCEN RCC_AHB2ENR_ADCEN_Msk
#define RCC_AHB2ENR_DAC1EN_Pos (11U)
#define RCC_AHB2ENR_DAC1EN_Msk \
    (0x1UL << RCC_AHB2ENR_DAC1EN_Pos) /*!< 0x00000800 */
#define RCC_AHB2ENR_DAC1EN RCC_AHB2ENR_DAC1EN_Msk
#define RCC_AHB2ENR_HASHEN_Pos (17U)
#define RCC_AHB2ENR_HASHEN_Msk \
    (0x1UL << RCC_AHB2ENR_HASHEN_Pos) /*!< 0x00020000 */
#define RCC_AHB2ENR_HASHEN RCC_AHB2ENR_HASHEN_Msk
#define RCC_AHB2ENR_RNGEN_Pos (18U)
#define RCC_AHB2ENR_RNGEN_Msk \
    (0x1UL << RCC_AHB2ENR_RNGEN_Pos) /*!< 0x00040000 */
#define RCC_AHB2ENR_RNGEN RCC_AHB2ENR_RNGEN_Msk
#define RCC_AHB2ENR_SRAM2EN_Pos (30U)
#define RCC_AHB2ENR_SRAM2EN_Msk \
    (0x1UL << RCC_AHB2ENR_SRAM2EN_Pos) /*!< 0x40000000 */
#define RCC_AHB2ENR_SRAM2EN RCC_AHB2ENR_SRAM2EN_Msk

/********************  Bit definition for RCC_APB1LENR register  **************/
#define RCC_APB1LENR_TIM2EN_Pos (0U)
#define RCC_APB1LENR_TIM2EN_Msk \
    (0x1UL << RCC_APB1LENR_TIM2EN_Pos) /*!< 0x00000001 */
#define RCC_APB1LENR_TIM2EN RCC_APB1LENR_TIM2EN_Msk
#define RCC_APB1LENR_TIM3EN_Pos (1U)
#define RCC_APB1LENR_TIM3EN_Msk \
    (0x1UL << RCC_APB1LENR_TIM3EN_Pos) /*!< 0x00000002 */
#define RCC_APB1LENR_TIM3EN RCC_APB1LENR_TIM3EN_Msk
#define RCC_APB1LENR_TIM6EN_Pos (4U)
#define RCC_APB1LENR_TIM6EN_Msk \
    (0x1UL << RCC_APB1LENR_TIM6EN_Pos) /*!< 0x00000010 */
#define RCC_APB1LENR_TIM6EN RCC_APB1LENR_TIM6EN_Msk
#define RCC_APB1LENR_TIM7EN_Pos (5U)
#define RCC_APB1LENR_TIM7EN_Msk \
    (0x1UL << RCC_APB1LENR_TIM7EN_Pos) /*!< 0x00000020 */
#define RCC_APB1LENR_TIM7EN RCC_APB1LENR_TIM7EN_Msk
#define RCC_APB1LENR_WWDGEN_Pos (11U)
#define RCC_APB1LENR_WWDGEN_Msk \
    (0x1UL << RCC_APB1LENR_WWDGEN_Pos) /*!< 0x00000800 */
#define RCC_APB1LENR_WWDGEN RCC_APB1LENR_WWDGEN_Msk
#define RCC_APB1LENR_OPAMPEN_Pos (13U)
#define RCC_APB1LENR_OPAMPEN_Msk \
    (0x1UL << RCC_APB1LENR_OPAMPEN_Pos) /*!< 0x00002000 */
#define RCC_APB1LENR_OPAMPEN RCC_APB1LENR_OPAMPEN_Msk
#define RCC_APB1LENR_SPI2EN_Pos (14U)
#define RCC_APB1LENR_SPI2EN_Msk \
    (0x1UL << RCC_APB1LENR_SPI2EN_Pos) /*!< 0x00004000 */
#define RCC_APB1LENR_SPI2EN RCC_APB1LENR_SPI2EN_Msk
#define RCC_APB1LENR_SPI3EN_Pos (15U)
#define RCC_APB1LENR_SPI3EN_Msk \
    (0x1UL << RCC_APB1LENR_SPI3EN_Pos) /*!< 0x00008000 */
#define RCC_APB1LENR_SPI3EN RCC_APB1LENR_SPI3EN_Msk
#define RCC_APB1LENR_COMPEN_Pos (16U)
#define RCC_APB1LENR_COMPEN_Msk \
    (0x1UL << RCC_APB1LENR_COMPEN_Pos) /*!< 0x00010000 */
#define RCC_APB1LENR_COMPEN RCC_APB1LENR_COMPEN_Msk
#define RCC_APB1LENR_USART2EN_Pos (17U)
#define RCC_APB1LENR_USART2EN_Msk \
    (0x1UL << RCC_APB1LENR_USART2EN_Pos) /*!< 0x00020000 */
#define RCC_APB1LENR_USART2EN RCC_APB1LENR_USART2EN_Msk
#define RCC_APB1LENR_USART3EN_Pos (18U)
#define RCC_APB1LENR_USART3EN_Msk \
    (0x1UL << RCC_APB1LENR_USART3EN_Pos) /*!< 0x00040000 */
#define RCC_APB1LENR_USART3EN RCC_APB1LENR_USART3EN_Msk
#define RCC_APB1LENR_I2C1EN_Pos (21U)
#define RCC_APB1LENR_I2C1EN_Msk \
    (0x1UL << RCC_APB1LENR_I2C1EN_Pos) /*!< 0x00200000 */
#define RCC_APB1LENR_I2C1EN RCC_APB1LENR_I2C1EN_Msk
#define RCC_APB1LENR_I2C2EN_Pos (22U)
#define RCC_APB1LENR_I2C2EN_Msk \
    (0x1UL << RCC_APB1LENR_I2C2EN_Pos) /*!< 0x00400000 */
#define RCC_APB1LENR_I2C2EN RCC_APB1LENR_I2C2EN_Msk
#define RCC_APB1LENR_I3C1EN_Pos (23U)
#define RCC_APB1LENR_I3C1EN_Msk \
    (0x1UL << RCC_APB1LENR_I3C1EN_Pos) /*!< 0x00800000 */
#define RCC_APB1LENR_I3C1EN RCC_APB1LENR_I3C1EN_Msk
#define RCC_APB1LENR_CRSEN_Pos (24U)
#define RCC_APB1LENR_CRSEN_Msk \
    (0x1UL << RCC_APB1LENR_CRSEN_Pos) /*!< 0x01000000 */
#define RCC_APB1LENR_CRSEN RCC_APB1LENR_CRSEN_Msk

/********************  Bit definition for RCC_APB1HENR register  **************/
#define RCC_APB1HENR_DTSEN_Pos (3U)
#define RCC_APB1HENR_DTSEN_Msk \
    (0x1UL << RCC_APB1HENR_DTSEN_Pos) /*!< 0x00000008 */
#define RCC_APB1HENR_DTSEN RCC_APB1HENR_DTSEN_Msk
#define RCC_APB1HENR_LPTIM2EN_Pos (5U)
#define RCC_APB1HENR_LPTIM2EN_Msk \
    (0x1UL << RCC_APB1HENR_LPTIM2EN_Pos) /*!< 0x00000020 */
#define RCC_APB1HENR_LPTIM2EN RCC_APB1HENR_LPTIM2EN_Msk
#define RCC_APB1HENR_FDCANEN_Pos (9U)
#define RCC_APB1HENR_FDCANEN_Msk \
    (0x1UL << RCC_APB1HENR_FDCANEN_Pos) /*!< 0x00000200 */
#define RCC_APB1HENR_FDCANEN RCC_APB1HENR_FDCANEN_Msk

/********************  Bit definition for RCC_APB2ENR register  **************/
#define RCC_APB2ENR_TIM1EN_Pos (11U)
#define RCC_APB2ENR_TIM1EN_Msk \
    (0x1UL << RCC_APB2ENR_TIM1EN_Pos) /*!< 0x00000800 */
#define RCC_APB2ENR_TIM1EN RCC_APB2ENR_TIM1EN_Msk
#define RCC_APB2ENR_SPI1EN_Pos (12U)
#define RCC_APB2ENR_SPI1EN_Msk \
    (0x1UL << RCC_APB2ENR_SPI1EN_Pos) /*!< 0x00001000 */
#define RCC_APB2ENR_SPI1EN RCC_APB2ENR_SPI1EN_Msk
#define RCC_APB2ENR_USART1EN_Pos (14U)
#define RCC_APB2ENR_USART1EN_Msk \
    (0x1UL << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00004000 */
#define RCC_APB2ENR_USART1EN RCC_APB2ENR_USART1EN_Msk
#define RCC_APB2ENR_USBEN_Pos (24U)
#define RCC_APB2ENR_USBEN_Msk \
    (0x1UL << RCC_APB2ENR_USBEN_Pos) /*!< 0x01000000 */
#define RCC_APB2ENR_USBEN RCC_APB2ENR_USBEN_Msk

/********************  Bit definition for RCC_APB3ENR register  **************/
#define RCC_APB3ENR_SBSEN_Pos (1U)
#define RCC_APB3ENR_SBSEN_Msk \
    (0x1UL << RCC_APB3ENR_SBSEN_Pos) /*!< 0x00000002 */
#define RCC_APB3ENR_SBSEN RCC_APB3ENR_SBSEN_Msk
#define RCC_APB3ENR_LPUART1EN_Pos (6U)
#define RCC_APB3ENR_LPUART1EN_Msk \
    (0x1UL << RCC_APB3ENR_LPUART1EN_Pos) /*!< 0x00000040 */
#define RCC_APB3ENR_LPUART1EN RCC_APB3ENR_LPUART1EN_Msk
#define RCC_APB3ENR_I3C2EN_Pos (9U)
#define RCC_APB3ENR_I3C2EN_Msk \
    (0x1UL << RCC_APB3ENR_I3C2EN_Pos) /*!< 0x00000200 */
#define RCC_APB3ENR_I3C2EN RCC_APB3ENR_I3C2EN_Msk
#define RCC_APB3ENR_LPTIM1EN_Pos (11U)
#define RCC_APB3ENR_LPTIM1EN_Msk \
    (0x1UL << RCC_APB3ENR_LPTIM1EN_Pos) /*!< 0x00000800 */
#define RCC_APB3ENR_LPTIM1EN RCC_APB3ENR_LPTIM1EN_Msk
#define RCC_APB3ENR_RTCAPBEN_Pos (21U)
#define RCC_APB3ENR_RTCAPBEN_Msk \
    (0x1UL << RCC_APB3ENR_RTCAPBEN_Pos) /*!< 0x00200000 */
#define RCC_APB3ENR_RTCAPBEN RCC_APB3ENR_RTCAPBEN_Msk

/********************  Bit definition for RCC_AHB1LPENR register  **************/
#define RCC_AHB1LPENR_GPDMA1LPEN_Pos (0U)
#define RCC_AHB1LPENR_GPDMA1LPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_GPDMA1LPEN_Pos) /*!< 0x00000000*/
#define RCC_AHB1LPENR_GPDMA1LPEN RCC_AHB1LPENR_GPDMA1LPEN_Msk
#define RCC_AHB1LPENR_GPDMA2LPEN_Pos (1U)
#define RCC_AHB1LPENR_GPDMA2LPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_GPDMA2LPEN_Pos) /*!< 0x00000000*/
#define RCC_AHB1LPENR_GPDMA2LPEN RCC_AHB1LPENR_GPDMA2LPEN_Msk
#define RCC_AHB1LPENR_FLITFLPEN_Pos (8U)
#define RCC_AHB1LPENR_FLITFLPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_FLITFLPEN_Pos) /*!< 0x00000100*/
#define RCC_AHB1LPENR_FLITFLPEN RCC_AHB1LPENR_FLITFLPEN_Msk
#define RCC_AHB1LPENR_CRCLPEN_Pos (12U)
#define RCC_AHB1LPENR_CRCLPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_CRCLPEN_Pos) /*!< 0x00001000 */
#define RCC_AHB1LPENR_CRCLPEN RCC_AHB1LPENR_CRCLPEN_Msk
#define RCC_AHB1LPENR_RAMCFGLPEN_Pos (17U)
#define RCC_AHB1LPENR_RAMCFGLPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_RAMCFGLPEN_Pos) /*!< 0x00020000 */
#define RCC_AHB1LPENR_RAMCFGLPEN RCC_AHB1LPENR_RAMCFGLPEN_Msk
#define RCC_AHB1LPENR_TZSC1LPEN_Pos (24U)
#define RCC_AHB1LPENR_TZSC1LPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_TZSC1LPEN_Pos) /*!< 0x01000000 */
#define RCC_AHB1LPENR_TZSC1LPEN RCC_AHB1LPENR_TZSC1LPEN_Msk
#define RCC_AHB1LPENR_BKPRAMLPEN_Pos (28U)
#define RCC_AHB1LPENR_BKPRAMLPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_BKPRAMLPEN_Pos) /*!< 0x10000000 */
#define RCC_AHB1LPENR_BKPRAMLPEN RCC_AHB1LPENR_BKPRAMLPEN_Msk
#define RCC_AHB1LPENR_ICACHELPEN_Pos (29U)
#define RCC_AHB1LPENR_ICACHELPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_ICACHELPEN_Pos) /*!< 0x20000000 */
#define RCC_AHB1LPENR_ICACHELPEN RCC_AHB1LPENR_ICACHELPEN_Msk
#define RCC_AHB1LPENR_SRAM1LPEN_Pos (31U)
#define RCC_AHB1LPENR_SRAM1LPEN_Msk \
    (0x1UL << RCC_AHB1LPENR_SRAM1LPEN_Pos) /*!< 0x80000000 */
#define RCC_AHB1LPENR_SRAM1LPEN RCC_AHB1LPENR_SRAM1LPEN_Msk

/********************  Bit definition for RCC_AHB2LPENR register  **************/
#define RCC_AHB2LPENR_GPIOALPEN_Pos (0U)
#define RCC_AHB2LPENR_GPIOALPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_GPIOALPEN_Pos) /*!< 0x00000001 */
#define RCC_AHB2LPENR_GPIOALPEN RCC_AHB2LPENR_GPIOALPEN_Msk
#define RCC_AHB2LPENR_GPIOBLPEN_Pos (1U)
#define RCC_AHB2LPENR_GPIOBLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_GPIOBLPEN_Pos) /*!< 0x00000002 */
#define RCC_AHB2LPENR_GPIOBLPEN RCC_AHB2LPENR_GPIOBLPEN_Msk
#define RCC_AHB2LPENR_GPIOCLPEN_Pos (2U)
#define RCC_AHB2LPENR_GPIOCLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_GPIOCLPEN_Pos) /*!< 0x00000004 */
#define RCC_AHB2LPENR_GPIOCLPEN RCC_AHB2LPENR_GPIOCLPEN_Msk
#define RCC_AHB2LPENR_GPIODLPEN_Pos (3U)
#define RCC_AHB2LPENR_GPIODLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_GPIODLPEN_Pos) /*!< 0x00000008 */
#define RCC_AHB2LPENR_GPIODLPEN RCC_AHB2LPENR_GPIODLPEN_Msk
#define RCC_AHB2LPENR_GPIOHLPEN_Pos (7U)
#define RCC_AHB2LPENR_GPIOHLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_GPIOHLPEN_Pos) /*!< 0x00000080 */
#define RCC_AHB2LPENR_GPIOHLPEN RCC_AHB2LPENR_GPIOHLPEN_Msk
#define RCC_AHB2LPENR_ADCLPEN_Pos (10U)
#define RCC_AHB2LPENR_ADCLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_ADCLPEN_Pos) /*!< 0x00000400 */
#define RCC_AHB2LPENR_ADCLPEN RCC_AHB2LPENR_ADCLPEN_Msk
#define RCC_AHB2LPENR_DAC1LPEN_Pos (11U)
#define RCC_AHB2LPENR_DAC1LPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_DAC1LPEN_Pos) /*!< 0x00000800 */
#define RCC_AHB2LPENR_DAC1LPEN RCC_AHB2LPENR_DAC1LPEN_Msk
#define RCC_AHB2LPENR_HASHLPEN_Pos (17U)
#define RCC_AHB2LPENR_HASHLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_HASHLPEN_Pos) /*!< 0x00020000 */
#define RCC_AHB2LPENR_HASHLPEN RCC_AHB2LPENR_HASHLPEN_Msk
#define RCC_AHB2LPENR_RNGLPEN_Pos (18U)
#define RCC_AHB2LPENR_RNGLPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_RNGLPEN_Pos) /*!< 0x00040000 */
#define RCC_AHB2LPENR_RNGLPEN RCC_AHB2LPENR_RNGLPEN_Msk
#define RCC_AHB2LPENR_SRAM2LPEN_Pos (30U)
#define RCC_AHB2LPENR_SRAM2LPEN_Msk \
    (0x1UL << RCC_AHB2LPENR_SRAM2LPEN_Pos) /*!< 0x40000000 */
#define RCC_AHB2LPENR_SRAM2LPEN RCC_AHB2LPENR_SRAM2LPEN_Msk

/********************  Bit definition for RCC_APB1LLPENR register  **************/
#define RCC_APB1LLPENR_TIM2LPEN_Pos (0U)
#define RCC_APB1LLPENR_TIM2LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_TIM2LPEN_Pos) /*!< 0x00000001 */
#define RCC_APB1LLPENR_TIM2LPEN RCC_APB1LLPENR_TIM2LPEN_Msk
#define RCC_APB1LLPENR_TIM3LPEN_Pos (1U)
#define RCC_APB1LLPENR_TIM3LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_TIM3LPEN_Pos) /*!< 0x00000002 */
#define RCC_APB1LLPENR_TIM3LPEN RCC_APB1LLPENR_TIM3LPEN_Msk
#define RCC_APB1LLPENR_TIM6LPEN_Pos (4U)
#define RCC_APB1LLPENR_TIM6LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_TIM6LPEN_Pos) /*!< 0x00000010 */
#define RCC_APB1LLPENR_TIM6LPEN RCC_APB1LLPENR_TIM6LPEN_Msk
#define RCC_APB1LLPENR_TIM7LPEN_Pos (5U)
#define RCC_APB1LLPENR_TIM7LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_TIM7LPEN_Pos) /*!< 0x00000020 */
#define RCC_APB1LLPENR_TIM7LPEN RCC_APB1LLPENR_TIM7LPEN_Msk
#define RCC_APB1LLPENR_WWDGLPEN_Pos (11U)
#define RCC_APB1LLPENR_WWDGLPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_WWDGLPEN_Pos) /*!< 0x00000800 */
#define RCC_APB1LLPENR_WWDGLPEN RCC_APB1LLPENR_WWDGLPEN_Msk
#define RCC_APB1LLPENR_OPAMPLPEN_Pos (13U)
#define RCC_APB1LLPENR_OPAMPLPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_OPAMPLPEN_Pos) /*!< 0x00002000 */
#define RCC_APB1LLPENR_OPAMPLPEN RCC_APB1LLPENR_OPAMPLPEN_Msk
#define RCC_APB1LLPENR_SPI2LPEN_Pos (14U)
#define RCC_APB1LLPENR_SPI2LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_SPI2LPEN_Pos) /*!< 0x00004000 */
#define RCC_APB1LLPENR_SPI2LPEN RCC_APB1LLPENR_SPI2LPEN_Msk
#define RCC_APB1LLPENR_SPI3LPEN_Pos (15U)
#define RCC_APB1LLPENR_SPI3LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_SPI3LPEN_Pos) /*!< 0x00008000 */
#define RCC_APB1LLPENR_SPI3LPEN RCC_APB1LLPENR_SPI3LPEN_Msk
#define RCC_APB1LLPENR_COMPLPEN_Pos (16U)
#define RCC_APB1LLPENR_COMPLPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_COMPLPEN_Pos) /*!< 0x00010000 */
#define RCC_APB1LLPENR_COMPLPEN RCC_APB1LLPENR_COMPLPEN_Msk
#define RCC_APB1LLPENR_USART2LPEN_Pos (17U)
#define RCC_APB1LLPENR_USART2LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_USART2LPEN_Pos) /*!< 0x00020000 */
#define RCC_APB1LLPENR_USART2LPEN RCC_APB1LLPENR_USART2LPEN_Msk
#define RCC_APB1LLPENR_USART3LPEN_Pos (18U)
#define RCC_APB1LLPENR_USART3LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_USART3LPEN_Pos) /*!< 0x00040000 */
#define RCC_APB1LLPENR_USART3LPEN RCC_APB1LLPENR_USART3LPEN_Msk
#define RCC_APB1LLPENR_I2C1LPEN_Pos (21U)
#define RCC_APB1LLPENR_I2C1LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_I2C1LPEN_Pos) /*!< 0x00200000 */
#define RCC_APB1LLPENR_I2C1LPEN RCC_APB1LLPENR_I2C1LPEN_Msk
#define RCC_APB1LLPENR_I2C2LPEN_Pos (22U)
#define RCC_APB1LLPENR_I2C2LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_I2C2LPEN_Pos) /*!< 0x00400000 */
#define RCC_APB1LLPENR_I2C2LPEN RCC_APB1LLPENR_I2C2LPEN_Msk
#define RCC_APB1LLPENR_I3C1LPEN_Pos (23U)
#define RCC_APB1LLPENR_I3C1LPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_I3C1LPEN_Pos) /*!< 0x00800000 */
#define RCC_APB1LLPENR_I3C1LPEN RCC_APB1LLPENR_I3C1LPEN_Msk
#define RCC_APB1LLPENR_CRSLPEN_Pos (24U)
#define RCC_APB1LLPENR_CRSLPEN_Msk \
    (0x1UL << RCC_APB1LLPENR_CRSLPEN_Pos) /*!< 0x01000000 */
#define RCC_APB1LLPENR_CRSLPEN RCC_APB1LLPENR_CRSLPEN_Msk

/********************  Bit definition for RCC_APB1HLPENR register  **************/
#define RCC_APB1HLPENR_DTSLPEN_Pos (3U)
#define RCC_APB1HLPENR_DTSLPEN_Msk \
    (0x1UL << RCC_APB1HLPENR_DTSLPEN_Pos) /*!< 0x00000008 */
#define RCC_APB1HLPENR_DTSLPEN RCC_APB1HLPENR_DTSLPEN_Msk
#define RCC_APB1HLPENR_LPTIM2LPEN_Pos (5U)
#define RCC_APB1HLPENR_LPTIM2LPEN_Msk \
    (0x1UL << RCC_APB1HLPENR_LPTIM2LPEN_Pos) /*!< 0x00000020 */
#define RCC_APB1HLPENR_LPTIM2LPEN RCC_APB1HLPENR_LPTIM2LPEN_Msk
#define RCC_APB1HLPENR_FDCANLPEN_Pos (9U)
#define RCC_APB1HLPENR_FDCANLPEN_Msk \
    (0x1UL << RCC_APB1HLPENR_FDCANLPEN_Pos) /*!< 0x00000200 */
#define RCC_APB1HLPENR_FDCANLPEN RCC_APB1HLPENR_FDCANLPEN_Msk

/********************  Bit definition for RCC_APB2LPENR register  **************/
#define RCC_APB2LPENR_TIM1LPEN_Pos (11U)
#define RCC_APB2LPENR_TIM1LPEN_Msk \
    (0x1UL << RCC_APB2LPENR_TIM1LPEN_Pos) /*!< 0x00000800 */
#define RCC_APB2LPENR_TIM1LPEN RCC_APB2LPENR_TIM1LPEN_Msk
#define RCC_APB2LPENR_SPI1LPEN_Pos (12U)
#define RCC_APB2LPENR_SPI1LPEN_Msk \
    (0x1UL << RCC_APB2LPENR_SPI1LPEN_Pos) /*!< 0x00001000 */
#define RCC_APB2LPENR_SPI1LPEN RCC_APB2LPENR_SPI1LPEN_Msk
#define RCC_APB2LPENR_USART1LPEN_Pos (14U)
#define RCC_APB2LPENR_USART1LPEN_Msk \
    (0x1UL << RCC_APB2LPENR_USART1LPEN_Pos) /*!< 0x00004000 */
#define RCC_APB2LPENR_USART1LPEN RCC_APB2LPENR_USART1LPEN_Msk
#define RCC_APB2LPENR_USBLPEN_Pos (24U)
#define RCC_APB2LPENR_USBLPEN_Msk \
    (0x1UL << RCC_APB2LPENR_USBLPEN_Pos) /*!< 0x01000000 */
#define RCC_APB2LPENR_USBLPEN RCC_APB2LPENR_USBLPEN_Msk

/********************  Bit definition for RCC_APB3LPENR register  **************/
#define RCC_APB3LPENR_SBSLPEN_Pos (1U)
#define RCC_APB3LPENR_SBSLPEN_Msk \
    (0x1UL << RCC_APB3LPENR_SBSLPEN_Pos) /*!< 0x00000001 */
#define RCC_APB3LPENR_SBSLPEN RCC_APB3LPENR_SBSLPEN_Msk
#define RCC_APB3LPENR_LPUART1LPEN_Pos (6U)
#define RCC_APB3LPENR_LPUART1LPEN_Msk \
    (0x1UL << RCC_APB3LPENR_LPUART1LPEN_Pos) /*!< 0x00000040 */
#define RCC_APB3LPENR_LPUART1LPEN RCC_APB3LPENR_LPUART1LPEN_Msk
#define RCC_APB3LPENR_I3C2LPEN_Pos (9U)
#define RCC_APB3LPENR_I3C2LPEN_Msk \
    (0x1UL << RCC_APB3LPENR_I3C2LPEN_Pos) /*!< 0x00000100 */
#define RCC_APB3LPENR_I3C2LPEN RCC_APB3LPENR_I3C2LPEN_Msk
#define RCC_APB3LPENR_LPTIM1LPEN_Pos (11U)
#define RCC_APB3LPENR_LPTIM1LPEN_Msk \
    (0x1UL << RCC_APB3LPENR_LPTIM1LPEN_Pos) /*!< 0x00000800 */
#define RCC_APB3LPENR_LPTIM1LPEN RCC_APB3LPENR_LPTIM1LPEN_Msk
#define RCC_APB3LPENR_RTCAPBLPEN_Pos (21U)
#define RCC_APB3LPENR_RTCAPBLPEN_Msk \
    (0x1UL << RCC_APB3LPENR_RTCAPBLPEN_Pos) /*!< 0x00200000 */
#define RCC_APB3LPENR_RTCAPBLPEN RCC_APB3LPENR_RTCAPBLPEN_Msk

/********************  Bit definition for RCC_CCIPR1 register  ******************/
#define RCC_CCIPR1_USART1SEL_Pos (0U)
#define RCC_CCIPR1_USART1SEL_Msk \
    (0x7UL << RCC_CCIPR1_USART1SEL_Pos) /*!< 0x00000007 */
#define RCC_CCIPR1_USART1SEL RCC_CCIPR1_USART1SEL_Msk
#define RCC_CCIPR1_USART1SEL_0 \
    (0x1UL << RCC_CCIPR1_USART1SEL_Pos) /*!< 0x00000001 */
#define RCC_CCIPR1_USART1SEL_1 \
    (0x2UL << RCC_CCIPR1_USART1SEL_Pos) /*!< 0x00000002 */
#define RCC_CCIPR1_USART1SEL_2 \
    (0x4UL << RCC_CCIPR1_USART1SEL_Pos) /*!< 0x00000004 */

#define RCC_CCIPR1_USART2SEL_Pos (3U)
#define RCC_CCIPR1_USART2SEL_Msk \
    (0x7UL << RCC_CCIPR1_USART2SEL_Pos) /*!< 0x00000038 */
#define RCC_CCIPR1_USART2SEL RCC_CCIPR1_USART2SEL_Msk
#define RCC_CCIPR1_USART2SEL_0 \
    (0x1UL << RCC_CCIPR1_USART2SEL_Pos) /*!< 0x00000008 */
#define RCC_CCIPR1_USART2SEL_1 \
    (0x2UL << RCC_CCIPR1_USART2SEL_Pos) /*!< 0x00000010 */
#define RCC_CCIPR1_USART2SEL_2 \
    (0x4UL << RCC_CCIPR1_USART2SEL_Pos) /*!< 0x00000020 */

#define RCC_CCIPR1_USART3SEL_Pos (6U)
#define RCC_CCIPR1_USART3SEL_Msk \
    (0x7UL << RCC_CCIPR1_USART3SEL_Pos) /*!< 0x000001C0 */
#define RCC_CCIPR1_USART3SEL RCC_CCIPR1_USART3SEL_Msk
#define RCC_CCIPR1_USART3SEL_0 \
    (0x1UL << RCC_CCIPR1_USART3SEL_Pos) /*!< 0x00000040 */
#define RCC_CCIPR1_USART3SEL_1 \
    (0x2UL << RCC_CCIPR1_USART3SEL_Pos) /*!< 0x00000080 */
#define RCC_CCIPR1_USART3SEL_2 \
    (0x4UL << RCC_CCIPR1_USART3SEL_Pos) /*!< 0x00000100 */

#define RCC_CCIPR1_TIMICSEL_Pos (31U)
#define RCC_CCIPR1_TIMICSEL_Msk \
    (0x1UL << RCC_CCIPR1_TIMICSEL_Pos) /*!< 0x10000000 */
#define RCC_CCIPR1_TIMICSEL RCC_CCIPR1_TIMICSEL_Msk

/********************  Bit definition for RCC_CCIPR2 register  ******************/
#define RCC_CCIPR2_LPTIM1SEL_Pos (8U)
#define RCC_CCIPR2_LPTIM1SEL_Msk \
    (0x7UL << RCC_CCIPR2_LPTIM1SEL_Pos) /*!< 0x00000700 */
#define RCC_CCIPR2_LPTIM1SEL RCC_CCIPR2_LPTIM1SEL_Msk
#define RCC_CCIPR2_LPTIM1SEL_0 \
    (0x1UL << RCC_CCIPR2_LPTIM1SEL_Pos) /*!< 0x00000100 */
#define RCC_CCIPR2_LPTIM1SEL_1 \
    (0x2UL << RCC_CCIPR2_LPTIM1SEL_Pos) /*!< 0x00000200 */
#define RCC_CCIPR2_LPTIM1SEL_2 \
    (0x4UL << RCC_CCIPR2_LPTIM1SEL_Pos) /*!< 0x00000400 */

#define RCC_CCIPR2_LPTIM2SEL_Pos (12U)
#define RCC_CCIPR2_LPTIM2SEL_Msk \
    (0x7UL << RCC_CCIPR2_LPTIM2SEL_Pos) /*!< 0x00007000 */
#define RCC_CCIPR2_LPTIM2SEL RCC_CCIPR2_LPTIM2SEL_Msk
#define RCC_CCIPR2_LPTIM2SEL_0 \
    (0x1UL << RCC_CCIPR2_LPTIM2SEL_Pos) /*!< 0x00001000 */
#define RCC_CCIPR2_LPTIM2SEL_1 \
    (0x2UL << RCC_CCIPR2_LPTIM2SEL_Pos) /*!< 0x00002000 */
#define RCC_CCIPR2_LPTIM2SEL_2 \
    (0x4UL << RCC_CCIPR2_LPTIM2SEL_Pos) /*!< 0x00004000 */

/********************  Bit definition for RCC_CCIPR3 register  ***************/
#define RCC_CCIPR3_SPI1SEL_Pos (0U)
#define RCC_CCIPR3_SPI1SEL_Msk \
    (0x7UL << RCC_CCIPR3_SPI1SEL_Pos) /*!< 0x00000007 */
#define RCC_CCIPR3_SPI1SEL RCC_CCIPR3_SPI1SEL_Msk
#define RCC_CCIPR3_SPI1SEL_0 \
    (0x1UL << RCC_CCIPR3_SPI1SEL_Pos) /*!< 0x00000001 */
#define RCC_CCIPR3_SPI1SEL_1 \
    (0x2UL << RCC_CCIPR3_SPI1SEL_Pos) /*!< 0x00000002 */
#define RCC_CCIPR3_SPI1SEL_2 \
    (0x4UL << RCC_CCIPR3_SPI1SEL_Pos) /*!< 0x00000004 */

#define RCC_CCIPR3_SPI2SEL_Pos (3U)
#define RCC_CCIPR3_SPI2SEL_Msk \
    (0x7UL << RCC_CCIPR3_SPI2SEL_Pos) /*!< 0x00000038 */
#define RCC_CCIPR3_SPI2SEL RCC_CCIPR3_SPI2SEL_Msk
#define RCC_CCIPR3_SPI2SEL_0 \
    (0x1UL << RCC_CCIPR3_SPI2SEL_Pos) /*!< 0x00000008 */
#define RCC_CCIPR3_SPI2SEL_1 \
    (0x2UL << RCC_CCIPR3_SPI2SEL_Pos) /*!< 0x00000010 */
#define RCC_CCIPR3_SPI2SEL_2 \
    (0x4UL << RCC_CCIPR3_SPI2SEL_Pos) /*!< 0x00000020 */

#define RCC_CCIPR3_SPI3SEL_Pos (6U)
#define RCC_CCIPR3_SPI3SEL_Msk \
    (0x7UL << RCC_CCIPR3_SPI3SEL_Pos) /*!< 0x000001C0 */
#define RCC_CCIPR3_SPI3SEL RCC_CCIPR3_SPI3SEL_Msk
#define RCC_CCIPR3_SPI3SEL_0 \
    (0x1UL << RCC_CCIPR3_SPI3SEL_Pos) /*!< 0x00000040 */
#define RCC_CCIPR3_SPI3SEL_1 \
    (0x2UL << RCC_CCIPR3_SPI3SEL_Pos) /*!< 0x00000080 */
#define RCC_CCIPR3_SPI3SEL_2 \
    (0x4UL << RCC_CCIPR3_SPI3SEL_Pos) /*!< 0x00000100 */

#define RCC_CCIPR3_LPUART1SEL_Pos (24U)
#define RCC_CCIPR3_LPUART1SEL_Msk \
    (0x7UL << RCC_CCIPR3_LPUART1SEL_Pos) /*!< 0x07000000 */
#define RCC_CCIPR3_LPUART1SEL RCC_CCIPR3_LPUART1SEL_Msk
#define RCC_CCIPR3_LPUART1SEL_0 \
    (0x1UL << RCC_CCIPR3_LPUART1SEL_Pos) /*!< 0x01000000 */
#define RCC_CCIPR3_LPUART1SEL_1 \
    (0x2UL << RCC_CCIPR3_LPUART1SEL_Pos) /*!< 0x02000000 */
#define RCC_CCIPR3_LPUART1SEL_2 \
    (0x4UL << RCC_CCIPR3_LPUART1SEL_Pos) /*!< 0x04000000 */

    /********************  Bit definition for RCC_CCIPR4 register  ***************/

#define RCC_CCIPR4_SYSTICKSEL_Pos (2U)
#define RCC_CCIPR4_SYSTICKSEL_Msk \
    (0x3UL << RCC_CCIPR4_SYSTICKSEL_Pos) /*!< 0x0000000C */
#define RCC_CCIPR4_SYSTICKSEL RCC_CCIPR4_SYSTICKSEL_Msk
#define RCC_CCIPR4_SYSTICKSEL_0 \
    (0x1UL << RCC_CCIPR4_SYSTICKSEL_Pos) /*!< 0x00000004 */
#define RCC_CCIPR4_SYSTICKSEL_1 \
    (0x2UL << RCC_CCIPR4_SYSTICKSEL_Pos) /*!< 0x00000008 */

#define RCC_CCIPR4_USBSEL_Pos (4U)
#define RCC_CCIPR4_USBSEL_Msk \
    (0x3UL << RCC_CCIPR4_USBSEL_Pos) /*!< 0x00000030 */
#define RCC_CCIPR4_USBSEL RCC_CCIPR4_USBSEL_Msk
#define RCC_CCIPR4_USBSEL_0 (0x1UL << RCC_CCIPR4_USBSEL_Pos) /*!< 0x00000010 */
#define RCC_CCIPR4_USBSEL_1 (0x2UL << RCC_CCIPR4_USBSEL_Pos) /*!< 0x00000020 */

#define RCC_CCIPR4_I2C1SEL_Pos (16U)
#define RCC_CCIPR4_I2C1SEL_Msk \
    (0x3UL << RCC_CCIPR4_I2C1SEL_Pos) /*!< 0x00030000 */
#define RCC_CCIPR4_I2C1SEL RCC_CCIPR4_I2C1SEL_Msk
#define RCC_CCIPR4_I2C1SEL_0 \
    (0x1UL << RCC_CCIPR4_I2C1SEL_Pos) /*!< 0x00010000 */
#define RCC_CCIPR4_I2C1SEL_1 \
    (0x2UL << RCC_CCIPR4_I2C1SEL_Pos) /*!< 0x00020000 */

#define RCC_CCIPR4_I2C2SEL_Pos (18U)
#define RCC_CCIPR4_I2C2SEL_Msk \
    (0x3UL << RCC_CCIPR4_I2C2SEL_Pos) /*!< 0x000C0000 */
#define RCC_CCIPR4_I2C2SEL RCC_CCIPR4_I2C2SEL_Msk
#define RCC_CCIPR4_I2C2SEL_0 \
    (0x1UL << RCC_CCIPR4_I2C2SEL_Pos) /*!< 0x00040000 */
#define RCC_CCIPR4_I2C2SEL_1 \
    (0x2UL << RCC_CCIPR4_I2C2SEL_Pos) /*!< 0x00080000 */

#define RCC_CCIPR4_I3C1SEL_Pos (24U)
#define RCC_CCIPR4_I3C1SEL_Msk \
    (0x3UL << RCC_CCIPR4_I3C1SEL_Pos) /*!< 0x03000000 */
#define RCC_CCIPR4_I3C1SEL RCC_CCIPR4_I3C1SEL_Msk
#define RCC_CCIPR4_I3C1SEL_0 \
    (0x1UL << RCC_CCIPR4_I3C1SEL_Pos) /*!< 0x01000000 */
#define RCC_CCIPR4_I3C1SEL_1 \
    (0x2UL << RCC_CCIPR4_I3C1SEL_Pos) /*!< 0x02000000 */

#define RCC_CCIPR4_I3C2SEL_Pos (26U)
#define RCC_CCIPR4_I3C2SEL_Msk \
    (0x3UL << RCC_CCIPR4_I3C2SEL_Pos) /*!< 0x0C000000 */
#define RCC_CCIPR4_I3C2SEL RCC_CCIPR4_I3C2SEL_Msk
#define RCC_CCIPR4_I3C2SEL_0 \
    (0x1UL << RCC_CCIPR4_I3C2SEL_Pos) /*!< 0x04000000 */
#define RCC_CCIPR4_I3C2SEL_1 \
    (0x2UL << RCC_CCIPR4_I3C2SEL_Pos) /*!< 0x08000000 */

    /********************  Bit definition for RCC_CCIPR5 register  ***************/

#define RCC_CCIPR5_ADCDACSEL_Pos (0U)
#define RCC_CCIPR5_ADCDACSEL_Msk \
    (0x7UL << RCC_CCIPR5_ADCDACSEL_Pos) /*!< 0x00000007 */
#define RCC_CCIPR5_ADCDACSEL RCC_CCIPR5_ADCDACSEL_Msk
#define RCC_CCIPR5_ADCDACSEL_0 \
    (0x1UL << RCC_CCIPR5_ADCDACSEL_Pos) /*!< 0x00000001 */
#define RCC_CCIPR5_ADCDACSEL_1 \
    (0x2UL << RCC_CCIPR5_ADCDACSEL_Pos) /*!< 0x00000002 */
#define RCC_CCIPR5_ADCDACSEL_2 \
    (0x4UL << RCC_CCIPR5_ADCDACSEL_Pos) /*!< 0x00000004 */

#define RCC_CCIPR5_DACSEL_Pos (3U)
#define RCC_CCIPR5_DACSEL_Msk \
    (0x1UL << RCC_CCIPR5_DACSEL_Pos) /*!< 0x00000008 */
#define RCC_CCIPR5_DACSEL RCC_CCIPR5_DACSEL_Msk

#define RCC_CCIPR5_RNGSEL_Pos (4U)
#define RCC_CCIPR5_RNGSEL_Msk \
    (0x3UL << RCC_CCIPR5_RNGSEL_Pos) /*!< 0x00000030 */
#define RCC_CCIPR5_RNGSEL RCC_CCIPR5_RNGSEL_Msk
#define RCC_CCIPR5_RNGSEL_0 (0x1UL << RCC_CCIPR5_RNGSEL_Pos) /*!< 0x00000010 */
#define RCC_CCIPR5_RNGSEL_1 (0x2UL << RCC_CCIPR5_RNGSEL_Pos) /*!< 0x00000020 */

#define RCC_CCIPR5_FDCANSEL_Pos (8U)
#define RCC_CCIPR5_FDCANSEL_Msk \
    (0x3UL << RCC_CCIPR5_FDCANSEL_Pos) /*!< 0x00000300 */
#define RCC_CCIPR5_FDCANSEL RCC_CCIPR5_FDCANSEL_Msk
#define RCC_CCIPR5_FDCANSEL_0 \
    (0x1UL << RCC_CCIPR5_FDCANSEL_Pos) /*!< 0x00000100 */
#define RCC_CCIPR5_FDCANSEL_1 \
    (0x2UL << RCC_CCIPR5_FDCANSEL_Pos) /*!< 0x00000200 */

#define RCC_CCIPR5_CKERPSEL_Pos (30U)
#define RCC_CCIPR5_CKERPSEL_Msk \
    (0x3UL << RCC_CCIPR5_CKERPSEL_Pos) /*!< 0xC0000000 */
#define RCC_CCIPR5_CKERPSEL RCC_CCIPR5_CKERPSEL_Msk
#define RCC_CCIPR5_CKERPSEL_0 \
    (0x1UL << RCC_CCIPR5_CKERPSEL_Pos) /*!< 0x40000000 */
#define RCC_CCIPR5_CKERPSEL_1 \
    (0x2UL << RCC_CCIPR5_CKERPSEL_Pos) /*!< 0x80000000 */

/********************  Bit definition for RCC_BDCR register  ******************/
#define RCC_BDCR_LSEON_Pos (0U)
#define RCC_BDCR_LSEON_Msk (0x1UL << RCC_BDCR_LSEON_Pos) /*!< 0x00000001 */
#define RCC_BDCR_LSEON RCC_BDCR_LSEON_Msk
#define RCC_BDCR_LSERDY_Pos (1U)
#define RCC_BDCR_LSERDY_Msk (0x1UL << RCC_BDCR_LSERDY_Pos) /*!< 0x00000002 */
#define RCC_BDCR_LSERDY RCC_BDCR_LSERDY_Msk
#define RCC_BDCR_LSEBYP_Pos (2U)
#define RCC_BDCR_LSEBYP_Msk (0x1UL << RCC_BDCR_LSEBYP_Pos) /*!< 0x00000004 */
#define RCC_BDCR_LSEBYP RCC_BDCR_LSEBYP_Msk
#define RCC_BDCR_LSEDRV_Pos (3U)
#define RCC_BDCR_LSEDRV_Msk (0x3UL << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000018 */
#define RCC_BDCR_LSEDRV RCC_BDCR_LSEDRV_Msk
#define RCC_BDCR_LSEDRV_0 (0x1UL << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000008 */
#define RCC_BDCR_LSEDRV_1 (0x2UL << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000010 */
#define RCC_BDCR_LSECSSON_Pos (5U)
#define RCC_BDCR_LSECSSON_Msk \
    (0x1UL << RCC_BDCR_LSECSSON_Pos) /*!< 0x00000020 */
#define RCC_BDCR_LSECSSON RCC_BDCR_LSECSSON_Msk
#define RCC_BDCR_LSECSSD_Pos (6U)
#define RCC_BDCR_LSECSSD_Msk (0x1UL << RCC_BDCR_LSECSSD_Pos) /*!< 0x00000040 */
#define RCC_BDCR_LSECSSD RCC_BDCR_LSECSSD_Msk
#define RCC_BDCR_LSEEXT_Pos (7U)
#define RCC_BDCR_LSEEXT_Msk (0x1UL << RCC_BDCR_LSEEXT_Pos) /*!< 0x00000080 */
#define RCC_BDCR_LSEEXT RCC_BDCR_LSEEXT_Msk
#define RCC_BDCR_RTCSEL_Pos (8U)
#define RCC_BDCR_RTCSEL_Msk (0x3UL << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000300 */
#define RCC_BDCR_RTCSEL RCC_BDCR_RTCSEL_Msk
#define RCC_BDCR_RTCSEL_0 (0x1UL << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000100 */
#define RCC_BDCR_RTCSEL_1 (0x2UL << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000200 */
#define RCC_BDCR_RTCEN_Pos (15U)
#define RCC_BDCR_RTCEN_Msk (0x1UL << RCC_BDCR_RTCEN_Pos) /*!< 0x00008000 */
#define RCC_BDCR_RTCEN RCC_BDCR_RTCEN_Msk
#define RCC_BDCR_VSWRST_Pos (16U)
#define RCC_BDCR_VSWRST_Msk (0x1UL << RCC_BDCR_VSWRST_Pos) /*!< 0x00010000 */
#define RCC_BDCR_VSWRST RCC_BDCR_VSWRST_Msk
#define RCC_BDCR_LSCOEN_Pos (24U)
#define RCC_BDCR_LSCOEN_Msk (0x1UL << RCC_BDCR_LSCOEN_Pos) /*!< 0x01000000 */
#define RCC_BDCR_LSCOEN RCC_BDCR_LSCOEN_Msk
#define RCC_BDCR_LSCOSEL_Pos (25U)
#define RCC_BDCR_LSCOSEL_Msk (0x1UL << RCC_BDCR_LSCOSEL_Pos) /*!< 0x02000000 */
#define RCC_BDCR_LSCOSEL RCC_BDCR_LSCOSEL_Msk
#define RCC_BDCR_LSION_Pos (26U)
#define RCC_BDCR_LSION_Msk (0x1UL << RCC_BDCR_LSION_Pos) /*!< 0x04000000 */
#define RCC_BDCR_LSION RCC_BDCR_LSION_Msk
#define RCC_BDCR_LSIRDY_Pos (27U)
#define RCC_BDCR_LSIRDY_Msk (0x1UL << RCC_BDCR_LSIRDY_Pos) /*!< 0x08000000 */
#define RCC_BDCR_LSIRDY RCC_BDCR_LSIRDY_Msk

/********************  Bit definition for RCC_RSR register  *******************/
#define RCC_RSR_RMVF_Pos (23U)
#define RCC_RSR_RMVF_Msk (0x1UL << RCC_RSR_RMVF_Pos) /*!< 0x00800000 */
#define RCC_RSR_RMVF RCC_RSR_RMVF_Msk
#define RCC_RSR_PINRSTF_Pos (26U)
#define RCC_RSR_PINRSTF_Msk (0x1UL << RCC_RSR_PINRSTF_Pos) /*!< 0x04000000 */
#define RCC_RSR_PINRSTF RCC_RSR_PINRSTF_Msk
#define RCC_RSR_BORRSTF_Pos (27U)
#define RCC_RSR_BORRSTF_Msk (0x1UL << RCC_RSR_BORRSTF_Pos) /*!< 0x08000000 */
#define RCC_RSR_BORRSTF RCC_RSR_BORRSTF_Msk
#define RCC_RSR_SFTRSTF_Pos (28U)
#define RCC_RSR_SFTRSTF_Msk (0x1UL << RCC_RSR_SFTRSTF_Pos) /*!< 0x10000000 */
#define RCC_RSR_SFTRSTF RCC_RSR_SFTRSTF_Msk
#define RCC_RSR_IWDGRSTF_Pos (29U)
#define RCC_RSR_IWDGRSTF_Msk (0x1UL << RCC_RSR_IWDGRSTF_Pos) /*!< 0x20000000 */
#define RCC_RSR_IWDGRSTF RCC_RSR_IWDGRSTF_Msk
#define RCC_RSR_WWDGRSTF_Pos (30U)
#define RCC_RSR_WWDGRSTF_Msk (0x1UL << RCC_RSR_WWDGRSTF_Pos) /*!< 0x40000000 */
#define RCC_RSR_WWDGRSTF RCC_RSR_WWDGRSTF_Msk
#define RCC_RSR_LPWRRSTF_Pos (31U)
#define RCC_RSR_LPWRRSTF_Msk (0x1UL << RCC_RSR_LPWRRSTF_Pos) /*!< 0x80000000 */
#define RCC_RSR_LPWRRSTF RCC_RSR_LPWRRSTF_Msk

/********************  Bit definition for RCC_PRIVCFGR register  **************/
#define RCC_PRIVCFGR_PRIV_Pos (1U)
#define RCC_PRIVCFGR_PRIV_Msk \
    (0x1UL << RCC_PRIVCFGR_PRIV_Pos) /*!< 0x00000002 */
#define RCC_PRIVCFGR_PRIV RCC_PRIVCFGR_PRIV_Msk

/******************************************************************************/
/*                                                                            */
/*                           Real-Time Clock (RTC)                            */
/*                                                                            */
/******************************************************************************/
/********************  Bits definition for RTC_TR register  *******************/
#define RTC_TR_SU_Pos (0U)
#define RTC_TR_SU_Msk (0xFUL << RTC_TR_SU_Pos) /*!< 0x0000000F */
#define RTC_TR_SU RTC_TR_SU_Msk
#define RTC_TR_SU_0 (0x1UL << RTC_TR_SU_Pos) /*!< 0x00000001 */
#define RTC_TR_SU_1 (0x2UL << RTC_TR_SU_Pos) /*!< 0x00000002 */
#define RTC_TR_SU_2 (0x4UL << RTC_TR_SU_Pos) /*!< 0x00000004 */
#define RTC_TR_SU_3 (0x8UL << RTC_TR_SU_Pos) /*!< 0x00000008 */
#define RTC_TR_ST_Pos (4U)
#define RTC_TR_ST_Msk (0x7UL << RTC_TR_ST_Pos) /*!< 0x00000070 */
#define RTC_TR_ST RTC_TR_ST_Msk
#define RTC_TR_ST_0 (0x1UL << RTC_TR_ST_Pos) /*!< 0x00000010 */
#define RTC_TR_ST_1 (0x2UL << RTC_TR_ST_Pos) /*!< 0x00000020 */
#define RTC_TR_ST_2 (0x4UL << RTC_TR_ST_Pos) /*!< 0x00000040 */
#define RTC_TR_MNU_Pos (8U)
#define RTC_TR_MNU_Msk (0xFUL << RTC_TR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_TR_MNU RTC_TR_MNU_Msk
#define RTC_TR_MNU_0 (0x1UL << RTC_TR_MNU_Pos) /*!< 0x00000100 */
#define RTC_TR_MNU_1 (0x2UL << RTC_TR_MNU_Pos) /*!< 0x00000200 */
#define RTC_TR_MNU_2 (0x4UL << RTC_TR_MNU_Pos) /*!< 0x00000400 */
#define RTC_TR_MNU_3 (0x8UL << RTC_TR_MNU_Pos) /*!< 0x00000800 */
#define RTC_TR_MNT_Pos (12U)
#define RTC_TR_MNT_Msk (0x7UL << RTC_TR_MNT_Pos) /*!< 0x00007000 */
#define RTC_TR_MNT RTC_TR_MNT_Msk
#define RTC_TR_MNT_0 (0x1UL << RTC_TR_MNT_Pos) /*!< 0x00001000 */
#define RTC_TR_MNT_1 (0x2UL << RTC_TR_MNT_Pos) /*!< 0x00002000 */
#define RTC_TR_MNT_2 (0x4UL << RTC_TR_MNT_Pos) /*!< 0x00004000 */
#define RTC_TR_HU_Pos (16U)
#define RTC_TR_HU_Msk (0xFUL << RTC_TR_HU_Pos) /*!< 0x000F0000 */
#define RTC_TR_HU RTC_TR_HU_Msk
#define RTC_TR_HU_0 (0x1UL << RTC_TR_HU_Pos) /*!< 0x00010000 */
#define RTC_TR_HU_1 (0x2UL << RTC_TR_HU_Pos) /*!< 0x00020000 */
#define RTC_TR_HU_2 (0x4UL << RTC_TR_HU_Pos) /*!< 0x00040000 */
#define RTC_TR_HU_3 (0x8UL << RTC_TR_HU_Pos) /*!< 0x00080000 */
#define RTC_TR_HT_Pos (20U)
#define RTC_TR_HT_Msk (0x3UL << RTC_TR_HT_Pos) /*!< 0x00300000 */
#define RTC_TR_HT RTC_TR_HT_Msk
#define RTC_TR_HT_0 (0x1UL << RTC_TR_HT_Pos) /*!< 0x00100000 */
#define RTC_TR_HT_1 (0x2UL << RTC_TR_HT_Pos) /*!< 0x00200000 */
#define RTC_TR_PM_Pos (22U)
#define RTC_TR_PM_Msk (0x1UL << RTC_TR_PM_Pos) /*!< 0x00400000 */
#define RTC_TR_PM RTC_TR_PM_Msk

/********************  Bits definition for RTC_DR register  *******************/
#define RTC_DR_DU_Pos (0U)
#define RTC_DR_DU_Msk (0xFUL << RTC_DR_DU_Pos) /*!< 0x0000000F */
#define RTC_DR_DU RTC_DR_DU_Msk
#define RTC_DR_DU_0 (0x1UL << RTC_DR_DU_Pos) /*!< 0x00000001 */
#define RTC_DR_DU_1 (0x2UL << RTC_DR_DU_Pos) /*!< 0x00000002 */
#define RTC_DR_DU_2 (0x4UL << RTC_DR_DU_Pos) /*!< 0x00000004 */
#define RTC_DR_DU_3 (0x8UL << RTC_DR_DU_Pos) /*!< 0x00000008 */
#define RTC_DR_DT_Pos (4U)
#define RTC_DR_DT_Msk (0x3UL << RTC_DR_DT_Pos) /*!< 0x00000030 */
#define RTC_DR_DT RTC_DR_DT_Msk
#define RTC_DR_DT_0 (0x1UL << RTC_DR_DT_Pos) /*!< 0x00000010 */
#define RTC_DR_DT_1 (0x2UL << RTC_DR_DT_Pos) /*!< 0x00000020 */
#define RTC_DR_MU_Pos (8U)
#define RTC_DR_MU_Msk (0xFUL << RTC_DR_MU_Pos) /*!< 0x00000F00 */
#define RTC_DR_MU RTC_DR_MU_Msk
#define RTC_DR_MU_0 (0x1UL << RTC_DR_MU_Pos) /*!< 0x00000100 */
#define RTC_DR_MU_1 (0x2UL << RTC_DR_MU_Pos) /*!< 0x00000200 */
#define RTC_DR_MU_2 (0x4UL << RTC_DR_MU_Pos) /*!< 0x00000400 */
#define RTC_DR_MU_3 (0x8UL << RTC_DR_MU_Pos) /*!< 0x00000800 */
#define RTC_DR_MT_Pos (12U)
#define RTC_DR_MT_Msk (0x1UL << RTC_DR_MT_Pos) /*!< 0x00001000 */
#define RTC_DR_MT RTC_DR_MT_Msk
#define RTC_DR_WDU_Pos (13U)
#define RTC_DR_WDU_Msk (0x7UL << RTC_DR_WDU_Pos) /*!< 0x0000E000 */
#define RTC_DR_WDU RTC_DR_WDU_Msk
#define RTC_DR_WDU_0 (0x1UL << RTC_DR_WDU_Pos) /*!< 0x00002000 */
#define RTC_DR_WDU_1 (0x2UL << RTC_DR_WDU_Pos) /*!< 0x00004000 */
#define RTC_DR_WDU_2 (0x4UL << RTC_DR_WDU_Pos) /*!< 0x00008000 */
#define RTC_DR_YU_Pos (16U)
#define RTC_DR_YU_Msk (0xFUL << RTC_DR_YU_Pos) /*!< 0x000F0000 */
#define RTC_DR_YU RTC_DR_YU_Msk
#define RTC_DR_YU_0 (0x1UL << RTC_DR_YU_Pos) /*!< 0x00010000 */
#define RTC_DR_YU_1 (0x2UL << RTC_DR_YU_Pos) /*!< 0x00020000 */
#define RTC_DR_YU_2 (0x4UL << RTC_DR_YU_Pos) /*!< 0x00040000 */
#define RTC_DR_YU_3 (0x8UL << RTC_DR_YU_Pos) /*!< 0x00080000 */
#define RTC_DR_YT_Pos (20U)
#define RTC_DR_YT_Msk (0xFUL << RTC_DR_YT_Pos) /*!< 0x00F00000 */
#define RTC_DR_YT RTC_DR_YT_Msk
#define RTC_DR_YT_0 (0x1UL << RTC_DR_YT_Pos) /*!< 0x00100000 */
#define RTC_DR_YT_1 (0x2UL << RTC_DR_YT_Pos) /*!< 0x00200000 */
#define RTC_DR_YT_2 (0x4UL << RTC_DR_YT_Pos) /*!< 0x00400000 */
#define RTC_DR_YT_3 (0x8UL << RTC_DR_YT_Pos) /*!< 0x00800000 */

/********************  Bits definition for RTC_SSR register  ******************/
#define RTC_SSR_SS_Pos (0U)
#define RTC_SSR_SS_Msk (0xFFFFFFFFUL << RTC_SSR_SS_Pos) /*!< 0xFFFFFFFF */
#define RTC_SSR_SS RTC_SSR_SS_Msk

/********************  Bits definition for RTC_ICSR register  ******************/
#define RTC_ICSR_ALRAWF_Pos (0U)
#define RTC_ICSR_ALRAWF_Msk (0x1UL << RTC_ICSR_ALRAWF_Pos) /*!< 0x00000001 */
#define RTC_ICSR_ALRAWF RTC_ICSR_ALRAWF_Msk
#define RTC_ICSR_ALRBWF_Pos (1U)
#define RTC_ICSR_ALRBWF_Msk (0x1UL << RTC_ICSR_ALRBWF_Pos) /*!< 0x00000002 */
#define RTC_ICSR_ALRBWF RTC_ICSR_ALRBWF_Msk
#define RTC_ICSR_WUTWF_Pos (2U)
#define RTC_ICSR_WUTWF_Msk (0x1UL << RTC_ICSR_WUTWF_Pos) /*!< 0x00000004 */
#define RTC_ICSR_WUTWF RTC_ICSR_WUTWF_Msk
#define RTC_ICSR_SHPF_Pos (3U)
#define RTC_ICSR_SHPF_Msk (0x1UL << RTC_ICSR_SHPF_Pos) /*!< 0x00000008 */
#define RTC_ICSR_SHPF RTC_ICSR_SHPF_Msk
#define RTC_ICSR_INITS_Pos (4U)
#define RTC_ICSR_INITS_Msk (0x1UL << RTC_ICSR_INITS_Pos) /*!< 0x00000010 */
#define RTC_ICSR_INITS RTC_ICSR_INITS_Msk
#define RTC_ICSR_RSF_Pos (5U)
#define RTC_ICSR_RSF_Msk (0x1UL << RTC_ICSR_RSF_Pos) /*!< 0x00000020 */
#define RTC_ICSR_RSF RTC_ICSR_RSF_Msk
#define RTC_ICSR_INITF_Pos (6U)
#define RTC_ICSR_INITF_Msk (0x1UL << RTC_ICSR_INITF_Pos) /*!< 0x00000040 */
#define RTC_ICSR_INITF RTC_ICSR_INITF_Msk
#define RTC_ICSR_INIT_Pos (7U)
#define RTC_ICSR_INIT_Msk (0x1UL << RTC_ICSR_INIT_Pos) /*!< 0x00000080 */
#define RTC_ICSR_INIT RTC_ICSR_INIT_Msk
#define RTC_ICSR_BIN_Pos (8U)
#define RTC_ICSR_BIN_Msk (0x3UL << RTC_ICSR_BIN_Pos) /*!< 0x00000300 */
#define RTC_ICSR_BIN RTC_ICSR_BIN_Msk
#define RTC_ICSR_BIN_0 (0x1UL << RTC_ICSR_BIN_Pos) /*!< 0x00000100 */
#define RTC_ICSR_BIN_1 (0x2UL << RTC_ICSR_BIN_Pos) /*!< 0x00000200 */
#define RTC_ICSR_BCDU_Pos (10U)
#define RTC_ICSR_BCDU_Msk (0x7UL << RTC_ICSR_BCDU_Pos) /*!< 0x00001C00 */
#define RTC_ICSR_BCDU RTC_ICSR_BCDU_Msk
#define RTC_ICSR_BCDU_0 (0x1UL << RTC_ICSR_BCDU_Pos) /*!< 0x00000400 */
#define RTC_ICSR_BCDU_1 (0x2UL << RTC_ICSR_BCDU_Pos) /*!< 0x00000800 */
#define RTC_ICSR_BCDU_2 (0x4UL << RTC_ICSR_BCDU_Pos) /*!< 0x00001000 */
#define RTC_ICSR_RECALPF_Pos (16U)
#define RTC_ICSR_RECALPF_Msk (0x1UL << RTC_ICSR_RECALPF_Pos) /*!< 0x00010000 */
#define RTC_ICSR_RECALPF RTC_ICSR_RECALPF_Msk

/********************  Bits definition for RTC_PRER register  *****************/
#define RTC_PRER_PREDIV_S_Pos (0U)
#define RTC_PRER_PREDIV_S_Msk \
    (0x7FFFUL << RTC_PRER_PREDIV_S_Pos) /*!< 0x00007FFF */
#define RTC_PRER_PREDIV_S RTC_PRER_PREDIV_S_Msk
#define RTC_PRER_PREDIV_A_Pos (16U)
#define RTC_PRER_PREDIV_A_Msk \
    (0x7FUL << RTC_PRER_PREDIV_A_Pos) /*!< 0x007F0000 */
#define RTC_PRER_PREDIV_A RTC_PRER_PREDIV_A_Msk

/********************  Bits definition for RTC_WUTR register  *****************/
#define RTC_WUTR_WUT_Pos (0U)
#define RTC_WUTR_WUT_Msk (0xFFFFUL << RTC_WUTR_WUT_Pos) /*!< 0x0000FFFF */
#define RTC_WUTR_WUT RTC_WUTR_WUT_Msk
#define RTC_WUTR_WUTOCLR_Pos (16U)
#define RTC_WUTR_WUTOCLR_Msk \
    (0xFFFFUL << RTC_WUTR_WUTOCLR_Pos) /*!< 0x0000FFFF */
#define RTC_WUTR_WUTOCLR RTC_WUTR_WUTOCLR_Msk

/********************  Bits definition for RTC_CR register  *******************/
#define RTC_CR_WUCKSEL_Pos (0U)
#define RTC_CR_WUCKSEL_Msk (0x7UL << RTC_CR_WUCKSEL_Pos) /*!< 0x00000007 */
#define RTC_CR_WUCKSEL RTC_CR_WUCKSEL_Msk
#define RTC_CR_WUCKSEL_0 (0x1UL << RTC_CR_WUCKSEL_Pos) /*!< 0x00000001 */
#define RTC_CR_WUCKSEL_1 (0x2UL << RTC_CR_WUCKSEL_Pos) /*!< 0x00000002 */
#define RTC_CR_WUCKSEL_2 (0x4UL << RTC_CR_WUCKSEL_Pos) /*!< 0x00000004 */
#define RTC_CR_TSEDGE_Pos (3U)
#define RTC_CR_TSEDGE_Msk (0x1UL << RTC_CR_TSEDGE_Pos) /*!< 0x00000008 */
#define RTC_CR_TSEDGE RTC_CR_TSEDGE_Msk
#define RTC_CR_REFCKON_Pos (4U)
#define RTC_CR_REFCKON_Msk (0x1UL << RTC_CR_REFCKON_Pos) /*!< 0x00000010 */
#define RTC_CR_REFCKON RTC_CR_REFCKON_Msk
#define RTC_CR_BYPSHAD_Pos (5U)
#define RTC_CR_BYPSHAD_Msk (0x1UL << RTC_CR_BYPSHAD_Pos) /*!< 0x00000020 */
#define RTC_CR_BYPSHAD RTC_CR_BYPSHAD_Msk
#define RTC_CR_FMT_Pos (6U)
#define RTC_CR_FMT_Msk (0x1UL << RTC_CR_FMT_Pos) /*!< 0x00000040 */
#define RTC_CR_FMT RTC_CR_FMT_Msk
#define RTC_CR_SSRUIE_Pos (7U)
#define RTC_CR_SSRUIE_Msk (0x1UL << RTC_CR_SSRUIE_Pos) /*!< 0x00000080 */
#define RTC_CR_SSRUIE RTC_CR_SSRUIE_Msk
#define RTC_CR_ALRAE_Pos (8U)
#define RTC_CR_ALRAE_Msk (0x1UL << RTC_CR_ALRAE_Pos) /*!< 0x00000100 */
#define RTC_CR_ALRAE RTC_CR_ALRAE_Msk
#define RTC_CR_ALRBE_Pos (9U)
#define RTC_CR_ALRBE_Msk (0x1UL << RTC_CR_ALRBE_Pos) /*!< 0x00000200 */
#define RTC_CR_ALRBE RTC_CR_ALRBE_Msk
#define RTC_CR_WUTE_Pos (10U)
#define RTC_CR_WUTE_Msk (0x1UL << RTC_CR_WUTE_Pos) /*!< 0x00000400 */
#define RTC_CR_WUTE RTC_CR_WUTE_Msk
#define RTC_CR_TSE_Pos (11U)
#define RTC_CR_TSE_Msk (0x1UL << RTC_CR_TSE_Pos) /*!< 0x00000800 */
#define RTC_CR_TSE RTC_CR_TSE_Msk
#define RTC_CR_ALRAIE_Pos (12U)
#define RTC_CR_ALRAIE_Msk (0x1UL << RTC_CR_ALRAIE_Pos) /*!< 0x00001000 */
#define RTC_CR_ALRAIE RTC_CR_ALRAIE_Msk
#define RTC_CR_ALRBIE_Pos (13U)
#define RTC_CR_ALRBIE_Msk (0x1UL << RTC_CR_ALRBIE_Pos) /*!< 0x00002000 */
#define RTC_CR_ALRBIE RTC_CR_ALRBIE_Msk
#define RTC_CR_WUTIE_Pos (14U)
#define RTC_CR_WUTIE_Msk (0x1UL << RTC_CR_WUTIE_Pos) /*!< 0x00004000 */
#define RTC_CR_WUTIE RTC_CR_WUTIE_Msk
#define RTC_CR_TSIE_Pos (15U)
#define RTC_CR_TSIE_Msk (0x1UL << RTC_CR_TSIE_Pos) /*!< 0x00008000 */
#define RTC_CR_TSIE RTC_CR_TSIE_Msk
#define RTC_CR_ADD1H_Pos (16U)
#define RTC_CR_ADD1H_Msk (0x1UL << RTC_CR_ADD1H_Pos) /*!< 0x00010000 */
#define RTC_CR_ADD1H RTC_CR_ADD1H_Msk
#define RTC_CR_SUB1H_Pos (17U)
#define RTC_CR_SUB1H_Msk (0x1UL << RTC_CR_SUB1H_Pos) /*!< 0x00020000 */
#define RTC_CR_SUB1H RTC_CR_SUB1H_Msk
#define RTC_CR_BKP_Pos (18U)
#define RTC_CR_BKP_Msk (0x1UL << RTC_CR_BKP_Pos) /*!< 0x00040000 */
#define RTC_CR_BKP RTC_CR_BKP_Msk
#define RTC_CR_COSEL_Pos (19U)
#define RTC_CR_COSEL_Msk (0x1UL << RTC_CR_COSEL_Pos) /*!< 0x00080000 */
#define RTC_CR_COSEL RTC_CR_COSEL_Msk
#define RTC_CR_POL_Pos (20U)
#define RTC_CR_POL_Msk (0x1UL << RTC_CR_POL_Pos) /*!< 0x00100000 */
#define RTC_CR_POL RTC_CR_POL_Msk
#define RTC_CR_OSEL_Pos (21U)
#define RTC_CR_OSEL_Msk (0x3UL << RTC_CR_OSEL_Pos) /*!< 0x00600000 */
#define RTC_CR_OSEL RTC_CR_OSEL_Msk
#define RTC_CR_OSEL_0 (0x1UL << RTC_CR_OSEL_Pos) /*!< 0x00200000 */
#define RTC_CR_OSEL_1 (0x2UL << RTC_CR_OSEL_Pos) /*!< 0x00400000 */
#define RTC_CR_COE_Pos (23U)
#define RTC_CR_COE_Msk (0x1UL << RTC_CR_COE_Pos) /*!< 0x00800000 */
#define RTC_CR_COE RTC_CR_COE_Msk
#define RTC_CR_ITSE_Pos (24U)
#define RTC_CR_ITSE_Msk (0x1UL << RTC_CR_ITSE_Pos) /*!< 0x01000000 */
#define RTC_CR_ITSE RTC_CR_ITSE_Msk /*!<Timestamp on internal event enable  */
#define RTC_CR_TAMPTS_Pos (25U)
#define RTC_CR_TAMPTS_Msk (0x1UL << RTC_CR_TAMPTS_Pos) /*!< 0x02000000 */
#define RTC_CR_TAMPTS \
    RTC_CR_TAMPTS_Msk /*!<Activate timestamp on tamper detection event  */
#define RTC_CR_TAMPOE_Pos (26U)
#define RTC_CR_TAMPOE_Msk (0x1UL << RTC_CR_TAMPOE_Pos) /*!< 0x04000000 */
#define RTC_CR_TAMPOE \
    RTC_CR_TAMPOE_Msk /*!<Tamper detection output enable on TAMPALARM  */
#define RTC_CR_ALRAFCLR_Pos (27U)
#define RTC_CR_ALRAFCLR_Msk (0x1UL << RTC_CR_ALRAFCLR_Pos) /*!< 0x8000000 */
#define RTC_CR_ALRAFCLR RTC_CR_ALRAFCLR_Msk                /*!<Alarm A mask */
#define RTC_CR_ALRBFCLR_Pos (28U)
#define RTC_CR_ALRBFCLR_Msk (0x1UL << RTC_CR_ALRBFCLR_Pos) /*!< 0x10000000 */
#define RTC_CR_ALRBFCLR RTC_CR_ALRBFCLR_Msk                /*!<Alarm B mask */
#define RTC_CR_TAMPALRM_PU_Pos (29U)
#define RTC_CR_TAMPALRM_PU_Msk \
    (0x1UL << RTC_CR_TAMPALRM_PU_Pos) /*!< 0x20000000 */
#define RTC_CR_TAMPALRM_PU \
    RTC_CR_TAMPALRM_PU_Msk /*!<TAMPALARM output pull-up config */
#define RTC_CR_TAMPALRM_TYPE_Pos (30U)
#define RTC_CR_TAMPALRM_TYPE_Msk \
    (0x1UL << RTC_CR_TAMPALRM_TYPE_Pos) /*!< 0x40000000 */
#define RTC_CR_TAMPALRM_TYPE \
    RTC_CR_TAMPALRM_TYPE_Msk /*!<TAMPALARM output type  */
#define RTC_CR_OUT2EN_Pos (31U)
#define RTC_CR_OUT2EN_Msk (0x1UL << RTC_CR_OUT2EN_Pos) /*!< 0x80000000 */
#define RTC_CR_OUT2EN RTC_CR_OUT2EN_Msk /*!<RTC_OUT2 output enable */

/********************  Bits definition for RTC_PRIVCFGR register  *****************/
#define RTC_PRIVCFGR_ALRAPRIV_Pos (0U)
#define RTC_PRIVCFGR_ALRAPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_ALRAPRIV_Pos) /*!< 0x00000001 */
#define RTC_PRIVCFGR_ALRAPRIV RTC_PRIVCFGR_ALRAPRIV_Msk
#define RTC_PRIVCFGR_ALRBPRIV_Pos (1U)
#define RTC_PRIVCFGR_ALRBPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_ALRBPRIV_Pos) /*!< 0x00000002 */
#define RTC_PRIVCFGR_ALRBPRIV RTC_PRIVCFGR_ALRBPRIV_Msk
#define RTC_PRIVCFGR_WUTPRIV_Pos (2U)
#define RTC_PRIVCFGR_WUTPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_WUTPRIV_Pos) /*!< 0x00000004 */
#define RTC_PRIVCFGR_WUTPRIV RTC_PRIVCFGR_WUTPRIV_Msk
#define RTC_PRIVCFGR_TSPRIV_Pos (3U)
#define RTC_PRIVCFGR_TSPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_TSPRIV_Pos) /*!< 0x00000008 */
#define RTC_PRIVCFGR_TSPRIV RTC_PRIVCFGR_TSPRIV_Msk
#define RTC_PRIVCFGR_CALPRIV_Pos (13U)
#define RTC_PRIVCFGR_CALPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_CALPRIV_Pos) /*!< 0x00002000 */
#define RTC_PRIVCFGR_CALPRIV RTC_PRIVCFGR_CALPRIV_Msk
#define RTC_PRIVCFGR_INITPRIV_Pos (14U)
#define RTC_PRIVCFGR_INITPRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_INITPRIV_Pos) /*!< 0x00004000 */
#define RTC_PRIVCFGR_INITPRIV RTC_PRIVCFGR_INITPRIV_Msk
#define RTC_PRIVCFGR_PRIV_Pos (15U)
#define RTC_PRIVCFGR_PRIV_Msk \
    (0x1UL << RTC_PRIVCFGR_PRIV_Pos) /*!< 0x00008000 */
#define RTC_PRIVCFGR_PRIV RTC_PRIVCFGR_PRIV_Msk

/********************  Bits definition for RTC_WPR register  ******************/
#define RTC_WPR_KEY_Pos (0U)
#define RTC_WPR_KEY_Msk (0xFFUL << RTC_WPR_KEY_Pos) /*!< 0x000000FF */
#define RTC_WPR_KEY RTC_WPR_KEY_Msk

/********************  Bits definition for RTC_CALR register  *****************/
#define RTC_CALR_CALM_Pos (0U)
#define RTC_CALR_CALM_Msk (0x1FFUL << RTC_CALR_CALM_Pos) /*!< 0x000001FF */
#define RTC_CALR_CALM RTC_CALR_CALM_Msk
#define RTC_CALR_CALM_0 (0x001UL << RTC_CALR_CALM_Pos) /*!< 0x00000001 */
#define RTC_CALR_CALM_1 (0x002UL << RTC_CALR_CALM_Pos) /*!< 0x00000002 */
#define RTC_CALR_CALM_2 (0x004UL << RTC_CALR_CALM_Pos) /*!< 0x00000004 */
#define RTC_CALR_CALM_3 (0x008UL << RTC_CALR_CALM_Pos) /*!< 0x00000008 */
#define RTC_CALR_CALM_4 (0x010UL << RTC_CALR_CALM_Pos) /*!< 0x00000010 */
#define RTC_CALR_CALM_5 (0x020UL << RTC_CALR_CALM_Pos) /*!< 0x00000020 */
#define RTC_CALR_CALM_6 (0x040UL << RTC_CALR_CALM_Pos) /*!< 0x00000040 */
#define RTC_CALR_CALM_7 (0x080UL << RTC_CALR_CALM_Pos) /*!< 0x00000080 */
#define RTC_CALR_CALM_8 (0x100UL << RTC_CALR_CALM_Pos) /*!< 0x00000100 */
#define RTC_CALR_LPCAL_Pos (12U)
#define RTC_CALR_LPCAL_Msk (0x1UL << RTC_CALR_LPCAL_Pos) /*!< 0x00001000 */
#define RTC_CALR_CALW16 RTC_CALR_CALW16_Msk
#define RTC_CALR_CALW16_Pos (13U)
#define RTC_CALR_CALW16_Msk (0x1UL << RTC_CALR_CALW16_Pos) /*!< 0x00002000 */
#define RTC_CALR_LPCAL RTC_CALR_LPCAL_Msk
#define RTC_CALR_CALW8_Pos (14U)
#define RTC_CALR_CALW8_Msk (0x1UL << RTC_CALR_CALW8_Pos) /*!< 0x00004000 */
#define RTC_CALR_CALW8 RTC_CALR_CALW8_Msk
#define RTC_CALR_CALP_Pos (15U)
#define RTC_CALR_CALP_Msk (0x1UL << RTC_CALR_CALP_Pos) /*!< 0x00008000 */
#define RTC_CALR_CALP RTC_CALR_CALP_Msk

/********************  Bits definition for RTC_SHIFTR register  ***************/
#define RTC_SHIFTR_SUBFS_Pos (0U)
#define RTC_SHIFTR_SUBFS_Msk \
    (0x7FFFUL << RTC_SHIFTR_SUBFS_Pos) /*!< 0x00007FFF */
#define RTC_SHIFTR_SUBFS RTC_SHIFTR_SUBFS_Msk
#define RTC_SHIFTR_ADD1S_Pos (31U)
#define RTC_SHIFTR_ADD1S_Msk (0x1UL << RTC_SHIFTR_ADD1S_Pos) /*!< 0x80000000 */
#define RTC_SHIFTR_ADD1S RTC_SHIFTR_ADD1S_Msk

/********************  Bits definition for RTC_TSTR register  *****************/
#define RTC_TSTR_SU_Pos (0U)
#define RTC_TSTR_SU_Msk (0xFUL << RTC_TSTR_SU_Pos) /*!< 0x0000000F */
#define RTC_TSTR_SU RTC_TSTR_SU_Msk
#define RTC_TSTR_SU_0 (0x1UL << RTC_TSTR_SU_Pos) /*!< 0x00000001 */
#define RTC_TSTR_SU_1 (0x2UL << RTC_TSTR_SU_Pos) /*!< 0x00000002 */
#define RTC_TSTR_SU_2 (0x4UL << RTC_TSTR_SU_Pos) /*!< 0x00000004 */
#define RTC_TSTR_SU_3 (0x8UL << RTC_TSTR_SU_Pos) /*!< 0x00000008 */
#define RTC_TSTR_ST_Pos (4U)
#define RTC_TSTR_ST_Msk (0x7UL << RTC_TSTR_ST_Pos) /*!< 0x00000070 */
#define RTC_TSTR_ST RTC_TSTR_ST_Msk
#define RTC_TSTR_ST_0 (0x1UL << RTC_TSTR_ST_Pos) /*!< 0x00000010 */
#define RTC_TSTR_ST_1 (0x2UL << RTC_TSTR_ST_Pos) /*!< 0x00000020 */
#define RTC_TSTR_ST_2 (0x4UL << RTC_TSTR_ST_Pos) /*!< 0x00000040 */
#define RTC_TSTR_MNU_Pos (8U)
#define RTC_TSTR_MNU_Msk (0xFUL << RTC_TSTR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_TSTR_MNU RTC_TSTR_MNU_Msk
#define RTC_TSTR_MNU_0 (0x1UL << RTC_TSTR_MNU_Pos) /*!< 0x00000100 */
#define RTC_TSTR_MNU_1 (0x2UL << RTC_TSTR_MNU_Pos) /*!< 0x00000200 */
#define RTC_TSTR_MNU_2 (0x4UL << RTC_TSTR_MNU_Pos) /*!< 0x00000400 */
#define RTC_TSTR_MNU_3 (0x8UL << RTC_TSTR_MNU_Pos) /*!< 0x00000800 */
#define RTC_TSTR_MNT_Pos (12U)
#define RTC_TSTR_MNT_Msk (0x7UL << RTC_TSTR_MNT_Pos) /*!< 0x00007000 */
#define RTC_TSTR_MNT RTC_TSTR_MNT_Msk
#define RTC_TSTR_MNT_0 (0x1UL << RTC_TSTR_MNT_Pos) /*!< 0x00001000 */
#define RTC_TSTR_MNT_1 (0x2UL << RTC_TSTR_MNT_Pos) /*!< 0x00002000 */
#define RTC_TSTR_MNT_2 (0x4UL << RTC_TSTR_MNT_Pos) /*!< 0x00004000 */
#define RTC_TSTR_HU_Pos (16U)
#define RTC_TSTR_HU_Msk (0xFUL << RTC_TSTR_HU_Pos) /*!< 0x000F0000 */
#define RTC_TSTR_HU RTC_TSTR_HU_Msk
#define RTC_TSTR_HU_0 (0x1UL << RTC_TSTR_HU_Pos) /*!< 0x00010000 */
#define RTC_TSTR_HU_1 (0x2UL << RTC_TSTR_HU_Pos) /*!< 0x00020000 */
#define RTC_TSTR_HU_2 (0x4UL << RTC_TSTR_HU_Pos) /*!< 0x00040000 */
#define RTC_TSTR_HU_3 (0x8UL << RTC_TSTR_HU_Pos) /*!< 0x00080000 */
#define RTC_TSTR_HT_Pos (20U)
#define RTC_TSTR_HT_Msk (0x3UL << RTC_TSTR_HT_Pos) /*!< 0x00300000 */
#define RTC_TSTR_HT RTC_TSTR_HT_Msk
#define RTC_TSTR_HT_0 (0x1UL << RTC_TSTR_HT_Pos) /*!< 0x00100000 */
#define RTC_TSTR_HT_1 (0x2UL << RTC_TSTR_HT_Pos) /*!< 0x00200000 */
#define RTC_TSTR_PM_Pos (22U)
#define RTC_TSTR_PM_Msk (0x1UL << RTC_TSTR_PM_Pos) /*!< 0x00400000 */
#define RTC_TSTR_PM RTC_TSTR_PM_Msk

/********************  Bits definition for RTC_TSDR register  *****************/
#define RTC_TSDR_DU_Pos (0U)
#define RTC_TSDR_DU_Msk (0xFUL << RTC_TSDR_DU_Pos) /*!< 0x0000000F */
#define RTC_TSDR_DU RTC_TSDR_DU_Msk
#define RTC_TSDR_DU_0 (0x1UL << RTC_TSDR_DU_Pos) /*!< 0x00000001 */
#define RTC_TSDR_DU_1 (0x2UL << RTC_TSDR_DU_Pos) /*!< 0x00000002 */
#define RTC_TSDR_DU_2 (0x4UL << RTC_TSDR_DU_Pos) /*!< 0x00000004 */
#define RTC_TSDR_DU_3 (0x8UL << RTC_TSDR_DU_Pos) /*!< 0x00000008 */
#define RTC_TSDR_DT_Pos (4U)
#define RTC_TSDR_DT_Msk (0x3UL << RTC_TSDR_DT_Pos) /*!< 0x00000030 */
#define RTC_TSDR_DT RTC_TSDR_DT_Msk
#define RTC_TSDR_DT_0 (0x1UL << RTC_TSDR_DT_Pos) /*!< 0x00000010 */
#define RTC_TSDR_DT_1 (0x2UL << RTC_TSDR_DT_Pos) /*!< 0x00000020 */
#define RTC_TSDR_MU_Pos (8U)
#define RTC_TSDR_MU_Msk (0xFUL << RTC_TSDR_MU_Pos) /*!< 0x00000F00 */
#define RTC_TSDR_MU RTC_TSDR_MU_Msk
#define RTC_TSDR_MU_0 (0x1UL << RTC_TSDR_MU_Pos) /*!< 0x00000100 */
#define RTC_TSDR_MU_1 (0x2UL << RTC_TSDR_MU_Pos) /*!< 0x00000200 */
#define RTC_TSDR_MU_2 (0x4UL << RTC_TSDR_MU_Pos) /*!< 0x00000400 */
#define RTC_TSDR_MU_3 (0x8UL << RTC_TSDR_MU_Pos) /*!< 0x00000800 */
#define RTC_TSDR_MT_Pos (12U)
#define RTC_TSDR_MT_Msk (0x1UL << RTC_TSDR_MT_Pos) /*!< 0x00001000 */
#define RTC_TSDR_MT RTC_TSDR_MT_Msk
#define RTC_TSDR_WDU_Pos (13U)
#define RTC_TSDR_WDU_Msk (0x7UL << RTC_TSDR_WDU_Pos) /*!< 0x0000E000 */
#define RTC_TSDR_WDU RTC_TSDR_WDU_Msk
#define RTC_TSDR_WDU_0 (0x1UL << RTC_TSDR_WDU_Pos) /*!< 0x00002000 */
#define RTC_TSDR_WDU_1 (0x2UL << RTC_TSDR_WDU_Pos) /*!< 0x00004000 */
#define RTC_TSDR_WDU_2 (0x4UL << RTC_TSDR_WDU_Pos) /*!< 0x00008000 */

/********************  Bits definition for RTC_TSSSR register  ****************/
#define RTC_TSSSR_SS_Pos (0U)
#define RTC_TSSSR_SS_Msk (0xFFFFFFFFUL << RTC_TSSSR_SS_Pos) /*!< 0xFFFFFFFF */
#define RTC_TSSSR_SS RTC_TSSSR_SS_Msk /*!< rtc timestamp sub second > */

/********************  Bits definition for RTC_ALRMAR register  ***************/
#define RTC_ALRMAR_SU_Pos (0U)
#define RTC_ALRMAR_SU_Msk (0xFUL << RTC_ALRMAR_SU_Pos) /*!< 0x0000000F */
#define RTC_ALRMAR_SU RTC_ALRMAR_SU_Msk
#define RTC_ALRMAR_SU_0 (0x1UL << RTC_ALRMAR_SU_Pos) /*!< 0x00000001 */
#define RTC_ALRMAR_SU_1 (0x2UL << RTC_ALRMAR_SU_Pos) /*!< 0x00000002 */
#define RTC_ALRMAR_SU_2 (0x4UL << RTC_ALRMAR_SU_Pos) /*!< 0x00000004 */
#define RTC_ALRMAR_SU_3 (0x8UL << RTC_ALRMAR_SU_Pos) /*!< 0x00000008 */
#define RTC_ALRMAR_ST_Pos (4U)
#define RTC_ALRMAR_ST_Msk (0x7UL << RTC_ALRMAR_ST_Pos) /*!< 0x00000070 */
#define RTC_ALRMAR_ST RTC_ALRMAR_ST_Msk
#define RTC_ALRMAR_ST_0 (0x1UL << RTC_ALRMAR_ST_Pos) /*!< 0x00000010 */
#define RTC_ALRMAR_ST_1 (0x2UL << RTC_ALRMAR_ST_Pos) /*!< 0x00000020 */
#define RTC_ALRMAR_ST_2 (0x4UL << RTC_ALRMAR_ST_Pos) /*!< 0x00000040 */
#define RTC_ALRMAR_MSK1_Pos (7U)
#define RTC_ALRMAR_MSK1_Msk (0x1UL << RTC_ALRMAR_MSK1_Pos) /*!< 0x00000080 */
#define RTC_ALRMAR_MSK1 RTC_ALRMAR_MSK1_Msk
#define RTC_ALRMAR_MNU_Pos (8U)
#define RTC_ALRMAR_MNU_Msk (0xFUL << RTC_ALRMAR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_ALRMAR_MNU RTC_ALRMAR_MNU_Msk
#define RTC_ALRMAR_MNU_0 (0x1UL << RTC_ALRMAR_MNU_Pos) /*!< 0x00000100 */
#define RTC_ALRMAR_MNU_1 (0x2UL << RTC_ALRMAR_MNU_Pos) /*!< 0x00000200 */
#define RTC_ALRMAR_MNU_2 (0x4UL << RTC_ALRMAR_MNU_Pos) /*!< 0x00000400 */
#define RTC_ALRMAR_MNU_3 (0x8UL << RTC_ALRMAR_MNU_Pos) /*!< 0x00000800 */
#define RTC_ALRMAR_MNT_Pos (12U)
#define RTC_ALRMAR_MNT_Msk (0x7UL << RTC_ALRMAR_MNT_Pos) /*!< 0x00007000 */
#define RTC_ALRMAR_MNT RTC_ALRMAR_MNT_Msk
#define RTC_ALRMAR_MNT_0 (0x1UL << RTC_ALRMAR_MNT_Pos) /*!< 0x00001000 */
#define RTC_ALRMAR_MNT_1 (0x2UL << RTC_ALRMAR_MNT_Pos) /*!< 0x00002000 */
#define RTC_ALRMAR_MNT_2 (0x4UL << RTC_ALRMAR_MNT_Pos) /*!< 0x00004000 */
#define RTC_ALRMAR_MSK2_Pos (15U)
#define RTC_ALRMAR_MSK2_Msk (0x1UL << RTC_ALRMAR_MSK2_Pos) /*!< 0x00008000 */
#define RTC_ALRMAR_MSK2 RTC_ALRMAR_MSK2_Msk
#define RTC_ALRMAR_HU_Pos (16U)
#define RTC_ALRMAR_HU_Msk (0xFUL << RTC_ALRMAR_HU_Pos) /*!< 0x000F0000 */
#define RTC_ALRMAR_HU RTC_ALRMAR_HU_Msk
#define RTC_ALRMAR_HU_0 (0x1UL << RTC_ALRMAR_HU_Pos) /*!< 0x00010000 */
#define RTC_ALRMAR_HU_1 (0x2UL << RTC_ALRMAR_HU_Pos) /*!< 0x00020000 */
#define RTC_ALRMAR_HU_2 (0x4UL << RTC_ALRMAR_HU_Pos) /*!< 0x00040000 */
#define RTC_ALRMAR_HU_3 (0x8UL << RTC_ALRMAR_HU_Pos) /*!< 0x00080000 */
#define RTC_ALRMAR_HT_Pos (20U)
#define RTC_ALRMAR_HT_Msk (0x3UL << RTC_ALRMAR_HT_Pos) /*!< 0x00300000 */
#define RTC_ALRMAR_HT RTC_ALRMAR_HT_Msk
#define RTC_ALRMAR_HT_0 (0x1UL << RTC_ALRMAR_HT_Pos) /*!< 0x00100000 */
#define RTC_ALRMAR_HT_1 (0x2UL << RTC_ALRMAR_HT_Pos) /*!< 0x00200000 */
#define RTC_ALRMAR_PM_Pos (22U)
#define RTC_ALRMAR_PM_Msk (0x1UL << RTC_ALRMAR_PM_Pos) /*!< 0x00400000 */
#define RTC_ALRMAR_PM RTC_ALRMAR_PM_Msk
#define RTC_ALRMAR_MSK3_Pos (23U)
#define RTC_ALRMAR_MSK3_Msk (0x1UL << RTC_ALRMAR_MSK3_Pos) /*!< 0x00800000 */
#define RTC_ALRMAR_MSK3 RTC_ALRMAR_MSK3_Msk
#define RTC_ALRMAR_DU_Pos (24U)
#define RTC_ALRMAR_DU_Msk (0xFUL << RTC_ALRMAR_DU_Pos) /*!< 0x0F000000 */
#define RTC_ALRMAR_DU RTC_ALRMAR_DU_Msk
#define RTC_ALRMAR_DU_0 (0x1UL << RTC_ALRMAR_DU_Pos) /*!< 0x01000000 */
#define RTC_ALRMAR_DU_1 (0x2UL << RTC_ALRMAR_DU_Pos) /*!< 0x02000000 */
#define RTC_ALRMAR_DU_2 (0x4UL << RTC_ALRMAR_DU_Pos) /*!< 0x04000000 */
#define RTC_ALRMAR_DU_3 (0x8UL << RTC_ALRMAR_DU_Pos) /*!< 0x08000000 */
#define RTC_ALRMAR_DT_Pos (28U)
#define RTC_ALRMAR_DT_Msk (0x3UL << RTC_ALRMAR_DT_Pos) /*!< 0x30000000 */
#define RTC_ALRMAR_DT RTC_ALRMAR_DT_Msk
#define RTC_ALRMAR_DT_0 (0x1UL << RTC_ALRMAR_DT_Pos) /*!< 0x10000000 */
#define RTC_ALRMAR_DT_1 (0x2UL << RTC_ALRMAR_DT_Pos) /*!< 0x20000000 */
#define RTC_ALRMAR_WDSEL_Pos (30U)
#define RTC_ALRMAR_WDSEL_Msk (0x1UL << RTC_ALRMAR_WDSEL_Pos) /*!< 0x40000000 */
#define RTC_ALRMAR_WDSEL RTC_ALRMAR_WDSEL_Msk
#define RTC_ALRMAR_MSK4_Pos (31U)
#define RTC_ALRMAR_MSK4_Msk (0x1UL << RTC_ALRMAR_MSK4_Pos) /*!< 0x80000000 */
#define RTC_ALRMAR_MSK4 RTC_ALRMAR_MSK4_Msk

/********************  Bits definition for RTC_ALRMASSR register  *************/
#define RTC_ALRMASSR_SS_Pos (0U)
#define RTC_ALRMASSR_SS_Msk (0x7FFFUL << RTC_ALRMASSR_SS_Pos) /*!< 0x00007FFF */
#define RTC_ALRMASSR_SS RTC_ALRMASSR_SS_Msk
#define RTC_ALRMASSR_MASKSS_Pos (24U)
#define RTC_ALRMASSR_MASKSS_Msk \
    (0x3FUL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x3F000000 */
#define RTC_ALRMASSR_MASKSS RTC_ALRMASSR_MASKSS_Msk
#define RTC_ALRMASSR_MASKSS_0 \
    (0x1UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x01000000 */
#define RTC_ALRMASSR_MASKSS_1 \
    (0x2UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x02000000 */
#define RTC_ALRMASSR_MASKSS_2 \
    (0x4UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x04000000 */
#define RTC_ALRMASSR_MASKSS_3 \
    (0x8UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x08000000 */
#define RTC_ALRMASSR_MASKSS_4 \
    (0x10UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x10000000 */
#define RTC_ALRMASSR_MASKSS_5 \
    (0x20UL << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x20000000 */
#define RTC_ALRMASSR_SSCLR_Pos (31U)
#define RTC_ALRMASSR_SSCLR_Msk \
    (0x1UL << RTC_ALRMASSR_SSCLR_Pos) /*!< 0x80000000 */
#define RTC_ALRMASSR_SSCLR RTC_ALRMASSR_SSCLR_Msk

/********************  Bits definition for RTC_ALRMBR register  ***************/
#define RTC_ALRMBR_SU_Pos (0U)
#define RTC_ALRMBR_SU_Msk (0xFUL << RTC_ALRMBR_SU_Pos) /*!< 0x0000000F */
#define RTC_ALRMBR_SU RTC_ALRMBR_SU_Msk
#define RTC_ALRMBR_SU_0 (0x1UL << RTC_ALRMBR_SU_Pos) /*!< 0x00000001 */
#define RTC_ALRMBR_SU_1 (0x2UL << RTC_ALRMBR_SU_Pos) /*!< 0x00000002 */
#define RTC_ALRMBR_SU_2 (0x4UL << RTC_ALRMBR_SU_Pos) /*!< 0x00000004 */
#define RTC_ALRMBR_SU_3 (0x8UL << RTC_ALRMBR_SU_Pos) /*!< 0x00000008 */
#define RTC_ALRMBR_ST_Pos (4U)
#define RTC_ALRMBR_ST_Msk (0x7UL << RTC_ALRMBR_ST_Pos) /*!< 0x00000070 */
#define RTC_ALRMBR_ST RTC_ALRMBR_ST_Msk
#define RTC_ALRMBR_ST_0 (0x1UL << RTC_ALRMBR_ST_Pos) /*!< 0x00000010 */
#define RTC_ALRMBR_ST_1 (0x2UL << RTC_ALRMBR_ST_Pos) /*!< 0x00000020 */
#define RTC_ALRMBR_ST_2 (0x4UL << RTC_ALRMBR_ST_Pos) /*!< 0x00000040 */
#define RTC_ALRMBR_MSK1_Pos (7U)
#define RTC_ALRMBR_MSK1_Msk (0x1UL << RTC_ALRMBR_MSK1_Pos) /*!< 0x00000080 */
#define RTC_ALRMBR_MSK1 RTC_ALRMBR_MSK1_Msk
#define RTC_ALRMBR_MNU_Pos (8U)
#define RTC_ALRMBR_MNU_Msk (0xFUL << RTC_ALRMBR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_ALRMBR_MNU RTC_ALRMBR_MNU_Msk
#define RTC_ALRMBR_MNU_0 (0x1UL << RTC_ALRMBR_MNU_Pos) /*!< 0x00000100 */
#define RTC_ALRMBR_MNU_1 (0x2UL << RTC_ALRMBR_MNU_Pos) /*!< 0x00000200 */
#define RTC_ALRMBR_MNU_2 (0x4UL << RTC_ALRMBR_MNU_Pos) /*!< 0x00000400 */
#define RTC_ALRMBR_MNU_3 (0x8UL << RTC_ALRMBR_MNU_Pos) /*!< 0x00000800 */
#define RTC_ALRMBR_MNT_Pos (12U)
#define RTC_ALRMBR_MNT_Msk (0x7UL << RTC_ALRMBR_MNT_Pos) /*!< 0x00007000 */
#define RTC_ALRMBR_MNT RTC_ALRMBR_MNT_Msk
#define RTC_ALRMBR_MNT_0 (0x1UL << RTC_ALRMBR_MNT_Pos) /*!< 0x00001000 */
#define RTC_ALRMBR_MNT_1 (0x2UL << RTC_ALRMBR_MNT_Pos) /*!< 0x00002000 */
#define RTC_ALRMBR_MNT_2 (0x4UL << RTC_ALRMBR_MNT_Pos) /*!< 0x00004000 */
#define RTC_ALRMBR_MSK2_Pos (15U)
#define RTC_ALRMBR_MSK2_Msk (0x1UL << RTC_ALRMBR_MSK2_Pos) /*!< 0x00008000 */
#define RTC_ALRMBR_MSK2 RTC_ALRMBR_MSK2_Msk
#define RTC_ALRMBR_HU_Pos (16U)
#define RTC_ALRMBR_HU_Msk (0xFUL << RTC_ALRMBR_HU_Pos) /*!< 0x000F0000 */
#define RTC_ALRMBR_HU RTC_ALRMBR_HU_Msk
#define RTC_ALRMBR_HU_0 (0x1UL << RTC_ALRMBR_HU_Pos) /*!< 0x00010000 */
#define RTC_ALRMBR_HU_1 (0x2UL << RTC_ALRMBR_HU_Pos) /*!< 0x00020000 */
#define RTC_ALRMBR_HU_2 (0x4UL << RTC_ALRMBR_HU_Pos) /*!< 0x00040000 */
#define RTC_ALRMBR_HU_3 (0x8UL << RTC_ALRMBR_HU_Pos) /*!< 0x00080000 */
#define RTC_ALRMBR_HT_Pos (20U)
#define RTC_ALRMBR_HT_Msk (0x3UL << RTC_ALRMBR_HT_Pos) /*!< 0x00300000 */
#define RTC_ALRMBR_HT RTC_ALRMBR_HT_Msk
#define RTC_ALRMBR_HT_0 (0x1UL << RTC_ALRMBR_HT_Pos) /*!< 0x00100000 */
#define RTC_ALRMBR_HT_1 (0x2UL << RTC_ALRMBR_HT_Pos) /*!< 0x00200000 */
#define RTC_ALRMBR_PM_Pos (22U)
#define RTC_ALRMBR_PM_Msk (0x1UL << RTC_ALRMBR_PM_Pos) /*!< 0x00400000 */
#define RTC_ALRMBR_PM RTC_ALRMBR_PM_Msk
#define RTC_ALRMBR_MSK3_Pos (23U)
#define RTC_ALRMBR_MSK3_Msk (0x1UL << RTC_ALRMBR_MSK3_Pos) /*!< 0x00800000 */
#define RTC_ALRMBR_MSK3 RTC_ALRMBR_MSK3_Msk
#define RTC_ALRMBR_DU_Pos (24U)
#define RTC_ALRMBR_DU_Msk (0xFUL << RTC_ALRMBR_DU_Pos) /*!< 0x0F000000 */
#define RTC_ALRMBR_DU RTC_ALRMBR_DU_Msk
#define RTC_ALRMBR_DU_0 (0x1UL << RTC_ALRMBR_DU_Pos) /*!< 0x01000000 */
#define RTC_ALRMBR_DU_1 (0x2UL << RTC_ALRMBR_DU_Pos) /*!< 0x02000000 */
#define RTC_ALRMBR_DU_2 (0x4UL << RTC_ALRMBR_DU_Pos) /*!< 0x04000000 */
#define RTC_ALRMBR_DU_3 (0x8UL << RTC_ALRMBR_DU_Pos) /*!< 0x08000000 */
#define RTC_ALRMBR_DT_Pos (28U)
#define RTC_ALRMBR_DT_Msk (0x3UL << RTC_ALRMBR_DT_Pos) /*!< 0x30000000 */
#define RTC_ALRMBR_DT RTC_ALRMBR_DT_Msk
#define RTC_ALRMBR_DT_0 (0x1UL << RTC_ALRMBR_DT_Pos) /*!< 0x10000000 */
#define RTC_ALRMBR_DT_1 (0x2UL << RTC_ALRMBR_DT_Pos) /*!< 0x20000000 */
#define RTC_ALRMBR_WDSEL_Pos (30U)
#define RTC_ALRMBR_WDSEL_Msk (0x1UL << RTC_ALRMBR_WDSEL_Pos) /*!< 0x40000000 */
#define RTC_ALRMBR_WDSEL RTC_ALRMBR_WDSEL_Msk
#define RTC_ALRMBR_MSK4_Pos (31U)
#define RTC_ALRMBR_MSK4_Msk (0x1UL << RTC_ALRMBR_MSK4_Pos) /*!< 0x80000000 */
#define RTC_ALRMBR_MSK4 RTC_ALRMBR_MSK4_Msk

/********************  Bits definition for RTC_ALRMBSSR register  *************/
#define RTC_ALRMBSSR_SS_Pos (0U)
#define RTC_ALRMBSSR_SS_Msk (0x7FFFUL << RTC_ALRMBSSR_SS_Pos) /*!< 0x00007FFF */
#define RTC_ALRMBSSR_SS RTC_ALRMBSSR_SS_Msk
#define RTC_ALRMBSSR_MASKSS_Pos (24U)
#define RTC_ALRMBSSR_MASKSS_Msk \
    (0x3FUL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x3F000000 */
#define RTC_ALRMBSSR_MASKSS RTC_ALRMBSSR_MASKSS_Msk
#define RTC_ALRMBSSR_MASKSS_0 \
    (0x1UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x01000000 */
#define RTC_ALRMBSSR_MASKSS_1 \
    (0x2UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x02000000 */
#define RTC_ALRMBSSR_MASKSS_2 \
    (0x4UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x04000000 */
#define RTC_ALRMBSSR_MASKSS_3 \
    (0x8UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x08000000 */
#define RTC_ALRMBSSR_MASKSS_4 \
    (0x10UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x10000000 */
#define RTC_ALRMBSSR_MASKSS_5 \
    (0x20UL << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x20000000 */
#define RTC_ALRMBSSR_SSCLR_Pos (31U)
#define RTC_ALRMBSSR_SSCLR_Msk \
    (0x1UL << RTC_ALRMBSSR_SSCLR_Pos) /*!< 0x80000000 */
#define RTC_ALRMBSSR_SSCLR RTC_ALRMBSSR_SSCLR_Msk

/********************  Bits definition for RTC_SR register  *******************/
#define RTC_SR_ALRAF_Pos (0U)
#define RTC_SR_ALRAF_Msk (0x1UL << RTC_SR_ALRAF_Pos) /*!< 0x00000001 */
#define RTC_SR_ALRAF RTC_SR_ALRAF_Msk
#define RTC_SR_ALRBF_Pos (1U)
#define RTC_SR_ALRBF_Msk (0x1UL << RTC_SR_ALRBF_Pos) /*!< 0x00000002 */
#define RTC_SR_ALRBF RTC_SR_ALRBF_Msk
#define RTC_SR_WUTF_Pos (2U)
#define RTC_SR_WUTF_Msk (0x1UL << RTC_SR_WUTF_Pos) /*!< 0x00000004 */
#define RTC_SR_WUTF RTC_SR_WUTF_Msk
#define RTC_SR_TSF_Pos (3U)
#define RTC_SR_TSF_Msk (0x1UL << RTC_SR_TSF_Pos) /*!< 0x00000008 */
#define RTC_SR_TSF RTC_SR_TSF_Msk
#define RTC_SR_TSOVF_Pos (4U)
#define RTC_SR_TSOVF_Msk (0x1UL << RTC_SR_TSOVF_Pos) /*!< 0x00000010 */
#define RTC_SR_TSOVF RTC_SR_TSOVF_Msk
#define RTC_SR_ITSF_Pos (5U)
#define RTC_SR_ITSF_Msk (0x1UL << RTC_SR_ITSF_Pos) /*!< 0x00000020 */
#define RTC_SR_ITSF RTC_SR_ITSF_Msk
#define RTC_SR_SSRUF_Pos (6U)
#define RTC_SR_SSRUF_Msk (0x1UL << RTC_SR_SSRUF_Pos) /*!< 0x00000040 */
#define RTC_SR_SSRUF RTC_SR_SSRUF_Msk

/********************  Bits definition for RTC_MISR register  *****************/
#define RTC_MISR_ALRAMF_Pos (0U)
#define RTC_MISR_ALRAMF_Msk (0x1UL << RTC_MISR_ALRAMF_Pos) /*!< 0x00000001 */
#define RTC_MISR_ALRAMF RTC_MISR_ALRAMF_Msk
#define RTC_MISR_ALRBMF_Pos (1U)
#define RTC_MISR_ALRBMF_Msk (0x1UL << RTC_MISR_ALRBMF_Pos) /*!< 0x00000002 */
#define RTC_MISR_ALRBMF RTC_MISR_ALRBMF_Msk
#define RTC_MISR_WUTMF_Pos (2U)
#define RTC_MISR_WUTMF_Msk (0x1UL << RTC_MISR_WUTMF_Pos) /*!< 0x00000004 */
#define RTC_MISR_WUTMF RTC_MISR_WUTMF_Msk
#define RTC_MISR_TSMF_Pos (3U)
#define RTC_MISR_TSMF_Msk (0x1UL << RTC_MISR_TSMF_Pos) /*!< 0x00000008 */
#define RTC_MISR_TSMF RTC_MISR_TSMF_Msk
#define RTC_MISR_TSOVMF_Pos (4U)
#define RTC_MISR_TSOVMF_Msk (0x1UL << RTC_MISR_TSOVMF_Pos) /*!< 0x00000010 */
#define RTC_MISR_TSOVMF RTC_MISR_TSOVMF_Msk
#define RTC_MISR_ITSMF_Pos (5U)
#define RTC_MISR_ITSMF_Msk (0x1UL << RTC_MISR_ITSMF_Pos) /*!< 0x00000020 */
#define RTC_MISR_ITSMF RTC_MISR_ITSMF_Msk
#define RTC_MISR_SSRUMF_Pos (6U)
#define RTC_MISR_SSRUMF_Msk (0x1UL << RTC_MISR_SSRUMF_Pos) /*!< 0x00000040 */
#define RTC_MISR_SSRUMF RTC_MISR_SSRUMF_Msk

/********************  Bits definition for RTC_SCR register  ******************/
#define RTC_SCR_CALRAF_Pos (0U)
#define RTC_SCR_CALRAF_Msk (0x1UL << RTC_SCR_CALRAF_Pos) /*!< 0x00000001 */
#define RTC_SCR_CALRAF RTC_SCR_CALRAF_Msk
#define RTC_SCR_CALRBF_Pos (1U)
#define RTC_SCR_CALRBF_Msk (0x1UL << RTC_SCR_CALRBF_Pos) /*!< 0x00000002 */
#define RTC_SCR_CALRBF RTC_SCR_CALRBF_Msk
#define RTC_SCR_CWUTF_Pos (2U)
#define RTC_SCR_CWUTF_Msk (0x1UL << RTC_SCR_CWUTF_Pos) /*!< 0x00000004 */
#define RTC_SCR_CWUTF RTC_SCR_CWUTF_Msk
#define RTC_SCR_CTSF_Pos (3U)
#define RTC_SCR_CTSF_Msk (0x1UL << RTC_SCR_CTSF_Pos) /*!< 0x00000008 */
#define RTC_SCR_CTSF RTC_SCR_CTSF_Msk
#define RTC_SCR_CTSOVF_Pos (4U)
#define RTC_SCR_CTSOVF_Msk (0x1UL << RTC_SCR_CTSOVF_Pos) /*!< 0x00000010 */
#define RTC_SCR_CTSOVF RTC_SCR_CTSOVF_Msk
#define RTC_SCR_CITSF_Pos (5U)
#define RTC_SCR_CITSF_Msk (0x1UL << RTC_SCR_CITSF_Pos) /*!< 0x00000020 */
#define RTC_SCR_CITSF RTC_SCR_CITSF_Msk
#define RTC_SCR_CSSRUF_Pos (6U)
#define RTC_SCR_CSSRUF_Msk (0x1UL << RTC_SCR_CSSRUF_Pos) /*!< 0x00000040 */
#define RTC_SCR_CSSRUF RTC_SCR_CSSRUF_Msk

/********************  Bits definition for RTC_ALRABINR register  ******************/
#define RTC_ALRABINR_SS_Pos (0U)
#define RTC_ALRABINR_SS_Msk \
    (0xFFFFFFFFUL << RTC_ALRABINR_SS_Pos) /*!< 0xFFFFFFFF */
#define RTC_ALRABINR_SS RTC_ALRABINR_SS_Msk

/********************  Bits definition for RTC_ALRBBINR register  ******************/
#define RTC_ALRBBINR_SS_Pos (0U)
#define RTC_ALRBBINR_SS_Msk \
    (0xFFFFFFFFUL << RTC_ALRBBINR_SS_Pos) /*!< 0xFFFFFFFF */
#define RTC_ALRBBINR_SS RTC_ALRBBINR_SS_Msk

/******************************************************************************/
/*                                                                            */
/*                     Tamper and backup register (TAMP)                      */
/*                                                                            */
/******************************************************************************/
/********************  Bits definition for TAMP_CR1 register  *****************/
#define TAMP_CR1_TAMP1E_Pos (0U)
#define TAMP_CR1_TAMP1E_Msk (0x1UL << TAMP_CR1_TAMP1E_Pos) /*!< 0x00000001 */
#define TAMP_CR1_TAMP1E TAMP_CR1_TAMP1E_Msk
#define TAMP_CR1_TAMP2E_Pos (1U)
#define TAMP_CR1_TAMP2E_Msk (0x1UL << TAMP_CR1_TAMP2E_Pos) /*!< 0x00000002 */
#define TAMP_CR1_TAMP2E TAMP_CR1_TAMP2E_Msk
#define TAMP_CR1_ITAMP1E_Pos (16U)
#define TAMP_CR1_ITAMP1E_Msk (0x1UL << TAMP_CR1_ITAMP1E_Pos) /*!< 0x00010000 */
#define TAMP_CR1_ITAMP1E TAMP_CR1_ITAMP1E_Msk
#define TAMP_CR1_ITAMP2E_Pos (17U)
#define TAMP_CR1_ITAMP2E_Msk (0x1UL << TAMP_CR1_ITAMP2E_Pos) /*!< 0x00020000 */
#define TAMP_CR1_ITAMP2E TAMP_CR1_ITAMP2E_Msk
#define TAMP_CR1_ITAMP3E_Pos (18U)
#define TAMP_CR1_ITAMP3E_Msk (0x1UL << TAMP_CR1_ITAMP3E_Pos) /*!< 0x00040000 */
#define TAMP_CR1_ITAMP3E TAMP_CR1_ITAMP3E_Msk
#define TAMP_CR1_ITAMP4E_Pos (19U)
#define TAMP_CR1_ITAMP4E_Msk (0x1UL << TAMP_CR1_ITAMP4E_Pos) /*!< 0x00080000 */
#define TAMP_CR1_ITAMP4E TAMP_CR1_ITAMP4E_Msk
#define TAMP_CR1_ITAMP5E_Pos (20U)
#define TAMP_CR1_ITAMP5E_Msk (0x1UL << TAMP_CR1_ITAMP5E_Pos) /*!< 0x00100000 */
#define TAMP_CR1_ITAMP5E TAMP_CR1_ITAMP5E_Msk
#define TAMP_CR1_ITAMP6E_Pos (21U)
#define TAMP_CR1_ITAMP6E_Msk (0x1UL << TAMP_CR1_ITAMP6E_Pos) /*!< 0x00200000 */
#define TAMP_CR1_ITAMP6E TAMP_CR1_ITAMP6E_Msk
#define TAMP_CR1_ITAMP7E_Pos (22U)
#define TAMP_CR1_ITAMP7E_Msk (0x1UL << TAMP_CR1_ITAMP7E_Pos) /*!< 0x00400000 */
#define TAMP_CR1_ITAMP7E TAMP_CR1_ITAMP7E_Msk
#define TAMP_CR1_ITAMP8E_Pos (23U)
#define TAMP_CR1_ITAMP8E_Msk (0x1UL << TAMP_CR1_ITAMP8E_Pos) /*!< 0x00800000 */
#define TAMP_CR1_ITAMP8E TAMP_CR1_ITAMP8E_Msk
#define TAMP_CR1_ITAMP9E_Pos (24U)
#define TAMP_CR1_ITAMP9E_Msk (0x1UL << TAMP_CR1_ITAMP9E_Pos) /*!< 0x01000000 */
#define TAMP_CR1_ITAMP9E TAMP_CR1_ITAMP9E_Msk
#define TAMP_CR1_ITAMP11E_Pos (26U)
#define TAMP_CR1_ITAMP11E_Msk \
    (0x1UL << TAMP_CR1_ITAMP11E_Pos) /*!< 0x04000000 */
#define TAMP_CR1_ITAMP11E TAMP_CR1_ITAMP11E_Msk
#define TAMP_CR1_ITAMP12E_Pos (27U)
#define TAMP_CR1_ITAMP12E_Msk \
    (0x1UL << TAMP_CR1_ITAMP12E_Pos) /*!< 0x08000000 */
#define TAMP_CR1_ITAMP12E TAMP_CR1_ITAMP12E_Msk
#define TAMP_CR1_ITAMP13E_Pos (28U)
#define TAMP_CR1_ITAMP13E_Msk \
    (0x1UL << TAMP_CR1_ITAMP13E_Pos) /*!< 0x10000000 */
#define TAMP_CR1_ITAMP13E TAMP_CR1_ITAMP13E_Msk
#define TAMP_CR1_ITAMP15E_Pos (30U)
#define TAMP_CR1_ITAMP15E_Msk \
    (0x1UL << TAMP_CR1_ITAMP15E_Pos) /*!< 0x40000000 */
#define TAMP_CR1_ITAMP15E TAMP_CR1_ITAMP15E_Msk

/********************  Bits definition for TAMP_CR2 register  *****************/
#define TAMP_CR2_TAMP1NOERASE_Pos (0U)
#define TAMP_CR2_TAMP1NOERASE_Msk \
    (0x1UL << TAMP_CR2_TAMP1NOERASE_Pos) /*!< 0x00000001 */
#define TAMP_CR2_TAMP1NOERASE TAMP_CR2_TAMP1NOERASE_Msk
#define TAMP_CR2_TAMP2NOERASE_Pos (1U)
#define TAMP_CR2_TAMP2NOERASE_Msk \
    (0x1UL << TAMP_CR2_TAMP2NOERASE_Pos) /*!< 0x00000002 */
#define TAMP_CR2_TAMP2NOERASE TAMP_CR2_TAMP2NOERASE_Msk
#define TAMP_CR2_TAMP1MSK_Pos (16U)
#define TAMP_CR2_TAMP1MSK_Msk \
    (0x1UL << TAMP_CR2_TAMP1MSK_Pos) /*!< 0x00010000 */
#define TAMP_CR2_TAMP1MSK TAMP_CR2_TAMP1MSK_Msk
#define TAMP_CR2_TAMP2MSK_Pos (17U)
#define TAMP_CR2_TAMP2MSK_Msk \
    (0x1UL << TAMP_CR2_TAMP2MSK_Pos) /*!< 0x00020000 */
#define TAMP_CR2_TAMP2MSK TAMP_CR2_TAMP2MSK_Msk
#define TAMP_CR2_BKBLOCK_Pos (22U)
#define TAMP_CR2_BKBLOCK_Msk (0x1UL << TAMP_CR2_BKBLOCK_Pos) /*!< 0x00400000 */
#define TAMP_CR2_BKBLOCK TAMP_CR2_BKBLOCK_Msk
#define TAMP_CR2_BKERASE_Pos (23U)
#define TAMP_CR2_BKERASE_Msk (0x1UL << TAMP_CR2_BKERASE_Pos) /*!< 0x00800000 */
#define TAMP_CR2_BKERASE TAMP_CR2_BKERASE_Msk
#define TAMP_CR2_TAMP1TRG_Pos (24U)
#define TAMP_CR2_TAMP1TRG_Msk \
    (0x1UL << TAMP_CR2_TAMP1TRG_Pos) /*!< 0x01000000 */
#define TAMP_CR2_TAMP1TRG TAMP_CR2_TAMP1TRG_Msk
#define TAMP_CR2_TAMP2TRG_Pos (25U)
#define TAMP_CR2_TAMP2TRG_Msk \
    (0x1UL << TAMP_CR2_TAMP2TRG_Pos) /*!< 0x02000000 */
#define TAMP_CR2_TAMP2TRG TAMP_CR2_TAMP2TRG_Msk

/********************  Bits definition for TAMP_CR3 register  *****************/
#define TAMP_CR3_ITAMP1NOER_Pos (0U)
#define TAMP_CR3_ITAMP1NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP1NOER_Pos) /*!< 0x00000001 */
#define TAMP_CR3_ITAMP1NOER TAMP_CR3_ITAMP1NOER_Msk
#define TAMP_CR3_ITAMP2NOER_Pos (1U)
#define TAMP_CR3_ITAMP2NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP2NOER_Pos) /*!< 0x00000002 */
#define TAMP_CR3_ITAMP2NOER TAMP_CR3_ITAMP2NOER_Msk
#define TAMP_CR3_ITAMP3NOER_Pos (2U)
#define TAMP_CR3_ITAMP3NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP3NOER_Pos) /*!< 0x00000004 */
#define TAMP_CR3_ITAMP3NOER TAMP_CR3_ITAMP3NOER_Msk
#define TAMP_CR3_ITAMP4NOER_Pos (3U)
#define TAMP_CR3_ITAMP4NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP4NOER_Pos) /*!< 0x00000008 */
#define TAMP_CR3_ITAMP4NOER TAMP_CR3_ITAMP4NOER_Msk
#define TAMP_CR3_ITAMP5NOER_Pos (4U)
#define TAMP_CR3_ITAMP5NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP5NOER_Pos) /*!< 0x00000010 */
#define TAMP_CR3_ITAMP5NOER TAMP_CR3_ITAMP5NOER_Msk
#define TAMP_CR3_ITAMP6NOER_Pos (5U)
#define TAMP_CR3_ITAMP6NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP6NOER_Pos) /*!< 0x00000020 */
#define TAMP_CR3_ITAMP6NOER TAMP_CR3_ITAMP6NOER_Msk
#define TAMP_CR3_ITAMP7NOER_Pos (6U)
#define TAMP_CR3_ITAMP7NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP7NOER_Pos) /*!< 0x00000040 */
#define TAMP_CR3_ITAMP7NOER TAMP_CR3_ITAMP7NOER_Msk
#define TAMP_CR3_ITAMP8NOER_Pos (7U)
#define TAMP_CR3_ITAMP8NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP8NOER_Pos) /*!< 0x00000080 */
#define TAMP_CR3_ITAMP8NOER TAMP_CR3_ITAMP8NOER_Msk
#define TAMP_CR3_ITAMP9NOER_Pos (8U)
#define TAMP_CR3_ITAMP9NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP9NOER_Pos) /*!< 0x00000100 */
#define TAMP_CR3_ITAMP9NOER TAMP_CR3_ITAMP9NOER_Msk
#define TAMP_CR3_ITAMP11NOER_Pos (10U)
#define TAMP_CR3_ITAMP11NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP11NOER_Pos) /*!< 0x00000400 */
#define TAMP_CR3_ITAMP11NOER TAMP_CR3_ITAMP11NOER_Msk
#define TAMP_CR3_ITAMP12NOER_Pos (11U)
#define TAMP_CR3_ITAMP12NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP12NOER_Pos) /*!< 0x00000800 */
#define TAMP_CR3_ITAMP12NOER TAMP_CR3_ITAMP12NOER_Msk
#define TAMP_CR3_ITAMP13NOER_Pos (12U)
#define TAMP_CR3_ITAMP13NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP13NOER_Pos) /*!< 0x00001000 */
#define TAMP_CR3_ITAMP13NOER TAMP_CR3_ITAMP13NOER_Msk
#define TAMP_CR3_ITAMP15NOER_Pos (14U)
#define TAMP_CR3_ITAMP15NOER_Msk \
    (0x1UL << TAMP_CR3_ITAMP15NOER_Pos) /*!< 0x00004000 */
#define TAMP_CR3_ITAMP15NOER TAMP_CR3_ITAMP15NOER_Msk

/********************  Bits definition for TAMP_FLTCR register  ***************/
#define TAMP_FLTCR_TAMPFREQ_Pos (0U)
#define TAMP_FLTCR_TAMPFREQ_Msk \
    (0x7UL << TAMP_FLTCR_TAMPFREQ_Pos) /*!< 0x00000007 */
#define TAMP_FLTCR_TAMPFREQ TAMP_FLTCR_TAMPFREQ_Msk
#define TAMP_FLTCR_TAMPFREQ_0 \
    (0x1UL << TAMP_FLTCR_TAMPFREQ_Pos) /*!< 0x00000001 */
#define TAMP_FLTCR_TAMPFREQ_1 \
    (0x2UL << TAMP_FLTCR_TAMPFREQ_Pos) /*!< 0x00000002 */
#define TAMP_FLTCR_TAMPFREQ_2 \
    (0x4UL << TAMP_FLTCR_TAMPFREQ_Pos) /*!< 0x00000004 */
#define TAMP_FLTCR_TAMPFLT_Pos (3U)
#define TAMP_FLTCR_TAMPFLT_Msk \
    (0x3UL << TAMP_FLTCR_TAMPFLT_Pos) /*!< 0x00000018 */
#define TAMP_FLTCR_TAMPFLT TAMP_FLTCR_TAMPFLT_Msk
#define TAMP_FLTCR_TAMPFLT_0 \
    (0x1UL << TAMP_FLTCR_TAMPFLT_Pos) /*!< 0x00000008 */
#define TAMP_FLTCR_TAMPFLT_1 \
    (0x2UL << TAMP_FLTCR_TAMPFLT_Pos) /*!< 0x00000010 */
#define TAMP_FLTCR_TAMPPRCH_Pos (5U)
#define TAMP_FLTCR_TAMPPRCH_Msk \
    (0x3UL << TAMP_FLTCR_TAMPPRCH_Pos) /*!< 0x00000060 */
#define TAMP_FLTCR_TAMPPRCH TAMP_FLTCR_TAMPPRCH_Msk
#define TAMP_FLTCR_TAMPPRCH_0 \
    (0x1UL << TAMP_FLTCR_TAMPPRCH_Pos) /*!< 0x00000020 */
#define TAMP_FLTCR_TAMPPRCH_1 \
    (0x2UL << TAMP_FLTCR_TAMPPRCH_Pos) /*!< 0x00000040 */
#define TAMP_FLTCR_TAMPPUDIS_Pos (7U)
#define TAMP_FLTCR_TAMPPUDIS_Msk \
    (0x1UL << TAMP_FLTCR_TAMPPUDIS_Pos) /*!< 0x00000080 */
#define TAMP_FLTCR_TAMPPUDIS TAMP_FLTCR_TAMPPUDIS_Msk

/********************  Bits definition for TAMP_ATCR1 register  ***************/
#define TAMP_ATCR1_TAMP1AM_Pos (0U)
#define TAMP_ATCR1_TAMP1AM_Msk \
    (0x1UL << TAMP_ATCR1_TAMP1AM_Pos) /*!< 0x00000001 */
#define TAMP_ATCR1_TAMP1AM TAMP_ATCR1_TAMP1AM_Msk
#define TAMP_ATCR1_TAMP2AM_Pos (1U)
#define TAMP_ATCR1_TAMP2AM_Msk \
    (0x1UL << TAMP_ATCR1_TAMP2AM_Pos) /*!< 0x00000002 */
#define TAMP_ATCR1_TAMP2AM TAMP_ATCR1_TAMP2AM_Msk
#define TAMP_ATCR1_ATOSEL1_Pos (8U)
#define TAMP_ATCR1_ATOSEL1_Msk \
    (0x3UL << TAMP_ATCR1_ATOSEL1_Pos) /*!< 0x00000300 */
#define TAMP_ATCR1_ATOSEL1 TAMP_ATCR1_ATOSEL1_Msk
#define TAMP_ATCR1_ATOSEL1_0 \
    (0x1UL << TAMP_ATCR1_ATOSEL1_Pos) /*!< 0x00000100 */
#define TAMP_ATCR1_ATOSEL1_1 \
    (0x2UL << TAMP_ATCR1_ATOSEL1_Pos) /*!< 0x00000200 */
#define TAMP_ATCR1_ATOSEL2_Pos (10U)
#define TAMP_ATCR1_ATOSEL2_Msk \
    (0x3UL << TAMP_ATCR1_ATOSEL2_Pos) /*!< 0x00000C00 */
#define TAMP_ATCR1_ATOSEL2 TAMP_ATCR1_ATOSEL2_Msk
#define TAMP_ATCR1_ATOSEL2_0 \
    (0x1UL << TAMP_ATCR1_ATOSEL2_Pos) /*!< 0x00000400 */
#define TAMP_ATCR1_ATOSEL2_1 \
    (0x2UL << TAMP_ATCR1_ATOSEL2_Pos) /*!< 0x00000800 */
#define TAMP_ATCR1_ATCKSEL_Pos (16U)
#define TAMP_ATCR1_ATCKSEL_Msk \
    (0xFUL << TAMP_ATCR1_ATCKSEL_Pos) /*!< 0x000F0000 */
#define TAMP_ATCR1_ATCKSEL TAMP_ATCR1_ATCKSEL_Msk
#define TAMP_ATCR1_ATCKSEL_0 \
    (0x1UL << TAMP_ATCR1_ATCKSEL_Pos) /*!< 0x00010000 */
#define TAMP_ATCR1_ATCKSEL_1 \
    (0x2UL << TAMP_ATCR1_ATCKSEL_Pos) /*!< 0x00020000 */
#define TAMP_ATCR1_ATCKSEL_2 \
    (0x4UL << TAMP_ATCR1_ATCKSEL_Pos) /*!< 0x00040000 */
#define TAMP_ATCR1_ATCKSEL_3 \
    (0x8UL << TAMP_ATCR1_ATCKSEL_Pos) /*!< 0x00080000 */
#define TAMP_ATCR1_ATPER_Pos (24U)
#define TAMP_ATCR1_ATPER_Msk (0x7UL << TAMP_ATCR1_ATPER_Pos) /*!< 0x07000000 */
#define TAMP_ATCR1_ATPER TAMP_ATCR1_ATPER_Msk
#define TAMP_ATCR1_ATPER_0 (0x1UL << TAMP_ATCR1_ATPER_Pos) /*!< 0x01000000 */
#define TAMP_ATCR1_ATPER_1 (0x2UL << TAMP_ATCR1_ATPER_Pos) /*!< 0x02000000 */
#define TAMP_ATCR1_ATPER_2 (0x4UL << TAMP_ATCR1_ATPER_Pos) /*!< 0x04000000 */
#define TAMP_ATCR1_ATOSHARE_Pos (30U)
#define TAMP_ATCR1_ATOSHARE_Msk \
    (0x1UL << TAMP_ATCR1_ATOSHARE_Pos) /*!< 0x40000000 */
#define TAMP_ATCR1_ATOSHARE TAMP_ATCR1_ATOSHARE_Msk
#define TAMP_ATCR1_FLTEN_Pos (31U)
#define TAMP_ATCR1_FLTEN_Msk (0x1UL << TAMP_ATCR1_FLTEN_Pos) /*!< 0x80000000 */
#define TAMP_ATCR1_FLTEN TAMP_ATCR1_FLTEN_Msk

/********************  Bits definition for TAMP_ATSEEDR register  ******************/
#define TAMP_ATSEEDR_SEED_Pos (0U)
#define TAMP_ATSEEDR_SEED_Msk \
    (0xFFFFFFFFUL << TAMP_ATSEEDR_SEED_Pos) /*!< 0xFFFFFFFF */
#define TAMP_ATSEEDR_SEED TAMP_ATSEEDR_SEED_Msk

/********************  Bits definition for TAMP_ATOR register  ******************/
#define TAMP_ATOR_PRNG_Pos (0U)
#define TAMP_ATOR_PRNG_Msk (0xFFUL << TAMP_ATOR_PRNG_Pos) /*!< 0x000000FF */
#define TAMP_ATOR_PRNG TAMP_ATOR_PRNG_Msk
#define TAMP_ATOR_PRNG_0 (0x1UL << TAMP_ATOR_PRNG_Pos)  /*!< 0x00000001 */
#define TAMP_ATOR_PRNG_1 (0x2UL << TAMP_ATOR_PRNG_Pos)  /*!< 0x00000002 */
#define TAMP_ATOR_PRNG_2 (0x4UL << TAMP_ATOR_PRNG_Pos)  /*!< 0x00000004 */
#define TAMP_ATOR_PRNG_3 (0x8UL << TAMP_ATOR_PRNG_Pos)  /*!< 0x00000008 */
#define TAMP_ATOR_PRNG_4 (0x10UL << TAMP_ATOR_PRNG_Pos) /*!< 0x00000010 */
#define TAMP_ATOR_PRNG_5 (0x20UL << TAMP_ATOR_PRNG_Pos) /*!< 0x00000020 */
#define TAMP_ATOR_PRNG_6 (0x40UL << TAMP_ATOR_PRNG_Pos) /*!< 0x00000040 */
#define TAMP_ATOR_PRNG_7 (0x80UL << TAMP_ATOR_PRNG_Pos) /*!< 0x00000080 */
#define TAMP_ATOR_SEEDF_Pos (14U)
#define TAMP_ATOR_SEEDF_Msk (1UL << TAMP_ATOR_SEEDF_Pos) /*!< 0x00004000 */
#define TAMP_ATOR_SEEDF TAMP_ATOR_SEEDF_Msk
#define TAMP_ATOR_INITS_Pos (15U)
#define TAMP_ATOR_INITS_Msk (1UL << TAMP_ATOR_INITS_Pos) /*!< 0x00008000 */
#define TAMP_ATOR_INITS TAMP_ATOR_INITS_Msk

/********************  Bits definition for TAMP_ATCR2 register  ***************/
#define TAMP_ATCR2_ATOSEL1_Pos (8U)
#define TAMP_ATCR2_ATOSEL1_Msk \
    (0x7UL << TAMP_ATCR2_ATOSEL1_Pos) /*!< 0x00000700 */
#define TAMP_ATCR2_ATOSEL1 TAMP_ATCR2_ATOSEL1_Msk
#define TAMP_ATCR2_ATOSEL1_0 \
    (0x1UL << TAMP_ATCR2_ATOSEL1_Pos) /*!< 0x00000100 */
#define TAMP_ATCR2_ATOSEL1_1 \
    (0x2UL << TAMP_ATCR2_ATOSEL1_Pos) /*!< 0x00000200 */
#define TAMP_ATCR2_ATOSEL1_2 \
    (0x4UL << TAMP_ATCR2_ATOSEL1_Pos) /*!< 0x00000400 */
#define TAMP_ATCR2_ATOSEL2_Pos (11U)
#define TAMP_ATCR2_ATOSEL2_Msk \
    (0x7UL << TAMP_ATCR2_ATOSEL2_Pos) /*!< 0x00003800 */
#define TAMP_ATCR2_ATOSEL2 TAMP_ATCR2_ATOSEL2_Msk
#define TAMP_ATCR2_ATOSEL2_0 \
    (0x1UL << TAMP_ATCR2_ATOSEL2_Pos) /*!< 0x00000800 */
#define TAMP_ATCR2_ATOSEL2_1 \
    (0x2UL << TAMP_ATCR2_ATOSEL2_Pos) /*!< 0x00001000 */
#define TAMP_ATCR2_ATOSEL2_2 \
    (0x4UL << TAMP_ATCR2_ATOSEL2_Pos) /*!< 0x00002000 */

/********************  Bits definition for TAMP_SECCFGR register  *************/
/* Keep SEC acronym  name as following devices (STM32H562xx, STM32H563xx, STM32H573xx) with secure
   acronym to avoid duplicated bits definitions */
#define TAMP_SECCFGR_BKPRWSEC_Pos (0U)
#define TAMP_SECCFGR_BKPRWSEC_Msk \
    (0xFFUL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x000000FF */
#define TAMP_SECCFGR_BKPRWSEC TAMP_SECCFGR_BKPRWSEC_Msk
#define TAMP_SECCFGR_BKPRWSEC_0 \
    (0x1UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000001 */
#define TAMP_SECCFGR_BKPRWSEC_1 \
    (0x2UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000002 */
#define TAMP_SECCFGR_BKPRWSEC_2 \
    (0x4UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000004 */
#define TAMP_SECCFGR_BKPRWSEC_3 \
    (0x8UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000008 */
#define TAMP_SECCFGR_BKPRWSEC_4 \
    (0x10UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000010 */
#define TAMP_SECCFGR_BKPRWSEC_5 \
    (0x20UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000020 */
#define TAMP_SECCFGR_BKPRWSEC_6 \
    (0x40UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000040 */
#define TAMP_SECCFGR_BKPRWSEC_7 \
    (0x80UL << TAMP_SECCFGR_BKPRWSEC_Pos) /*!< 0x00000080 */
#define TAMP_SECCFGR_BKPWSEC_Pos (16U)
#define TAMP_SECCFGR_BKPWSEC_Msk \
    (0xFFUL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00FF0000 */
#define TAMP_SECCFGR_BKPWSEC TAMP_SECCFGR_BKPWSEC_Msk
#define TAMP_SECCFGR_BKPWSEC_0 \
    (0x1UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00010000 */
#define TAMP_SECCFGR_BKPWSEC_1 \
    (0x2UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00020000 */
#define TAMP_SECCFGR_BKPWSEC_2 \
    (0x4UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00040000 */
#define TAMP_SECCFGR_BKPWSEC_3 \
    (0x8UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00080000 */
#define TAMP_SECCFGR_BKPWSEC_4 \
    (0x10UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00100000 */
#define TAMP_SECCFGR_BKPWSEC_5 \
    (0x20UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00200000 */
#define TAMP_SECCFGR_BKPWSEC_6 \
    (0x40UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00400000 */
#define TAMP_SECCFGR_BKPWSEC_7 \
    (0x80UL << TAMP_SECCFGR_BKPWSEC_Pos) /*!< 0x00800000 */

/********************  Bits definition for TAMP_PRIVCFGR register  ************/
#define TAMP_PRIVCFGR_CNT1PRIV_Pos (15U)
#define TAMP_PRIVCFGR_CNT1PRIV_Msk \
    (0x1UL << TAMP_PRIVCFGR_CNT1PRIV_Pos) /*!< 0x20000000 */
#define TAMP_PRIVCFGR_CNT1PRIV TAMP_PRIVCFGR_CNT1PRIV_Msk
#define TAMP_PRIVCFGR_BKPRWPRIV_Pos (29U)
#define TAMP_PRIVCFGR_BKPRWPRIV_Msk \
    (0x1UL << TAMP_PRIVCFGR_BKPRWPRIV_Pos) /*!< 0x20000000 */
#define TAMP_PRIVCFGR_BKPRWPRIV TAMP_PRIVCFGR_BKPRWPRIV_Msk
#define TAMP_PRIVCFGR_BKPWPRIV_Pos (30U)
#define TAMP_PRIVCFGR_BKPWPRIV_Msk \
    (0x1UL << TAMP_PRIVCFGR_BKPWPRIV_Pos) /*!< 0x40000000 */
#define TAMP_PRIVCFGR_BKPWPRIV TAMP_PRIVCFGR_BKPWPRIV_Msk
#define TAMP_PRIVCFGR_TAMPPRIV_Pos (31U)
#define TAMP_PRIVCFGR_TAMPPRIV_Msk \
    (0x1UL << TAMP_PRIVCFGR_TAMPPRIV_Pos) /*!< 0x80000000 */
#define TAMP_PRIVCFGR_TAMPPRIV TAMP_PRIVCFGR_TAMPPRIV_Msk

/********************  Bits definition for TAMP_IER register  *****************/
#define TAMP_IER_TAMP1IE_Pos (0U)
#define TAMP_IER_TAMP1IE_Msk (0x1UL << TAMP_IER_TAMP1IE_Pos) /*!< 0x00000001 */
#define TAMP_IER_TAMP1IE TAMP_IER_TAMP1IE_Msk
#define TAMP_IER_TAMP2IE_Pos (1U)
#define TAMP_IER_TAMP2IE_Msk (0x1UL << TAMP_IER_TAMP2IE_Pos) /*!< 0x00000002 */
#define TAMP_IER_TAMP2IE TAMP_IER_TAMP2IE_Msk
#define TAMP_IER_ITAMP1IE_Pos (16U)
#define TAMP_IER_ITAMP1IE_Msk \
    (0x1UL << TAMP_IER_ITAMP1IE_Pos) /*!< 0x00010000 */
#define TAMP_IER_ITAMP1IE TAMP_IER_ITAMP1IE_Msk
#define TAMP_IER_ITAMP2IE_Pos (17U)
#define TAMP_IER_ITAMP2IE_Msk \
    (0x1UL << TAMP_IER_ITAMP2IE_Pos) /*!< 0x00020000 */
#define TAMP_IER_ITAMP2IE TAMP_IER_ITAMP2IE_Msk
#define TAMP_IER_ITAMP3IE_Pos (18U)
#define TAMP_IER_ITAMP3IE_Msk \
    (0x1UL << TAMP_IER_ITAMP3IE_Pos) /*!< 0x00040000 */
#define TAMP_IER_ITAMP3IE TAMP_IER_ITAMP3IE_Msk
#define TAMP_IER_ITAMP4IE_Pos (19U)
#define TAMP_IER_ITAMP4IE_Msk \
    (0x1UL << TAMP_IER_ITAMP4IE_Pos) /*!< 0x00080000 */
#define TAMP_IER_ITAMP4IE TAMP_IER_ITAMP4IE_Msk
#define TAMP_IER_ITAMP5IE_Pos (20U)
#define TAMP_IER_ITAMP5IE_Msk \
    (0x1UL << TAMP_IER_ITAMP5IE_Pos) /*!< 0x00100000 */
#define TAMP_IER_ITAMP5IE TAMP_IER_ITAMP5IE_Msk
#define TAMP_IER_ITAMP6IE_Pos (21U)
#define TAMP_IER_ITAMP6IE_Msk \
    (0x1UL << TAMP_IER_ITAMP6IE_Pos) /*!< 0x00200000 */
#define TAMP_IER_ITAMP6IE TAMP_IER_ITAMP6IE_Msk
#define TAMP_IER_ITAMP7IE_Pos (22U)
#define TAMP_IER_ITAMP7IE_Msk \
    (0x1UL << TAMP_IER_ITAMP7IE_Pos) /*!< 0x00400000 */
#define TAMP_IER_ITAMP7IE TAMP_IER_ITAMP7IE_Msk
#define TAMP_IER_ITAMP8IE_Pos (23U)
#define TAMP_IER_ITAMP8IE_Msk \
    (0x1UL << TAMP_IER_ITAMP8IE_Pos) /*!< 0x00800000 */
#define TAMP_IER_ITAMP8IE TAMP_IER_ITAMP8IE_Msk
#define TAMP_IER_ITAMP9IE_Pos (24U)
#define TAMP_IER_ITAMP9IE_Msk \
    (0x1UL << TAMP_IER_ITAMP9IE_Pos) /*!< 0x01000000 */
#define TAMP_IER_ITAMP9IE TAMP_IER_ITAMP9IE_Msk
#define TAMP_IER_ITAMP11IE_Pos (26U)
#define TAMP_IER_ITAMP11IE_Msk \
    (0x1UL << TAMP_IER_ITAMP11IE_Pos) /*!< 0x04000000 */
#define TAMP_IER_ITAMP11IE TAMP_IER_ITAMP11IE_Msk
#define TAMP_IER_ITAMP12IE_Pos (27U)
#define TAMP_IER_ITAMP12IE_Msk \
    (0x1UL << TAMP_IER_ITAMP12IE_Pos) /*!< 0x08000000 */
#define TAMP_IER_ITAMP12IE TAMP_IER_ITAMP12IE_Msk
#define TAMP_IER_ITAMP13IE_Pos (28U)
#define TAMP_IER_ITAMP13IE_Msk \
    (0x1UL << TAMP_IER_ITAMP13IE_Pos) /*!< 0x10000000 */
#define TAMP_IER_ITAMP13IE TAMP_IER_ITAMP13IE_Msk
#define TAMP_IER_ITAMP15IE_Pos (30U)
#define TAMP_IER_ITAMP15IE_Msk \
    (0x1UL << TAMP_IER_ITAMP15IE_Pos) /*!< 0x40000000 */
#define TAMP_IER_ITAMP15IE TAMP_IER_ITAMP15IE_Msk

/********************  Bits definition for TAMP_SR register  *****************/
#define TAMP_SR_TAMP1F_Pos (0U)
#define TAMP_SR_TAMP1F_Msk (0x1UL << TAMP_SR_TAMP1F_Pos) /*!< 0x00000001 */
#define TAMP_SR_TAMP1F TAMP_SR_TAMP1F_Msk
#define TAMP_SR_TAMP2F_Pos (1U)
#define TAMP_SR_TAMP2F_Msk (0x1UL << TAMP_SR_TAMP2F_Pos) /*!< 0x00000002 */
#define TAMP_SR_TAMP2F TAMP_SR_TAMP2F_Msk
#define TAMP_SR_ITAMP1F_Pos (16U)
#define TAMP_SR_ITAMP1F_Msk (0x1UL << TAMP_SR_ITAMP1F_Pos) /*!< 0x00010000 */
#define TAMP_SR_ITAMP1F TAMP_SR_ITAMP1F_Msk
#define TAMP_SR_ITAMP2F_Pos (17U)
#define TAMP_SR_ITAMP2F_Msk (0x1UL << TAMP_SR_ITAMP2F_Pos) /*!< 0x00020000 */
#define TAMP_SR_ITAMP2F TAMP_SR_ITAMP2F_Msk
#define TAMP_SR_ITAMP3F_Pos (18U)
#define TAMP_SR_ITAMP3F_Msk (0x1UL << TAMP_SR_ITAMP3F_Pos) /*!< 0x00040000 */
#define TAMP_SR_ITAMP3F TAMP_SR_ITAMP3F_Msk
#define TAMP_SR_ITAMP4F_Pos (19U)
#define TAMP_SR_ITAMP4F_Msk (0x1UL << TAMP_SR_ITAMP4F_Pos) /*!< 0x00080000 */
#define TAMP_SR_ITAMP4F TAMP_SR_ITAMP4F_Msk
#define TAMP_SR_ITAMP5F_Pos (20U)
#define TAMP_SR_ITAMP5F_Msk (0x1UL << TAMP_SR_ITAMP5F_Pos) /*!< 0x00100000 */
#define TAMP_SR_ITAMP5F TAMP_SR_ITAMP5F_Msk
#define TAMP_SR_ITAMP6F_Pos (21U)
#define TAMP_SR_ITAMP6F_Msk (0x1UL << TAMP_SR_ITAMP6F_Pos) /*!< 0x00200000 */
#define TAMP_SR_ITAMP6F TAMP_SR_ITAMP6F_Msk
#define TAMP_SR_ITAMP7F_Pos (22U)
#define TAMP_SR_ITAMP7F_Msk (0x1UL << TAMP_SR_ITAMP7F_Pos) /*!< 0x00400000 */
#define TAMP_SR_ITAMP7F TAMP_SR_ITAMP7F_Msk
#define TAMP_SR_ITAMP8F_Pos (23U)
#define TAMP_SR_ITAMP8F_Msk (0x1UL << TAMP_SR_ITAMP8F_Pos) /*!< 0x00800000 */
#define TAMP_SR_ITAMP8F TAMP_SR_ITAMP8F_Msk
#define TAMP_SR_ITAMP9F_Pos (24U)
#define TAMP_SR_ITAMP9F_Msk (0x1UL << TAMP_SR_ITAMP9F_Pos) /*!< 0x01000000 */
#define TAMP_SR_ITAMP9F TAMP_SR_ITAMP9F_Msk
#define TAMP_SR_ITAMP11F_Pos (26U)
#define TAMP_SR_ITAMP11F_Msk (0x1UL << TAMP_SR_ITAMP11F_Pos) /*!< 0x04000000 */
#define TAMP_SR_ITAMP11F TAMP_SR_ITAMP11F_Msk
#define TAMP_SR_ITAMP12F_Pos (27U)
#define TAMP_SR_ITAMP12F_Msk (0x1UL << TAMP_SR_ITAMP12F_Pos) /*!< 0x08000000 */
#define TAMP_SR_ITAMP12F TAMP_SR_ITAMP12F_Msk
#define TAMP_SR_ITAMP13F_Pos (28U)
#define TAMP_SR_ITAMP13F_Msk (0x1UL << TAMP_SR_ITAMP13F_Pos) /*!< 0x10000000 */
#define TAMP_SR_ITAMP13F TAMP_SR_ITAMP13F_Msk
#define TAMP_SR_ITAMP15F_Pos (30U)
#define TAMP_SR_ITAMP15F_Msk (0x1UL << TAMP_SR_ITAMP15F_Pos) /*!< 0x40000000 */
#define TAMP_SR_ITAMP15F TAMP_SR_ITAMP15F_Msk

/********************  Bits definition for TAMP_MISR register  ****************/
#define TAMP_MISR_TAMP1MF_Pos (0U)
#define TAMP_MISR_TAMP1MF_Msk \
    (0x1UL << TAMP_MISR_TAMP1MF_Pos) /*!< 0x00000001 */
#define TAMP_MISR_TAMP1MF TAMP_MISR_TAMP1MF_Msk
#define TAMP_MISR_TAMP2MF_Pos (1U)
#define TAMP_MISR_TAMP2MF_Msk \
    (0x1UL << TAMP_MISR_TAMP2MF_Pos) /*!< 0x00000002 */
#define TAMP_MISR_TAMP2MF TAMP_MISR_TAMP2MF_Msk
#define TAMP_MISR_ITAMP1MF_Pos (16U)
#define TAMP_MISR_ITAMP1MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP1MF_Pos) /*!< 0x00010000 */
#define TAMP_MISR_ITAMP1MF TAMP_MISR_ITAMP1MF_Msk
#define TAMP_MISR_ITAMP2MF_Pos (17U)
#define TAMP_MISR_ITAMP2MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP2MF_Pos) /*!< 0x00020000 */
#define TAMP_MISR_ITAMP2MF TAMP_MISR_ITAMP2MF_Msk
#define TAMP_MISR_ITAMP3MF_Pos (18U)
#define TAMP_MISR_ITAMP3MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP3MF_Pos) /*!< 0x00040000 */
#define TAMP_MISR_ITAMP3MF TAMP_MISR_ITAMP3MF_Msk
#define TAMP_MISR_ITAMP4MF_Pos (19U)
#define TAMP_MISR_ITAMP4MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP4MF_Pos) /*!< 0x00080000 */
#define TAMP_MISR_ITAMP4MF TAMP_MISR_ITAMP4MF_Msk
#define TAMP_MISR_ITAMP5MF_Pos (20U)
#define TAMP_MISR_ITAMP5MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP5MF_Pos) /*!< 0x00100000 */
#define TAMP_MISR_ITAMP5MF TAMP_MISR_ITAMP5MF_Msk
#define TAMP_MISR_ITAMP6MF_Pos (21U)
#define TAMP_MISR_ITAMP6MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP6MF_Pos) /*!< 0x00200000 */
#define TAMP_MISR_ITAMP6MF TAMP_MISR_ITAMP6MF_Msk
#define TAMP_MISR_ITAMP7MF_Pos (22U)
#define TAMP_MISR_ITAMP7MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP7MF_Pos) /*!< 0x00400000 */
#define TAMP_MISR_ITAMP7MF TAMP_MISR_ITAMP7MF_Msk
#define TAMP_MISR_ITAMP8MF_Pos (23U)
#define TAMP_MISR_ITAMP8MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP8MF_Pos) /*!< 0x00800000 */
#define TAMP_MISR_ITAMP8MF TAMP_MISR_ITAMP8MF_Msk
#define TAMP_MISR_ITAMP9MF_Pos (24U)
#define TAMP_MISR_ITAMP9MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP9MF_Pos) /*!< 0x01000000 */
#define TAMP_MISR_ITAMP9MF TAMP_MISR_ITAMP9MF_Msk
#define TAMP_MISR_ITAMP11MF_Pos (26U)
#define TAMP_MISR_ITAMP11MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP11MF_Pos) /*!< 0x04000000 */
#define TAMP_MISR_ITAMP11MF TAMP_MISR_ITAMP11MF_Msk
#define TAMP_MISR_ITAMP12MF_Pos (27U)
#define TAMP_MISR_ITAMP12MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP12MF_Pos) /*!< 0x08000000 */
#define TAMP_MISR_ITAMP12MF TAMP_MISR_ITAMP12MF_Msk
#define TAMP_MISR_ITAMP13MF_Pos (28U)
#define TAMP_MISR_ITAMP13MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP13MF_Pos) /*!< 0x10000000 */
#define TAMP_MISR_ITAMP13MF TAMP_MISR_ITAMP13MF_Msk
#define TAMP_MISR_ITAMP15MF_Pos (30U)
#define TAMP_MISR_ITAMP15MF_Msk \
    (0x1UL << TAMP_MISR_ITAMP15MF_Pos) /*!< 0x40000000 */
#define TAMP_MISR_ITAMP15MF TAMP_MISR_ITAMP15MF_Msk

/********************  Bits definition for TAMP_SCR register  *****************/
#define TAMP_SCR_CTAMP1F_Pos (0U)
#define TAMP_SCR_CTAMP1F_Msk (0x1UL << TAMP_SCR_CTAMP1F_Pos) /*!< 0x00000001 */
#define TAMP_SCR_CTAMP1F TAMP_SCR_CTAMP1F_Msk
#define TAMP_SCR_CTAMP2F_Pos (1U)
#define TAMP_SCR_CTAMP2F_Msk (0x1UL << TAMP_SCR_CTAMP2F_Pos) /*!< 0x00000002 */
#define TAMP_SCR_CTAMP2F TAMP_SCR_CTAMP2F_Msk
#define TAMP_SCR_CITAMP1F_Pos (16U)
#define TAMP_SCR_CITAMP1F_Msk \
    (0x1UL << TAMP_SCR_CITAMP1F_Pos) /*!< 0x00010000 */
#define TAMP_SCR_CITAMP1F TAMP_SCR_CITAMP1F_Msk
#define TAMP_SCR_CITAMP2F_Pos (17U)
#define TAMP_SCR_CITAMP2F_Msk \
    (0x1UL << TAMP_SCR_CITAMP2F_Pos) /*!< 0x00020000 */
#define TAMP_SCR_CITAMP2F TAMP_SCR_CITAMP2F_Msk
#define TAMP_SCR_CITAMP3F_Pos (18U)
#define TAMP_SCR_CITAMP3F_Msk \
    (0x1UL << TAMP_SCR_CITAMP3F_Pos) /*!< 0x00040000 */
#define TAMP_SCR_CITAMP3F TAMP_SCR_CITAMP3F_Msk
#define TAMP_SCR_CITAMP4F_Pos (19U)
#define TAMP_SCR_CITAMP4F_Msk \
    (0x1UL << TAMP_SCR_CITAMP4F_Pos) /*!< 0x00080000 */
#define TAMP_SCR_CITAMP4F TAMP_SCR_CITAMP4F_Msk
#define TAMP_SCR_CITAMP5F_Pos (20U)
#define TAMP_SCR_CITAMP5F_Msk \
    (0x1UL << TAMP_SCR_CITAMP5F_Pos) /*!< 0x00100000 */
#define TAMP_SCR_CITAMP5F TAMP_SCR_CITAMP5F_Msk
#define TAMP_SCR_CITAMP6F_Pos (21U)
#define TAMP_SCR_CITAMP6F_Msk \
    (0x1UL << TAMP_SCR_CITAMP6F_Pos) /*!< 0x00200000 */
#define TAMP_SCR_CITAMP6F TAMP_SCR_CITAMP6F_Msk
#define TAMP_SCR_CITAMP7F_Pos (22U)
#define TAMP_SCR_CITAMP7F_Msk \
    (0x1UL << TAMP_SCR_CITAMP7F_Pos) /*!< 0x00400000 */
#define TAMP_SCR_CITAMP7F TAMP_SCR_CITAMP7F_Msk
#define TAMP_SCR_CITAMP8F_Pos (23U)
#define TAMP_SCR_CITAMP8F_Msk \
    (0x1UL << TAMP_SCR_CITAMP8F_Pos) /*!< 0x00800000 */
#define TAMP_SCR_CITAMP8F TAMP_SCR_CITAMP8F_Msk
#define TAMP_SCR_CITAMP9F_Pos (24U)
#define TAMP_SCR_CITAMP9F_Msk \
    (0x1UL << TAMP_SCR_CITAMP9F_Pos) /*!< 0x00100000 */
#define TAMP_SCR_CITAMP9F TAMP_SCR_CITAMP9F_Msk
#define TAMP_SCR_CITAMP11F_Pos (26U)
#define TAMP_SCR_CITAMP11F_Msk \
    (0x1UL << TAMP_SCR_CITAMP11F_Pos) /*!< 0x00400000 */
#define TAMP_SCR_CITAMP11F TAMP_SCR_CITAMP11F_Msk
#define TAMP_SCR_CITAMP12F_Pos (27U)
#define TAMP_SCR_CITAMP12F_Msk \
    (0x1UL << TAMP_SCR_CITAMP12F_Pos) /*!< 0x08000000 */
#define TAMP_SCR_CITAMP12F TAMP_SCR_CITAMP12F_Msk
#define TAMP_SCR_CITAMP13F_Pos (28U)
#define TAMP_SCR_CITAMP13F_Msk \
    (0x1UL << TAMP_SCR_CITAMP13F_Pos) /*!< 0x10000000 */
#define TAMP_SCR_CITAMP13F TAMP_SCR_CITAMP13F_Msk
#define TAMP_SCR_CITAMP15F_Pos (30U)
#define TAMP_SCR_CITAMP15F_Msk \
    (0x1UL << TAMP_SCR_CITAMP15F_Pos) /*!< 0x40000000 */
#define TAMP_SCR_CITAMP15F TAMP_SCR_CITAMP15F_Msk
/********************  Bits definition for TAMP_COUNT1R register  ***************/
#define TAMP_COUNT1R_COUNT_Pos (0U)
#define TAMP_COUNT1R_COUNT_Msk \
    (0xFFFFFFFFUL << TAMP_COUNT1R_COUNT_Pos) /*!< 0xFFFFFFFF */
#define TAMP_COUNT1R_COUNT TAMP_COUNT1R_COUNT_Msk

/********************  Bits definition for TAMP_ERCFG register  ***************/
#define TAMP_ERCFGR_ERCFG0_Pos (0U)
#define TAMP_ERCFGR_ERCFG0_Msk \
    (0x1UL << TAMP_ERCFGR_ERCFG0_Pos) /*!< 0x00000001 */
#define TAMP_ERCFGR_ERCFG0 TAMP_ERCFGR_ERCFG0_Msk

/********************  Bits definition for TAMP_BKP0R register  ***************/
#define TAMP_BKP0R_Pos (0U)
#define TAMP_BKP0R_Msk (0xFFFFFFFFUL << TAMP_BKP0R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP0R TAMP_BKP0R_Msk

/********************  Bits definition for TAMP_BKP1R register  ****************/
#define TAMP_BKP1R_Pos (0U)
#define TAMP_BKP1R_Msk (0xFFFFFFFFUL << TAMP_BKP1R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP1R TAMP_BKP1R_Msk

/********************  Bits definition for TAMP_BKP2R register  ****************/
#define TAMP_BKP2R_Pos (0U)
#define TAMP_BKP2R_Msk (0xFFFFFFFFUL << TAMP_BKP2R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP2R TAMP_BKP2R_Msk

/********************  Bits definition for TAMP_BKP3R register  ****************/
#define TAMP_BKP3R_Pos (0U)
#define TAMP_BKP3R_Msk (0xFFFFFFFFUL << TAMP_BKP3R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP3R TAMP_BKP3R_Msk

/********************  Bits definition for TAMP_BKP4R register  ****************/
#define TAMP_BKP4R_Pos (0U)
#define TAMP_BKP4R_Msk (0xFFFFFFFFUL << TAMP_BKP4R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP4R TAMP_BKP4R_Msk

/********************  Bits definition for TAMP_BKP5R register  ****************/
#define TAMP_BKP5R_Pos (0U)
#define TAMP_BKP5R_Msk (0xFFFFFFFFUL << TAMP_BKP5R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP5R TAMP_BKP5R_Msk

/********************  Bits definition for TAMP_BKP6R register  ****************/
#define TAMP_BKP6R_Pos (0U)
#define TAMP_BKP6R_Msk (0xFFFFFFFFUL << TAMP_BKP6R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP6R TAMP_BKP6R_Msk

/********************  Bits definition for TAMP_BKP7R register  ****************/
#define TAMP_BKP7R_Pos (0U)
#define TAMP_BKP7R_Msk (0xFFFFFFFFUL << TAMP_BKP7R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP7R TAMP_BKP7R_Msk

/********************  Bits definition for TAMP_BKP8R register  ****************/
#define TAMP_BKP8R_Pos (0U)
#define TAMP_BKP8R_Msk (0xFFFFFFFFUL << TAMP_BKP8R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP8R TAMP_BKP8R_Msk

/********************  Bits definition for TAMP_BKP9R register  ****************/
#define TAMP_BKP9R_Pos (0U)
#define TAMP_BKP9R_Msk (0xFFFFFFFFUL << TAMP_BKP9R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP9R TAMP_BKP9R_Msk

/********************  Bits definition for TAMP_BKP10R register  ***************/
#define TAMP_BKP10R_Pos (0U)
#define TAMP_BKP10R_Msk (0xFFFFFFFFUL << TAMP_BKP10R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP10R TAMP_BKP10R_Msk

/********************  Bits definition for TAMP_BKP11R register  ***************/
#define TAMP_BKP11R_Pos (0U)
#define TAMP_BKP11R_Msk (0xFFFFFFFFUL << TAMP_BKP11R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP11R TAMP_BKP11R_Msk

/********************  Bits definition for TAMP_BKP12R register  ***************/
#define TAMP_BKP12R_Pos (0U)
#define TAMP_BKP12R_Msk (0xFFFFFFFFUL << TAMP_BKP12R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP12R TAMP_BKP12R_Msk

/********************  Bits definition for TAMP_BKP13R register  ***************/
#define TAMP_BKP13R_Pos (0U)
#define TAMP_BKP13R_Msk (0xFFFFFFFFUL << TAMP_BKP13R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP13R TAMP_BKP13R_Msk

/********************  Bits definition for TAMP_BKP14R register  ***************/
#define TAMP_BKP14R_Pos (0U)
#define TAMP_BKP14R_Msk (0xFFFFFFFFUL << TAMP_BKP14R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP14R TAMP_BKP14R_Msk

/********************  Bits definition for TAMP_BKP15R register  ***************/
#define TAMP_BKP15R_Pos (0U)
#define TAMP_BKP15R_Msk (0xFFFFFFFFUL << TAMP_BKP15R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP15R TAMP_BKP15R_Msk

/********************  Bits definition for TAMP_BKP16R register  ***************/
#define TAMP_BKP16R_Pos (0U)
#define TAMP_BKP16R_Msk (0xFFFFFFFFUL << TAMP_BKP16R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP16R TAMP_BKP16R_Msk

/********************  Bits definition for TAMP_BKP17R register  ***************/
#define TAMP_BKP17R_Pos (0U)
#define TAMP_BKP17R_Msk (0xFFFFFFFFUL << TAMP_BKP17R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP17R TAMP_BKP17R_Msk

/********************  Bits definition for TAMP_BKP18R register  ***************/
#define TAMP_BKP18R_Pos (0U)
#define TAMP_BKP18R_Msk (0xFFFFFFFFUL << TAMP_BKP18R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP18R TAMP_BKP18R_Msk

/********************  Bits definition for TAMP_BKP19R register  ***************/
#define TAMP_BKP19R_Pos (0U)
#define TAMP_BKP19R_Msk (0xFFFFFFFFUL << TAMP_BKP19R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP19R TAMP_BKP19R_Msk

/********************  Bits definition for TAMP_BKP20R register  ***************/
#define TAMP_BKP20R_Pos (0U)
#define TAMP_BKP20R_Msk (0xFFFFFFFFUL << TAMP_BKP20R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP20R TAMP_BKP20R_Msk

/********************  Bits definition for TAMP_BKP21R register  ***************/
#define TAMP_BKP21R_Pos (0U)
#define TAMP_BKP21R_Msk (0xFFFFFFFFUL << TAMP_BKP21R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP21R TAMP_BKP21R_Msk

/********************  Bits definition for TAMP_BKP22R register  ***************/
#define TAMP_BKP22R_Pos (0U)
#define TAMP_BKP22R_Msk (0xFFFFFFFFUL << TAMP_BKP22R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP22R TAMP_BKP22R_Msk

/********************  Bits definition for TAMP_BKP23R register  ***************/
#define TAMP_BKP23R_Pos (0U)
#define TAMP_BKP23R_Msk (0xFFFFFFFFUL << TAMP_BKP23R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP23R TAMP_BKP23R_Msk

/********************  Bits definition for TAMP_BKP24R register  ***************/
#define TAMP_BKP24R_Pos (0U)
#define TAMP_BKP24R_Msk (0xFFFFFFFFUL << TAMP_BKP24R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP24R TAMP_BKP24R_Msk

/********************  Bits definition for TAMP_BKP25R register  ***************/
#define TAMP_BKP25R_Pos (0U)
#define TAMP_BKP25R_Msk (0xFFFFFFFFUL << TAMP_BKP25R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP25R TAMP_BKP25R_Msk

/********************  Bits definition for TAMP_BKP26R register  ***************/
#define TAMP_BKP26R_Pos (0U)
#define TAMP_BKP26R_Msk (0xFFFFFFFFUL << TAMP_BKP26R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP26R TAMP_BKP26R_Msk

/********************  Bits definition for TAMP_BKP27R register  ***************/
#define TAMP_BKP27R_Pos (0U)
#define TAMP_BKP27R_Msk (0xFFFFFFFFUL << TAMP_BKP27R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP27R TAMP_BKP27R_Msk

/********************  Bits definition for TAMP_BKP28R register  ***************/
#define TAMP_BKP28R_Pos (0U)
#define TAMP_BKP28R_Msk (0xFFFFFFFFUL << TAMP_BKP28R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP28R TAMP_BKP28R_Msk

/********************  Bits definition for TAMP_BKP29R register  ***************/
#define TAMP_BKP29R_Pos (0U)
#define TAMP_BKP29R_Msk (0xFFFFFFFFUL << TAMP_BKP29R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP29R TAMP_BKP29R_Msk

/********************  Bits definition for TAMP_BKP30R register  ***************/
#define TAMP_BKP30R_Pos (0U)
#define TAMP_BKP30R_Msk (0xFFFFFFFFUL << TAMP_BKP30R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP30R TAMP_BKP30R_Msk

/********************  Bits definition for TAMP_BKP31R register  ***************/
#define TAMP_BKP31R_Pos (0U)
#define TAMP_BKP31R_Msk (0xFFFFFFFFUL << TAMP_BKP31R_Pos) /*!< 0xFFFFFFFF */
#define TAMP_BKP31R TAMP_BKP31R_Msk

/******************************************************************************/
/*                                                                            */
/*                                 SBS                                        */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for SBS_HDPLCR register  *****************/
#define SBS_HDPLCR_INCR_HDPL_Pos (0U)
#define SBS_HDPLCR_INCR_HDPL_Msk \
    (0xFFUL << SBS_HDPLCR_INCR_HDPL_Pos) /*!< 0x000000FF */
#define SBS_HDPLCR_INCR_HDPL \
    SBS_HDPLCR_INCR_HDPL_Msk /*!< Increment HDPL value. */

/********************  Bit definition for SBS_HDPLSR register  *****************/
#define SBS_HDPLSR_HDPL_Pos (0U)
#define SBS_HDPLSR_HDPL_Msk (0xFFUL << SBS_HDPLSR_HDPL_Pos) /*!< 0x000000FF */
#define SBS_HDPLSR_HDPL SBS_HDPLSR_HDPL_Msk                 /*!< HDPL value. */

/********************  Bit definition for SBS_DBGCR register  *****************/
#define SBS_DBGCR_AP_UNLOCK_Pos (0U)
#define SBS_DBGCR_AP_UNLOCK_Msk \
    (0xFFUL << SBS_DBGCR_AP_UNLOCK_Pos) /*!< 0x000000FF */
#define SBS_DBGCR_AP_UNLOCK \
    SBS_DBGCR_AP_UNLOCK_Msk /*!< Open the Access Port. */

#define SBS_DBGCR_DBG_UNLOCK_Pos (8U)
#define SBS_DBGCR_DBG_UNLOCK_Msk \
    (0xFFUL << SBS_DBGCR_DBG_UNLOCK_Pos) /*!< 0x0000FF00 */
#define SBS_DBGCR_DBG_UNLOCK \
    SBS_DBGCR_DBG_UNLOCK_Msk /*!< Open the debug when DBG_AUTH_HDPL is reached. */

#define SBS_DBGCR_DBG_AUTH_HDPL_Pos (16U)
#define SBS_DBGCR_DBG_AUTH_HDPL_Msk \
    (0xFFUL << SBS_DBGCR_DBG_AUTH_HDPL_Pos) /*!< 0x00FF0000 */
#define SBS_DBGCR_DBG_AUTH_HDPL \
    SBS_DBGCR_DBG_AUTH_HDPL_Msk /*!< HDPL value when the debug should be effectively opened. */

/********************  Bit definition for SBS_DBGLCKR register  *****************/
#define SBS_DBGLOCKR_DBGCFG_LOCK_Pos (0U)
#define SBS_DBGLOCKR_DBGCFG_LOCK_Msk \
    (0xFFUL << SBS_DBGLOCKR_DBGCFG_LOCK_Pos) /*!< 0x000000FF */
#define SBS_DBGLOCKR_DBGCFG_LOCK \
    SBS_DBGLOCKR_DBGCFG_LOCK_Msk /*!< SBS_DBGLOCKR_DBGCFG_LOCK value. */

/******************  Bit definition for SBS_PMCR register  ****************/
#define SBS_PMCR_PB6_FMP_Pos (16U)
#define SBS_PMCR_PB6_FMP_Msk (0x1UL << SBS_PMCR_PB6_FMP_Pos) /*!< 0x00010000 */
#define SBS_PMCR_PB6_FMP \
    SBS_PMCR_PB6_FMP_Msk /*!< Fast-mode Plus command on PB(6) */
#define SBS_PMCR_PB7_FMP_Pos (17U)
#define SBS_PMCR_PB7_FMP_Msk (0x1UL << SBS_PMCR_PB7_FMP_Pos) /*!< 0x00020000 */
#define SBS_PMCR_PB7_FMP \
    SBS_PMCR_PB7_FMP_Msk /*!< Fast-mode Plus command on PB(7) */
#define SBS_PMCR_PB8_FMP_Pos (18U)
#define SBS_PMCR_PB8_FMP_Msk (0x1UL << SBS_PMCR_PB8_FMP_Pos) /*!< 0x00040000 */
#define SBS_PMCR_PB8_FMP \
    SBS_PMCR_PB8_FMP_Msk /*!< Fast-mode Plus command on PB(8) */

/******************  Bit definition for SBS_FPUIMR register  ***************/
#define SBS_FPUIMR_FPU_IE_Pos (0U)
#define SBS_FPUIMR_FPU_IE_Msk \
    (0x3FUL << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x0000003F - */
#define SBS_FPUIMR_FPU_IE \
    SBS_FPUIMR_FPU_IE_Msk /*!<  All FPU interrupts enable */
#define SBS_FPUIMR_FPU_IE_0 \
    (0x1UL                  \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000001 - Invalid operation Interrupt enable */
#define SBS_FPUIMR_FPU_IE_1 \
    (0x2UL                  \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000002 - Divide-by-zero Interrupt enable */
#define SBS_FPUIMR_FPU_IE_2 \
    (0x4UL                  \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000004 - Underflow Interrupt enable */
#define SBS_FPUIMR_FPU_IE_3 \
    (0x8UL                  \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000008 - Overflow Interrupt enable */
#define SBS_FPUIMR_FPU_IE_4 \
    (0x10UL                 \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000010 - Input denormal Interrupt enable */
#define SBS_FPUIMR_FPU_IE_5 \
    (0x20UL                 \
     << SBS_FPUIMR_FPU_IE_Pos) /*!< 0x00000020 - Inexact Interrupt enable (interrupt disabled at reset) */

/******************  Bit definition for SBS_MESR register  ****************/
#define SBS_MESR_MCLR_Pos (0U)
#define SBS_MESR_MCLR_Msk (0x1UL << SBS_MESR_MCLR_Pos) /*!< 0x00000001 */
#define SBS_MESR_MCLR SBS_MESR_MCLR_Msk /*!< Status of Erase after Reset */
#define SBS_MESR_IPMEE_Pos (16U)
#define SBS_MESR_IPMEE_Msk (0x1UL << SBS_MESR_IPMEE_Pos) /*!< 0x00010000 */
#define SBS_MESR_IPMEE \
    SBS_MESR_IPMEE_Msk /*!< Status of End of Erase for ICache and PKA RAMs */

/******************  Bit definition for SBS_CCCSR register  ****************/
#define SBS_CCCSR_EN1_Pos (0U)
#define SBS_CCCSR_EN1_Msk (0x1UL << SBS_CCCSR_EN1_Pos) /*!< 0x00000001 */
#define SBS_CCCSR_EN1 \
    SBS_CCCSR_EN1_Msk /*!< Enable compensation cell for VDD power rail */
#define SBS_CCCSR_CS1_Pos (1U)
#define SBS_CCCSR_CS1_Msk (0x1UL << SBS_CCCSR_CS1_Pos) /*!< 0x00000002 */
#define SBS_CCCSR_CS1 \
    SBS_CCCSR_CS1_Msk /*!< Code selection for VDD power rail */
#define SBS_CCCSR_EN2_Pos (2U)
#define SBS_CCCSR_EN2_Msk (0x1UL << SBS_CCCSR_EN2_Pos) /*!< 0x00000004 */
#define SBS_CCCSR_EN2 \
    SBS_CCCSR_EN2_Msk /*!< Enable compensation cell for VDDIO power rail */
#define SBS_CCCSR_CS2_Pos (3U)
#define SBS_CCCSR_CS2_Msk (0x1UL << SBS_CCCSR_CS2_Pos) /*!< 0x00000008 */
#define SBS_CCCSR_CS2 \
    SBS_CCCSR_CS2_Msk /*!< Code selection for VDDIO power rail */
#define SBS_CCCSR_RDY1_Pos (8U)
#define SBS_CCCSR_RDY1_Msk (0x1UL << SBS_CCCSR_RDY1_Pos) /*!< 0x00000100 */
#define SBS_CCCSR_RDY1 \
    SBS_CCCSR_RDY1_Msk /*!< VDD compensation cell ready flag */
#define SBS_CCCSR_RDY2_Pos (9U)
#define SBS_CCCSR_RDY2_Msk (0x1UL << SBS_CCCSR_RDY2_Pos) /*!< 0x00000200 */
#define SBS_CCCSR_RDY2 \
    SBS_CCCSR_RDY2_Msk /*!< VDDIO compensation cell ready flag */

/******************  Bit definition for SBS_CCVALR register  ****************/
#define SBS_CCVALR_ANSRC1_Pos (0U)
#define SBS_CCVALR_ANSRC1_Msk \
    (0xFUL << SBS_CCVALR_ANSRC1_Pos)            /*!< 0x0000000F */
#define SBS_CCVALR_ANSRC1 SBS_CCVALR_ANSRC1_Msk /*!< NMOS compensation value */
#define SBS_CCVALR_APSRC1_Pos (4U)
#define SBS_CCVALR_APSRC1_Msk \
    (0xFUL << SBS_CCVALR_APSRC1_Pos)            /*!< 0x000000F0 */
#define SBS_CCVALR_APSRC1 SBS_CCVALR_APSRC1_Msk /*!< PMOS compensation value */
#define SBS_CCVALR_ANSRC2_Pos (8U)
#define SBS_CCVALR_ANSRC2_Msk \
    (0xFUL << SBS_CCVALR_ANSRC2_Pos)            /*!< 0x00000F00 */
#define SBS_CCVALR_ANSRC2 SBS_CCVALR_ANSRC2_Msk /*!< NMOS compensation value */
#define SBS_CCVALR_APSRC2_Pos (12U)
#define SBS_CCVALR_APSRC2_Msk \
    (0xFUL << SBS_CCVALR_APSRC2_Pos)            /*!< 0x0000F000 */
#define SBS_CCVALR_APSRC2 SBS_CCVALR_APSRC2_Msk /*!< PMOS compensation value */

/******************  Bit definition for SBS_CCSWCR register  ****************/
#define SBS_CCSWCR_SW_ANSRC1_Pos (0U)
#define SBS_CCSWCR_SW_ANSRC1_Msk \
    (0xFUL << SBS_CCSWCR_SW_ANSRC1_Pos) /*!< 0x0000000F */
#define SBS_CCSWCR_SW_ANSRC1 \
    SBS_CCSWCR_SW_ANSRC1_Msk /*!< NMOS compensation code for VDD Power Rail */
#define SBS_CCSWCR_SW_APSRC1_Pos (4U)
#define SBS_CCSWCR_SW_APSRC1_Msk \
    (0xFUL << SBS_CCSWCR_SW_APSRC1_Pos) /*!< 0x000000F0 */
#define SBS_CCSWCR_SW_APSRC1 \
    SBS_CCSWCR_SW_APSRC1_Msk /*!< PMOS compensation code for VDD Power Rail */
#define SBS_CCSWCR_SW_ANSRC2_Pos (8U)
#define SBS_CCSWCR_SW_ANSRC2_Msk \
    (0xFUL << SBS_CCSWCR_SW_ANSRC2_Pos) /*!< 0x00000F00 */
#define SBS_CCSWCR_SW_ANSRC2 \
    SBS_CCSWCR_SW_ANSRC2_Msk /*!< NMOS compensation code for VDDIO Power Rail */
#define SBS_CCSWCR_SW_APSRC2_Pos (12U)
#define SBS_CCSWCR_SW_APSRC2_Msk \
    (0xFUL << SBS_CCSWCR_SW_APSRC2_Pos) /*!< 0x0000F000 */
#define SBS_CCSWCR_SW_APSRC2 \
    SBS_CCSWCR_SW_APSRC2_Msk /*!< PMOS compensation code for VDDIO Power Rail */

/******************  Bit definition for SBS_CFGR2 register  ****************/
#define SBS_CFGR2_CLL_Pos (0U)
#define SBS_CFGR2_CLL_Msk (0x1UL << SBS_CFGR2_CLL_Pos) /*!< 0x00000001 */
#define SBS_CFGR2_CLL SBS_CFGR2_CLL_Msk                /*!< Core Lockup Lock */
#define SBS_CFGR2_SEL_Pos (1U)
#define SBS_CFGR2_SEL_Msk (0x1UL << SBS_CFGR2_SEL_Pos) /*!< 0x00000002 */
#define SBS_CFGR2_SEL SBS_CFGR2_SEL_Msk                /*!< SRAM ECC Lock */
#define SBS_CFGR2_PVDL_Pos (2U)
#define SBS_CFGR2_PVDL_Msk (0x1UL << SBS_CFGR2_PVDL_Pos) /*!< 0x00000004 */
#define SBS_CFGR2_PVDL SBS_CFGR2_PVDL_Msk                /*!<  PVD Lock */
#define SBS_CFGR2_ECCL_Pos (3U)
#define SBS_CFGR2_ECCL_Msk (0x1UL << SBS_CFGR2_ECCL_Pos) /*!< 0x00000008 */
#define SBS_CFGR2_ECCL SBS_CFGR2_ECCL_Msk                /*!< Flash ECC Lock*/

/******************  Bit definition for SBS_CNSLCKR register  **************/
#define SBS_CNSLCKR_LOCKNSVTOR_Pos (0U)
#define SBS_CNSLCKR_LOCKNSVTOR_Msk \
    (0x1UL << SBS_CNSLCKR_LOCKNSVTOR_Pos) /*!< 0x00000001 */
#define SBS_CNSLCKR_LOCKNSVTOR \
    SBS_CNSLCKR_LOCKNSVTOR_Msk /*!< Disable VTOR_NS register writes by SW or debug agent */
#define SBS_CNSLCKR_LOCKNSMPU_Pos (1U)
#define SBS_CNSLCKR_LOCKNSMPU_Msk \
    (0x1UL << SBS_CNSLCKR_LOCKNSMPU_Pos) /*!< 0x00000002 */
#define SBS_CNSLCKR_LOCKNSMPU \
    SBS_CNSLCKR_LOCKNSMPU_Msk /*!< Disable Non-Secure MPU registers writes by SW or debug agent */

/******************  Bit definition for SBS_ECCNMIR register  ***************/
#define SBS_ECCNMIR_ECCNMI_MASK_EN_Pos (0U)
#define SBS_ECCNMIR_ECCNMI_MASK_EN_Msk \
    (0x1UL << SBS_ECCNMIR_ECCNMI_MASK_EN_Pos) /*!< 0x00000001 */
#define SBS_ECCNMIR_ECCNMI_MASK_EN \
    SBS_ECCNMIR_ECCNMI_MASK_EN_Msk /*!< Disable NMI in case of double ECC error in flash interface */

/*****************************************************************************/
/*                                                                           */
/*                        Global TrustZone Control                           */
/*                                                                           */
/*****************************************************************************/

/*******************  Bits definition for GTZC_TZSC_MPCWM_CFGR register  **********/
#define GTZC_TZSC_MPCWM_CFGR_SREN_Pos (0U)
#define GTZC_TZSC_MPCWM_CFGR_SREN_Msk (0x1UL << GTZC_TZSC_MPCWM_CFGR_SREN_Pos)
#define GTZC_TZSC_MPCWM_CFGR_SREN GTZC_TZSC_MPCWM_CFGR_SREN_Msk
#define GTZC_TZSC_MPCWM_CFGR_SRLOCK_Pos (1U)
#define GTZC_TZSC_MPCWM_CFGR_SRLOCK_Msk \
    (0x1UL << GTZC_TZSC_MPCWM_CFGR_SRLOCK_Pos)
#define GTZC_TZSC_MPCWM_CFGR_SRLOCK GTZC_TZSC_MPCWM_CFGR_SRLOCK_Msk
#define GTZC_TZSC_MPCWM_CFGR_PRIV_Pos (9U)
#define GTZC_TZSC_MPCWM_CFGR_PRIV_Msk (0x1UL << GTZC_TZSC_MPCWM_CFGR_PRIV_Pos)
#define GTZC_TZSC_MPCWM_CFGR_PRIV GTZC_TZSC_MPCWM_CFGR_PRIV_Msk

/*******************  Bits definition for GTZC_TZSC_MPCWMR register  **************/
#define GTZC_TZSC_MPCWMR_SUBZ_START_Pos (0U)
#define GTZC_TZSC_MPCWMR_SUBZ_START_Msk \
    (0x7FFUL << GTZC_TZSC_MPCWMR_SUBZ_START_Pos)
#define GTZC_TZSC_MPCWMR_SUBZ_START GTZC_TZSC_MPCWMR_SUBZ_START_Msk
#define GTZC_TZSC_MPCWMR_SUBZ_LENGTH_Pos (16U)
#define GTZC_TZSC_MPCWMR_SUBZ_LENGTH_Msk \
    (0xFFFUL << GTZC_TZSC_MPCWMR_SUBZ_LENGTH_Pos)
#define GTZC_TZSC_MPCWMR_SUBZ_LENGTH GTZC_TZSC_MPCWMR_SUBZ_LENGTH_Msk

/*******  Bits definition for TZSC _SECCFGRx/_PRIVCFGRx registers  *****/
/*******  Bits definition for TZIC _IERx/_SRx/_IFCRx registers  ********/

/***************  Bits definition for register x=1 (TZSC1) *************/
#define GTZC_CFGR1_TIM2_Pos (0U)
#define GTZC_CFGR1_TIM2_Msk (0x01UL << GTZC_CFGR1_TIM2_Pos)
#define GTZC_CFGR1_TIM3_Pos (1U)
#define GTZC_CFGR1_TIM3_Msk (0x01UL << GTZC_CFGR1_TIM3_Pos)
#define GTZC_CFGR1_TIM6_Pos (4U)
#define GTZC_CFGR1_TIM6_Msk (0x01UL << GTZC_CFGR1_TIM6_Pos)
#define GTZC_CFGR1_TIM7_Pos (5U)
#define GTZC_CFGR1_TIM7_Msk (0x01UL << GTZC_CFGR1_TIM7_Pos)
#define GTZC_CFGR1_WWDG_Pos (9U)
#define GTZC_CFGR1_WWDG_Msk (0x01UL << GTZC_CFGR1_WWDG_Pos)
#define GTZC_CFGR1_IWDG_Pos (10U)
#define GTZC_CFGR1_IWDG_Msk (0x01UL << GTZC_CFGR1_IWDG_Pos)
#define GTZC_CFGR1_SPI2_Pos (11U)
#define GTZC_CFGR1_SPI2_Msk (0x01UL << GTZC_CFGR1_SPI2_Pos)
#define GTZC_CFGR1_SPI3_Pos (12U)
#define GTZC_CFGR1_SPI3_Msk (0x01UL << GTZC_CFGR1_SPI3_Pos)
#define GTZC_CFGR1_USART2_Pos (13U)
#define GTZC_CFGR1_USART2_Msk (0x01UL << GTZC_CFGR1_USART2_Pos)
#define GTZC_CFGR1_USART3_Pos (14U)
#define GTZC_CFGR1_USART3_Msk (0x01UL << GTZC_CFGR1_USART3_Pos)
#define GTZC_CFGR1_I2C1_Pos (17U)
#define GTZC_CFGR1_I2C1_Msk (0x01UL << GTZC_CFGR1_I2C1_Pos)
#define GTZC_CFGR1_I2C2_Pos (18U)
#define GTZC_CFGR1_I2C2_Msk (0x01UL << GTZC_CFGR1_I2C2_Pos)
#define GTZC_CFGR1_I3C1_Pos (19U)
#define GTZC_CFGR1_I3C1_Msk (0x01UL << GTZC_CFGR1_I3C1_Pos)
#define GTZC_CFGR1_CRS_Pos (20U)
#define GTZC_CFGR1_CRS_Msk (0x01UL << GTZC_CFGR1_CRS_Pos)
#define GTZC_CFGR1_DAC1_Pos (25U)
#define GTZC_CFGR1_DAC1_Msk (0x01UL << GTZC_CFGR1_DAC1_Pos)
#define GTZC_CFGR1_DTS_Pos (30U)
#define GTZC_CFGR1_DTS_Msk (0x01UL << GTZC_CFGR1_DTS_Pos)
#define GTZC_CFGR1_LPTIM2_Pos (31U)
#define GTZC_CFGR1_LPTIM2_Msk (0x01UL << GTZC_CFGR1_LPTIM2_Pos)

/***************  Bits definition for register x=2 (TZSC1) *************/
#define GTZC_CFGR2_FDCAN1_Pos (0U)
#define GTZC_CFGR2_FDCAN1_Msk (0x01UL << GTZC_CFGR2_FDCAN1_Pos)
#define GTZC_CFGR2_OPAMP_Pos (3U)
#define GTZC_CFGR2_OPAMP_Msk (0x01UL << GTZC_CFGR2_OPAMP_Pos)
#define GTZC_CFGR2_COMP_Pos (4U)
#define GTZC_CFGR2_COMP_Msk (0x01UL << GTZC_CFGR2_COMP_Pos)
#define GTZC_CFGR2_TIM1_Pos (8U)
#define GTZC_CFGR2_TIM1_Msk (0x01UL << GTZC_CFGR2_TIM1_Pos)
#define GTZC_CFGR2_SPI1_Pos (9U)
#define GTZC_CFGR2_SPI1_Msk (0x01UL << GTZC_CFGR2_SPI1_Pos)
#define GTZC_CFGR2_USART1_Pos (11U)
#define GTZC_CFGR2_USART1_Msk (0x01UL << GTZC_CFGR2_USART1_Pos)
#define GTZC_CFGR2_USB_Pos (19U)
#define GTZC_CFGR2_USB_Msk (0x01UL << GTZC_CFGR2_USB_Pos)
#define GTZC_CFGR2_LPUART1_Pos (25U)
#define GTZC_CFGR2_LPUART1_Msk (0x01UL << GTZC_CFGR2_LPUART1_Pos)
#define GTZC_CFGR2_LPTIM1_Pos (28U)
#define GTZC_CFGR2_LPTIM1_Msk (0x01UL << GTZC_CFGR2_LPTIM1_Pos)

/***************  Bits definition for register x=3 (TZSC1) *************/
#define GTZC_CFGR3_I3C2_Pos (2U)
#define GTZC_CFGR3_I3C2_Msk (0x01UL << GTZC_CFGR3_I3C2_Pos)
#define GTZC_CFGR3_CRC_Pos (8U)
#define GTZC_CFGR3_CRC_Msk (0x01UL << GTZC_CFGR3_CRC_Pos)
#define GTZC_CFGR3_ICACHE_REG_Pos (12U)
#define GTZC_CFGR3_ICACHE_REG_Msk (0x01UL << GTZC_CFGR3_ICACHE_REG_Pos)
#define GTZC_CFGR3_ADC_Pos (14U)
#define GTZC_CFGR3_ADC_Msk (0x01UL << GTZC_CFGR3_ADC_Pos)
#define GTZC_CFGR3_HASH_Pos (17U)
#define GTZC_CFGR3_HASH_Msk (0x01UL << GTZC_CFGR3_HASH_Pos)
#define GTZC_CFGR3_RNG_Pos (18U)
#define GTZC_CFGR3_RNG_Msk (0x01UL << GTZC_CFGR3_RNG_Pos)
#define GTZC_CFGR3_RAMCFG_Pos (26U)
#define GTZC_CFGR3_RAMCFG_Msk (0x01UL << GTZC_CFGR3_RAMCFG_Pos)

/***************  Bits definition for register x=4 (TZSC1) *************/
#define GTZC_CFGR4_GPDMA1_Pos (0U)
#define GTZC_CFGR4_GPDMA1_Msk (0x01UL << GTZC_CFGR4_GPDMA1_Pos)
#define GTZC_CFGR4_GPDMA2_Pos (1U)
#define GTZC_CFGR4_GPDMA2_Msk (0x01UL << GTZC_CFGR4_GPDMA2_Pos)
#define GTZC_CFGR4_FLASH_Pos (2U)
#define GTZC_CFGR4_FLASH_Msk (0x01UL << GTZC_CFGR4_FLASH_Pos)
#define GTZC_CFGR4_FLASH_REG_Pos (3U)
#define GTZC_CFGR4_FLASH_REG_Msk (0x01UL << GTZC_CFGR4_FLASH_REG_Pos)
#define GTZC_CFGR4_SBS_Pos (6U)
#define GTZC_CFGR4_SBS_Msk (0x01UL << GTZC_CFGR4_SBS_Pos)
#define GTZC_CFGR4_RTC_Pos (7U)
#define GTZC_CFGR4_RTC_Msk (0x01UL << GTZC_CFGR4_RTC_Pos)
#define GTZC_CFGR4_TAMP_Pos (8U)
#define GTZC_CFGR4_TAMP_Msk (0x01UL << GTZC_CFGR4_TAMP_Pos)
#define GTZC_CFGR4_PWR_Pos (9U)
#define GTZC_CFGR4_PWR_Msk (0x01UL << GTZC_CFGR4_PWR_Pos)
#define GTZC_CFGR4_RCC_Pos (10U)
#define GTZC_CFGR4_RCC_Msk (0x01UL << GTZC_CFGR4_RCC_Pos)
#define GTZC_CFGR4_EXTI_Pos (11U)
#define GTZC_CFGR4_EXTI_Msk (0x01UL << GTZC_CFGR4_EXTI_Pos)
#define GTZC_CFGR4_TZSC_Pos (16U)
#define GTZC_CFGR4_TZSC_Msk (0x01UL << GTZC_CFGR4_TZSC_Pos)
#define GTZC_CFGR4_BKPSRAM_Pos (20U)
#define GTZC_CFGR4_BKPSRAM_Msk (0x01UL << GTZC_CFGR4_BKPSRAM_Pos)
#define GTZC_CFGR4_SRAM1_Pos (24U)
#define GTZC_CFGR4_SRAM1_Msk (0x01UL << GTZC_CFGR4_SRAM1_Pos)
#define GTZC_CFGR4_MPCBB1_REG_Pos (25U)
#define GTZC_CFGR4_MPCBB1_REG_Msk (0x01UL << GTZC_CFGR4_MPCBB1_REG_Pos)
#define GTZC_CFGR4_SRAM2_Pos (26U)
#define GTZC_CFGR4_SRAM2_Msk (0x01UL << GTZC_CFGR4_SRAM2_Pos)
#define GTZC_CFGR4_MPCBB2_REG_Pos (27U)
#define GTZC_CFGR4_MPCBB2_REG_Msk (0x01UL << GTZC_CFGR4_MPCBB2_REG_Pos)

/*******************  Bits definition for GTZC_TZSC_PRIVCFGR1 register  ***************/
#define GTZC_TZSC1_PRIVCFGR1_TIM2_Pos GTZC_CFGR1_TIM2_Pos
#define GTZC_TZSC1_PRIVCFGR1_TIM2_Msk GTZC_CFGR1_TIM2_Msk
#define GTZC_TZSC1_PRIVCFGR1_TIM3_Pos GTZC_CFGR1_TIM3_Pos
#define GTZC_TZSC1_PRIVCFGR1_TIM3_Msk GTZC_CFGR1_TIM3_Msk
#define GTZC_TZSC1_PRIVCFGR1_TIM6_Pos GTZC_CFGR1_TIM6_Pos
#define GTZC_TZSC1_PRIVCFGR1_TIM6_Msk GTZC_CFGR1_TIM6_Msk
#define GTZC_TZSC1_PRIVCFGR1_TIM7_Pos GTZC_CFGR1_TIM7_Pos
#define GTZC_TZSC1_PRIVCFGR1_TIM7_Msk GTZC_CFGR1_TIM7_Msk
#define GTZC_TZSC1_PRIVCFGR1_WWDG_Pos GTZC_CFGR1_WWDG_Pos
#define GTZC_TZSC1_PRIVCFGR1_WWDG_Msk GTZC_CFGR1_WWDG_Msk
#define GTZC_TZSC1_PRIVCFGR1_IWDG_Pos GTZC_CFGR1_IWDG_Pos
#define GTZC_TZSC1_PRIVCFGR1_IWDG_Msk GTZC_CFGR1_IWDG_Msk
#define GTZC_TZSC1_PRIVCFGR1_SPI2_Pos GTZC_CFGR1_SPI2_Pos
#define GTZC_TZSC1_PRIVCFGR1_SPI2_Msk GTZC_CFGR1_SPI2_Msk
#define GTZC_TZSC1_PRIVCFGR1_SPI3_Pos GTZC_CFGR1_SPI3_Pos
#define GTZC_TZSC1_PRIVCFGR1_SPI3_Msk GTZC_CFGR1_SPI3_Msk
#define GTZC_TZSC1_PRIVCFGR1_I2C1_Pos GTZC_CFGR1_I2C1_Pos
#define GTZC_TZSC1_PRIVCFGR1_I2C1_Msk GTZC_CFGR1_I2C1_Msk
#define GTZC_TZSC1_PRIVCFGR1_I2C2_Pos GTZC_CFGR1_I2C2_Pos
#define GTZC_TZSC1_PRIVCFGR1_I2C2_Msk GTZC_CFGR1_I2C2_Msk
#define GTZC_TZSC1_PRIVCFGR1_I3C1_Pos GTZC_CFGR1_I3C1_Pos
#define GTZC_TZSC1_PRIVCFGR1_I3C1_Msk GTZC_CFGR1_I3C1_Msk
#define GTZC_TZSC1_PRIVCFGR1_CRS_Pos GTZC_CFGR1_CRS_Pos
#define GTZC_TZSC1_PRIVCFGR1_CRS_Msk GTZC_CFGR1_CRS_Msk
#define GTZC_TZSC1_PRIVCFGR1_DAC1_Pos GTZC_CFGR1_DAC1_Pos
#define GTZC_TZSC1_PRIVCFGR1_DAC1_Msk GTZC_CFGR1_DAC1_Msk
#define GTZC_TZSC1_PRIVCFGR1_DTS_Pos GTZC_CFGR1_DTS_Pos
#define GTZC_TZSC1_PRIVCFGR1_DTS_Msk GTZC_CFGR1_DTS_Msk
#define GTZC_TZSC1_PRIVCFGR1_LPTIM2_Pos GTZC_CFGR1_LPTIM2_Pos
#define GTZC_TZSC1_PRIVCFGR1_LPTIM2_Msk GTZC_CFGR1_LPTIM2_Msk

/*******************  Bits definition for GTZC_TZSC_PRIVCFGR2 register  ***************/
#define GTZC_TZSC1_PRIVCFGR2_FDCAN1_Pos GTZC_CFGR2_FDCAN1_Pos
#define GTZC_TZSC1_PRIVCFGR2_FDCAN1_Msk GTZC_CFGR2_FDCAN1_Msk
#define GTZC_TZSC1_PRIVCFGR2_TIM1_Pos GTZC_CFGR2_TIM1_Pos
#define GTZC_TZSC1_PRIVCFGR2_TIM1_Msk GTZC_CFGR2_TIM1_Msk
#define GTZC_TZSC1_PRIVCFGR2_SPI1_Pos GTZC_CFGR2_SPI1_Pos
#define GTZC_TZSC1_PRIVCFGR2_SPI1_Msk GTZC_CFGR2_SPI1_Msk
#define GTZC_TZSC1_PRIVCFGR2_USART1_Pos GTZC_CFGR2_USART1_Pos
#define GTZC_TZSC1_PRIVCFGR2_USART1_Msk GTZC_CFGR2_USART1_Msk
#define GTZC_TZSC1_PRIVCFGR2_USB_Pos GTZC_CFGR2_USB_Pos
#define GTZC_TZSC1_PRIVCFGR2_USB_Msk GTZC_CFGR2_USB_Msk
#define GTZC_TZSC1_PRIVCFGR2_LPUART1_Pos GTZC_CFGR2_LPUART1_Pos
#define GTZC_TZSC1_PRIVCFGR2_LPUART1_Msk GTZC_CFGR2_LPUART1_Msk
#define GTZC_TZSC1_PRIVCFGR2_LPTIM1_Pos GTZC_CFGR2_LPTIM1_Pos
#define GTZC_TZSC1_PRIVCFGR2_LPTIM1_Msk GTZC_CFGR2_LPTIM1_Msk

/*******************  Bits definition for GTZC_TZSC_PRIVCFGR3 register  ***************/
#define GTZC_TZSC1_PRIVCFGR3_CRC_Pos GTZC_CFGR3_CRC_Pos
#define GTZC_TZSC1_PRIVCFGR3_CRC_Msk GTZC_CFGR3_CRC_Msk
#define GTZC_TZSC1_PRIVCFGR3_ICACHE_REG_Pos GTZC_CFGR3_ICACHE_REG_Pos
#define GTZC_TZSC1_PRIVCFGR3_ICACHE_REG_Msk GTZC_CFGR3_ICACHE_REG_Msk
#define GTZC_TZSC1_PRIVCFGR3_ADC_Pos GTZC_CFGR3_ADC_Pos
#define GTZC_TZSC1_PRIVCFGR3_ADC_Msk GTZC_CFGR3_ADC_Msk
#define GTZC_TZSC1_PRIVCFGR3_HASH_Pos GTZC_CFGR3_HASH_Pos
#define GTZC_TZSC1_PRIVCFGR3_HASH_Msk GTZC_CFGR3_HASH_Msk
#define GTZC_TZSC1_PRIVCFGR3_RNG_Pos GTZC_CFGR3_RNG_Pos
#define GTZC_TZSC1_PRIVCFGR3_RNG_Msk GTZC_CFGR3_RNG_Msk
#define GTZC_TZSC1_PRIVCFGR3_RAMCFG_Pos GTZC_CFGR3_RAMCFG_Pos
#define GTZC_TZSC1_PRIVCFGR3_RAMCFG_Msk GTZC_CFGR3_RAMCFG_Msk

/*******************  Bits definition for GTZC_MPCBB_CR register  *****************/
#define GTZC_MPCBB_CR_GLOCK_Pos (0U)
#define GTZC_MPCBB_CR_GLOCK_Msk \
    (0x01UL << GTZC_MPCBB_CR_GLOCK_Pos) /*!< 0x00000001 */
#define GTZC_MPCBB_CR_INVSECSTATE_Pos (30U)
#define GTZC_MPCBB_CR_INVSECSTATE_Msk \
    (0x01UL << GTZC_MPCBB_CR_INVSECSTATE_Pos) /*!< 0x40000000 */
#define GTZC_MPCBB_CR_SRWILADIS_Pos (31U)
#define GTZC_MPCBB_CR_SRWILADIS_Msk \
    (0x01UL << GTZC_MPCBB_CR_SRWILADIS_Pos) /*!< 0x80000000 */

/*******************  Bits definition for GTZC_MPCBB_CFGLOCKR1 register  ************/
#define GTZC_MPCBB_CFGLOCKR1_SPLCK0_Pos (0U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK0_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK0_Pos) /*!< 0x00000001 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK1_Pos (1U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK1_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK1_Pos) /*!< 0x00000002 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK2_Pos (2U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK2_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK2_Pos) /*!< 0x00000004 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK3_Pos (3U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK3_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK3_Pos) /*!< 0x00000008 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK4_Pos (4U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK4_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK4_Pos) /*!< 0x00000010 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK5_Pos (5U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK5_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK5_Pos) /*!< 0x00000020 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK6_Pos (6U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK6_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK6_Pos) /*!< 0x00000040 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK7_Pos (7U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK7_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK7_Pos) /*!< 0x00000080 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK8_Pos (8U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK8_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK8_Pos) /*!< 0x00000100 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK9_Pos (9U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK9_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK9_Pos) /*!< 0x00000200 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK10_Pos (10U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK10_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK10_Pos) /*!< 0x00000400 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK11_Pos (11U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK11_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK11_Pos) /*!< 0x00000800 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK12_Pos (12U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK12_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK12_Pos) /*!< 0x00001000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK13_Pos (13U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK13_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK13_Pos) /*!< 0x00002000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK14_Pos (14U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK14_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK14_Pos) /*!< 0x00004000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK15_Pos (15U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK15_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK15_Pos) /*!< 0x00008000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK16_Pos (16U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK16_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK16_Pos) /*!< 0x00010000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK17_Pos (17U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK17_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK17_Pos) /*!< 0x00020000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK18_Pos (18U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK18_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK18_Pos) /*!< 0x00040000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK19_Pos (19U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK19_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK19_Pos) /*!< 0x00080000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK20_Pos (20U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK20_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK20_Pos) /*!< 0x00100000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK21_Pos (21U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK21_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK21_Pos) /*!< 0x00200000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK22_Pos (22U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK22_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK22_Pos) /*!< 0x00400000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK23_Pos (23U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK23_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK23_Pos) /*!< 0x00800000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK24_Pos (24U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK24_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK24_Pos) /*!< 0x01000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK25_Pos (25U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK25_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK25_Pos) /*!< 0x02000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK26_Pos (26U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK26_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK26_Pos) /*!< 0x04000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK27_Pos (27U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK27_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK27_Pos) /*!< 0x08000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK28_Pos (28U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK28_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK28_Pos) /*!< 0x10000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK29_Pos (29U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK29_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK29_Pos) /*!< 0x20000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK30_Pos (30U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK30_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK30_Pos) /*!< 0x40000000 */
#define GTZC_MPCBB_CFGLOCKR1_SPLCK31_Pos (31U)
#define GTZC_MPCBB_CFGLOCKR1_SPLCK31_Msk \
    (0x01UL << GTZC_MPCBB_CFGLOCKR1_SPLCK31_Pos) /*!< 0x80000000 */

/******************************************************************************/
/*                                                                            */
/*      Universal Synchronous Asynchronous Receiver Transmitter (USART)       */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for USART_CR1 register  *******************/
#define USART_CR1_UE_Pos (0U)
#define USART_CR1_UE_Msk (0x1UL << USART_CR1_UE_Pos) /*!< 0x00000001 */
#define USART_CR1_UE USART_CR1_UE_Msk                /*!< USART Enable */
#define USART_CR1_UESM_Pos (1U)
#define USART_CR1_UESM_Msk (0x1UL << USART_CR1_UESM_Pos) /*!< 0x00000002 */
#define USART_CR1_UESM USART_CR1_UESM_Msk /*!< USART Enable in STOP Mode */
#define USART_CR1_RE_Pos (2U)
#define USART_CR1_RE_Msk (0x1UL << USART_CR1_RE_Pos) /*!< 0x00000004 */
#define USART_CR1_RE USART_CR1_RE_Msk                /*!< Receiver Enable */
#define USART_CR1_TE_Pos (3U)
#define USART_CR1_TE_Msk (0x1UL << USART_CR1_TE_Pos) /*!< 0x00000008 */
#define USART_CR1_TE USART_CR1_TE_Msk                /*!< Transmitter Enable */
#define USART_CR1_IDLEIE_Pos (4U)
#define USART_CR1_IDLEIE_Msk (0x1UL << USART_CR1_IDLEIE_Pos) /*!< 0x00000010 */
#define USART_CR1_IDLEIE USART_CR1_IDLEIE_Msk /*!< IDLE Interrupt Enable */
#define USART_CR1_RXNEIE_Pos (5U)
#define USART_CR1_RXNEIE_Msk (0x1UL << USART_CR1_RXNEIE_Pos) /*!< 0x00000020 */
#define USART_CR1_RXNEIE USART_CR1_RXNEIE_Msk /*!< RXNE Interrupt Enable */
#define USART_CR1_RXNEIE_RXFNEIE_Pos USART_CR1_RXNEIE_Pos
#define USART_CR1_RXNEIE_RXFNEIE_Msk USART_CR1_RXNEIE_Msk /*!< 0x00000020 */
#define USART_CR1_RXNEIE_RXFNEIE \
    USART_CR1_RXNEIE_Msk /*!< RXNE and RX FIFO Not Empty Interrupt Enable */
#define USART_CR1_TCIE_Pos (6U)
#define USART_CR1_TCIE_Msk (0x1UL << USART_CR1_TCIE_Pos) /*!< 0x00000040 */
#define USART_CR1_TCIE \
    USART_CR1_TCIE_Msk /*!< Transmission Complete Interrupt Enable */
#define USART_CR1_TXEIE_Pos (7U)
#define USART_CR1_TXEIE_Msk (0x1UL << USART_CR1_TXEIE_Pos) /*!< 0x00000080 */
#define USART_CR1_TXEIE USART_CR1_TXEIE_Msk /*!< TXE Interrupt Enable */
#define USART_CR1_TXEIE_TXFNFIE_Pos (7U)
#define USART_CR1_TXEIE_TXFNFIE_Msk \
    (0x1UL << USART_CR1_TXEIE_Pos) /*!< 0x00000080 */
#define USART_CR1_TXEIE_TXFNFIE \
    USART_CR1_TXEIE /*!< TXE and TX FIFO Not Full Interrupt Enable */
#define USART_CR1_PEIE_Pos (8U)
#define USART_CR1_PEIE_Msk (0x1UL << USART_CR1_PEIE_Pos) /*!< 0x00000100 */
#define USART_CR1_PEIE USART_CR1_PEIE_Msk /*!< PE Interrupt Enable */
#define USART_CR1_PS_Pos (9U)
#define USART_CR1_PS_Msk (0x1UL << USART_CR1_PS_Pos) /*!< 0x00000200 */
#define USART_CR1_PS USART_CR1_PS_Msk                /*!< Parity Selection */
#define USART_CR1_PCE_Pos (10U)
#define USART_CR1_PCE_Msk (0x1UL << USART_CR1_PCE_Pos) /*!< 0x00000400 */
#define USART_CR1_PCE USART_CR1_PCE_Msk /*!< Parity Control Enable */
#define USART_CR1_WAKE_Pos (11U)
#define USART_CR1_WAKE_Msk (0x1UL << USART_CR1_WAKE_Pos) /*!< 0x00000800 */
#define USART_CR1_WAKE USART_CR1_WAKE_Msk /*!< Receiver Wakeup method */
#define USART_CR1_M_Pos (12U)
#define USART_CR1_M_Msk (0x10001UL << USART_CR1_M_Pos) /*!< 0x10001000 */
#define USART_CR1_M USART_CR1_M_Msk                    /*!< Word length */
#define USART_CR1_M0_Pos (12U)
#define USART_CR1_M0_Msk (0x1UL << USART_CR1_M0_Pos) /*!< 0x00001000 */
#define USART_CR1_M0 USART_CR1_M0_Msk                /*!< Word length - Bit 0 */
#define USART_CR1_MME_Pos (13U)
#define USART_CR1_MME_Msk (0x1UL << USART_CR1_MME_Pos) /*!< 0x00002000 */
#define USART_CR1_MME USART_CR1_MME_Msk                /*!< Mute Mode Enable */
#define USART_CR1_CMIE_Pos (14U)
#define USART_CR1_CMIE_Msk (0x1UL << USART_CR1_CMIE_Pos) /*!< 0x00004000 */
#define USART_CR1_CMIE \
    USART_CR1_CMIE_Msk /*!< Character match interrupt enable */
#define USART_CR1_OVER8_Pos (15U)
#define USART_CR1_OVER8_Msk (0x1UL << USART_CR1_OVER8_Pos) /*!< 0x00008000 */
#define USART_CR1_OVER8 \
    USART_CR1_OVER8_Msk /*!< Oversampling by 8-bit or 16-bit mode */
#define USART_CR1_DEDT_Pos (16U)
#define USART_CR1_DEDT_Msk (0x1FUL << USART_CR1_DEDT_Pos) /*!< 0x001F0000 */
#define USART_CR1_DEDT \
    USART_CR1_DEDT_Msk /*!< DEDT[4:0] bits (Driver Enable Deassertion Time) */
#define USART_CR1_DEDT_0 (0x01UL << USART_CR1_DEDT_Pos) /*!< 0x00010000 */
#define USART_CR1_DEDT_1 (0x02UL << USART_CR1_DEDT_Pos) /*!< 0x00020000 */
#define USART_CR1_DEDT_2 (0x04UL << USART_CR1_DEDT_Pos) /*!< 0x00040000 */
#define USART_CR1_DEDT_3 (0x08UL << USART_CR1_DEDT_Pos) /*!< 0x00080000 */
#define USART_CR1_DEDT_4 (0x10UL << USART_CR1_DEDT_Pos) /*!< 0x00100000 */
#define USART_CR1_DEAT_Pos (21U)
#define USART_CR1_DEAT_Msk (0x1FUL << USART_CR1_DEAT_Pos) /*!< 0x03E00000 */
#define USART_CR1_DEAT \
    USART_CR1_DEAT_Msk /*!< DEAT[4:0] bits (Driver Enable Assertion Time) */
#define USART_CR1_DEAT_0 (0x01UL << USART_CR1_DEAT_Pos) /*!< 0x00200000 */
#define USART_CR1_DEAT_1 (0x02UL << USART_CR1_DEAT_Pos) /*!< 0x00400000 */
#define USART_CR1_DEAT_2 (0x04UL << USART_CR1_DEAT_Pos) /*!< 0x00800000 */
#define USART_CR1_DEAT_3 (0x08UL << USART_CR1_DEAT_Pos) /*!< 0x01000000 */
#define USART_CR1_DEAT_4 (0x10UL << USART_CR1_DEAT_Pos) /*!< 0x02000000 */
#define USART_CR1_RTOIE_Pos (26U)
#define USART_CR1_RTOIE_Msk (0x1UL << USART_CR1_RTOIE_Pos) /*!< 0x04000000 */
#define USART_CR1_RTOIE \
    USART_CR1_RTOIE_Msk /*!< Receive Time Out interrupt enable */
#define USART_CR1_EOBIE_Pos (27U)
#define USART_CR1_EOBIE_Msk (0x1UL << USART_CR1_EOBIE_Pos) /*!< 0x08000000 */
#define USART_CR1_EOBIE \
    USART_CR1_EOBIE_Msk /*!< End of Block interrupt enable */
#define USART_CR1_M1_Pos (28U)
#define USART_CR1_M1_Msk (0x1UL << USART_CR1_M1_Pos) /*!< 0x10000000 */
#define USART_CR1_M1 USART_CR1_M1_Msk                /*!< Word length - Bit 1 */
#define USART_CR1_FIFOEN_Pos (29U)
#define USART_CR1_FIFOEN_Msk (0x1UL << USART_CR1_FIFOEN_Pos) /*!< 0x20000000 */
#define USART_CR1_FIFOEN USART_CR1_FIFOEN_Msk /*!< FIFO mode enable */
#define USART_CR1_TXFEIE_Pos (30U)
#define USART_CR1_TXFEIE_Msk (0x1UL << USART_CR1_TXFEIE_Pos) /*!< 0x40000000 */
#define USART_CR1_TXFEIE \
    USART_CR1_TXFEIE_Msk /*!< TXFIFO empty interrupt enable */
#define USART_CR1_RXFFIE_Pos (31U)
#define USART_CR1_RXFFIE_Msk (0x1UL << USART_CR1_RXFFIE_Pos) /*!< 0x80000000 */
#define USART_CR1_RXFFIE \
    USART_CR1_RXFFIE_Msk /*!< RXFIFO Full interrupt enable */

/******************  Bit definition for USART_CR2 register  *******************/
#define USART_CR2_SLVEN_Pos (0U)
#define USART_CR2_SLVEN_Msk (0x1UL << USART_CR2_SLVEN_Pos) /*!< 0x00000001 */
#define USART_CR2_SLVEN \
    USART_CR2_SLVEN_Msk /*!< Synchronous Slave mode enable */
#define USART_CR2_DIS_NSS_Pos (3U)
#define USART_CR2_DIS_NSS_Msk \
    (0x1UL << USART_CR2_DIS_NSS_Pos) /*!< 0x00000008 */
#define USART_CR2_DIS_NSS \
    USART_CR2_DIS_NSS_Msk /*!< Slave Select (NSS) pin management */
#define USART_CR2_ADDM7_Pos (4U)
#define USART_CR2_ADDM7_Msk (0x1UL << USART_CR2_ADDM7_Pos) /*!< 0x00000010 */
#define USART_CR2_ADDM7 \
    USART_CR2_ADDM7_Msk /*!< 7-bit or 4-bit Address Detection */
#define USART_CR2_LBDL_Pos (5U)
#define USART_CR2_LBDL_Msk (0x1UL << USART_CR2_LBDL_Pos) /*!< 0x00000020 */
#define USART_CR2_LBDL USART_CR2_LBDL_Msk /*!< LIN Break Detection Length */
#define USART_CR2_LBDIE_Pos (6U)
#define USART_CR2_LBDIE_Msk (0x1UL << USART_CR2_LBDIE_Pos) /*!< 0x00000040 */
#define USART_CR2_LBDIE \
    USART_CR2_LBDIE_Msk /*!< LIN Break Detection Interrupt Enable */
#define USART_CR2_LBCL_Pos (8U)
#define USART_CR2_LBCL_Msk (0x1UL << USART_CR2_LBCL_Pos) /*!< 0x00000100 */
#define USART_CR2_LBCL USART_CR2_LBCL_Msk /*!< Last Bit Clock pulse */
#define USART_CR2_CPHA_Pos (9U)
#define USART_CR2_CPHA_Msk (0x1UL << USART_CR2_CPHA_Pos) /*!< 0x00000200 */
#define USART_CR2_CPHA USART_CR2_CPHA_Msk                /*!< Clock Phase */
#define USART_CR2_CPOL_Pos (10U)
#define USART_CR2_CPOL_Msk (0x1UL << USART_CR2_CPOL_Pos) /*!< 0x00000400 */
#define USART_CR2_CPOL USART_CR2_CPOL_Msk                /*!< Clock Polarity */
#define USART_CR2_CLKEN_Pos (11U)
#define USART_CR2_CLKEN_Msk (0x1UL << USART_CR2_CLKEN_Pos) /*!< 0x00000800 */
#define USART_CR2_CLKEN USART_CR2_CLKEN_Msk                /*!< Clock Enable */
#define USART_CR2_STOP_Pos (12U)
#define USART_CR2_STOP_Msk (0x3UL << USART_CR2_STOP_Pos) /*!< 0x00003000 */
#define USART_CR2_STOP USART_CR2_STOP_Msk /*!< STOP[1:0] bits (STOP bits) */
#define USART_CR2_STOP_0 (0x1UL << USART_CR2_STOP_Pos) /*!< 0x00001000 */
#define USART_CR2_STOP_1 (0x2UL << USART_CR2_STOP_Pos) /*!< 0x00002000 */
#define USART_CR2_LINEN_Pos (14U)
#define USART_CR2_LINEN_Msk (0x1UL << USART_CR2_LINEN_Pos) /*!< 0x00004000 */
#define USART_CR2_LINEN USART_CR2_LINEN_Msk /*!< LIN mode enable */
#define USART_CR2_SWAP_Pos (15U)
#define USART_CR2_SWAP_Msk (0x1UL << USART_CR2_SWAP_Pos) /*!< 0x00008000 */
#define USART_CR2_SWAP USART_CR2_SWAP_Msk                /*!< SWAP TX/RX pins */
#define USART_CR2_RXINV_Pos (16U)
#define USART_CR2_RXINV_Msk (0x1UL << USART_CR2_RXINV_Pos) /*!< 0x00010000 */
#define USART_CR2_RXINV \
    USART_CR2_RXINV_Msk /*!< RX pin active level inversion */
#define USART_CR2_TXINV_Pos (17U)
#define USART_CR2_TXINV_Msk (0x1UL << USART_CR2_TXINV_Pos) /*!< 0x00020000 */
#define USART_CR2_TXINV \
    USART_CR2_TXINV_Msk /*!< TX pin active level inversion */
#define USART_CR2_DATAINV_Pos (18U)
#define USART_CR2_DATAINV_Msk \
    (0x1UL << USART_CR2_DATAINV_Pos)            /*!< 0x00040000 */
#define USART_CR2_DATAINV USART_CR2_DATAINV_Msk /*!< Binary data inversion */
#define USART_CR2_MSBFIRST_Pos (19U)
#define USART_CR2_MSBFIRST_Msk \
    (0x1UL << USART_CR2_MSBFIRST_Pos) /*!< 0x00080000 */
#define USART_CR2_MSBFIRST \
    USART_CR2_MSBFIRST_Msk /*!< Most Significant Bit First */
#define USART_CR2_ABREN_Pos (20U)
#define USART_CR2_ABREN_Msk (0x1UL << USART_CR2_ABREN_Pos) /*!< 0x00100000 */
#define USART_CR2_ABREN USART_CR2_ABREN_Msk /*!< Auto Baud-Rate Enable*/
#define USART_CR2_ABRMODE_Pos (21U)
#define USART_CR2_ABRMODE_Msk \
    (0x3UL << USART_CR2_ABRMODE_Pos) /*!< 0x00600000 */
#define USART_CR2_ABRMODE \
    USART_CR2_ABRMODE_Msk /*!< ABRMOD[1:0] bits (Auto Baud-Rate Mode) */
#define USART_CR2_ABRMODE_0 (0x1UL << USART_CR2_ABRMODE_Pos) /*!< 0x00200000 */
#define USART_CR2_ABRMODE_1 (0x2UL << USART_CR2_ABRMODE_Pos) /*!< 0x00400000 */
#define USART_CR2_RTOEN_Pos (23U)
#define USART_CR2_RTOEN_Msk (0x1UL << USART_CR2_RTOEN_Pos) /*!< 0x00800000 */
#define USART_CR2_RTOEN USART_CR2_RTOEN_Msk /*!< Receiver Time-Out enable */
#define USART_CR2_ADD_Pos (24U)
#define USART_CR2_ADD_Msk (0xFFUL << USART_CR2_ADD_Pos) /*!< 0xFF000000 */
#define USART_CR2_ADD USART_CR2_ADD_Msk /*!< Address of the USART node */

/******************  Bit definition for USART_CR3 register  *******************/
#define USART_CR3_EIE_Pos (0U)
#define USART_CR3_EIE_Msk (0x1UL << USART_CR3_EIE_Pos) /*!< 0x00000001 */
#define USART_CR3_EIE USART_CR3_EIE_Msk /*!< Error Interrupt Enable */
#define USART_CR3_IREN_Pos (1U)
#define USART_CR3_IREN_Msk (0x1UL << USART_CR3_IREN_Pos) /*!< 0x00000002 */
#define USART_CR3_IREN USART_CR3_IREN_Msk /*!< IrDA mode Enable */
#define USART_CR3_IRLP_Pos (2U)
#define USART_CR3_IRLP_Msk (0x1UL << USART_CR3_IRLP_Pos) /*!< 0x00000004 */
#define USART_CR3_IRLP USART_CR3_IRLP_Msk                /*!< IrDA Low-Power */
#define USART_CR3_HDSEL_Pos (3U)
#define USART_CR3_HDSEL_Msk (0x1UL << USART_CR3_HDSEL_Pos) /*!< 0x00000008 */
#define USART_CR3_HDSEL USART_CR3_HDSEL_Msk /*!< Half-Duplex Selection */
#define USART_CR3_NACK_Pos (4U)
#define USART_CR3_NACK_Msk (0x1UL << USART_CR3_NACK_Pos) /*!< 0x00000010 */
#define USART_CR3_NACK USART_CR3_NACK_Msk /*!< SmartCard NACK enable */
#define USART_CR3_SCEN_Pos (5U)
#define USART_CR3_SCEN_Msk (0x1UL << USART_CR3_SCEN_Pos) /*!< 0x00000020 */
#define USART_CR3_SCEN USART_CR3_SCEN_Msk /*!< SmartCard mode enable */
#define USART_CR3_DMAR_Pos (6U)
#define USART_CR3_DMAR_Msk (0x1UL << USART_CR3_DMAR_Pos) /*!< 0x00000040 */
#define USART_CR3_DMAR USART_CR3_DMAR_Msk /*!< DMA Enable Receiver */
#define USART_CR3_DMAT_Pos (7U)
#define USART_CR3_DMAT_Msk (0x1UL << USART_CR3_DMAT_Pos) /*!< 0x00000080 */
#define USART_CR3_DMAT USART_CR3_DMAT_Msk /*!< DMA Enable Transmitter */
#define USART_CR3_RTSE_Pos (8U)
#define USART_CR3_RTSE_Msk (0x1UL << USART_CR3_RTSE_Pos) /*!< 0x00000100 */
#define USART_CR3_RTSE USART_CR3_RTSE_Msk                /*!< RTS Enable */
#define USART_CR3_CTSE_Pos (9U)
#define USART_CR3_CTSE_Msk (0x1UL << USART_CR3_CTSE_Pos) /*!< 0x00000200 */
#define USART_CR3_CTSE USART_CR3_CTSE_Msk                /*!< CTS Enable */
#define USART_CR3_CTSIE_Pos (10U)
#define USART_CR3_CTSIE_Msk (0x1UL << USART_CR3_CTSIE_Pos) /*!< 0x00000400 */
#define USART_CR3_CTSIE USART_CR3_CTSIE_Msk /*!< CTS Interrupt Enable */
#define USART_CR3_ONEBIT_Pos (11U)
#define USART_CR3_ONEBIT_Msk (0x1UL << USART_CR3_ONEBIT_Pos) /*!< 0x00000800 */
#define USART_CR3_ONEBIT \
    USART_CR3_ONEBIT_Msk /*!< One sample bit method enable */
#define USART_CR3_OVRDIS_Pos (12U)
#define USART_CR3_OVRDIS_Msk (0x1UL << USART_CR3_OVRDIS_Pos) /*!< 0x00001000 */
#define USART_CR3_OVRDIS USART_CR3_OVRDIS_Msk /*!< Overrun Disable */
#define USART_CR3_DDRE_Pos (13U)
#define USART_CR3_DDRE_Msk (0x1UL << USART_CR3_DDRE_Pos) /*!< 0x00002000 */
#define USART_CR3_DDRE USART_CR3_DDRE_Msk /*!< DMA Disable on Reception Error */
#define USART_CR3_DEM_Pos (14U)
#define USART_CR3_DEM_Msk (0x1UL << USART_CR3_DEM_Pos) /*!< 0x00004000 */
#define USART_CR3_DEM USART_CR3_DEM_Msk /*!< Driver Enable Mode */
#define USART_CR3_DEP_Pos (15U)
#define USART_CR3_DEP_Msk (0x1UL << USART_CR3_DEP_Pos) /*!< 0x00008000 */
#define USART_CR3_DEP USART_CR3_DEP_Msk /*!< Driver Enable Polarity Selection */
#define USART_CR3_SCARCNT_Pos (17U)
#define USART_CR3_SCARCNT_Msk \
    (0x7UL << USART_CR3_SCARCNT_Pos) /*!< 0x000E0000 */
#define USART_CR3_SCARCNT \
    USART_CR3_SCARCNT_Msk /*!< SCARCNT[2:0] bits (SmartCard Auto-Retry Count) */
#define USART_CR3_SCARCNT_0 (0x1UL << USART_CR3_SCARCNT_Pos) /*!< 0x00020000 */
#define USART_CR3_SCARCNT_1 (0x2UL << USART_CR3_SCARCNT_Pos) /*!< 0x00040000 */
#define USART_CR3_SCARCNT_2 (0x4UL << USART_CR3_SCARCNT_Pos) /*!< 0x00080000 */
#define USART_CR3_WUS_Pos (20U)
#define USART_CR3_WUS_Msk (0x3UL << USART_CR3_WUS_Pos) /*!< 0x00300000 */
#define USART_CR3_WUS \
    USART_CR3_WUS_Msk /*!< WUS[1:0] bits (Wake UP Interrupt Flag Selection) */
#define USART_CR3_WUS_0 (0x1UL << USART_CR3_WUS_Pos) /*!< 0x00100000 */
#define USART_CR3_WUS_1 (0x2UL << USART_CR3_WUS_Pos) /*!< 0x00200000 */
#define USART_CR3_WUFIE_Pos (22U)
#define USART_CR3_WUFIE_Msk (0x1UL << USART_CR3_WUFIE_Pos) /*!< 0x00400000 */
#define USART_CR3_WUFIE USART_CR3_WUFIE_Msk /*!< Wake Up Interrupt Enable */
#define USART_CR3_TXFTIE_Pos (23U)
#define USART_CR3_TXFTIE_Msk (0x1UL << USART_CR3_TXFTIE_Pos) /*!< 0x00800000 */
#define USART_CR3_TXFTIE \
    USART_CR3_TXFTIE_Msk /*!< TXFIFO threshold interrupt enable */
#define USART_CR3_TCBGTIE_Pos (24U)
#define USART_CR3_TCBGTIE_Msk \
    (0x1UL << USART_CR3_TCBGTIE_Pos) /*!< 0x01000000 */
#define USART_CR3_TCBGTIE \
    USART_CR3_TCBGTIE_Msk /*!< Transmission Complete Before Guard Time Interrupt Enable */
#define USART_CR3_RXFTCFG_Pos (25U)
#define USART_CR3_RXFTCFG_Msk \
    (0x7UL << USART_CR3_RXFTCFG_Pos) /*!< 0x0E000000 */
#define USART_CR3_RXFTCFG \
    USART_CR3_RXFTCFG_Msk /*!< RXFIFO FIFO threshold configuration */
#define USART_CR3_RXFTCFG_0 (0x1UL << USART_CR3_RXFTCFG_Pos) /*!< 0x02000000 */
#define USART_CR3_RXFTCFG_1 (0x2UL << USART_CR3_RXFTCFG_Pos) /*!< 0x04000000 */
#define USART_CR3_RXFTCFG_2 (0x4UL << USART_CR3_RXFTCFG_Pos) /*!< 0x08000000 */
#define USART_CR3_RXFTIE_Pos (28U)
#define USART_CR3_RXFTIE_Msk (0x1UL << USART_CR3_RXFTIE_Pos) /*!< 0x10000000 */
#define USART_CR3_RXFTIE \
    USART_CR3_RXFTIE_Msk /*!< RXFIFO threshold interrupt enable */
#define USART_CR3_TXFTCFG_Pos (29U)
#define USART_CR3_TXFTCFG_Msk \
    (0x7UL << USART_CR3_TXFTCFG_Pos) /*!< 0xE0000000 */
#define USART_CR3_TXFTCFG \
    USART_CR3_TXFTCFG_Msk /*!< TXFIFO threshold configuration */
#define USART_CR3_TXFTCFG_0 (0x1UL << USART_CR3_TXFTCFG_Pos) /*!< 0x20000000 */
#define USART_CR3_TXFTCFG_1 (0x2UL << USART_CR3_TXFTCFG_Pos) /*!< 0x40000000 */
#define USART_CR3_TXFTCFG_2 (0x4UL << USART_CR3_TXFTCFG_Pos) /*!< 0x80000000 */

/******************  Bit definition for USART_BRR register  *******************/
#define USART_BRR_LPUART_Pos (0U)
#define USART_BRR_LPUART_Msk \
    (0xFFFFFUL << USART_BRR_LPUART_Pos) /*!< 0x000FFFFF */
#define USART_BRR_LPUART \
    USART_BRR_LPUART_Msk /*!< LPUART Baud rate register [19:0] */
#define USART_BRR_BRR \
    ((uint16_t)0xFFFF) /*!< USART  Baud rate register [15:0] */

/******************  Bit definition for USART_GTPR register  ******************/
#define USART_GTPR_PSC_Pos (0U)
#define USART_GTPR_PSC_Msk (0xFFUL << USART_GTPR_PSC_Pos) /*!< 0x000000FF */
#define USART_GTPR_PSC \
    USART_GTPR_PSC_Msk /*!< PSC[7:0] bits (Prescaler value) */
#define USART_GTPR_GT_Pos (8U)
#define USART_GTPR_GT_Msk (0xFFUL << USART_GTPR_GT_Pos) /*!< 0x0000FF00 */
#define USART_GTPR_GT USART_GTPR_GT_Msk /*!< GT[7:0] bits (Guard time value) */

/*******************  Bit definition for USART_RTOR register  *****************/
#define USART_RTOR_RTO_Pos (0U)
#define USART_RTOR_RTO_Msk (0xFFFFFFUL << USART_RTOR_RTO_Pos) /*!< 0x00FFFFFF */
#define USART_RTOR_RTO USART_RTOR_RTO_Msk /*!< Receiver Time Out Value */
#define USART_RTOR_BLEN_Pos (24U)
#define USART_RTOR_BLEN_Msk (0xFFUL << USART_RTOR_BLEN_Pos) /*!< 0xFF000000 */
#define USART_RTOR_BLEN USART_RTOR_BLEN_Msk                 /*!< Block Length */

/*******************  Bit definition for USART_RQR register  ******************/
#define USART_RQR_ABRRQ ((uint16_t)0x0001) /*!< Auto-Baud Rate Request */
#define USART_RQR_SBKRQ ((uint16_t)0x0002) /*!< Send Break Request */
#define USART_RQR_MMRQ ((uint16_t)0x0004)  /*!< Mute Mode Request */
#define USART_RQR_RXFRQ ((uint16_t)0x0008) /*!< Receive Data flush Request */
#define USART_RQR_TXFRQ ((uint16_t)0x0010) /*!< Transmit data flush Request */

/*******************  Bit definition for USART_ISR register  ******************/
#define USART_ISR_PE_Pos (0U)
#define USART_ISR_PE_Msk (0x1UL << USART_ISR_PE_Pos) /*!< 0x00000001 */
#define USART_ISR_PE USART_ISR_PE_Msk                /*!< Parity Error */
#define USART_ISR_FE_Pos (1U)
#define USART_ISR_FE_Msk (0x1UL << USART_ISR_FE_Pos) /*!< 0x00000002 */
#define USART_ISR_FE USART_ISR_FE_Msk                /*!< Framing Error */
#define USART_ISR_NE_Pos (2U)
#define USART_ISR_NE_Msk (0x1UL << USART_ISR_NE_Pos) /*!< 0x00000004 */
#define USART_ISR_NE USART_ISR_NE_Msk                /*!< Noise detected Flag */
#define USART_ISR_ORE_Pos (3U)
#define USART_ISR_ORE_Msk (0x1UL << USART_ISR_ORE_Pos) /*!< 0x00000008 */
#define USART_ISR_ORE USART_ISR_ORE_Msk                /*!< OverRun Error */
#define USART_ISR_IDLE_Pos (4U)
#define USART_ISR_IDLE_Msk (0x1UL << USART_ISR_IDLE_Pos) /*!< 0x00000010 */
#define USART_ISR_IDLE USART_ISR_IDLE_Msk /*!< IDLE line detected */
#define USART_ISR_RXNE_Pos (5U)
#define USART_ISR_RXNE_Msk (0x1UL << USART_ISR_RXNE_Pos) /*!< 0x00000020 */
#define USART_ISR_RXNE USART_ISR_RXNE_Msk /*!< Read Data Register Not Empty */
#define USART_ISR_RXNE_RXFNE_Pos USART_ISR_RXNE_Pos
#define USART_ISR_RXNE_RXFNE_Msk USART_ISR_RXNE_Msk /*!< 0x00000020 */
#define USART_ISR_RXNE_RXFNE \
    USART_ISR_RXNE_Msk /*!< Read Data Register or RX FIFO Not Empty */
#define USART_ISR_TC_Pos (6U)
#define USART_ISR_TC_Msk (0x1UL << USART_ISR_TC_Pos) /*!< 0x00000040 */
#define USART_ISR_TC USART_ISR_TC_Msk /*!< Transmission Complete */
#define USART_ISR_TXE_Pos (7U)
#define USART_ISR_TXE_Msk (0x1UL << USART_ISR_TXE_Pos) /*!< 0x00000080 */
#define USART_ISR_TXE USART_ISR_TXE_Msk /*!< Transmit Data Register Empty */
#define USART_ISR_TXE_TXFNF_Pos USART_ISR_TXE_Pos
#define USART_ISR_TXE_TXFNF_Msk USART_ISR_TXE_Msk /*!< 0x00000080 */
#define USART_ISR_TXE_TXFNF \
    USART_ISR_TXE_Msk /*!< Transmit Data Register Empty or TX FIFO Not Full Flag */
#define USART_ISR_LBDF_Pos (8U)
#define USART_ISR_LBDF_Msk (0x1UL << USART_ISR_LBDF_Pos) /*!< 0x00000100 */
#define USART_ISR_LBDF USART_ISR_LBDF_Msk /*!< LIN Break Detection Flag */
#define USART_ISR_CTSIF_Pos (9U)
#define USART_ISR_CTSIF_Msk (0x1UL << USART_ISR_CTSIF_Pos) /*!< 0x00000200 */
#define USART_ISR_CTSIF USART_ISR_CTSIF_Msk /*!< CTS interrupt flag */
#define USART_ISR_CTS_Pos (10U)
#define USART_ISR_CTS_Msk (0x1UL << USART_ISR_CTS_Pos) /*!< 0x00000400 */
#define USART_ISR_CTS USART_ISR_CTS_Msk                /*!< CTS flag */
#define USART_ISR_RTOF_Pos (11U)
#define USART_ISR_RTOF_Msk (0x1UL << USART_ISR_RTOF_Pos) /*!< 0x00000800 */
#define USART_ISR_RTOF USART_ISR_RTOF_Msk /*!< Receiver Time Out */
#define USART_ISR_EOBF_Pos (12U)
#define USART_ISR_EOBF_Msk (0x1UL << USART_ISR_EOBF_Pos) /*!< 0x00001000 */
#define USART_ISR_EOBF USART_ISR_EOBF_Msk /*!< End Of Block Flag */
#define USART_ISR_UDR_Pos (13U)
#define USART_ISR_UDR_Msk (0x1UL << USART_ISR_UDR_Pos) /*!< 0x00002000 */
#define USART_ISR_UDR USART_ISR_UDR_Msk /*!< SPI slave underrun error flag */
#define USART_ISR_ABRE_Pos (14U)
#define USART_ISR_ABRE_Msk (0x1UL << USART_ISR_ABRE_Pos) /*!< 0x00004000 */
#define USART_ISR_ABRE USART_ISR_ABRE_Msk /*!< Auto-Baud Rate Error */
#define USART_ISR_ABRF_Pos (15U)
#define USART_ISR_ABRF_Msk (0x1UL << USART_ISR_ABRF_Pos) /*!< 0x00008000 */
#define USART_ISR_ABRF USART_ISR_ABRF_Msk /*!< Auto-Baud Rate Flag */
#define USART_ISR_BUSY_Pos (16U)
#define USART_ISR_BUSY_Msk (0x1UL << USART_ISR_BUSY_Pos) /*!< 0x00010000 */
#define USART_ISR_BUSY USART_ISR_BUSY_Msk                /*!< Busy Flag */
#define USART_ISR_CMF_Pos (17U)
#define USART_ISR_CMF_Msk (0x1UL << USART_ISR_CMF_Pos) /*!< 0x00020000 */
#define USART_ISR_CMF USART_ISR_CMF_Msk /*!< Character Match Flag */
#define USART_ISR_SBKF_Pos (18U)
#define USART_ISR_SBKF_Msk (0x1UL << USART_ISR_SBKF_Pos) /*!< 0x00040000 */
#define USART_ISR_SBKF USART_ISR_SBKF_Msk                /*!< Send Break Flag */
#define USART_ISR_RWU_Pos (19U)
#define USART_ISR_RWU_Msk (0x1UL << USART_ISR_RWU_Pos) /*!< 0x00080000 */
#define USART_ISR_RWU \
    USART_ISR_RWU_Msk /*!< Receive Wake Up from mute mode Flag */
#define USART_ISR_WUF_Pos (20U)
#define USART_ISR_WUF_Msk (0x1UL << USART_ISR_WUF_Pos) /*!< 0x00100000 */
#define USART_ISR_WUF USART_ISR_WUF_Msk /*!< Wake Up from low power mode Flag */
#define USART_ISR_TEACK_Pos (21U)
#define USART_ISR_TEACK_Msk (0x1UL << USART_ISR_TEACK_Pos) /*!< 0x00200000 */
#define USART_ISR_TEACK \
    USART_ISR_TEACK_Msk /*!< Transmit Enable Acknowledge Flag */
#define USART_ISR_REACK_Pos (22U)
#define USART_ISR_REACK_Msk (0x1UL << USART_ISR_REACK_Pos) /*!< 0x00400000 */
#define USART_ISR_REACK \
    USART_ISR_REACK_Msk /*!< Receive Enable Acknowledge Flag */
#define USART_ISR_TXFE_Pos (23U)
#define USART_ISR_TXFE_Msk (0x1UL << USART_ISR_TXFE_Pos) /*!< 0x00800000 */
#define USART_ISR_TXFE USART_ISR_TXFE_Msk                /*!< TXFIFO Empty */
#define USART_ISR_RXFF_Pos (24U)
#define USART_ISR_RXFF_Msk (0x1UL << USART_ISR_RXFF_Pos) /*!< 0x01000000 */
#define USART_ISR_RXFF USART_ISR_RXFF_Msk                /*!< RXFIFO Full */
#define USART_ISR_TCBGT_Pos (25U)
#define USART_ISR_TCBGT_Msk (0x1UL << USART_ISR_TCBGT_Pos) /*!< 0x02000000 */
#define USART_ISR_TCBGT \
    USART_ISR_TCBGT_Msk /*!< Transmission Complete Before Guard Time completion */
#define USART_ISR_RXFT_Pos (26U)
#define USART_ISR_RXFT_Msk (0x1UL << USART_ISR_RXFT_Pos) /*!< 0x04000000 */
#define USART_ISR_RXFT USART_ISR_RXFT_Msk /*!< RXFIFO threshold flag */
#define USART_ISR_TXFT_Pos (27U)
#define USART_ISR_TXFT_Msk (0x1UL << USART_ISR_TXFT_Pos) /*!< 0x08000000 */
#define USART_ISR_TXFT USART_ISR_TXFT_Msk /*!< TXFIFO threshold flag */

/*******************  Bit definition for USART_ICR register  ******************/
#define USART_ICR_PECF_Pos (0U)
#define USART_ICR_PECF_Msk (0x1UL << USART_ICR_PECF_Pos) /*!< 0x00000001 */
#define USART_ICR_PECF USART_ICR_PECF_Msk /*!< Parity Error Clear Flag */
#define USART_ICR_FECF_Pos (1U)
#define USART_ICR_FECF_Msk (0x1UL << USART_ICR_FECF_Pos) /*!< 0x00000002 */
#define USART_ICR_FECF USART_ICR_FECF_Msk /*!< Framing Error Clear Flag */
#define USART_ICR_NECF_Pos (2U)
#define USART_ICR_NECF_Msk (0x1UL << USART_ICR_NECF_Pos) /*!< 0x00000004 */
#define USART_ICR_NECF USART_ICR_NECF_Msk /*!< Noise detected Clear Flag */
#define USART_ICR_ORECF_Pos (3U)
#define USART_ICR_ORECF_Msk (0x1UL << USART_ICR_ORECF_Pos) /*!< 0x00000008 */
#define USART_ICR_ORECF USART_ICR_ORECF_Msk /*!< OverRun Error Clear Flag */
#define USART_ICR_IDLECF_Pos (4U)
#define USART_ICR_IDLECF_Msk (0x1UL << USART_ICR_IDLECF_Pos) /*!< 0x00000010 */
#define USART_ICR_IDLECF \
    USART_ICR_IDLECF_Msk /*!< IDLE line detected Clear Flag */
#define USART_ICR_TXFECF_Pos (5U)
#define USART_ICR_TXFECF_Msk (0x1UL << USART_ICR_TXFECF_Pos) /*!< 0x00000020 */
#define USART_ICR_TXFECF USART_ICR_TXFECF_Msk /*!< TXFIFO empty Clear flag */
#define USART_ICR_TCCF_Pos (6U)
#define USART_ICR_TCCF_Msk (0x1UL << USART_ICR_TCCF_Pos) /*!< 0x00000040 */
#define USART_ICR_TCCF \
    USART_ICR_TCCF_Msk /*!< Transmission Complete Clear Flag */
#define USART_ICR_TCBGTCF_Pos (7U)
#define USART_ICR_TCBGTCF_Msk \
    (0x1UL << USART_ICR_TCBGTCF_Pos) /*!< 0x00000080 */
#define USART_ICR_TCBGTCF \
    USART_ICR_TCBGTCF_Msk /*!< Transmission Complete Before Guard Time Clear Flag */
#define USART_ICR_LBDCF_Pos (8U)
#define USART_ICR_LBDCF_Msk (0x1UL << USART_ICR_LBDCF_Pos) /*!< 0x00000100 */
#define USART_ICR_LBDCF \
    USART_ICR_LBDCF_Msk /*!< LIN Break Detection Clear Flag */
#define USART_ICR_CTSCF_Pos (9U)
#define USART_ICR_CTSCF_Msk (0x1UL << USART_ICR_CTSCF_Pos) /*!< 0x00000200 */
#define USART_ICR_CTSCF USART_ICR_CTSCF_Msk /*!< CTS Interrupt Clear Flag */
#define USART_ICR_RTOCF_Pos (11U)
#define USART_ICR_RTOCF_Msk (0x1UL << USART_ICR_RTOCF_Pos) /*!< 0x00000800 */
#define USART_ICR_RTOCF USART_ICR_RTOCF_Msk /*!< Receiver Time Out Clear Flag */
#define USART_ICR_EOBCF_Pos (12U)
#define USART_ICR_EOBCF_Msk (0x1UL << USART_ICR_EOBCF_Pos) /*!< 0x00001000 */
#define USART_ICR_EOBCF USART_ICR_EOBCF_Msk /*!< End Of Block Clear Flag */
#define USART_ICR_UDRCF_Pos (13U)
#define USART_ICR_UDRCF_Msk (0x1UL << USART_ICR_UDRCF_Pos) /*!< 0x00002000 */
#define USART_ICR_UDRCF \
    USART_ICR_UDRCF_Msk /*!< SPI Slave Underrun Clear Flag */
#define USART_ICR_CMCF_Pos (17U)
#define USART_ICR_CMCF_Msk (0x1UL << USART_ICR_CMCF_Pos) /*!< 0x00020000 */
#define USART_ICR_CMCF USART_ICR_CMCF_Msk /*!< Character Match Clear Flag */
#define USART_ICR_WUCF_Pos (20U)
#define USART_ICR_WUCF_Msk (0x1UL << USART_ICR_WUCF_Pos) /*!< 0x00100000 */
#define USART_ICR_WUCF \
    USART_ICR_WUCF_Msk /*!< Wake Up from stop mode Clear Flag */

/*******************  Bit definition for USART_RDR register  ******************/
#define USART_RDR_RDR \
    ((uint16_t)0x01FF) /*!< RDR[8:0] bits (Receive Data value) */

/*******************  Bit definition for USART_TDR register  ******************/
#define USART_TDR_TDR \
    ((uint16_t)0x01FF) /*!< TDR[8:0] bits (Transmit Data value) */

/*******************  Bit definition for USART_PRESC register  ****************/
#define USART_PRESC_PRESCALER_Pos (0U)
#define USART_PRESC_PRESCALER_Msk \
    (0xFUL << USART_PRESC_PRESCALER_Pos) /*!< 0x0000000F */
#define USART_PRESC_PRESCALER \
    USART_PRESC_PRESCALER_Msk /*!< PRESCALER[3:0] bits (Clock prescaler) */
#define USART_PRESC_PRESCALER_0 \
    (0x1UL << USART_PRESC_PRESCALER_Pos) /*!< 0x00000001 */
#define USART_PRESC_PRESCALER_1 \
    (0x2UL << USART_PRESC_PRESCALER_Pos) /*!< 0x00000002 */
#define USART_PRESC_PRESCALER_2 \
    (0x4UL << USART_PRESC_PRESCALER_Pos) /*!< 0x00000004 */
#define USART_PRESC_PRESCALER_3 \
    (0x8UL << USART_PRESC_PRESCALER_Pos) /*!< 0x00000008 */

/*******************  Bit definition for USART_HWCFGR2 register  **************/
#define USART_HWCFGR2_CFG1_Pos (0U)
#define USART_HWCFGR2_CFG1_Msk \
    (0xFUL << USART_HWCFGR2_CFG1_Pos) /*!< 0x0000000F */
#define USART_HWCFGR2_CFG1 \
    USART_HWCFGR2_CFG1_Msk /*!< CFG1[3:0] bits (USART hardware configuration 1) */
#define USART_HWCFGR2_CFG2_Pos (4U)
#define USART_HWCFGR2_CFG2_Msk \
    (0xFUL << USART_HWCFGR2_CFG2_Pos) /*!< 0x000000F0 */
#define USART_HWCFGR2_CFG2 \
    USART_HWCFGR2_CFG2_Msk /*!< CFG2[7:4] bits (USART hardware configuration 2) */

/*******************  Bit definition for USART_HWCFGR1 register  **************/
#define USART_HWCFGR1_CFG1_Pos (0U)
#define USART_HWCFGR1_CFG1_Msk \
    (0xFUL << USART_HWCFGR1_CFG1_Pos) /*!< 0x0000000F */
#define USART_HWCFGR1_CFG1 \
    USART_HWCFGR1_CFG1_Msk /*!< CFG1[3:0] bits (USART hardware configuration 1) */
#define USART_HWCFGR1_CFG2_Pos (4U)
#define USART_HWCFGR1_CFG2_Msk \
    (0xFUL << USART_HWCFGR1_CFG2_Pos) /*!< 0x000000F0 */
#define USART_HWCFGR1_CFG2 \
    USART_HWCFGR1_CFG2_Msk /*!< CFG2[7:4] bits (USART hardware configuration 2) */
#define USART_HWCFGR1_CFG3_Pos (8U)
#define USART_HWCFGR1_CFG3_Msk \
    (0xFUL << USART_HWCFGR1_CFG3_Pos) /*!< 0x00000F00 */
#define USART_HWCFGR1_CFG3 \
    USART_HWCFGR1_CFG3_Msk /*!< CFG3[11:8] bits (USART hardware configuration 3) */
#define USART_HWCFGR1_CFG4_Pos (12U)
#define USART_HWCFGR1_CFG4_Msk \
    (0xFUL << USART_HWCFGR1_CFG4_Pos) /*!< 0x0000F000 */
#define USART_HWCFGR1_CFG4 \
    USART_HWCFGR1_CFG4_Msk /*!< CFG4[15:12] bits (USART hardware configuration 4) */
#define USART_HWCFGR1_CFG5_Pos (16U)
#define USART_HWCFGR1_CFG5_Msk \
    (0xFUL << USART_HWCFGR1_CFG5_Pos) /*!< 0x000F0000 */
#define USART_HWCFGR1_CFG5 \
    USART_HWCFGR1_CFG5_Msk /*!< CFG5[19:16] bits (USART hardware configuration 5) */
#define USART_HWCFGR1_CFG6_Pos (20U)
#define USART_HWCFGR1_CFG6_Msk \
    (0xFUL << USART_HWCFGR1_CFG6_Pos) /*!< 0x00F00000 */
#define USART_HWCFGR1_CFG6 \
    USART_HWCFGR1_CFG6_Msk /*!< CFG6[23:20] bits (USART hardware configuration 6) */
#define USART_HWCFGR1_CFG7_Pos (24U)
#define USART_HWCFGR1_CFG7_Msk \
    (0xFUL << USART_HWCFGR1_CFG7_Pos) /*!< 0x0F000000 */
#define USART_HWCFGR1_CFG7 \
    USART_HWCFGR1_CFG7_Msk /*!< CFG7[27:24] bits (USART hardware configuration 7) */
#define USART_HWCFGR1_CFG8_Pos (28U)
#define USART_HWCFGR1_CFG8_Msk \
    (0xFUL << USART_HWCFGR1_CFG8_Pos) /*!< 0xF0000000 */
#define USART_HWCFGR1_CFG8 \
    USART_HWCFGR1_CFG8_Msk /*!< CFG8[31:28] bits (USART hardware configuration 8) */

/*******************  Bit definition for USART_VERR register  *****************/
#define USART_VERR_MINREV_Pos (0U)
#define USART_VERR_MINREV_Msk \
    (0xFUL << USART_VERR_MINREV_Pos) /*!< 0x0000000F */
#define USART_VERR_MINREV \
    USART_VERR_MINREV_Msk /*!< MAJREV[3:0] bits (Minor revision) */
#define USART_VERR_MAJREV_Pos (4U)
#define USART_VERR_MAJREV_Msk \
    (0xFUL << USART_VERR_MAJREV_Pos) /*!< 0x000000F0 */
#define USART_VERR_MAJREV \
    USART_VERR_MAJREV_Msk /*!< MINREV[3:0] bits (Major revision) */

/*******************  Bit definition for USART_IPIDR register  ****************/
#define USART_IPIDR_ID_Pos (0U)
#define USART_IPIDR_ID_Msk \
    (0xFFFFFFFFUL << USART_IPIDR_ID_Pos) /*!< 0xFFFFFFFF */
#define USART_IPIDR_ID \
    USART_IPIDR_ID_Msk /*!< ID[31:0] bits (Peripheral identifier) */

/*******************  Bit definition for USART_SIDR register  ****************/
#define USART_SIDR_ID_Pos (0U)
#define USART_SIDR_ID_Msk (0xFFFFFFFFUL << USART_SIDR_ID_Pos) /*!< 0xFFFFFFFF */
#define USART_SIDR_ID \
    USART_SIDR_ID_Msk /*!< SID[31:0] bits (Size identification) */

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface (I2C)              */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for I2C_CR1 register  *******************/
#define I2C_CR1_PE_Pos (0U)
#define I2C_CR1_PE_Msk (0x1UL << I2C_CR1_PE_Pos) /*!< 0x00000001 */
#define I2C_CR1_PE I2C_CR1_PE_Msk                /*!< Peripheral enable */
#define I2C_CR1_TXIE_Pos (1U)
#define I2C_CR1_TXIE_Msk (0x1UL << I2C_CR1_TXIE_Pos) /*!< 0x00000002 */
#define I2C_CR1_TXIE I2C_CR1_TXIE_Msk                /*!< TX interrupt enable */
#define I2C_CR1_RXIE_Pos (2U)
#define I2C_CR1_RXIE_Msk (0x1UL << I2C_CR1_RXIE_Pos) /*!< 0x00000004 */
#define I2C_CR1_RXIE I2C_CR1_RXIE_Msk                /*!< RX interrupt enable */
#define I2C_CR1_ADDRIE_Pos (3U)
#define I2C_CR1_ADDRIE_Msk (0x1UL << I2C_CR1_ADDRIE_Pos) /*!< 0x00000008 */
#define I2C_CR1_ADDRIE I2C_CR1_ADDRIE_Msk /*!< Address match interrupt enable */
#define I2C_CR1_NACKIE_Pos (4U)
#define I2C_CR1_NACKIE_Msk (0x1UL << I2C_CR1_NACKIE_Pos) /*!< 0x00000010 */
#define I2C_CR1_NACKIE I2C_CR1_NACKIE_Msk /*!< NACK received interrupt enable */
#define I2C_CR1_STOPIE_Pos (5U)
#define I2C_CR1_STOPIE_Msk (0x1UL << I2C_CR1_STOPIE_Pos) /*!< 0x00000020 */
#define I2C_CR1_STOPIE \
    I2C_CR1_STOPIE_Msk /*!< STOP detection interrupt enable */
#define I2C_CR1_TCIE_Pos (6U)
#define I2C_CR1_TCIE_Msk (0x1UL << I2C_CR1_TCIE_Pos) /*!< 0x00000040 */
#define I2C_CR1_TCIE I2C_CR1_TCIE_Msk /*!< Transfer complete interrupt enable */
#define I2C_CR1_ERRIE_Pos (7U)
#define I2C_CR1_ERRIE_Msk (0x1UL << I2C_CR1_ERRIE_Pos) /*!< 0x00000080 */
#define I2C_CR1_ERRIE I2C_CR1_ERRIE_Msk /*!< Errors interrupt enable */
#define I2C_CR1_DNF_Pos (8U)
#define I2C_CR1_DNF_Msk (0xFUL << I2C_CR1_DNF_Pos) /*!< 0x00000F00 */
#define I2C_CR1_DNF I2C_CR1_DNF_Msk                /*!< Digital noise filter */
#define I2C_CR1_ANFOFF_Pos (12U)
#define I2C_CR1_ANFOFF_Msk (0x1UL << I2C_CR1_ANFOFF_Pos) /*!< 0x00001000 */
#define I2C_CR1_ANFOFF I2C_CR1_ANFOFF_Msk /*!< Analog noise filter OFF */
#define I2C_CR1_SWRST_Pos (13U)
#define I2C_CR1_SWRST_Msk (0x1UL << I2C_CR1_SWRST_Pos) /*!< 0x00002000 */
#define I2C_CR1_SWRST I2C_CR1_SWRST_Msk                /*!< Software reset */
#define I2C_CR1_TXDMAEN_Pos (14U)
#define I2C_CR1_TXDMAEN_Msk (0x1UL << I2C_CR1_TXDMAEN_Pos) /*!< 0x00004000 */
#define I2C_CR1_TXDMAEN \
    I2C_CR1_TXDMAEN_Msk /*!< DMA transmission requests enable */
#define I2C_CR1_RXDMAEN_Pos (15U)
#define I2C_CR1_RXDMAEN_Msk (0x1UL << I2C_CR1_RXDMAEN_Pos) /*!< 0x00008000 */
#define I2C_CR1_RXDMAEN \
    I2C_CR1_RXDMAEN_Msk /*!< DMA reception requests enable */
#define I2C_CR1_SBC_Pos (16U)
#define I2C_CR1_SBC_Msk (0x1UL << I2C_CR1_SBC_Pos) /*!< 0x00010000 */
#define I2C_CR1_SBC I2C_CR1_SBC_Msk                /*!< Slave byte control */
#define I2C_CR1_NOSTRETCH_Pos (17U)
#define I2C_CR1_NOSTRETCH_Msk \
    (0x1UL << I2C_CR1_NOSTRETCH_Pos)            /*!< 0x00020000 */
#define I2C_CR1_NOSTRETCH I2C_CR1_NOSTRETCH_Msk /*!< Clock stretching disable */
#define I2C_CR1_WUPEN_Pos (18U)
#define I2C_CR1_WUPEN_Msk (0x1UL << I2C_CR1_WUPEN_Pos) /*!< 0x00040000 */
#define I2C_CR1_WUPEN I2C_CR1_WUPEN_Msk /*!< Wakeup from STOP enable */
#define I2C_CR1_GCEN_Pos (19U)
#define I2C_CR1_GCEN_Msk (0x1UL << I2C_CR1_GCEN_Pos) /*!< 0x00080000 */
#define I2C_CR1_GCEN I2C_CR1_GCEN_Msk                /*!< General call enable */
#define I2C_CR1_SMBHEN_Pos (20U)
#define I2C_CR1_SMBHEN_Msk (0x1UL << I2C_CR1_SMBHEN_Pos) /*!< 0x00100000 */
#define I2C_CR1_SMBHEN I2C_CR1_SMBHEN_Msk /*!< SMBus host address enable */
#define I2C_CR1_SMBDEN_Pos (21U)
#define I2C_CR1_SMBDEN_Msk (0x1UL << I2C_CR1_SMBDEN_Pos) /*!< 0x00200000 */
#define I2C_CR1_SMBDEN \
    I2C_CR1_SMBDEN_Msk /*!< SMBus device default address enable */
#define I2C_CR1_ALERTEN_Pos (22U)
#define I2C_CR1_ALERTEN_Msk (0x1UL << I2C_CR1_ALERTEN_Pos) /*!< 0x00400000 */
#define I2C_CR1_ALERTEN I2C_CR1_ALERTEN_Msk /*!< SMBus alert enable */
#define I2C_CR1_PECEN_Pos (23U)
#define I2C_CR1_PECEN_Msk (0x1UL << I2C_CR1_PECEN_Pos) /*!< 0x00800000 */
#define I2C_CR1_PECEN I2C_CR1_PECEN_Msk                /*!< PEC enable */
#define I2C_CR1_FMP_Pos (24U)
#define I2C_CR1_FMP_Msk (0x1UL << I2C_CR1_FMP_Pos) /*!< 0x01000000 */
#define I2C_CR1_FMP I2C_CR1_FMP_Msk /*!< Fast-mode Plus 20 mA drive enable */
#define I2C_CR1_ADDRACLR_Pos (30U)
#define I2C_CR1_ADDRACLR_Msk (0x1UL << I2C_CR1_ADDRACLR_Pos) /*!< 0x40000000 */
#define I2C_CR1_ADDRACLR I2C_CR1_ADDRACLR_Msk /*!< ADDRACLR enable */
#define I2C_CR1_STOPFACLR_Pos (31U)
#define I2C_CR1_STOPFACLR_Msk \
    (0x1UL << I2C_CR1_STOPFACLR_Pos)            /*!< 0x80000000 */
#define I2C_CR1_STOPFACLR I2C_CR1_STOPFACLR_Msk /*!< STOPFACLR enable */

/******************  Bit definition for I2C_CR2 register  ********************/
#define I2C_CR2_SADD_Pos (0U)
#define I2C_CR2_SADD_Msk (0x3FFUL << I2C_CR2_SADD_Pos) /*!< 0x000003FF */
#define I2C_CR2_SADD I2C_CR2_SADD_Msk /*!< Slave address (master mode) */
#define I2C_CR2_RD_WRN_Pos (10U)
#define I2C_CR2_RD_WRN_Msk (0x1UL << I2C_CR2_RD_WRN_Pos) /*!< 0x00000400 */
#define I2C_CR2_RD_WRN \
    I2C_CR2_RD_WRN_Msk /*!< Transfer direction (master mode) */
#define I2C_CR2_ADD10_Pos (11U)
#define I2C_CR2_ADD10_Msk (0x1UL << I2C_CR2_ADD10_Pos) /*!< 0x00000800 */
#define I2C_CR2_ADD10 \
    I2C_CR2_ADD10_Msk /*!< 10-bit addressing mode (master mode) */
#define I2C_CR2_HEAD10R_Pos (12U)
#define I2C_CR2_HEAD10R_Msk (0x1UL << I2C_CR2_HEAD10R_Pos) /*!< 0x00001000 */
#define I2C_CR2_HEAD10R \
    I2C_CR2_HEAD10R_Msk /*!< 10-bit address header only read direction (master mode) */
#define I2C_CR2_START_Pos (13U)
#define I2C_CR2_START_Msk (0x1UL << I2C_CR2_START_Pos) /*!< 0x00002000 */
#define I2C_CR2_START I2C_CR2_START_Msk                /*!< START generation */
#define I2C_CR2_STOP_Pos (14U)
#define I2C_CR2_STOP_Msk (0x1UL << I2C_CR2_STOP_Pos) /*!< 0x00004000 */
#define I2C_CR2_STOP I2C_CR2_STOP_Msk /*!< STOP generation (master mode) */
#define I2C_CR2_NACK_Pos (15U)
#define I2C_CR2_NACK_Msk (0x1UL << I2C_CR2_NACK_Pos) /*!< 0x00008000 */
#define I2C_CR2_NACK I2C_CR2_NACK_Msk /*!< NACK generation (slave mode) */
#define I2C_CR2_NBYTES_Pos (16U)
#define I2C_CR2_NBYTES_Msk (0xFFUL << I2C_CR2_NBYTES_Pos) /*!< 0x00FF0000 */
#define I2C_CR2_NBYTES I2C_CR2_NBYTES_Msk /*!< Number of bytes */
#define I2C_CR2_RELOAD_Pos (24U)
#define I2C_CR2_RELOAD_Msk (0x1UL << I2C_CR2_RELOAD_Pos) /*!< 0x01000000 */
#define I2C_CR2_RELOAD I2C_CR2_RELOAD_Msk /*!< NBYTES reload mode */
#define I2C_CR2_AUTOEND_Pos (25U)
#define I2C_CR2_AUTOEND_Msk (0x1UL << I2C_CR2_AUTOEND_Pos) /*!< 0x02000000 */
#define I2C_CR2_AUTOEND \
    I2C_CR2_AUTOEND_Msk /*!< Automatic end mode (master mode) */
#define I2C_CR2_PECBYTE_Pos (26U)
#define I2C_CR2_PECBYTE_Msk (0x1UL << I2C_CR2_PECBYTE_Pos) /*!< 0x04000000 */
#define I2C_CR2_PECBYTE I2C_CR2_PECBYTE_Msk /*!< Packet error checking byte */

/*******************  Bit definition for I2C_OAR1 register  ******************/
#define I2C_OAR1_OA1_Pos (0U)
#define I2C_OAR1_OA1_Msk (0x3FFUL << I2C_OAR1_OA1_Pos) /*!< 0x000003FF */
#define I2C_OAR1_OA1 I2C_OAR1_OA1_Msk /*!< Interface own address 1 */
#define I2C_OAR1_OA1MODE_Pos (10U)
#define I2C_OAR1_OA1MODE_Msk (0x1UL << I2C_OAR1_OA1MODE_Pos) /*!< 0x00000400 */
#define I2C_OAR1_OA1MODE I2C_OAR1_OA1MODE_Msk /*!< Own address 1 10-bit mode */
#define I2C_OAR1_OA1EN_Pos (15U)
#define I2C_OAR1_OA1EN_Msk (0x1UL << I2C_OAR1_OA1EN_Pos) /*!< 0x00008000 */
#define I2C_OAR1_OA1EN I2C_OAR1_OA1EN_Msk /*!< Own address 1 enable */

/*******************  Bit definition for I2C_OAR2 register  ******************/
#define I2C_OAR2_OA2_Pos (1U)
#define I2C_OAR2_OA2_Msk (0x7FUL << I2C_OAR2_OA2_Pos) /*!< 0x000000FE */
#define I2C_OAR2_OA2 I2C_OAR2_OA2_Msk /*!< Interface own address 2 */
#define I2C_OAR2_OA2MSK_Pos (8U)
#define I2C_OAR2_OA2MSK_Msk (0x7UL << I2C_OAR2_OA2MSK_Pos) /*!< 0x00000700 */
#define I2C_OAR2_OA2MSK I2C_OAR2_OA2MSK_Msk /*!< Own address 2 masks */
#define I2C_OAR2_OA2NOMASK \
    (0x00000000UL) /*!< No mask                                        */
#define I2C_OAR2_OA2MASK01_Pos (8U)
#define I2C_OAR2_OA2MASK01_Msk \
    (0x1UL << I2C_OAR2_OA2MASK01_Pos) /*!< 0x00000100 */
#define I2C_OAR2_OA2MASK01 \
    I2C_OAR2_OA2MASK01_Msk /*!< OA2[1] is masked, Only OA2[7:2] are compared   */
#define I2C_OAR2_OA2MASK02_Pos (9U)
#define I2C_OAR2_OA2MASK02_Msk \
    (0x1UL << I2C_OAR2_OA2MASK02_Pos) /*!< 0x00000200 */
#define I2C_OAR2_OA2MASK02 \
    I2C_OAR2_OA2MASK02_Msk /*!< OA2[2:1] is masked, Only OA2[7:3] are compared */
#define I2C_OAR2_OA2MASK03_Pos (8U)
#define I2C_OAR2_OA2MASK03_Msk \
    (0x3UL << I2C_OAR2_OA2MASK03_Pos) /*!< 0x00000300 */
#define I2C_OAR2_OA2MASK03 \
    I2C_OAR2_OA2MASK03_Msk /*!< OA2[3:1] is masked, Only OA2[7:4] are compared */
#define I2C_OAR2_OA2MASK04_Pos (10U)
#define I2C_OAR2_OA2MASK04_Msk \
    (0x1UL << I2C_OAR2_OA2MASK04_Pos) /*!< 0x00000400 */
#define I2C_OAR2_OA2MASK04 \
    I2C_OAR2_OA2MASK04_Msk /*!< OA2[4:1] is masked, Only OA2[7:5] are compared */
#define I2C_OAR2_OA2MASK05_Pos (8U)
#define I2C_OAR2_OA2MASK05_Msk \
    (0x5UL << I2C_OAR2_OA2MASK05_Pos) /*!< 0x00000500 */
#define I2C_OAR2_OA2MASK05 \
    I2C_OAR2_OA2MASK05_Msk /*!< OA2[5:1] is masked, Only OA2[7:6] are compared */
#define I2C_OAR2_OA2MASK06_Pos (9U)
#define I2C_OAR2_OA2MASK06_Msk \
    (0x3UL << I2C_OAR2_OA2MASK06_Pos) /*!< 0x00000600 */
#define I2C_OAR2_OA2MASK06 \
    I2C_OAR2_OA2MASK06_Msk /*!< OA2[6:1] is masked, Only OA2[7] are compared   */
#define I2C_OAR2_OA2MASK07_Pos (8U)
#define I2C_OAR2_OA2MASK07_Msk \
    (0x7UL << I2C_OAR2_OA2MASK07_Pos) /*!< 0x00000700 */
#define I2C_OAR2_OA2MASK07 \
    I2C_OAR2_OA2MASK07_Msk /*!< OA2[7:1] is masked, No comparison is done      */
#define I2C_OAR2_OA2EN_Pos (15U)
#define I2C_OAR2_OA2EN_Msk (0x1UL << I2C_OAR2_OA2EN_Pos) /*!< 0x00008000 */
#define I2C_OAR2_OA2EN I2C_OAR2_OA2EN_Msk /*!< Own address 2 enable */

/*******************  Bit definition for I2C_TIMINGR register *******************/
#define I2C_TIMINGR_SCLL_Pos (0U)
#define I2C_TIMINGR_SCLL_Msk (0xFFUL << I2C_TIMINGR_SCLL_Pos) /*!< 0x000000FF */
#define I2C_TIMINGR_SCLL \
    I2C_TIMINGR_SCLL_Msk /*!< SCL low period (master mode) */
#define I2C_TIMINGR_SCLH_Pos (8U)
#define I2C_TIMINGR_SCLH_Msk (0xFFUL << I2C_TIMINGR_SCLH_Pos) /*!< 0x0000FF00 */
#define I2C_TIMINGR_SCLH \
    I2C_TIMINGR_SCLH_Msk /*!< SCL high period (master mode) */
#define I2C_TIMINGR_SDADEL_Pos (16U)
#define I2C_TIMINGR_SDADEL_Msk \
    (0xFUL << I2C_TIMINGR_SDADEL_Pos)             /*!< 0x000F0000 */
#define I2C_TIMINGR_SDADEL I2C_TIMINGR_SDADEL_Msk /*!< Data hold time */
#define I2C_TIMINGR_SCLDEL_Pos (20U)
#define I2C_TIMINGR_SCLDEL_Msk \
    (0xFUL << I2C_TIMINGR_SCLDEL_Pos)             /*!< 0x00F00000 */
#define I2C_TIMINGR_SCLDEL I2C_TIMINGR_SCLDEL_Msk /*!< Data setup time */
#define I2C_TIMINGR_PRESC_Pos (28U)
#define I2C_TIMINGR_PRESC_Msk \
    (0xFUL << I2C_TIMINGR_PRESC_Pos)            /*!< 0xF0000000 */
#define I2C_TIMINGR_PRESC I2C_TIMINGR_PRESC_Msk /*!< Timings prescaler */

/******************* Bit definition for I2C_TIMEOUTR register *******************/
#define I2C_TIMEOUTR_TIMEOUTA_Pos (0U)
#define I2C_TIMEOUTR_TIMEOUTA_Msk \
    (0xFFFUL << I2C_TIMEOUTR_TIMEOUTA_Pos)              /*!< 0x00000FFF */
#define I2C_TIMEOUTR_TIMEOUTA I2C_TIMEOUTR_TIMEOUTA_Msk /*!< Bus timeout A */
#define I2C_TIMEOUTR_TIDLE_Pos (12U)
#define I2C_TIMEOUTR_TIDLE_Msk \
    (0x1UL << I2C_TIMEOUTR_TIDLE_Pos) /*!< 0x00001000 */
#define I2C_TIMEOUTR_TIDLE \
    I2C_TIMEOUTR_TIDLE_Msk /*!< Idle clock timeout detection */
#define I2C_TIMEOUTR_TIMOUTEN_Pos (15U)
#define I2C_TIMEOUTR_TIMOUTEN_Msk \
    (0x1UL << I2C_TIMEOUTR_TIMOUTEN_Pos) /*!< 0x00008000 */
#define I2C_TIMEOUTR_TIMOUTEN \
    I2C_TIMEOUTR_TIMOUTEN_Msk /*!< Clock timeout enable */
#define I2C_TIMEOUTR_TIMEOUTB_Pos (16U)
#define I2C_TIMEOUTR_TIMEOUTB_Msk \
    (0xFFFUL << I2C_TIMEOUTR_TIMEOUTB_Pos)              /*!< 0x0FFF0000 */
#define I2C_TIMEOUTR_TIMEOUTB I2C_TIMEOUTR_TIMEOUTB_Msk /*!< Bus timeout B*/
#define I2C_TIMEOUTR_TEXTEN_Pos (31U)
#define I2C_TIMEOUTR_TEXTEN_Msk \
    (0x1UL << I2C_TIMEOUTR_TEXTEN_Pos) /*!< 0x80000000 */
#define I2C_TIMEOUTR_TEXTEN \
    I2C_TIMEOUTR_TEXTEN_Msk /*!< Extended clock timeout enable */

/******************  Bit definition for I2C_ISR register  *********************/
#define I2C_ISR_TXE_Pos (0U)
#define I2C_ISR_TXE_Msk (0x1UL << I2C_ISR_TXE_Pos) /*!< 0x00000001 */
#define I2C_ISR_TXE I2C_ISR_TXE_Msk /*!< Transmit data register empty */
#define I2C_ISR_TXIS_Pos (1U)
#define I2C_ISR_TXIS_Msk (0x1UL << I2C_ISR_TXIS_Pos) /*!< 0x00000002 */
#define I2C_ISR_TXIS I2C_ISR_TXIS_Msk /*!< Transmit interrupt status */
#define I2C_ISR_RXNE_Pos (2U)
#define I2C_ISR_RXNE_Msk (0x1UL << I2C_ISR_RXNE_Pos) /*!< 0x00000004 */
#define I2C_ISR_RXNE I2C_ISR_RXNE_Msk /*!< Receive data register not empty */
#define I2C_ISR_ADDR_Pos (3U)
#define I2C_ISR_ADDR_Msk (0x1UL << I2C_ISR_ADDR_Pos) /*!< 0x00000008 */
#define I2C_ISR_ADDR I2C_ISR_ADDR_Msk /*!< Address matched (slave mode)*/
#define I2C_ISR_NACKF_Pos (4U)
#define I2C_ISR_NACKF_Msk (0x1UL << I2C_ISR_NACKF_Pos) /*!< 0x00000010 */
#define I2C_ISR_NACKF I2C_ISR_NACKF_Msk /*!< NACK received flag */
#define I2C_ISR_STOPF_Pos (5U)
#define I2C_ISR_STOPF_Msk (0x1UL << I2C_ISR_STOPF_Pos) /*!< 0x00000020 */
#define I2C_ISR_STOPF I2C_ISR_STOPF_Msk /*!< STOP detection flag */
#define I2C_ISR_TC_Pos (6U)
#define I2C_ISR_TC_Msk (0x1UL << I2C_ISR_TC_Pos) /*!< 0x00000040 */
#define I2C_ISR_TC I2C_ISR_TC_Msk /*!< Transfer complete (master mode) */
#define I2C_ISR_TCR_Pos (7U)
#define I2C_ISR_TCR_Msk (0x1UL << I2C_ISR_TCR_Pos) /*!< 0x00000080 */
#define I2C_ISR_TCR I2C_ISR_TCR_Msk /*!< Transfer complete reload */
#define I2C_ISR_BERR_Pos (8U)
#define I2C_ISR_BERR_Msk (0x1UL << I2C_ISR_BERR_Pos) /*!< 0x00000100 */
#define I2C_ISR_BERR I2C_ISR_BERR_Msk                /*!< Bus error */
#define I2C_ISR_ARLO_Pos (9U)
#define I2C_ISR_ARLO_Msk (0x1UL << I2C_ISR_ARLO_Pos) /*!< 0x00000200 */
#define I2C_ISR_ARLO I2C_ISR_ARLO_Msk                /*!< Arbitration lost */
#define I2C_ISR_OVR_Pos (10U)
#define I2C_ISR_OVR_Msk (0x1UL << I2C_ISR_OVR_Pos) /*!< 0x00000400 */
#define I2C_ISR_OVR I2C_ISR_OVR_Msk                /*!< Overrun/Underrun */
#define I2C_ISR_PECERR_Pos (11U)
#define I2C_ISR_PECERR_Msk (0x1UL << I2C_ISR_PECERR_Pos) /*!< 0x00000800 */
#define I2C_ISR_PECERR I2C_ISR_PECERR_Msk /*!< PEC error in reception */
#define I2C_ISR_TIMEOUT_Pos (12U)
#define I2C_ISR_TIMEOUT_Msk (0x1UL << I2C_ISR_TIMEOUT_Pos) /*!< 0x00001000 */
#define I2C_ISR_TIMEOUT \
    I2C_ISR_TIMEOUT_Msk /*!< Timeout or Tlow detection flag */
#define I2C_ISR_ALERT_Pos (13U)
#define I2C_ISR_ALERT_Msk (0x1UL << I2C_ISR_ALERT_Pos) /*!< 0x00002000 */
#define I2C_ISR_ALERT I2C_ISR_ALERT_Msk                /*!< SMBus alert */
#define I2C_ISR_BUSY_Pos (15U)
#define I2C_ISR_BUSY_Msk (0x1UL << I2C_ISR_BUSY_Pos) /*!< 0x00008000 */
#define I2C_ISR_BUSY I2C_ISR_BUSY_Msk                /*!< Bus busy */
#define I2C_ISR_DIR_Pos (16U)
#define I2C_ISR_DIR_Msk (0x1UL << I2C_ISR_DIR_Pos) /*!< 0x00010000 */
#define I2C_ISR_DIR I2C_ISR_DIR_Msk /*!< Transfer direction (slave mode) */
#define I2C_ISR_ADDCODE_Pos (17U)
#define I2C_ISR_ADDCODE_Msk (0x7FUL << I2C_ISR_ADDCODE_Pos) /*!< 0x00FE0000 */
#define I2C_ISR_ADDCODE \
    I2C_ISR_ADDCODE_Msk /*!< Address match code (slave mode) */

/******************  Bit definition for I2C_ICR register  *********************/
#define I2C_ICR_ADDRCF_Pos (3U)
#define I2C_ICR_ADDRCF_Msk (0x1UL << I2C_ICR_ADDRCF_Pos) /*!< 0x00000008 */
#define I2C_ICR_ADDRCF I2C_ICR_ADDRCF_Msk /*!< Address matched clear flag */
#define I2C_ICR_NACKCF_Pos (4U)
#define I2C_ICR_NACKCF_Msk (0x1UL << I2C_ICR_NACKCF_Pos) /*!< 0x00000010 */
#define I2C_ICR_NACKCF I2C_ICR_NACKCF_Msk                /*!< NACK clear flag */
#define I2C_ICR_STOPCF_Pos (5U)
#define I2C_ICR_STOPCF_Msk (0x1UL << I2C_ICR_STOPCF_Pos) /*!< 0x00000020 */
#define I2C_ICR_STOPCF I2C_ICR_STOPCF_Msk /*!< STOP detection clear flag */
#define I2C_ICR_BERRCF_Pos (8U)
#define I2C_ICR_BERRCF_Msk (0x1UL << I2C_ICR_BERRCF_Pos) /*!< 0x00000100 */
#define I2C_ICR_BERRCF I2C_ICR_BERRCF_Msk /*!< Bus error clear flag */
#define I2C_ICR_ARLOCF_Pos (9U)
#define I2C_ICR_ARLOCF_Msk (0x1UL << I2C_ICR_ARLOCF_Pos) /*!< 0x00000200 */
#define I2C_ICR_ARLOCF I2C_ICR_ARLOCF_Msk /*!< Arbitration lost clear flag */
#define I2C_ICR_OVRCF_Pos (10U)
#define I2C_ICR_OVRCF_Msk (0x1UL << I2C_ICR_OVRCF_Pos) /*!< 0x00000400 */
#define I2C_ICR_OVRCF I2C_ICR_OVRCF_Msk /*!< Overrun/Underrun clear flag */
#define I2C_ICR_PECCF_Pos (11U)
#define I2C_ICR_PECCF_Msk (0x1UL << I2C_ICR_PECCF_Pos) /*!< 0x00000800 */
#define I2C_ICR_PECCF I2C_ICR_PECCF_Msk /*!< PAC error clear flag */
#define I2C_ICR_TIMOUTCF_Pos (12U)
#define I2C_ICR_TIMOUTCF_Msk (0x1UL << I2C_ICR_TIMOUTCF_Pos) /*!< 0x00001000 */
#define I2C_ICR_TIMOUTCF I2C_ICR_TIMOUTCF_Msk /*!< Timeout clear flag */
#define I2C_ICR_ALERTCF_Pos (13U)
#define I2C_ICR_ALERTCF_Msk (0x1UL << I2C_ICR_ALERTCF_Pos) /*!< 0x00002000 */
#define I2C_ICR_ALERTCF I2C_ICR_ALERTCF_Msk /*!< Alert clear flag */

/******************  Bit definition for I2C_PECR register  *********************/
#define I2C_PECR_PEC_Pos (0U)
#define I2C_PECR_PEC_Msk (0xFFUL << I2C_PECR_PEC_Pos) /*!< 0x000000FF */
#define I2C_PECR_PEC I2C_PECR_PEC_Msk                 /*!< PEC register */

/******************  Bit definition for I2C_RXDR register  *********************/
#define I2C_RXDR_RXDATA_Pos (0U)
#define I2C_RXDR_RXDATA_Msk (0xFFUL << I2C_RXDR_RXDATA_Pos) /*!< 0x000000FF */
#define I2C_RXDR_RXDATA I2C_RXDR_RXDATA_Msk /*!< 8-bit receive data */

/******************  Bit definition for I2C_TXDR register  *********************/
#define I2C_TXDR_TXDATA_Pos (0U)
#define I2C_TXDR_TXDATA_Msk (0xFFUL << I2C_TXDR_TXDATA_Pos) /*!< 0x000000FF */
#define I2C_TXDR_TXDATA I2C_TXDR_TXDATA_Msk /*!< 8-bit transmit data */

/******************************************************************************/
/*                                                                            */
/*             Improved Inter-integrated Circuit Interface (I3C)              */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for I3C_CR register  *********************/
#define I3C_CR_DCNT_Pos (0U)
#define I3C_CR_DCNT_Msk (0xFFFFUL << I3C_CR_DCNT_Pos) /*!< 0x0000FFFF */
#define I3C_CR_DCNT I3C_CR_DCNT_Msk                   /*!< Data Byte Count */
#define I3C_CR_RNW_Pos (16U)
#define I3C_CR_RNW_Msk (0x1UL << I3C_CR_RNW_Pos) /*!< 0x00010000 */
#define I3C_CR_RNW I3C_CR_RNW_Msk                /*!< Read Not Write */
#define I3C_CR_CCC_Pos (16U)
#define I3C_CR_CCC_Msk (0xFFUL << I3C_CR_CCC_Pos) /*!< 0x00FF0000 */
#define I3C_CR_CCC I3C_CR_CCC_Msk                 /*!< 8-Bit CCC code */
#define I3C_CR_ADD_Pos (17U)
#define I3C_CR_ADD_Msk (0x7FUL << I3C_CR_ADD_Pos) /*!< 0x00FE0000 */
#define I3C_CR_ADD I3C_CR_ADD_Msk                 /*!< Target Address */
#define I3C_CR_MTYPE_Pos (27U)
#define I3C_CR_MTYPE_Msk (0xFUL << I3C_CR_MTYPE_Pos) /*!< 0xF8000000 */
#define I3C_CR_MTYPE I3C_CR_MTYPE_Msk                /*!< Message Type */
#define I3C_CR_MTYPE_0 (0x1UL << I3C_CR_MTYPE_Pos)   /*!< 0x08000000 */
#define I3C_CR_MTYPE_1 (0x2UL << I3C_CR_MTYPE_Pos)   /*!< 0x10000000 */
#define I3C_CR_MTYPE_2 (0x4UL << I3C_CR_MTYPE_Pos)   /*!< 0x20000000 */
#define I3C_CR_MTYPE_3 (0x8UL << I3C_CR_MTYPE_Pos)   /*!< 0x40000000 */
#define I3C_CR_MEND_Pos (31U)
#define I3C_CR_MEND_Msk (0x1UL << I3C_CR_MEND_Pos) /*!< 0x80000000 */
#define I3C_CR_MEND I3C_CR_MEND_Msk                /*!< Message End */

/*******************  Bit definition for I3C_CFGR register  *******************/
#define I3C_CFGR_EN_Pos (0U)
#define I3C_CFGR_EN_Msk (0x1UL << I3C_CFGR_EN_Pos) /*!< 0x00000001 */
#define I3C_CFGR_EN I3C_CFGR_EN_Msk                /*!< Peripheral Enable */
#define I3C_CFGR_CRINIT_Pos (1U)
#define I3C_CFGR_CRINIT_Msk (0x1UL << I3C_CFGR_CRINIT_Pos) /*!< 0x00000002 */
#define I3C_CFGR_CRINIT \
    I3C_CFGR_CRINIT_Msk /*!< Peripheral Init mode (Target/Controller) */
#define I3C_CFGR_NOARBH_Pos (2U)
#define I3C_CFGR_NOARBH_Msk (0x1UL << I3C_CFGR_NOARBH_Pos) /*!< 0x00000004 */
#define I3C_CFGR_NOARBH I3C_CFGR_NOARBH_Msk /*!< No Arbitration Header (7'h7E)*/
#define I3C_CFGR_RSTPTRN_Pos (3U)
#define I3C_CFGR_RSTPTRN_Msk (0x1UL << I3C_CFGR_RSTPTRN_Pos) /*!< 0x00000008 */
#define I3C_CFGR_RSTPTRN I3C_CFGR_RSTPTRN_Msk /*!< Reset Pattern enable */
#define I3C_CFGR_EXITPTRN_Pos (4U)
#define I3C_CFGR_EXITPTRN_Msk \
    (0x1UL << I3C_CFGR_EXITPTRN_Pos)            /*!< 0x00000010 */
#define I3C_CFGR_EXITPTRN I3C_CFGR_EXITPTRN_Msk /*!< Exit Pattern enable */
#define I3C_CFGR_HKSDAEN_Pos (5U)
#define I3C_CFGR_HKSDAEN_Msk (0x1UL << I3C_CFGR_HKSDAEN_Pos) /*!< 0x00000020 */
#define I3C_CFGR_HKSDAEN I3C_CFGR_HKSDAEN_Msk /*!< High-Keeper on SDA Enable */
#define I3C_CFGR_HJACK_Pos (7U)
#define I3C_CFGR_HJACK_Msk (0x1UL << I3C_CFGR_HJACK_Pos) /*!< 0x00000080 */
#define I3C_CFGR_HJACK I3C_CFGR_HJACK_Msk /*!< Hot Join Acknowledgment */
#define I3C_CFGR_RXDMAEN_Pos (8U)
#define I3C_CFGR_RXDMAEN_Msk (0x1UL << I3C_CFGR_RXDMAEN_Pos) /*!< 0x00000100 */
#define I3C_CFGR_RXDMAEN I3C_CFGR_RXDMAEN_Msk /*!< RX FIFO DMA mode Enable */
#define I3C_CFGR_RXFLUSH_Pos (9U)
#define I3C_CFGR_RXFLUSH_Msk (0x1UL << I3C_CFGR_RXFLUSH_Pos) /*!< 0x00000200 */
#define I3C_CFGR_RXFLUSH I3C_CFGR_RXFLUSH_Msk /*!< RX FIFO Flush */
#define I3C_CFGR_RXTHRES_Pos (10U)
#define I3C_CFGR_RXTHRES_Msk (0x1UL << I3C_CFGR_RXTHRES_Pos) /*!< 0x00000400 */
#define I3C_CFGR_RXTHRES I3C_CFGR_RXTHRES_Msk /*!< RX FIFO Threshold */
#define I3C_CFGR_TXDMAEN_Pos (12U)
#define I3C_CFGR_TXDMAEN_Msk (0x1UL << I3C_CFGR_TXDMAEN_Pos) /*!< 0x00001000 */
#define I3C_CFGR_TXDMAEN I3C_CFGR_TXDMAEN_Msk /*!< TX FIFO DMA mode Enable */
#define I3C_CFGR_TXFLUSH_Pos (13U)
#define I3C_CFGR_TXFLUSH_Msk (0x1UL << I3C_CFGR_TXFLUSH_Pos) /*!< 0x00002000 */
#define I3C_CFGR_TXFLUSH I3C_CFGR_TXFLUSH_Msk /*!< TX FIFO Flush */
#define I3C_CFGR_TXTHRES_Pos (14U)
#define I3C_CFGR_TXTHRES_Msk (0x1UL << I3C_CFGR_TXTHRES_Pos) /*!< 0x00004000 */
#define I3C_CFGR_TXTHRES I3C_CFGR_TXTHRES_Msk /*!< TX FIFO Threshold */
#define I3C_CFGR_SDMAEN_Pos (16U)
#define I3C_CFGR_SDMAEN_Msk (0x1UL << I3C_CFGR_SDMAEN_Pos) /*!< 0x00010000 */
#define I3C_CFGR_SDMAEN I3C_CFGR_SDMAEN_Msk /*!< Status FIFO DMA mode Enable */
#define I3C_CFGR_SFLUSH_Pos (17U)
#define I3C_CFGR_SFLUSH_Msk (0x1UL << I3C_CFGR_SFLUSH_Pos) /*!< 0x00020000 */
#define I3C_CFGR_SFLUSH I3C_CFGR_SFLUSH_Msk /*!< Status FIFO Flush */
#define I3C_CFGR_SMODE_Pos (18U)
#define I3C_CFGR_SMODE_Msk (0x1UL << I3C_CFGR_SMODE_Pos) /*!< 0x00040000 */
#define I3C_CFGR_SMODE I3C_CFGR_SMODE_Msk /*!< Status FIFO mode Enable */
#define I3C_CFGR_TMODE_Pos (19U)
#define I3C_CFGR_TMODE_Msk (0x1UL << I3C_CFGR_TMODE_Pos) /*!< 0x00080000 */
#define I3C_CFGR_TMODE I3C_CFGR_TMODE_Msk /*!< Control FIFO mode Enable */
#define I3C_CFGR_CDMAEN_Pos (20U)
#define I3C_CFGR_CDMAEN_Msk (0x1UL << I3C_CFGR_CDMAEN_Pos) /*!< 0x00100000 */
#define I3C_CFGR_CDMAEN I3C_CFGR_CDMAEN_Msk /*!< Control FIFO DMA mode Enable */
#define I3C_CFGR_CFLUSH_Pos (21U)
#define I3C_CFGR_CFLUSH_Msk (0x1UL << I3C_CFGR_CFLUSH_Pos) /*!< 0x00200000 */
#define I3C_CFGR_CFLUSH I3C_CFGR_CFLUSH_Msk /*!< Control FIFO Flush */
#define I3C_CFGR_TSFSET_Pos (30U)
#define I3C_CFGR_TSFSET_Msk (0x1UL << I3C_CFGR_TSFSET_Pos) /*!< 0x40000000 */
#define I3C_CFGR_TSFSET I3C_CFGR_TSFSET_Msk                /*!< Transfer Set */

/*******************  Bit definition for I3C_RDR register  ********************/
#define I3C_RDR_RDB0_Pos (0U)
#define I3C_RDR_RDB0_Msk (0xFFUL << I3C_RDR_RDB0_Pos) /*!< 0x000000FF */
#define I3C_RDR_RDB0 I3C_RDR_RDB0_Msk                 /*!< Receive Data Byte */

/******************  Bit definition for I3C_RDWR register  ********************/
#define I3C_RDWR_RDBx_Pos (0U)
#define I3C_RDWR_RDBx_Msk (0xFFFFFFFFUL << I3C_RDWR_RDBx_Pos) /*!< 0xFFFFFFFF */
#define I3C_RDWR_RDBx \
    I3C_RDWR_RDBx_Msk /*!< Receive Data Byte, full double word */
#define I3C_RDWR_RDB0_Pos (0U)
#define I3C_RDWR_RDB0_Msk (0xFFUL << I3C_RDWR_RDB0_Pos) /*!< 0x000000FF */
#define I3C_RDWR_RDB0 I3C_RDWR_RDB0_Msk /*!< Receive Data Byte 0 */
#define I3C_RDWR_RDB1_Pos (8U)
#define I3C_RDWR_RDB1_Msk (0xFFUL << I3C_RDWR_RDB1_Pos) /*!< 0x0000FF00 */
#define I3C_RDWR_RDB1 I3C_RDWR_RDB1_Msk /*!< Receive Data Byte 1 */
#define I3C_RDWR_RDB2_Pos (16U)
#define I3C_RDWR_RDB2_Msk (0xFFUL << I3C_RDWR_RDB2_Pos) /*!< 0x00FF0000 */
#define I3C_RDWR_RDB2 I3C_RDWR_RDB2_Msk /*!< Receive Data Byte 2 */
#define I3C_RDWR_RDB3_Pos (24U)
#define I3C_RDWR_RDB3_Msk (0xFFUL << I3C_RDWR_RDB3_Pos) /*!< 0xFF000000 */
#define I3C_RDWR_RDB3 I3C_RDWR_RDB3_Msk /*!< Receive Data Byte 3 */

/*******************  Bit definition for I3C_TDR register  ********************/
#define I3C_TDR_TDB0_Pos (0U)
#define I3C_TDR_TDB0_Msk (0xFFUL << I3C_TDR_TDB0_Pos) /*!< 0x000000FF */
#define I3C_TDR_TDB0 I3C_TDR_TDB0_Msk                 /*!< Transmit Data Byte */

/******************  Bit definition for I3C_TDWR register  ********************/
#define I3C_TDWR_TDBx_Pos (0U)
#define I3C_TDWR_TDBx_Msk (0xFFFFFFFFUL << I3C_TDWR_TDBx_Pos) /*!< 0xFFFFFFFF */
#define I3C_TDWR_TDBx \
    I3C_TDWR_TDBx_Msk /*!< Transmit Data Byte, full double word */
#define I3C_TDWR_TDB0_Pos (0U)
#define I3C_TDWR_TDB0_Msk (0xFFUL << I3C_TDWR_TDB0_Pos) /*!< 0x000000FF */
#define I3C_TDWR_TDB0 I3C_TDWR_TDB0_Msk /*!< Transmit Data Byte 0 */
#define I3C_TDWR_TDB1_Pos (8U)
#define I3C_TDWR_TDB1_Msk (0xFFUL << I3C_TDWR_TDB1_Pos) /*!< 0x0000FF00 */
#define I3C_TDWR_TDB1 I3C_TDWR_TDB1_Msk /*!< Transmit Data Byte 1 */
#define I3C_TDWR_TDB2_Pos (16U)
#define I3C_TDWR_TDB2_Msk (0xFFUL << I3C_TDWR_TDB2_Pos) /*!< 0x00FF0000 */
#define I3C_TDWR_TDB2 I3C_TDWR_TDB2_Msk /*!< Transmit Data Byte 2 */
#define I3C_TDWR_TDB3_Pos (24U)
#define I3C_TDWR_TDB3_Msk (0xFFUL << I3C_TDWR_TDB3_Pos) /*!< 0xFF000000 */
#define I3C_TDWR_TDB3 I3C_TDWR_TDB3_Msk /*!< Transmit Data Byte 3 */

/*******************  Bit definition for I3C_IBIDR register  ******************/
#define I3C_IBIDR_IBIDBx_Pos (0U)
#define I3C_IBIDR_IBIDBx_Msk \
    (0xFFFFFFFFUL << I3C_IBIDR_IBIDBx_Pos) /*!< 0xFFFFFFFF */
#define I3C_IBIDR_IBIDBx \
    I3C_IBIDR_IBIDBx_Msk /*!< IBI Data Byte, full double word */
#define I3C_IBIDR_IBIDB0_Pos (0U)
#define I3C_IBIDR_IBIDB0_Msk (0xFFUL << I3C_IBIDR_IBIDB0_Pos) /*!< 0x000000FF */
#define I3C_IBIDR_IBIDB0 I3C_IBIDR_IBIDB0_Msk /*!< IBI Data Byte 0 */
#define I3C_IBIDR_IBIDB1_Pos (8U)
#define I3C_IBIDR_IBIDB1_Msk (0xFFUL << I3C_IBIDR_IBIDB1_Pos) /*!< 0x0000FF00 */
#define I3C_IBIDR_IBIDB1 I3C_IBIDR_IBIDB1_Msk /*!< IBI Data Byte 1 */
#define I3C_IBIDR_IBIDB2_Pos (16U)
#define I3C_IBIDR_IBIDB2_Msk (0xFFUL << I3C_IBIDR_IBIDB2_Pos) /*!< 0x00FF0000 */
#define I3C_IBIDR_IBIDB2 I3C_IBIDR_IBIDB2_Msk /*!< IBI Data Byte 2 */
#define I3C_IBIDR_IBIDB3_Pos (24U)
#define I3C_IBIDR_IBIDB3_Msk (0xFFUL << I3C_IBIDR_IBIDB3_Pos) /*!< 0xFF000000 */
#define I3C_IBIDR_IBIDB3 I3C_IBIDR_IBIDB3_Msk /*!< IBI Data Byte 3 */

/******************  Bit definition for I3C_TGTTDR register  ******************/
#define I3C_TGTTDR_TGTTDCNT_Pos (0U)
#define I3C_TGTTDR_TGTTDCNT_Msk \
    (0xFFFFUL << I3C_TGTTDR_TGTTDCNT_Pos) /*!< 0x0000FFFF */
#define I3C_TGTTDR_TGTTDCNT \
    I3C_TGTTDR_TGTTDCNT_Msk /*!< Target Transmit Data Counter */
#define I3C_TGTTDR_PRELOAD_Pos (16U)
#define I3C_TGTTDR_PRELOAD_Msk \
    (0x1UL << I3C_TGTTDR_PRELOAD_Pos) /*!< 0x00010000 */
#define I3C_TGTTDR_PRELOAD \
    I3C_TGTTDR_PRELOAD_Msk /*!< Transmit FIFO Preload Enable/Status */

/*******************  Bit definition for I3C_SR register  *********************/
#define I3C_SR_XDCNT_Pos (0U)
#define I3C_SR_XDCNT_Msk (0xFFFFUL << I3C_SR_XDCNT_Pos) /*!< 0x0000FFFF */
#define I3C_SR_XDCNT I3C_SR_XDCNT_Msk /*!< Transfer Data Byte Count status */
#define I3C_SR_ABT_Pos (17U)
#define I3C_SR_ABT_Msk (0x1UL << I3C_SR_ABT_Pos) /*!< 0x00020000 */
#define I3C_SR_ABT I3C_SR_ABT_Msk                /*!< Target Abort Indication */
#define I3C_SR_DIR_Pos (18U)
#define I3C_SR_DIR_Msk (0x1UL << I3C_SR_DIR_Pos) /*!< 0x00040000 */
#define I3C_SR_DIR I3C_SR_DIR_Msk                /*!< Message Direction */
#define I3C_SR_MID_Pos (24U)
#define I3C_SR_MID_Msk (0xFFUL << I3C_SR_MID_Pos) /*!< 0xFF000000 */
#define I3C_SR_MID I3C_SR_MID_Msk                 /*!< Message Identifier */

/*******************  Bit definition for I3C_SER register  ********************/
#define I3C_SER_CODERR_Pos (0U)
#define I3C_SER_CODERR_Msk (0xFUL << I3C_SER_CODERR_Pos) /*!< 0x0000000F */
#define I3C_SER_CODERR I3C_SER_CODERR_Msk /*!< Protocol Error Code */
#define I3C_SER_CODERR_0 (0x1UL << I3C_SER_CODERR_Pos) /*!< 0x00000001 */
#define I3C_SER_CODERR_1 (0x2UL << I3C_SER_CODERR_Pos) /*!< 0x00000002 */
#define I3C_SER_CODERR_2 (0x4UL << I3C_SER_CODERR_Pos) /*!< 0x00000004 */
#define I3C_SER_CODERR_3 (0x8UL << I3C_SER_CODERR_Pos) /*!< 0x00000008 */
#define I3C_SER_PERR_Pos (4U)
#define I3C_SER_PERR_Msk (0x1UL << I3C_SER_PERR_Pos) /*!< 0x00000010 */
#define I3C_SER_PERR I3C_SER_PERR_Msk                /*!< Protocol Error */
#define I3C_SER_STALL_Pos (5U)
#define I3C_SER_STALL_Msk (0x1UL << I3C_SER_STALL_Pos) /*!< 0x00000020 */
#define I3C_SER_STALL I3C_SER_STALL_Msk                /*!< SCL Stall Error */
#define I3C_SER_DOVR_Pos (6U)
#define I3C_SER_DOVR_Msk (0x1UL << I3C_SER_DOVR_Pos) /*!< 0x00000040 */
#define I3C_SER_DOVR I3C_SER_DOVR_Msk                /*!< RX/TX FIFO Overrun */
#define I3C_SER_COVR_Pos (7U)
#define I3C_SER_COVR_Msk (0x1UL << I3C_SER_COVR_Pos) /*!< 0x00000080 */
#define I3C_SER_COVR I3C_SER_COVR_Msk /*!< Status/Control FIFO Overrun */
#define I3C_SER_ANACK_Pos (8U)
#define I3C_SER_ANACK_Msk (0x1UL << I3C_SER_ANACK_Pos) /*!< 0x00000100 */
#define I3C_SER_ANACK I3C_SER_ANACK_Msk /*!< Address Not Acknowledged */
#define I3C_SER_DNACK_Pos (9U)
#define I3C_SER_DNACK_Msk (0x1UL << I3C_SER_DNACK_Pos) /*!< 0x00000200 */
#define I3C_SER_DNACK I3C_SER_DNACK_Msk /*!< Data Not Acknowledged */
#define I3C_SER_DERR_Pos (10U)
#define I3C_SER_DERR_Msk (0x1UL << I3C_SER_DERR_Pos) /*!< 0x00000400 */
#define I3C_SER_DERR \
    I3C_SER_DERR_Msk /*!< Data Error during the controller-role hand-off procedure */

/*******************  Bit definition for I3C_RMR register  ********************/
#define I3C_RMR_IBIRDCNT_Pos (0U)
#define I3C_RMR_IBIRDCNT_Msk (0x7UL << I3C_RMR_IBIRDCNT_Pos) /*!< 0x00000007 */
#define I3C_RMR_IBIRDCNT \
    I3C_RMR_IBIRDCNT_Msk /*!< Data Count when reading IBI data */
#define I3C_RMR_RCODE_Pos (8U)
#define I3C_RMR_RCODE_Msk (0xFFUL << I3C_RMR_RCODE_Pos) /*!< 0x0000FF00 */
#define I3C_RMR_RCODE I3C_RMR_RCODE_Msk /*!< CCC code of received command */
#define I3C_RMR_RADD_Pos (17U)
#define I3C_RMR_RADD_Msk (0x7FUL << I3C_RMR_RADD_Pos) /*!< 0x00FE0000 */
#define I3C_RMR_RADD \
    I3C_RMR_RADD_Msk /*!< Target Address Received during accepted IBI or Controller-role request */

/*******************  Bit definition for I3C_EVR register  ********************/
#define I3C_EVR_CFEF_Pos (0U)
#define I3C_EVR_CFEF_Msk (0x1UL << I3C_EVR_CFEF_Pos) /*!< 0x00000001 */
#define I3C_EVR_CFEF I3C_EVR_CFEF_Msk /*!< Control FIFO Empty Flag */
#define I3C_EVR_TXFEF_Pos (1U)
#define I3C_EVR_TXFEF_Msk (0x1UL << I3C_EVR_TXFEF_Pos) /*!< 0x00000002 */
#define I3C_EVR_TXFEF I3C_EVR_TXFEF_Msk /*!< TX FIFO Empty Flag */
#define I3C_EVR_CFNFF_Pos (2U)
#define I3C_EVR_CFNFF_Msk (0x1UL << I3C_EVR_CFNFF_Pos) /*!< 0x00000004 */
#define I3C_EVR_CFNFF I3C_EVR_CFNFF_Msk /*!< Control FIFO Not Full Flag */
#define I3C_EVR_SFNEF_Pos (3U)
#define I3C_EVR_SFNEF_Msk (0x1UL << I3C_EVR_SFNEF_Pos) /*!< 0x00000008 */
#define I3C_EVR_SFNEF I3C_EVR_SFNEF_Msk /*!< Status FIFO Not Empty Flag */
#define I3C_EVR_TXFNFF_Pos (4U)
#define I3C_EVR_TXFNFF_Msk (0x1UL << I3C_EVR_TXFNFF_Pos) /*!< 0x00000010 */
#define I3C_EVR_TXFNFF I3C_EVR_TXFNFF_Msk /*!< TX FIFO Not Full Flag */
#define I3C_EVR_RXFNEF_Pos (5U)
#define I3C_EVR_RXFNEF_Msk (0x1UL << I3C_EVR_RXFNEF_Pos) /*!< 0x00000020 */
#define I3C_EVR_RXFNEF I3C_EVR_RXFNEF_Msk /*!< RX FIFO Not Empty Flag */
#define I3C_EVR_TXLASTF_Pos (6U)
#define I3C_EVR_TXLASTF_Msk (0x1UL << I3C_EVR_TXLASTF_Pos) /*!< 0x00000040 */
#define I3C_EVR_TXLASTF \
    I3C_EVR_TXLASTF_Msk /*!< Last TX byte available in FIFO */
#define I3C_EVR_RXLASTF_Pos (7U)
#define I3C_EVR_RXLASTF_Msk (0x1UL << I3C_EVR_RXLASTF_Pos) /*!< 0x00000080 */
#define I3C_EVR_RXLASTF I3C_EVR_RXLASTF_Msk /*!< Last RX byte read from FIFO */
#define I3C_EVR_FCF_Pos (9U)
#define I3C_EVR_FCF_Msk (0x1UL << I3C_EVR_FCF_Pos) /*!< 0x00000200 */
#define I3C_EVR_FCF I3C_EVR_FCF_Msk                /*!< Frame Complete Flag */
#define I3C_EVR_RXTGTENDF_Pos (10U)
#define I3C_EVR_RXTGTENDF_Msk \
    (0x1UL << I3C_EVR_RXTGTENDF_Pos) /*!< 0x00000400 */
#define I3C_EVR_RXTGTENDF \
    I3C_EVR_RXTGTENDF_Msk /*!< Reception Target End Flag */
#define I3C_EVR_ERRF_Pos (11U)
#define I3C_EVR_ERRF_Msk (0x1UL << I3C_EVR_ERRF_Pos) /*!< 0x00000800 */
#define I3C_EVR_ERRF I3C_EVR_ERRF_Msk                /*!< Error Flag */
#define I3C_EVR_IBIF_Pos (15U)
#define I3C_EVR_IBIF_Msk (0x1UL << I3C_EVR_IBIF_Pos) /*!< 0x00008000 */
#define I3C_EVR_IBIF I3C_EVR_IBIF_Msk                /*!< IBI Flag */
#define I3C_EVR_IBIENDF_Pos (16U)
#define I3C_EVR_IBIENDF_Msk (0x1UL << I3C_EVR_IBIENDF_Pos) /*!< 0x00010000 */
#define I3C_EVR_IBIENDF I3C_EVR_IBIENDF_Msk                /*!< IBI End Flag */
#define I3C_EVR_CRF_Pos (17U)
#define I3C_EVR_CRF_Msk (0x1UL << I3C_EVR_CRF_Pos) /*!< 0x00020000 */
#define I3C_EVR_CRF I3C_EVR_CRF_Msk /*!< Controller-role Request Flag */
#define I3C_EVR_CRUPDF_Pos (18U)
#define I3C_EVR_CRUPDF_Msk (0x1UL << I3C_EVR_CRUPDF_Pos) /*!< 0x00040000 */
#define I3C_EVR_CRUPDF I3C_EVR_CRUPDF_Msk /*!< Controller-role Update Flag */
#define I3C_EVR_HJF_Pos (19U)
#define I3C_EVR_HJF_Msk (0x1UL << I3C_EVR_HJF_Pos) /*!< 0x00080000 */
#define I3C_EVR_HJF I3C_EVR_HJF_Msk                /*!< Hot Join Flag */
#define I3C_EVR_WKPF_Pos (21U)
#define I3C_EVR_WKPF_Msk (0x1UL << I3C_EVR_WKPF_Pos) /*!< 0x00200000 */
#define I3C_EVR_WKPF I3C_EVR_WKPF_Msk                /*!< Wake Up Flag */
#define I3C_EVR_GETF_Pos (22U)
#define I3C_EVR_GETF_Msk (0x1UL << I3C_EVR_GETF_Pos) /*!< 0x00400000 */
#define I3C_EVR_GETF I3C_EVR_GETF_Msk /*!< Get type CCC received Flag */
#define I3C_EVR_STAF_Pos (23U)
#define I3C_EVR_STAF_Msk (0x1UL << I3C_EVR_STAF_Pos) /*!< 0x00800000 */
#define I3C_EVR_STAF I3C_EVR_STAF_Msk                /*!< Get Status Flag */
#define I3C_EVR_DAUPDF_Pos (24U)
#define I3C_EVR_DAUPDF_Msk (0x1UL << I3C_EVR_DAUPDF_Pos) /*!< 0x01000000 */
#define I3C_EVR_DAUPDF I3C_EVR_DAUPDF_Msk /*!< Dynamic Address Update Flag */
#define I3C_EVR_MWLUPDF_Pos (25U)
#define I3C_EVR_MWLUPDF_Msk (0x1UL << I3C_EVR_MWLUPDF_Pos) /*!< 0x02000000 */
#define I3C_EVR_MWLUPDF I3C_EVR_MWLUPDF_Msk /*!< Max Write Length Update Flag */
#define I3C_EVR_MRLUPDF_Pos (26U)
#define I3C_EVR_MRLUPDF_Msk (0x1UL << I3C_EVR_MRLUPDF_Pos) /*!< 0x04000000 */
#define I3C_EVR_MRLUPDF I3C_EVR_MRLUPDF_Msk /*!< Max Read Length Update Flag */
#define I3C_EVR_RSTF_Pos (27U)
#define I3C_EVR_RSTF_Msk (0x1UL << I3C_EVR_RSTF_Pos) /*!< 0x08000000 */
#define I3C_EVR_RSTF \
    I3C_EVR_RSTF_Msk /*!< Reset Flag, due to Reset pattern received */
#define I3C_EVR_ASUPDF_Pos (28U)
#define I3C_EVR_ASUPDF_Msk (0x1UL << I3C_EVR_ASUPDF_Pos) /*!< 0x10000000 */
#define I3C_EVR_ASUPDF I3C_EVR_ASUPDF_Msk /*!< Activity State Flag */
#define I3C_EVR_INTUPDF_Pos (29U)
#define I3C_EVR_INTUPDF_Msk (0x1UL << I3C_EVR_INTUPDF_Pos) /*!< 0x20000000 */
#define I3C_EVR_INTUPDF I3C_EVR_INTUPDF_Msk /*!< Interrupt Update Flag */
#define I3C_EVR_DEFF_Pos (30U)
#define I3C_EVR_DEFF_Msk (0x1UL << I3C_EVR_DEFF_Pos) /*!< 0x40000000 */
#define I3C_EVR_DEFF \
    I3C_EVR_DEFF_Msk /*!< List of Targets Command Received Flag */
#define I3C_EVR_GRPF_Pos (31U)
#define I3C_EVR_GRPF_Msk (0x1UL << I3C_EVR_GRPF_Pos) /*!< 0x80000000 */
#define I3C_EVR_GRPF \
    I3C_EVR_GRPF_Msk /*!< List of Group Addresses Command Received Flag */

/*******************  Bit definition for I3C_IER register  ********************/
#define I3C_IER_CFNFIE_Pos (2U)
#define I3C_IER_CFNFIE_Msk (0x1UL << I3C_IER_CFNFIE_Pos) /*!< 0x00000004 */
#define I3C_IER_CFNFIE \
    I3C_IER_CFNFIE_Msk /*!< Control FIFO Not Full Interrupt Enable */
#define I3C_IER_SFNEIE_Pos (3U)
#define I3C_IER_SFNEIE_Msk (0x1UL << I3C_IER_SFNEIE_Pos) /*!< 0x00000008 */
#define I3C_IER_SFNEIE \
    I3C_IER_SFNEIE_Msk /*!< Status FIFO Not Empty Interrupt Enable */
#define I3C_IER_TXFNFIE_Pos (4U)
#define I3C_IER_TXFNFIE_Msk (0x1UL << I3C_IER_TXFNFIE_Pos) /*!< 0x00000010 */
#define I3C_IER_TXFNFIE \
    I3C_IER_TXFNFIE_Msk /*!< TX FIFO Not Full Interrupt Enable */
#define I3C_IER_RXFNEIE_Pos (5U)
#define I3C_IER_RXFNEIE_Msk (0x1UL << I3C_IER_RXFNEIE_Pos) /*!< 0x00000020 */
#define I3C_IER_RXFNEIE \
    I3C_IER_RXFNEIE_Msk /*!< RX FIFO Not Empty Interrupt Enable */
#define I3C_IER_FCIE_Pos (9U)
#define I3C_IER_FCIE_Msk (0x1UL << I3C_IER_FCIE_Pos) /*!< 0x00000200 */
#define I3C_IER_FCIE I3C_IER_FCIE_Msk /*!< Frame Complete Interrupt Enable */
#define I3C_IER_RXTGTENDIE_Pos (10U)
#define I3C_IER_RXTGTENDIE_Msk \
    (0x1UL << I3C_IER_RXTGTENDIE_Pos) /*!< 0x00000400 */
#define I3C_IER_RXTGTENDIE \
    I3C_IER_RXTGTENDIE_Msk /*!< Reception Target End Interrupt Enable */
#define I3C_IER_ERRIE_Pos (11U)
#define I3C_IER_ERRIE_Msk (0x1UL << I3C_IER_ERRIE_Pos) /*!< 0x00000800 */
#define I3C_IER_ERRIE I3C_IER_ERRIE_Msk /*!< Error Interrupt Enable */
#define I3C_IER_IBIIE_Pos (15U)
#define I3C_IER_IBIIE_Msk (0x1UL << I3C_IER_IBIIE_Pos) /*!< 0x00008000 */
#define I3C_IER_IBIIE I3C_IER_IBIIE_Msk /*!< IBI Interrupt Enable */
#define I3C_IER_IBIENDIE_Pos (16U)
#define I3C_IER_IBIENDIE_Msk (0x1UL << I3C_IER_IBIENDIE_Pos) /*!< 0x00010000 */
#define I3C_IER_IBIENDIE I3C_IER_IBIENDIE_Msk /*!< IBI End Interrupt Enable */
#define I3C_IER_CRIE_Pos (17U)
#define I3C_IER_CRIE_Msk (0x1UL << I3C_IER_CRIE_Pos) /*!< 0x00020000 */
#define I3C_IER_CRIE I3C_IER_CRIE_Msk /*!< Controller-role Interrupt Enable */
#define I3C_IER_CRUPDIE_Pos (18U)
#define I3C_IER_CRUPDIE_Msk (0x1UL << I3C_IER_CRUPDIE_Pos) /*!< 0x00040000 */
#define I3C_IER_CRUPDIE \
    I3C_IER_CRUPDIE_Msk /*!< Controller-role Update Interrupt Enable */
#define I3C_IER_HJIE_Pos (19U)
#define I3C_IER_HJIE_Msk (0x1UL << I3C_IER_HJIE_Pos) /*!< 0x00080000 */
#define I3C_IER_HJIE I3C_IER_HJIE_Msk /*!< Hot Join Interrupt Enable */
#define I3C_IER_WKPIE_Pos (21U)
#define I3C_IER_WKPIE_Msk (0x1UL << I3C_IER_WKPIE_Pos) /*!< 0x00200000 */
#define I3C_IER_WKPIE I3C_IER_WKPIE_Msk /*!< Wake Up Interrupt Enable */
#define I3C_IER_GETIE_Pos (22U)
#define I3C_IER_GETIE_Msk (0x1UL << I3C_IER_GETIE_Pos) /*!< 0x00400000 */
#define I3C_IER_GETIE \
    I3C_IER_GETIE_Msk /*!< Get type CCC received Interrupt Enable */
#define I3C_IER_STAIE_Pos (23U)
#define I3C_IER_STAIE_Msk (0x1UL << I3C_IER_STAIE_Pos) /*!< 0x00800000 */
#define I3C_IER_STAIE I3C_IER_STAIE_Msk /*!< Get Status Interrupt Enable */
#define I3C_IER_DAUPDIE_Pos (24U)
#define I3C_IER_DAUPDIE_Msk (0x1UL << I3C_IER_DAUPDIE_Pos) /*!< 0x01000000 */
#define I3C_IER_DAUPDIE \
    I3C_IER_DAUPDIE_Msk /*!< Dynamic Address Update Interrupt Enable */
#define I3C_IER_MWLUPDIE_Pos (25U)
#define I3C_IER_MWLUPDIE_Msk (0x1UL << I3C_IER_MWLUPDIE_Pos) /*!< 0x02000000 */
#define I3C_IER_MWLUPDIE \
    I3C_IER_MWLUPDIE_Msk /*!< Max Write Length Update Interrupt Enable */
#define I3C_IER_MRLUPDIE_Pos (26U)
#define I3C_IER_MRLUPDIE_Msk (0x1UL << I3C_IER_MRLUPDIE_Pos) /*!< 0x04000000 */
#define I3C_IER_MRLUPDIE \
    I3C_IER_MRLUPDIE_Msk /*!< Max Read Length Update Interrupt Enable */
#define I3C_IER_RSTIE_Pos (27U)
#define I3C_IER_RSTIE_Msk (0x1UL << I3C_IER_RSTIE_Pos) /*!< 0x08000000 */
#define I3C_IER_RSTIE \
    I3C_IER_RSTIE_Msk /*!< Reset Interrupt Enabled, due to Reset pattern received */
#define I3C_IER_ASUPDIE_Pos (28U)
#define I3C_IER_ASUPDIE_Msk (0x1UL << I3C_IER_ASUPDIE_Pos) /*!< 0x10000000 */
#define I3C_IER_ASUPDIE \
    I3C_IER_ASUPDIE_Msk /*!< Activity State Interrupt Enable */
#define I3C_IER_INTUPDIE_Pos (29U)
#define I3C_IER_INTUPDIE_Msk (0x1UL << I3C_IER_INTUPDIE_Pos) /*!< 0x20000000 */
#define I3C_IER_INTUPDIE \
    I3C_IER_INTUPDIE_Msk /*!< Interrupt Update Interrupt Enable */
#define I3C_IER_DEFIE_Pos (30U)
#define I3C_IER_DEFIE_Msk (0x1UL << I3C_IER_DEFIE_Pos) /*!< 0x40000000 */
#define I3C_IER_DEFIE \
    I3C_IER_DEFIE_Msk /*!< List of Targets Command Received Interrupt Enable */
#define I3C_IER_GRPIE_Pos (31U)
#define I3C_IER_GRPIE_Msk (0x1UL << I3C_IER_GRPIE_Pos) /*!< 0x80000000 */
#define I3C_IER_GRPIE \
    I3C_IER_GRPIE_Msk /*!< List of Group Addresses Command Received Interrupt Enable */

/*******************  Bit definition for I3C_CEVR register  *******************/
#define I3C_CEVR_CFCF_Pos (9U)
#define I3C_CEVR_CFCF_Msk (0x1UL << I3C_CEVR_CFCF_Pos) /*!< 0x00000200 */
#define I3C_CEVR_CFCF I3C_CEVR_CFCF_Msk /*!< Frame Complete Clear Flag */
#define I3C_CEVR_CRXTGTENDF_Pos (10U)
#define I3C_CEVR_CRXTGTENDF_Msk \
    (0x1UL << I3C_CEVR_CRXTGTENDF_Pos) /*!< 0x00000400 */
#define I3C_CEVR_CRXTGTENDF \
    I3C_CEVR_CRXTGTENDF_Msk /*!< Reception Target End Clear Flag */
#define I3C_CEVR_CERRF_Pos (11U)
#define I3C_CEVR_CERRF_Msk (0x1UL << I3C_CEVR_CERRF_Pos) /*!< 0x00000800 */
#define I3C_CEVR_CERRF I3C_CEVR_CERRF_Msk /*!< Error Clear Flag */
#define I3C_CEVR_CIBIF_Pos (15U)
#define I3C_CEVR_CIBIF_Msk (0x1UL << I3C_CEVR_CIBIF_Pos) /*!< 0x00008000 */
#define I3C_CEVR_CIBIF I3C_CEVR_CIBIF_Msk                /*!< IBI Clear Flag */
#define I3C_CEVR_CIBIENDF_Pos (16U)
#define I3C_CEVR_CIBIENDF_Msk \
    (0x1UL << I3C_CEVR_CIBIENDF_Pos)            /*!< 0x00010000 */
#define I3C_CEVR_CIBIENDF I3C_CEVR_CIBIENDF_Msk /*!< IBI End Clear Flag */
#define I3C_CEVR_CCRF_Pos (17U)
#define I3C_CEVR_CCRF_Msk (0x1UL << I3C_CEVR_CCRF_Pos) /*!< 0x00020000 */
#define I3C_CEVR_CCRF I3C_CEVR_CCRF_Msk /*!< Controller-role Clear Flag */
#define I3C_CEVR_CCRUPDF_Pos (18U)
#define I3C_CEVR_CCRUPDF_Msk (0x1UL << I3C_CEVR_CCRUPDF_Pos) /*!< 0x00040000 */
#define I3C_CEVR_CCRUPDF \
    I3C_CEVR_CCRUPDF_Msk /*!< Controller-role Update Clear Flag */
#define I3C_CEVR_CHJF_Pos (19U)
#define I3C_CEVR_CHJF_Msk (0x1UL << I3C_CEVR_CHJF_Pos) /*!< 0x00080000 */
#define I3C_CEVR_CHJF I3C_CEVR_CHJF_Msk /*!< Hot Join Clear Flag */
#define I3C_CEVR_CWKPF_Pos (21U)
#define I3C_CEVR_CWKPF_Msk (0x1UL << I3C_CEVR_CWKPF_Pos) /*!< 0x00200000 */
#define I3C_CEVR_CWKPF I3C_CEVR_CWKPF_Msk /*!< Wake Up Clear Flag */
#define I3C_CEVR_CGETF_Pos (22U)
#define I3C_CEVR_CGETF_Msk (0x1UL << I3C_CEVR_CGETF_Pos) /*!< 0x00400000 */
#define I3C_CEVR_CGETF \
    I3C_CEVR_CGETF_Msk /*!< Get type CCC received Clear Flag */
#define I3C_CEVR_CSTAF_Pos (23U)
#define I3C_CEVR_CSTAF_Msk (0x1UL << I3C_CEVR_CSTAF_Pos) /*!< 0x00800000 */
#define I3C_CEVR_CSTAF I3C_CEVR_CSTAF_Msk /*!< Get Status Clear Flag */
#define I3C_CEVR_CDAUPDF_Pos (24U)
#define I3C_CEVR_CDAUPDF_Msk (0x1UL << I3C_CEVR_CDAUPDF_Pos) /*!< 0x01000000 */
#define I3C_CEVR_CDAUPDF \
    I3C_CEVR_CDAUPDF_Msk /*!< Dynamic Address Update Clear Flag */
#define I3C_CEVR_CMWLUPDF_Pos (25U)
#define I3C_CEVR_CMWLUPDF_Msk \
    (0x1UL << I3C_CEVR_CMWLUPDF_Pos) /*!< 0x02000000 */
#define I3C_CEVR_CMWLUPDF \
    I3C_CEVR_CMWLUPDF_Msk /*!< Max Write Length Update Clear Flag */
#define I3C_CEVR_CMRLUPDF_Pos (26U)
#define I3C_CEVR_CMRLUPDF_Msk \
    (0x1UL << I3C_CEVR_CMRLUPDF_Pos) /*!< 0x04000000 */
#define I3C_CEVR_CMRLUPDF \
    I3C_CEVR_CMRLUPDF_Msk /*!< Max Read Length Update Clear Flag */
#define I3C_CEVR_CRSTF_Pos (27U)
#define I3C_CEVR_CRSTF_Msk (0x1UL << I3C_CEVR_CRSTF_Pos) /*!< 0x08000000 */
#define I3C_CEVR_CRSTF \
    I3C_CEVR_CRSTF_Msk /*!< Reset Flag, due to Reset pattern received */
#define I3C_CEVR_CASUPDF_Pos (28U)
#define I3C_CEVR_CASUPDF_Msk (0x1UL << I3C_CEVR_CASUPDF_Pos) /*!< 0x10000000 */
#define I3C_CEVR_CASUPDF I3C_CEVR_CASUPDF_Msk /*!< Activity State Clear Flag */
#define I3C_CEVR_CINTUPDF_Pos (29U)
#define I3C_CEVR_CINTUPDF_Msk \
    (0x1UL << I3C_CEVR_CINTUPDF_Pos) /*!< 0x20000000 */
#define I3C_CEVR_CINTUPDF \
    I3C_CEVR_CINTUPDF_Msk /*!< Interrupt Update Clear Flag */
#define I3C_CEVR_CDEFF_Pos (30U)
#define I3C_CEVR_CDEFF_Msk (0x1UL << I3C_CEVR_CDEFF_Pos) /*!< 0x40000000 */
#define I3C_CEVR_CDEFF \
    I3C_CEVR_CDEFF_Msk /*!< List of Targets Command Received Clear Flag */
#define I3C_CEVR_CGRPF_Pos (31U)
#define I3C_CEVR_CGRPF_Msk (0x1UL << I3C_CEVR_CGRPF_Pos) /*!< 0x80000000 */
#define I3C_CEVR_CGRPF \
    I3C_CEVR_CGRPF_Msk /*!< List of Group Addresses Command Received Clear Flag */

/******************  Bit definition for I3C_DEVR0 register  *******************/
#define I3C_DEVR0_DAVAL_Pos (0U)
#define I3C_DEVR0_DAVAL_Msk (0x1UL << I3C_DEVR0_DAVAL_Pos) /*!< 0x00000001 */
#define I3C_DEVR0_DAVAL I3C_DEVR0_DAVAL_Msk /*!< Dynamic Address Validity */
#define I3C_DEVR0_DA_Pos (1U)
#define I3C_DEVR0_DA_Msk (0x7FUL << I3C_DEVR0_DA_Pos) /*!< 0x000000FE */
#define I3C_DEVR0_DA I3C_DEVR0_DA_Msk /*!< Own Target Device Address */
#define I3C_DEVR0_IBIEN_Pos (16U)
#define I3C_DEVR0_IBIEN_Msk (0x1UL << I3C_DEVR0_IBIEN_Pos) /*!< 0x00010000 */
#define I3C_DEVR0_IBIEN I3C_DEVR0_IBIEN_Msk                /*!< IBI Enable */
#define I3C_DEVR0_CREN_Pos (17U)
#define I3C_DEVR0_CREN_Msk (0x1UL << I3C_DEVR0_CREN_Pos) /*!< 0x00020000 */
#define I3C_DEVR0_CREN I3C_DEVR0_CREN_Msk /*!< Controller-role Enable */
#define I3C_DEVR0_HJEN_Pos (19U)
#define I3C_DEVR0_HJEN_Msk (0x1UL << I3C_DEVR0_HJEN_Pos) /*!< 0x00080000 */
#define I3C_DEVR0_HJEN I3C_DEVR0_HJEN_Msk                /*!< Hot Join Enable */
#define I3C_DEVR0_AS_Pos (20U)
#define I3C_DEVR0_AS_Msk (0x3UL << I3C_DEVR0_AS_Pos) /*!< 0x00300000 */
#define I3C_DEVR0_AS \
    I3C_DEVR0_AS_Msk /*!< Activity State value update after ENTAx received */
#define I3C_DEVR0_AS_0 (0x1UL << I3C_DEVR0_AS_Pos) /*!< 0x00100000 */
#define I3C_DEVR0_AS_1 (0x2UL << I3C_DEVR0_AS_Pos) /*!< 0x00200000 */
#define I3C_DEVR0_RSTACT_Pos (22U)
#define I3C_DEVR0_RSTACT_Msk (0x3UL << I3C_DEVR0_RSTACT_Pos) /*!< 0x00C000000 */
#define I3C_DEVR0_RSTACT \
    I3C_DEVR0_RSTACT_Msk /*!< Reset Action value update after RSTACT received */
#define I3C_DEVR0_RSTACT_0 (0x1UL << I3C_DEVR0_RSTACT_Pos) /*!< 0x00400000 */
#define I3C_DEVR0_RSTACT_1 (0x2UL << I3C_DEVR0_RSTACT_Pos) /*!< 0x00800000 */
#define I3C_DEVR0_RSTVAL_Pos (24U)
#define I3C_DEVR0_RSTVAL_Msk (0x1UL << I3C_DEVR0_RSTVAL_Pos) /*!< 0x01000000 */
#define I3C_DEVR0_RSTVAL I3C_DEVR0_RSTVAL_Msk /*!< Reset Action Valid */

/******************  Bit definition for I3C_DEVRX register  *******************/
#define I3C_DEVRX_DA_Pos (1U)
#define I3C_DEVRX_DA_Msk (0x7FUL << I3C_DEVRX_DA_Pos) /*!< 0x000000FE */
#define I3C_DEVRX_DA I3C_DEVRX_DA_Msk /*!< Dynamic Address Target x */
#define I3C_DEVRX_IBIACK_Pos (16U)
#define I3C_DEVRX_IBIACK_Msk (0x1UL << I3C_DEVRX_IBIACK_Pos) /*!< 0x00010000 */
#define I3C_DEVRX_IBIACK \
    I3C_DEVRX_IBIACK_Msk /*!< IBI Acknowledge from Target x */
#define I3C_DEVRX_CRACK_Pos (17U)
#define I3C_DEVRX_CRACK_Msk (0x1UL << I3C_DEVRX_CRACK_Pos) /*!< 0x00020000 */
#define I3C_DEVRX_CRACK \
    I3C_DEVRX_CRACK_Msk /*!< Controller-role Acknowledge from Target x */
#define I3C_DEVRX_IBIDEN_Pos (18U)
#define I3C_DEVRX_IBIDEN_Msk (0x1UL << I3C_DEVRX_IBIDEN_Pos) /*!< 0x00040000 */
#define I3C_DEVRX_IBIDEN I3C_DEVRX_IBIDEN_Msk /*!< IBI Additional Data Enable */
#define I3C_DEVRX_SUSP_Pos (19U)
#define I3C_DEVRX_SUSP_Msk (0x1UL << I3C_DEVRX_SUSP_Pos) /*!< 0x00080000 */
#define I3C_DEVRX_SUSP I3C_DEVRX_SUSP_Msk /*!< Suspended Transfer */
#define I3C_DEVRX_DIS_Pos (31U)
#define I3C_DEVRX_DIS_Msk (0x1UL << I3C_DEVRX_DIS_Pos) /*!< 0x80000000 */
#define I3C_DEVRX_DIS I3C_DEVRX_DIS_Msk /*!< Disable Register access */

/******************  Bit definition for I3C_MAXRLR register  ******************/
#define I3C_MAXRLR_MRL_Pos (0U)
#define I3C_MAXRLR_MRL_Msk (0xFFFFUL << I3C_MAXRLR_MRL_Pos) /*!< 0x0000FFFF */
#define I3C_MAXRLR_MRL I3C_MAXRLR_MRL_Msk /*!< Maximum Read Length */
#define I3C_MAXRLR_IBIP_Pos (16U)
#define I3C_MAXRLR_IBIP_Msk (0x7UL << I3C_MAXRLR_IBIP_Pos) /*!< 0x00070000 */
#define I3C_MAXRLR_IBIP I3C_MAXRLR_IBIP_Msk /*!< IBI Payload size */
#define I3C_MAXRLR_IBIP_0 (0x1UL << I3C_MAXRLR_IBIP_Pos) /*!< 0x00010000 */
#define I3C_MAXRLR_IBIP_1 (0x2UL << I3C_MAXRLR_IBIP_Pos) /*!< 0x00020000 */
#define I3C_MAXRLR_IBIP_2 (0x4UL << I3C_MAXRLR_IBIP_Pos) /*!< 0x00040000 */

/******************  Bit definition for I3C_MAXWLR register  ******************/
#define I3C_MAXWLR_MWL_Pos (0U)
#define I3C_MAXWLR_MWL_Msk (0xFFFFUL << I3C_MAXWLR_MWL_Pos) /*!< 0x0000FFFF */
#define I3C_MAXWLR_MWL I3C_MAXWLR_MWL_Msk /*!< Maximum Write Length */

/****************  Bit definition for I3C_TIMINGR0 register  ******************/
#define I3C_TIMINGR0_SCLL_PP_Pos (0U)
#define I3C_TIMINGR0_SCLL_PP_Msk \
    (0xFFUL << I3C_TIMINGR0_SCLL_PP_Pos) /*!< 0x000000FF */
#define I3C_TIMINGR0_SCLL_PP \
    I3C_TIMINGR0_SCLL_PP_Msk /*!< SCL Low duration during I3C Push-Pull phases */
#define I3C_TIMINGR0_SCLH_I3C_Pos (8U)
#define I3C_TIMINGR0_SCLH_I3C_Msk \
    (0xFFUL << I3C_TIMINGR0_SCLH_I3C_Pos) /*!< 0x0000FF00 */
#define I3C_TIMINGR0_SCLH_I3C \
    I3C_TIMINGR0_SCLH_I3C_Msk /*!< SCL High duration during I3C Open-drain and Push-Pull phases */
#define I3C_TIMINGR0_SCLL_OD_Pos (16U)
#define I3C_TIMINGR0_SCLL_OD_Msk \
    (0xFFUL << I3C_TIMINGR0_SCLL_OD_Pos) /*!< 0x00FF0000 */
#define I3C_TIMINGR0_SCLL_OD \
    I3C_TIMINGR0_SCLL_OD_Msk /*!< SCL Low duration during  I3C Open-drain phases and I2C transfer */
#define I3C_TIMINGR0_SCLH_I2C_Pos (24U)
#define I3C_TIMINGR0_SCLH_I2C_Msk \
    (0xFFUL << I3C_TIMINGR0_SCLH_I2C_Pos) /*!< 0xFF000000 */
#define I3C_TIMINGR0_SCLH_I2C \
    I3C_TIMINGR0_SCLH_I2C_Msk /*!< SCL High duration during I2C transfer */

/****************  Bit definition for I3C_TIMINGR1 register  ******************/
#define I3C_TIMINGR1_AVAL_Pos (0U)
#define I3C_TIMINGR1_AVAL_Msk \
    (0xFFUL << I3C_TIMINGR1_AVAL_Pos) /*!< 0x000000FF */
#define I3C_TIMINGR1_AVAL \
    I3C_TIMINGR1_AVAL_Msk /*!< Timing for I3C Bus Idle or Available condition */
#define I3C_TIMINGR1_ASNCR_Pos (8U)
#define I3C_TIMINGR1_ASNCR_Msk \
    (0x3UL << I3C_TIMINGR1_ASNCR_Pos) /*!< 0x00000300 */
#define I3C_TIMINGR1_ASNCR \
    I3C_TIMINGR1_ASNCR_Msk /*!< Activity State of the New Controller */
#define I3C_TIMINGR1_ASNCR_0 \
    (0x1UL << I3C_TIMINGR1_ASNCR_Pos) /*!< 0x00000100 */
#define I3C_TIMINGR1_ASNCR_1 \
    (0x2UL << I3C_TIMINGR1_ASNCR_Pos) /*!< 0x00000200 */
#define I3C_TIMINGR1_FREE_Pos (16U)
#define I3C_TIMINGR1_FREE_Msk \
    (0x7FUL << I3C_TIMINGR1_FREE_Pos) /*!< 0x007F0000 */
#define I3C_TIMINGR1_FREE \
    I3C_TIMINGR1_FREE_Msk /*!< Timing for I3C Bus Free condition */
#define I3C_TIMINGR1_SDA_HD_Pos (28U)
#define I3C_TIMINGR1_SDA_HD_Msk \
    (0x1UL << I3C_TIMINGR1_SDA_HD_Pos)              /*!< 0x00010000 */
#define I3C_TIMINGR1_SDA_HD I3C_TIMINGR1_SDA_HD_Msk /*!< SDA Hold Duration */

/****************  Bit definition for I3C_TIMINGR2 register  ******************/
#define I3C_TIMINGR2_STALLT_Pos (0U)
#define I3C_TIMINGR2_STALLT_Msk \
    (0x1UL << I3C_TIMINGR2_STALLT_Pos)              /*!< 0x00000001 */
#define I3C_TIMINGR2_STALLT I3C_TIMINGR2_STALLT_Msk /*!< Stall on T bit */
#define I3C_TIMINGR2_STALLD_Pos (1U)
#define I3C_TIMINGR2_STALLD_Msk \
    (0x1UL << I3C_TIMINGR2_STALLD_Pos) /*!< 0x00000002 */
#define I3C_TIMINGR2_STALLD \
    I3C_TIMINGR2_STALLD_Msk /*!< Stall on PAR bit of data bytes */
#define I3C_TIMINGR2_STALLC_Pos (2U)
#define I3C_TIMINGR2_STALLC_Msk \
    (0x1UL << I3C_TIMINGR2_STALLC_Pos) /*!< 0x00000004 */
#define I3C_TIMINGR2_STALLC \
    I3C_TIMINGR2_STALLC_Msk /*!< Stall on PAR bit of CCC byte */
#define I3C_TIMINGR2_STALLA_Pos (3U)
#define I3C_TIMINGR2_STALLA_Msk \
    (0x1UL << I3C_TIMINGR2_STALLA_Pos)              /*!< 0x00000008 */
#define I3C_TIMINGR2_STALLA I3C_TIMINGR2_STALLA_Msk /*!< Stall on ACK bit */
#define I3C_TIMINGR2_STALL_Pos (8U)
#define I3C_TIMINGR2_STALL_Msk \
    (0xFFUL << I3C_TIMINGR2_STALL_Pos) /*!< 0x0000FF00 */
#define I3C_TIMINGR2_STALL \
    I3C_TIMINGR2_STALL_Msk /*!< Controller Stall duration */

/*******************  Bit definition for I3C_BCR register  ********************/
#define I3C_BCR_BCR_Pos (0U)
#define I3C_BCR_BCR_Msk (0xFFUL << I3C_BCR_BCR_Pos) /*!< 0x000000FF */
#define I3C_BCR_BCR I3C_BCR_BCR_Msk                 /*!< Bus Characteristics */
#define I3C_BCR_BCR0_Pos (0U)
#define I3C_BCR_BCR0_Msk (0x1UL << I3C_BCR_BCR0_Pos) /*!< 0x00000001 */
#define I3C_BCR_BCR0 I3C_BCR_BCR0_Msk /*!< Max Data Speed Limitation */
#define I3C_BCR_BCR1_Pos (1U)
#define I3C_BCR_BCR1_Msk (0x1UL << I3C_BCR_BCR1_Pos) /*!< 0x00000002 */
#define I3C_BCR_BCR1 I3C_BCR_BCR1_Msk                /*!< IBI Request capable */
#define I3C_BCR_BCR2_Pos (2U)
#define I3C_BCR_BCR2_Msk (0x1UL << I3C_BCR_BCR2_Pos) /*!< 0x00000004 */
#define I3C_BCR_BCR2 \
    I3C_BCR_BCR2_Msk /*!< IBI Payload additional Mandatory Data Byte */
#define I3C_BCR_BCR6_Pos (6U)
#define I3C_BCR_BCR6_Msk (0x1UL << I3C_BCR_BCR6_Pos) /*!< 0x00000040 */
#define I3C_BCR_BCR6 \
    I3C_BCR_BCR6_Msk /*!< Device Role shared during Dynamic Address Assignment */

/*******************  Bit definition for I3C_DCR register  ********************/
#define I3C_DCR_DCR_Pos (0U)
#define I3C_DCR_DCR_Msk (0xFFUL << I3C_DCR_DCR_Pos) /*!< 0x000000FF */
#define I3C_DCR_DCR I3C_DCR_DCR_Msk /*!< Devices Characteristics */

/*****************  Bit definition for I3C_GETCAPR register  ******************/
#define I3C_GETCAPR_CAPPEND_Pos (14U)
#define I3C_GETCAPR_CAPPEND_Msk \
    (0x1UL << I3C_GETCAPR_CAPPEND_Pos) /*!< 0x00004000 */
#define I3C_GETCAPR_CAPPEND \
    I3C_GETCAPR_CAPPEND_Msk /*!< IBI Request with Mandatory Data Byte */

/*****************  Bit definition for I3C_CRCAPR register  *******************/
#define I3C_CRCAPR_CAPDHOFF_Pos (3U)
#define I3C_CRCAPR_CAPDHOFF_Msk \
    (0x1UL << I3C_CRCAPR_CAPDHOFF_Pos) /*!< 0x00000008 */
#define I3C_CRCAPR_CAPDHOFF \
    I3C_CRCAPR_CAPDHOFF_Msk /*!< Controller-role handoff needed */
#define I3C_CRCAPR_CAPGRP_Pos (9U)
#define I3C_CRCAPR_CAPGRP_Msk \
    (0x1UL << I3C_CRCAPR_CAPGRP_Pos) /*!< 0x00000200 */
#define I3C_CRCAPR_CAPGRP \
    I3C_CRCAPR_CAPGRP_Msk /*!< Group Address handoff supported */

/****************  Bit definition for I3C_GETMXDSR register  ******************/
#define I3C_GETMXDSR_HOFFAS_Pos (0U)
#define I3C_GETMXDSR_HOFFAS_Msk \
    (0x3UL << I3C_GETMXDSR_HOFFAS_Pos) /*!< 0x00000003 */
#define I3C_GETMXDSR_HOFFAS \
    I3C_GETMXDSR_HOFFAS_Msk /*!< Handoff Activity State */
#define I3C_GETMXDSR_HOFFAS_0 \
    (0x1UL << I3C_GETMXDSR_HOFFAS_Pos) /*!< 0x00000001 */
#define I3C_GETMXDSR_HOFFAS_1 \
    (0x2UL << I3C_GETMXDSR_HOFFAS_Pos) /*!< 0x00000002 */
#define I3C_GETMXDSR_FMT_Pos (8U)
#define I3C_GETMXDSR_FMT_Msk (0x3UL << I3C_GETMXDSR_FMT_Pos) /*!< 0x00000300 */
#define I3C_GETMXDSR_FMT \
    I3C_GETMXDSR_FMT_Msk /*!< Get Max Data Speed response in format 2 */
#define I3C_GETMXDSR_FMT_0 (0x1UL << I3C_GETMXDSR_FMT_Pos) /*!< 0x00000100 */
#define I3C_GETMXDSR_FMT_1 (0x2UL << I3C_GETMXDSR_FMT_Pos) /*!< 0x00000200 */
#define I3C_GETMXDSR_RDTURN_Pos (16U)
#define I3C_GETMXDSR_RDTURN_Msk \
    (0xFFUL << I3C_GETMXDSR_RDTURN_Pos) /*!< 0x00FF0000 */
#define I3C_GETMXDSR_RDTURN \
    I3C_GETMXDSR_RDTURN_Msk /*!< Max Read Turnaround Middle Byte  */
#define I3C_GETMXDSR_TSCO_Pos (24U)
#define I3C_GETMXDSR_TSCO_Msk \
    (0x1UL << I3C_GETMXDSR_TSCO_Pos) /*!< 0x01000000 */
#define I3C_GETMXDSR_TSCO \
    I3C_GETMXDSR_TSCO_Msk /*!< Clock-to-data Turnaround time */

/******************  Bit definition for I3C_EPIDR register  *******************/
#define I3C_EPIDR_MIPIID_Pos (12U)
#define I3C_EPIDR_MIPIID_Msk (0xFUL << I3C_EPIDR_MIPIID_Pos) /*!< 0x0000F000 */
#define I3C_EPIDR_MIPIID I3C_EPIDR_MIPIID_Msk /*!< MIPI Instance ID */
#define I3C_EPIDR_IDTSEL_Pos (16U)
#define I3C_EPIDR_IDTSEL_Msk (0x1UL << I3C_EPIDR_IDTSEL_Pos) /*!< 0x00010000 */
#define I3C_EPIDR_IDTSEL I3C_EPIDR_IDTSEL_Msk /*!< ID Type Selector */
#define I3C_EPIDR_MIPIMID_Pos (17U)
#define I3C_EPIDR_MIPIMID_Msk \
    (0x7FFFUL << I3C_EPIDR_MIPIMID_Pos)         /*!< 0xFFFE0000 */
#define I3C_EPIDR_MIPIMID I3C_EPIDR_MIPIMID_Msk /*!< MIPI Manufacturer ID */

/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for IWDG_KR register  ********************/
#define IWDG_KR_KEY_Pos (0U)
#define IWDG_KR_KEY_Msk (0xFFFFUL << IWDG_KR_KEY_Pos) /*!< 0x0000FFFF */
#define IWDG_KR_KEY IWDG_KR_KEY_Msk /*!<Key value (write only, read 0000h)  */

/*******************  Bit definition for IWDG_PR register  ********************/
#define IWDG_PR_PR_Pos (0U)
#define IWDG_PR_PR_Msk (0xFUL << IWDG_PR_PR_Pos) /*!< 0x0000000F */
#define IWDG_PR_PR IWDG_PR_PR_Msk /*!<PR[3:0] (Prescaler divider)         */
#define IWDG_PR_PR_0 (0x1UL << IWDG_PR_PR_Pos) /*!< 0x00000001 */
#define IWDG_PR_PR_1 (0x2UL << IWDG_PR_PR_Pos) /*!< 0x00000002 */
#define IWDG_PR_PR_2 (0x4UL << IWDG_PR_PR_Pos) /*!< 0x00000004 */
#define IWDG_PR_PR_3 (0x8UL << IWDG_PR_PR_Pos) /*!< 0x00000008 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define IWDG_RLR_RL_Pos (0U)
#define IWDG_RLR_RL_Msk (0xFFFUL << IWDG_RLR_RL_Pos) /*!< 0x00000FFF */
#define IWDG_RLR_RL IWDG_RLR_RL_Msk /*!<Watchdog counter reload value        */

/*******************  Bit definition for IWDG_SR register  ********************/
#define IWDG_SR_PVU_Pos (0U)
#define IWDG_SR_PVU_Msk (0x1UL << IWDG_SR_PVU_Pos) /*!< 0x00000001 */
#define IWDG_SR_PVU IWDG_SR_PVU_Msk /*!< Watchdog prescaler value update */
#define IWDG_SR_RVU_Pos (1U)
#define IWDG_SR_RVU_Msk (0x1UL << IWDG_SR_RVU_Pos) /*!< 0x00000002 */
#define IWDG_SR_RVU IWDG_SR_RVU_Msk /*!< Watchdog counter reload value update */
#define IWDG_SR_WVU_Pos (2U)
#define IWDG_SR_WVU_Msk (0x1UL << IWDG_SR_WVU_Pos) /*!< 0x00000004 */
#define IWDG_SR_WVU IWDG_SR_WVU_Msk /*!< Watchdog counter window value update */
#define IWDG_SR_EWU_Pos (3U)
#define IWDG_SR_EWU_Msk (0x1UL << IWDG_SR_EWU_Pos) /*!< 0x00000008 */
#define IWDG_SR_EWU \
    IWDG_SR_EWU_Msk /*!< Watchdog interrupt comparator value update */
#define IWDG_SR_ONF_Pos (8U)
#define IWDG_SR_ONF_Msk (0x1UL << IWDG_SR_ONF_Pos) /*!< 0x00000100 */
#define IWDG_SR_ONF IWDG_SR_ONF_Msk /*!< Watchdog Enable status bit */
#define IWDG_SR_EWIF_Pos (14U)
#define IWDG_SR_EWIF_Msk (0x1UL << IWDG_SR_EWIF_Pos) /*!< 0x00004000 */
#define IWDG_SR_EWIF IWDG_SR_EWIF_Msk /*!< Watchdog early interrupt flag */

/******************  Bit definition for IWDG_WINR register  *******************/
#define IWDG_WINR_WIN_Pos (0U)
#define IWDG_WINR_WIN_Msk (0xFFFUL << IWDG_WINR_WIN_Pos) /*!< 0x00000FFF */
#define IWDG_WINR_WIN IWDG_WINR_WIN_Msk /*!< Watchdog counter window value */

/******************  Bit definition for IWDG_EWCR register  *******************/
#define IWDG_EWCR_EWIT_Pos (0U)
#define IWDG_EWCR_EWIT_Msk (0xFFFUL << IWDG_EWCR_EWIT_Pos) /*!< 0x00000FFF */
#define IWDG_EWCR_EWIT \
    IWDG_EWCR_EWIT_Msk /*!< Watchdog early wakeup comparator value */
#define IWDG_EWCR_EWIC_Pos (14U)
#define IWDG_EWCR_EWIC_Msk (0x1UL << IWDG_EWCR_EWIC_Pos) /*!< 0x00000FFF */
#define IWDG_EWCR_EWIC \
    IWDG_EWCR_EWIC_Msk /*!< Watchdog early wakeup comparator value */
#define IWDG_EWCR_EWIE_Pos (15U)
#define IWDG_EWCR_EWIE_Msk (0x1UL << IWDG_EWCR_EWIE_Pos) /*!< 0x00000FFF */
#define IWDG_EWCR_EWIE \
    IWDG_EWCR_EWIE_Msk /*!< Watchdog early wakeup comparator value */

/******************************************************************************/
/*                                                                            */
/*                   Serial Peripheral Interface (SPI/I2S)                    */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for SPI_CR1 register  ********************/
#define SPI_CR1_SPE_Pos (0U)
#define SPI_CR1_SPE_Msk (0x1UL << SPI_CR1_SPE_Pos) /*!< 0x00000001 */
#define SPI_CR1_SPE SPI_CR1_SPE_Msk /*!<Serial Peripheral Enable */
#define SPI_CR1_MASRX_Pos (8U)
#define SPI_CR1_MASRX_Msk (0x1UL << SPI_CR1_MASRX_Pos) /*!< 0x00000100 */
#define SPI_CR1_MASRX \
    SPI_CR1_MASRX_Msk /*!<Master automatic SUSP in Receive mode */
#define SPI_CR1_CSTART_Pos (9U)
#define SPI_CR1_CSTART_Msk (0x1UL << SPI_CR1_CSTART_Pos) /*!< 0x00000200 */
#define SPI_CR1_CSTART SPI_CR1_CSTART_Msk /*!<Master transfer start  */
#define SPI_CR1_CSUSP_Pos (10U)
#define SPI_CR1_CSUSP_Msk (0x1UL << SPI_CR1_CSUSP_Pos) /*!< 0x00000400 */
#define SPI_CR1_CSUSP SPI_CR1_CSUSP_Msk /*!<Master SUSPend request */
#define SPI_CR1_HDDIR_Pos (11U)
#define SPI_CR1_HDDIR_Msk (0x1UL << SPI_CR1_HDDIR_Pos) /*!< 0x00000800 */
#define SPI_CR1_HDDIR \
    SPI_CR1_HDDIR_Msk /*!<Rx/Tx direction at Half-duplex mode */
#define SPI_CR1_SSI_Pos (12U)
#define SPI_CR1_SSI_Msk (0x1UL << SPI_CR1_SSI_Pos) /*!< 0x00001000 */
#define SPI_CR1_SSI SPI_CR1_SSI_Msk /*!<Internal SS signal input level */
#define SPI_CR1_CRC33_17_Pos (13U)
#define SPI_CR1_CRC33_17_Msk (0x1UL << SPI_CR1_CRC33_17_Pos) /*!< 0x00002000 */
#define SPI_CR1_CRC33_17 \
    SPI_CR1_CRC33_17_Msk /*!<32-bit CRC polynomial configuration */
#define SPI_CR1_RCRCINI_Pos (14U)
#define SPI_CR1_RCRCINI_Msk (0x1UL << SPI_CR1_RCRCINI_Pos) /*!< 0x00004000 */
#define SPI_CR1_RCRCINI \
    SPI_CR1_RCRCINI_Msk /*!<CRC init pattern control for receiver */
#define SPI_CR1_TCRCINI_Pos (15U)
#define SPI_CR1_TCRCINI_Msk (0x1UL << SPI_CR1_TCRCINI_Pos) /*!< 0x00008000 */
#define SPI_CR1_TCRCINI \
    SPI_CR1_TCRCINI_Msk /*!<CRC init pattern control for transmitter */
#define SPI_CR1_IOLOCK_Pos (16U)
#define SPI_CR1_IOLOCK_Msk (0x1UL << SPI_CR1_IOLOCK_Pos) /*!< 0x00010000 */
#define SPI_CR1_IOLOCK \
    SPI_CR1_IOLOCK_Msk /*!<Locking the AF configuration of associated IOs */

/*******************  Bit definition for SPI_CR2 register  ********************/
#define SPI_CR2_TSIZE_Pos (0U)
#define SPI_CR2_TSIZE_Msk (0xFFFFUL << SPI_CR2_TSIZE_Pos) /*!< 0x0000FFFF */
#define SPI_CR2_TSIZE \
    SPI_CR2_TSIZE_Msk /*!<Number of data at current transfer */

/*******************  Bit definition for SPI_CFG1 register  ********************/
#define SPI_CFG1_DSIZE_Pos (0U)
#define SPI_CFG1_DSIZE_Msk (0x1FUL << SPI_CFG1_DSIZE_Pos) /*!< 0x0000001F */
#define SPI_CFG1_DSIZE \
    SPI_CFG1_DSIZE_Msk /*!<DSIZE[4:0]: Bits number in single SPI data frame */
#define SPI_CFG1_DSIZE_0 (0x01UL << SPI_CFG1_DSIZE_Pos) /*!< 0x00000001 */
#define SPI_CFG1_DSIZE_1 (0x02UL << SPI_CFG1_DSIZE_Pos) /*!< 0x00000002 */
#define SPI_CFG1_DSIZE_2 (0x04UL << SPI_CFG1_DSIZE_Pos) /*!< 0x00000004 */
#define SPI_CFG1_DSIZE_3 (0x08UL << SPI_CFG1_DSIZE_Pos) /*!< 0x00000008 */
#define SPI_CFG1_DSIZE_4 (0x10UL << SPI_CFG1_DSIZE_Pos) /*!< 0x00000010 */
#define SPI_CFG1_FTHLV_Pos (5U)
#define SPI_CFG1_FTHLV_Msk (0xFUL << SPI_CFG1_FTHLV_Pos) /*!< 0x000001E0 */
#define SPI_CFG1_FTHLV \
    SPI_CFG1_FTHLV_Msk /*!<FTHVL [3:0]: FIFO threshold level*/
#define SPI_CFG1_FTHLV_0 (0x1UL << SPI_CFG1_FTHLV_Pos) /*!< 0x00000020 */
#define SPI_CFG1_FTHLV_1 (0x2UL << SPI_CFG1_FTHLV_Pos) /*!< 0x00000040 */
#define SPI_CFG1_FTHLV_2 (0x4UL << SPI_CFG1_FTHLV_Pos) /*!< 0x00000080 */
#define SPI_CFG1_FTHLV_3 (0x8UL << SPI_CFG1_FTHLV_Pos) /*!< 0x00000100 */
#define SPI_CFG1_UDRCFG_Pos (9U)
#define SPI_CFG1_UDRCFG_Msk (0x1UL << SPI_CFG1_UDRCFG_Pos) /*!< 0x00000600 */
#define SPI_CFG1_UDRCFG \
    SPI_CFG1_UDRCFG_Msk /*!<Behavior of Slave transmitter at underrun */
#define SPI_CFG1_RXDMAEN_Pos (14U)
#define SPI_CFG1_RXDMAEN_Msk (0x1UL << SPI_CFG1_RXDMAEN_Pos) /*!< 0x00004000 */
#define SPI_CFG1_RXDMAEN SPI_CFG1_RXDMAEN_Msk /*!<Rx DMA stream enable */
#define SPI_CFG1_TXDMAEN_Pos (15U)
#define SPI_CFG1_TXDMAEN_Msk (0x1UL << SPI_CFG1_TXDMAEN_Pos) /*!< 0x00008000 */
#define SPI_CFG1_TXDMAEN SPI_CFG1_TXDMAEN_Msk /*!<Tx DMA stream enable */
#define SPI_CFG1_CRCSIZE_Pos (16U)
#define SPI_CFG1_CRCSIZE_Msk (0x1FUL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x001F0000 */
#define SPI_CFG1_CRCSIZE \
    SPI_CFG1_CRCSIZE_Msk /*!<CRCSIZE [4:0]: Length of CRC frame */
#define SPI_CFG1_CRCSIZE_0 (0x01UL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x00010000 */
#define SPI_CFG1_CRCSIZE_1 (0x02UL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x00020000 */
#define SPI_CFG1_CRCSIZE_2 (0x04UL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x00040000 */
#define SPI_CFG1_CRCSIZE_3 (0x08UL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x00080000 */
#define SPI_CFG1_CRCSIZE_4 (0x10UL << SPI_CFG1_CRCSIZE_Pos) /*!< 0x00100000 */
#define SPI_CFG1_CRCEN_Pos (22U)
#define SPI_CFG1_CRCEN_Msk (0x1UL << SPI_CFG1_CRCEN_Pos) /*!< 0x00400000 */
#define SPI_CFG1_CRCEN SPI_CFG1_CRCEN_Msk /*!<Hardware CRC computation enable */
#define SPI_CFG1_MBR_Pos (28U)
#define SPI_CFG1_MBR_Msk (0x7UL << SPI_CFG1_MBR_Pos) /*!< 0x70000000 */
#define SPI_CFG1_MBR SPI_CFG1_MBR_Msk                /*!<Master baud rate */
#define SPI_CFG1_MBR_0 (0x1UL << SPI_CFG1_MBR_Pos)   /*!< 0x10000000 */
#define SPI_CFG1_MBR_1 (0x2UL << SPI_CFG1_MBR_Pos)   /*!< 0x20000000 */
#define SPI_CFG1_MBR_2 (0x4UL << SPI_CFG1_MBR_Pos)   /*!< 0x40000000 */
#define SPI_CFG1_BPASS_Pos (31U)
#define SPI_CFG1_BPASS_Msk (0x1UL << SPI_CFG1_BPASS_Pos) /*!< 0x80000000 */
#define SPI_CFG1_BPASS SPI_CFG1_BPASS_Msk /*!<Bypass of the prescaler */

/*******************  Bit definition for SPI_CFG2 register  ********************/
#define SPI_CFG2_MSSI_Pos (0U)
#define SPI_CFG2_MSSI_Msk (0xFUL << SPI_CFG2_MSSI_Pos) /*!< 0x0000000F */
#define SPI_CFG2_MSSI SPI_CFG2_MSSI_Msk                /*!<Master SS Idleness */
#define SPI_CFG2_MSSI_0 (0x1UL << SPI_CFG2_MSSI_Pos)   /*!< 0x00000001 */
#define SPI_CFG2_MSSI_1 (0x2UL << SPI_CFG2_MSSI_Pos)   /*!< 0x00000002 */
#define SPI_CFG2_MSSI_2 (0x4UL << SPI_CFG2_MSSI_Pos)   /*!< 0x00000004 */
#define SPI_CFG2_MSSI_3 (0x8UL << SPI_CFG2_MSSI_Pos)   /*!< 0x00000008 */
#define SPI_CFG2_MIDI_Pos (4U)
#define SPI_CFG2_MIDI_Msk (0xFUL << SPI_CFG2_MIDI_Pos) /*!< 0x000000F0 */
#define SPI_CFG2_MIDI SPI_CFG2_MIDI_Msk /*!<Master Inter-Data Idleness */
#define SPI_CFG2_MIDI_0 (0x1UL << SPI_CFG2_MIDI_Pos) /*!< 0x00000010 */
#define SPI_CFG2_MIDI_1 (0x2UL << SPI_CFG2_MIDI_Pos) /*!< 0x00000020 */
#define SPI_CFG2_MIDI_2 (0x4UL << SPI_CFG2_MIDI_Pos) /*!< 0x00000040 */
#define SPI_CFG2_MIDI_3 (0x8UL << SPI_CFG2_MIDI_Pos) /*!< 0x00000080 */
#define SPI_CFG2_RDIOM_Pos (13U)
#define SPI_CFG2_RDIOM_Msk (0x1UL << SPI_CFG2_RDIOM_Pos) /*!< 0x00002000 */
#define SPI_CFG2_RDIOM \
    SPI_CFG2_RDIOM_Msk /*!<RDY signal input/output management */
#define SPI_CFG2_RDIOP_Pos (14U)
#define SPI_CFG2_RDIOP_Msk (0x1UL << SPI_CFG2_RDIOP_Pos) /*!< 0x00004000 */
#define SPI_CFG2_RDIOP \
    SPI_CFG2_RDIOP_Msk /*!<RDY signal input/output polarity */
#define SPI_CFG2_IOSWP_Pos (15U)
#define SPI_CFG2_IOSWP_Msk (0x1UL << SPI_CFG2_IOSWP_Pos) /*!< 0x00008000 */
#define SPI_CFG2_IOSWP \
    SPI_CFG2_IOSWP_Msk /*!<Swap functionality of MISO and MOSI pins */
#define SPI_CFG2_COMM_Pos (17U)
#define SPI_CFG2_COMM_Msk (0x3UL << SPI_CFG2_COMM_Pos) /*!< 0x00060000 */
#define SPI_CFG2_COMM SPI_CFG2_COMM_Msk /*!<COMM [1:0]: SPI Communication Mode*/
#define SPI_CFG2_COMM_0 (0x1UL << SPI_CFG2_COMM_Pos) /*!< 0x00020000 */
#define SPI_CFG2_COMM_1 (0x2UL << SPI_CFG2_COMM_Pos) /*!< 0x00040000 */
#define SPI_CFG2_SP_Pos (19U)
#define SPI_CFG2_SP_Msk (0x7UL << SPI_CFG2_SP_Pos) /*!< 0x00380000 */
#define SPI_CFG2_SP SPI_CFG2_SP_Msk              /*!<SP[2:0]: Serial Protocol */
#define SPI_CFG2_SP_0 (0x1UL << SPI_CFG2_SP_Pos) /*!< 0x00080000 */
#define SPI_CFG2_SP_1 (0x2UL << SPI_CFG2_SP_Pos) /*!< 0x00100000 */
#define SPI_CFG2_SP_2 (0x4UL << SPI_CFG2_SP_Pos) /*!< 0x00200000 */
#define SPI_CFG2_MASTER_Pos (22U)
#define SPI_CFG2_MASTER_Msk (0x1UL << SPI_CFG2_MASTER_Pos) /*!< 0x00400000 */
#define SPI_CFG2_MASTER SPI_CFG2_MASTER_Msk                /*!<SPI Master */
#define SPI_CFG2_LSBFRST_Pos (23U)
#define SPI_CFG2_LSBFRST_Msk (0x1UL << SPI_CFG2_LSBFRST_Pos) /*!< 0x00800000 */
#define SPI_CFG2_LSBFRST SPI_CFG2_LSBFRST_Msk /*!<Data frame format */
#define SPI_CFG2_CPHA_Pos (24U)
#define SPI_CFG2_CPHA_Msk (0x1UL << SPI_CFG2_CPHA_Pos) /*!< 0x01000000 */
#define SPI_CFG2_CPHA SPI_CFG2_CPHA_Msk                /*!<Clock Phase */
#define SPI_CFG2_CPOL_Pos (25U)
#define SPI_CFG2_CPOL_Msk (0x1UL << SPI_CFG2_CPOL_Pos) /*!< 0x02000000 */
#define SPI_CFG2_CPOL SPI_CFG2_CPOL_Msk                /*!<Clock Polarity */
#define SPI_CFG2_SSM_Pos (26U)
#define SPI_CFG2_SSM_Msk (0x1UL << SPI_CFG2_SSM_Pos) /*!< 0x04000000 */
#define SPI_CFG2_SSM SPI_CFG2_SSM_Msk /*!<Software slave management */
#define SPI_CFG2_SSIOP_Pos (28U)
#define SPI_CFG2_SSIOP_Msk (0x1UL << SPI_CFG2_SSIOP_Pos) /*!< 0x10000000 */
#define SPI_CFG2_SSIOP SPI_CFG2_SSIOP_Msk /*!<SS input/output polarity */
#define SPI_CFG2_SSOE_Pos (29U)
#define SPI_CFG2_SSOE_Msk (0x1UL << SPI_CFG2_SSOE_Pos) /*!< 0x20000000 */
#define SPI_CFG2_SSOE SPI_CFG2_SSOE_Msk                /*!<SS output enable */
#define SPI_CFG2_SSOM_Pos (30U)
#define SPI_CFG2_SSOM_Msk (0x1UL << SPI_CFG2_SSOM_Pos) /*!< 0x40000000 */
#define SPI_CFG2_SSOM \
    SPI_CFG2_SSOM_Msk /*!<SS output management in master mode */
#define SPI_CFG2_AFCNTR_Pos (31U)
#define SPI_CFG2_AFCNTR_Msk (0x1UL << SPI_CFG2_AFCNTR_Pos) /*!< 0x80000000 */
#define SPI_CFG2_AFCNTR \
    SPI_CFG2_AFCNTR_Msk /*!<Alternate function GPIOs control */

/*******************  Bit definition for SPI_IER register  ********************/
#define SPI_IER_RXPIE_Pos (0U)
#define SPI_IER_RXPIE_Msk (0x1UL << SPI_IER_RXPIE_Pos) /*!< 0x00000001 */
#define SPI_IER_RXPIE SPI_IER_RXPIE_Msk /*!<RXP Interrupt Enable */
#define SPI_IER_TXPIE_Pos (1U)
#define SPI_IER_TXPIE_Msk (0x1UL << SPI_IER_TXPIE_Pos) /*!< 0x00000002 */
#define SPI_IER_TXPIE SPI_IER_TXPIE_Msk /*!<TXP interrupt enable */
#define SPI_IER_DXPIE_Pos (2U)
#define SPI_IER_DXPIE_Msk (0x1UL << SPI_IER_DXPIE_Pos) /*!< 0x00000004 */
#define SPI_IER_DXPIE SPI_IER_DXPIE_Msk /*!<DXP interrupt enable */
#define SPI_IER_EOTIE_Pos (3U)
#define SPI_IER_EOTIE_Msk (0x1UL << SPI_IER_EOTIE_Pos) /*!< 0x00000008 */
#define SPI_IER_EOTIE SPI_IER_EOTIE_Msk /*!<EOT/SUSP/TXC interrupt enable */
#define SPI_IER_TXTFIE_Pos (4U)
#define SPI_IER_TXTFIE_Msk (0x1UL << SPI_IER_TXTFIE_Pos) /*!< 0x00000010 */
#define SPI_IER_TXTFIE SPI_IER_TXTFIE_Msk /*!<TXTF interrupt enable */
#define SPI_IER_UDRIE_Pos (5U)
#define SPI_IER_UDRIE_Msk (0x1UL << SPI_IER_UDRIE_Pos) /*!< 0x00000020 */
#define SPI_IER_UDRIE SPI_IER_UDRIE_Msk /*!<UDR interrupt enable */
#define SPI_IER_OVRIE_Pos (6U)
#define SPI_IER_OVRIE_Msk (0x1UL << SPI_IER_OVRIE_Pos) /*!< 0x00000040 */
#define SPI_IER_OVRIE SPI_IER_OVRIE_Msk /*!<OVR interrupt enable */
#define SPI_IER_CRCEIE_Pos (7U)
#define SPI_IER_CRCEIE_Msk (0x1UL << SPI_IER_CRCEIE_Pos) /*!< 0x00000080 */
#define SPI_IER_CRCEIE SPI_IER_CRCEIE_Msk /*!<CRCE interrupt enable */
#define SPI_IER_TIFREIE_Pos (8U)
#define SPI_IER_TIFREIE_Msk (0x1UL << SPI_IER_TIFREIE_Pos) /*!< 0x00000100 */
#define SPI_IER_TIFREIE \
    SPI_IER_TIFREIE_Msk /*!<TI Frame Error interrupt enable */
#define SPI_IER_MODFIE_Pos (9U)
#define SPI_IER_MODFIE_Msk (0x1UL << SPI_IER_MODFIE_Pos) /*!< 0x00000200 */
#define SPI_IER_MODFIE SPI_IER_MODFIE_Msk /*!<MODF interrupt enable */

/*******************  Bit definition for SPI_SR register  ********************/
#define SPI_SR_RXP_Pos (0U)
#define SPI_SR_RXP_Msk (0x1UL << SPI_SR_RXP_Pos) /*!< 0x00000001 */
#define SPI_SR_RXP SPI_SR_RXP_Msk                /*!<Rx-Packet available */
#define SPI_SR_TXP_Pos (1U)
#define SPI_SR_TXP_Msk (0x1UL << SPI_SR_TXP_Pos) /*!< 0x00000002 */
#define SPI_SR_TXP SPI_SR_TXP_Msk /*!<Tx-Packet space available */
#define SPI_SR_DXP_Pos (2U)
#define SPI_SR_DXP_Msk (0x1UL << SPI_SR_DXP_Pos) /*!< 0x00000004 */
#define SPI_SR_DXP SPI_SR_DXP_Msk                /*!<Duplex Packet available */
#define SPI_SR_EOT_Pos (3U)
#define SPI_SR_EOT_Msk (0x1UL << SPI_SR_EOT_Pos) /*!< 0x00000008 */
#define SPI_SR_EOT SPI_SR_EOT_Msk                /*!<Duplex Packet available */
#define SPI_SR_TXTF_Pos (4U)
#define SPI_SR_TXTF_Msk (0x1UL << SPI_SR_TXTF_Pos) /*!< 0x00000010 */
#define SPI_SR_TXTF SPI_SR_TXTF_Msk /*!<Transmission Transfer Filled */
#define SPI_SR_UDR_Pos (5U)
#define SPI_SR_UDR_Msk (0x1UL << SPI_SR_UDR_Pos) /*!< 0x00000020 */
#define SPI_SR_UDR SPI_SR_UDR_Msk /*!<UDR at Slave transmission */
#define SPI_SR_OVR_Pos (6U)
#define SPI_SR_OVR_Msk (0x1UL << SPI_SR_OVR_Pos) /*!< 0x00000040 */
#define SPI_SR_OVR SPI_SR_OVR_Msk                /*!<Rx-Packet available */
#define SPI_SR_CRCE_Pos (7U)
#define SPI_SR_CRCE_Msk (0x1UL << SPI_SR_CRCE_Pos) /*!< 0x00000080 */
#define SPI_SR_CRCE SPI_SR_CRCE_Msk                /*!<CRC Error Detected */
#define SPI_SR_TIFRE_Pos (8U)
#define SPI_SR_TIFRE_Msk (0x1UL << SPI_SR_TIFRE_Pos) /*!< 0x00000100 */
#define SPI_SR_TIFRE SPI_SR_TIFRE_Msk /*!<TI frame format error Detected */
#define SPI_SR_MODF_Pos (9U)
#define SPI_SR_MODF_Msk (0x1UL << SPI_SR_MODF_Pos) /*!< 0x00000200 */
#define SPI_SR_MODF SPI_SR_MODF_Msk                /*!<Mode Fault Detected */
#define SPI_SR_SUSP_Pos (11U)
#define SPI_SR_SUSP_Msk (0x1UL << SPI_SR_SUSP_Pos) /*!< 0x00000800 */
#define SPI_SR_SUSP SPI_SR_SUSP_Msk /*!<SUSP is set by hardware */
#define SPI_SR_TXC_Pos (12U)
#define SPI_SR_TXC_Msk (0x1UL << SPI_SR_TXC_Pos) /*!< 0x00001000 */
#define SPI_SR_TXC SPI_SR_TXC_Msk /*!<TxFIFO transmission complete */
#define SPI_SR_RXPLVL_Pos (13U)
#define SPI_SR_RXPLVL_Msk (0x3UL << SPI_SR_RXPLVL_Pos) /*!< 0x00006000 */
#define SPI_SR_RXPLVL SPI_SR_RXPLVL_Msk              /*!<RxFIFO Packing Level */
#define SPI_SR_RXPLVL_0 (0x1UL << SPI_SR_RXPLVL_Pos) /*!< 0x00002000 */
#define SPI_SR_RXPLVL_1 (0x2UL << SPI_SR_RXPLVL_Pos) /*!< 0x00004000 */
#define SPI_SR_RXWNE_Pos (15U)
#define SPI_SR_RXWNE_Msk (0x1UL << SPI_SR_RXWNE_Pos) /*!< 0x00008000 */
#define SPI_SR_RXWNE SPI_SR_RXWNE_Msk /*!<Rx FIFO Word Not Empty */
#define SPI_SR_CTSIZE_Pos (16U)
#define SPI_SR_CTSIZE_Msk (0xFFFFUL << SPI_SR_CTSIZE_Pos) /*!< 0xFFFF0000 */
#define SPI_SR_CTSIZE \
    SPI_SR_CTSIZE_Msk /*!<Number of data frames remaining in TSIZE */

/*******************  Bit definition for SPI_IFCR register  ********************/
#define SPI_IFCR_EOTC_Pos (3U)
#define SPI_IFCR_EOTC_Msk (0x1UL << SPI_IFCR_EOTC_Pos) /*!< 0x00000008 */
#define SPI_IFCR_EOTC SPI_IFCR_EOTC_Msk /*!<End Of Transfer flag clear */
#define SPI_IFCR_TXTFC_Pos (4U)
#define SPI_IFCR_TXTFC_Msk (0x1UL << SPI_IFCR_TXTFC_Pos) /*!< 0x00000010 */
#define SPI_IFCR_TXTFC \
    SPI_IFCR_TXTFC_Msk /*!<Transmission Transfer Filled flag clear */
#define SPI_IFCR_UDRC_Pos (5U)
#define SPI_IFCR_UDRC_Msk (0x1UL << SPI_IFCR_UDRC_Pos) /*!< 0x00000020 */
#define SPI_IFCR_UDRC SPI_IFCR_UDRC_Msk /*!<Underrun flag clear */
#define SPI_IFCR_OVRC_Pos (6U)
#define SPI_IFCR_OVRC_Msk (0x1UL << SPI_IFCR_OVRC_Pos) /*!< 0x00000040 */
#define SPI_IFCR_OVRC SPI_IFCR_OVRC_Msk                /*!<Overrun flag clear */
#define SPI_IFCR_CRCEC_Pos (7U)
#define SPI_IFCR_CRCEC_Msk (0x1UL << SPI_IFCR_CRCEC_Pos) /*!< 0x00000080 */
#define SPI_IFCR_CRCEC SPI_IFCR_CRCEC_Msk /*!<CRC Error flag clear */
#define SPI_IFCR_TIFREC_Pos (8U)
#define SPI_IFCR_TIFREC_Msk (0x1UL << SPI_IFCR_TIFREC_Pos) /*!< 0x00000100 */
#define SPI_IFCR_TIFREC \
    SPI_IFCR_TIFREC_Msk /*!<TI frame format error flag clear */
#define SPI_IFCR_MODFC_Pos (9U)
#define SPI_IFCR_MODFC_Msk (0x1UL << SPI_IFCR_MODFC_Pos) /*!< 0x00000200 */
#define SPI_IFCR_MODFC SPI_IFCR_MODFC_Msk /*!<Mode Fault flag clear */
#define SPI_IFCR_SUSPC_Pos (11U)
#define SPI_IFCR_SUSPC_Msk (0x1UL << SPI_IFCR_SUSPC_Pos) /*!< 0x00000800 */
#define SPI_IFCR_SUSPC SPI_IFCR_SUSPC_Msk /*!<SUSPend flag clear */

/*******************  Bit definition for SPI_TXDR register  ********************/
#define SPI_TXDR_TXDR_Pos (0U)
#define SPI_TXDR_TXDR_Msk (0xFFFFFFFFUL << SPI_TXDR_TXDR_Pos) /*!< 0xFFFFFFFF */
#define SPI_TXDR_TXDR SPI_TXDR_TXDR_Msk /*!<Transmit Data Register */

/*******************  Bit definition for SPI_RXDR register  ********************/
#define SPI_RXDR_RXDR_Pos (0U)
#define SPI_RXDR_RXDR_Msk (0xFFFFFFFFUL << SPI_RXDR_RXDR_Pos) /*!< 0xFFFFFFFF */
#define SPI_RXDR_RXDR SPI_RXDR_RXDR_Msk /*!<Receive Data Register */

/*******************  Bit definition for SPI_CRCPOLY register  ********************/
#define SPI_CRCPOLY_CRCPOLY_Pos (0U)
#define SPI_CRCPOLY_CRCPOLY_Msk \
    (0xFFFFFFFFUL << SPI_CRCPOLY_CRCPOLY_Pos) /*!< 0xFFFFFFFF */
#define SPI_CRCPOLY_CRCPOLY \
    SPI_CRCPOLY_CRCPOLY_Msk /*!<CRC Polynomial register */

/*******************  Bit definition for SPI_TXCRC register  ********************/
#define SPI_TXCRC_TXCRC_Pos (0U)
#define SPI_TXCRC_TXCRC_Msk \
    (0xFFFFFFFFUL << SPI_TXCRC_TXCRC_Pos)   /*!< 0xFFFFFFFF */
#define SPI_TXCRC_TXCRC SPI_TXCRC_TXCRC_Msk /*!<CRCRegister for transmitter */

/*******************  Bit definition for SPI_RXCRC register  ********************/
#define SPI_RXCRC_RXCRC_Pos (0U)
#define SPI_RXCRC_RXCRC_Msk \
    (0xFFFFFFFFUL << SPI_RXCRC_RXCRC_Pos)   /*!< 0xFFFFFFFF */
#define SPI_RXCRC_RXCRC SPI_RXCRC_RXCRC_Msk /*!<CRCRegister for receiver */

/*******************  Bit definition for SPI_UDRDR register  ********************/
#define SPI_UDRDR_UDRDR_Pos (0U)
#define SPI_UDRDR_UDRDR_Msk \
    (0xFFFFFFFFUL << SPI_UDRDR_UDRDR_Pos) /*!< 0xFFFFFFFF */
#define SPI_UDRDR_UDRDR \
    SPI_UDRDR_UDRDR_Msk /*!<Data at slave underrun condition */

/******************  Bit definition for SPI_I2SCFGR register  *****************/
#define SPI_I2SCFGR_I2SMOD_Pos (0U)
#define SPI_I2SCFGR_I2SMOD_Msk \
    (0x1UL << SPI_I2SCFGR_I2SMOD_Pos)             /*!< 0x00000001 */
#define SPI_I2SCFGR_I2SMOD SPI_I2SCFGR_I2SMOD_Msk /*!<I2S mode selection */
#define SPI_I2SCFGR_I2SCFG_Pos (1U)
#define SPI_I2SCFGR_I2SCFG_Msk \
    (0x7UL << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x0000000E */
#define SPI_I2SCFGR_I2SCFG \
    SPI_I2SCFGR_I2SCFG_Msk /*!<I2SCFG[2:0] I2S configuration mode                */
#define SPI_I2SCFGR_I2SCFG_0 \
    (0x1UL << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000002 */
#define SPI_I2SCFGR_I2SCFG_1 \
    (0x2UL << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000004 */
#define SPI_I2SCFGR_I2SCFG_2 \
    (0x4UL << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000008 */
#define SPI_I2SCFGR_I2SSTD_Pos (4U)
#define SPI_I2SCFGR_I2SSTD_Msk \
    (0x3UL << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000030 */
#define SPI_I2SCFGR_I2SSTD \
    SPI_I2SCFGR_I2SSTD_Msk /*!<I2SSTD[1:0] I2S standard selection                */
#define SPI_I2SCFGR_I2SSTD_0 \
    (0x1UL << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000010 */
#define SPI_I2SCFGR_I2SSTD_1 \
    (0x2UL << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000020 */
#define SPI_I2SCFGR_PCMSYNC_Pos (7U)
#define SPI_I2SCFGR_PCMSYNC_Msk \
    (0x1UL << SPI_I2SCFGR_PCMSYNC_Pos) /*!< 0x00000080 */
#define SPI_I2SCFGR_PCMSYNC \
    SPI_I2SCFGR_PCMSYNC_Msk /*!<PCM frame synchronization                         */
#define SPI_I2SCFGR_DATLEN_Pos (8U)
#define SPI_I2SCFGR_DATLEN_Msk \
    (0x3UL << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000300 */
#define SPI_I2SCFGR_DATLEN \
    SPI_I2SCFGR_DATLEN_Msk /*!<DATLEN[1:0] Data length to be transferred         */
#define SPI_I2SCFGR_DATLEN_0 \
    (0x1UL << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000100 */
#define SPI_I2SCFGR_DATLEN_1 \
    (0x2UL << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000200 */
#define SPI_I2SCFGR_CHLEN_Pos (10U)
#define SPI_I2SCFGR_CHLEN_Msk \
    (0x1UL << SPI_I2SCFGR_CHLEN_Pos) /*!< 0x00000400 */
#define SPI_I2SCFGR_CHLEN \
    SPI_I2SCFGR_CHLEN_Msk /*!<Channel length (number of bits per audio channel) */
#define SPI_I2SCFGR_CKPOL_Pos (11U)
#define SPI_I2SCFGR_CKPOL_Msk \
    (0x1UL << SPI_I2SCFGR_CKPOL_Pos) /*!< 0x00000800 */
#define SPI_I2SCFGR_CKPOL \
    SPI_I2SCFGR_CKPOL_Msk /*!<Steady state clock polarity                       */
#define SPI_I2SCFGR_FIXCH_Pos (12U)
#define SPI_I2SCFGR_FIXCH_Msk \
    (0x1UL << SPI_I2SCFGR_FIXCH_Pos) /*!< 0x00001000 */
#define SPI_I2SCFGR_FIXCH \
    SPI_I2SCFGR_FIXCH_Msk /*!<Fixed channel length in SLAVE                     */
#define SPI_I2SCFGR_WSINV_Pos (13U)
#define SPI_I2SCFGR_WSINV_Msk \
    (0x1UL << SPI_I2SCFGR_WSINV_Pos) /*!< 0x00002000 */
#define SPI_I2SCFGR_WSINV \
    SPI_I2SCFGR_WSINV_Msk /*!<Word select inversion                             */
#define SPI_I2SCFGR_DATFMT_Pos (14U)
#define SPI_I2SCFGR_DATFMT_Msk \
    (0x1UL << SPI_I2SCFGR_DATFMT_Pos) /*!< 0x00004000 */
#define SPI_I2SCFGR_DATFMT \
    SPI_I2SCFGR_DATFMT_Msk /*!<Data format                                       */
#define SPI_I2SCFGR_I2SDIV_Pos (16U)
#define SPI_I2SCFGR_I2SDIV_Msk \
    (0xFFUL << SPI_I2SCFGR_I2SDIV_Pos)            /*!< 0x00FF0000 */
#define SPI_I2SCFGR_I2SDIV SPI_I2SCFGR_I2SDIV_Msk /*!<I2S Linear prescaler */
#define SPI_I2SCFGR_ODD_Pos (24U)
#define SPI_I2SCFGR_ODD_Msk (0x1UL << SPI_I2SCFGR_ODD_Pos) /*!< 0x01000000 */
#define SPI_I2SCFGR_ODD SPI_I2SCFGR_ODD_Msk /*!<Odd factor for the prescaler */
#define SPI_I2SCFGR_MCKOE_Pos (25U)
#define SPI_I2SCFGR_MCKOE_Msk \
    (0x1UL << SPI_I2SCFGR_MCKOE_Pos) /*!< 0x02000000 */
#define SPI_I2SCFGR_MCKOE \
    SPI_I2SCFGR_MCKOE_Msk /*!<Master Clock Output Enable */

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for WWDG_CR register  ********************/
#define WWDG_CR_T_Pos (0U)
#define WWDG_CR_T_Msk (0x7FUL << WWDG_CR_T_Pos) /*!< 0x0000007F */
#define WWDG_CR_T WWDG_CR_T_Msk /*!<T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define WWDG_CR_T_0 (0x01UL << WWDG_CR_T_Pos) /*!< 0x00000001 */
#define WWDG_CR_T_1 (0x02UL << WWDG_CR_T_Pos) /*!< 0x00000002 */
#define WWDG_CR_T_2 (0x04UL << WWDG_CR_T_Pos) /*!< 0x00000004 */
#define WWDG_CR_T_3 (0x08UL << WWDG_CR_T_Pos) /*!< 0x00000008 */
#define WWDG_CR_T_4 (0x10UL << WWDG_CR_T_Pos) /*!< 0x00000010 */
#define WWDG_CR_T_5 (0x20UL << WWDG_CR_T_Pos) /*!< 0x00000020 */
#define WWDG_CR_T_6 (0x40UL << WWDG_CR_T_Pos) /*!< 0x00000040 */
#define WWDG_CR_WDGA_Pos (7U)
#define WWDG_CR_WDGA_Msk (0x1UL << WWDG_CR_WDGA_Pos) /*!< 0x00000080 */
#define WWDG_CR_WDGA WWDG_CR_WDGA_Msk                /*!<Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define WWDG_CFR_W_Pos (0U)
#define WWDG_CFR_W_Msk (0x7FUL << WWDG_CFR_W_Pos) /*!< 0x0000007F */
#define WWDG_CFR_W WWDG_CFR_W_Msk /*!<W[6:0] bits (7-bit window value) */
#define WWDG_CFR_W_0 (0x01UL << WWDG_CFR_W_Pos) /*!< 0x00000001 */
#define WWDG_CFR_W_1 (0x02UL << WWDG_CFR_W_Pos) /*!< 0x00000002 */
#define WWDG_CFR_W_2 (0x04UL << WWDG_CFR_W_Pos) /*!< 0x00000004 */
#define WWDG_CFR_W_3 (0x08UL << WWDG_CFR_W_Pos) /*!< 0x00000008 */
#define WWDG_CFR_W_4 (0x10UL << WWDG_CFR_W_Pos) /*!< 0x00000010 */
#define WWDG_CFR_W_5 (0x20UL << WWDG_CFR_W_Pos) /*!< 0x00000020 */
#define WWDG_CFR_W_6 (0x40UL << WWDG_CFR_W_Pos) /*!< 0x00000040 */
#define WWDG_CFR_EWI_Pos (9U)
#define WWDG_CFR_EWI_Msk (0x1UL << WWDG_CFR_EWI_Pos) /*!< 0x00000200 */
#define WWDG_CFR_EWI WWDG_CFR_EWI_Msk /*!<Early Wakeup Interrupt */
#define WWDG_CFR_WDGTB_Pos (11U)
#define WWDG_CFR_WDGTB_Msk (0x7UL << WWDG_CFR_WDGTB_Pos) /*!< 0x00003800 */
#define WWDG_CFR_WDGTB WWDG_CFR_WDGTB_Msk /*!<WDGTB[2:0] bits (Timer Base) */
#define WWDG_CFR_WDGTB_0 (0x1UL << WWDG_CFR_WDGTB_Pos) /*!< 0x00000800 */
#define WWDG_CFR_WDGTB_1 (0x2UL << WWDG_CFR_WDGTB_Pos) /*!< 0x00001000 */
#define WWDG_CFR_WDGTB_2 (0x4UL << WWDG_CFR_WDGTB_Pos) /*!< 0x00002000 */

/*******************  Bit definition for WWDG_SR register  ********************/
#define WWDG_SR_EWIF_Pos (0U)
#define WWDG_SR_EWIF_Msk (0x1UL << WWDG_SR_EWIF_Pos) /*!< 0x00000001 */
#define WWDG_SR_EWIF WWDG_SR_EWIF_Msk /*!<Early Wakeup Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         USB Dual Role Device FS Endpoint registers         */
/*                                                                            */
/******************************************************************************/

/******************  Bits definition for USB_DRD_CNTR register  *******************/
#define USB_CNTR_HOST_Pos (31U)
#define USB_CNTR_HOST_Msk (0x1UL << USB_CNTR_HOST_Pos) /*!< 0x80000000 */
#define USB_CNTR_HOST USB_CNTR_HOST_Msk                /*!< Host Mode  */
#define USB_CNTR_THR512M_Pos (16U)
#define USB_CNTR_THR512M_Msk (0x1UL << USB_CNTR_THR512M_Pos) /*!< 0x00010000 */
#define USB_CNTR_THR512M \
    USB_CNTR_THR512M_Msk /*!< 512byte Threshold interrupt mask */
#define USB_CNTR_CTRM_Pos (15U)
#define USB_CNTR_CTRM_Msk (0x1UL << USB_CNTR_CTRM_Pos) /*!< 0x00008000 */
#define USB_CNTR_CTRM USB_CNTR_CTRM_Msk /*!< Correct Transfer Mask */
#define USB_CNTR_PMAOVRM_Pos (14U)
#define USB_CNTR_PMAOVRM_Msk (0x1UL << USB_CNTR_PMAOVRM_Pos) /*!< 0x00004000 */
#define USB_CNTR_PMAOVRM USB_CNTR_PMAOVRM_Msk /*!< DMA OVeR/underrun Mask */
#define USB_CNTR_ERRM_Pos (13U)
#define USB_CNTR_ERRM_Msk (0x1UL << USB_CNTR_ERRM_Pos) /*!< 0x00002000 */
#define USB_CNTR_ERRM USB_CNTR_ERRM_Msk                /*!< ERRor Mask */
#define USB_CNTR_WKUPM_Pos (12U)
#define USB_CNTR_WKUPM_Msk (0x1UL << USB_CNTR_WKUPM_Pos) /*!< 0x00001000 */
#define USB_CNTR_WKUPM USB_CNTR_WKUPM_Msk                /*!< WaKe UP Mask */
#define USB_CNTR_SUSPM_Pos (11U)
#define USB_CNTR_SUSPM_Msk (0x1UL << USB_CNTR_SUSPM_Pos) /*!< 0x00000800 */
#define USB_CNTR_SUSPM USB_CNTR_SUSPM_Msk                /*!< SUSPend Mask */
#define USB_CNTR_RESETM_Pos (10U)
#define USB_CNTR_RESETM_Msk (0x1UL << USB_CNTR_RESETM_Pos) /*!< 0x00000400 */
#define USB_CNTR_RESETM USB_CNTR_RESETM_Msk                /*!< RESET Mask */
#define USB_CNTR_DCON USB_CNTR_RESETM_Msk /*!< Disconnection Connection Mask */
#define USB_CNTR_SOFM_Pos (9U)
#define USB_CNTR_SOFM_Msk (0x1UL << USB_CNTR_SOFM_Pos) /*!< 0x00000200 */
#define USB_CNTR_SOFM USB_CNTR_SOFM_Msk /*!< Start Of Frame Mask */
#define USB_CNTR_ESOFM_Pos (8U)
#define USB_CNTR_ESOFM_Msk (0x1UL << USB_CNTR_ESOFM_Pos) /*!< 0x00000100 */
#define USB_CNTR_ESOFM USB_CNTR_ESOFM_Msk /*!< Expected Start Of Frame Mask */
#define USB_CNTR_L1REQM_Pos (7U)
#define USB_CNTR_L1REQM_Msk (0x1UL << USB_CNTR_L1REQM_Pos) /*!< 0x00000080 */
#define USB_CNTR_L1REQM \
    USB_CNTR_L1REQM_Msk /*!< LPM L1 state request interrupt Mask */
#define USB_CNTR_L1XACT_Pos (6U)
#define USB_CNTR_L1XACT_Msk (0x1UL << USB_CNTR_L1XACT_Pos) /*!< 0x00000040 */
#define USB_CNTR_L1XACT \
    USB_CNTR_L1XACT_Msk /*!< Host LPM L1 transaction request Mask */
#define USB_CNTR_L1RES_Pos (5U)
#define USB_CNTR_L1RES_Msk (0x1UL << USB_CNTR_L1RES_Pos) /*!< 0x00000020 */
#define USB_CNTR_L1RES \
    USB_CNTR_L1RES_Msk /*!< LPM L1 Resume request/ Remote Wakeup Mask */
#define USB_CNTR_L2RES_Pos (4U)
#define USB_CNTR_L2RES_Msk (0x1UL << USB_CNTR_L2RES_Pos) /*!< 0x00000010 */
#define USB_CNTR_L2RES \
    USB_CNTR_L2RES_Msk /*!< L2 Remote Wakeup / Resume driver Mask */
#define USB_CNTR_SUSPEN_Pos (3U)
#define USB_CNTR_SUSPEN_Msk (0x1UL << USB_CNTR_SUSPEN_Pos) /*!< 0x00000008 */
#define USB_CNTR_SUSPEN USB_CNTR_SUSPEN_Msk /*!< Suspend state enable Mask */
#define USB_CNTR_SUSPRDY_Pos (2U)
#define USB_CNTR_SUSPRDY_Msk (0x1UL << USB_CNTR_SUSPRDY_Pos) /*!< 0x00000004 */
#define USB_CNTR_SUSPRDY \
    USB_CNTR_SUSPRDY_Msk /*!< Suspend state effective Mask */
#define USB_CNTR_PDWN_Pos (1U)
#define USB_CNTR_PDWN_Msk (0x1UL << USB_CNTR_PDWN_Pos) /*!< 0x00000002 */
#define USB_CNTR_PDWN USB_CNTR_PDWN_Msk                /*!< Power DoWN Mask */
#define USB_CNTR_USBRST_Pos (0U)
#define USB_CNTR_USBRST_Msk (0x1UL << USB_CNTR_USBRST_Pos) /*!< 0x00000001 */
#define USB_CNTR_USBRST USB_CNTR_USBRST_Msk /*!< USB Reset Mask */

/******************  Bits definition for USB_DRD_ISTR register  *******************/
#define USB_ISTR_IDN_Pos (0U)
#define USB_ISTR_IDN_Msk (0xFUL << USB_ISTR_IDN_Pos) /*!< 0x0000000F */
#define USB_ISTR_IDN \
    USB_ISTR_IDN_Msk /*!< EndPoint IDentifier (read-only bit) Mask */
#define USB_ISTR_DIR_Pos (4U)
#define USB_ISTR_DIR_Msk (0x1UL << USB_ISTR_DIR_Pos) /*!< 0x00000010 */
#define USB_ISTR_DIR \
    USB_ISTR_DIR_Msk /*!< DIRection of transaction (read-only bit) Mask */
#define USB_ISTR_L1REQ_Pos (7U)
#define USB_ISTR_L1REQ_Msk (0x1UL << USB_ISTR_L1REQ_Pos) /*!< 0x00000080 */
#define USB_ISTR_L1REQ USB_ISTR_L1REQ_Msk /*!< LPM L1 state request Mask */
#define USB_ISTR_ESOF_Pos (8U)
#define USB_ISTR_ESOF_Msk (0x1UL << USB_ISTR_ESOF_Pos) /*!< 0x00000100 */
#define USB_ISTR_ESOF \
    USB_ISTR_ESOF_Msk /*!< Expected Start Of Frame (clear-only bit) Mask */
#define USB_ISTR_SOF_Pos (9U)
#define USB_ISTR_SOF_Msk (0x1UL << USB_ISTR_SOF_Pos) /*!< 0x00000200 */
#define USB_ISTR_SOF \
    USB_ISTR_SOF_Msk /*!< Start Of Frame (clear-only bit) Mask */
#define USB_ISTR_RESET_Pos (10U)
#define USB_ISTR_RESET_Msk (0x1UL << USB_ISTR_RESET_Pos) /*!< 0x00000400 */
#define USB_ISTR_RESET USB_ISTR_RESET_Msk                /*!< RESET Mask */
#define USB_ISTR_DCON_Pos (10U)
#define USB_ISTR_DCON_Msk (0x1UL << USB_ISTR_DCON_Pos) /*!< 0x00000400 */
#define USB_ISTR_DCON \
    USB_ISTR_DCON_Msk /*!< HOST MODE-Device Connection or disconnection Mask */
#define USB_ISTR_SUSP_Pos (11U)
#define USB_ISTR_SUSP_Msk (0x1UL << USB_ISTR_SUSP_Pos) /*!< 0x00000800 */
#define USB_ISTR_SUSP USB_ISTR_SUSP_Msk /*!< SUSPend (clear-only bit) Mask */
#define USB_ISTR_WKUP_Pos (12U)
#define USB_ISTR_WKUP_Msk (0x1UL << USB_ISTR_WKUP_Pos) /*!< 0x00001000 */
#define USB_ISTR_WKUP USB_ISTR_WKUP_Msk /*!< WaKe UP (clear-only bit) Mask */
#define USB_ISTR_ERR_Pos (13U)
#define USB_ISTR_ERR_Msk (0x1UL << USB_ISTR_ERR_Pos) /*!< 0x00002000 */
#define USB_ISTR_ERR USB_ISTR_ERR_Msk /*!< ERRor (clear-only bit) Mask */
#define USB_ISTR_PMAOVR_Pos (14U)
#define USB_ISTR_PMAOVR_Msk (0x1UL << USB_ISTR_PMAOVR_Pos) /*!< 0x00004000 */
#define USB_ISTR_PMAOVR \
    USB_ISTR_PMAOVR_Msk /*!< PMA OVeR/underrun (clear-only bit) Mask */
#define USB_ISTR_CTR_Pos (15U)
#define USB_ISTR_CTR_Msk (0x1UL << USB_ISTR_CTR_Pos) /*!< 0x00008000 */
#define USB_ISTR_CTR \
    USB_ISTR_CTR_Msk /*!< Correct TRansfer (clear-only bit) Mask */
#define USB_ISTR_THR512_Pos (16U)
#define USB_ISTR_THR512_Msk (0x1UL << USB_ISTR_THR512_Pos) /*!< 0x00010000 */
#define USB_ISTR_THR512 \
    USB_ISTR_THR512_Msk /*!< 512byte threshold interrupt (used with isochrnous single buffer ) */
#define USB_ISTR_DCON_STAT_Pos (29U)
#define USB_ISTR_DCON_STAT_Msk \
    (0x1UL << USB_ISTR_DCON_STAT_Pos) /*!< 0x20000000 */
#define USB_ISTR_DCON_STAT \
    USB_ISTR_DCON_STAT_Msk /*!< Device Connection status (connected/Disconnected) don't cause an interrupt */
#define USB_ISTR_LS_DCONN_Pos (30U)
#define USB_ISTR_LS_DCONN_Msk \
    (0x1UL << USB_ISTR_LS_DCONN_Pos)            /*!< 0x40000000 */
#define USB_ISTR_LS_DCONN USB_ISTR_LS_DCONN_Msk /*!< LS_DCONN Mask */

/******************  Bits definition for USB_DRD_FNR register  ********************/
#define USB_FNR_FN_Pos (0U)
#define USB_FNR_FN_Msk (0x7FFUL << USB_FNR_FN_Pos) /*!< 0x000007FF */
#define USB_FNR_FN USB_FNR_FN_Msk                  /*!< Frame Number Mask */
#define USB_FNR_LSOF_Pos (11U)
#define USB_FNR_LSOF_Msk (0x3UL << USB_FNR_LSOF_Pos) /*!< 0x00001800 */
#define USB_FNR_LSOF USB_FNR_LSOF_Msk                /*!< Lost SOF  Mask */
#define USB_FNR_LCK_Pos (13U)
#define USB_FNR_LCK_Msk (0x1UL << USB_FNR_LCK_Pos) /*!< 0x00002000 */
#define USB_FNR_LCK USB_FNR_LCK_Msk                /*!< LoCKed Mask */
#define USB_FNR_RXDM_Pos (14U)
#define USB_FNR_RXDM_Msk (0x1UL << USB_FNR_RXDM_Pos) /*!< 0x00004000 */
#define USB_FNR_RXDM USB_FNR_RXDM_Msk /*!< status of D- data line Mask */
#define USB_FNR_RXDP_Pos (15U)
#define USB_FNR_RXDP_Msk (0x1UL << USB_FNR_RXDP_Pos) /*!< 0x00008000 */
#define USB_FNR_RXDP USB_FNR_RXDP_Msk /*!< status of D+ data line Mask */

/******************  Bits definition for USB_DRD_DADDR register    ****************/
#define USB_DADDR_ADD_Pos (0U)
#define USB_DADDR_ADD_Msk (0x7FUL << USB_DADDR_ADD_Pos) /*!< 0x0000007F */
#define USB_DADDR_ADD \
    USB_DADDR_ADD_Msk /*!<  ADD[6:0] bits (Device Address)Mask */
#define USB_DADDR_ADD0_Pos (0U)
#define USB_DADDR_ADD0_Msk (0x1UL << USB_DADDR_ADD0_Pos) /*!< 0x00000001 */
#define USB_DADDR_ADD0 USB_DADDR_ADD0_Msk                /*!< Bit 0 Mask */
#define USB_DADDR_ADD1_Pos (1U)
#define USB_DADDR_ADD1_Msk (0x1UL << USB_DADDR_ADD1_Pos) /*!< 0x00000002 */
#define USB_DADDR_ADD1 USB_DADDR_ADD1_Msk                /*!< Bit 1 Mask */
#define USB_DADDR_ADD2_Pos (2U)
#define USB_DADDR_ADD2_Msk (0x1UL << USB_DADDR_ADD2_Pos) /*!< 0x00000004 */
#define USB_DADDR_ADD2 USB_DADDR_ADD2_Msk                /*!< Bit 2 Mask */
#define USB_DADDR_ADD3_Pos (3U)
#define USB_DADDR_ADD3_Msk (0x1UL << USB_DADDR_ADD3_Pos) /*!< 0x00000008 */
#define USB_DADDR_ADD3 USB_DADDR_ADD3_Msk                /*!< Bit 3 Mask */
#define USB_DADDR_ADD4_Pos (4U)
#define USB_DADDR_ADD4_Msk (0x1UL << USB_DADDR_ADD4_Pos) /*!< 0x00000010 */
#define USB_DADDR_ADD4 USB_DADDR_ADD4_Msk                /*!< Bit 4 Mask */
#define USB_DADDR_ADD5_Pos (5U)
#define USB_DADDR_ADD5_Msk (0x1UL << USB_DADDR_ADD5_Pos) /*!< 0x00000020 */
#define USB_DADDR_ADD5 USB_DADDR_ADD5_Msk                /*!< Bit 5 Mask */
#define USB_DADDR_ADD6_Pos (6U)
#define USB_DADDR_ADD6_Msk (0x1UL << USB_DADDR_ADD6_Pos) /*!< 0x00000040 */
#define USB_DADDR_ADD6 USB_DADDR_ADD6_Msk                /*!< Bit 6 Mask */
#define USB_DADDR_EF_Pos (7U)
#define USB_DADDR_EF_Msk (0x1UL << USB_DADDR_EF_Pos) /*!< 0x00000080 */
#define USB_DADDR_EF USB_DADDR_EF_Msk /*!< Enable Function Mask */

/******************  Bit definition for USB_DRD_BTABLE register  ******************/
#define USB_BTABLE_BTABLE_Pos (3U)
#define USB_BTABLE_BTABLE_Msk \
    (0xFFF8UL << USB_BTABLE_BTABLE_Pos)         /*!< 0x00000000 */
#define USB_BTABLE_BTABLE USB_BTABLE_BTABLE_Msk /*!< Buffer Table Mask */

/*******************  Bit definition for LPMCSR register  *********************/
#define USB_LPMCSR_LMPEN_Pos (0U)
#define USB_LPMCSR_LMPEN_Msk (0x1UL << USB_LPMCSR_LMPEN_Pos) /*!< 0x00000001 */
#define USB_LPMCSR_LMPEN USB_LPMCSR_LMPEN_Msk /*!< LPM support enable Mask */
#define USB_LPMCSR_LPMACK_Pos (1U)
#define USB_LPMCSR_LPMACK_Msk \
    (0x1UL << USB_LPMCSR_LPMACK_Pos) /*!< 0x00000002 */
#define USB_LPMCSR_LPMACK \
    USB_LPMCSR_LPMACK_Msk /*!< LPM Token acknowledge enable Mask */
#define USB_LPMCSR_REMWAKE_Pos (3U)
#define USB_LPMCSR_REMWAKE_Msk \
    (0x1UL << USB_LPMCSR_REMWAKE_Pos) /*!< 0x00000008 */
#define USB_LPMCSR_REMWAKE \
    USB_LPMCSR_REMWAKE_Msk /*!< bRemoteWake value received with last ACKed LPM Token Mask */
#define USB_LPMCSR_BESL_Pos (4U)
#define USB_LPMCSR_BESL_Msk (0xFUL << USB_LPMCSR_BESL_Pos) /*!< 0x000000F0 */
#define USB_LPMCSR_BESL \
    USB_LPMCSR_BESL_Msk /*!< BESL value received with last ACKed LPM Token Mask */

/******************  Bits definition for USB_DRD_BCDR register  *******************/
#define USB_BCDR_BCDEN_Pos (0U)
#define USB_BCDR_BCDEN_Msk (0x1UL << USB_BCDR_BCDEN_Pos) /*!< 0x00000001 */
#define USB_BCDR_BCDEN \
    USB_BCDR_BCDEN_Msk /*!< Battery charging detector (BCD) enable Mask */
#define USB_BCDR_DCDEN_Pos (1U)
#define USB_BCDR_DCDEN_Msk (0x1UL << USB_BCDR_DCDEN_Pos) /*!< 0x00000002 */
#define USB_BCDR_DCDEN \
    USB_BCDR_DCDEN_Msk /*!< Data contact detection (DCD) mode enable Mask */
#define USB_BCDR_PDEN_Pos (2U)
#define USB_BCDR_PDEN_Msk (0x1UL << USB_BCDR_PDEN_Pos) /*!< 0x00000004 */
#define USB_BCDR_PDEN \
    USB_BCDR_PDEN_Msk /*!< Primary detection (PD) mode enable Mask */
#define USB_BCDR_SDEN_Pos (3U)
#define USB_BCDR_SDEN_Msk (0x1UL << USB_BCDR_SDEN_Pos) /*!< 0x00000008 */
#define USB_BCDR_SDEN \
    USB_BCDR_SDEN_Msk /*!< Secondary detection (SD) mode enable Mask */
#define USB_BCDR_DCDET_Pos (4U)
#define USB_BCDR_DCDET_Msk (0x1UL << USB_BCDR_DCDET_Pos) /*!< 0x00000010 */
#define USB_BCDR_DCDET \
    USB_BCDR_DCDET_Msk /*!< Data contact detection (DCD) status Mask */
#define USB_BCDR_PDET_Pos (5U)
#define USB_BCDR_PDET_Msk (0x1UL << USB_BCDR_PDET_Pos) /*!< 0x00000020 */
#define USB_BCDR_PDET \
    USB_BCDR_PDET_Msk /*!< Primary detection (PD) status Mask */
#define USB_BCDR_SDET_Pos (6U)
#define USB_BCDR_SDET_Msk (0x1UL << USB_BCDR_SDET_Pos) /*!< 0x00000040 */
#define USB_BCDR_SDET \
    USB_BCDR_SDET_Msk /*!< Secondary detection (SD) status Mask */
#define USB_BCDR_PS2DET_Pos (7U)
#define USB_BCDR_PS2DET_Msk (0x1UL << USB_BCDR_PS2DET_Pos) /*!< 0x00000080 */
#define USB_BCDR_PS2DET \
    USB_BCDR_PS2DET_Msk /*!< PS2 port or proprietary charger detected Mask */
#define USB_BCDR_DPPU_Pos (15U)
#define USB_BCDR_DPPU_Msk (0x1UL << USB_BCDR_DPPU_Pos) /*!< 0x00008000 */
#define USB_BCDR_DPPU USB_BCDR_DPPU_Msk /*!< DP Pull-up Enable Mask */
#define USB_BCDR_DPPD_Pos (15U)
#define USB_BCDR_DPPD_Msk (0x1UL << USB_BCDR_DPPD_Pos) /*!< 0x00008000 */
#define USB_BCDR_DPPD USB_BCDR_DPPD_Msk /*!< DP Pull-Down Enable Mask */

/******************  Bits definition for USB_DRD_CHEP register  *******************/
#define USB_CHEP_ERRRX_Pos (26U)
#define USB_CHEP_ERRRX_Msk (0x01UL << USB_CHEP_ERRRX_Pos) /*!< 0x04000000 */
#define USB_CHEP_ERRRX USB_CHEP_ERRRX_Msk                 /*!< Receive error */
#define USB_EP_ERRRX USB_CHEP_ERRRX_Msk /*!< EP Receive error */
#define USB_CH_ERRRX USB_CHEP_ERRRX_Msk /*!< CH Receive error */
#define USB_CHEP_ERRTX_Pos (25U)
#define USB_CHEP_ERRTX_Msk (0x01UL << USB_CHEP_ERRTX_Pos) /*!< 0x02000000 */
#define USB_CHEP_ERRTX USB_CHEP_ERRTX_Msk                 /*!< Transmit error */
#define USB_EP_ERRTX USB_CHEP_ERRTX_Msk /*!< EP Transmit error */
#define USB_CH_ERRTX USB_CHEP_ERRTX_Msk /*!< CH Transmit error */
#define USB_CHEP_LSEP_Pos (24U)
#define USB_CHEP_LSEP_Msk (0x01UL << USB_CHEP_LSEP_Pos) /*!< 0x01000000 */
#define USB_CHEP_LSEP \
    USB_CHEP_LSEP_Msk /*!< Low Speed Endpoint (host with Hub Only) */
#define USB_CHEP_NAK_Pos (23U)
#define USB_CHEP_NAK_Msk (0x01UL << USB_CHEP_NAK_Pos) /*!< 0x00800000 */
#define USB_CHEP_NAK USB_CHEP_NAK_Msk /*!< Previous NAK detected */
#define USB_CHEP_DEVADDR_Pos (16U)
#define USB_CHEP_DEVADDR_Msk (0x7FU << USB_CHEP_DEVADDR_Pos) /*!< 0x7F000000 */
#define USB_CHEP_DEVADDR USB_CHEP_DEVADDR_Msk /* Target Endpoint address*/
#define USB_CHEP_VTRX_Pos (15U)
#define USB_CHEP_VTRX_Msk (0x1UL << USB_CHEP_VTRX_Pos) /*!< 0x00008000 */
#define USB_CHEP_VTRX \
    USB_CHEP_VTRX_Msk /*!< USB valid transaction received Mask */
#define USB_EP_VTRX \
    USB_CHEP_VTRX_Msk /*!< USB Endpoint valid transaction received Mask */
#define USB_CH_VTRX \
    USB_CHEP_VTRX_Msk /*!< USB valid Channel transaction received Mask */
#define USB_CHEP_DTOG_RX_Pos (14U)
#define USB_CHEP_DTOG_RX_Msk (0x1UL << USB_CHEP_DTOG_RX_Pos) /*!< 0x00004000 */
#define USB_CHEP_DTOG_RX \
    USB_CHEP_DTOG_RX_Msk /*!< Data Toggle, for reception transfers Mask */
#define USB_EP_DTOG_RX \
    USB_CHEP_DTOG_RX_Msk /*!< EP Data Toggle, for reception transfers Mask */
#define USB_CH_DTOG_RX \
    USB_CHEP_DTOG_RX_Msk /*!< CH Data Toggle, for reception transfers Mask */
#define USB_CHEP_RX_STRX_Pos (12U)
#define USB_CHEP_RX_STRX_Msk (0x3UL << USB_CHEP_RX_STRX_Pos) /*!< 0x00003000 */
#define USB_CHEP_RX_STRX \
    USB_CHEP_RX_STRX_Msk /*!< Status bits, for reception transfers Mask */
#define USB_EP_RX_STRX \
    USB_CHEP_RX_STRX_Msk /*!< Status bits, for EP reception transfers Mask */
#define USB_CH_RX_STRX \
    USB_CHEP_RX_STRX_Msk /*!< Status bits, for CH reception transfers Mask */
#define USB_CHEP_SETUP_Pos (11U)
#define USB_CHEP_SETUP_Msk (0x1UL << USB_CHEP_SETUP_Pos) /*!< 0x00000800 */
#define USB_CHEP_SETUP \
    USB_CHEP_SETUP_Msk /*!< Setup transaction completed Mask */
#define USB_EP_SETUP \
    USB_CHEP_SETUP_Msk /*!< EP Setup transaction completed Mask */
#define USB_CH_SETUP \
    USB_CHEP_SETUP_Msk /*!< CH Setup transaction completed Mask */
#define USB_CHEP_UTYPE_Pos (9U)
#define USB_CHEP_UTYPE_Msk (0x3UL << USB_CHEP_UTYPE_Pos) /*!< 0x00000600 */
#define USB_CHEP_UTYPE USB_CHEP_UTYPE_Msk /*!< USB type of transaction Mask */
#define USB_EP_UTYPE USB_CHEP_UTYPE_Msk /*!< USB type of EP transaction Mask */
#define USB_CH_UTYPE USB_CHEP_UTYPE_Msk /*!< USB type of CH transaction Mask */
#define USB_CHEP_KIND_Pos (8U)
#define USB_CHEP_KIND_Msk (0x1UL << USB_CHEP_KIND_Pos) /*!< 0x00000100 */
#define USB_CHEP_KIND USB_CHEP_KIND_Msk /*!< EndPoint KIND Mask */
#define USB_EP_KIND USB_CHEP_KIND_Msk   /*!< EndPoint KIND Mask */
#define USB_CH_KIND USB_CHEP_KIND_Msk   /*!< Channel KIND Mask */
#define USB_CHEP_VTTX_Pos (7U)
#define USB_CHEP_VTTX_Msk (0x1UL << USB_CHEP_VTTX_Pos) /*!< 0x00000080 */
#define USB_CHEP_VTTX \
    USB_CHEP_VTTX_Msk /*!< Valid USB transaction transmitted Mask */
#define USB_EP_VTTX \
    USB_CHEP_VTTX_Msk /*!< USB Endpoint valid transaction transmitted Mask */
#define USB_CH_VTTX \
    USB_CHEP_VTTX_Msk /*!< USB valid Channel transaction transmitted Mask */
#define USB_CHEP_DTOG_TX_Pos (6U)
#define USB_CHEP_DTOG_TX_Msk (0x1UL << USB_CHEP_DTOG_TX_Pos) /*!< 0x00000040 */
#define USB_CHEP_DTOG_TX \
    USB_CHEP_DTOG_TX_Msk /*!< Data Toggle, for transmission transfers Mask */
#define USB_EP_DTOG_TX \
    USB_CHEP_DTOG_TX_Msk /*!< EP Data Toggle, for transmission transfers Mask */
#define USB_CH_DTOG_TX \
    USB_CHEP_DTOG_TX_Msk /*!< CH Data Toggle, for transmission transfers Mask */
#define USB_CHEP_TX_STTX_Pos (4U)
#define USB_CHEP_TX_STTX_Msk (0x3UL << USB_CHEP_TX_STTX_Pos) /*!< 0x00000030 */
#define USB_CHEP_TX_STTX \
    USB_CHEP_TX_STTX_Msk /*!< Status bits, for transmission transfers Mask */
#define USB_EP_TX_STTX \
    USB_CHEP_TX_STTX_Msk /*!< Status bits, for EP transmission transfers Mask */
#define USB_CH_TX_STTX \
    USB_CHEP_TX_STTX_Msk /*!< Status bits, for CH transmission transfers Mask */
#define USB_CHEP_ADDR_Pos (0U)
#define USB_CHEP_ADDR_Msk (0xFUL << USB_CHEP_ADDR_Pos) /*!< 0x0000000F */
#define USB_CHEP_ADDR USB_CHEP_ADDR_Msk /*!< Endpoint address Mask */

/* EndPoint Register MASK (no toggle fields) */
#define USB_CHEP_REG_MASK                                                 \
    (USB_CHEP_ERRRX | USB_CHEP_ERRTX | USB_CHEP_LSEP | USB_CHEP_DEVADDR | \
     USB_CHEP_VTRX | USB_CHEP_SETUP | USB_CHEP_UTYPE | USB_CHEP_KIND |    \
     USB_CHEP_VTTX | USB_CHEP_ADDR | USB_CHEP_NAK) /* 0x07FF8F8F */

#define USB_CHEP_TX_DTOGMASK (USB_CHEP_TX_STTX | USB_CHEP_REG_MASK)
#define USB_CHEP_RX_DTOGMASK (USB_CHEP_RX_STRX | USB_CHEP_REG_MASK)

#define USB_CHEP_TX_DTOG1 \
    (0x00000010UL) /*!< Channel/EndPoint TX Data Toggle bit1 */
#define USB_CHEP_TX_DTOG2 \
    (0x00000020UL) /*!< Channel/EndPoint TX Data Toggle bit2 */
#define USB_CHEP_RX_DTOG1 \
    (0x00001000UL) /*!< Channel/EndPoint RX Data Toggle bit1 */
#define USB_CHEP_RX_DTOG2 \
    (0x00002000UL) /*!< Channel/EndPoint RX Data Toggle bit1 */

/*!< EP_TYPE[1:0] Channel/EndPoint TYPE */
#define USB_EP_TYPE_MASK (0x00000600UL)   /*!< Channel/EndPoint TYPE Mask */
#define USB_EP_BULK (0x00000000UL)        /*!< Channel/EndPoint BULK */
#define USB_EP_CONTROL (0x00000200UL)     /*!< Channel/EndPoint CONTROL */
#define USB_EP_ISOCHRONOUS (0x00000400UL) /*!< Channel/EndPoint ISOCHRONOUS */
#define USB_EP_INTERRUPT (0x00000600UL)   /*!< Channel/EndPoint INTERRUPT */

#define USB_EP_T_MASK ((~USB_EP_UTYPE) & USB_CHEP_REG_MASK) /* =0x898F */
#define USB_CH_T_MASK ((~USB_CH_UTYPE) & USB_CHEP_REG_MASK) /* =0x898F */

#define USB_EP_KIND_MASK \
    ((~USB_EP_KIND) & USB_CHEP_REG_MASK) /*!< EP_KIND EndPoint KIND */
#define USB_CH_KIND_MASK \
    ((~USB_CH_KIND) & USB_CHEP_REG_MASK) /*!< EP_KIND EndPoint KIND */

/*!< STAT_TX[1:0] STATus for TX transfer */
#define USB_EP_TX_DIS (0x00000000UL)   /*!< EndPoint TX Disabled */
#define USB_EP_TX_STALL (0x00000010UL) /*!< EndPoint TX STALLed */
#define USB_EP_TX_NAK (0x00000020UL)   /*!< EndPoint TX NAKed */
#define USB_EP_TX_VALID (0x00000030UL) /*!< EndPoint TX VALID */

#define USB_CH_TX_DIS (0x00000000UL)   /*!< Channel TX Disabled */
#define USB_CH_TX_STALL (0x00000010UL) /*!< Channel TX STALLed */
#define USB_CH_TX_NAK (0x00000020UL)   /*!< Channel TX NAKed */
#define USB_CH_TX_VALID (0x00000030UL) /*!< Channel TX VALID */

#define USB_EP_TX_ACK_SBUF (0x00000000UL) /*!< ACK single buffer mode */
#define USB_EP_TX_ACK_DBUF (0x00000030UL) /*!< ACK Double buffer mode */

#define USB_CH_TX_ACK_SBUF (0x00000000UL) /*!< ACK single buffer mode */
#define USB_CH_TX_ACK_DBUF (0x00000030UL) /*!< ACK Double buffer mode */

/*!< STAT_RX[1:0] STATus for RX transfer */
#define USB_EP_RX_DIS (0x00000000UL)   /*!< EndPoint RX Disabled */
#define USB_EP_RX_STALL (0x00001000UL) /*!< EndPoint RX STALLed */
#define USB_EP_RX_NAK (0x00002000UL)   /*!< EndPoint RX NAKed */
#define USB_EP_RX_VALID (0x00003000UL) /*!< EndPoint RX VALID */

#define USB_EP_RX_ACK_SBUF (0x00000000UL) /*!< ACK single buffer mode */
#define USB_EP_RX_ACK_DBUF (0x00003000UL) /*!< ACK Double buffer mode */

#define USB_CH_RX_DIS (0x00000000UL)   /*!< EndPoint RX Disabled */
#define USB_CH_RX_STALL (0x00001000UL) /*!< EndPoint RX STALLed */
#define USB_CH_RX_NAK (0x00002000UL)   /*!< Channel RX NAKed */
#define USB_CH_RX_VALID (0x00003000UL) /*!< Channel RX VALID */

#define USB_CH_RX_ACK_SBUF (0x00000000UL) /*!< ACK single buffer mode */
#define USB_CH_RX_ACK_DBUF (0x00003000UL) /*!< ACK Double buffer mode */

/*! <used For Double Buffer Enable Disable */
#define USB_CHEP_DB_MSK (0xFFFF0F0FUL)

/*Buffer Descriptor Mask*/
#define USB_PMA_TXBD_ADDMSK (0xFFFF0000UL)
#define USB_PMA_TXBD_COUNTMSK (0x0000FFFFUL)
#define USB_PMA_RXBD_ADDMSK (0xFFFF0000UL)
#define USB_PMA_RXBD_COUNTMSK (0x03FFFFFFUL)

    /** @addtogroup STM32H5xx_Peripheral_Exported_macros
  * @{
  */

    /******************************* ADC Instances ********************************/

#define IS_ADC_ALL_INSTANCE(INSTANCE) (((INSTANCE) == ADC1_NS))

#define IS_ADC_MULTIMODE_MASTER_INSTANCE(INSTANCE) (((INSTANCE) == ADC1_NS))

#define IS_ADC_COMMON_INSTANCE(INSTANCE) (((INSTANCE) == ADC12_COMMON_NS))

/******************************* CRC Instances ********************************/
#define IS_CRC_ALL_INSTANCE(INSTANCE) (((INSTANCE) == CRC_NS))

/******************************* DAC Instances ********************************/
#define IS_DAC_ALL_INSTANCE(INSTANCE) (((INSTANCE) == DAC1_NS))

/******************************** DMA Instances *******************************/
#define IS_DMA_ALL_INSTANCE(INSTANCE)      \
    (((INSTANCE) == GPDMA1_Channel0_NS) || \
     ((INSTANCE) == GPDMA1_Channel1_NS) || \
     ((INSTANCE) == GPDMA1_Channel2_NS) || \
     ((INSTANCE) == GPDMA1_Channel3_NS) || \
     ((INSTANCE) == GPDMA1_Channel4_NS) || \
     ((INSTANCE) == GPDMA1_Channel5_NS) || \
     ((INSTANCE) == GPDMA1_Channel6_NS) || \
     ((INSTANCE) == GPDMA1_Channel7_NS) || \
     ((INSTANCE) == GPDMA2_Channel0_NS) || \
     ((INSTANCE) == GPDMA2_Channel1_NS) || \
     ((INSTANCE) == GPDMA2_Channel2_NS) || \
     ((INSTANCE) == GPDMA2_Channel3_NS) || \
     ((INSTANCE) == GPDMA2_Channel4_NS) || \
     ((INSTANCE) == GPDMA2_Channel5_NS) || \
     ((INSTANCE) == GPDMA2_Channel6_NS) || ((INSTANCE) == GPDMA2_Channel7_NS))

#define IS_GPDMA_INSTANCE(INSTANCE) IS_DMA_ALL_INSTANCE(INSTANCE)

#define IS_DMA_2D_ADDRESSING_INSTANCE(INSTANCE) \
    (((INSTANCE) == GPDMA1_Channel6_NS) ||      \
     ((INSTANCE) == GPDMA1_Channel7_NS) ||      \
     ((INSTANCE) == GPDMA2_Channel6_NS) || ((INSTANCE) == GPDMA2_Channel7_NS))

/****************************** RAMCFG Instances ********************************/
#define IS_RAMCFG_ALL_INSTANCE(INSTANCE)                                   \
    (((INSTANCE) == RAMCFG_SRAM1_NS) || ((INSTANCE) == RAMCFG_SRAM2_NS) || \
     ((INSTANCE) == RAMCFG_BKPRAM_NS))

/***************************** RAMCFG ECC Instances *****************************/
#define IS_RAMCFG_ECC_INSTANCE(INSTANCE) \
    (((INSTANCE) == RAMCFG_SRAM2_NS) || ((INSTANCE) == RAMCFG_BKPRAM_NS))

/************************ RAMCFG Write Protection Instances *********************/
#define IS_RAMCFG_WP_INSTANCE(INSTANCE) (((INSTANCE) == RAMCFG_SRAM2_NS))

/******************************* GPIO Instances *******************************/
#define IS_GPIO_ALL_INSTANCE(INSTANCE)                       \
    (((INSTANCE) == GPIOA_NS) || ((INSTANCE) == GPIOB_NS) || \
     ((INSTANCE) == GPIOC_NS) || ((INSTANCE) == GPIOD_NS) || \
     ((INSTANCE) == GPIOH_NS))

/******************************* DTS Instances *******************************/
#define IS_DTS_ALL_INSTANCE(__INSTANCE__) (((__INSTANCE__) == DTS_NS))

/******************************* GPIO AF Instances ****************************/
/* On H5, all GPIO Bank support AF */
#define IS_GPIO_AF_INSTANCE(INSTANCE) IS_GPIO_ALL_INSTANCE(INSTANCE)

/**************************** GPIO Lock Instances *****************************/
/* On H5, all GPIO Bank support the Lock mechanism */
#define IS_GPIO_LOCK_INSTANCE(INSTANCE) IS_GPIO_ALL_INSTANCE(INSTANCE)

/******************************** I2C Instances *******************************/
#define IS_I2C_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == I2C1_NS) || ((INSTANCE) == I2C2_NS))

/****************** I2C Instances : wakeup capability from stop modes *********/
#define IS_I2C_WAKEUP_FROMSTOP_INSTANCE(INSTANCE) IS_I2C_ALL_INSTANCE(INSTANCE)

/******************************** I3C Instances *******************************/
#define IS_I3C_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == I3C1_NS) || ((INSTANCE) == I3C2_NS))

/******************************* RNG Instances ********************************/
#define IS_RNG_ALL_INSTANCE(INSTANCE) (((INSTANCE) == RNG_NS))

/****************************** RTC Instances *********************************/
#define IS_RTC_ALL_INSTANCE(INSTANCE) (((INSTANCE) == RTC_NS))

/****************************** FDCAN Instances *******************************/
#define IS_FDCAN_ALL_INSTANCE(INSTANCE) (((INSTANCE) == FDCAN1_NS))

/****************************** SMBUS Instances *******************************/
#define IS_SMBUS_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == I2C1_NS) || ((INSTANCE) == I2C2_NS))

/******************************** SPI Instances *******************************/
#define IS_SPI_ALL_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == SPI1_NS) || ((INSTANCE) == SPI2_NS) || \
     ((INSTANCE) == SPI3_NS))

#define IS_SPI_LIMITED_INSTANCE(INSTANCE) ((INSTANCE) == NULL)

#define IS_SPI_FULL_INSTANCE(INSTANCE)                     \
    (((INSTANCE) == SPI1_NS) || ((INSTANCE) == SPI2_NS) || \
     ((INSTANCE) == SPI3_NS))

/****************** LPTIM Instances : All supported instances *****************/
#define IS_LPTIM_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/****************** LPTIM Instances : DMA supported instances *****************/
#define IS_LPTIM_DMA_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/************* LPTIM Instances : at least 1 capture/compare channel ***********/
#define IS_LPTIM_CC1_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/************* LPTIM Instances : at least 2 capture/compare channel ***********/
#define IS_LPTIM_CC2_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/****************** LPTIM Instances : supporting encoder interface **************/
#define IS_LPTIM_ENCODER_INTERFACE_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/****************** LPTIM Instances : supporting Input Capture **************/
#define IS_LPTIM_INPUT_CAPTURE_INSTANCE(INSTANCE) \
    (((INSTANCE) == LPTIM1_NS) || ((INSTANCE) == LPTIM2_NS))

/****************** TIM Instances : All supported instances *******************/
#define IS_TIM_INSTANCE(INSTANCE)                          \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS) || ((INSTANCE) == TIM6_NS) || \
     ((INSTANCE) == TIM7_NS))

/****************** TIM Instances : supporting 32 bits counter ****************/
#define IS_TIM_32B_COUNTER_INSTANCE(INSTANCE) (((INSTANCE) == TIM2_NS))

/****************** TIM Instances : supporting the break function *************/
#define IS_TIM_BREAK_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/************** TIM Instances : supporting Break source selection *************/
#define IS_TIM_BREAKSOURCE_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : supporting 2 break inputs *****************/
#define IS_TIM_BKIN2_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/************* TIM Instances : at least 1 capture/compare channel *************/
#define IS_TIM_CC1_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))
/************ TIM Instances : at least 2 capture/compare channels *************/
#define IS_TIM_CC2_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/************ TIM Instances : at least 3 capture/compare channels *************/
#define IS_TIM_CC3_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/************ TIM Instances : at least 4 capture/compare channels *************/
#define IS_TIM_CC4_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : at least 5 capture/compare channels *******/
#define IS_TIM_CC5_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : at least 6 capture/compare channels *******/
#define IS_TIM_CC6_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : DMA requests generation (TIMx_DIER.UDE) ***/
#define IS_TIM_DMA_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS) || ((INSTANCE) == TIM6_NS) || \
     ((INSTANCE) == TIM7_NS))

/************ TIM Instances : DMA requests generation (TIMx_DIER.CCxDE) *******/
#define IS_TIM_DMA_CC_INSTANCE(INSTANCE)                   \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/******************** TIM Instances : DMA burst feature ***********************/
#define IS_TIM_DMABURST_INSTANCE(INSTANCE)                 \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/******************* TIM Instances : output(s) available **********************/
#define IS_TIM_CCX_INSTANCE(INSTANCE, CHANNEL)                           \
    ((((INSTANCE) == TIM1_NS) &&                                         \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) ||   \
       ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4) ||   \
       ((CHANNEL) == TIM_CHANNEL_5) || ((CHANNEL) == TIM_CHANNEL_6))) || \
     (((INSTANCE) == TIM2_NS) &&                                         \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) ||   \
       ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))) || \
     (((INSTANCE) == TIM3_NS) &&                                         \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) ||   \
       ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))))

/****************** TIM Instances : supporting complementary output(s) ********/
#define IS_TIM_CCXN_INSTANCE(INSTANCE, CHANNEL)                        \
    ((((INSTANCE) == TIM1_NS) &&                                       \
      (((CHANNEL) == TIM_CHANNEL_1) || ((CHANNEL) == TIM_CHANNEL_2) || \
       ((CHANNEL) == TIM_CHANNEL_3) || ((CHANNEL) == TIM_CHANNEL_4))))

/****************** TIM Instances : supporting clock division *****************/
#define IS_TIM_CLOCK_DIVISION_INSTANCE(INSTANCE)           \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****** TIM Instances : supporting external clock mode 1 for ETRF input *******/
#define IS_TIM_CLOCKSOURCE_ETRMODE1_INSTANCE(INSTANCE)     \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****** TIM Instances : supporting external clock mode 2 for ETRF input *******/
#define IS_TIM_CLOCKSOURCE_ETRMODE2_INSTANCE(INSTANCE)     \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting external clock mode 1 for TIX inputs*/
#define IS_TIM_CLOCKSOURCE_TIX_INSTANCE(INSTANCE)          \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting internal trigger inputs(ITRX) *******/
#define IS_TIM_CLOCKSOURCE_ITRX_INSTANCE(INSTANCE)         \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting combined 3-phase PWM mode ******/
#define IS_TIM_COMBINED3PHASEPWM_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : supporting commutation event generation ***/
#define IS_TIM_COMMUTATION_EVENT_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : supporting counting mode selection ********/
#define IS_TIM_COUNTER_MODE_SELECT_INSTANCE(INSTANCE)      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting encoder interface **************/
#define IS_TIM_ENCODER_INTERFACE_INSTANCE(INSTANCE)        \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting Hall sensor interface **********/
#define IS_TIM_HALL_SENSOR_INTERFACE_INSTANCE(INSTANCE)    \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/**************** TIM Instances : external trigger input available ************/
#define IS_TIM_ETR_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/************* TIM Instances : supporting ETR source selection ***************/
#define IS_TIM_ETRSEL_INSTANCE(INSTANCE)                   \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****** TIM Instances : Master mode available (TIMx_CR2.MMS available )********/
#define IS_TIM_MASTER_INSTANCE(INSTANCE)                   \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS) || ((INSTANCE) == TIM6_NS) || \
     ((INSTANCE) == TIM7_NS))

/*********** TIM Instances : Slave mode available (TIMx_SMCR available )*******/
#define IS_TIM_SLAVE_INSTANCE(INSTANCE)                    \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting OCxREF clear *******************/
#define IS_TIM_OCXREF_CLEAR_INSTANCE(INSTANCE)             \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : remapping capability **********************/
#define IS_TIM_REMAP_INSTANCE(INSTANCE)                    \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : supporting repetition counter *************/
#define IS_TIM_REPETITION_COUNTER_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : supporting ADC triggering through TRGO2 ***/
#define IS_TIM_TRGO2_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/******************* TIM Instances : Timer input XOR function *****************/
#define IS_TIM_XOR_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/******************* TIM Instances : Timer input selection ********************/
#define IS_TIM_TISEL_INSTANCE(INSTANCE)                    \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS))

/****************** TIM Instances : Advanced timer instances *******************/
#define IS_TIM_ADVANCED_INSTANCE(INSTANCE) (((INSTANCE) == TIM1_NS))

/****************** TIM Instances : supporting synchronization ****************/
#define IS_TIM_SYNCHRO_INSTANCE(__INSTANCE__)              \
    (((INSTANCE) == TIM1_NS) || ((INSTANCE) == TIM2_NS) || \
     ((INSTANCE) == TIM3_NS) || ((INSTANCE) == TIM6_NS) || \
     ((INSTANCE) == TIM7_NS))

/******************** USART Instances : Synchronous mode **********************/
#define IS_USART_INSTANCE(INSTANCE)                            \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/******************** UART Instances : Asynchronous mode **********************/
#define IS_UART_INSTANCE(INSTANCE)                             \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/*********************** UART Instances : FIFO mode ***************************/
#define IS_UART_FIFO_INSTANCE(INSTANCE)                        \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS) || ((INSTANCE) == LPUART1_NS))

/*********************** UART Instances : SPI Slave mode **********************/
#define IS_UART_SPI_SLAVE_INSTANCE(INSTANCE)                   \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/******************************** I2S Instances *******************************/
#define IS_I2S_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == SPI1) || ((INSTANCE) == SPI2) || ((INSTANCE) == SPI3))

/****************** UART Instances : Auto Baud Rate detection ****************/
#define IS_USART_AUTOBAUDRATE_DETECTION_INSTANCE(INSTANCE)     \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/****************** UART Instances : Driver Enable *****************/
#define IS_UART_DRIVER_ENABLE_INSTANCE(INSTANCE)               \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS) || ((INSTANCE) == LPUART1_NS))

/******************** UART Instances : Half-Duplex mode **********************/
#define IS_UART_HALFDUPLEX_INSTANCE(INSTANCE)                  \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS) || ((INSTANCE) == LPUART1_NS))

/****************** UART Instances : Hardware Flow control ********************/
#define IS_UART_HWFLOW_INSTANCE(INSTANCE)                      \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS) || ((INSTANCE) == LPUART1_NS))
/******************** UART Instances : LIN mode **********************/
#define IS_UART_LIN_INSTANCE(INSTANCE)                         \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/******************** UART Instances : Wake-up from Stop mode **********************/
#define IS_UART_WAKEUP_FROMSTOP_INSTANCE(INSTANCE)             \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS) || ((INSTANCE) == LPUART1_NS))

/*********************** UART Instances : IRDA mode ***************************/
#define IS_IRDA_INSTANCE(INSTANCE)                             \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/********************* USART Instances : Smard card mode ***********************/
#define IS_SMARTCARD_INSTANCE(INSTANCE)                        \
    (((INSTANCE) == USART1_NS) || ((INSTANCE) == USART2_NS) || \
     ((INSTANCE) == USART3_NS))

/******************** LPUART Instance *****************************************/
#define IS_LPUART_INSTANCE(INSTANCE) (((INSTANCE) == LPUART1_NS))

/****************************** IWDG Instances ********************************/
#define IS_IWDG_ALL_INSTANCE(INSTANCE) (((INSTANCE) == IWDG_NS))

/****************************** WWDG Instances ********************************/
#define IS_WWDG_ALL_INSTANCE(INSTANCE) (((INSTANCE) == WWDG_NS))

/******************************* USB DRD FS HCD Instances *************************/
#define IS_HCD_ALL_INSTANCE(INSTANCE) ((INSTANCE) == USB_DRD_FS_NS)

/******************************* USB DRD FS PCD Instances *************************/
#define IS_PCD_ALL_INSTANCE(INSTANCE) ((INSTANCE) == USB_DRD_FS_NS)

/******************************** COMP Instances ******************************/
#define IS_COMP_ALL_INSTANCE(INSTANCE) ((INSTANCE) == COMP1)

/******************************** OPAMP Instances *****************************/
#define IS_OPAMP_ALL_INSTANCE(INSTANCE) ((INSTANCE) == OPAMP1)

    /** @} */ /* End of group STM32H5xx_Peripheral_Exported_macros */

    /** @} */ /* End of group STM32H503xx */

    /** @} */ /* End of group ST */

#ifdef __cplusplus
}
#endif

#endif /* STM32H503xx_H */
