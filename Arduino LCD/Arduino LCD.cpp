#include <LiquidCrystal.h>

LiquidCrystal lcd (7,6,5,4,3,2);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Ola Matheus!");
}
void loop()
{
	int valor = analogRead(A0);
  	if(valor >= 1015){
        lcd.clear();
        lcd.print("Bom Dia, como voce esta?");
        delay(1000);
    }else if(valor >= 1010 && valor <= 1015) {
        lcd.clear();
        lcd.print("Boa Tarde, como esta sendo seu dia?");
        delay(1000);
    }else(valor < 1010){
    	lcd.clear();
        lcd.print("Boa Noite!");
        delay(1000);
    }
  	Serial.println(valor);
}