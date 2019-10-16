//Ryan Boylan
//G2
//Simple Blink
//Lab 2.1

#include <msp430.h> 

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               //stop watchdog timer

    P2DIR |= BIT5;                          //set to output direction
    P2OUT |= BIT5;                          //turn on LED

    while(1)                                //always run in while loop
    {
        P2OUT ^= BIT5;                      //toggle LED
        __delay_cycles(1000000);            //delay
     }
}
