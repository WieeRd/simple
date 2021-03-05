#include "simple.h"

Sonar::Sonar(int t, int e):
    trig(t), echo(e) {;}

unsigned long Sonar::measure_raw() const {
    trig.on();
    delayMicroseconds(t);
    trig.off();
    delay = pulseIn(echo.pin, HIGH); 
    return delay;
}

float Sonar::measure() const {
    float delay = measure_raw();
    float distance = float(delay) * 340 / 10000 / 2;  
    return distance;
}

