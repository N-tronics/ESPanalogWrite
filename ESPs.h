/*
Adds analogWrite() of Atmel AVR boards to ESP boards plus some more functions
Created by Nischay Bharadwaj
Private library
*/

#ifndef ESPs_h
#define ESPs_h
#include "Arduino.h"

class ESPs {
	private:
		int res;
		
	public:
		ESPs();
		void espSetup(int gpio, int chan, int resol = 8, int freq = 1000);
		void espAnalogWrite(int chan, int duty);
		void espAnalogWrite_DimLED(int chan, int del = 10);
		
	#endif
};
