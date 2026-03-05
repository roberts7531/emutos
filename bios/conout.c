/*
 * conout.c - lowlevel color model dependent screen handling routines
 *
 *
 * Copyright (C) 2004 by Authors (see below)
 * Copyright (C) 2016-2020 The EmuTOS development team
 *
 * Authors:
 *  MAD     Martin Doering
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

/*
 * NOTE: the code currently assumes that the font width is 8 bits.
 * If we ever add a 16x32 font, the code will need changing!
 */

#include "emutos.h"
#include "lineavars.h"
#include "tosvars.h"            /* for v_bas_ad */
#include "sound.h"              /* for bell() */
#include "string.h"
#include "conout.h"
#include "../cli/v9958.h"





volatile UBYTE* vramBase = (volatile UBYTE*)0xc0800000;
/*
TOS COLORS
0  = Black
1  = Red
2  = Green
3  = Yellow
4  = Blue
5  = Magenta
6  = Cyan
7  = White
MINE:
0 black
1 red
2 orange
3 yellow
4 green
5 blue
6 indigo
7 white
*/
static const UBYTE tos_to_hw[16] = {
    0, // black
    1, // red
    4, // orange
    3, // yellow
    5, // green
    6, // blue
    2, // indigo
    7, // white

     0, // black
    1, // red
    4, // orange
    3, // yellow
    5, // green
    6, // blue
    2, // indigo
    7, // white
};
static inline UBYTE *attr_ptr(int x, int y)
{
    return vramBase + 4800 + y*80 + x;
}
void setBlink(int x, int y, BOOL blink ){
   // UBYTE oldAttr = *(vramBase+4800 + (y*80)+x);
    //if (blink) oldAttr |= 0x80;
    //else oldAttr &= 0x7f;
    //*(vramBase+4800 + (y*80)+x) = oldAttr;
}
void setInvert(int x, int y, BOOL invert ){
    //UBYTE oldAttr = *(vramBase+4800 + (y*80)+x);
    //if (invert) oldAttr |= 0x40;
    //else oldAttr &= 0xBF;
    //*(vramBase+4800 + (y*80)+x) = oldAttr;
}
void setFg(int x, int y, UBYTE fg)
{
    //UBYTE *a = attr_ptr(x, y);
   // *a = (*a & 0xC7) | ((tos_to_hw[fg]&7) << 3);
}

void setBg(int x, int y, UBYTE bg)
{
    //UBYTE *a = attr_ptr(x, y);
    //*a = (*a & 0xF8) | (~(tos_to_hw[(bg)]))&7;
}



void invert_cell(int x, int y){
    //UBYTE *attr = vramBase + 4800 + y*80 + x;
    //*attr ^= 0x40;   // toggle invert bit

}
/*
 * move_cursor - move the cursor.
 *
 * move the cursor and update global parameters
 * erase the old cursor (if necessary) and draw new cursor (if necessary)
 *
 * in:
 * d0.w    new cell X coordinate
 * d1.w    new cell Y coordinate
 */

void move_cursor(int x, int y)
{
    /* update cell position */
	
    /* clamp x,y to valid ranges */
    if (x < 0)
        x = 0;
    else if (x > v_cel_mx)
        x = v_cel_mx;

    if (y < 0)
        y = 0;
    else if (y > v_cel_my)
        y = v_cel_my;

    v_cur_cx = x;
    v_cur_cy = y;
    return;
}
    /* is cursor visible? */
    /*if (!(v_stat_0 & M_CVIS)) {
        /* not visible 
        v_cur_ad = cell_addr(x, y);             /* just set new coordinates 
        return;                                 /* and quit 
    }

    /* is cursor flashing? 
    if (v_stat_0 & M_CFLASH) {
        v_stat_0 &= ~M_CVIS;                    /* yes, make invisible...semaphore. 

        /* is cursor presently displayed ? 
        if (!(v_stat_0 & M_CSTATE)) {
            /* not displayed 
            v_cur_ad = cell_addr(x, y);         /* just set new coordinates 

            /* show the cursor when it moves 
            neg_cell(v_cur_ad);                 /* complement cursor. 
            v_stat_0 |= M_CSTATE;
            v_cur_tim = v_period;               /* reset the timer. 

            v_stat_0 |= M_CVIS;                 /* end of critical section. 
            return;
        }
    }

    /* move the cursor after all special checks failed 
    neg_cell(v_cur_ad);                         /* erase present cursor 

    v_cur_ad = cell_addr(x, y);                 /* fetch x and y coords. 
    neg_cell(v_cur_ad);                         /* complement cursor. 

    /* do not flash the cursor when it moves 
    v_cur_tim = v_period;                       /* reset the timer. 

    v_stat_0 |= M_CVIS;                         /* end of critical section. 
}



/*
 * ascii_out - prints an ascii character on the screen
 *
 * in:
 *
 * ch.w      ascii code for character
 */

void ascii_out(int ch)
{


    if (ch == '\r') {
        // Carriage return: move cursor to the beginning of the line
        v_cur_cx = 0;
    }
    if (ch == '\n') {
        // Newline: move cursor to the beginning of the next line
        v_cur_cx = 0;
        v_cur_cy++;
    } else {
        // Print the character at the current cursor position
        //*(vramBase + (v_cur_cy * 80) + v_cur_cx) = ch;
        setBg(v_cur_cx,v_cur_cy,v_col_bg);
        setFg(v_cur_cx,v_cur_cy,v_col_fg);

        v_cur_cx++;
    }
    
    // Handle scrolling if necessary
    if (v_cur_cx > 80) {
        v_cur_cx = 0;
        v_cur_cy++;
    }
    if (v_cur_cy > v_cel_my) {
        scroll_up(0);
        v_cur_cy = v_cel_my;
    }


   
}



/*
 * blank_out - Fills region with the background color.
 *
 * Fills a cell-word aligned region with the background color.
 *
 * The rectangular region is specified by a top/left cell x,y and a
 * bottom/right cell x,y, inclusive.  Routine assumes top/left x is
 * even and bottom/right x is odd for cell-word alignment. This is,
 * because this routine is heavily optimized for speed, by always
 * blanking as much space as possible in one go.
 *
 * in:
 *   topx - top/left cell x position (must be even)
 *   topy - top/left cell y position
 *   botx - bottom/right cell x position (must be odd)
 *   boty - bottom/right cell y position
 */

void blank_out(int topx, int topy, int botx, int boty)
{
    int x,y;
    for(y=topy;y<=boty;y++){
        for(x=topx;x<=botx;x++){
           // *(vramBase + (y*80)+x) = 0;
            //*(vramBase + 4800+(y*80)+x) = 0;
            setBg(x,y,v_col_bg);
        }
    }
}



/*
 * scroll_up - Scroll upwards
 *
 *
 * Scroll copies a source region as wide as the screen to an overlapping
 * destination region on a one cell-height offset basis.  Two entry points
 * are provided:  Partial-lower scroll-up, partial-lower scroll-down.
 * Partial-lower screen operations require the cell y # indicating the
 * top line where scrolling will take place.
 *
 * After the copy is performed, any non-overlapping area of the previous
 * source region is "erased" by calling blank_out which fills the area
 * with the background color.
 *
 * in:
 *   top_line - cell y of cell line to be used as top line in scroll
 */

void scroll_up(UWORD top_line)
{
    int y,x;
    for(y=top_line;y<v_cel_my;y++){
        for(x=0;x<80;x++){
            //*(vramBase + (y*80)+x) = *(vramBase + ((y+1)*80)+x);
           // *(vramBase + 4800+(y*80)+x) = *(vramBase + 4800+ ((y+1)*80)+x);

        }
    }
    /* exit thru blank out, bottom line cell address y to top/left cell */
    blank_out(0, v_cel_my , 80, v_cel_my);
}



/*
 * scroll_down - Scroll (partially) downwards
 */

void scroll_down(UWORD start_line)
{
    int y,x;
    for(y=v_cel_my;y>start_line;y--){
        for(x=0;x<80;x++){
            //*(vramBase + (y*80)+x) = *(vramBase + ((y-1)*80)+x);
        }
    }
    
    
    

    /* exit thru blank out */
    blank_out(0, start_line , 80, start_line);
}
