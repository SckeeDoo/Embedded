#include "LM20.h"

void LM20_Init(void) {
	ADC_Init(void);
}

void LM20_GetTemp() {
	T = ADC_GetValue();
	T = ADC_ToVoltage();
	T = LM20_VoltageToTemp()
}