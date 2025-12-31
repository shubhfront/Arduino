int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;

void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void displayDigit(int digit){
  int numbers[10][7] = {
    {1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}
  };
  
  digitalWrite(a, numbers[digit][0] ? HIGH : LOW);
  digitalWrite(b, numbers[digit][1] ? HIGH : LOW);
  digitalWrite(c, numbers[digit][2] ? HIGH : LOW);
  digitalWrite(d, numbers[digit][3] ? HIGH : LOW);
  digitalWrite(e, numbers[digit][4] ? HIGH : LOW);
  digitalWrite(f, numbers[digit][5] ? HIGH : LOW);
  digitalWrite(g, numbers[digit][6] ? HIGH : LOW);
}

void loop(){
  for (int i=0; i<10; i++){
    displayDigit(i);
    digitalWrite(dp, HIGH);
    delay(100);
    digitalWrite(dp, LOW);
    delay(1000);
  }
}



