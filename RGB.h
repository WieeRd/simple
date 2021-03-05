#ifndef RGB_H
#define RGB_H

#include "IOpin.h"

 // TODO: calibrated RGB maybe?
struct RGB {
    RGB(int r, int g, int b):
        R(r), G(g), B(b) {;}

    void on() {
        R.on();
        G.on();
        B.on();
    }

    void on(int r, int g, int b) {
        R.on(r);
        G.on(g);
        B.on(b);
    }

    void off() {
        R.off();
        G.off();
        B.off();
    }

    void pulse(int t) {
        on();
        delay(t);
        off();
    }

    void pulse(int r, int g, int b, int t) {
        on(r, g, b);
        delay(t);
        off();
    }

    const Opin R, G, B;
};

#endif
