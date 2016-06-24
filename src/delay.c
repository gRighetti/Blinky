/*
 * delay.c
 *
 *  Created on: 24/06/2016
 *      Author: GUIDO
 */
#include "delay.h"
#include <stdint.h>

void delay(uint16_t delay) {
	uint8_t i;
	while (delay-- > 0) {
		for (i = 100; i > 0; i--)
			asm("nop");
	}
}
