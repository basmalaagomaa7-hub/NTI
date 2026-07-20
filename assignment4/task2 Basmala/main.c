#include <stdint.h>
#include <util/delay.h>
#include <util/delay.h>
#include "task2\Led_interface.h"
#include "task2\Led_private.h"

void main()
{
     Led_Init( );

    while(1)
    {
        //to test source connection
       Led_On(SourceConnection);
        _delay_ms(1000);

        Led_Off(SourceConnection);
        _delay_ms(1000);
        
        //to test sink connection
        Led_On(SinkConnection);
       _delay_ms(1000);

       Led_Off(SinkConnection);
       _delay_ms(1000);
    }
    }
    
