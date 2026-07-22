#include "n_synthInternals.h"

extern f32 D_8002C830;
extern f32 D_8002C834;
extern f32 D_8002C838;

typedef struct { u32 w0; u32 w1; } Cmd;

typedef struct {
    u8  pad0[0x99];
    /* 0x99 */ u8   unk99;
    u8  pad9A[0x6];
    /* 0xA0 */ s16  unkA0;
    /* 0xA2 */ s16  unkA2;
    u8  padA4[0x4];
    /* 0xA8 */ s16  unkA8;
    u8  padAA[0x1E];
    /* 0xC8 */ s32  unkC8;
    /* 0xCC */ void *unkCC;
} Voice;

Cmd *func_10022460(Voice *, s16 *, Cmd *);
void func_1001CF38(void *, f32);
f32 sqrtf(f32);

Cmd *func_10022040(Voice *arg0, s16 *arg1, s32 arg2, Cmd *arg3) {
    Cmd *sp2C;
    f32 sp28;
    Cmd *sp24;
    Cmd *sp20;
    Cmd *sp1C;

    sp2C = arg3;
    sp2C = func_10022460(arg0, arg1, arg3);

    if ((arg0->unk99 != 0) && (arg0->unk99 < 64)) {
        if (arg0->unk99 >= 6) {
            sp28 = D_8002C830 / sqrtf((f32) arg0->unk99 + 1.0f);
        } else {
            sp28 = 65536.0f / ((f32) arg0->unk99 + 1.0f);
        }
        if (sp28 < D_8002C834) {
            sp28 = D_8002C838;
        }
        sp24 = sp2C++;
        sp24->w0 = arg1[0] & 0xFFFF;
        sp24->w1 = (((u32) sp28 & 0xFFFF) << 16) | ((arg0->unk99 + 1) & 0xFFFF);
    }
    if (arg0->unkA2 > 0) {
        if (arg0->unkC8 != 0) {
            func_1001CF38(&arg0->unkA0, 22050.0f);
        }
        sp20 = sp2C++;
        sp20->w0 = 0xB000020;
        sp20->w1 = osVirtualToPhysical(&arg0->unkA8);
        if (arg0->unkC8 == 2) {
            arg0->unkC8 = 0;
        }
        sp1C = sp2C++;
        sp1C->w0 = (arg1[0] & 0xFFFF) | (((arg0->unkC8 & 0xFF) << 16) | 0xE000000);
        sp1C->w1 = osVirtualToPhysical(arg0->unkCC) & 0xFFFFFF & 0xFFFFFF;
        arg0->unkC8 = 0;
    }
    return sp2C;
}

s32 n_alLoadParam(N_PVoice *filter, s32 paramID, void *param) {
    f32 *sp24 = &param;

    switch (paramID) {
        case 4:
            filter->unkA2 = 0;
            func_10021C40(filter, 4, param);
            break;
        case 18:
            filter->unkA2 = param;
            filter->unkC8 |= 2;
            break;
        case 19:
            filter->unkA0 = *sp24;
            filter->unkC8 |= 2;
            break;
        case 17:
            filter->unk99 = param;
            break;
        default:
            func_10021C40(filter, paramID, param);
            break;
    }

    return 0;
}
