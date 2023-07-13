#!/usr/bin/env python3

import serial
import time

try:
    port = serial.Serial("/dev/ttyUSB0", 9600, timeout=1)
except:
    print("Error: can't open port")

def led_turn_on():
    port.write(b'1')

def led_turn_off():
    port.write(b'0')


while True:
    led_turn_on()
    time.sleep(1)
    led_turn_off()
    time.sleep(1)