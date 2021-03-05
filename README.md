# simple
Collection of simple & useful arduino classes  
Usage: Just put .h files in your project folder

### IOpin.h - general input, output pins
`#include "IOpin.h"`  
```c++
Ipin button(3);

button.pin; // 3
button.read(); // HIGH or LOW
button.aread(); // 0 ~ 1024
```

```c++
Opin led(4);

led.pin; // 4
led.on();
led.on(120); // pwm only: 0~255
led.off();

led.pulse(500); // millisecond
```

### Sonar.h - for common ultrasonic sensors
`#include "Sonar.h"`
```c++
Sonar S(3, 4);

/* time it took for the pulse to return */
S.measure_raw(); // microseconds (unsigned long)
/* distance between sensor and object */
S.measure(); // cm (float)

/* access trig, echo as IOpin object */
S.trig.pulse(100);
S.echo.read();
```

### RGB.h - control all 3 pins of RGB led at once
`#include "RGB.h"`
```c++
RGB led(3,4,5);

led.on();
led.on(0, 128, 255); // r, g, b
led.off();

led.pulse(500);
led.pulse(0, 128, 255, 500); // r, g, b, delay

/* access each led as Opin object */
led.R.pin;
led.G.on();
led.B.off();
```
