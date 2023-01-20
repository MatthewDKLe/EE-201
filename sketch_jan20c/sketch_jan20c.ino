// Matthew Le
// 1/20/2023
// EE 201
// Lab 3: Arduino Excerice IV

// Pins 7, 8, 2, 3, 4, 5, 6 are outputs corresponding to
// a, b, c, d, e, f, g on segment display
void setup() {
  pinMode(7, OUTPUT); // a
  pinMode(8, OUTPUT); // b
  pinMode(2, OUTPUT); // c
  pinMode(3, OUTPUT); // d
  pinMode(4, OUTPUT); // e
  pinMode(5, OUTPUT); // f
  pinMode(6, OUTPUT); // g
  Serial.begin(9600);

}

// Countdown from 9 to 0 in 15 seconds
// Display changes every 1.5 seconds or 1500 milliseconds
void loop() {
  // 9
  digitalWrite(7, LOW);  // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("9");  

  // 8
  digitalWrite(7, LOW);  // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, LOW);  // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("8");

  // 7
  digitalWrite(7, LOW);  //a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, HIGH); // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, HIGH); // f
  digitalWrite(6, HIGH); // g
  delay(1500);
  Serial.println("7");

  // 6
  digitalWrite(7, LOW);  // a
  digitalWrite(8, HIGH); // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, LOW);  // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("6"); 

  // 5
  digitalWrite(7, LOW);  // a
  digitalWrite(8, HIGH); // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("5");

  // 4
  digitalWrite(7, HIGH); // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, HIGH); // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("4");

  // 3
  digitalWrite(7, LOW);  // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("3"); 

  // 2
  digitalWrite(7, LOW);  // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, HIGH); // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, LOW);  // e
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW);  // g
  delay(1500);
  Serial.println("2");

  // 1
  digitalWrite(7, HIGH); // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, HIGH); // d
  digitalWrite(4, HIGH); // e
  digitalWrite(5, HIGH); // f
  digitalWrite(6, HIGH); // g
  delay(1500);
  Serial.println("1");

  // 0
  digitalWrite(7, LOW);  // a
  digitalWrite(8, LOW);  // b
  digitalWrite(2, LOW);  // c
  digitalWrite(3, LOW);  // d
  digitalWrite(4, LOW);  // e
  digitalWrite(5, LOW);  // f
  digitalWrite(6, HIGH); // g
  delay(1500);
  Serial.println("0");
}
