void setup() {
  pinMode(7,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if ( digitalRead(7) == HIGH)
    Serial.println("high");
  else if( digitalRead(7) == LOW )
    Serial.println("low");
}
