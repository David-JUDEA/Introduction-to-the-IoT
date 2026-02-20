void setup() // setup is executed once after reset
{                
  pinMode(2, OUTPUT); // pin led1 (2) is initialized as an output
  pinMode(3, OUTPUT); // pin led2 (3) is initialized as an output  
  pinMode(4, OUTPUT); // pin led3 (4) is initialized as an output
  pinMode(5, OUTPUT); // pin led4 (5) is initialized as an output        
}
void loop() // loop is run indefinitely
{
  //Slow
  digitalWrite(2, HIGH);   // turns on LED1; we could also have written 1 instead of HIGH
  digitalWrite(3, LOW);   // turns off LED2; we could also have written 0 instead of LOW
  digitalWrite(4, LOW);   // turns off LED3
  digitalWrite(5, LOW);   // turns off LED4
  delay(1000);               // waits for 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, HIGH);   // turns on LED2
  digitalWrite(4, LOW);   // turns off LED3
  digitalWrite(5, LOW);   // turns off LED4
  delay(1000);               // wait 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, LOW);   // turns off LED2
  digitalWrite(4, HIGH);   // turns on LED3
  digitalWrite(5, LOW);   // turns off LED4
  delay(1000);               // wait 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, LOW);   // turns off LED2
  digitalWrite(4, LOW);   // turns off LED3
  digitalWrite(5, HIGH);   // turns on LED4
  delay(1000);               // wait 1/2 second
  
  //Fast
  digitalWrite(2, HIGH);   // turns LED1 on; we could also have written 1 instead of HIGH
  digitalWrite(3, LOW);   // turns LED2 off; we could also have written 0 instead of LOW
  digitalWrite(4, LOW);   // turns LED3 off
  digitalWrite(5, LOW);   // turns off LED4
  delay(300);               // wait for 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, HIGH);   // turns on LED2
  digitalWrite(4, LOW);   // turns off LED3
  digitalWrite(5, LOW);   // turns off LED4
  delay(300);               // wait 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, LOW);   // turns off LED2
  digitalWrite(4, HIGH);   // turns on LED3
  digitalWrite(5, LOW);   // turns off LED4
  delay(300);               // wait 1/2 second
  digitalWrite(2, LOW);   // turns off LED1
  digitalWrite(3, LOW);   // turns off LED2
  digitalWrite(4, LOW);   // turns off LED3
  digitalWrite(5, HIGH);   // turns on LED4
  delay(300);  
}
