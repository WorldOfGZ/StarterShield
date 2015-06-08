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
 * COUNTER
 * 
 * REQUIREMENT
 * - 7-segment on Shield
 * - Switch 1 (decrease), 2(increase) on Shield
 * - Jumper on "7-segment"
 */
 
//SWITCH
#define SW1 12
#define SW2 13
 
//Storage of the state button
boolean sw1State = LOW;
boolean sw2State = LOW;
//value of the counter
int counter = 0;

StarterShield shield;

void setup() {
  //Reset the display
  shield.resetSegments();
  
  //PinMode
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);

}

void loop() {
  //if state of button 1 has change
  if(digitalRead(SW1) != sw1State) {
    //Storage of the state
    sw1State = digitalRead(SW1);
    
    //If switch is pushed 
    if(digitalRead(SW1) == HIGH) {
      //Minimum value = 0
      if (counter > 0) {
        counter--;
        
      }
    }
  }
  
  //if state of button 2 has change
  if(digitalRead(SW2) != sw2State) {
    //Storage of the state
    sw2State = digitalRead(SW2);
    
    //If switch is pushed 
    if(digitalRead(SW2) == HIGH) {
      //Maximum value = 9
      if (counter < 9) {
        counter++;
        
      }
    }
  }
  
  //Written the counter
  shield.numberToSegment(counter);

}
