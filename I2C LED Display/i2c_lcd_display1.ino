#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32, 16, 2);

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.display();
  lcd.setCursor(0, 0);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("hello World");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("I am shubham");
  delay(1000);
  lcd.clear();
}