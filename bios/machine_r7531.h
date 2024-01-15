#ifndef MACHINE_ROBERTS7531_H
#define MACHINE_ROBERTS7531_H
#include "emutos.h"
void r7531_ikbd_init(void);
UBYTE r7531_ikbd_cinRdy(void);
UBYTE r7531_ikbd_conin(UBYTE* isAscii);
void r7531_ikbd_writeb(UBYTE byte);
UBYTE r7531_ikbd_readb(WORD timeout);
#endif
