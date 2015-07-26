#define buzzer 10
#define ldr    A4
#define LIGHT 120

void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}

void loop() {
 int val = analogRead(ldr);
 Serial.println(val);
 analogWrite(buzzer, (( val <= LIGHT )? 224:0));
}
