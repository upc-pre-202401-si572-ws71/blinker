#ifndef blinker_h
#define blinker_h
class Blinker {
  public:
    Blinker();
    void setupLed();
    void turnLedOn();
    void turnLedOff();
    void makePause();
};
#endif