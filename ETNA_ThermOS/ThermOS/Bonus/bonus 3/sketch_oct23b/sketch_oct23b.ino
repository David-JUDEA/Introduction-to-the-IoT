// Programme pour clignotement rapide si la température dépasse 25°C.
#include <DHT.h>
#define DHTPIN 2          // Pin de données du capteur DHT
#define DHTTYPE DHT11     // ou DHT22 selon ton capteur

DHT dht(DHTPIN, DHTTYPE);

// Pins des LEDs
#define LED_JAUNE 5
#define LED_VERTE 6
#define LED_ROUGE 9

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(LED_JAUNE, OUTPUT);
  pinMode(LED_VERTE, OUTPUT);
  pinMode(LED_ROUGE, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature(); // Lire la température

  Serial.print("Température : ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Conditions selon la température
  if (temperature >= 25 && temperature <= 40) {   
      digitalWrite(LED_ROUGE, HIGH);
      delay(50);
      digitalWrite(LED_ROUGE, LOW);
      delay(50);
      digitalWrite(LED_ROUGE, HIGH);
      digitalWrite(LED_VERTE, LOW);
    }

    else {
      digitalWrite(LED_VERTE, HIGH);
      digitalWrite(LED_ROUGE, LOW);
    }
delay(500);
}
