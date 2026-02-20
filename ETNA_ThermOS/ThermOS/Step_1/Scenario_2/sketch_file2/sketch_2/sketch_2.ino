// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, LOW); // Turns on the green LED
  digitalWrite(1, HIGH);  // Turns off the red LED
  delay(250);           // Waits
 
  digitalWrite(0, HIGH);  // Turns off the green LED
  digitalWrite(1, LOW); // Turns on the red LED
  delay(250); 
}
