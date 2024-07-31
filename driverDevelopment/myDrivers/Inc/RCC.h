/*
 * RCC.h
 *
 *  Created on: 29 Tem 2024
 *      Author: TT
 */

#ifndef INC_RCC_H_
#define INC_RCC_H_

#include "stm32f303xx.h"


#define RCC_GPIOA_CLK_ENABLE()					do{	uint32_t tempValue = 0;									\
													SET_BIT(RCC->AHBENR, RCC_AHBENR_GPIOAEN);				\
													tempValue = READ_BIT(RCC->AHBENR,RCC_AHBENR_GPIOAEN);	\
													UNUSED(tempValue);										\
													}while(0)



#endif /* INC_RCC_H_ */
