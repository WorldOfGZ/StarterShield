/*
 * STARTER SHIELD FOR ARDUINO
 * www.worldofgz.com
 * Version 1.0
 * 
 * Created: 05 june 2015 by Emeric DENIS
 * Last modification: 05 june 2015 by Emeric DENIS
 *
 * EXAMPLE FILE
 * DIP enable LED
 * 
 * REQUIREMENT
 * - Led Red 1 and Led Green 1 on Shield
 * - Switch 1 on Shield
 * - Jumper on "LED"
 */
 
int ledGreen = 7;
int ledRed = 2;
int dip = 11;

void setup() {
  //PinMode
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(dip, INPUT);
  
  //Switch off led
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
}

void loop() {
  //If DIP is ON, we launch sequence
  if(digitalRead(dip)) {
    //Alternate signal
    digitalWrite(ledGreen, HIGH);
    delay(200);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    delay(200);
    digitalWrite(ledRed, LOW);
  }

}
