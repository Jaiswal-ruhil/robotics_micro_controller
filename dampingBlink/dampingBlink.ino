
void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

static int time = 3000;

void loop() {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(time);
  time-=200;
  if( time < 0 ) time = 3000;
  Serial.println(time);
}
