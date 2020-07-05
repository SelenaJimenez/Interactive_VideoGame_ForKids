#include <SoftwareSerial.h>
int led=13, RET=10, pin=A0;

void setup()
{
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int prende=analogRead(pin);
  
  Serial.print(prende);
  Serial.print("\n");
  if (prende > 700 && prende <1025)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}

