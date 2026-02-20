// Program to display an alarm signal and weather information on the LCD screen.
#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN 2          // Data pin for the DHT sensor
#define DHTTYPE DHT11     // or DHT22 depending on your sensor

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 20, 4);


// LED pins
#define YELLOW_LED 5
#define GREEN_LED 6
#define RED_LED 9

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();

  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  float humidity = dht.readHumidity(); // Read humidity in %
  float temperature = dht.readTemperature(); // Read temperature

  Serial.print(“Humidity: ”);
  Serial.print(humidity);
  Serial.println(“ %”);

  Serial.print(“Temperature: ”);
  Serial.print(temperature);
  Serial.println(“ °C”);
  
  // Conditions based on humidity
  if (humidity >= 30 && humidity <= 50) {
      digitalWrite(YELLOW_LED, HIGH);   // Low humidity
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_RED, LOW);
    }

    else if (humidity >= 50 && humidity <= 70) {
      digitalWrite(LED_YELLOW, HIGH);   // Comfortable humidity
      digitalWrite(LED_GREEN, HIGH);
      digitalWrite(LED_RED, LOW);
    }
  
    else {
      digitalWrite(LED_YELLOW, HIGH);   // High humidity
      digitalWrite(LED_GREEN, HIGH);
      digitalWrite(LED_RED, HIGH);
    }

  // Visual signal on LCD humidity display
  if (humidity >= 30 && humidity <= 45) {
      lcd.backlight(); // activates backlighting
      lcd.setCursor(0, 0); // positions cursor at first line
      lcd.print(“Humidity low!”);
      delay(300);
      lcd.setCursor(0, 0); // position cursor on first line
      lcd.print(“                 ”);
      delay(300);
    }

    else {
      lcd.setCursor(0, 0); // position cursor on first line
      lcd.print(“Humidity ok!”);
    }
  
  // Visual signal on LCD for temperature
  if (temperature >= 25 && temperature <= 40) {
      lcd.backlight(); // activate backlight
      lcd.setCursor(0, 1); // position cursor on second line
      lcd.print(“Temperature high!”);
      delay(300);
      lcd.setCursor(0, 1); 
      lcd.print(“                     ”);
      delay(300);
    }

    else {
      lcd.setCursor(0,1); // position cursor on second line
      lcd.print(“Temperature ok!”);
    }

  delay(1500);
}
