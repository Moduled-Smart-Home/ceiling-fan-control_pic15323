#include "device_config.h"

#ifndef INTERRUPT_MANAGER_H
#define INTERRUPT_MANAGER_H

#define TIME_HOLD_US 1000
#define TIME_TRIGG_MAX_US 7333

typedef enum {OFF, ON_DIR1, ON_DIR2} fan_state_t;
typedef enum {ZERO_CROSSED, TRIGGED, READY} triac_state_t;

fan_state_t fan_state;
triac_state_t triac_fan;

unsigned short TIMER_SETUP_POT, TIMER_SETUP_HOLD;

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will enable global interrupts.
 * @Example
    INTERRUPT_GlobalInterruptEnable();
 */
#define INTERRUPT_GlobalInterruptEnable() (INTCONbits.GIE = 1)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will disable global interrupts.
 * @Example
    INTERRUPT_GlobalInterruptDisable();
 */
#define INTERRUPT_GlobalInterruptDisable() (INTCONbits.GIE = 0)
/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will enable peripheral interrupts.
 * @Example
    INTERRUPT_PeripheralInterruptEnable();
 */
#define INTERRUPT_PeripheralInterruptEnable() (INTCONbits.PEIE = 1)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will disable peripheral interrupts.
 * @Example
    INTERRUPT_PeripheralInterruptDisable();
 */
#define INTERRUPT_PeripheralInterruptDisable() (INTCONbits.PEIE = 0)


#endif  // INTERRUPT_MANAGER_H
/**
 End of File
*/
