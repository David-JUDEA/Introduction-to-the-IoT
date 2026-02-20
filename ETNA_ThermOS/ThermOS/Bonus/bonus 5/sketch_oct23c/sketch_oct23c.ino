// Programme pour animation avec les LEDs pour simuler un chenillard multicolore en continu.
void setup() {
  int pins[] = {5, 6, 9, 10}; // Ports PWM
  for (int i = 0; i < 4; i++) // Ports de 5, 6 et 9, 10 sont utiliser
  pinMode (pins[i], OUTPUT);
}

void loop() {
  int pins[] = {5, 6, 9, 10};
  for (int i = 0 ; i < 4; i++) {
    int led = pins[i];
    
    // Respiration 
    // effet fade in
    for (int b = 0; b <= 255; b += 5) { // Augmente la lumière des LEDs
      analogWrite(led, b);
      delay(3);
    }

    // effet fade out
    for (int b = 255; b >= 0; b -= 5) { // Diminue la lumière des LEDs
      analogWrite(led, b);
      delay(3);
    }
  }
}
