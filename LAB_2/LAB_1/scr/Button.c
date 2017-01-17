/*
 * button.c
 *
 * Created: 10/4/2016 11:39:02 PM
 *  Author: schid
 */ 
#include "button.h"


#include "button.h"

void init() {
	DDRA &= ~(1 << PORTC5) ;
}

int isPressed() {
	return PINC & (1<<PORTC5);
}