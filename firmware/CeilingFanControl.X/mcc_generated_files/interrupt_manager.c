#include "interrupt_manager.h"
#include "mcc.h"

void __interrupt() INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(INTCONbits.PEIE == 1)
    {
        if(PIE3bits.BCL1IE == 1 && PIR3bits.BCL1IF == 1)
        {
            MSSP1_InterruptHandler();
        } 
        else if(PIE3bits.SSP1IE == 1 && PIR3bits.SSP1IF == 1)
        {
            MSSP1_InterruptHandler();
        }
        else if(INTE && INTF)
        {
            INTEDG = !INTEDG;
            INTF = 0;
            
            if (fan_state != OFF) {
                TMR1 = TIMER_SETUP_POT;
                triac_fan = ZERO_CROSSED;
                TMR1IE = 1; //enable TMR1 interrupt
                TMR1ON = 1; //start TMR1
            }
            
        }
        else if (TMR1IE && TMR1IF) {
            TMR1IF = 0;
            if (triac_fan == ZERO_CROSSED) {
                
                LATC3 = 1;
                
//                switch (fan_state) {
//                    case ON_DIR1:
//                        setFanDir1(1);
//                        break;
//
//                    case ON_DIR2:
//                        setFanDir2(1);
//                        break;
//                }

                TMR1ON = 0;
                TMR1 = TIMER_SETUP_HOLD;
                TMR1ON = 1;
                
                triac_fan = TRIGGED;
            }

            else if (triac_fan == TRIGGED) {
                LATC3 = 0;
                LATC2 = !LATC2;
                triac_fan = READY;
                TMR1IE = 0; //disable TMR1 interrupt
                TMR1ON = 0; //stop TMR1
            }
        }
        else
        {
            //Unhandled Interrupt
        }
    }      
    else
    {
        //Unhandled Interrupt
    }
}
/**
 End of File
*/
