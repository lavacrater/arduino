#include <Servo.h>
int servoPin=13;
//1//

int servoPin2=12;
//2//

int servoPin3=11;
//3//

int servoPin4=10;
//4//

int servoPin5=9;
//5//

int servoPos=90;

Servo servo1;
Servo servo2;
Servo servo3;  
Servo servo4;
Servo servo5;

int dl=500;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

servo1.attach(servoPin);
//1//
servo2.attach(servoPin2);
//2//
servo3.attach(servoPin3);
//3//
servo4.attach(servoPin4);
//4//
servo5.attach(servoPin5);
//5//


}

void loop() {
 
 for (servoPos = 0; servoPos< 100; servoPos++)
  {
  
  servo1.write(servoPos);
  servo2.write(servoPos);
  servo3.write(servoPos);
  servo4.write(servoPos);
  servo5.write(servoPos);
  delay (dl);

  }

}
