#include "ADC.h"

void ADC_Init() {
	ADCSR = (1 << ADEN);
	ADCSR = (1 << ADCS);
	ADCSR = (0 << ADIE);
	ADCSR = (0 << ADIF);
	ADCSR = (0 << ADIE);
	ADCSR = (1 << ADPS0);
	ADCSR = (1 << ADPS1);
	ADCSR = (0 << ADPS2);
	
}