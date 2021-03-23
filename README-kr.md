# Simple
간단하고 유용한 아두이노 클래스 모음집입니다.  
1. 최신 [release](https://github.com/WieeRd/simple/releases)에서 simple.zip을 다운받는다
2. 아두이노 IDE: 스케치 -> 라이브러리 포함하기 -> .ZIP 라이브러리 추가
3. 본인 코드(.ino 파일) 제일 윗줄에 `#include <simple.h>` 추가하기

아니면 그냥 `simple.h`와 `simple.cpp` 파일을 프로젝트 폴더에 집어넣고  
코드 제일 윗줄에 `#include "simple.h"`를 추가하시면 됩니다. (<> 말고 "" 쓰세요)

### Ipin/Opin - 입출력 핀 제어
```c++
Ipin button(3);

button.pin; // 3 (초기화 할 때 사용한 핀 번호)
button.read(); // HIGH 또는 LOW 리턴
button.aread(); // 0 ~ 1024 리턴
```

```c++
Opin led(4);

led.pin; // 4
led.on();
led.on(120); // 밝기조정 0~255 (PWM 핀만 가능)
led.off();

led.pulse(500); // 밀리초 단위
```

### Sonar - 초음파 센서 제어
```c++
Sonar S(3, 4);

/* 초음파 펄스가 돌아올때까지 걸린 시간 */
S.measure_raw(); // 밀리초 단위 (unsigned long)
/* 물체까지의 거리 */
S.measure(); // 센티미터 단위 (float)

/* trig, echo를 Ipin/Opin 객체로 수동제어 */
S.trig.pulse(100);
S.echo.read();
```

### RGB - 3색 LED 한꺼번에 제어
```c++
RGB led(3,4,5);

led.on();
led.on(0, 128, 255); // r, g, b
led.off();

led.pulse(500); // 500밀리초동안 켜졌다 꺼지기
led.pulse(0, 128, 255, 500); // r, g, b, 딜레이

/* 각각의 led를 Opin 객체로 개별 제어 */
led.R.pin;
led.G.on();
led.B.off();
```
