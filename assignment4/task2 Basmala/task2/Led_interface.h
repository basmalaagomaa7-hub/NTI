#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#include <stdint.h>


void Led_Init( );
void Led_On(uint8_t ConnectionType);
void Led_Off(uint8_t ConnectionType);

#endif