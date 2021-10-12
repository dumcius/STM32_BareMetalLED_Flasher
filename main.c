/*
 ***************************************************************
 * @file           : main.c
 * @author         : Povilas Dumcius
 * @brief          : Bare Metal LED Flasher
 ***************************************************************
 */

//Import user created libraries
#include "PD_CLK.h"
#include "PD_GPIO.h"

int main(void)
{
	//Initialise Peripheral RCC, register AHB1ENR, Bit 4 Sets peripheral GPIOD clock active/inactive
	// RCC -> AHB1ENR -> GPIOD
	// Peripheral -> Bit registers -> Individual action
 	RCC->AHB1ENR |= (1 << 3);

 	//After "turning on" Peripheral GPIOD, we control its registers
 	//First we set the output mode by toggling a 01 in positions 8 and 7
	GPIOD->MODER |= (1 << 8);

	//Infinite loop
	while(1)
	{
		//Now we can control another GPIOD register -> ODR (output data register)
		//Setting a bit one to GPIOD ODR register 3 we disable a physical pin
		GPIOD->ODR |= (1 << 4);

		//Software Delay
		for(uint32_t i=0; i<80000; i++);

		//Setting a bit 0 to GPIOD ODR register 3 we disable a physical pin
		GPIOD->ODR &= ~(1 << 4);

		//Software Delay
		for(uint32_t i=0; i<80000; i++);
	}
	return 0;
}


