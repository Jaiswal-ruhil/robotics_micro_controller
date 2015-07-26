#define D0 A0
#define D1 A1
#define D2 A2
#define D3 A3


void setup() {
  pinMode(D0,INPUT);
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);
  Serial.begin(9600);
}

int readDtmfNum() {
  int num = 0;
  num = (digitalRead(D3));
  Serial.print(num);
  Serial.print("  ");
  
  num = (digitalRead(D2));
  Serial.print(num);
  Serial.print("  ");
  num = (analogRead(D1));
  Serial.print(num);
  Serial.print("  ");
  num = analogRead(D0);
  Serial.println(num);
  Serial.print("  ");

  return num;
}

void loop() {
  delay(500);
  Serial.println(readDtmfNum());
}
