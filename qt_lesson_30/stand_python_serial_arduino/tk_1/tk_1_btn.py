#!/usr/bin/env python3

import serial
import time
from tkinter import *

root = Tk()
root.geometry("720x480")
root.title("Test")
root.config(bg="lightblue")
root.resizable(False, False)

def switch_on_led():
    print("LED: on")

button_on = Button(root, text="ON", width=10, height=5, bg="green", fg="red", command=switch_on_led)
button_on.place(x=180, y=150)
root.mainloop()

#ToDo class
#button_off  x=440, y=150
#@