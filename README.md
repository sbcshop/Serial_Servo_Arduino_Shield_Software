# Serial_Servo_Arduino_Shield_Software

<img src= "https://cdn.shopify.com/s/files/1/1217/2104/files/Artboard_1_3.png?v=1718792957" />

To support Arduino enthusiasts, we introduce the Arduino Serial Servo Shield. This versatile shield mirrors our serial servo controller's functionality, with two serial servo connectors, two programmable buttons, and a 1.14” TFT display for seamless integration and comprehensive feedback. Compatible with boards like Arduino Uno, Mega, ArdiPi, and Ardi32, it offers adaptable solutions for your projects.

This Github provides getting started guide for Serial Servo Arduino Shield.

### Features
- Serial Servo Shield with standard headers for Arduino and compatible boards
- Jumper selection to switch between **3.3V** and **5V** compatible boards
- TFT 1.14” display for user interactions
- Two slot to connect Serial Servo Motors, and easily cascade servo to connect more number of motor*
- Two Programmable Buttons to add additional control features to your project 
- Screw terminal and DC jack options to connect 6-8.4V adapter with onboard regulator 
- Power status LED to indicate board power.
- Compatible Servo Motors =>
    - [SB-SS023](https://shop.sb-components.co.uk/products/sb-serial-servo-sb-ss023-powerful-multi-purpose-digital-servo-motor?_pos=1&_sid=5cba75e00&_ss=r) - For Lightweight Projects
    - [SB-SS15](https://shop.sb-components.co.uk/products/sb-serial-servo-sb-ss15-powerful-multi-purpose-digital-servo-motor?_pos=2&_sid=5cba75e00&_ss=r) - For Heavier Applications
    - Servo Motor Key Features:
      - Real-Time Position, Load, Temperature, Speed, and Voltage feedback.
      - Servo/Motor Mode Switchable
      - High Precision And Large Torque
      - ID Range 1~253
      - 38400 bps ~ 1Mbps (1Mbps by default)

***NOTE:  Avoid Connecting More Than 6 Servos At A Time, Not Recommended Due To High Current Demand By Servos.**

For more details about Serial Servo Motor checkout [Manual](https://github.com/sbcshop/Serial_Servo_Breakout_Software/blob/main/Documents/SB_Servo_User_Manual.pdf).  

## Specification:
- **Microcontroller**: Arduino and compatible Boards
- **Board Supply Voltage**: 5V 
- **Operating Pin Voltage**: 3.3/5V switchable 
- **Operating Servo voltage**: 6~8.4V 
- **Display Size**: 1.14” 
- **Display Resolution** : 240x320 pixels
- **Display Driver**: ST7789 
- **Display Appearance**: RGB, 65K/262K
- **Temperature Range**: -20°C ~ +70°C

## Getting Started with Serial Servo Arduino Shield
### Pinout
<img src= "https://cdn.shopify.com/s/files/1/1217/2104/files/Artboard_1_copy_3.png?v=1718793395" />

- (1) ON/OFF Servo Motor Supply
- (2) & (10) Programmable Buttons
- (3) Power Status LED
- (4) TFT 1.14” Display
- (5) & (8) Serial Servo Connector
- (6) DC Jack Input (6~8.4V DC) 
- (7) Screw Terminal Input (6~8.4V DC)
- (9) Jumper Selection for 3.3V/5V boards
- (11) & (12) Standard Arduino Header

  
### Interfacing Details
When shield is connected with Arduino UNO following pins consumed,
 - _Serial Servo Bus Pins:_
   * Servo connector having +ve[6~8.4VDC], -ve[GND] and Signal pin. 
   * Serial Servo Signal pins breakout into UART RXD and TXD to connect with Arduino UART pins,
     
     | Arduino | Servo | Description | 
     |---|---|---|
     | TX | Servo Bus RXD | UART communication pin |
     | RX | Servo Bus TXD | UART communication pin |
  
- _Display interfacing with Arduino UNO_
    | Arduino | Display | Function |
    |---|---|---|
    | D13 | LCD_CLK | Clock pin of SPI interface for Display|
    | D11 | LCD_DIN | MOSI (Master OUT Slave IN) pin of SPI interface|
    | D10 | LCD_CS | Chip Select pin of SPI interface|
    | D8  | LCD_DC| Data/Command (MISO) pin of SPI interface|
    | D9  | LCD_RST | Display Reset pin |
    | D6  | BL | Backlight of display|
  
- _Buttons Interfacing_
    | Arduino | Hardware | Function |
    |---|---|---|
    |D4 | BT1 | Programmable Button |
    |D5 | BT2 | Programmable Button |
  
  
### 1. Configure and Setup Development Environment
   - Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
   - Download [library zip file]() provided here in github.
   - Extract and copy files inside Document > Arduino > Libraries folder. Make sure to restart Arduino IDE whenever you update or add any libraries.

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/library_files_path.png" />

#### Testing First Code
   - At this step you are all set to test codes, for easy getting started we have provided various demo [example codes]() in github which you can download and try. 
   - Open one example code in Arduino and make sure you have selected correct board with suitable com port, click on upload button to transfer code on Arduino UNO.
   - _**Since same default HARDWARE SERIAL PINS of ARDUINO used for INTERFACING SERIAL SERVO, so you have to REMOVE SHIELD BEFORE UPLOADING ANY NEW CODE.**_

     <img src="https://github.com/sbcshop/Serial_Servo_Arduino_Shield_Software/blob/main/images/Arduino_code.png">
     
   - Checkout other examples below and build your own custom program codes using those references.

## Resources
  * [Schematic](https://github.com/sbcshop/Serial_Servo_Arduino_Shield_Hardware/blob/main/Design%20Data/SCH%20Serial%20Servo%20Arduino%20Shield.pdf)
  * [Hardware Files](https://github.com/sbcshop/Serial_Servo_Arduino_Shield_Hardware/tree/main)
  * [Step File](https://github.com/sbcshop/Serial_Servo_Arduino_Shield_Hardware/blob/main/Mechanical%20Data/Serial%20Servo%20Arduino%20Shield.step)
  * [Getting Started with Arduino](https://docs.arduino.cc/learn/starting-guide/getting-started-arduino/)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)

       
## Related Products  
  * [Serial Servo Pico HAT](https://shop.sb-components.co.uk/products/serial-servo-pico-hat?_pos=5&_sid=1178c9361&_ss=r)

    ![Serial_Servo_Pico_HAT](https://shop.sb-components.co.uk/cdn/shop/files/Artboard2_1.png?v=1718781807&width=150)
    
  * [Serial Servo ESP32](https://shop.sb-components.co.uk/products/serial-servo-based-on-esp32-1?_pos=1&_sid=c593a9981&_ss=r)

    ![Serial_Servo_ESP32](https://shop.sb-components.co.uk/cdn/shop/files/esp322.png?v=1718797495&width=150)
    
  * [Serial Servo Raspberry Pi HAT](https://shop.sb-components.co.uk/products/serial-servo-raspberry-pi-hat?_pos=2&_sid=c593a9981&_ss=r)

    ![Serial_Servo_Raspberry Pi_HAT](https://shop.sb-components.co.uk/cdn/shop/files/Artboard2_2.png?v=1718788805&width=150)
  
  * [Serial Servo Breakout](https://shop.sb-components.co.uk/products/serial-servo-breakout-1?_pos=3&_sid=5d47c0d83&_ss=r)

    ![Serial_Servo_Breakout](https://shop.sb-components.co.uk/cdn/shop/files/Artboard2.png?v=1718780131&width=150)


## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
