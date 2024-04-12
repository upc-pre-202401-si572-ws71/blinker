#include "blinker.h"

void setup() {
  // put your setup code here, to run once:
  Blinker blinker;
  blinker.setupLed();  
}

void loop() {
  // put your main code here, to run repeatedly:
  Blinker blinker;
  blinker.turnLedOn();
  blinker.makePause();
  blinker.turnLedOff();
  blinker.makePause();
}

