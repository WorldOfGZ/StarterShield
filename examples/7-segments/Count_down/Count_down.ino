#include <StarterShield.h>

/*
 * STARTER SHIELD FOR ARDUINO
 * www.worldofgz.com
 * Version 1.0
 * 
 * Created: 05 june 2015 by Emeric DENIS
 * Last modification: 05 june 2015 by Emeric DENIS
 *
 * EXAMPLE FILE
 * COUNT DOWN
 * 
 * REQUIREMENT
 * - 7-segment on Shield
 * - Switch 1 (to start) on Shield
 * - Jumper on "7-segment"
 */
 
//SWITCH
#define SW1 12

//Create object
StarterShield shield;

void setup() {
  //Pin mode
  pinMode(SW1, INPUT);
  
  //Reset the display
  shield.resetSegments();
  
  //Write 0
  shield.numberToSegment(0);
  
}

void loop() {
  //If we push button
  if(digitalRead(SW1)) {
    
    for (int i=9 ; i >= 0 ; i-- ) {
      //Write value
      shield.numberToSegment(i);
      delay(1000);
    }
  }
  
  //Pause
  delay(100);

}
