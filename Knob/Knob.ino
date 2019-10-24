#include <Servo.h>

Servo myservo;
Servo myservo2;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo2.attach(3);
}

void loop() {
  servo1();
  servo2();
}
