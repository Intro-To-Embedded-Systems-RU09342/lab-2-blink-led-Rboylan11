//Ryan Boylan
//6989
//Simple Blink
//Lab 2.1


#include <msp430.h> 
#include <stdio.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               //stop watchdog timer

    P1DIR |= BIT0;                          //set direction to output
    P1OUT |= BIT0;                          //turn on LED

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode

    while(1)                                //always run while loop
    {
        P1OUT ^= BIT0;                      //toggle LED
        __delay_cycles(1000000);            //delay
    }
}
