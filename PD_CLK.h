/*
 * PD_CLK.h
 *
 *  Created on: Oct 11, 2021
 *      Author: Povilas Dumcius
 */
#ifndef PD_CLK_H_
#define PD_CLK_H_

#include<stddef.h>
#include<stdint.h>

//Base address of RCC
#define RCC_BASEADDR                    	 	0x40023800
#define RCC 									((RCC_RegDef_t*)RCC_BASEADDR)

//interior of the RCC register
typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t PLLCFGR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  uint32_t      RESERVED0;
  volatile uint32_t APB1RSTR;
  volatile uint32_t APB2RSTR;
  uint32_t      RESERVED1[2];
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  uint32_t      RESERVED2;
  volatile uint32_t APB1ENR;
  volatile uint32_t APB2ENR;
  uint32_t      RESERVED3[2];
  volatile uint32_t AHB1LPENR;
  volatile uint32_t AHB2LPENR;
  volatile uint32_t AHB3LPENR;
  uint32_t      RESERVED4;
  volatile uint32_t APB1LPENR;
  volatile uint32_t APB2LPENR;
  uint32_t      RESERVED5[2];
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  uint32_t      RESERVED6[2];
  volatile uint32_t SSCGR;
  volatile uint32_t PLLI2SCFGR;
  volatile uint32_t PLLSAICFGR;
  volatile uint32_t DCKCFGR;
} RCC_RegDef_t;



#endif /* PD_CLK_H_ */
