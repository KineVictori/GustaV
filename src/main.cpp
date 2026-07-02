#include <Arduino.h>
#include "../lib/Motor/LowPassFilter.hpp"

void setup() {
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(22, OUTPUT);
    pinMode(27, OUTPUT);

    pinMode(18, OUTPUT);
    pinMode(21, OUTPUT);

    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);

    pinMode(2, OUTPUT);

    analogWrite(13, 0);
    analogWrite(14, 0);
    analogWrite(22, 0);
    analogWrite(27, 0);

    analogWrite(18, 0);
    analogWrite(21, 0);

    analogWrite(16, 0);
    analogWrite(17, 0);

    LowPassFilter lpf;

    Serial.println(lpf.lowPassFilter(100.0));
}

void loop() {
    //digitalWrite(13, HIGH);
    //digitalWrite(14, LOW);
    analogWrite(13, 0);
    analogWrite(14, 0);
    analogWrite(22, 0);
    analogWrite(27, 0);
    analogWrite(18, 0);
    analogWrite(21, 0);
    analogWrite(16, 0);
    analogWrite(17, 127);
    digitalWrite(2, LOW);

    delay(1000);

    //digitalWrite(13, LOW);
    //digitalWrite(14, HIGH);
    analogWrite(13, 0);
    analogWrite(14, 0);
    analogWrite(22, 0);
    analogWrite(27, 0);
    analogWrite(18, 0);
    analogWrite(21, 0);
    analogWrite(16, 127);
    analogWrite(17, 0);
    digitalWrite(2, HIGH);

    delay(1000);
}