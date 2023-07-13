#!/usr/bin/env python3

import serial
import time

class ComPort():
    def __init__(self, com_speed, delay_time):
        """This class for serial connect"""
        self.speed = com_speed
        self.delaymsg = delay_time
        