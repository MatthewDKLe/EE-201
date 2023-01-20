// Matthew Le
// 1/20/2023
// EE 201
// Lab 3: Arduino Excerice II

// Pins 12 and 13 are outputs
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// 2 LEDs blink alternatively
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
