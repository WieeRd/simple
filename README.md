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
led.off();
led.on(120); // 0~255 (pwm pin only)
led.pulse(500); // unit: millisecond
```

### Sonar.h - for common ultrasonic sensors
`#include "Sonar.h"`
```c++
Sonar S(3, 4);

/* time it took for the pulse to return */
S.measure_raw(); // microseconds (unsigned long)
/* distance between S and object */
S.measure(); // cm (float)

S.trig.on();    // Sonar.trig is Opin object
S.echo.is_on(); // Sonar.echo is Ipin object
```
