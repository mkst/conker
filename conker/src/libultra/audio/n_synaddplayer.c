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
#include <os_internal.h>
#include "n_synthInternals.h"


void n_alSynAddPlayer(ALPlayer *client)
{
    OSIntMask mask = osSetIntMask(OS_IM_NONE);

    client->samplesLeft = n_syn->curSamples;

    client->next = n_syn->head;
    n_syn->head  = client;

    osSetIntMask(mask);
}

void n_alSynAddSndPlayer(ALPlayer *client)
{
    OSIntMask mask = osSetIntMask(OS_IM_NONE);

    client->samplesLeft = n_syn->curSamples;

#if 1
    client->next = n_syn->head;
    n_syn->head  = client;
#endif

#if 0
    if(!(n_syn->n_sndp))
        n_syn->n_sndp = client;
#endif

    osSetIntMask(mask);
}

#if 0
void n_alSynAddSeqPlayer( ALPlayer *client)
{
    OSIntMask mask = osSetIntMask(OS_IM_NONE);

    client->samplesLeft = n_syn->curSamples;

#if 1
    client->next = n_syn->head;
    n_syn->head   = client;
#endif

    if( !(n_syn->n_seqp1) )
      n_syn->n_seqp1 = client;
    else if( !(n_syn->n_seqp2) )
      n_syn->n_seqp2 = client;

    osSetIntMask(mask);
}
#endif
