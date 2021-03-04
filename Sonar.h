#ifndef SONAR_H
#define SONAR_H

#include "IOpin.h"

struct Sonar {

    Sonar(int t, int e):
        trig(t), echo(e) {;}

    unsigned long measure_raw() const {
        trig.on();
        delayMicroseconds(t);
        trig.off();
        delay = pulseIn(echo.pin, HIGH); 
        return delay;
    }

    float measure() const {
        float delay = measure_raw();
        float distance = float(delay) * 340 / 10000 / 2;  
        return distance;
    }

    const Opin trig;
    const Ipin echo;
};

#endif
