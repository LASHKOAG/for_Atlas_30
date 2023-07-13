const int led_pin{6};
char incomingData;

void setup()
{
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    incomingData = Serial.read();
    if (incomingData == '1')
    {
      digitalWrite(led_pin, HIGH);
    }

    if (incomingData == '0')
    {
      digitalWrite(led_pin, LOW);
    }
  }

  digitalWrite(led_pin, LOW);
}
