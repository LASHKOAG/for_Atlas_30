#!/usr/bin/env python3

class Car():
	#Car(int user_price)
	def __init__(self, user_price):
		#m_var
		self.price = user_price #m_var = user_price
		self.color_car = "green"
	
	def set_color_car(self, user_color):
		self.color_car = user_color

	def set_wheel_count(self, user_count):
		self.wheel_count = user_count

car_test = Car(123000)
print(car_test.color_car)		

