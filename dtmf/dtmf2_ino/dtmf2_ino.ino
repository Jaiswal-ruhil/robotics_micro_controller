#define D0 5
#define D1 4
#define D2 3
#define D3 2


void setup() {
  pinMode(D0,INPUT);
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);
  Serial.begin(9600);
}


void loop() {
  int val1,val2,val3,val0;
  val3 = digitalRead(D3);
  val2 = digitalRead(D2);
  val1 = digitalRead(D1);
  val0 = digitalRead(D0);
  Serial.print(val0+" "+val1+" "+val2+" "+val3);
}
