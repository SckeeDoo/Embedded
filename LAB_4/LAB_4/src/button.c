/*
 * button.c
 *
 * Created: 10/4/2016 11:39:02 PM
 *  Author: schid
 */ 
#include "button.h"


void initButtonOne() {
	DDRD &= ~(1 << PORTD0) ;
}

void initButtonTwo() {
	DDRD &= ~(1 << PORTD1) ;
}

int isButtonOnePressed() {
	return PIND & (1<<PORTD0);
}

int isButtonTwoPressed() {
	return PIND & (1<<PORTD1);
}
