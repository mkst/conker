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
#include <ultraerror.h>
#include <os_internal.h>

#include <os.h>
#include "n_synthInternals.h"


void n_alSynFreeVoice( N_ALVoice *voice)
{
    N_ALFreeParam *update;

    if (voice->pvoice) {
        if (voice->pvoice->offset) { /* if voice was stolen */
            update = (N_ALFreeParam *)__n_allocParam();
            ALFailIf(update == 0, ERR_ALSYN_NO_UPDATE);

            /*
             * set voice data
             */
#ifdef SAMPLE_ROUND
            update->delta  = SAMPLE184( n_syn->paramSamples + voice->pvoice->offset);
#else
            update->delta  = n_syn->paramSamples + voice->pvoice->offset;
#endif
            update->type   = AL_FILTER_FREE_VOICE;
            update->pvoice = voice->pvoice;

            n_alEnvmixerParam(voice->pvoice, AL_FILTER_ADD_UPDATE, update);
        } else {
            _n_freePVoice( voice->pvoice);
        }
        voice->pvoice = 0;
    }
    if (voice->unk14 != 0) {
        n_syn->dma(voice->unk14);
    }
}
