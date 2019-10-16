//Ryan Boylan
//G2
//Button Blink
//Lab 2.3

#include <msp430.h> 

int main(void)

{

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1DIR = BIT0;           //set direction to output
    P1REN = BIT3;           //enable resistor
    P1OUT = BIT3;           //turn on pin

        while( 1 ) {                        //always run in while loop
                if((P1IN & BIT3) !=BIT3)    //if button is pressed
                {
                    P1OUT ^= BIT0;              //toggle LED
                    __delay_cycles(180000);     //delay
                }
        }
}
