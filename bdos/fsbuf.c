/*
 * fsbuf.c - buffer mgmt for file system
 *
 * Copyright (c) 2001 Lineo, Inc.
 *
 * Authors:
 *  SCC   Steve C. Cavender
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */



#include "portab.h"
#include "fs.h"
#include "bios.h"
#include "gemerror.h"



/*
 * flush -
 *
 * NOTE: rwabs() is a macro that includes a longjmp() which is executed
 *       if the BIOS returns an error, therefore flush() does not need
 *       to return any error codes.
 */

void flush(BCB *b)
{
    int n,d;
    DMD *dm;

    /* if buffer not in use or not dirty, no work to do */

    if ((b->b_bufdrv == -1) || (!b->b_dirty)) {
        b->b_bufdrv = -1;
        return;
    }
    
    dm = (DMD*) b->b_dm;                /*  media descr for buffer      */
    n = b->b_buftyp;
    d = b->b_bufdrv;
    b->b_bufdrv = -1;           /* invalidate in case of error */

    rwabs(1,b->b_bufr,1,b->b_bufrec+dm->m_recoff[n],d);

    /* flush to both fats */

    if (n == 0) {
        rwabs(1,b->b_bufr,1,b->b_bufrec+dm->m_recoff[0]-dm->m_fsiz,d);
    }
    b->b_bufdrv = d;                    /* re-validate */
    b->b_dirty = 0;
}



/*
 * getrec - return the ptr to the buffer containing the desired record
 */

char *getrec(int recn, DMD *dm, int wrtflg)
{
    register BCB *b;
    BCB *p,*mtbuf,**q,**phdr;
    int n,cl,err;

    /* put bcb management here */
    /* unsigned added by Petr Stehlik: trying to get 16-bit recn working */
    #define NEGATIVE_RECN -200      /* made up this value: has to be fixed */
    if (recn >= NEGATIVE_RECN)
        cl = recn >> dm->m_clrlog;  /*  calculate cluster nbr       */
   	else
        cl = (unsigned)recn >> dm->m_clrlog;  /*  calculate cluster nbr       */

    if (cl < dm->m_dtl->d_strtcl)
        n = 0;                  /* FAT operat'n */
    else if (recn < 0
                                /* added by Petr Stehlik: a hack to work around
                                   the misuse of negative recn for directory
                                   index. The NEGATIVE_RECN should be replaced
                                   by main dir size, I guess */
          && recn >= NEGATIVE_RECN)
        n = 1;                  /*  DIR (?)     */
    else
        n = 2;                  /*  DATA (?)    */

    mtbuf = 0;
    phdr = &bufl[(n != 0)];

    /*
     * See, if the desired record for the desired drive is in memory.
     * If it is, we will use it.  Otherwise we will use
     *          the last invalid (available) buffer,  or
     *          the last (least recently) used buffer.
     */

    for (b = *(q = phdr); b; b = *(q = &b->b_link))
    {
        if ((b->b_bufdrv == dm->m_drvnum) && (b->b_bufrec == recn))
            break;
        /*
         * keep track of the last invalid buffer
         */
        if (b->b_bufdrv == -1)          /*  if buffer not valid */
            mtbuf = b;          /*    then it's 'empty' */
    }


    if (!b)
    {
        /*
         * not in memory.  If there was an 'empty' buffer, use it.
         */
        if (mtbuf)
            b = mtbuf;

        /*
         * find predecessor of mtbuf, or last guy in list, which
         * is the least recently used.
         */

doio:   for (p = *(q = phdr); p->b_link; p = *(q = &p->b_link))
            if (b == p)
                break;
        b = p;

        /*
         * flush the current contents of the buffer, and read in the
         * new record.
         */

        flush(b);
        rwabs(0,b->b_bufr,1,recn+dm->m_recoff[n],dm->m_drvnum);

        /*
         * make the new buffer current
         */

        b->b_bufrec = recn;
        b->b_dirty = 0;
        b->b_buftyp = n;
        b->b_bufdrv = dm->m_drvnum;
        b->b_dm = (long) dm;
    }
    else
    {   /* use a buffer, but first validate media */
        if ((err = trap13(9,b->b_bufdrv)) != 0) {
            if (err == 1) {
                goto doio; /* media may be changed */
            } else if (err == 2) {
                /* media definitely changed */
                errdrv = b->b_bufdrv;
                rwerr = E_CHNG; /* media change */
                errcode = rwerr;
                longjmp(errbuf,1);
            }
        }
    }

    /*
     *  now put the current buffer at the head of the list
     */

    *q = b->b_link;
    b->b_link = *phdr;
    *phdr = b;

    /*
     *  if we are writing to the buffer, dirty it.
     */

    if (wrtflg) {
        b->b_dirty = 1;
    }

    return(b->b_bufr);
}



/*
 * packit - pack into user buffer
 *
 * MAD: 12/13/01 - ripped out ugly gotos
 */

char *packit(register char *s, register char *d)
{
    char *s0;
    register int i;

    if ((*s))
    {
        s0 = s;
        for (i=0; (i < 8) && (*s) && (*s != ' '); i++)
            *d++ = *s++;

        if (*s0 != '.')
        {
            s = s0 + 8; /* ext */

            if (*s != ' ')
            {
                *d++ = '.';
                for (i=0; (i < 3) && (*s) && (*s != ' '); i++)
                    *d++ = *s++;
            }
        }
    }

    *d = 0;
    return(d);
}
