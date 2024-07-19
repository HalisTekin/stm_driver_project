/*
 * stm32f303xx.h
 *
 *  Created on: Jul 15, 2024
 *      Author: pvs.halis.tekin
 */

#ifndef INC_STM32F303XX_H_
#define INC_STM32F303XX_H_

/*
 *  Memory Base Address
 */

#define FLASH_BASE_ADDR			(0x08000000UL) /* Flash Base Address (up to 512KB)					*/
#define SRAM_BASE_ADDR			(0x20000000UL) /* SRAM Base Address 12 KB 							*/
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



#endif /* INC_STM32F303XX_H_ */
