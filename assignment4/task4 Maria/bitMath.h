#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SetBit(Reg, bit) (Reg|=1<<bit)
#define ClearBit(Reg, bit) Reg&=~(1<<bit)
#define readBit(Reg, bit) Reg >> bit&1
#define toggle(Reg, value) (Reg ^= value)

#endif