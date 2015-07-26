
#define MA1  
#define MA2
#define MB1
#define MB2
#define EN1
#define EN2

void setup() {
  pinMode(MA1,OUTPUT);
  pinMode(MA2,OUTPUT);
  pinMode(MB1,OUTPUT);
  pinMode(MB2,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
}

void rotate(int pin1, int pin2) {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
}

void loop() {
  rotate(MA1,MA2);
  delay(2000);
  rotate(MB1,MB2);
  delay(2000);
  rotate(MA2,MA1);
  delay(2000);
  rotate(MB1,MB2);
  delay(2000);
}

