#ifndef SONAR_H
#define SONAR_H

#include "IOpin.h"

struct Sonar {

    Sonar(int t, int e):
        trig(t), echo(e) {;}

    void pulse(int t=10) {
        trig.on();
        delayMicroseconds(t);
        trig.off();
    }

    unsigned long measure_raw() {
        pulse(10);
        delay = pulseIn(echo.pin, HIGH); 
        return delay;
    }

    float measure() {
        float delay = measure_raw();
        float distance = float(delay) * 340 / 10000 / 2;  
        return distance;
    }

    Opin trig;
    Ipin echo;
};

#endif