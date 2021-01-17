#include <ultra64.h>

#include <synthInternals.h>

#include "functions.h"
#include "variables.h"


void func_1001E2A0(struct22 *arg0, u8 fxmix) {
    ALParam *update;

    if (arg0->unk8) {
        update = __n_allocParam();
        if (update == NULL) {
            return;
        }
        update->delta = D_8002BA44->unk1C + arg0->unk8->unk90;
        update->type = 12; // AL_FILTER_SET_PAN
        update->data.i = fxmix;
        update->next = 0;
        n_alEnvmixerParam(arg0->unk8, AL_FILTER_ADD_UPDATE, update);
    }
}

void func_1001E350(struct22 *arg0, u8 fxmix) {
    ALParam *update;

    if (arg0->unk8) {
        update = __n_allocParam();
        if (update == NULL) {
            return;
        }
        update->delta = D_8002BA44->unk1C + arg0->unk8->unk90;
        update->type = 17;
        update->data.i = fxmix;
        update->next = 0;
        n_alEnvmixerParam(arg0->unk8, AL_FILTER_ADD_UPDATE, update);
    }
}

void func_1001E400(struct26 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4) {
    struct33 tmp;
    s32 tmp2;

    tmp.unk0 = 2;
    tmp.unk4 = 0;
    tmp.unk8 = arg2;
    tmp.unk9 = arg3;
    tmp.unkA = arg4;
    tmp.unkC = 0;

    tmp2 = arg1;
    n_alEvtqPostEvent(&arg0->unk48, &tmp, tmp2, 2);
}
