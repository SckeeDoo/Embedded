#ifndef _LM20_H_
#define _LM20_H
	
#include <stdio.h>
#include <stdint.h>
#include <stdio.h>
#include <avr/io.h>
	
	void LM20_Init(void);
	int LM20_GetTemp(void);
	int CelsiusToKelvin(int T);
	int CelsiusToFar (int T);
#endif