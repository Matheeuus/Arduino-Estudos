#define motorPin 2
#define in1Pin 4
#define in2Pin 3

void setup()
{
	pinMode(4, OUTPUT);
  	pinMode(3, OUTPUT);
 	pinMode(2, OUTPUT);
}

void loop()
{

  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin,LOW);
  analogWrite(motorPin, 255);
    
  delay(3000);
  
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin,LOW);
  analogWrite(motorPin, 0);
  
  delay(3000);
  
  
}