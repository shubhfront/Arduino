#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32, 16, 2);

String name;
String msg = "What color LED";
String msg2 = "you want to glow?";
String msg3 = "GLOWING";

int redPin = 11;
int greenPin = 8;
int bluePin = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.display();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print(msg);
  Serial.print(msg);
  lcd.setCursor(0,1);
  lcd.print(msg2);
  while (Serial.available() == 0)
  {
    
  }
  
  name = Serial.readString();
  lcd.clear();
  
  if (name == "red")
  {
    digitalWrite(redPin, HIGH);
    lcd.print("RED");
    delay(1000);
    digitalWrite(redPin, LOW);
  }
  else if (name == "green")
  {
    digitalWrite(greenPin, HIGH);
    lcd.print("GREEN");
    delay(1000);
    digitalWrite(greenPin, LOW);
    
    
  }
  else if (name == "blue")
  {
    digitalWrite(bluePin, HIGH);
    lcd.print("BLUE");
    delay(1000);
    digitalWrite(bluePin, LOW); 
  }
  else
  {
    lcd.print("No color");
    lcd.setCursor(0,1);
    lcd.print("available");
    delay(500);
  }
  lcd.clear();
  
}
