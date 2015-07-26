
#define red     10
#define yellow  9
#define green   8

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
  glow(red,200);
  delay(100);
  glow(red,200);
  delay(533);
}
