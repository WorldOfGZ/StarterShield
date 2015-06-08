/*
 * STARTER SHIELD FOR ARDUINO
 * www.worldofgz.com
 * Version 1.0
 * 
 * Created: 05 june 2015 by Emeric DENIS
 * Last modification: 05 june 2015 by Emeric DENIS
 *
 * EXAMPLE FILE
 * Control servo with a potentiometer
 * 
 * REQUIREMENT
 * - LED Red 1
 * - LED Green 1
 * - Potentiometer 1 on Shield
 * - Jumper on "LED"
 * - Accessorie : Servo
 */
 
//Librarie SERVO
#include <Servo.h>

//Create an object servo
Servo myservo;

//Pin
const int potentiometer = A0;
const int red = 2;
const int green = 7;
int positionValue = 0;

void setup() {
  //Pin mode
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  
  //Attaches the servo on pin 9
  myservo.attach(9);

}

void loop() {
  //Switch off leds
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  
  //Read the position from potentiometer
  positionValue = analogRead(potentiometer);
  //Scale the value
  positionValue = map(positionValue, 0, 1023, 0, 180); 
  //Set the position
  myservo.write(positionValue);
  
  //If position is at the start, led green switch on
  if(positionValue < 10 ) {
    digitalWrite(green, HIGH);
    
  //If position is at the end, led green switch of
  } else if(positionValue > 170 ) {
    digitalWrite(red, HIGH);
    
  }
  
  //Delay
  delay(20);
}
