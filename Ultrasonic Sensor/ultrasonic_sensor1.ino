#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32, 16, 2);

const int trigPin = 9;
const int echoPin = 10;

long duration;
float distance_cm;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.display();
  
  
}

void loop()
{
  lcd.clear();
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance_cm = (duration * 0.034) / 2.0;
  
  //Serial.println(distance_cm);
  
  lcd.setCursor(0, 0);
  lcd.print("Distance =");
  delay(50);
  lcd.setCursor(0, 1);
  lcd.print(distance_cm);
  
  delay(500);
  
}