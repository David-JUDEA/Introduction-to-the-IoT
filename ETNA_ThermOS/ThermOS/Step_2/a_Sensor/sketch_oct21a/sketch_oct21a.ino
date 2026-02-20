// DHT11 temperature and humidity sensor
#include “DHT.h”
// Defines the Arduino pin to which the 
// sensor's DATA pin is connected 
#define DHTPIN 2
// Defines the type of sensor used
#define DHTTYPE DHT11

// Declares an object of type DHT
// The pin and sensor type must be passed as parameters to the object constructor
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  
  // Initialize the DHT11 sensor
  dht.begin();
}
void loop() {
  // Retrieve the temperature and humidity from the sensor and display it
  // on the serial monitor
  Serial.println(“Temperature = ” + String(dht.readTemperature())+“ °C”);
  Serial.println(“Humidity = ” + String(dht.readHumidity())+“ %”);
  // Wait 10 seconds before looping again
  delay(10000);
}
