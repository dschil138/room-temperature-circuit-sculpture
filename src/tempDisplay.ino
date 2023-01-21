

#include "DHT.h"
#define DHTTYPE DHT11 
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define DHTPIN A0     // MUST USE THIS PIN!

DHT dht(DHTPIN, DHTTYPE);

#define OLED_RESET     4 //  -1 if using Arduino reset pin
#define SCREEN_ADDRESS 0x3C // Standard I2C address for SSD1306 Oleds, check data sheet if it doesn't work
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int temperature;


// ----- SETUP -----
void setup() {
  Serial.begin(9600);
  Serial.println(F("testing sensor"));
  dht.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
}




// ----- LOOP -----
void loop() {
  delay(6000);

  // "true" for Fahrenheit, leae empty for C
  float fahr = dht.readTemperature(true);

  // If read fails, end loop now so that it an try again in six seconds
  if (isnan(fahr)) {
    Serial.println(F("Failed to get reading - check connections"));
    return;
  }

  // print serial info for debugging
  Serial.print(F("Temperature: "));
  Serial.print(f);
  Serial.print(F("°F"));

  // assign to int
  temperature = fahr; 

  displayTemperature();
}


void displayTemperature(void) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(F("Current"));
  display.setCursor(0, 10);
  display.println(F("Temperature:"));
  display.setCursor(75, 0);
  display.setTextSize(4);
  display.println(temperature);
  display.display();
  delay(2000);
}
