// C++ code
//
int in1Pin = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(9, INPUT);
  pinMode(7, INPUT);
}

void loop()
{
  if (digitalRead(8) == 1) {
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  if (digitalRead(9) == 1) {
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  if (digitalRead(7) == 1) {
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}