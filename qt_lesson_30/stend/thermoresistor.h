#ifndef THERMORESISTOR_H
#define THERMORESISTOR_H
#include <Arduino.h>

class Thermoresistor
{
public:
  Thermoresistor(int user_pin);

  int get_data();
  String get_sensor_name();
  void init();
  
private:
  int m_pin;
  const String m_sensor_name{"Thermoresistor"};
};


#endif
