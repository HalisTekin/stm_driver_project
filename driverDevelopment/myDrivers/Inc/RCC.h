/*
 * RCC.h
 *
 *  Created on: 29 Tem 2024
 *      Author: TT
 */

#ifndef INC_RCC_H_
#define INC_RCC_H_

#include "stm32f303xx.h"

/*
 * RCC AHB Peripherals Clock Control Macro Definitions
 */

#define RCC_GPIOA_CLK_ENABLE()					do{	uint32_t tempValue = 0;									\
													SET_BIT(RCC->AHBENR, RCC_AHBENR_GPIOAEN);				\
													tempValue = READ_BIT(RCC->AHBENR,RCC_AHBENR_GPIOAEN);	\
													UNUSED(tempValue);										\
													}while(0)

#define RCC_GPIOB_CLK_ENABLE()					do{ uint32_t tempValue = 0; 								\
													SET_BIT(RCC->AHBENR,RCC_AHBENR_GPIOBEN);				\
													tempValue = READ_BIT(RCC->AHBENR,RCC_AHBENR_GPIOBEN); 	\
													UNUSED(tempValue); 										\
												}while(0)

#define RCC_GPIOC_CLK_ENABLE()					do{ uint32_t tempValue = 0; 								\
													SET_BIT(RCC->AHBENR,RCC_AHBENR_GPIOCEN);				\
													tempValue = READ_BIT(RCC->AHBENR,RCC_AHBENR_GPIOCEN); 	\
													UNUSED(tempValue); 										\
												}while(0)

#define RCC_GPIOD_CLK_ENABLE()					do{ uint32_t tempValue = 0; 								\
													SET_BIT(RCC->AHBENR,RCC_AHBENR_GPIODEN);				\
													tempValue = READ_BIT(RCC->AHBENR,RCC_AHBENR_GPIODEN); 	\
													UNUSED(tempValue); 										\
												}while(0)


#define RCC_GPIOA_CLK_DISABLE()					CLEAR_BIT(RCC->AHBENR,RCC_AHBENR_GPIOAEN)
#define RCC_GPIOB_CLK_DISABLE()					CLEAR_BIT(RCC->AHBENR,RCC_AHBENR_GPIOBEN)
#define RCC_GPIOC_CLK_DISABLE()					CLEAR_BIT(RCC->AHBENR,RCC_AHBENR_GPIOCEN)
#define RCC_GPIOD_CLK_DISABLE()					CLEAR_BIT(RCC->AHBENR,RCC_AHBENR_GPIODEN)

#endif /* INC_RCC_H_ */
