#include "StarterShield.h"
#include "Arduino.h"


//Define
#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

//Constructor
StarterShield::StarterShield() {
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

//Write a number to 7-segment
void StarterShield::numberToSegment(int number) {
  //Reset all segments
  resetSegments();
  
  switch (number) {
    case 0:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      break;
    case 1:
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      break;
    case 2:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 3:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 4:
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 5:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 6:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 7:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      break;
    case 8:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 9:
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
  }
  
}

//Write a number
void StarterShield::charToSegment(char letter) {
  //Reset all segments
  resetSegments();
  
  switch (letter) {
    case 'A':
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 'B':
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 'C':
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      break;
    case 'D':
      digitalWrite(SEG_B, HIGH);
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 'E':
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_D, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 'F':
      digitalWrite(SEG_A, HIGH);
      digitalWrite(SEG_E, HIGH);
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
  }
}

//Switch ON one segment
void StarterShield::showSegment(char segment) {
  switch (segment) {
    case 'A':
      digitalWrite(SEG_A, HIGH);
      break;
    case 'B':
      digitalWrite(SEG_B, HIGH);
      break;
    case 'C':
      digitalWrite(SEG_C, HIGH);
      break;
    case 'D':
      digitalWrite(SEG_D, HIGH);
      break;
    case 'E':
      digitalWrite(SEG_E, HIGH);
      break;
    case 'F':
      digitalWrite(SEG_F, HIGH);
      break;
    case 'G':
      digitalWrite(SEG_G, HIGH);
      break;
  }
}

//Switch OFF one segment
void StarterShield::hideSegment(char segment) {
  switch (segment) {
    case 'A':
      digitalWrite(SEG_A, LOW);
      break;
    case 'B':
      digitalWrite(SEG_B, LOW);
      break;
    case 'C':
      digitalWrite(SEG_C, LOW);
      break;
    case 'D':
      digitalWrite(SEG_D, LOW);
      break;
    case 'E':
      digitalWrite(SEG_E, LOW);
      break;
    case 'F':
      digitalWrite(SEG_F, LOW);
      break;
    case 'G':
      digitalWrite(SEG_G, LOW);
      break;
  }
}

//Toggle one segment
void StarterShield::toggleSegment(char segment) {
  int pin = 0;
  
  switch (segment) {
    case 'A':
      pin = SEG_A;
      break;
    case 'B':
      pin = SEG_B;
      break;
    case 'C':
      pin = SEG_C;
      break;
    case 'D':
      pin = SEG_D;
      break;
    case 'E':
      pin = SEG_E;
      break;
    case 'F':
      pin = SEG_F;
      break;
    case 'G':
      pin = SEG_G;
      break;
  }
  
  //If pin has been updated
  if(pin > 0) {
    //Reading the state of the pin
    if(digitalRead(pin) == LOW) {
      digitalWrite(pin, HIGH);
      
    } else {
      digitalWrite(pin, LOW);
      
    } 
  }
}

//Reset all segments
void StarterShield::resetSegments() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  
}
