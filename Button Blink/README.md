# Button Blink

The goal of this code is to make an LED blink when a button is pressed. First the watchdog timer must be stopped. The code consists only of setting the direction register for the LED as well as setting up the button with a pull up resistor and enabling the pin. Then a while loop will run forever checking if the button is pressed. When the button is pressed the state of the LED is changed, then has a delay. Now the code waits again for the next button press. The result of this code is that the LED will blink while the button is pressed.

The difference in code between the two boards is that there are different pins for the LEDs and buttons. Also, for the FR6989 you must disable the GPIO power-on default high-impedance mode 