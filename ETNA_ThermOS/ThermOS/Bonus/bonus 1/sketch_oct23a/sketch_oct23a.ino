// Programme pour faire un effect respiration avec un LED.
int ledpin=10; // definition du port 10 pour controler le LED

void setup ()
{
  pinMode (ledpin, OUTPUT);
}

void loop()
{
    for (int a = 0; a <= 65; a++) // Boucle, controle la lumière des LEDs en augmentant la lumière
    {
      analogWrite (ledpin, a) ;
      if (a < 20)
        delay (70) ;
      else
        delay (10);
    }

  for (int a = 65; a >= 0; a--) // Boucle, controle la lumière des LEDs en diminuant la lumière
  {
    analogWrite (ledpin, a) ;
    if (a < 20)
      delay (100);
    else
      delay (70);
  }

  delay (200);
}
