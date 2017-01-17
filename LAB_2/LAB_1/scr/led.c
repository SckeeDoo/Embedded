/*
 * CProgram1.c
 *
 * Created: 17.01.2017 12:41:28
 *  Author: Schidu Vasile
 */ 
#include "led.h"

void initLed() {
	DDRA |= (1 << PORTA0);
}

void ledOn() {
	PORTA |= (1 << PORTA0); 
}

void ledOff() {
	PORTA &= ~(1 << PORTA0);
}