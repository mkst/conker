/*====================================================================
 * cseq.c
 *
 * Copyright 1993, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 *
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/

#include <libaudio.h>
#include <os_internal.h>
#include <ultraerror.h>
#include "cseq.h"


/*
  Note: If there are no valid tracks (ie. all tracks have
  reached the end of their data stream), then return FALSE
  to indicate that there is no next event.
*/
char __alCSeqNextDelta(ALCSeq *seq, s32 *pDeltaTicks)
{
    u32    i;
    u32    firstTime = 0xFFFFFFFF;
    u32    lastTicks = seq->lastDeltaTicks;

    if (!seq->validTracks)
        return FALSE;

    for(i = 0; i < 16 ; i++)
    {
        if((seq->validTracks >> i) & 1)
        {
            if(seq->deltaFlag)
                seq->evtDeltaTicks[i] -= lastTicks;

            if(seq->evtDeltaTicks[i] < firstTime)
                firstTime = seq->evtDeltaTicks[i];
        }
    }

    seq->deltaFlag = 0;
    *pDeltaTicks = firstTime;

    return TRUE;
}
