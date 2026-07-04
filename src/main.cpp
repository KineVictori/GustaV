#include <Arduino.h>
#include "../lib/Motor/LowPassFilter.hpp"

int motor0LA = 13;
int motor0LB = 14;

int motor0RA = 22;
int motor0RB = 27;

int motor1LA = 18;
int motor1LB = 21;

int motor1RA = 16;
int motor1RB = 17;

void setup() {
    pinMode(motor0LA, OUTPUT);
    pinMode(motor0LB, OUTPUT);
    pinMode(motor0RA, OUTPUT);
    pinMode(motor0RB, OUTPUT);

    pinMode(motor1LA, OUTPUT);
    pinMode(motor1LB, OUTPUT);

    pinMode(motor1RA, OUTPUT);
    pinMode(motor1RB, OUTPUT);

    pinMode(2, OUTPUT);

    analogWrite(13, 0);
    analogWrite(14, 0);
    analogWrite(22, 0);
    analogWrite(27, 0);

    analogWrite(18, 0);
    analogWrite(21, 0);

    analogWrite(16, 0);
    analogWrite(17, 0);

    Serial.begin(9600);
    Serial.println("Hello World!");
}

LowPassFilter lpf;
LowPassFilter lpf1;

void setMotor(float voltage)
{
    // clamp
    if (voltage < -255) { voltage = -255; }
    else if (voltage > 255) { voltage = 255; }

    // hvis problem med float target, gjør om voltage til int her

    if (voltage > 0)
    {
        analogWrite(16, voltage);
        analogWrite(17, 0);
    }
    else
    {
        analogWrite(16, 0);
        analogWrite(17, abs(voltage));
    }
}

void loop() {

    float target = 127.0;
    float currValue = lpf.update(target);
    while (target != currValue)
    {
        setMotor(currValue);
        currValue = lpf.update(target);
        delay(23);
    }


    target = -127.0;
    currValue = lpf.update(target);
    while (target != currValue)
    {
        setMotor(currValue);
        currValue = lpf.update(target);
        delay(23);
    }

}