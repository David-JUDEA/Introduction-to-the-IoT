// Program to display temperature readings using blue, green, and red LEDs
#include <DHT.h>

#define DHTPIN 2          // DHT sensor data pin
#define DHTTYPE DHT11     // or DHT22 depending on your sensor
DHT dht(DHTPIN, DHTTYPE);

// LED pins
#define BLUE_LED 5
#define GREEN_LED 4
#define RED_LED 3

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature(); // Read the temperature in °C
  
  Serial.print(“Temperature: ”);
  Serial.print(temperature);
  Serial.println(“ °C”);


  // Conditions based on temperature
  if (temperature < 18) {
        digitalWrite(BLUE_LED, HIGH);   // Low temperature
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RED_LED, LOW);
      }

      else if (temperature >= 18 && temperature <= 22) {
        digitalWrite(BLUE_LED, LOW);   // Comfortable temperature
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RED_LED, LOW);
      }
  
      else {
        digitalWrite(BLUE_LED, LOW);   // High temperature
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RED_LED, HIGH);
      }

  delay(2000); // Wait before next measurement
}
