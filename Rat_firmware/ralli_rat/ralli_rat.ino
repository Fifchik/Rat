#include <Servo.h>

#define Sharp_left A0 
#define Sharp_right A1 
#define KP 1
#define KD 10
#define First_angle 90
#define Minspeed 50
#define Maxspeed 200

Servo myservo;  // create servo object to control a servo

int u, error, error_old;

void setup() {
  Serial.begin(9600);
  myservo.attach(???); 
  delay(50);
  myservo.write(First_angle); 
}

void loop() 
{
 error=read_Sensor();//
 u=error*KP + (error-error_old)*KD;//
 servo_rull();
 speed_motors();
}
