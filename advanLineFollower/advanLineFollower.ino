#define motor_left1   5
#define motor_left2   6
#define motor_right1  9
#define motor_right2  10

#define light_sen_front      2
#define light_sen_cen_right  3
#define light_sen_cen_left   4
#define light_sen_right      7
#define light_sen_left       8

#define led  13


#define fast 200
#define slow 100
#define mid  160

void setup() {
  pinMode(motor_left1,OUTPUT);
  pinMode(motor_left2,OUTPUT);
  pinMode(motor_right1,OUTPUT);
  pinMode(motor_right2,OUTPUT);
  pinMode(light_sen_front,INPUT);
  pinMode(light_sen_left,INPUT);
  pinMode(light_sen_right,INPUT);  
  pinMode(light_sen_cen_left,INPUT);
  pinMode(light_sen_cen_right,INPUT);
  pinMode(led,OUTPUT);
}

static int test = 0;

void rotate(int pin1,int pin2,int freqh,int freql) {
  analogWrite(pin1,freqh);
  analogWrite(pin2,freql);
}

void loop() {
  test = (digitalRead(light_sen_right) << 4);
  test |= (digitalRead(light_sen_left) << 3);
  test |= (digitalRead(light_sen_cen_left) << 2);
  test |= (digitalRead(light_sen_cen_right) <<1);
  test |= digitalRead(light_sen_front);
  switch(test) {
  case 29:
  case 26: // shift lil left 11010 
     rotate(motor_left1,motor_left2,slow,0);
     rotate(motor_right1,motor_right2,fast,0);
     break;
  case 27:
  case 28: // shift lil right 11100
     rotate(motor_right1,motor_right2,slow,0);
     rotate(motor_left1,motor_left2,fast,0);
     break;
  case 22: // while left rot frnt high 10110
     rotate(motor_left2,motor_left1,fast,0);
     rotate(motor_right1,motor_right2,fast,0);
     break;
  case 14: // while right rot frnt high 01110
     rotate(motor_right2,motor_right1,fast,0);
     rotate(motor_left1,motor_left2,fast,0);
     break;
  case 23:
  case 16: // sharp left 10000
     rotate(motor_right1,motor_right2,mid,0);
     rotate(motor_left2,motor_left1,mid,0);
     break;
  case 15:
  case 8: // sharp right 01000
     rotate(motor_left1,motor_left2,mid,0);
     rotate(motor_right2,motor_right1,mid,0);
     break;
  case 0:  // center cross 00000
     rotate(motor_right1,motor_right2,0,0);
     rotate(motor_left2,motor_left1,0,0);
     digitalWrite(led,HIGH);
     break;
  case 25: // priority selection right 11001
     rotate(motor_left1,motor_left2,fast,0);
     rotate(motor_left1,motor_left2,mid,0);
     break;
  case 30:
  case 24:  // forward 11000
     rotate(motor_right1,motor_right2,fast,0);
     rotate(motor_left1,motor_left2,fast,0);
     break;
  }
}
