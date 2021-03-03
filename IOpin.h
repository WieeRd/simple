#ifndef IOPIN_H
#define IOPIN_H

struct Ipin { // Input pin

    Ipin(const int p): pin(p) {
        pinMode(pin, INPUT);
    }

    int read() const {
        return digitalRead(pin);
    }

    int aread() const {
        return analogRead(pin);
    }

    bool is_on() const {
        return read()==HIGH;
    }

    const int pin;
};

struct Opin { // Output pin

    Opin(const int p): pin(p) {
        pinMode(pin, OUTPUT);
    }

    void on() const {
        digitalWrite(pin, HIGH);
    }

    void on(int i) const {
        analogWrite(pin, i);
    }

    void off() const {
        digitalWrite(pin, LOW);
    }

    const int pin;
};

#endif

