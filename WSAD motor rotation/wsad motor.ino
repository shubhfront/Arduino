int m1 = 2;
int m2 = 3;
int m3 = 4;
int m4 = 5;

String comm = "enter W, S, A, D, X";
char op;

void setup()
{
  Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void loop()
{
  
  Serial.println(comm);
  while(Serial.available() == 0){
    
  }
  op = Serial.read();
  
  if (op == 'W' || op == 'w')
  {
    Serial.println("Moving Foreward");
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  else if (op == 'A' || op == 'a')
  {
    Serial.println("Moving Left");
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  else if (op == 'D' || op == 'd')
  {
    Serial.println("Moving Right");
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
  else if (op == 'S' || op == 's')
  {
    Serial.println("Moving Foreward");
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
  }
  else if (op == 'X' || op == 'x')
  {
    Serial.println("STOP");
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
  else
  {
    Serial.println("Entered Wrong");
  }
  delay(10000);
}
