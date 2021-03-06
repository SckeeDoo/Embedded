// ********************************************************************************
// Includes
// ********************************************************************************
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


// ********************************************************************************
// Interrupt Routines
// ********************************************************************************

uint32_t i = 0;

// timer0 overflow
ISR(TIMER1_OVF_vect) {
    	turn_off(0);
	turn_off(1);
	turn_off(2);
	toggle_led(i);
	i++;
	
	if(i >= 2) {
		i = 0;
	}
}


int main( void ) {
    // Configure PORTA as output
    DDRA = 0xFF;
    PORTA = 0x00;
	
    //Enable Overflow Interrupt Enable for Timer 0 and Timer 1
    TIMSK=(1<<TOIE0) | (1<<TOIE1);
    // set timer0 counter initial value to 0
    TCNT1=0x00;

    // Prescaler = FCPU/1024
    TCCR1B |= (1 << CS01);
    // enable interrupts
    sei();
    while(1) {
	

    }
}
