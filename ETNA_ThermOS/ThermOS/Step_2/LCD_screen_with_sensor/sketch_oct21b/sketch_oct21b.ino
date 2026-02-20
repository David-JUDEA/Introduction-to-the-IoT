#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN 2 // DATA pin -> pin 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 20, 4);
 
void setup() {
  lcd.init(); // initialize the display
  lcd.backlight();
  dht.begin();
}
 
void loop()
{
 
lcd.backlight(); // activate the backlight
lcd.clear(); // clear the contents of the LCD display
lcd.setCursor(0, 0); // position at the first line
lcd.print(“Temperature=”);
lcd.print((int)dht.readTemperature()); // Display the temperature on the display
lcd.print(“C”);
lcd.setCursor(0,1); // move to the second line
lcd.print(“Humidity   =”);
lcd.print((int)dht.readHumidity()); // Display the humidity value on the display
lcd.print(“%”);
delay(2000);
}
