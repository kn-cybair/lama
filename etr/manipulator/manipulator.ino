#include <Servo.h>

int positionOne = 90, positionTwo = 90;
int gainOne = 1, gainTwo = 1;
Servo servoOne, servoTwo;

void setup() {
servoOne.attach(6);
servoTwo.attach(5);
 
servoOne.write(positionOne);
servoTwo.write(positionTwo);
}
void loop() {
  servoOne.write(positionOne);
  servoTwo.write(positionTwo);

  positionOne = positionOne + gainOne;
  positionTwo = positionTwo + gainTwo;

  if(positionOne > 170) gainOne =- gainOne;
  if(positionOne < 10) gainOne =- gainOne;
  if(positionTwo > 170) gainTwo =- gainTwo;
  if(positionTwo < 10) gainTwo =- gainTwo;
 
  delay(30);
}

