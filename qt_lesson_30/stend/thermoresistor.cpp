#include "thermoresistor.h"

Thermoresistor::Thermoresistor(int user_pin):m_pin{user_pin}
{  
}

void Thermoresistor::init()
{
  pinMode(m_pin, INPUT);
}

int Thermoresistor::get_data()
{
  return analogRead(m_pin)/2;
}

String Thermoresistor::get_sensor_name()
{
  return m_sensor_name;
}
