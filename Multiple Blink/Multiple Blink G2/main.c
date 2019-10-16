//Ryan Boylan
//G2
//Multiple Blink
//Lab 2.2

#include <msp430.h> 

int main(void)

{
    WDTCTL = WDTPW | WDTHOLD;               //stop watchdog timer

            P1DIR |= BIT0;                  //set direction to output
            P1OUT |= BIT0;                  //turn on LED

            P1DIR |= BIT6;                  //set direction to output
            P1OUT |= BIT6;                  //turn on LED

            while(1)                        //always run in while loop

            {
                P1OUT ^= BIT0;                      //toggle Green LED
                __delay_cycles(100000);             //delay
                P1OUT ^= BIT6;                      //toggle Red LED
                __delay_cycles(200000);             //delay
                P1OUT ^= BIT0;                      //toggle Green LED
                __delay_cycles(100000);             //delay
            }

}
