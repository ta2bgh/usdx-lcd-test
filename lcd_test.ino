#include <LiquidCrystal.h>

const int rs = 18, en = 4, d4 = 0, d5 = 1, d6 = 2, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("uSDX LCD Test");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}