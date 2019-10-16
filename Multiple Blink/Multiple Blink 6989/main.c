//Ryan Boylan
//6989
//Multiple Blink
//Lab 2.2

#include <msp430.h>
#include <stdio.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;              //stop watchdog timer

        P1DIR |= BIT0;                     //set direction to output
        P1OUT |= BIT0;                     //turn on LED

        P9DIR |= BIT7;                     //set direction to output
        P9OUT |= BIT7;                     //turn on LED

        PM5CTL0 &= ~LOCKLPM5;              // Disable the GPIO power-on default high-impedance mode

        while(1)                           //always run in while loop

        {
            P1OUT ^= BIT0;                      //toggle Red LED
            __delay_cycles(100000);             //delay
            P9OUT ^= BIT7;                      //toggle Green LED
            __delay_cycles(200000);             //delay
            P1OUT ^= BIT0;                      //toggle Red LED
            __delay_cycles(100000);             //delay
        }
}
