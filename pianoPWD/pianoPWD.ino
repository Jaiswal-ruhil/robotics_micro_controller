#define SA  3
#define RE  5
#define GA  6
#define MA  9
//#define PA  6
//#define DHA 7
//#define NE  8
//#define SA  9

void setup() {
  pinMode(SA,OUTPUT);
  pinMode(RE,OUTPUT);
  pinMode(GA,OUTPUT);
  pinMode(MA,OUTPUT);
}

void loop() {
  analogWrite(SA,100);
  analogWrite(RE,120);
  analogWrite(GA,140);
  analogWrite(MA,160);
//  analogWrite(SA,30);
//  analogWrite(SA,30);  
}
