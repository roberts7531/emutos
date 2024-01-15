#include "machine_r7531.h"
#include "duart68681.h"
#include "serport.h"
#include "kprint.h"
#include "delay.h"
#include "asm.h"

void r7531_ikbd_init(void){
	/*MOVE.B #$30,CRA Reset Port A transmitter
 	MOVE.B #$20,CRA Reset Port A receiver
 	MOVE.B #$10,CRA Reset Port A MR (mode register) pointer*/
	write_duart(DUART_CRB,0x30);
	write_duart(DUART_CRB,0x20);	
	write_duart(DUART_CRB,0x10);		
	/*MOVE.B #$BB,CSRA Set both Rx, Tx speeds to 19200 baud*/
 	write_duart(DUART_CSRB,0xCC);
 	/* MOVE.B #$93,MRA Set port A to 8 bit character, no parity*/
 	write_duart(DUART_MRB,0x13);
 	write_duart(DUART_MRB,0x17);
 	write_duart(DUART_CRB,0x05);

	write_duart(DUART_THRA,'a');
	return;
}
// 0 no -1 yes
UBYTE r7531_ikbd_cinRdy(void){
	return bconstatDUARTB();


}




static void duart_out(UBYTE byte){
	while(!(read_duart(DUART_SRA)&DUART_SR_TXRDY)){}
	write_duart(DUART_THRA,byte);
}

void r7531_ikbd_writeb(UBYTE byte){
	duart_out(byte);
} 

UBYTE r7531_ikbd_readb(WORD timeout){
	WORD i;
	for (i = 0; i < timeout; i++)
    	{
        	if (r7531_ikbd_cinRdy())
            		return bconinDUARTB();

        	delay_loop(loopcount_1_msec);
    	}
	return 0;
}
