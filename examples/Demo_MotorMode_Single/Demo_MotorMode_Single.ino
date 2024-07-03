/*
* Motor Mode Example
*/

#include <SBServo.h>

SBServo sb; //create instance
const int ID = 0x02;

void setup()
{
  Serial.begin(115200);  // set baudrate 
  sb.pSerial = &Serial;  
  delay(1000);
  sb.PWMMode(ID);  // define ID of motor to control 
}

void loop()
{
  sb.WritePWM(ID, 1000);  // ID, speed 
  delay(2000);
  sb.WritePWM(ID, 0);   // stop motor
  delay(2000);
  sb.WritePWM(ID, -1000);  // reverse direction
  delay(2000);
  sb.WritePWM(ID,0);
  delay(2000);
}
