/*
 * STARTER SHIELD FOR ARDUINO
 * www.worldofgz.com
 * Version 1.0
 * 
 * Created: 05 june 2015 by Emeric DENIS
 * Last modification: 05 june 2015 by Emeric DENIS
 *
 * EXAMPLE FILE
 * LED RGB adjustment with 3 potentiometer
 * 
 * REQUIREMENT
 * - LED RGB on Shield
 * - Potentiometer 1, 2, 3 on Shield
 * - Jumper on "LED"
 */
 
//Pin
const int in_red = A0;
const int in_green = A1;
const int in_blue = A2;
const int led_red = 6;
const int led_green = 5;
const int led_blue = 3;

void setup() {
  //Define pins
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
  
}

void loop() {
  //Map input to output
  analogWrite(led_red, map(analogRead(in_red), 0, 1023, 0, 255));
  analogWrite(led_green, map(analogRead(in_green), 0, 1023, 0, 255));
  analogWrite(led_blue, map(analogRead(in_blue), 0, 1023, 0, 255));

  //Delay
  delay(100);
}
