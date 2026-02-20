// Program to display humidity levels using yellow, green, and red LEDs
#include <DHT.h>

#define DHTPIN 2          // DHT sensor data pin
#define DHTTYPE DHT11     // or DHT22 depending on your sensor
DHT dht(DHTPIN, DHTTYPE);

// LED pins
#define YELLOW_LED 5
#define GREEN_LED 4
#define RED_LED 3

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  float humidity = dht.readHumidity(); // Read humidity in %
  
  Serial.print(“Humidity: ”);
  Serial.print(humidity);
  Serial.println(“ %”);


  // Conditions based on temperature
  if (humidity < 60) {
      digitalWrite(YELLOW_LED, HIGH);   // Low temperature
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(RED_LED, LOW);
    }

    else if (humidity >= 60 && humidity <= 70) {
      digitalWrite(YELLOW_LED, LOW);   // Comfortable temperature
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(RED_LED, LOW);
    }
  
    else {
      digitalWrite(YELLOW_LED, LOW);   // High temperature
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(RED_LED, HIGH);
    }

  delay(2000); // Wait before next measurement
}
