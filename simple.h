#ifndef SIMPLE_H
#define SIMPLE_H
/* "simple" library by WieeRd       *
 * https://github.com/WieeRd/simple */

struct Ipin {
    Ipin(int p);

    int read() const;
    int aread() const;

    const int pin;
};

struct Opin {
    Opin(int p);

    void on() const;
    void on(int i) const;
    void off() const;
    void pulse(int t) const;

    const int pin;
};

struct Sonar {
    Sonar(int t, int e);

    unsigned long measure_raw() const;
    float measure() const;

    const Opin trig;
    const Ipin echo;
};

struct RGB {
    RGB(int r, int g, int b);

    void on() const;
    void on(int r, int g, int b) const;
    void off() const;
    void pulse(int t) const;
    void pulse(int r, int g, int b, int t) const;

    const Opin R, G, B;
};

#endif
