# simplelib
Collection of simple & useful arduino classes

### IOpin.h - general input, output pins
`#include "IOpin.h"`  
```c++
Ipin button(3);

button.pin; // 3
button.read(); // HIGH or LOW
button.aread(); // 0 ~ 1024
button.is_on(); // true or false
```

```c++
Opin led(4);

led.pin; // 4
led.on();
led.on(120); // 0~255
led.off();
```

### Sonar.h - for common ultrasonic sensors
`#include "Sonar.h"`
```c++
Sonar sensor(3, 4);

sensor.pulse(10); // send 10 microseconds long pulse
sensor.pulse();   // pulse length default set to 10

/* time it took for the pulse to return */
sensor.measure_raw(); // microseconds (unsigned long)
/* distance between sensor and object */
sensor.measure(); // cm (float)

sensor.trig.on();    // Sonar.trig is Opin
sensor.echo.is_on(); // Sonar.echo is Ipin
```
