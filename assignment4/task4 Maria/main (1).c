#include <stdint.h>
#include <util/delay.h>
#include "Maria_Boules.h"
#include "CATHODE.h"
#include "bitMath.h"

void main (void)
{
    DDRA_Reg = 0xFF;
    while (1)
    {
        PORTA_Reg = 0xFF;
        _delay_ms(2000);
         for (uint8_t i =0; i<8; i++)
        {
            ClearBit(PORTA_Reg, i);
            _delay_ms(1000);
        }
        for (uint8_t i=0; i<5; i++)
        {
             toggle(PORTA_Reg,255);
               _delay_ms(2000);
        }
       
    }
}