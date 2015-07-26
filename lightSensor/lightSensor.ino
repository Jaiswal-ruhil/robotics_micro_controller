
#define LD1 6

void setup() {
  pinMode(LD1,INPUT);
}

void loop() {
  digitalWrite(13, ((digitalRead(LD1) == HIGH )? HIGH:LOW));
}
