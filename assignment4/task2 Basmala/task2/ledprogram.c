#include "Led_Private.h"
#include "bitmath.h"
#include "atmega32.h"
#include <stdint.h>


void Led_Init()
{
   SetBit (DDRA_Reg,0);//sink led
   SetBit (DDRD_Reg,0);//source led
}
void Led_On(uint8_t ConnectionType)
{
   if(ConnectionType==SourceConnection)
        {
         SetBit (PORTD_Reg,0);
        }
        else if (ConnectionType==SinkConnection)
        {
         ClearBit (PORTA_Reg,0);
        }
}
void Led_Off(uint8_t ConnectionType)
{
   if(ConnectionType==SourceConnection)
        {
         ClearBit (PORTD_Reg,0);
        }
        else if (ConnectionType==SinkConnection)
        {
         SetBit (PORTA_Reg,0);
        }
}