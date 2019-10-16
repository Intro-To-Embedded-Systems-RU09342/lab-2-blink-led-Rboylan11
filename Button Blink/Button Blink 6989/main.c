//Ryan Boylan
//6989
//Button Blink
//Lab 2.3

#include <msp430.h> 
#include <stdio.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;           // stop watchdog timer

    PM5CTL0 &= ~LOCKLPM5;               // Disable the GPIO power-on default high-impedance mode

    P1DIR = BIT0;                       //set direction to output
    P1REN = BIT1;                       //enable resistor
    P1OUT = BIT1;                       //turn on pin

    while( 1 ) {                        //always run in while loop

        if((P1IN & BIT1) !=BIT1)        //if button is pressed
            P1OUT ^= BIT0;              //toggle LED
            __delay_cycles(180000);     //delay
    }
}
