#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int joyX1=A2;
int joyY1=A3;
int joyX2=A0;
int joyY2=A1;
int x2Value=0;
int y2Value=0;
  
  
int joyVal;

void setup() {
  Serial.begin(9600);
  pinMode(joyX2,INPUT); 
  pinMode(joyY2,INPUT);
   servo1.attach(3);
   servo2.attach(6);
   servo3.attach(9);
   servo4.attach(11);

}

void loop() {
 x2Value=analogRead(joyX2); 
 y2Value=analogRead(joyY2); 
 Serial.print("X2=");
 Serial.println(x2Value);
 Serial.print("Y2=");
 Serial.println(y2Value);
 delay(400);
 
 joyVal=analogRead(joyX1);
 joyVal=map(joyVal,0,1023,0,360);
 servo1.write(3*joyVal);

 joyVal=analogRead(joyY1);
 joyVal=map(joyVal,0,1023,0,360);
 servo2.write(3*joyVal);
 
 joyVal=analogRead(joyX2);
 joyVal=map(joyVal,0,1023,0,360);
 servo3.write(3*joyVal);

 joyVal=analogRead(joyY2);
 joyVal=map(joyVal,0,1023,0,360);
 servo4.write(3*joyVal);
 delay(20);
 
}
