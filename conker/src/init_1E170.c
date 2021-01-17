#include <ultra64.h>

#include <synthInternals.h>

// #include "functions.h"
#include "variables.h"


void func_1001E170(struct22 *arg0, s32 *w, f32 pitch, s16 vol, u8 pan, u8 fxmix,
                   u8 arg6, f32 arg7, u8 arg8, s32 arg9) {
    struct45 *update;

    if (arg0->unk8) {
        update = (struct45 *) __n_allocParam();
        if (update == NULL) {
            return;
        }

        update->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        update->unk0 = 0;           // next
        update->unk8 = AL_FILTER_START_VOICE_ALT; // type
        update->unkA = arg0->unk1E; // unity
        update->unk12 = pan;        // pan?
        update->unk10 = vol;        // volume
        update->unk13 = fxmix;      // fxMix?
        update->unkC = pitch;       // pitch
        update->unk14 = arg8;
        update->unk15 = arg6;
        update->unk18 = arg7;
        update->unk1C = _n_timeToSamples(arg9); // samples
        update->unk20 = w;       // wave
        n_alEnvmixerParam(arg0->unk8, AL_FILTER_ADD_UPDATE, update);
    }
}
