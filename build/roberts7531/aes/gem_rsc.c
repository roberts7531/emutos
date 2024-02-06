/*
 * gem_rsc.c
 *
 * Generated from gem.rsc and gem.def by grd v5.2
 *
 * Copyright 2013-2024 The EmuTOS development team
 *
 * This software is licenced under the GNU General Public License.
 * Please see LICENSE.TXT for further information.
 */
#include "emutos.h"
#include "string.h"
#include "obdefs.h"
#include "aesext.h"
#include "gemrslib.h"
#include "gem_rsc.h"
#include "nls.h"

static const char rs_str________________[] = "_ ________.___ ";
static const char rs_str_xF[] = "xF";


static char rs_te_text[168];

TEDINFO rs_tedinfo[RS_NTED];

static const TEDINFO rs_tedinfo_rom[] = {
    {&rs_te_text[0],
     "______________________________________",
     "P",
     IBM, 1, TE_LEFT, 4352, 0, 0, 39, 39},      /* 0 */

    {&rs_te_text[39],
     N_("Selection: ________.___"),
     "F",
     IBM, 1, TE_LEFT, 4352, 0, 0, 12, 24},      /* 1 */

    {0L,
     "",
     "",
     IBM, 6, TE_CNTR, 4513, 0, -1, 1, 1},       /* 2 */

    {&rs_te_text[51],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 3 */

    {&rs_te_text[64],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 4 */

    {&rs_te_text[77],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 5 */

    {&rs_te_text[90],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 6 */

    {&rs_te_text[103],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 7 */

    {&rs_te_text[116],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 8 */

    {&rs_te_text[129],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 9 */

    {&rs_te_text[142],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 10 */

    {&rs_te_text[155],
     (char *) rs_str________________,
     (char *) rs_str_xF,
     IBM, 1, TE_LEFT, 4352, 0, 0, 13, 16},      /* 11 */

    {0L,
     "",
     "",
     IBM, 1, TE_CNTR, 4352, 0, 1, 2, 1}         /* 12 */
};

static const WORD rs_bitblk0[] = {
    0x0000, 0x0000, 0x0001, 0x8000,
    0x0002, 0x4000, 0x0002, 0x4000,
    0x0004, 0x2000, 0x0005, 0xA000,
    0x0009, 0x9000, 0x000B, 0xD000,
    0x0013, 0xC800, 0x0017, 0xE800,
    0x0026, 0x6400, 0x002C, 0x3400,
    0x004C, 0x3200, 0x005C, 0x3A00,
    0x009C, 0x3900, 0x00BC, 0x3D00,
    0x013C, 0x3C80, 0x017E, 0x7E80,
    0x027E, 0x7E40, 0x02FE, 0x7F40,
    0x04FE, 0x7F20, 0x05FE, 0x7FA0,
    0x09FF, 0xFF90, 0x0BFF, 0xFFD0,
    0x13FE, 0x7FC8, 0x17FC, 0x3FE8,
    0x27FC, 0x3FE4, 0x2FFE, 0x7FF4,
    0x4FFF, 0xFFF2, 0x4000, 0x0002,
    0x7FFF, 0xFFFE, 0x0000, 0x0000
};

static const WORD rs_bitblk1[] = {
    0x0000, 0x0000, 0x7FFF, 0xFFFE,
    0x4000, 0x0002, 0x4FFF, 0xFFF2,
    0x2FFF, 0xFFF4, 0x27F8, 0x3FE4,
    0x17E0, 0x1FE8, 0x13C0, 0x0FC8,
    0x0BC3, 0x07D0, 0x09E7, 0x8790,
    0x05FF, 0x87A0, 0x04FF, 0x8720,
    0x02FF, 0x0F40, 0x027E, 0x1E40,
    0x017C, 0x3E80, 0x013C, 0x7C80,
    0x00BC, 0x7D00, 0x009F, 0xF900,
    0x005E, 0x7A00, 0x004C, 0x3200,
    0x002C, 0x3400, 0x0026, 0x6400,
    0x0017, 0xE800, 0x0013, 0xC800,
    0x000B, 0xD000, 0x0009, 0x9000,
    0x0005, 0xA000, 0x0004, 0x2000,
    0x0002, 0x4000, 0x0002, 0x4000,
    0x0001, 0x8000, 0x0000, 0x0000
};

static const WORD rs_bitblk2[] = {
    0x0000, 0x0000, 0x0000, 0x0000,
    0x003F, 0xFC00, 0x0040, 0x0200,
    0x009F, 0xF900, 0x013F, 0xFC80,
    0x027F, 0xFE40, 0x04FF, 0xFF20,
    0x09FF, 0xFF90, 0x13FF, 0xFFC8,
    0x27EF, 0xF7E4, 0x2FC7, 0xE3F4,
    0x2FE3, 0xC7F4, 0x2FF1, 0x8FF4,
    0x2FF8, 0x1FF4, 0x2FFC, 0x3FF4,
    0x2FFC, 0x3FF4, 0x2FF8, 0x1FF4,
    0x2FF1, 0x8FF4, 0x2FE3, 0xC7F4,
    0x2FC7, 0xE3F4, 0x27EF, 0xF7E4,
    0x13FF, 0xFFC8, 0x09FF, 0xFF90,
    0x04FF, 0xFF20, 0x027F, 0xFE40,
    0x013F, 0xFC80, 0x009F, 0xF900,
    0x0040, 0x0200, 0x003F, 0xFC00,
    0x0000, 0x0000, 0x0000, 0x0000
};


const BITBLK rs_bitblk[] = {
    { (void *)rs_bitblk0, 4, 32, 0, 0, 1 },
    { (void *)rs_bitblk1, 4, 32, 0, 0, 1 },
    { (void *)rs_bitblk2, 4, 32, 0, 0, 1 },
};


OBJECT rs_obj[RS_NOBS];

/* Strings for the alert box */
static char msg_str[MAX_LINENUM][MAX_LINELEN+1];
static char msg_but[MAX_BUTNUM][MAX_BUTLEN+1];

static const OBJECT rs_obj_rom[] = {
#define TR0 0
/* TREE 0 */  /* FSELECTR */

   { -1, 1, 52, G_BOX,                      /*** 0 ***/
     NONE,
     OUTLINED,
     (LONG) 135424L,
     0, 0, 40, 22},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* FSTITLE */
     NONE,
     NORMAL,
     (LONG) "_",
     1, 1, 1, 1},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) N_("Directory:"),
     1, 2, 10, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* FSDIRECT */
     EDITABLE,
     NORMAL,
     (LONG) &rs_tedinfo[0],
     1, 1027, 38, 1},

   { 5, -1, -1, G_STRING,                   /*** 4 ***/  /* FSDRVTXT */
     NONE,
     NORMAL,
     (LONG) N_("Drive:"),
     27, 5, 11, 1},

   { 6, -1, -1, G_FBOXTEXT,                 /*** 5 ***/  /* FSSELECT */
     EDITABLE,
     NORMAL,
     (LONG) &rs_tedinfo[1],
     1, 5, 24, 1},

   { 33, 7, 32, G_IBOX,                     /*** 6 ***/  /* FSDRIVES */
     NONE,
     NORMAL,
     (LONG) 4352L,
     27, 6, 11, 9},

   { 8, -1, -1, G_BOXCHAR,                  /*** 7 ***/  /* FS1STDRV */
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x41ff1100L,
     0, 0, 3, 1},

   { 9, -1, -1, G_BOXCHAR,                  /*** 8 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x42ff1100L,
     0, 1, 3, 1},

   { 10, -1, -1, G_BOXCHAR,                 /*** 9 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x43ff1100L,
     0, 2, 3, 1},

   { 11, -1, -1, G_BOXCHAR,                 /*** 10 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x44ff1100L,
     0, 3, 3, 1},

   { 12, -1, -1, G_BOXCHAR,                 /*** 11 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x45ff1100L,
     0, 4, 3, 1},

   { 13, -1, -1, G_BOXCHAR,                 /*** 12 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x46ff1100L,
     0, 5, 3, 1},

   { 14, -1, -1, G_BOXCHAR,                 /*** 13 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x47ff1100L,
     0, 6, 3, 1},

   { 15, -1, -1, G_BOXCHAR,                 /*** 14 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x48ff1100L,
     0, 7, 3, 1},

   { 16, -1, -1, G_BOXCHAR,                 /*** 15 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x49ff1100L,
     0, 8, 3, 1},

   { 17, -1, -1, G_BOXCHAR,                 /*** 16 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4aff1100L,
     4, 0, 3, 1},

   { 18, -1, -1, G_BOXCHAR,                 /*** 17 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4bff1100L,
     4, 1, 3, 1},

   { 19, -1, -1, G_BOXCHAR,                 /*** 18 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4cff1100L,
     4, 2, 3, 1},

   { 20, -1, -1, G_BOXCHAR,                 /*** 19 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4dff1100L,
     4, 3, 3, 1},

   { 21, -1, -1, G_BOXCHAR,                 /*** 20 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4eff1100L,
     4, 4, 3, 1},

   { 22, -1, -1, G_BOXCHAR,                 /*** 21 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x4fff1100L,
     4, 5, 3, 1},

   { 23, -1, -1, G_BOXCHAR,                 /*** 22 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x50ff1100L,
     4, 6, 3, 1},

   { 24, -1, -1, G_BOXCHAR,                 /*** 23 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x51ff1100L,
     4, 7, 3, 1},

   { 25, -1, -1, G_BOXCHAR,                 /*** 24 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x52ff1100L,
     4, 8, 3, 1},

   { 26, -1, -1, G_BOXCHAR,                 /*** 25 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x53ff1100L,
     8, 0, 3, 1},

   { 27, -1, -1, G_BOXCHAR,                 /*** 26 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x54ff1100L,
     8, 1, 3, 1},

   { 28, -1, -1, G_BOXCHAR,                 /*** 27 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x55ff1100L,
     8, 2, 3, 1},

   { 29, -1, -1, G_BOXCHAR,                 /*** 28 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x56ff1100L,
     8, 3, 3, 1},

   { 30, -1, -1, G_BOXCHAR,                 /*** 29 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x57ff1100L,
     8, 4, 3, 1},

   { 31, -1, -1, G_BOXCHAR,                 /*** 30 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x58ff1100L,
     8, 5, 3, 1},

   { 32, -1, -1, G_BOXCHAR,                 /*** 31 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x59ff1100L,
     8, 6, 3, 1},

   { 6, -1, -1, G_BOXCHAR,                  /*** 32 ***/  /* FSLSTDRV */
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x5aff1100L,
     8, 7, 3, 1},

   { 51, 34, 41, G_IBOX,                    /*** 33 ***/  /* FILEAREA */
     NONE,
     NORMAL,
     (LONG) 4352L,
     3, 7, 22, 12},

   { 35, -1, -1, G_BOXCHAR,                 /*** 34 ***/  /* FCLSBOX */
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x05ff1100L,
     0, 0, 2, 1},

   { 36, -1, -1, G_BOXTEXT,                 /*** 35 ***/  /* FTITLE */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[2],
     2, 0, 20, 1},

   { 41, 37, 39, G_BOX,                     /*** 36 ***/  /* SCRLBAR */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716032L,
     19, 1, 3, 11},

   { 38, -1, -1, G_BOXCHAR,                 /*** 37 ***/  /* FUPAROW */
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x01ff1100L,
     0, 0, 3, 1},

   { 39, -1, -1, G_BOXCHAR,                 /*** 38 ***/  /* FDNAROW */
     TOUCHEXIT,
     NORMAL,
     (LONG) 0x02ff1100L,
     0, 10, 3, 1},

   { 36, 40, 40, G_BOX,                     /*** 39 ***/  /* FSVSLID */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716049L,
     0, 1, 3, 9},

   { 39, -1, -1, G_BOX,                     /*** 40 ***/  /* FSVELEV */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716032L,
     0, 0, 3, 1},

   { 33, 42, 50, G_BOX,                     /*** 41 ***/  /* FILEBOX */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716032L,
     0, 1, 19, 11},

   { 43, -1, -1, G_FBOXTEXT,                /*** 42 ***/  /* F1NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[3],
     2, 1, 15, 1},

   { 44, -1, -1, G_FBOXTEXT,                /*** 43 ***/  /* F2NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[4],
     2, 2, 15, 1},

   { 45, -1, -1, G_FBOXTEXT,                /*** 44 ***/  /* F3NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[5],
     2, 3, 15, 1},

   { 46, -1, -1, G_FBOXTEXT,                /*** 45 ***/  /* F4NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[6],
     2, 4, 15, 1},

   { 47, -1, -1, G_FBOXTEXT,                /*** 46 ***/  /* F5NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[7],
     2, 5, 15, 1},

   { 48, -1, -1, G_FBOXTEXT,                /*** 47 ***/  /* F6NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[8],
     2, 6, 15, 1},

   { 49, -1, -1, G_FBOXTEXT,                /*** 48 ***/  /* F7NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[9],
     2, 7, 15, 1},

   { 50, -1, -1, G_FBOXTEXT,                /*** 49 ***/  /* F8NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[10],
     2, 8, 15, 1},

   { 41, -1, -1, G_FBOXTEXT,                /*** 50 ***/  /* F9NAME */
     TOUCHEXIT,
     NORMAL,
     (LONG) &rs_tedinfo[11],
     2, 9, 15, 1},

   { 52, -1, -1, G_BUTTON,                  /*** 51 ***/  /* FSOK */
     SELECTABLE | DEFAULT | EXIT,
     NORMAL,
     (LONG) N_("OK"),
     7, 20, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 52 ***/  /* FSCANCEL */
     SELECTABLE | EXIT | LASTOB,
     NORMAL,
     (LONG) N_("Cancel"),
     23, 20, 9, 1},

#define TR1 53
/* TREE 1 */  /* DIALERT */

   { -1, 1, 9, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 80, 9},

   { 2, -1, -1, G_BOX,                      /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     3, 1, 4, 4},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/  /* MSGOFF */
     NONE,
     NORMAL,
     (LONG) &msg_str[0],
     9, 1, 40, 1},

   { 4, -1, -1, G_STRING,                   /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) &msg_str[1],
     9, 2, 50, 1},

   { 5, -1, -1, G_STRING,                   /*** 4 ***/
     NONE,
     NORMAL,
     (LONG) &msg_str[2],
     9, 3, 50, 1},

   { 6, -1, -1, G_STRING,                   /*** 5 ***/
     NONE,
     NORMAL,
     (LONG) &msg_str[3],
     9, 4, 50, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     NONE,
     NORMAL,
     (LONG) &msg_str[4],
     9, 5, 50, 1},

   { 8, -1, -1, G_BUTTON,                   /*** 7 ***/  /* BUTOFF */
     SELECTABLE | DEFAULT | EXIT,
     NORMAL,
     (LONG) &msg_but[0],
     9, 7, 16, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 8 ***/
     SELECTABLE | DEFAULT | EXIT,
     NORMAL,
     (LONG) &msg_but[1],
     26, 7, 16, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 9 ***/
     SELECTABLE | DEFAULT | EXIT | LASTOB,
     NORMAL,
     (LONG) &msg_but[2],
     43, 7, 16, 1},

#define TR2 63
/* TREE 2 */  /* DESKTOP */

   { -1, 1, 2, G_BOX,                       /*** 0 ***/
     NONE,
     NORMAL,
     (LONG) 4419L,
     0, 0, 80, 25},

   { 2, -1, -1, G_BOX,                      /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     0, 0, 80, 513},

   { 0, -1, -1, G_TEXT,                     /*** 2 ***/  /* DTNAME */
     LASTOB,
     NORMAL,
     (LONG) &rs_tedinfo[12],
     0, 0, 80, 769},

};


OBJECT * const rs_trees[] = {
    &rs_obj[TR0],                           /* FSELECTR */
    &rs_obj[TR1],                           /* DIALERT */
    &rs_obj[TR2],                           /* DESKTOP */
};


const char * const rs_fstr[] = {
    N_("[1][The disk in drive %c: is|"                  /* AL00CRT */
       "physically write-protected.][Cancel|Retry]"),
    N_("[2][Drive %c: is not responding.|"              /* AL01CRT */
       "Please check the disk drive,|"
       "or insert a disk.][Cancel|Retry]"),
    N_("[1][Data on the disk in drive %c:|"             /* AL02CRT */
       "may be damaged.][Cancel|Retry]"),
    N_("[2][This application cannot read|"              /* AL03CRT */
       "data on the disk in drive %c:.][Cancel|Retry]"),
    N_("[1][Your output device is not|"                 /* AL04CRT */
       "receiving data.][Cancel|Retry]"),
    N_("[3][An error has occurred in GEM.|"             /* AL05CRT */
       "Please contact the EmuTOS|"
       "Development Team.][Cancel]"),
    N_("[2][This application cannot|"                   /* AL18ERR */
       "find the folder or file|"
       "you just tried to access.][  OK  ]"),
    N_("[1][This application does not|"                 /* AL04ERR */
       "have room to open another|"
       "document.  To make room,|"
       "close any document that|"
       "you do not need.][  OK  ]"),
    N_("[1][An item with this name|"                    /* AL05ERR */
       "already exists in the|"
       "directory, or this item|"
       "is set to Read Only status.][  OK  ]"),
    N_("[1][The drive you specified|"                   /* AL15ERR */
       "does not exist.][Cancel]"),
    N_("[1][There is not enough memory|"                /* AL08ERR */
       "in your computer for the|"
       "application you just tried|"
       "to run.][  OK  ]"),
    N_("[3][TOS error #%u.][Cancel]"),                  /* ALXXERR */
    N_("[3][Unsupported AES function #%d.][Cancel]"),   /* ALNOFUNC */
    N_("[1][Not enough memory for|"                     /* ALFSMEM */
       "this directory][  OK  ]"),
    N_("ITEM SELECTOR"),                                /* ITEMSLCT */
};


void gem_rsc_init(void)
{
    /* Copy data from ROM to RAM: */
    memcpy(rs_obj, rs_obj_rom, RS_NOBS*sizeof(OBJECT));
    memcpy(rs_tedinfo, rs_tedinfo_rom, RS_NTED*sizeof(TEDINFO));

    /* translate strings in objects */
    xlate_obj_array(rs_obj, RS_NOBS);

    /* zero TEDINFO te_ptext strings */
    bzero(rs_te_text, sizeof(rs_te_text));
}


void gem_rsc_fixit(void)
{
    int i;
    for(i = 0; i < RS_NOBS; i++)
        rs_obfix(rs_obj, i);
}
