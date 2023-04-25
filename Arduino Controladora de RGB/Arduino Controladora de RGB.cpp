// C++ code
//
void setup()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (digitalRead(8) == HIGH) {
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }

  if (analogRead(A0) < 300) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
  if (analogRead(A0) >= 300) {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  }
  if (analogRead(A0) >= 600) {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
  }
}