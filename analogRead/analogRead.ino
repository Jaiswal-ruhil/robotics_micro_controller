
void setup() {
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val=0;
  digitalWrite(2,HIGH);
  val = analogRead(A1); 
  delay(200);
  if( val < 7 )
    digitalWrite(4,HIGH);
  else 
    digitalWrite(4,LOW);
  Serial.println(val);
}
