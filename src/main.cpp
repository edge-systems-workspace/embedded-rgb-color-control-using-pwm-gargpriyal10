#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author PRIYAL GARG
 * @date 2026-02-19
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int red = 1;
int blue= 3;
int green =2;

void setup() {

    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);
}

void loop() {
    // ANALOG
    analogWrite(red,14);
    analogWrite(green,118);
    analogWrite(blue,173);
    delay(1000);



    analogWrite(red,173);
    analogWrite(green,160);
    analogWrite(blue,14);
    delay(1000);



    analogWrite(red,173);
    analogWrite(green,14);
    analogWrite(blue,25);
    delay(1000);





    analogWrite(red,17);
    analogWrite(green,14);
    analogWrite(blue,173);
    delay(1000);


    analogWrite(red,14);
    analogWrite(green,173);
    analogWrite(blue,94);
    delay(1000);

    // DIGITAL
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(1000);


    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    delay(1000);

    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(1000);

    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
    delay(1000);

    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
    delay(1000);
}
