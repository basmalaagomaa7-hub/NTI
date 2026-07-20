#include <stdint.h>
#include <util/delay.h>
#include "func.h"

void main (void)
{
    while (1)
    {

          /* DDRA_Reg=0xFF;
  

    PORTA_Reg = Cathode_1; */

    Segment_Init(DDRA_Reg);

     DisplayNumber(PORTA_Reg, 0);

     _delay_ms(2000);

     DisplayRange(PORTA_Reg, 0, 9);

     _delay_ms(2000);

    }


    }
    

 
 