#ifndef _BITMATH_H
#define _BITMATH_H

#define SetBit(Reg,BitNo)    (Reg|=(1<<BitNo))
#define ClearBit(Reg,BitNo)  (Reg&=~(1<<BitNo))
#define ReadBit(Reg,BitNo)  ((Reg>>BitNo)&1)
#define ToggleBit(Reg,BitNo)   (Reg^=(1<<BitNo))


#endif