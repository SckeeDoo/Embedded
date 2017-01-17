/*
 * button.c
 *
 * Created: 10/4/2016 11:39:02 PM
 *  Author: schid
 */ 
#include "button.h"


void initButtonOne() {
	DDRA &= ~(1 << PORTC0) ;
}

void initButtonTwo() {
	DDRA &= ~(1 << PORTC1) ;
}

int isButtonOnePressed() {
	return PINA & (1<<PORTC0);
}

int isButtonTwoPressed() {
	return PINC & (1<<PORTC1);
}
