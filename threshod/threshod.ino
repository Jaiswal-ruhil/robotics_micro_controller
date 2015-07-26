
#define red     10


void setup() {
  pinMode(red,OUTPUT);
  Serial.begin(9600);
}

void glow(int l1, int time) {
  digitalWrite(l1,HIGH);
  delay(time);
  digitalWrite(l1,LOW);
  Serial.println(l1);
}

void loop() {
  int time =12;
  glow(red,time);
  delay(time);
}
