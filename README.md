# simplelib
Collection of useful arduino classes

### IOpin.h
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
