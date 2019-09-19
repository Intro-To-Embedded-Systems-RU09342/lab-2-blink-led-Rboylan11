#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT

    // Configure GPIO
    P9DIR |= BIT7;                          // Clear P1.0 output latch for a defined power-on state
    P9OUT |= BIT7;                          // Set P1.0 to output direction

    P1DIR |= BIT0;
    P1OUT |= BIT0;

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings

    while(1)
    {
        P9OUT ^= BIT7;
        __delay_cycles(100000);             // Toggle LED
        P1OUT ^= BIT0;
        __delay_cycles(100000);
    }
}
