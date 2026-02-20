// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(0, HIGH);  // turn the LED off (LOW is the voltage level)
}
