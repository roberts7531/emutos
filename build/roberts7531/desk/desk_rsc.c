/*
 * desk_rsc.c
 *
 * Generated from draft.tmp.rsc and draft.tmp.def by erd v5.2
 *
 * Copyright 2013-2025 The EmuTOS development team
 *
 * This software is licenced under the GNU General Public License.
 * Please see LICENSE.TXT for further information.
 */
#include "emutos.h"
#include "string.h"
#include "obdefs.h"
#include "gemdos.h"
#include "desk_rsc.h"
#include "nls.h"

static const char rs_str_Name______________[] = N_("Name: ________.___");
static const char rs_str_Number_of_folders_______________[] = N_("Number of folders:         _____");
static const char rs_str_Number_of_files_______________[] = N_("Number of files:         _____");
static const char rs_str_OK[] = N_("OK");
static const char rs_str_Skip[] = N_("Skip");
static const char rs_str_Cancel[] = N_("Cancel");
static const char rs_str_Install[] = N_("Install");
static const char rs_str_Remove[] = N_("Remove");
static const char rs_str_Yes[] = N_("Yes");
static const char rs_str_No[] = N_("No");


static char desk_rs_te_text[377];

TEDINFO desk_rs_tedinfo[RS_NTED];

static const TEDINFO desk_rs_tedinfo_rom[] = {
    {&desk_rs_te_text[0],
     (char *) rs_str_Name______________,
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19},      /* 0 */

    {&desk_rs_te_text[12],
     N_("Size:   __________"),
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 11, 19},     /* 1 */

    {&desk_rs_te_text[23],
     N_("Date:   __________"),
     "X",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 11, 19},     /* 2 */

    {&desk_rs_te_text[34],
     N_("Time:   __:__ __  "),
     "9999a",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 7, 19},      /* 3 */

    {&desk_rs_te_text[41],
     (char *) rs_str_Number_of_folders_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 33},      /* 4 */

    {&desk_rs_te_text[47],
     (char *) rs_str_Number_of_files_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 31},      /* 5 */

    {&desk_rs_te_text[53],
     N_("Drive identifier:  _           "),
     "A",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 2, 32},      /* 6 */

    {&desk_rs_te_text[55],
     N_("Disk label:  ________.___"),
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 26},      /* 7 */

    {&desk_rs_te_text[67],
     (char *) rs_str_Number_of_folders_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 33},      /* 8 */

    {&desk_rs_te_text[73],
     (char *) rs_str_Number_of_files_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 31},      /* 9 */

    {&desk_rs_te_text[79],
     N_("Bytes used:    __________"),
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 11, 26},     /* 10 */

    {&desk_rs_te_text[90],
     N_("Bytes available:    __________"),
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 11, 31},     /* 11 */

    {&desk_rs_te_text[101],
     (char *) rs_str_Name______________,
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19},      /* 12 */

    {&desk_rs_te_text[113],
     "______________________________________",
     "X",
     IBM, 0, TE_LEFT, 4352, 0, 0, 39, 39},      /* 13 */

    {&desk_rs_te_text[152],
     N_("Identifier: _:"),
     "A",
     IBM, 0, TE_LEFT, 4352, 0, 0, 2, 15},       /* 14 */

    {&desk_rs_te_text[154],
     N_("Label: ____________"),
     "X",
     IBM, 0, TE_LEFT, 4352, 0, 0, 13, 20},      /* 15 */

    {&desk_rs_te_text[167],
     N_("Application name: ________.___"),
     "F",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 31},      /* 16 */

    {&desk_rs_te_text[179],
     N_("Arguments: ___________"),
     "X",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 23},      /* 17 */

    {&desk_rs_te_text[191],
     N_("Document type: ___"),
     "F",
     IBM, 0, TE_LEFT, 4352, 0, 0, 4, 19},       /* 18 */

    {&desk_rs_te_text[195],
     N_("Install as: F__"),
     "9",
     IBM, 0, TE_LEFT, 4352, 0, 0, 3, 16},       /* 19 */

    {&desk_rs_te_text[198],
     (char *) rs_str_Number_of_folders_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 33},      /* 20 */

    {&desk_rs_te_text[204],
     (char *) rs_str_Number_of_files_______________,
     "9",
     IBM, 0, TE_RIGHT, 4352, 0, 0, 6, 31},      /* 21 */

    {&desk_rs_te_text[210],
     N_("Current name: ________.___"),
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 27},      /* 22 */

    {&desk_rs_te_text[222],
     N_("Copy's name: ________.___"),
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 26},      /* 23 */

    {&desk_rs_te_text[234],
     (char *) rs_str_Name______________,
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19},      /* 24 */

    {&desk_rs_te_text[246],
     (char *) rs_str_Name______________,
     "F",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19},      /* 25 */

    {&desk_rs_te_text[258],
     (char *) rs_str_Name______________,
     "f",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19},      /* 26 */

    {&desk_rs_te_text[270],
     (char *) rs_str_Name______________,
     "F",
     IBM, 6, TE_CNTR, 4480, 0, -1, 12, 19},     /* 27 */

    {&desk_rs_te_text[282],
     "F__",
     "9",
     IBM, 6, TE_CNTR, 4480, 0, -1, 3, 4},       /* 28 */

    {&desk_rs_te_text[285],
     "______________________",
     "X",
     IBM, 6, TE_LEFT, 4352, 0, 0, 23, 23},      /* 29 */

    {&desk_rs_te_text[308],
     N_("Key: ^_"),
     "a",
     IBM, 6, TE_LEFT, 4480, 0, -1, 2, 8},       /* 30 */

    {&desk_rs_te_text[310],
     "________________________________",
     "X",
     IBM, 6, TE_LEFT, 4352, 0, -1, 33, 33},     /* 31 */

    {&desk_rs_te_text[343],
     N_("Free RAM: _____________________"),
     "X",
     IBM, 0, TE_LEFT, 4480, 0, 0, 22, 32},      /* 32 */

    {&desk_rs_te_text[365],
     (char *) rs_str_Name______________,
     "F",
     IBM, 0, TE_LEFT, 4352, 0, 0, 12, 19}       /* 33 */
};

static const WORD rs_bitblk0[] = {
    0x0001, 0x8000, 0x0002, 0x4000,
    0x0005, 0xA000, 0x000B, 0xD000,
    0x0017, 0xE800, 0x002F, 0xF400,
    0x005F, 0xFA00, 0x00BF, 0xCD00,
    0x017F, 0xDE80, 0x02FF, 0xDF40,
    0x05FF, 0xCFA0, 0x0BFF, 0xCFD0,
    0x17F0, 0xCFE8, 0x2FC0, 0x0FF4,
    0x5F80, 0x0FFA, 0xBF00, 0x1FFD,
    0xBF00, 0x3FFD, 0x5E20, 0x7FFA,
    0x2FF1, 0xFFF4, 0x17E5, 0xFFE8,
    0x0BED, 0xFFD0, 0x05ED, 0xFFA0,
    0x02F6, 0xFF40, 0x0176, 0xFE80,
    0x00B9, 0x3D00, 0x005F, 0xFA00,
    0x002F, 0xF400, 0x0017, 0xE800,
    0x000B, 0xD000, 0x0005, 0xA000,
    0x0002, 0x4000, 0x0001, 0x8000
};


const BITBLK desk_rs_bitblk[] = {
    { (void *)rs_bitblk0, 4, 32, 0, 0, 1 },
    { (void *)rs_bitblk0, 4, 32, 0, 0, 1 },
};


OBJECT * desk_rs_obj;

static const OBJECT desk_rs_obj_rom[] = {
#define TR0 0
/* TREE 0 */  /* ADMENU */

   { -1, 1, 7, G_IBOX,                      /*** 0 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     0, 0, 80, 25},

   { 7, 2, 2, G_BOX,                        /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     0, 0, 80, 513},

   { 1, 3, 6, G_IBOX,                       /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     2, 0, 28, 769},

   { 4, -1, -1, G_TITLE,                    /*** 3 ***/  /* DESKMENU */
     NONE,
     NORMAL,
     (LONG) N_(" Desk "),
     0, 0, 6, 769},

   { 5, -1, -1, G_TITLE,                    /*** 4 ***/  /* FILEMENU */
     NONE,
     NORMAL,
     (LONG) N_(" File "),
     6, 0, 6, 769},

   { 6, -1, -1, G_TITLE,                    /*** 5 ***/  /* VIEWMENU */
     NONE,
     NORMAL,
     (LONG) N_(" View "),
     12, 0, 7, 769},

   { 2, -1, -1, G_TITLE,                    /*** 6 ***/  /* OPTNMENU */
     NONE,
     NORMAL,
     (LONG) N_(" Options "),
     19, 0, 9, 769},

   { 0, 8, 45, G_IBOX,                      /*** 7 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     0, 769, 80, 23},

   { 17, 9, 16, G_BOX,                      /*** 8 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     2, 0, 20, 8},

   { 10, -1, -1, G_STRING,                  /*** 9 ***/  /* ABOUITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Desktop info..."),
     0, 0, 20, 1},

   { 11, -1, -1, G_STRING,                  /*** 10 ***/
     NONE,
     DISABLED,
     (LONG) "-",
     0, 1, 20, 1},

   { 12, -1, -1, G_STRING,                  /*** 11 ***/
     NONE,
     NORMAL,
     (LONG) "1",
     0, 2, 20, 1},

   { 13, -1, -1, G_STRING,                  /*** 12 ***/
     NONE,
     NORMAL,
     (LONG) "2",
     0, 3, 20, 1},

   { 14, -1, -1, G_STRING,                  /*** 13 ***/
     NONE,
     NORMAL,
     (LONG) "3",
     0, 4, 20, 1},

   { 15, -1, -1, G_STRING,                  /*** 14 ***/
     NONE,
     NORMAL,
     (LONG) "4",
     0, 5, 20, 1},

   { 16, -1, -1, G_STRING,                  /*** 15 ***/
     NONE,
     NORMAL,
     (LONG) "5",
     0, 6, 20, 1},

   { 8, -1, -1, G_STRING,                   /*** 16 ***/
     NONE,
     NORMAL,
     (LONG) "6",
     0, 7, 20, 1},

   { 32, 18, 31, G_BOX,                     /*** 17 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     8, 0, 19, 14},

   { 19, -1, -1, G_STRING,                  /*** 18 ***/  /* OPENITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Open"),
     0, 0, 19, 1},

   { 20, -1, -1, G_STRING,                  /*** 19 ***/  /* SHOWITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Info/Rename..."),
     0, 1, 19, 1},

   { 21, -1, -1, G_STRING,                  /*** 20 ***/  /* SRCHITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Search..."),
     0, 2, 19, 1},

   { 22, -1, -1, G_STRING,                  /*** 21 ***/
     NONE,
     DISABLED,
     (LONG) "-",
     0, 3, 19, 1},

   { 23, -1, -1, G_STRING,                  /*** 22 ***/  /* NFOLITEM */
     NONE,
     NORMAL,
     (LONG) N_("  New folder..."),
     0, 4, 19, 1},

   { 24, -1, -1, G_STRING,                  /*** 23 ***/  /* CLOSITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Close folder"),
     0, 5, 19, 1},

   { 25, -1, -1, G_STRING,                  /*** 24 ***/  /* CLSWITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Close top window"),
     0, 6, 19, 1},

   { 26, -1, -1, G_STRING,                  /*** 25 ***/  /* BTOPITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Cycle windows"),
     0, 7, 19, 1},

   { 27, -1, -1, G_STRING,                  /*** 26 ***/  /* SLCTITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Select all items"),
     0, 8, 19, 1},

   { 28, -1, -1, G_STRING,                  /*** 27 ***/  /* MASKITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Set file mask..."),
     0, 9, 19, 1},

   { 29, -1, -1, G_STRING,                  /*** 28 ***/
     NONE,
     DISABLED,
     (LONG) "-",
     0, 10, 19, 1},

   { 30, -1, -1, G_STRING,                  /*** 29 ***/  /* DELTITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Delete..."),
     0, 11, 19, 1},

   { 31, -1, -1, G_STRING,                  /*** 30 ***/  /* SEP_FL2 */
     NONE,
     DISABLED,
     (LONG) "-",
     0, 12, 19, 1},

   { 17, -1, -1, G_STRING,                  /*** 31 ***/  /* CLIITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Execute EmuCON"),
     0, 13, 19, 1},

   { 45, 33, 44, G_BOX,                     /*** 32 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     14, 0, 20, 12},

   { 34, -1, -1, G_STRING,                  /*** 33 ***/  /* ICONITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Show as icons"),
     0, 0, 20, 1},

   { 35, -1, -1, G_STRING,                  /*** 34 ***/  /* TEXTITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Show as text"),
     0, 1, 20, 1},

   { 36, -1, -1, G_STRING,                  /*** 35 ***/
     NONE,
     DISABLED,
     (LONG) "-",
     0, 2, 20, 1},

   { 37, -1, -1, G_STRING,                  /*** 36 ***/  /* NAMEITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Sort by name"),
     0, 3, 20, 1},

   { 38, -1, -1, G_STRING,                  /*** 37 ***/  /* TYPEITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Sort by type"),
     0, 4, 20, 1},

   { 39, -1, -1, G_STRING,                  /*** 38 ***/  /* SIZEITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Sort by size"),
     0, 5, 20, 1},

   { 40, -1, -1, G_STRING,                  /*** 39 ***/  /* DATEITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Sort by date"),
     0, 6, 20, 1},

   { 41, -1, -1, G_STRING,                  /*** 40 ***/  /* NSRTITEM */
     NONE,
     NORMAL,
     (LONG) N_("  No sort"),
     0, 7, 20, 1},

   { 42, -1, -1, G_STRING,                  /*** 41 ***/  /* SEP_VW1 */
     NONE,
     DISABLED,
     (LONG) "-",
     0, 8, 20, 1},

   { 43, -1, -1, G_STRING,                  /*** 42 ***/  /* FITITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Size to fit"),
     0, 9, 20, 1},

   { 44, -1, -1, G_STRING,                  /*** 43 ***/  /* SEP_VW2 */
     NONE,
     DISABLED,
     (LONG) "-",
     0, 10, 20, 1},

   { 32, -1, -1, G_STRING,                  /*** 44 ***/  /* BACKGRND */
     NONE,
     NORMAL,
     (LONG) N_("  Set background..."),
     0, 11, 20, 1},

   { 7, 46, 56, G_BOX,                      /*** 45 ***/
     NONE,
     NORMAL,
     (LONG) 16716032L,
     21, 0, 27, 11},

   { 47, -1, -1, G_STRING,                  /*** 46 ***/  /* IICNITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Install icon..."),
     0, 0, 27, 1},

   { 48, -1, -1, G_STRING,                  /*** 47 ***/  /* IAPPITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Install application..."),
     0, 1, 27, 1},

   { 49, -1, -1, G_STRING,                  /*** 48 ***/  /* IDSKITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Install devices"),
     0, 2, 27, 1},

   { 50, -1, -1, G_STRING,                  /*** 49 ***/  /* RICNITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Remove desktop icon"),
     0, 3, 27, 1},

   { 51, -1, -1, G_STRING,                  /*** 50 ***/
     NONE,
     DISABLED,
     (LONG) "-",
     0, 4, 27, 1},

   { 52, -1, -1, G_STRING,                  /*** 51 ***/  /* PREFITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Set preferences..."),
     0, 5, 27, 1},

   { 53, -1, -1, G_STRING,                  /*** 52 ***/  /* CONFITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Desktop configuration..."),
     0, 6, 27, 1},

   { 54, -1, -1, G_STRING,                  /*** 53 ***/  /* RESITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Change resolution..."),
     0, 7, 27, 1},

   { 55, -1, -1, G_STRING,                  /*** 54 ***/  /* SEP_OP0 */
     NONE,
     DISABLED,
     (LONG) "-",
     0, 8, 27, 1},

   { 56, -1, -1, G_STRING,                  /*** 55 ***/  /* READITEM */
     NONE,
     NORMAL,
     (LONG) N_("  Read .INF file..."),
     0, 9, 27, 1},

   { 45, -1, -1, G_STRING,                  /*** 56 ***/  /* SAVEITEM */
     LASTOB,
     NORMAL,
     (LONG) N_("  Save desktop..."),
     0, 10, 27, 1},

#define TR1 57
/* TREE 1 */  /* ADFFINFO */

   { -1, 1, 13, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 40, 16},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* FFTITLE */
     NONE,
     NORMAL,
     (LONG) "0",
     11, 1, 1, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* FFNAME */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[0],
     4, 3, 26, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* FFSIZE */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[1],
     4, 4, 26, 1},

   { 5, -1, -1, G_FBOXTEXT,                 /*** 4 ***/  /* FFDATE */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[2],
     4, 5, 26, 1},

   { 6, -1, -1, G_FBOXTEXT,                 /*** 5 ***/  /* FFTIME */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[3],
     4, 6, 26, 1},

   { 7, -1, -1, G_FBOXTEXT,                 /*** 6 ***/  /* FFNUMFOL */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[4],
     4, 8, 32, 1},

   { 8, -1, -1, G_FBOXTEXT,                 /*** 7 ***/  /* FFNUMFIL */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[5],
     4, 9, 32, 1},

   { 11, 9, 10, G_IBOX,                     /*** 8 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     2, 11, 36, 1},

   { 10, -1, -1, G_BUTTON,                  /*** 9 ***/  /* FFRWRITE */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Read/Write"),
     0, 0, 18, 1},

   { 8, -1, -1, G_BUTTON,                   /*** 10 ***/  /* FFRONLY */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Read-Only"),
     19, 0, 17, 1},

   { 12, -1, -1, G_BUTTON,                  /*** 11 ***/  /* FFOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     2, 14, 10, 1},

   { 13, -1, -1, G_BUTTON,                  /*** 12 ***/  /* FFSKIP */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Skip,
     15, 14, 10, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 13 ***/  /* FFCNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     28, 14, 10, 1},

#define TR2 71
/* TREE 2 */  /* ADDISKIN */

   { -1, 1, 9, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 38, 2060},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* DITITLE */
     NONE,
     NORMAL,
     (LONG) N_("DISK INFORMATION"),
     3, 1, 16, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* DIDRIVE */
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[6],
     3, 3, 32, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* DIVOLUME */
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[7],
     3, 4, 32, 1},

   { 5, -1, -1, G_FBOXTEXT,                 /*** 4 ***/  /* DINFOLDS */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[8],
     3, 5, 32, 1},

   { 6, -1, -1, G_FBOXTEXT,                 /*** 5 ***/  /* DINFILES */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[9],
     3, 6, 32, 1},

   { 7, -1, -1, G_FBOXTEXT,                 /*** 6 ***/  /* DIUSED */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[10],
     3, 7, 32, 1},

   { 8, -1, -1, G_FBOXTEXT,                 /*** 7 ***/  /* DIAVAIL */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[11],
     3, 8, 32, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 8 ***/  /* DIOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     7, 2058, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 9 ***/  /* DICNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     22, 2058, 9, 1},

#define TR3 81
/* TREE 3 */  /* ADDINFO */

   { -1, 1, 16, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 135424L,
     0, 0, 40, 19},

   { 2, -1, -1, G_IMAGE,                    /*** 1 ***/  /* DEICON */
     TOUCHEXIT,
     NORMAL,
     (LONG) &desk_rs_bitblk[0],
     3, 1, 4, 2},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) "- EmuTOS -",
     15, 1, 10, 1},

   { 4, -1, -1, G_IMAGE,                    /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) &desk_rs_bitblk[1],
     33, 1, 4, 2},

   { 5, -1, -1, G_STRING,                   /*** 4 ***/  /* DELABEL */
     NONE,
     NORMAL,
     (LONG) N_("Version"),
     14, 2, 7, 1},

   { 6, -1, -1, G_STRING,                   /*** 5 ***/  /* DEVERSN */
     NONE,
     NORMAL,
     (LONG) "0.0.0",
     22, 2, 5, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     0x4000,
     NORMAL,
     (LONG) N_("Copyright \275 2001-"),
     1, 1028, 1049, 1},

   { 8, -1, -1, G_STRING,                   /*** 7 ***/  /* DECOPYRT */
     NONE,
     NORMAL,
     (LONG) "9999",
     1050, 1028, 4, 1},

   { 9, -1, -1, G_STRING,                   /*** 8 ***/
     0x8000,
     NORMAL,
     (LONG) N_("The EmuTOS development team"),
     1, 1029, 38, 1},

   { 10, -1, -1, G_STRING,                  /*** 9 ***/
     0x8000,
     NORMAL,
     (LONG) "https://emutos.sourceforge.io/",
     1, 7, 38, 1},

   { 11, -1, -1, G_STRING,                  /*** 10 ***/
     0x8000,
     NORMAL,
     (LONG) N_("Based on 'GPLed' sources"),
     1, 9, 38, 1},

   { 12, -1, -1, G_STRING,                  /*** 11 ***/
     NONE,
     NORMAL,
     (LONG) N_("\275 1987 Digital Research, Inc."),
     3, 10, 29, 1},

   { 13, -1, -1, G_STRING,                  /*** 12 ***/
     NONE,
     NORMAL,
     (LONG) N_("\275 1999 Caldera Thin Clients, Inc."),
     3, 11, 33, 1},

   { 14, -1, -1, G_STRING,                  /*** 13 ***/
     NONE,
     NORMAL,
     (LONG) N_("\275 2001 Lineo, Inc."),
     3, 12, 18, 1},

   { 15, -1, -1, G_STRING,                  /*** 14 ***/
     0x8000,
     NORMAL,
     (LONG) N_("EmuTOS is distributed under the GPL"),
     1, 14, 38, 1},

   { 16, -1, -1, G_STRING,                  /*** 15 ***/
     0x8000,
     NORMAL,
     (LONG) N_("See doc\\license.txt for details"),
     1, 15, 38, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 16 ***/  /* DEOK */
     SELECTABLE | DEFAULT | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     16, 17, 8, 1},

#define TR4 98
/* TREE 4 */  /* ADOPENAP */

   { -1, 1, 6, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 40, 2058},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* APPLOPEN */
     NONE,
     NORMAL,
     (LONG) N_("OPEN APPLICATION"),
     11, 1, 16, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* APPLNAME */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[12],
     1, 3, 21, 1},

   { 4, -1, -1, G_STRING,                   /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) N_("Parameters:"),
     1, 5, 11, 1},

   { 5, -1, -1, G_FBOXTEXT,                 /*** 4 ***/  /* APPLPARM */
     EDITABLE | FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[13],
     1, 6, 38, 1},

   { 6, -1, -1, G_BUTTON,                   /*** 5 ***/  /* APPLOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     7, 2056, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 6 ***/  /* APPLCNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     24, 2056, 9, 1},

#define TR5 105
/* TREE 5 */  /* ADINSDSK */

   { -1, 1, 16, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 40, 18},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("INSTALL DESKTOP ICON"),
     9, 1, 20, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* ID_ID */
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[14],
     0, 3, 19, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* ID_LABEL */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[15],
     0, 4, 29, 1},

   { 5, -1, -1, G_STRING,                   /*** 4 ***/
     FL3DBAK,
     NORMAL,
     (LONG) N_("Item type:"),
     2, 6, 10, 1},

   { 9, 6, 8, G_IBOX,                       /*** 5 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     2, 1543, 36, 1},

   { 7, -1, -1, G_BUTTON,                   /*** 6 ***/  /* ID_DRIVE */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Drive"),
     0, 0, 11, 1},

   { 8, -1, -1, G_BUTTON,                   /*** 7 ***/  /* ID_TRASH */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Trash can"),
     12, 0, 12, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 8 ***/  /* ID_PRINT */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Printer"),
     25, 0, 11, 1},

   { 13, 10, 12, G_BOX,                     /*** 9 ***/  /* ID_IBOX */
     FL3DBAK,
     NORMAL,
     (LONG) 4352L,
     16, 2057, 13, 2052},

   { 11, -1, -1, G_BOX,                     /*** 10 ***/  /* ID_ICON */
     NONE,
     NORMAL,
     (LONG) 16716032L,
     0, 0, 8, 4},

   { 12, -1, -1, G_BUTTON,                  /*** 11 ***/  /* ID_UP */
     SELECTABLE | TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\001",
     9, 1024, 3, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 12 ***/  /* ID_DOWN */
     SELECTABLE | TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\002",
     9, 2049, 3, 1},

   { 14, -1, -1, G_STRING,                  /*** 13 ***/
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) N_("Icon:"),
     2, 3081, 14, 1},

   { 15, -1, -1, G_BUTTON,                  /*** 14 ***/  /* ID_OK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     2, 16, 10, 1},

   { 16, -1, -1, G_BUTTON,                  /*** 15 ***/  /* ID_SKIP */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Skip,
     14, 16, 11, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 16 ***/  /* ID_CNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     27, 16, 11, 1},

#define TR6 122
/* TREE 6 */  /* ADINSAPP */

   { -1, 1, 27, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 40, 2070},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* INSAPP */
     NONE,
     NORMAL,
     (LONG) N_("INSTALL APPLICATION"),
     9, 1, 19, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* APNAME */
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[16],
     3, 3, 32, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* APARGS */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[17],
     3, 4, 31, 1},

   { 5, -1, -1, G_FBOXTEXT,                 /*** 4 ***/  /* APDOCTYP */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[18],
     3, 5, 23, 1},

   { 6, -1, -1, G_FBOXTEXT,                 /*** 5 ***/  /* APFUNKEY */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[19],
     3, 6, 23, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     NONE,
     NORMAL,
     (LONG) N_("Boot status:"),
     1, 8, 12, 1},

   { 10, 8, 9, G_IBOX,                      /*** 7 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     18, 8, 21, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 8 ***/  /* APAUTO */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Auto"),
     0, 0, 9, 1},

   { 7, -1, -1, G_BUTTON,                   /*** 9 ***/  /* APNORM */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Normal"),
     10, 0, 11, 1},

   { 11, -1, -1, G_STRING,                  /*** 10 ***/  /* APTYPE */
     0x8000,
     NORMAL,
     (LONG) N_("Application type:"),
     1, 10, 36, 1},

   { 16, 12, 15, G_IBOX,                    /*** 11 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     9, 1547, 23, 1},

   { 13, -1, -1, G_BUTTON,                  /*** 12 ***/  /* APTOS */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "TOS",
     0, 0, 5, 1},

   { 14, -1, -1, G_BUTTON,                  /*** 13 ***/  /* APTTP */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "TTP",
     6, 0, 5, 1},

   { 15, -1, -1, G_BUTTON,                  /*** 14 ***/  /* APGEM */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "GEM",
     12, 0, 5, 1},

   { 11, -1, -1, G_BUTTON,                  /*** 15 ***/  /* APGTP */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "GTP",
     18, 0, 5, 1},

   { 17, -1, -1, G_STRING,                  /*** 16 ***/
     NONE,
     NORMAL,
     (LONG) N_("Default dir:"),
     1, 14, 12, 1},

   { 20, 18, 19, G_IBOX,                    /*** 17 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     17, 14, 22, 1},

   { 19, -1, -1, G_BUTTON,                  /*** 18 ***/  /* APDEFAPP */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Application"),
     0, 0, 12, 1},

   { 17, -1, -1, G_BUTTON,                  /*** 19 ***/  /* APDEFWIN */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Window"),
     13, 0, 9, 1},

   { 21, -1, -1, G_STRING,                  /*** 20 ***/
     NONE,
     NORMAL,
     (LONG) N_("Parameter:"),
     1, 16, 10, 1},

   { 24, 22, 23, G_IBOX,                    /*** 21 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     17, 16, 22, 1},

   { 23, -1, -1, G_BUTTON,                  /*** 22 ***/  /* APPMFULL */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Full path"),
     0, 0, 11, 1},

   { 21, -1, -1, G_BUTTON,                  /*** 23 ***/  /* APPMFILE */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("File name"),
     12, 0, 10, 1},

   { 25, -1, -1, G_BUTTON,                  /*** 24 ***/  /* APINSTAL */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Install,
     3, 1554, 15, 1},

   { 26, -1, -1, G_BUTTON,                  /*** 25 ***/  /* APREMOVE */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Remove,
     22, 1554, 15, 1},

   { 27, -1, -1, G_BUTTON,                  /*** 26 ***/  /* APSKIP */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Skip,
     3, 2068, 15, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 27 ***/  /* APCANCEL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     22, 2068, 15, 1},

#define TR7 150
/* TREE 7 */  /* ADCPYDEL */

   { -1, 1, 5, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 36, 2056},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* CDTITLE */
     NONE,
     NORMAL,
     (LONG) "0",
     6, 1, 1, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* CDFOLDS */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[20],
     2, 3, 32, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* CDFILES */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[21],
     2, 4, 32, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 4 ***/  /* CDOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     6, 2054, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 5 ***/  /* CDCNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     21, 2054, 9, 1},

#define TR8 156
/* TREE 8 */  /* ADCPALER */

   { -1, 1, 6, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 38, 2056},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* CACOPY */
     NONE,
     NORMAL,
     (LONG) N_("NAME CONFLICT DURING COPY"),
     2, 1, 25, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* CACURRNA */
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[22],
     2, 3, 32, 1},

   { 4, -1, -1, G_FBOXTEXT,                 /*** 3 ***/  /* CACOPYNA */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[23],
     2, 4, 32, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 4 ***/  /* CAOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     2, 2054, 10, 1},

   { 6, -1, -1, G_BUTTON,                   /*** 5 ***/  /* CASKIP */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Skip,
     14, 2054, 10, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 6 ***/  /* CASTOP */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) N_("Stop"),
     26, 2054, 10, 1},

#define TR9 163
/* TREE 9 */  /* ADMKDBOX */

   { -1, 1, 4, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 30, 2055},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("NEW FOLDER"),
     3, 1, 10, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* MKNAME */
     EDITABLE | FL3DBAK | 0x8000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[24],
     1, 3, 28, 1},

   { 4, -1, -1, G_BUTTON,                   /*** 3 ***/  /* MKOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     4, 2053, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 4 ***/  /* MKCNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     17, 2053, 9, 1},

#define TR10 168
/* TREE 10 */  /* ADSEARCH */

   { -1, 1, 4, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 30, 2055},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("SEARCH FILE"),
     10, 1, 11, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* SFNAME */
     EDITABLE | FL3DBAK | 0x8000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[25],
     1, 3, 28, 1},

   { 4, -1, -1, G_BUTTON,                   /*** 3 ***/  /* SFOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     4, 2053, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 4 ***/  /* SFCANCEL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     17, 2053, 9, 1},

#define TR11 173
/* TREE 11 */  /* ADPRINT */

   { -1, 1, 2, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 27, 5},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("PRINT FILE"),
     3, 1, 10, 1},

   { 0, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* PRNAME */
     EDITABLE | LASTOB | FL3DBAK | 0x8000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[26],
     1, 3, 25, 1},

#define TR12 176
/* TREE 12 */  /* ADSETPRE */

   { -1, 1, 32, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 40, 21},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/  /* SPTITLE */
     NONE,
     NORMAL,
     (LONG) N_("SET PREFERENCES"),
     12, 1, 15, 1},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) N_("Confirm deletes:"),
     1, 3, 16, 1},

   { 6, 4, 5, G_IBOX,                       /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     28, 3, 11, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 4 ***/  /* SPCDYES */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_Yes,
     0, 0, 5, 1},

   { 3, -1, -1, G_BUTTON,                   /*** 5 ***/  /* SPCDNO */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_No,
     6, 0, 5, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     NONE,
     NORMAL,
     (LONG) N_("Confirm copies:"),
     1, 5, 15, 1},

   { 10, 8, 9, G_IBOX,                      /*** 7 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     28, 5, 11, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 8 ***/  /* SPCCYES */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_Yes,
     0, 0, 5, 1},

   { 7, -1, -1, G_BUTTON,                   /*** 9 ***/  /* SPCCNO */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_No,
     6, 0, 5, 1},

   { 11, -1, -1, G_STRING,                  /*** 10 ***/
     NONE,
     NORMAL,
     (LONG) N_("Confirm overwrites:"),
     1, 7, 19, 1},

   { 14, 12, 13, G_IBOX,                    /*** 11 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     28, 7, 11, 1},

   { 13, -1, -1, G_BUTTON,                  /*** 12 ***/  /* SPCOWYES */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_Yes,
     0, 0, 5, 1},

   { 11, -1, -1, G_BUTTON,                  /*** 13 ***/  /* SPCOWNO */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) rs_str_No,
     6, 0, 5, 1},

   { 15, -1, -1, G_STRING,                  /*** 14 ***/
     NONE,
     NORMAL,
     (LONG) N_("Double-click speed:"),
     1, 9, 19, 1},

   { 21, 16, 20, G_IBOX,                    /*** 15 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     1305, 9, 781, 1},

   { 17, -1, -1, G_BUTTON,                  /*** 16 ***/  /* SPDC1 */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "1",
     0, 0, 1793, 1},

   { 18, -1, -1, G_BUTTON,                  /*** 17 ***/  /* SPDC2 */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "2",
     1794, 0, 1793, 1},

   { 19, -1, -1, G_BUTTON,                  /*** 18 ***/  /* SPDC3 */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "3",
     1541, 0, 1793, 1},

   { 20, -1, -1, G_BUTTON,                  /*** 19 ***/  /* SPDC4 */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "4",
     1288, 0, 1793, 1},

   { 15, -1, -1, G_BUTTON,                  /*** 20 ***/  /* SPDC5 */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) "5",
     1035, 0, 1793, 1},

   { 22, -1, -1, G_STRING,                  /*** 21 ***/
     NONE,
     NORMAL,
     (LONG) N_("Time format:"),
     1, 11, 12, 1},

   { 26, 23, 25, G_IBOX,                    /*** 22 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     1, 1548, 38, 1},

   { 24, -1, -1, G_BUTTON,                  /*** 23 ***/  /* SPTF_DEF */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Default"),
     0, 0, 20, 1},

   { 25, -1, -1, G_BUTTON,                  /*** 24 ***/  /* SPTF12HR */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("12H"),
     21, 0, 8, 1},

   { 22, -1, -1, G_BUTTON,                  /*** 25 ***/  /* SPTF24HR */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("24H"),
     30, 0, 8, 1},

   { 27, -1, -1, G_STRING,                  /*** 26 ***/
     NONE,
     NORMAL,
     (LONG) N_("Date format:"),
     1, 1038, 12, 1},

   { 31, 28, 30, G_IBOX,                    /*** 27 ***/
     NONE,
     NORMAL,
     (LONG) 0L,
     1, 2575, 38, 1},

   { 29, -1, -1, G_BUTTON,                  /*** 28 ***/  /* SPDF_DEF */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Default"),
     0, 0, 20, 1},

   { 30, -1, -1, G_BUTTON,                  /*** 29 ***/  /* SPDFMMDD */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("MDY"),
     21, 0, 8, 1},

   { 27, -1, -1, G_BUTTON,                  /*** 30 ***/  /* SPDFDDMM */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("DMY"),
     30, 0, 8, 1},

   { 32, -1, -1, G_BUTTON,                  /*** 31 ***/  /* SPOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     7, 19, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 32 ***/  /* SPCNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     24, 19, 9, 1},

#define TR13 209
/* TREE 13 */  /* ADFMASK */

   { -1, 1, 4, G_BOX,                       /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 30, 2055},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("SET FILE MASK"),
     1032, 1, 13, 1},

   { 3, -1, -1, G_FTEXT,                    /*** 2 ***/  /* FMMASK */
     EDITABLE | FL3DBAK | 0x8000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[27],
     1, 3, 28, 1},

   { 4, -1, -1, G_BUTTON,                   /*** 3 ***/  /* FMOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     4, 2053, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 4 ***/  /* FMCANCEL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     17, 2053, 9, 1},

#define TR14 214
/* TREE 14 */  /* ADDESKCF */

   { -1, 1, 27, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 39, 22},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("DESKTOP CONFIGURATION"),
     3, 1, 21, 1},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) N_("Default dir:"),
     1, 3, 13, 1},

   { 6, 4, 5, G_IBOX,                       /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     16, 3, 22, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 4 ***/  /* DCDEFAPP */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Application"),
     0, 0, 12, 1},

   { 3, -1, -1, G_BUTTON,                   /*** 5 ***/  /* DCDEFWIN */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Window"),
     13, 0, 9, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     NONE,
     NORMAL,
     (LONG) N_("Parameter:"),
     1, 5, 13, 1},

   { 10, 8, 9, G_IBOX,                      /*** 7 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     16, 5, 22, 1},

   { 9, -1, -1, G_BUTTON,                   /*** 8 ***/  /* DCPMFULL */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Full path"),
     0, 0, 11, 1},

   { 7, -1, -1, G_BUTTON,                   /*** 9 ***/  /* DCPMFILE */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("File name"),
     12, 0, 10, 1},

   { 11, -1, -1, G_STRING,                  /*** 10 ***/
     NONE,
     NORMAL,
     (LONG) N_("Function keys:"),
     1, 7, 14, 1},

   { 16, 12, 15, G_BOX,                     /*** 11 ***/  /* DCFUNBOX */
     FL3DBAK,
     OUTLINED,
     (LONG) 16716032L,
     1, 1544, 37, 2049},

   { 13, -1, -1, G_FTEXT,                   /*** 12 ***/  /* DCFUNNUM */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[28],
     1024, 1024, 3, 1},

   { 14, -1, -1, G_BUTTON,                  /*** 13 ***/  /* DCFUNLT */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\004",
     1029, 1024, 1027, 1},

   { 15, -1, -1, G_FBOXTEXT,                /*** 14 ***/  /* DCFUNPTH */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[29],
     10, 1024, 22, 1},

   { 11, -1, -1, G_BUTTON,                  /*** 15 ***/  /* DCFUNRT */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\003",
     33, 1024, 1027, 1},

   { 17, -1, -1, G_BUTTON,                  /*** 16 ***/  /* DCFUNPRV */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\001",
     30, 7, 4, 1},

   { 18, -1, -1, G_BUTTON,                  /*** 17 ***/  /* DCFUNNXT */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\002",
     34, 7, 4, 1},

   { 19, -1, -1, G_STRING,                  /*** 18 ***/
     NONE,
     NORMAL,
     (LONG) N_("Menu shortcut keys:"),
     1, 2059, 19, 1},

   { 23, 20, 22, G_BOX,                     /*** 19 ***/  /* DCMNUBOX */
     FL3DBAK,
     OUTLINED,
     (LONG) 16716032L,
     1, 3596, 37, 1027},

   { 21, -1, -1, G_FTEXT,                   /*** 20 ***/  /* DCMNUKEY */
     EDITABLE | FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[30],
     1024, 2, 15, 1},

   { 22, -1, -1, G_BUTTON,                  /*** 21 ***/  /* DCMNUCLR */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) N_("Clear all"),
     1041, 2, 19, 1},

   { 19, -1, -1, G_FBOXTEXT,                /*** 22 ***/  /* DCMNUTXT */
     NONE,
     NORMAL,
     (LONG) &desk_rs_tedinfo[31],
     1024, 1024, 36, 1},

   { 24, -1, -1, G_BUTTON,                  /*** 23 ***/  /* DCMNUPRV */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\001",
     30, 2059, 4, 1},

   { 25, -1, -1, G_BUTTON,                  /*** 24 ***/  /* DCMNUNXT */
     TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\002",
     34, 2059, 4, 1},

   { 26, -1, -1, G_FTEXT,                   /*** 25 ***/  /* DCFREMEM */
     FL3DBAK,
     NORMAL,
     (LONG) &desk_rs_tedinfo[32],
     1, 2065, 36, 1},

   { 27, -1, -1, G_BUTTON,                  /*** 26 ***/  /* DCOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     7, 20, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 27 ***/  /* DC_CNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     23, 20, 9, 1},

#define TR15 242
/* TREE 15 */  /* ADINSWIN */

   { -1, 1, 15, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 39, 2066},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("INSTALL WINDOW ICON"),
     10, 1, 19, 1},

   { 3, -1, -1, G_FBOXTEXT,                 /*** 2 ***/  /* IW_NAME */
     EDITABLE | FL3DBAK | 0x4000,
     NORMAL,
     (LONG) &desk_rs_tedinfo[33],
     3, 3, 27, 1},

   { 4, -1, -1, G_STRING,                   /*** 3 ***/
     FL3DBAK,
     NORMAL,
     (LONG) N_("Item type:"),
     2, 5, 10, 1},

   { 7, 5, 6, G_IBOX,                       /*** 4 ***/  /* IW_RBOX */
     NONE,
     NORMAL,
     (LONG) 4352L,
     7, 1542, 27, 1},

   { 6, -1, -1, G_BUTTON,                   /*** 5 ***/  /* IW_FOLD */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Folder"),
     0, 0, 13, 1},

   { 4, -1, -1, G_BUTTON,                   /*** 6 ***/  /* IW_FILE */
     SELECTABLE | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("File"),
     14, 0, 13, 1},

   { 11, 8, 10, G_BOX,                      /*** 7 ***/  /* IW_IBOX */
     FL3DBAK,
     NORMAL,
     (LONG) 4352L,
     17, 2056, 13, 2052},

   { 9, -1, -1, G_BOX,                      /*** 8 ***/  /* IW_ICON */
     NONE,
     NORMAL,
     (LONG) 16716033L,
     0, 0, 8, 4},

   { 10, -1, -1, G_BUTTON,                  /*** 9 ***/  /* IW_UP */
     SELECTABLE | TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\001",
     9, 1024, 3, 1},

   { 7, -1, -1, G_BUTTON,                   /*** 10 ***/  /* IW_DOWN */
     SELECTABLE | TOUCHEXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) "\002",
     9, 2049, 3, 1},

   { 12, -1, -1, G_STRING,                  /*** 11 ***/
     FL3DBAK | 0x4000,
     NORMAL,
     (LONG) N_("Icon:"),
     2, 3080, 15, 1},

   { 13, -1, -1, G_BUTTON,                  /*** 12 ***/  /* IW_INST */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Install,
     3, 1550, 15, 1},

   { 14, -1, -1, G_BUTTON,                  /*** 13 ***/  /* IW_REMV */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Remove,
     21, 1550, 15, 1},

   { 15, -1, -1, G_BUTTON,                  /*** 14 ***/  /* IW_SKIP */
     SELECTABLE | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Skip,
     3, 2064, 15, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 15 ***/  /* IW_CNCL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     21, 2064, 15, 1},

#define TR16 258
/* TREE 16 */  /* ADBKGND */

   { -1, 1, 36, G_BOX,                      /*** 0 ***/
     FL3DBAK,
     OUTLINED,
     (LONG) 69888L,
     0, 0, 38, 16},

   { 2, -1, -1, G_STRING,                   /*** 1 ***/
     NONE,
     NORMAL,
     (LONG) N_("SET BACKGROUND"),
     12, 1, 14, 1},

   { 3, -1, -1, G_STRING,                   /*** 2 ***/
     NONE,
     NORMAL,
     (LONG) N_("Select:"),
     2, 4, 7, 1},

   { 6, 4, 5, G_BOX,                        /*** 3 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     15, 4, 21, 1},

   { 5, -1, -1, G_BUTTON,                   /*** 4 ***/  /* BGDESK */
     SELECTABLE | EXIT | RBUTTON | FL3DIND,
     SELECTED,
     (LONG) N_("Desktop"),
     0, 0, 11, 1},

   { 3, -1, -1, G_BUTTON,                   /*** 5 ***/  /* BGWIN */
     SELECTABLE | EXIT | RBUTTON | FL3DIND,
     NORMAL,
     (LONG) N_("Window"),
     12, 0, 9, 1},

   { 7, -1, -1, G_STRING,                   /*** 6 ***/
     NONE,
     NORMAL,
     (LONG) N_("Style:"),
     2, 1030, 12, 1},

   { 8, -1, -1, G_STRING,                   /*** 7 ***/
     NONE,
     NORMAL,
     (LONG) N_("Color:"),
     24, 1030, 12, 1},

   { 17, 9, 16, G_BOX,                      /*** 8 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     2, 8, 12, 2},

   { 10, -1, -1, G_BOX,                     /*** 9 ***/  /* BGPAT0 */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716032L,
     0, 0, 3, 1},

   { 11, -1, -1, G_BOX,                     /*** 10 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716049L,
     3, 0, 3, 1},

   { 12, -1, -1, G_BOX,                     /*** 11 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716065L,
     6, 0, 3, 1},

   { 13, -1, -1, G_BOX,                     /*** 12 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716081L,
     9, 0, 3, 1},

   { 14, -1, -1, G_BOX,                     /*** 13 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716097L,
     0, 1, 3, 1},

   { 15, -1, -1, G_BOX,                     /*** 14 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716113L,
     3, 1, 3, 1},

   { 16, -1, -1, G_BOX,                     /*** 15 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716129L,
     6, 1, 3, 1},

   { 8, -1, -1, G_BOX,                      /*** 16 ***/  /* BGPAT7 */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716145L,
     9, 1, 3, 1},

   { 18, -1, -1, G_BOX,                     /*** 17 ***/  /* BGSAMPLE */
     NONE,
     NORMAL,
     (LONG) 16716033L,
     17, 8, 4, 2},

   { 35, 19, 34, G_BOX,                     /*** 18 ***/
     NONE,
     NORMAL,
     (LONG) 4352L,
     24, 8, 12, 4},

   { 20, -1, -1, G_BOX,                     /*** 19 ***/  /* BGCOL0 */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716144L,
     0, 0, 3, 1},

   { 21, -1, -1, G_BOX,                     /*** 20 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716145L,
     3, 0, 3, 1},

   { 22, -1, -1, G_BOX,                     /*** 21 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716146L,
     6, 0, 3, 1},

   { 23, -1, -1, G_BOX,                     /*** 22 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716147L,
     9, 0, 3, 1},

   { 24, -1, -1, G_BOX,                     /*** 23 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716148L,
     0, 1, 3, 1},

   { 25, -1, -1, G_BOX,                     /*** 24 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716149L,
     3, 1, 3, 1},

   { 26, -1, -1, G_BOX,                     /*** 25 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716150L,
     6, 1, 3, 1},

   { 27, -1, -1, G_BOX,                     /*** 26 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716151L,
     9, 1, 3, 1},

   { 28, -1, -1, G_BOX,                     /*** 27 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716152L,
     0, 2, 3, 1},

   { 29, -1, -1, G_BOX,                     /*** 28 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716153L,
     3, 2, 3, 1},

   { 30, -1, -1, G_BOX,                     /*** 29 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716154L,
     6, 2, 3, 1},

   { 31, -1, -1, G_BOX,                     /*** 30 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716155L,
     9, 2, 3, 1},

   { 32, -1, -1, G_BOX,                     /*** 31 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716156L,
     0, 3, 3, 1},

   { 33, -1, -1, G_BOX,                     /*** 32 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716157L,
     3, 3, 3, 1},

   { 34, -1, -1, G_BOX,                     /*** 33 ***/
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716158L,
     6, 3, 3, 1},

   { 18, -1, -1, G_BOX,                     /*** 34 ***/  /* BGCOL15 */
     TOUCHEXIT,
     NORMAL,
     (LONG) 16716159L,
     9, 3, 3, 1},

   { 36, -1, -1, G_BUTTON,                  /*** 35 ***/  /* BGOK */
     SELECTABLE | DEFAULT | EXIT | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_OK,
     7, 14, 9, 1},

   { 0, -1, -1, G_BUTTON,                   /*** 36 ***/  /* BGCANCEL */
     SELECTABLE | EXIT | LASTOB | FL3DBAK | FL3DIND,
     NORMAL,
     (LONG) rs_str_Cancel,
     22, 14, 9, 1},

};


OBJECT * desk_rs_trees[RS_NTREE];


static const WORD treestart[RS_NTREE] = {
    TR0, TR1, TR2, TR3, TR4, TR5, TR6, TR7, 
    TR8, TR9, TR10, TR11, TR12, TR13, TR14, TR15, 
    TR16, 
};


const char * const desk_rs_fstr[] = {
    N_(" %ld bytes used in %d items."),                 /* STINFOST */
    N_(" %ld bytes used in %d selected items."),        /* STINFST2 */
    N_("FILE INFORMATION"),                             /* STFIINFO */
    N_("FOLDER INFORMATION"),                           /* STFOINFO */
    N_("COPY FILE(S)"),                                 /* STCOPY */
    N_("MOVE FILE(S)"),                                 /* STMOVE */
    N_("DELETE FILE(S)"),                               /* STDELETE */
    "am",                                               /* STAM */
    "pm",                                               /* STPM */
    N_("DISK"),                                         /* STDISK */
    N_("TRASH"),                                        /* STTRASH */
    N_("PRINTER"),                                      /* STPRINT */
    N_("-More-"),                                       /* STMORE */
    N_("-End of file-"),                                /* STEOF */
    N_("-File read error-"),                            /* STFRE */
    N_("Locate item"),                                  /* STLOCATE */
    N_("Select .INF file"),                             /* STRDINF */
    N_("[2][Switch resolution?][ Yes | No ]"),          /* STRESOL */
    N_("[2][Show or print this document?][Show|Print|Cancel]"),/* STSHOW */
    N_("[1][Print error!][ Retry | Cancel ]"),          /* STPRTERR */
    N_("[1][The GEM Desktop has no more|"               /* STNOWIND */
       "windows.  Please close a|"
       "window that you are not|"
       "using.][  OK  ]"),
    N_("[1][Illegal directory operation!][ Skip | Abort ]"),/* STILLDIR */
    N_("[1][Illegal operation!][  OK  ]"),              /* STILLOP */
    N_("[2][Abort this operation?][ Yes | No ]"),       /* STABORT */
    N_("[2][Do you want to delete all|"                 /* STDELDIS */
       "the files on drive %c: ?][Yes| No ]"),
    N_("[1][Sorry, the desktop cannot|"                 /* STAPGONE */
       "install any more icons|"
       "or applications.][  OK  ]"),
    N_("[2][You cannot create a folder|"                /* STFOFAIL */
       "with that name. Please retry|"
       "with a new name, or cancel.][Cancel|Retry]"),
    N_("[1][Drive %c: does not have|"                   /* STDISKFU */
       "enough room for this|"
       "operation.][  OK  ]"),
    N_("[3][You cannot create or|"                      /* STFO8DEE */
       "access a folder this far|"
       "down the directory path.][  OK  ]"),
    N_("[3][You cannot create or access|"               /* STDEEPPA */
       "a file or folder with that|"
       "name, because the pathname|"
       "is too long.][  OK  ]"),
    N_("[1][%s is used to|"                             /* STTRINFO */
       "permanently delete files|"
       "or folders.][  OK  ]"),
    N_("[1][%s|"                                        /* STPRINFO */
       "is a printer.][  OK  ]"),
    N_("[2][Save Desktop?][  OK  |Cancel]"),            /* STSVINF */
    N_("[2][Do you want to remove icons|"               /* STRMVDEL */
       "or delete files?][Icons|Files|Cancel]"),
    N_("[1][Invalid function key value.][  OK  ]"),     /* STINVKEY */
    N_("[2][Function key already assigned.|"            /* STDUPKEY */
       "Do you want to reassign it?][  OK  |Cancel]"),
    N_("[3][Not enough memory to|"                      /* STNOMEM */
       "initialise EmuDesk.|"
       "You must reboot.][  OK  ]"),
    N_("[2][%s not found.|"                             /* STRMVLOC */
       "Do you want to remove the|"
       "icon or locate the item?][Remove|Locate|Cancel]"),
    N_("[1][Please select icon type.][Desktop|Window|Cancel]"),/* STICNTYP */
    N_("[1][No matching file type.][  OK  ]"),          /* STNOMTCH */
    N_("[1][Drive %s: does not exist.][ Cancel ]"),     /* STNODRIV */
    N_("[1][No drive identifier.][ Retry ]"),           /* STDRIVID */
    N_("[1][Cannot delete file|"                        /* STDELFIL */
       "%s][ Skip | Retry | Abort ]"),
    N_("[1][Cannot delete directory|"                   /* STDELDIR */
       "%s][ Skip | Retry | Abort ]"),
    N_("[1][Not enough memory.][  OK  ]"),              /* STMAFAIL */
    N_("[1][%s not found.][  OK  ]"),                   /* STFILENF */
    N_("[1][Cannot open file|"                          /* STOPFAIL */
       "%s][ Skip | Retry | Abort ]"),
    N_("[1][Cannot create file|"                        /* STCRTFIL */
       "%s][ Skip | Retry | Abort ]"),
    N_("[1][Cannot read file|"                          /* STRDFILE */
       "%s][ Skip | Abort ]"),
    N_("[1][Cannot write file|"                         /* STWRFILE */
       "%s][ Skip | Abort ]"),
    N_("[1][Rename error!][ Retry | Cancel ]"),         /* STRENAME */
    N_("[1][Failed to set default|"                     /* STDEFDIR */
       "directory.][  OK  ]"),
    N_("[1][Illegal .INF file format.][  OK  ]"),       /* STINVINF */
    N_("[2][Continue to search?][  OK  |Cancel]"),      /* STCNSRCH */
    N_("[1][No more files.][  OK  ]"),                  /* STNOMORE */
    N_("[2][Last key is already assigned.|"             /* STDUPCUT */
       "Do you want to reassign it?][  OK  |Cancel]"),
};


int desk_rs_init(void)
{
    WORD i;

    desk_rs_obj = dos_alloc_anyram(RS_NOBS*sizeof(OBJECT));
    if (!desk_rs_obj)
        return -1;

    /* Copy data from ROM to RAM: */
    memcpy(desk_rs_obj, desk_rs_obj_rom, RS_NOBS * sizeof(OBJECT));
    memcpy(desk_rs_tedinfo, desk_rs_tedinfo_rom,
           RS_NTED * sizeof(TEDINFO));

    /* set up the tree pointers */
    for (i = 0; i < RS_NTREE; i++)
        desk_rs_trees[i] = &desk_rs_obj[treestart[i]];

    /* zero TEDINFO te_ptext strings */
    bzero(desk_rs_te_text, sizeof(desk_rs_te_text));
    return 0;
}

