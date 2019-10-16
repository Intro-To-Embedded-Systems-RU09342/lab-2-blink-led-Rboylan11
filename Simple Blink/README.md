# Simple Blink
The objective of this lab is to make an LED blink. First the watchdog timer must be turned off. Next the LEDs dirction and output register must be set High. An infinite loop then alternates the LED being on and off with a delay in between each occurance.

The difference in code between the two boards is that there are different pins for the LEDs and buttons. Also, for the FR6989 you must disable the GPIO power-on default high-impedance mode. 