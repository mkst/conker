#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 D_8002C790 = 0.10000000149011612;

void n_alSynSetFXMix(struct22 *arg0, u8 arg1) {
    struct46 *sp1C;

    if (arg0->unk8) {
        sp1C = (struct46 *) __n_allocParam();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = D_8002BA44->unk1C + arg0->unk8->unk90;
        sp1C->unk8 = 16;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        n_alEnvmixerParam(arg0->unk8, 3, sp1C);
    }
}

s32 func_1001D9B0(s16 arg0) {
    struct07 *sp4;

    sp4 = D_8002BA44->unk44;
    if (sp4->unk4 == (u32)&D_1001E530) {
        return D_8002BA44->unk48[arg0].unk1C;
    } else {
        return 0;
    }
}

s32 func_1001DA28(s16 arg0) {
    struct07 *sp4;

    sp4 = D_8002BA44->unk44;
    if (sp4->unk4 == (u32)&D_1001E530) {
        return D_8002BA44->unk48[arg0].unk40;
    } else {
        return 0;
    }
}

void func_1001DAA0(s32 arg0, s16 arg1, s32 arg2) {
    s32 sp1C = arg0;
    func_1001ED6C(sp1C, arg1, arg2);
}

void func_1001DAE4(struct139 *arg0, s16 arg1, s32 *arg2) {
    if (arg1 == 8) {
        arg0->unk2 = (f32) *arg2 * D_8002C790;
    } else if (arg1 == 9) {
        arg0->unk0 = *arg2;
    }
    func_1001CF38(arg0, D_8002BA44->unk54);
}
