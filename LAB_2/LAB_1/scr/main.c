#include "uart_stdio.h"
#include "LM20.h"
#include "ADC.h"
#include "Button.h"
#include <avr/delay.h>

int count = 0;

void main(void) {
	
	int T = 0;
	uart_stdio_Init();
	LM20_Init();
	Button_Init();

	while(1) {
		T = LM20_GetTemp();
		if (Button1_Pressed) {
			T = CelsiusToKelvin();
		} else {
			if (Button2_Pressed) {
				T = CelsiusToFar();
			} else {
				LM20_GetTemp();
			}
		}
		
		
	}
}
