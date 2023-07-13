#include "relay.h"
#include "portmonitor.h"
#include "photoresistor.h"
#include "led.h"
#include "thermoresistor.h"

Relay* relay_lamp = new Relay(8);
PortMonitor* port_monitor = new PortMonitor();
Photoresistor* photoresistor = new Photoresistor(A0);
Led* led_white = new Led(4);
Thermoresistor* thermoresistor = new Thermoresistor(A0);

int ph{0};
int th{0};

void setup()
{
  relay_lamp->init();
  port_monitor->init();
  photoresistor->init();
  led_white->init();
  thermoresistor->init();
}

void loop()
{
  relay_lamp->RelayOff();
  
  ph = photoresistor->get_data();
  port_monitor->print_data(photoresistor->get_sensor_name(), ph);

  th = thermoresistor->get_data();
  port_monitor->print_data(thermoresistor->get_sensor_name(), th);

  port_monitor->print_data("");
  
  led_white->led_off();

  delay(500);
  
//  delay(60000);
//  if (relay_lamp != NULL)
//  {
//    delete relay_lamp;
//  }
}
