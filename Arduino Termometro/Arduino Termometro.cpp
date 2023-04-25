#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,7,6,5,4);

void setup ()
{
  Serial.begin(9600);
  lcd.begin (16,2);
}
void loop ()
{
  float tensao = analogRead(A0)*5.0/1023;
  int temp = round ((tensao-.5)*100);
  Serial.println (tensao);
  lcd.clear();
  lcd.print("Temperatura:");
  lcd.setCursor (0,1);
  lcd.print(temp);
  lcd.write(B10110010);
  lcd.write("C");
  delay(500);
}