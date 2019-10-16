# Multiple Blink
The objective of this lab is to blink two LEDs at two different rates which can be visible to the human eye. Two LEDs must be set up individually by setting the direction and output register High for each pin. An infinite loop then toggles the LEDs, each LED having a different delay cycle. Both delay cycles are also large enough so that the blinking can be seen by the human eye. 

The difference in code between the two boards is that there are different pins for the LEDs. Also, for the FR6989 you must disable the GPIO power-on default high-impedance mode. 