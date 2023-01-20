// Matthew Le
// 1/20/2023
// EE 201
// Lab 3: Arduino Excerice III

// Pin 13 is input to read HIGH or LOW
void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
}

// Checks if data is HIGH or LOW and prints
// "Hello World!" or "It's 2023" appropriately
void loop() {
  if (digitalRead(13) == HIGH)
    Serial.println("Hello World!");
  if (digitalRead(13) == LOW)
    Serial.println("It's 2023");  
}
