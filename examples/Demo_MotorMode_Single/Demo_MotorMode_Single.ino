/*
* Motor Mode Example
*/

#include <SBServo.h>

SBServo sb; //create instance
const int ID = 0x02; // Provide ID of your Serial Servo

void setup()
{
  Serial.begin(115200); // set baudrate 
  sb.pSerial = &Serial;  
  delay(1000);          // wait
  sb.PWMMode(ID);       // define ID of motor for PWM Mode 
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
