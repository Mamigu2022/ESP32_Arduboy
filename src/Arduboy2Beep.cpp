/**
 * @file Arduboy2Beep.cpp
 * \brief
 * Classes to generate simple square wave tones on the Arduboy speaker pins.
 */

#include <Arduino.h>
#include "Arduboy2Beep.h"
#include "Arduboy2Core.h"

#define tonopin1 26
#define tonopin2 25
#define canal 0
uint8_t BeepPin1::duration = 0;

void BeepPin1::begin() {}

void BeepPin1::tone(uint16_t count){
::tone(tonopin1,count);
#ifdef ADAFRUIT
  ::tone(PIN_SPEAKER_1, count);
#endif
}

void BeepPin1::tone(uint16_t count, uint8_t dur){
 ::tone(tonopin1,count,dur);
#ifdef ADAFRUIT
  ::tone(PIN_SPEAKER_1, count, dur);
#endif
}

void BeepPin1::timer(){}

void BeepPin1::noTone(){
::noTone(tonopin1);
#ifdef ADAFRUIT
  ::noTone(PIN_SPEAKER_1);
#endif
}

uint8_t BeepPin2::duration = 0;

void BeepPin2::begin(){}

void BeepPin2::tone(uint16_t count){
 ::tone(tonopin2,count); 
#ifdef ADAFRUIT
  ::tone(PIN_SPEAKER_2, count);
#endif
}

void BeepPin2::tone(uint16_t count, uint8_t dur){
 ::tone(tonopin2,count,dur); 
#ifdef ADAFRUIT
  ::tone(PIN_SPEAKER_2, count, dur);
#endif
}

void BeepPin2::timer(){}

void BeepPin2::noTone(){
  ::noTone(tonopin2);
#ifdef ADAFRUIT
  ::noTone(PIN_SPEAKER_2);
#endif
}