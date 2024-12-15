#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    //Enable input INT interrupt
    INTE = 1;
    INTEDG = 0; //interrupt on the falling edge
    
    //Configure IO ports
    TRISCbits.TRISC3 = 0; //RC3 as output
    TRISCbits.TRISC2 = 0; //RC3 as output
    TRISAbits.TRISA2 = 1; //INT as input
    
    //Configure TMR1
    TMR1CLK = 1; //source: Fosc/4
    T1CONbits.CKPS = 0; //prescale 1:1
    TMR1ON = 0;
    
    
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    I2C1_Open();
    
    LATC2 = 1;
    
    fan_state = ON_DIR1;
    triac_fan = READY;
    
    TIMER_SETUP_POT = 65535 - 0.5*TIME_TRIGG_MAX_US*TICKS_PER_US; // start with minimum power
    TIMER_SETUP_HOLD = 65535 - (TIME_HOLD_US * TICKS_PER_US);
  
    
    while (1)
    {
        // Add your application code
    }
}
/**
 End of File
*/