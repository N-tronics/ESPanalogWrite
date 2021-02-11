#include <ESPs.h>

#define GPIO 2
#define CHAN 0

void setup() {
    pinMode(GPIO, OUTPUT);
    espSetup(GPIO, CHAN);
}
void loop() {
    espAnalogWrite_DimLED(CHAN);
}
