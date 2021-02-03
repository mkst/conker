#include <os_internal.h>
#include <ultraerror.h>
#include "n_synthInternals.h"


void func_1001E350(N_ALVoice *v, u8 fxmix) {
    ALParam *update;

    if (v->pvoice) {
        update = __n_allocParam();
        ALFailIf(update == 0, ERR_ALSYN_NO_UPDATE);

        update->delta = n_syn->paramSamples + v->pvoice->offset;
        update->type = 17;
        update->data.i = fxmix;
        update->next = 0;
        n_alEnvmixerParam(v->pvoice, AL_FILTER_ADD_UPDATE, update);
    }
}
