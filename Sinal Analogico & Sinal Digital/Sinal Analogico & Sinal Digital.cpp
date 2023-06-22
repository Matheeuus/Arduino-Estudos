// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  Serial.print("Imprimir Canal Analogico:");
  Serial.println(analogRead(A0));
  Serial.println("---------------------");
  Serial.print("Imprimir Canal Digital:");
  Serial.println(digitalRead(3));
  delay(10); // Delay a little bit to improve simulation performance
}