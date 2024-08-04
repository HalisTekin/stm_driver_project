/*
 * GPIO.c
 *
 *  Created on: 3 Ağu 2024
 *      Author: TT
 */

#include "GPIO.h"

/*
 * @brief GPIO_Init configures the pin and port
 *
 * @param GPIOx = GPIO Port Base Address
 *
 * @param GPIO_InitTypeDef_t = User configure structures
 *
 * retval void
 *
 */
void GPIO_Init(GPIO_TypeDef_t *GPIOx, GPIO_InitTypeDef_t *GPIO_ConfigStruct)
{

	uint32_t position, fakePosition = 0, lastPosition = 0;

	for(position = 0; position < 16; position++)
	{
		fakePosition = (0x1U << position);
		lastPosition = fakePosition & GPIO_ConfigStruct->pinNumber;

		if(lastPosition == fakePosition)
		{
			/*Mode Config*/
			uint32_t tempValue = GPIOx->MODER;

			tempValue &= ~(0x3U << (position * 2));
			tempValue |= (GPIO_ConfigStruct->Mode << (position * 2));

			GPIOx->MODER = tempValue;

			if(GPIO_ConfigStruct->Mode == GPIO_MODE_OUTPUT || GPIO_ConfigStruct->Mode == GPIO_MODE_AF)
			{
				/*Output Type Config*/
				tempValue = GPIOx->OTYPER;
				tempValue &= ~(0x1 << position);
				tempValue |= (GPIO_ConfigStruct->Otype << position);

				GPIOx->OTYPER = tempValue;

				/*Output Speed Config*/
				tempValue = GPIOx->OSPEEDR;
				tempValue &= ~(0x3U << (position * 2));
				tempValue |= (GPIO_ConfigStruct->Speed << (position * 2));

				GPIOx->OSPEEDR = tempValue;
			}

			/*Push Pull Config*/
			tempValue = GPIOx->PUPDR;
			tempValue &= ~(0x3U << (position * 2));
			tempValue |= (GPIO_ConfigStruct->PuPd << (position * 2));

			GPIOx->PUPDR = tempValue;

		}
	}
}

/*
 * @brief GPIO_WritePin makes pin High or Low
 *
 * @param GPIOx = GPIO Port Base Address
 *
 * @param pinNumber = GPIO Pin Numbers 0 - 15
 *
 * @param pinState = GPIO_Pin_Set OR GPIO_Pin_Reset
 *
 * retval void
 *
 */
void GPIO_WritePin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber, GPIO_PinState_t pinState)
{

	if(GPIO_Pin_Set == pinState)
	{
		GPIOx->BSRR = pinNumber;
	}
	else
	{
		GPIOx->BSRR = (pinNumber << 16U);
	}
}

/*
 * @brief GPIO_ReadPin reads the pin of GPIOx port
 *
 * @param GPIOx = GPIO Port Base Address
 *
 * @param pinNumber = GPIO Pin Numbers 0 - 15
 *
 * retval GPIO_PinState_t
 *
 */
GPIO_PinState_t GPIO_ReadPin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber)
{
	GPIO_PinState_t result = GPIO_Pin_Reset;

	if((GPIOx->IDR & pinNumber) != GPIO_Pin_Reset)
	{
		result = 1;
	}

	return result;
}

/*
 * @brief GPIO_LockPin locks the pin of GPIOx port
 *
 * @param GPIOx = GPIO Port Base Address
 *
 * @param pinNumber = GPIO Pin Numbers 0 - 15
 *
 * retval void
 *
 */
void GPIO_LockPin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber)
{
	 uint32_t tempValue = (0x1U << 16) | pinNumber;

	 GPIOx->LCKR = tempValue;
	 GPIOx->LCKR = pinNumber;
	 GPIOx->LCKR = tempValue;

	 tempValue = GPIOx->LCKR;

}

/*
 * @brief GPIO_TogglePin toggles the pin of GPIOx port
 *
 * @param GPIOx = GPIO Port Base Address
 *
 * @param pinNumber = GPIO Pin Numbers 0 - 15
 *
 * retval void
 *
 */
void GPIO_TogglePin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber)
{
	uint32_t tempODRRegister= GPIOx->ODR; //0000 0000 0000 0000

	GPIOx->BSRR = ((tempODRRegister & pinNumber) << 16 |(~tempODRRegister & pinNumber));

}








