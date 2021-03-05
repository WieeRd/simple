#include "simple.h"

RGB::RGB(int r, int g, int b):
    R(r), G(g), B(b) {;}

void RGB::on() const {
    R.on();
    G.on();
    B.on();
}

void RGB::on(int r, int g, int b) const {
    R.on(r);
    G.on(g);
    B.on(b);
}

void RGB::off() const {
    R.off();
    G.off();
    B.off();
}

void RGB::pulse(int t) const {
    on();
    delay(t);
    off();
}

void RGB::pulse(int r, int g, int b, int t) const {
    on(r, g, b);
    delay(t);
    off();
}

