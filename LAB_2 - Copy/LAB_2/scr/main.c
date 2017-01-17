/*
 * LAB3.c
 *
 * Created: 10/4/2016 11:14:51 PM
 *  Author: schid
 */ 

#include <avr/io.h>
#include "button.h"
#include "lm20.h"
#include "lcd.h"
#include <avr/delay.h>

int main() {
	
	init();
	initLed();
	
	while(1) {
		_delay_ms(100);
		if(isPressed()) {
			ledOn();
		} else {
			ledOff();
		}			
	}
	
	
	return 0;
}

