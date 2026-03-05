/*
 * gem_rsc.h
 *
 * Generated from gem.rsc and gem.def by grd v5.2
 *
 * Copyright 2013-2025 The EmuTOS development team
 *
 * This software is licenced under the GNU General Public License.
 * Please see LICENSE.TXT for further information.
 */

#ifndef GEM_RSC_H
#define GEM_RSC_H

#define FSELECTR        0
#define FSTITLE         1
#define FSDIRECT        3
#define FSDRVTXT        4
#define FSSELECT        5
#define FSDRIVES        6
#define FS1STDRV        7
#define FSLSTDRV        32
#define FILEAREA        33
#define FCLSBOX         34
#define FTITLE          35
#define SCRLBAR         36
#define FUPAROW         37
#define FDNAROW         38
#define FSVSLID         39
#define FSVELEV         40
#define FILEBOX         41
#define F1NAME          42
#define F2NAME          43
#define F3NAME          44
#define F4NAME          45
#define F5NAME          46
#define F6NAME          47
#define F7NAME          48
#define F8NAME          49
#define F9NAME          50
#define FSOK            51
#define FSCANCEL        52

#define DIALERT         1
#define MSGOFF          2
#define BUTOFF          7

#define DESKTOP         2
#define DTNAME          2

#define AL00CRT         0
#define AL01CRT         1
#define AL02CRT         2
#define AL03CRT         3
#define AL04CRT         4
#define AL05CRT         5
#define AL18ERR         6
#define AL04ERR         7
#define AL05ERR         8
#define AL15ERR         9
#define AL08ERR         10
#define ALXXERR         11
#define ALNOFUNC        12
#define ALFSMEM         13
#define ITEMSLCT        14

#define NOTEBB          0
#define QUESTBB         1
#define STOPBB          2


#define RS_NOBS         66
#define RS_NTREE        3
#define RS_NTED         13
#define RS_NIB          0
#define RS_NBB          3


/*
 * parameters for form_alert()
 */
#define MAX_LINENUM     5
#define MAX_LINELEN     40
#define MAX_BUTNUM      3
#define MAX_BUTLEN      20


/* The following arrays live in RAM */
extern OBJECT  rs_obj[];
extern TEDINFO rs_tedinfo[];

/* This array lives in ROM and points to RAM data */
extern OBJECT * const rs_trees[];

/* The following resource data live in ROM */
extern const char * const rs_fstr[];
extern const BITBLK       rs_bitblk[];


extern void gem_rsc_init(void);
extern void gem_rsc_fixit(void);


#endif /* GEM_RSC_H */
