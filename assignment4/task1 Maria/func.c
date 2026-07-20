#include <stdint.h>
#include <util/delay.h>
#include "CATHODE.h"
#include "Maria_Boules.h"

void Segment_Init(uint8_t GroupName)
{
    GroupName = 0xFF;
}


void DisplayNumber(uint8_t GroupName, uint8_t Number)
{
    uint8_t cathode_num[10] =
    {
        Cathode_0,
        Cathode_1,
        Cathode_2,
        Cathode_3,
        Cathode_4,
        Cathode_5,
        Cathode_6,
        Cathode_7,
        Cathode_8,
        Cathode_9
    };

    GroupName = cathode_num[Number];
}




void DisplayRange(uint8_t GroupName, uint8_t Start, uint8_t End)
{
    for (uint8_t i=Start; i<=End; i++)
    {
        DisplayNumber(GroupName, i);
        
             _delay_ms(1000);
        }
       
    }


