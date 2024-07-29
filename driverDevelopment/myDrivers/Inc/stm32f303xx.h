/*
 * stm32f303xx.h
 *
 *  Created on: Jul 15, 2024
 *      Author: pvs.halis.tekin
 */

#ifndef INC_STM32F303XX_H_
#define INC_STM32F303XX_H_

#include <stdint.h>

#define __IO volatile

/*
 *  Memory Base Address
 */

#define FLASH_BASE_ADDR			(0x08000000UL) /* Flash Base Address (up to 512KB)					*/
#define SRAM_BASE_ADDR			(0x20000000UL) /* SRAM Base Address 64 KB 							*/
#define CCM_SRAM_BASE_ADDR		(0x10000000UL) /* CCM(core coupled memory) SRAM Base Address 4 KB 	*/


/*
 *  Peripheral Base Address
 */

#define PERIPH_BASE_ADDR 		(0x40000000UL)						/* Base Address for All Peripherals */

#define APB1_BASE_ADDR			PERIPH_BASE_ADDR 					/* APB1 Bus Domain Base Address 	*/
#define APB2_BASE_ADDR			(PERIPH_BASE_ADDR + 0x00010000UL)	/* APB2 Bus Domain Base Address 	*/
#define AHB1_BASE_ADDR			(PERIPH_BASE_ADDR + 0x00020000UL)	/* AHB1 Bus Domain Base Address 	*/
#define AHB2_BASE_ADDR			(PERIPH_BASE_ADDR + 0x08000000UL)	/* AHB2 Bus Domain Base Address 	*/
#define AHB3_BASE_ADDR			(PERIPH_BASE_ADDR + 0x10000000UL)	/* AHB3 Bus Domain Base Address 	*/
#define AHB4_BASE_ADDR			(PERIPH_BASE_ADDR + 0x20000000UL)	/* AHB4 Bus Domain Base Address 	*/

/*
 *  APB1 Peripheral Base Address
 */

#define TIM2_BASE_ADDR			APB1_BASE_ADDR						/* Timer 2 Base Address */
#define TIM3_BASE_ADDR			(APB1_BASE_ADDR + 0x00000400UL)		/* Timer 3 Base Address */
#define TIM4_BASE_ADDR			(APB1_BASE_ADDR + 0x00000800UL)		/* Timer 4 Base Address */
#define TIM6_BASE_ADDR			(APB1_BASE_ADDR + 0x00001000UL)		/* Timer 6 Base Address */
#define TIM7_BASE_ADDR			(APB1_BASE_ADDR + 0x00001400UL)		/* Timer 7 Base Address */
#define RTC_BASE_ADDR			(APB1_BASE_ADDR + 0x00002800UL)		/* RTC Base Address 	*/
#define WWDG_BASE_ADDR			(APB1_BASE_ADDR + 0x00002C00UL)		/* WWDG Base Address 	*/
#define IWDG_BASE_ADDR			(APB1_BASE_ADDR + 0x00003000UL)		/* IWDG Base Address 	*/
#define I2S2EXT_BASE_ADDR		(APB1_BASE_ADDR + 0x00003400UL)		/* I2S2EXT Base Address */
#define SPI2_BASE_ADDR			(APB1_BASE_ADDR + 0x00003800UL)		/* SPI 2 Base Address 	*/
#define SPI3_BASE_ADDR			(APB1_BASE_ADDR + 0x00003C00UL)		/* SPI 3 Base Address 	*/
#define I2S3EXT_BASE_ADDR		(APB1_BASE_ADDR + 0x00004000UL)		/* I2S3EXT Base Address */
#define USART2_BASE_ADDR		(APB1_BASE_ADDR + 0x00004400UL)		/* USART 2 Base Address */
#define USART3_BASE_ADDR		(APB1_BASE_ADDR + 0x00004800UL)		/* USART 3 Base Address */
#define UART4_BASE_ADDR			(APB1_BASE_ADDR + 0x00004C00UL)		/* UART 4 Base Address 	*/
#define UART5_BASE_ADDR			(APB1_BASE_ADDR + 0x00005000UL)		/* UART 5 Base Address 	*/
#define I2C1_BASE_ADDR			(APB1_BASE_ADDR + 0x00005400UL)		/* I2C 1 Base Address 	*/
#define I2C2_BASE_ADDR			(APB1_BASE_ADDR + 0x00005800UL)		/* I2C 2 Base Address 	*/
#define USBFS_BASE_ADDR			(APB1_BASE_ADDR + 0x00005C00UL)		/* USB FS Base Address 	*/
#define USB_BASE_ADDR			(APB1_BASE_ADDR + 0x00006000UL)		/* USB Base Address 	*/
#define BXCAN_BASE_ADDR			(APB1_BASE_ADDR + 0x00006400UL)		/* BXCAN Base Address 	*/
#define PWR_BASE_ADDR			(APB1_BASE_ADDR + 0x00007000UL)		/* PWR Base Address 	*/
#define DAC1_BASE_ADDR			(APB1_BASE_ADDR + 0x00007400UL)		/* DAC1 Base Address 	*/
#define I2C3_BASE_ADDR			(APB1_BASE_ADDR + 0x00007800UL)		/* I2C 3 Base Address 	*/


/*
 *  APB2 Peripheral Base Address
 */

#define SYSCFG_BASE_ADDR	APB2_BASE_ADDR							/* Syscfg Base Address 	*/
#define EXTI_BASE_ADDR		(APB2_BASE_ADDR + 0x00000400UL)			/* EXTI Base Address 	*/
#define TIM1_BASE_ADDR		(APB2_BASE_ADDR + 0x00002C00UL)			/* TIM 1 Base Address 	*/
#define SPI1_BASE_ADDR		(APB2_BASE_ADDR + 0x00003000UL)			/* SPI 1 Base Address 	*/
#define TIM8_BASE_ADDR		(APB2_BASE_ADDR + 0x00003400UL)			/* TIM 8 Base Address 	*/
#define USART1_BASE_ADDR	(APB2_BASE_ADDR + 0x00003800UL)			/* USART 1 Base Address */
#define SPI4_BASE_ADDR		(APB2_BASE_ADDR + 0x00003C00UL)			/* SPI 4 Base Address 	*/
#define TIM15_BASE_ADDR		(APB2_BASE_ADDR + 0x00004000UL)			/* TIM 15 Base Address 	*/
#define TIM16_BASE_ADDR		(APB2_BASE_ADDR + 0x00004400UL)			/* TIM 16 Base Address 	*/
#define TIM17_BASE_ADDR		(APB2_BASE_ADDR + 0x00004800UL)			/* TIM 17 Base Address 	*/
#define TIM20_BASE_ADDR		(APB2_BASE_ADDR + 0x00005000UL)			/* TIM 20 Base Address 	*/

/*
 *  AHB1 Peripheral Base Address
 */

#define DMA1_BASE_ADDR 		AHB1_BASE_ADDR							/* DMA 1 Base Address	*/
#define DMA2_BASE_ADDR 		(AHB1_BASE_ADDR	+ 0x00000400UL)			/* DMA 2 Base Address	*/
#define RCC_BASE_ADDR 		(AHB1_BASE_ADDR	+ 0x00001000UL)			/* RCC Base Address		*/
#define FLASHINT_BASE_ADDR 	(AHB1_BASE_ADDR	+ 0x00002000UL)			/* Flash Base Address	*/
#define CRC_BASE_ADDR 		(AHB1_BASE_ADDR	+ 0x00003000UL)			/* CRC Base Address		*/
#define TSC_BASE_ADDR 		(AHB1_BASE_ADDR	+ 0x00004000UL)			/* TSC Base Address		*/

/*
 *  AHB2 Peripheral Base Address
 */

#define GPIOA_BASE_ADDR 	AHB2_BASE_ADDR							/* GPIOA Base Address	*/
#define GPIOB_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00000400UL)			/* GPIOB Base Address	*/
#define GPIOC_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00000800UL)			/* GPIOC Base Address	*/
#define GPIOD_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00000C00UL)			/* GPIOD Base Address	*/
#define GPIOE_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00001000UL)			/* GPIOE Base Address	*/
#define GPIOF_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00001400UL)			/* GPIOF Base Address	*/
#define GPIOG_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00001800UL)			/* GPIOG Base Address	*/
#define GPIOH_BASE_ADDR 	(AHB2_BASE_ADDR	+ 0x00001C00UL)			/* GPIOH Base Address	*/


/*
 *  AHB3 Peripheral Base Address
 */

#define ADC1_BASE_ADDR 		AHB3_BASE_ADDR							/* ADC1 ADC2 Base Address	*/
#define ADC3_BASE_ADDR 		(AHB3_BASE_ADDR	+ 0x00000400UL)			/* ADC3 ADC4 Base Address	*/


/*
 *  Peripheral Structure Definitions
 */

typedef struct
{
	__IO uint32_t MODER; 		/*!< GPIO port mode register 					Address Offset = 0x0000 */
	__IO uint32_t OTYPER;		/*!< GPIO port output type register 			Address Offset = 0x0004 */
	__IO uint32_t OSPEEDR;		/*!< GPIO port output speed register 			Address Offset = 0x0008 */
	__IO uint32_t PUPDR;		/*!< GPIO port pull-up/pull-down register 		Address Offset = 0x000C */
	__IO uint32_t IDR;			/*!< GPIO port input data register 				Address Offset = 0x0010 */
	__IO uint32_t ODR;			/*!< GPIO port output data register 			Address Offset = 0x0014 */
	__IO uint32_t BSRR;			/*!< GPIO port bit set/reset register 			Address Offset = 0x0018 */
	__IO uint32_t LCKR;			/*!< GPIO port configuration lock register 		Address Offset = 0x001C */
	__IO uint32_t AFR[2];		/*!< GPIO alternate function low/high register 	Address Offset = 0x0020 */
	__IO uint32_t BRR;			/*!< GPIO port bit reset register 				Address Offset = 0x0028 */

}GPIO_TypeDef_t;

typedef struct
{
	__IO uint32_t CR;				/*!< Clock control register						Address Offset = 0x0000 */
	__IO uint32_t CFGR;				/*!< Clock configuration register				Address Offset = 0x0004 */
	__IO uint32_t CIR;				/*!< Clock interrupt register					Address Offset = 0x0008 */
	__IO uint32_t APB2RSTR;			/*!< APB2 peripheral reset register				Address Offset = 0x000C */
	__IO uint32_t APB1RSTR;			/*!< APB1 peripheral reset register				Address Offset = 0x0010 */
	__IO uint32_t AHBENR;			/*!< AHB peripheral clock enable register		Address Offset = 0x0014 */
	__IO uint32_t APB2ENR;			/*!< APB2 peripheral clock enable register		Address Offset = 0x0018 */
	__IO uint32_t APB1ENR;			/*!< APB1 peripheral clock enable register		Address Offset = 0x001C */
	__IO uint32_t BDCR;				/*!< RTC domain control register	            Address Offset = 0x0020 */
	__IO uint32_t CSR;				/*!< Control/status register		            Address Offset = 0x0024 */
	__IO uint32_t AHBRSTR;			/*!< AHB peripheral reset register	            Address Offset = 0x0028 */
	__IO uint32_t CFGR2;			/*!< Clock configuration register 2	            Address Offset = 0x002C */
	__IO uint32_t CFGR3;			/*!< Clock configuration register 3	            Address Offset = 0x0030 */

}RCC_TypeDef_t;

#define GPIOA				( (GPIO_TypeDef_t *)(GPIOA_BASE_ADDR) )
#define GPIOB				( (GPIO_TypeDef_t *)(GPIOB_BASE_ADDR) )
#define GPIOC				( (GPIO_TypeDef_t *)(GPIOC_BASE_ADDR) )
#define GPIOD				( (GPIO_TypeDef_t *)(GPIOD_BASE_ADDR) )
#define GPIOE				( (GPIO_TypeDef_t *)(GPIOE_BASE_ADDR) )
#define GPIOF				( (GPIO_TypeDef_t *)(GPIOF_BASE_ADDR) )
#define GPIOG				( (GPIO_TypeDef_t *)(GPIOG_BASE_ADDR) )
#define GPIOH				( (GPIO_TypeDef_t *)(GPIOH_BASE_ADDR) )

#define RCC					( (RCC_TypeDef_t *)(RCC_BASE_ADDR) )










#endif /* INC_STM32F303XX_H_ */
