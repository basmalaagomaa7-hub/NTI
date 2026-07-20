
#include <stdint.h>
#include <util/delay.h>


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Maria_Boules.h"
#include "bitMath.h"
#include "CATHODE.h"


#endif

void Segment_Init(uint8_t GroupName);


void DisplayNumber(uint8_t GroupName, uint8_t Number);

void DisplayRange(uint8_t GroupName, uint8_t Start, uint8_t End);