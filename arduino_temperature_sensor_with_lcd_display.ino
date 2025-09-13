#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(A3, INPUT);
  lcd_1.begin(16, 2);

  lcd_1.print((-40 + 0.488155 * (analogRead(A3) - 20)));
  lcd_1.print(" Celcius");
  delay(1000); // Wait for 1000 millisecond(s)
}

void loop()
{
  lcd_1.clear();
  lcd_1.print((-40 + 0.488155 * (analogRead(A3) - 20)));
  lcd_1.print(" Celcius");
  delay(1000); // Wait for 1000 millisecond(s)
}