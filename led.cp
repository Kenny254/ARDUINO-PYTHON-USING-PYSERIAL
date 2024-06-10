const int ledPin = 13;  // Pin number connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  Serial.begin(9600);  // Initialize serial communication at 9600 baud rate
}

void loop() {
  if (Serial.available() > 0) {  // If data is available to read
    char command = Serial.read(); // Read the incoming byte

    if (command == 'H') { // If 'H' is received, turn on the LED
      digitalWrite(ledPin, HIGH);
    } else if (command == 'L') { // If 'L' is received, turn off the LED
      digitalWrite(ledPin, LOW);
    }
  }
}
