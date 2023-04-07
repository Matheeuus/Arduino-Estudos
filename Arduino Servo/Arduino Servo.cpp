#include <Servo.h>

Servo servo;
int angulo, verde = 2, vermelho = 3, buzzer = 1, potenciometro = A0;

void setup() {
    servo.attach(0);
    servo.write(0);

    pinMode(verde, OUTPUT);
    pinMode(vermelho, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(potenciometro, INPUT);
}

void loop() {
    angulo = map(
        analogRead(potenciometro), 0, 1023, 0, 180
    );

    servo.write(angulo);

    if(angulo < 5) {
        controleLeds(LOW, HIGH);
        digitalWrite(buzzer, HIGH);
        delay(750);
    } else if(angulo > 175) {
        controleLeds(HIGH, LOW);
        digitalWrite(buzzer, HIGH);
        delay(750);
    } else {
        controleLeds(LOW, LOW);
        digitalWrite(buzzer, LOW);
        delay(750);
    }
}

void controleLeds(int estadoVerde, int estadoVermelho) {
    digitalWrite(verde, estadoVerde);
    digitalWrite(vermelho, estadoVermelho);
}