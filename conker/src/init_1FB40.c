#include <n_libaudio.h>

extern s32 D_800E0E04;
extern u8 D_800428C4[];
extern u8 D_800428C6[];

typedef struct { u32 w0; u32 w1; } Cmd;

typedef struct {
    u8  pad0[0x2];
    /* 0x2 */  s16   unk2;
    u8  pad4[0x4];
    /* 0x8 */  s32   unk8;
    u8  padC[0x1C];
    /* 0x28 */ s32   unk28;
    /* 0x2C */ void *unk2C;
    /* 0x30 */ void *unk30;
} Filter;

typedef struct {
    u8  pad0[0x40];
    /* 0x40 */ Filter *unk40;
} AuxEntry;

typedef Cmd *(*Handler)(s32, Cmd *, s32);

typedef struct {
    u8  pad0[0x4];
    /* 0x4 */ Handler unk4;
} MainBus;

typedef struct {
    u8  pad0[0x44];
    /* 0x44 */ MainBus  *unk44;
    /* 0x48 */ AuxEntry *unk48;
    u8  pad4C[0x4];
    /* 0x50 */ s32       unk50;
    /* 0x54 */ s32       unk54;
} Synth;

void func_1001CF38(void *, f32);

#define S ((Synth *) n_syn)

Cmd *func_1001FB40(s32 arg0, Cmd *arg1) {
    Cmd *sp54;
    s32  sp50;
    s32  sp4C;
    Cmd *sp48;
    Cmd *sp44;
    Cmd *sp40;
    Cmd *sp3C;
    Cmd *sp38;
    Cmd *sp34;
    Cmd *sp30;
    Cmd *sp2C;
    Filter *sp28;
    Cmd *sp24;
    Cmd *sp20;
    Cmd *sp1C;

    sp54 = arg1;
    if ((D_800E0E04 == 0) || (func_151F2E88(0xB8, &sp54) == 0)) {
        sp48 = sp54++;
        sp48->w0 = 0x20004E0;
        sp48->w1 = 0x2E0;
        sp44 = sp54++;
        sp44->w0 = 0x20007C0;
        sp44->w1 = 0x2E0;
    }
    sp4C = 0;
    for (sp50 = 1; sp50 < S->unk50; sp50++) {
        if (S->unk48[sp50].unk40->unk2 > 0) {
            sp4C = sp50;
        }
    }
    for (sp50 = 0; sp50 < S->unk50; sp50++, sp4C++) {
        if (sp4C >= S->unk50) {
            sp4C = 0;
        }
        if (sp50 != 0) {
            sp40 = sp54++;
            sp40->w0 = 0x20007C0;
            sp40->w1 = 0x2E0;
        }
        sp54 = S->unk44->unk4(arg0, sp54, sp4C);
        if (D_800428C4[sp4C] != 0) {
            if (D_800428C6[sp4C] != 0) {
                sp3C = sp54++;
                sp3C->w0 = 0xC008000;
                sp3C->w1 = 0x7C004E0;
                goto block1;
            }
            sp38 = sp54++;
            sp38->w0 = 0xC007FFF;
            sp38->w1 = 0x7C00650;
        block1:
            ;
        } else {
            if (D_800428C6[sp4C] != 0) {
                sp34 = sp54++;
                sp34->w0 = 0xC008000;
                sp34->w1 = 0x7C00650;
                goto block2;
            }
            sp30 = sp54++;
            sp30->w0 = 0xC007FFF;
            sp30->w1 = 0x7C00650;
        block2:
            sp2C = sp54++;
            sp2C->w0 = 0xC007FFF;
            sp2C->w1 = 0x7C004E0;
        }
        if (S->unk48[sp4C].unk40->unk2 > 0) {
            sp28 = S->unk48[sp4C].unk40;
            if (sp28->unk28 != 0) {
                func_1001CF38(sp28, (f32) S->unk54);
            }
            sp24 = sp54++;
            sp24->w0 = 0xB000020;
            sp24->w1 = osVirtualToPhysical(&sp28->unk8);
            sp20 = sp54++;
            sp20->w0 = 0xE0004E0;
            sp20->w1 = osVirtualToPhysical(sp28->unk2C) & 0xFFFFFF & 0xFFFFFF;
            sp1C = sp54++;
            sp1C->w0 = 0xE000650;
            sp1C->w1 = osVirtualToPhysical(sp28->unk30) & 0xFFFFFF & 0xFFFFFF;
            sp28->unk28 = 0;
        }
    }
    return sp54;
}
