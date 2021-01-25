#include <os_internal.h>
#include <ultraerror.h>
#include "n_synthInternals.h"


// set pitch 2 ?
void func_1001CA90( N_ALVoice *v, f32 pitch) {
    ALParam  *update;

    if (v->pvoice) {
        /*
         * get new update struct from the free list
         */

        update = __n_allocParam();
        ALFailIf(update == 0, ERR_ALSYN_NO_UPDATE);

        /*
         * set offset and pitch data
         */
#ifdef SAMPLE_ROUND
        update->delta  = SAMPLE184( n_syn->paramSamples + v->pvoice->offset);
#else
        update->delta  = n_syn->paramSamples + v->pvoice->offset;
#endif
        update->type   = 19;
        update->data.f = pitch;
        update->next   = 0;

        n_alEnvmixerParam(v->pvoice, AL_FILTER_ADD_UPDATE, update);
      }
}
