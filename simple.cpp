#include <Arduino.h>
#include "simple.h"
// "simple" library by WieeRd (v1.0)
// https://github.com/WieeRd/simple

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

/* ultrasonic sensor */
Sonar::Sonar(int t, int e):
    trig(t), echo(e) {;}

unsigned long Sonar::measure_raw() const {
    trig.on();
    delayMicroseconds(10);
    trig.off();
    auto dt = pulseIn(echo.pin, HIGH); 
    return dt;
}

float Sonar::measure() const {
    auto dt = measure_raw();
    float distance = float(dt) * 340 / 10000 / 2;  
    return distance;
}

/* RGB led */
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

