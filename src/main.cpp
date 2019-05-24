#include <Arduino.h>

void setup()
{
  pinMode(3, INPUT);
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
}

void loop()
{
  Serial.println("GEEN AAI");
  if (digitalRead(3))
  {
    Serial.println("AAI");
  }
}