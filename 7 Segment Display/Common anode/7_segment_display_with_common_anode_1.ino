int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(9, OUTPUT);

  // sabko OFF rakho initially (common anode => HIGH = OFF)
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(9, HIGH);
}

void displayDigit(int digit){
  // 1 = segment ON (logical), 0 = OFF
  byte numbers[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
  };

  // yahan pe invert kar rahe hain (common anode)
  digitalWrite(a, numbers[digit][0] ? LOW : HIGH);
  digitalWrite(b, numbers[digit][1] ? LOW : HIGH);
  digitalWrite(c, numbers[digit][2] ? LOW : HIGH);
  digitalWrite(d, numbers[digit][3] ? LOW : HIGH);
  digitalWrite(e, numbers[digit][4] ? LOW : HIGH);
  digitalWrite(f, numbers[digit][5] ? LOW : HIGH);
  digitalWrite(g, numbers[digit][6] ? LOW : HIGH);
}

void loop(){
  for(int i = 0; i <= 9; i++){
    displayDigit(i);
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
  }
}
