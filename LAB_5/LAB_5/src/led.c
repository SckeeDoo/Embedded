/*
 * led.c
 *
 *  Created on: Jan 21, 2017
 *      Author: Schidu Vasile
 */

#include "led.h"
#include <stdint.h>
#define MAX 5


void init_led() {
	DDRA |= 0xFF;
}

void turn_on(uint32_t pin) {
	PORTA |= pin;
}

void turn_off(uint32_t pin) {
	PORTA &= pin;
}

void toggle_led(uint32_t pin) {
	 PORTA ^= (1 << pin);
}

