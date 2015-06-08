#ifndef STARTERSHIELD_H 
#define STARTERSHIELD_H

#include <Arduino.h>

/*
 * STARTER SHIELD FOR ARDUINO
 * www.worldofgz.com
 *
 * LIBRARIE FOR THE SHIELD
 * Version 1.0
 * 
 * Created: 05 june 2015 by Emeric DENIS
 * Last modification: 05 june 2015 by Emeric DENIS
 * 
 */

//Class for 7-segments
class StarterShield {
  public:
    StarterShield(); //Initialization
    void numberToSegment(int number); //Write a number to a segment
    void charToSegment(char letter); //Write a hexa char to a segment
    void showSegment(char segment); //Switch ON one segment
    void hideSegment(char segment); //Switch OFF one segment
    void toggleSegment(char segment); //Toggle one segment
    void resetSegments(); //Reset all segments
    
  private:
    
  
};

#endif
