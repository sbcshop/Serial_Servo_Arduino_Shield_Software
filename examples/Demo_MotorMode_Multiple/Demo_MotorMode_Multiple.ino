/*
* Motor Mode Example
*/

#include <SBServo.h>

SBServo sb;
const int ID1 = 0x01;
const int ID2 = 0x02;
const int ID3 = 0x03;
const int ID4 = 0x04;


void setup()
{
  Serial.begin(115200);
  sb.pSerial = &Serial;
  delay(1000);
}

void loop()
{
  sb.PWMMode(ID1);
  sb.WritePWM(ID1, 1000);
  delay(1000);
  sb.WritePWM(ID1, 0);
  delay(1000);

  sb.PWMMode(ID2);
  sb.WritePWM(ID2, 1000);
  delay(1000);
  sb.WritePWM(ID2, 0);
  delay(1000);

  sb.PWMMode(ID3);
  sb.WritePWM(ID3, 1000);
  delay(1000);
  sb.WritePWM(ID3, 0);
  delay(1000);

  sb.PWMMode(ID4);
  sb.WritePWM(ID4, 1000);
  delay(1000);
  sb.WritePWM(ID4, 0);
  delay(1000);

}
