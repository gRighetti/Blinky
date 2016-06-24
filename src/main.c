/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include "delay.h"


#define BIT26 0x4000000   //13
#define BIT24 0x1000000   //12
#define BIT28 0x10000000   //14
#define BIT30 0x40000000  //15
#define BIT13 0x2000
#define BIT14 0x4000
#define BIT12 0x1000
#define BIT15 0x8000




void main(void) {
	// configuracion

	//Habilito el CLK  del bus GPIOD (habilita el bus del puerto D)
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER |= BIT26;
	GPIOD->MODER |= BIT30;
	GPIOD->MODER |= BIT28;
	GPIOD->MODER |= BIT24;

	while (1) {
		//Aplicacion
		//delay (1000);
		//GPIOD->ODR ^= BIT12; //green
		GPIOD->ODR ^= BIT13; //orange
		delay (6000);
		GPIOD->ODR ^= BIT13; //orange
		GPIOD->ODR ^= BIT14; // red
		delay (6000);
		GPIOD->ODR ^= BIT14; // red
		GPIOD->ODR ^= BIT15; // blue
		delay (6000);
		GPIOD->ODR ^= BIT15; // blue
		GPIOD->ODR ^= BIT12; //green
		delay (6000);
		GPIOD->ODR ^= BIT12; //green


	}
}



