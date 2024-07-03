/******************************************************************
 * Demo Code for testing onboard Programmable Buttons and Display *
 ******************************************************************/
 
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

// define Display SPI pins 
#define TFT_CS        10
#define TFT_RST       9
#define TFT_DC        8
#define TFT_MOSI      11
#define TFT_CLK       13
#define BACKLIGHT     6

// configure SPI and create instance for display 
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST);

const int BT1 = 4; // Define digital pin connection for Button 1
const int BT2 = 5; // Define digital pin connection for Button 2

void displayText(String msg, uint16_t txtcolor = ST77XX_WHITE, uint8_t x=10, uint8_t y=10, uint8_t txtsize = 3, uint8_t rotation = 3){
  tft.setRotation(rotation);
  tft.setCursor(x, y);
  tft.setTextSize(txtsize);
  tft.setTextColor(txtcolor);
  tft.println(msg);
}

void setup(void) {
  // Define switch/button pins as INPUT_PULLUP
  pinMode(BT1, INPUT_PULLUP);
  pinMode(BT2, INPUT_PULLUP);
  pinMode(BACKLIGHT, OUTPUT);
  digitalWrite(BACKLIGHT, HIGH); // Turn ON TFT Backlight
 
  tft.init(135, 240);  // Init display controlled by ST7789 and pass resolution of display to init function
  tft.setRotation(3);  
  tft.setTextWrap(false); 
  tft.setTextSize(3);
  tft.setTextColor(ST77XX_CYAN);
  tft.println("Hello..!");

  delay(1000);
  tft.fillScreen(ST77XX_BLACK);
  displayText("Press Any Button", ST77XX_WHITE, 10, 30, 2); // displayText(msg, color, x, y, size, rotation)
}

int statusBT1, statusBT2;

void loop() {
  statusBT1 = digitalRead(BT1);
  statusBT2 = digitalRead(BT2);
  
  if( statusBT1 == 0) {
    tft.fillScreen(ST77XX_BLACK);
    displayText("BT1 Pressed!", ST77XX_YELLOW, 10, 30, 3); // displayText(msg, color, x, y, size, rotation)
    delay(1000);
    tft.fillScreen(ST77XX_BLACK);
    displayText("Press Any Button", ST77XX_WHITE, 10, 30, 2); // displayText(msg, color, x, y, size, rotation)
  }
  
  if ( statusBT2 == 0) {
    tft.fillScreen(ST77XX_BLACK);
    displayText("BT2 Pressed!", ST77XX_YELLOW, 10, 30, 3, 1); // displayText(msg, color, x, y, size, rotation)
    delay(1000);
    tft.fillScreen(ST77XX_BLACK);
    displayText("Press Any Button", ST77XX_WHITE, 10, 30, 2); // displayText(msg, color, x, y, size, rotation)
  }
  delay(1);
}
