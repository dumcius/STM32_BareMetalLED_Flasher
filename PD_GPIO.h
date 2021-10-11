/*
 * PD_GPIO.h
 *
 *  Created on: Oct 12, 2021
 *      Author: Povilas Dumcius
 */

#ifndef PD_GPIO_H_
#define PD_GPIO_H_



#define GPIOD_BASEADDR		0x40020c00
#define GPIOD				((GPIO_RegDef_t*)GPIOD_BASEADDR)


typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];
}GPIO_RegDef_t;


#endif /* PD_GPIO_H_ */
