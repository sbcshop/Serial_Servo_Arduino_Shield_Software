/*
 * Demo code for Servo Mode operation 
*/

#include <SBServo.h>

SBServo sb;

#define ID 2  // change with your serial servo ID

void setup()
{
  Serial.begin(115200);
  sb.pSerial = &Serial;
  delay(1000);
}


void loop()
{
  sb.WritePos(ID, 1000, 0, 1500);  // SERVO ID, Position, Time, Speed; => 1500 Steps/Seconds,
  delay(754);
  
  sb.WritePos(ID, 20, 0, 1500);  // SERVO ID, Position, Time, Speed; => 1500 Steps/Seconds,
  delay(754);
}
