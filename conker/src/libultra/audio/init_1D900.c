#include <os_internal.h>
#include <ultraerror.h>
#include "n_synthInternals.h"


void func_1001CF38(s32, f32);
extern Acmd *(func_1001E530)(s32, Acmd *);


void n_alSynSetFXMix( N_ALVoice *v, u8 fxmix) {
    ALParam  *update;

    if (v->pvoice) {
        update = __n_allocParam();
        ALFailIf(update == 0, ERR_ALSYN_NO_UPDATE);

        update->delta  = n_syn->paramSamples + v->pvoice->offset;
        update->type   = AL_FILTER_SET_FXAMT;
        update->data.i = fxmix;
        update->next   = 0;
        n_alEnvmixerParam(v->pvoice, AL_FILTER_ADD_UPDATE, update);
    }
}

s32 func_1001D9B0(s16 arg0) {
    N_ALMainBus *sp4;

    sp4 = n_syn->mainBus;
    if (sp4->filter.handler == func_1001E530) {
        return n_syn->auxBus[arg0].sources;
    } else {
        return 0;
    }
}

// this is not right.
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/audio/init_1D900/func_1001DA28.s")
// s32 func_1001DA28(s16 arg0) {
//     N_ALMainBus *sp4;
//
//     sp4 = n_syn->mainBus;
//     if (sp4->filter.handler == func_1001E530) {
//         return n_syn->auxBus[arg0].sources;
//     } else {
//         return 0;
//     }
// }

void func_1001DAA0(s32 arg0, s16 arg1, s32 arg2) {
    s32 sp1C = arg0;
    func_1001ED6C(sp1C, arg1, arg2);
}

// probably not right but...
void func_1001DAE4(ALVoiceConfig *arg0, s16 arg1, s32 *arg2) {
    if (arg1 == 8) {
        arg0->fxBus = (f32) *arg2 * 0.1f;
    } else if (arg1 == 9) {
        arg0->priority = *arg2;
    }
    func_1001CF38(arg0, n_syn->outputRate);
}
