/*
Adds analogWrite() of Atmel AVR boards to ESP boards plus some more functions
Created by Nischay Bharadwaj
Private library
*/

#include "ESPs.h"
#include "Arduino.h"

int res;

void espSetup(int gpio, int chan, int resol, int freq) {
	res = pow(2, resol);
	ledcSetup(chan, freq, resol);
	ledcAttachPin(gpio, chan);
}

void espAnalogWrite(int chan, int duty) {
	ledcWrite(chan, duty);
}

void espAnalogWrite_DimLED(int chan, int del) {
	int i;
	for (i = 0; i < res; ++i) {
		espAnalogWrite(chan, i);
		delay(del);
	}
	delay(100);
	for (i = res - 1; i > 0; --i) {
		espAnalogWrite(chan, i);
		delay(del);
	}
	delay(100);
}
