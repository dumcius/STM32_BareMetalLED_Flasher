/*
 ***************************************************************
 * @file           : main.c
 * @author         : Povilas Dumcius
 * @brief          : Bare Metal LED Flasher
 ***************************************************************
 */

#include "PD_CLK.h"
#include "PD_GPIO.h"

int main(void)
{

 	RCC->AHB1ENR |= (1 << 3);


 	while(1)
 	{
 		GPIOD->MODER |= (1 << 9);
 		for(uint32_t i = 0; i< 80000;i++);
 		GPIOD->MODER &= ~(1 << 9);
 		for(uint32_t i = 0; i< 80000;i++);
	}

	return 0;
}


