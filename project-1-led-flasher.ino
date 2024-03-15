// Project 1 - LED Flasher
int ledPinVermelho = 12;
int ledPinAmarelo = 10;

void setup() {
  pinMode(ledPinVermelho, OUTPUT);
  pinMode(ledPinAmarelo, OUTPUT);
}

void loop() {
  digitalWrite(ledPinVermelho, HIGH);
  delay(50);
  digitalWrite(ledPinAmarelo, HIGH);
  delay(50);
  digitalWrite(ledPinVermelho, LOW);
  delay(50);
  digitalWrite(ledPinAmarelo, LOW);
  delay(50);
}
