#include <ESPs.h>

#define GPIO 2
#define CHAN 0

ESPs board;

void setup() {
  pinMode(GPIO, OUTPUT);
  Serial.begin(115200);
  board.espSetup(GPIO, CHAN);
}

void loop() {
  for (int i = 0; i < 256, ++i) {
    board.espAnalogWrite(CHAN, i);
    delay(10);
  }
  delay(100);
  for (int i = 255; i >= 0, --i) {
    board.espAnalogWrite(CHAN, i);
    delay(10);
  }
  delay(100);
}
