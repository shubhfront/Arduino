#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32, 16, 2);

const int sensorPin = A0;
float temperature;

void setup() 
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.display();
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() 
{
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  lcd.clear();
  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);
  temperature = voltage * 100.0;
  
  lcd.setCursor(0, 0);
  lcd.print("Temperature");
  delay(50);
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  
  if (temperature > 100)
  {
    digitalWrite(6, HIGH);
  }
  else
  {
    digitalWrite(5, HIGH);
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
