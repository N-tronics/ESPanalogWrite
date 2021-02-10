/*
Adds analogWrite() of Atmel AVR boards to ESP boards plus some more functions
Created by Nischay Bharadwaj
Private library
*/

#include "ESPs.h"
#include "Arduino.h"

ESPs::ESPs (){}

int res;

void ESPs::espSetup(int gpio, int chan, int resol, int freq) {
	res = pow(2, resol);
	ledcSetup(chan, freq, resol);
	ledcAttachPin(gpio, chan);
}

void ESPs::espAnalogWrite(int chan, int duty) {
	ledcWrite(chan, duty);
}

void ESPs::espAnalogWrite_DimLED(int chan, int del) {
	for (int i = 0; i < res; ++i) {
		espAnalogWrite(chan, i);
		Serial.println(i);
		delay(del);
	}
	delay(100);
	for (int i = res - 1; i > 0; --i) {
		espAnalogWrite(chan, i);
		Serial.println(i);
		delay(del);
	}
	delay(100);
}
