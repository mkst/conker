/*====================================================================
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
#include "n_libaudio.h"


void func_10018CB0(N_ALCSPlayer *seqp, ALCSeq *seq)
{
    N_ALEvent evt;

    evt.type = AL_SEQP_SEQ_EVT;
    evt.msg.spseq.seq = seq;

    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}

void func_10018D00(N_ALCSPlayer *seqp, s16 vol)
{
    N_ALEvent evt;

    evt.type            = AL_SEQP_VOL_EVT;
    evt.msg.spvol.vol   = vol;

    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}

void func_10018D50(N_ALCSPlayer *seqp)
{
    N_ALEvent evt;

    evt.type            = AL_SEQP_STOP_EVT;

    n_alEvtqPostEvent(&seqp->evtq, &evt, 0, 2);
}
