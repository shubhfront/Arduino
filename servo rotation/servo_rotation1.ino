#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup()
{
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  pinMode(8, OUTPUT);
}

void loop()
{
  servo1.write(45);
  delay(500);
  
  servo2.write(90);
  delay(500);
  
  servo3.write(135);
  delay(500);
  
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);
  
  servo1.write(0);
  delay(500);
  
  servo2.write(0);
  delay(500);
  
  servo3.write(0);
  delay(500);
  
}