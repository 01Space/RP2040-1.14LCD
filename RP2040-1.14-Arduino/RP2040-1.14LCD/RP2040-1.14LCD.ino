  #include <TFT_eSPI.h> //Select #include <User_Setups/Setup135_ST7789.h> // Setup file for ESP8266 and ST7789 135 x 240 TFT
//https://github.com/Bodmer/TFT_eSPI
#include "picoImage.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

#define TFT_BL 2
#define BOTTON1 0
#define BOTTON2 1
#define RedLED 14
#define BatVol 29

#define dark()                   \
  for (int i = 0xff; i > 0; i--) \
  {                              \
    delay(5);                    \
    analogWrite(TFT_BL, i);      \
  }                              \
  digitalWrite(RedLED, !digitalRead(RedLED));

#define light()                  \
  for (int i = 0; i < 0xff; i++) \
  {                              \
    delay(5);                    \
    analogWrite(TFT_BL, i);      \
  }                              \
  digitalWrite(RedLED, !digitalRead(RedLED));

TFT_eSPI tft = TFT_eSPI();
const float conversion_factor = 3.3f / (1 << 12);

void setup()
{
  
  pinMode(BatVol, INPUT);
  pinMode(TFT_BL, OUTPUT);
  pinMode(RedLED, OUTPUT);
  digitalWrite(TFT_BL, 0);
  analogWrite(TFT_BL, 0);

  Serial.begin(115200);
  adc_init();
  adc_gpio_init(29);
  adc_select_input(3);
  tft.init();
  tft.setRotation(1);
  tft.setTextSize(2);
  tft.setSwapBytes(true);
  tft.pushImage(0, 0, 240, 135, pico);
  light();
  Serial.println("Hello Pico");
}

void loop()
{
  static uint8_t select;
  dark();
  select += 1;
  switch (select)
  {
  case 1:
    tft.pushImage(0, 0, 240, 135, RP2040LOGO);
    break;
  case 2:
    tft.pushImage(0, 0, 240, 135, LORALOGO);
    break;
  case 3:
    tft.fillScreen(TFT_BLACK);
    tft.setCursor(0, 0);
    tft.setTextColor(random(TFT_WHITE));
    tft.printf("Bat Voltage :%3.2fV", 2 * adc_read() * conversion_factor);
    break;
  default:
    select = 0;
    break;
  }
  light();
}
