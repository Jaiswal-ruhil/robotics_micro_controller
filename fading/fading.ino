void setup() {
  pinMode(3,OUTPUT);
}

static int volt = 0,sign =1;

void loop() {
  analogWrite(3,volt);
  delay(10);
  volt += sign * 2;
  if(volt>=255) { sign = -1; volt = 255;}
  if(volt <=0 ) { sign = 1;  volt = 0; }
}
