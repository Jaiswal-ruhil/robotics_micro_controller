
#define red     10
#define yellow  9
#define green   8

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
}

static int i = 0;

void loop() {
  if( (1 & i) == 1 )  digitalWrite(red,HIGH);
  if( (2 & i) == 2 )  digitalWrite(yellow,HIGH);
  if( (4 & i) == 4 )  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  i++;
  delay(1000);
}
