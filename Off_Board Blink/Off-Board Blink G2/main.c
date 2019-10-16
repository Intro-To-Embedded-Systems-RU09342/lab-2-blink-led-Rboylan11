//Ryan Boylan
//G2
//Off-Board Blink
//Lab 2.4

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               //stop watchdog timer
    P2DIR |= BIT2;                          //set direction to output
    P2OUT |= BIT2;                          //turn pin on
    P2DIR |= BIT3;                          //set direction to output
    P2OUT |= BIT3;                          //turn pin on

    while(1)                                //always run in while loop
    {
        P2OUT ^= BIT2;                      //toggle LED for pin 2.2
        __delay_cycles(100000);             //delay
        P2OUT ^= BIT3;                      //toggle LED for pin 2.3
        __delay_cycles(250000);             //delay
        P2OUT ^= BIT2;                      //toggle LED for pin 2.2
        __delay_cycles(100000);             //delay
    }
}
