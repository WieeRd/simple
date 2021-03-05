#include "simple.h"

/* input pin */
Ipin::Ipin(int p): pin(p) {
    pinMode(pin, INPUT);
}

int Ipin::read() const {
    return digitalRead(pin);
}

int Ipin::aread() const {
    return analogRead(pin);
}

/* output pin */
Opin::Opin(int p): pin(p) {
    pinMode(pin, OUTPUT);
}

void Opin::on() const {
    digitalWrite(pin, HIGH);
}

void Opin::on(int i) const {
    analogWrite(pin, i);
}

void Opin::off() const {
    digitalWrite(pin, LOW);
}

void Opin::pulse(int t) const {
    on();
    delay(t);
    off();
}

