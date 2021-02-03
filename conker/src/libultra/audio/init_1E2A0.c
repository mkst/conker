#include <os_internal.h>
#include <ultraerror.h>
#include "n_synthInternals.h"

// n_alSynSetPan
void func_1001E2A0(N_ALVoice *v, u8 pan) {
    ALParam *update;

    if (v->pvoice) {
        update = __n_allocParam();
        ALFailIf(update == 0, ERR_ALSYN_NO_UPDATE);

        update->delta = n_syn->paramSamples + v->pvoice->offset;
        update->type = AL_FILTER_SET_PAN;
        update->data.i = pan;
        update->next = 0;
        n_alEnvmixerParam(v->pvoice, AL_FILTER_ADD_UPDATE, update);
    }
}
