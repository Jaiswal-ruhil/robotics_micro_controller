#define SA  2
#define RE  3
#define GA  4
#define MA  5
#define PA  6
#define DH  7
#define NE  8
#define sa  9
#define buzzer 13

void setup() {
  pinMode(SA,INPUT_PULLUP);
  pinMode(RE,INPUT_PULLUP);
  pinMode(GA,INPUT_PULLUP);
  pinMode(MA,INPUT_PULLUP);
  pinMode(PA,INPUT_PULLUP);
  pinMode(DH,INPUT_PULLUP);
  pinMode(NE,INPUT_PULLUP);
  pinMode(sa,INPUT_PULLUP);
}

bool test(int pin,int freq) {
  if ( digitalRead(pin) == LOW ) {
    analogWrite(buzzer,freq);
    return true;
  }
  return false;
}
void loop() {
  if( test(SA,100) );
  else if( test(RE,100) );
  else if( test(GA,100) );
  else if( test(MA,100) );
  else if( test(RE,100) );
  else if( test(RE,100) );
  else if( test(RE,100) );
  else analogWrite(buzzer,0);
}
