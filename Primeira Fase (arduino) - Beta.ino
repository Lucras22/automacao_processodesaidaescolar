https://www.tinkercad.com/things/jd30PXn8PCl-swanky-turing-amberis/editel?sharecode=AIj9zhbUZVTzrgEHd9l9JtATcT3eU8LDYEA0kL8ixwk 

int BOTAO1 = 3;
int BOTAO2 = 4;
int BOTAO3 = 5;

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

int BUZZER = 8;

int estadoBotao3 = 0;
int estadoBotao4 = 0;
int estadoBotao5 = 0;

void setup() {
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
  pinMode(BOTAO3, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  estadoBotao3 = digitalRead(BOTAO1);
  estadoBotao4 = digitalRead(BOTAO2);
  estadoBotao5 = digitalRead(BOTAO3);

  if (estadoBotao3 == HIGH) {
    digitalWrite(LED1, HIGH);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 200);
    delay(3000);
    digitalWrite(LED1, LOW);
    digitalWrite(BUZZER, LOW);
    noTone(BUZZER);
  } else {
    digitalWrite(LED1, LOW);
  }
  if (estadoBotao4 == HIGH) {
    digitalWrite(LED2, HIGH);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 200);
    delay(3000);
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZER, LOW);
    noTone(BUZZER);
  } else {
    digitalWrite(LED2, LOW);
  }

  if (estadoBotao5 == HIGH) {
    digitalWrite(LED3, HIGH);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 200);
    delay(3000);
    digitalWrite(LED3, LOW);
    digitalWrite(BUZZER, LOW);
    noTone(BUZZER);
  } else {
    digitalWrite(LED3, LOW);
  }

}
