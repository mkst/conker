#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void n_alSynAddPlayer(struct07 *arg0) {
    OSIntMask mask = osSetIntMask(1);
    arg0->unk10 = D_8002BA44->unk20;
    arg0->unk0 = D_8002BA44->unk0;
    D_8002BA44->unk0 = arg0;
    osSetIntMask(mask);
}

void n_alSynAddSndPlayer(struct07 *arg0) {
    OSIntMask mask = osSetIntMask(1);
    arg0->unk10 = D_8002BA44->unk20;
    arg0->unk0 = D_8002BA44->unk0;
    D_8002BA44->unk0 = arg0;
    osSetIntMask(mask);
}

// n_synstopvoice.c
void n_alSynStopVoice(struct22 *arg0) {
    struct40 *update;

    if (arg0->unk8 != 0) {
        update = __n_allocParam();
        if (update == 0) {
            return;
        }
        // FIXME: offset is wrong when using N_ALVoice struct
        update->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        update->unk8 = 15; // AL_FILTER_STOP_VOICE
        update->unk0 = 0;
        n_alEnvmixerParam(arg0->unk8, 3, update);
    }
}

// n_synfreevoice.c
void n_alSynFreeVoice(struct22 *arg0) {
    struct41 *update;

    if (arg0->unk8 != 0) {
        if (arg0->unk8->unk90 != 0) {
            update = __n_allocParam();
            if (update == 0) {
                return;
            }
            update->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
            update->unk8 = 0;
            update->unkC = arg0->unk8;
            n_alEnvmixerParam(arg0->unk8, 3, update);
        } else {
            _n_freePVoice(arg0->unk8);
        }
        arg0->unk8 = 0;
    }
    if (arg0->unk14 != 0) {
        D_8002BA44->unk2C(arg0->unk14);
    }
}

// n_synsetvol.c
void n_alSynSetVol(struct22 *arg0, s16 volume, s32 t) {
    struct41 *update;

    if (arg0->unk8 != 0) {
        update = __n_allocParam();
        if (update == 0) {
            return;
        }
        update->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        update->unk8 = 11; // AL_FILTER_SET_VOLUME
        update->unkC = (s32)volume;
        update->unk10 = _n_timeToSamples(t);
        update->unk0 = 0;
        n_alEnvmixerParam(arg0->unk8, 3, update);
    }
}
