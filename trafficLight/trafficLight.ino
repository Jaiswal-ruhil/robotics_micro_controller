
#define red     10
#define yellow  9
#define green   8

#include "../header/led.h"

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
}

/*void glow(int l1, int time) {
  digitalWrite(l1,HIGH);
  delay(time);
  digitalWrite(l1,LOW);
  Serial.println(l1);
}*/

void loop() {
  glow(red,2000);
  glow(yellow,1000);
  glow(green,2000);
}
