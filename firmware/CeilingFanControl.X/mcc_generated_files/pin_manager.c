#include "pin_manager.h"


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATA = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISA = 0x37;
    TRISC = 0x3F;

    /**
    ANSELx registers
    */
    ANSELC = 0x00;
    ANSELA = 0x00;

    /**
    WPUx registers
    */
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */
    ODCONA = 0x00;
    ODCONC = 0x00;

    /**
    SLRCONx registers
    */
    SLRCONA = 0x37;
    SLRCONC = 0x3F;

    /**
    INLVLx registers
    */
    INLVLA = 0x3F;
    INLVLC = 0x3F;
    
	
    RC0PPS = 0x15;   //RC0->MSSP1:SCL1;    
    SSP1CLKPPS = 0x10;   //RC0->MSSP1:SCL1;    
    RC1PPS = 0x16;   //RC1->MSSP1:SDA1;    
    SSP1DATPPS = 0x11;   //RC1->MSSP1:SDA1;    
}
  
void PIN_MANAGER_IOC(void)
{   
}

/**
 End of File
*/