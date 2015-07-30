
#define MA1 5
#define MA2 6
#define EN1 7
#define MB1 10
#define MB2 9
#define EN2 11

#define LR 2
#define LL 3

void setup() {
  pinMode(MA1,OUTPUT);
  pinMode(MA2,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(LR,INPUT);  
  pinMode(MB1,OUTPUT);
  pinMode(MB2,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(LL,INPUT);  
}

void rotate(int pin1,int pin2,int en,int frqh,int frql) {
  analogWrite(pin1,frqh);
  analogWrite(pin2,frql);
  digitalWrite(en,HIGH);
}

int num = 0;

void loop() {
  num = digitalRead(LL) << 1;
  num |= digitalRead(LR);

  switch( num ) {
    case 2:
      rotate(MA2,MA1,EN1,180,0);
      rotate(MB1,MB2,EN1,240,0);
      break;
    case 1:
      rotate(MB2,MB1,EN2,180,0);
      rotate(MA1,MA2,EN2,240,0);
      break;
    case 3:
      rotate(MB1,MB2,EN2,0,0);
      rotate(MA1,MA2,EN2,0,0);
      break;
    case 0:
      rotate(MA1,MA2,EN2,240,0);
      rotate(MB1,MB2,EN1,240,0);
      break;
  }
}
