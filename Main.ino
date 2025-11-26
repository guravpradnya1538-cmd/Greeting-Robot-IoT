#include <ESP8266WiFi.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

String greeting = "Welcome Guest!";

void setup() {
  lcd.begin(16,2);
  lcd.print("Greeting Robot");
  delay(2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print(greeting);
  delay(2000);
}
