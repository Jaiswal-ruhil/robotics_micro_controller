
#define left_sensor A0
#define right_sensor A1

#define motor_right1 2
#define motor_right2 3
#define motor_left1  4
#define motor_left2  5

#define en_left 10
#define en_right 11


void setup() {
  pinMode(left_sensor,INPUT);
  pinMode(right_sensor,INPUT);
  pinMode(motor_right1,OUTPUT);
  pinMode(motor_right2,OUTPUT);
  pinMode(motor_left1,OUTPUT);
  pinMode(motor_left1,OUTPUT);
  pinMode(en_left,OUTPUT);
  pinMode(en_right,OUTPUT);
}

void rotate(int pin1,int pin2,int en,int freq) {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  analogWrite(en,freq);
}

static int right=0,left=0;

void loop() {
  left = analogRead(left_sensor);
  right = analogRead(right_sensor);
  if( left ==  right && left == 0) {
    rotate(motor_left1,motor_left2,en_left,255);
    rotate(motor_right1,motor_right2,en_right,255);
  }
  else if( left >  right ) {
    rotate(motor_left1,motor_left2,en_left,255);
    rotate(motor_right2,motor_right1,en_right,180);
  }
  else if( left <  right ) {
    rotate(motor_right1,motor_right2,en_right,255);
    rotate(motor_left2,motor_left1,en_left,180);
  }
  else {
    rotate(motor_left2,motor_left1,en_left,255);
    rotate(motor_right1,motor_right2,en_right,255);
  }
}
