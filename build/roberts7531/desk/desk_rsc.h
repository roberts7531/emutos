/*
 * desk_rsc.h
 *
 * Generated from draft.tmp.rsc and draft.tmp.def by erd v5.2
 *
 * Copyright 2013-2025 The EmuTOS development team
 *
 * This software is licenced under the GNU General Public License.
 * Please see LICENSE.TXT for further information.
 */

#ifndef DESK_RSC_H
#define DESK_RSC_H

#define ADMENU          0
#define DESKMENU        3
#define FILEMENU        4
#define VIEWMENU        5
#define OPTNMENU        6
#define ABOUITEM        9
#define OPENITEM        18
#define SHOWITEM        19
#define SRCHITEM        20
#define NFOLITEM        22
#define CLOSITEM        23
#define CLSWITEM        24
#define BTOPITEM        25
#define SLCTITEM        26
#define MASKITEM        27
#define DELTITEM        29
#define SEP_FL2         30
#define CLIITEM         31
#define ICONITEM        33
#define TEXTITEM        34
#define NAMEITEM        36
#define TYPEITEM        37
#define SIZEITEM        38
#define DATEITEM        39
#define NSRTITEM        40
#define SEP_VW1         41
#define FITITEM         42
#define SEP_VW2         43
#define BACKGRND        44
#define IICNITEM        46
#define IAPPITEM        47
#define IDSKITEM        48
#define RICNITEM        49
#define PREFITEM        51
#define CONFITEM        52
#define RESITEM         53
#define SEP_OP0         54
#define READITEM        55
#define SAVEITEM        56

#define ADFFINFO        1
#define FFTITLE         1
#define FFNAME          2
#define FFSIZE          3
#define FFDATE          4
#define FFTIME          5
#define FFNUMFOL        6
#define FFNUMFIL        7
#define FFRWRITE        9
#define FFRONLY         10
#define FFOK            11
#define FFSKIP          12
#define FFCNCL          13

#define ADDISKIN        2
#define DITITLE         1
#define DIDRIVE         2
#define DIVOLUME        3
#define DINFOLDS        4
#define DINFILES        5
#define DIUSED          6
#define DIAVAIL         7
#define DIOK            8
#define DICNCL          9

#define ADDINFO         3
#define DEICON          1
#define DELABEL         4
#define DEVERSN         5
#define DECOPYRT        7
#define DEOK            16

#define ADOPENAP        4
#define APPLOPEN        1
#define APPLNAME        2
#define APPLPARM        4
#define APPLOK          5
#define APPLCNCL        6

#define ADINSDSK        5
#define ID_ID           2
#define ID_LABEL        3
#define ID_DRIVE        6
#define ID_TRASH        7
#define ID_PRINT        8
#define ID_IBOX         9
#define ID_ICON         10
#define ID_UP           11
#define ID_DOWN         12
#define ID_OK           14
#define ID_SKIP         15
#define ID_CNCL         16

#define ADINSAPP        6
#define INSAPP          1
#define APNAME          2
#define APARGS          3
#define APDOCTYP        4
#define APFUNKEY        5
#define APAUTO          8
#define APNORM          9
#define APTYPE          10
#define APTOS           12
#define APTTP           13
#define APGEM           14
#define APGTP           15
#define APDEFAPP        18
#define APDEFWIN        19
#define APPMFULL        22
#define APPMFILE        23
#define APINSTAL        24
#define APREMOVE        25
#define APSKIP          26
#define APCANCEL        27

#define ADCPYDEL        7
#define CDTITLE         1
#define CDFOLDS         2
#define CDFILES         3
#define CDOK            4
#define CDCNCL          5

#define ADCPALER        8
#define CACOPY          1
#define CACURRNA        2
#define CACOPYNA        3
#define CAOK            4
#define CASKIP          5
#define CASTOP          6

#define ADMKDBOX        9
#define MKNAME          2
#define MKOK            3
#define MKCNCL          4

#define ADSEARCH        10
#define SFNAME          2
#define SFOK            3
#define SFCANCEL        4

#define ADPRINT         11
#define PRNAME          2

#define ADSETPRE        12
#define SPTITLE         1
#define SPCDYES         4
#define SPCDNO          5
#define SPCCYES         8
#define SPCCNO          9
#define SPCOWYES        12
#define SPCOWNO         13
#define SPDC1           16
#define SPDC2           17
#define SPDC3           18
#define SPDC4           19
#define SPDC5           20
#define SPTF_DEF        23
#define SPTF12HR        24
#define SPTF24HR        25
#define SPDF_DEF        28
#define SPDFMMDD        29
#define SPDFDDMM        30
#define SPOK            31
#define SPCNCL          32

#define ADFMASK         13
#define FMMASK          2
#define FMOK            3
#define FMCANCEL        4

#define ADDESKCF        14
#define DCDEFAPP        4
#define DCDEFWIN        5
#define DCPMFULL        8
#define DCPMFILE        9
#define DCFUNBOX        11
#define DCFUNNUM        12
#define DCFUNLT         13
#define DCFUNPTH        14
#define DCFUNRT         15
#define DCFUNPRV        16
#define DCFUNNXT        17
#define DCMNUBOX        19
#define DCMNUKEY        20
#define DCMNUCLR        21
#define DCMNUTXT        22
#define DCMNUPRV        23
#define DCMNUNXT        24
#define DCFREMEM        25
#define DCOK            26
#define DC_CNCL         27

#define ADINSWIN        15
#define IW_NAME         2
#define IW_RBOX         4
#define IW_FOLD         5
#define IW_FILE         6
#define IW_IBOX         7
#define IW_ICON         8
#define IW_UP           9
#define IW_DOWN         10
#define IW_INST         12
#define IW_REMV         13
#define IW_SKIP         14
#define IW_CNCL         15

#define ADBKGND         16
#define BGDESK          4
#define BGWIN           5
#define BGPAT0          9
#define BGPAT7          16
#define BGSAMPLE        17
#define BGCOL0          19
#define BGCOL15         34
#define BGOK            35
#define BGCANCEL        36

#define STINFOST        0
#define STINFST2        1
#define STFIINFO        2
#define STFOINFO        3
#define STCOPY          4
#define STMOVE          5
#define STDELETE        6
#define STAM            7
#define STPM            8
#define STDISK          9
#define STTRASH         10
#define STPRINT         11
#define STMORE          12
#define STEOF           13
#define STFRE           14
#define STLOCATE        15
#define STRDINF         16
#define STRESOL         17
#define STSHOW          18
#define STPRTERR        19
#define STNOWIND        20
#define STILLDIR        21
#define STILLOP         22
#define STABORT         23
#define STDELDIS        24
#define STAPGONE        25
#define STFOFAIL        26
#define STDISKFU        27
#define STFO8DEE        28
#define STDEEPPA        29
#define STTRINFO        30
#define STPRINFO        31
#define STSVINF         32
#define STRMVDEL        33
#define STINVKEY        34
#define STDUPKEY        35
#define STNOMEM         36
#define STRMVLOC        37
#define STICNTYP        38
#define STNOMTCH        39
#define STNODRIV        40
#define STDRIVID        41
#define STDELFIL        42
#define STDELDIR        43
#define STMAFAIL        44
#define STFILENF        45
#define STOPFAIL        46
#define STCRTFIL        47
#define STRDFILE        48
#define STWRFILE        49
#define STRENAME        50
#define STDEFDIR        51
#define STINVINF        52
#define STCNSRCH        53
#define STNOMORE        54
#define STDUPCUT        55



#define RS_NOBS         295
#define RS_NTREE        17
#define RS_NTED         34
#define RS_NIB          0
#define RS_NBB          2


extern const BITBLK desk_rs_bitblk[];
extern const char * const desk_rs_fstr[];
extern const ICONBLK desk_rs_iconblk[];
extern OBJECT * desk_rs_obj;
extern TEDINFO desk_rs_tedinfo[RS_NTED];
extern OBJECT * desk_rs_trees[];

extern int desk_rs_init(void);


#endif /* DESK_RSC_H */
