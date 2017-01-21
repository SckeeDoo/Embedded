/*
Custom char set for alphanumeric LCD Module
Created by eXtreme Electronics
LCD Custom Char Builder!

*/

#ifndef __CUSTOMCHAR_H
#define __CUSTOMCHAR_H

unsigned char __cgram[]=
{
	0x00, 0x00, 0x04, 0x0E, 0x04, 0x00, 0x00, 0x00, //Char0 Small Dot for NW Search Display
	0x00, 0x04, 0x0E, 0x1F, 0x0E, 0x04, 0x00, 0x00, //Char1 Big Dot for NW Search Display
	0x04, 0x04, 0x04, 0x04, 0x1F, 0x0E, 0x04, 0x00, //Char2 Down Arrow indicate incoming msg
	0x0A, 0x15, 0x11, 0x0A, 0x04, 0x00, 0x00, 0x00, //Char3 Filled Heart
	0x0A, 0x1F, 0x1F, 0x0E, 0x04, 0x00, 0x00, 0x00, //Char4 Empty Heart
	0x0C, 0x12, 0x12, 0x0C, 0x00, 0x00, 0x00, 0x00, //Char5 Degree Symbol
	0x04, 0x0E, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x00, //Char6 Up arrow
	0x01, 0x02, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00, //Char7 Tick mark
};
#endif

