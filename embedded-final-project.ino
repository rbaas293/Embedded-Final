
#include <EEPROM.h>
#include "Arduino.h"
#include "pins_arduino.h"




#define kSOLENOID 2 
#define kTSWITCH 3

void setup() {
  // put your setup code here, to run once:

 //Set up pins
pinMode(LED_BUILTIN, OUTPUT);
pinMode(kSOLENOID, OUTPUT);
pinMode(kTSWITCH, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(kTSWITCH)== 1)
  {
  digitalWrite(kSOLENOID, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(kSOLENOID, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }

}
