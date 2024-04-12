#include "blinker.h"
#include "Arduino.h"

Blinker::Blinker() {}

void Blinker::setupLed() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void Blinker::turnLedOn() {
  digitalWrite(LED_BUILTIN, HIGH);
}
void Blinker::turnLedOff() {
  digitalWrite(LED_BUILTIN, LOW);
}
void Blinker::makePause() {
  delay(1000);
}
