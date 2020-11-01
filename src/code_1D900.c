#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_8001D900(struct22 *arg0, u8 arg1) {
    struct46 *sp1C;

    if (arg0->unk8) {
        sp1C = (struct46 *) func_800196E4();
        if (sp1C == NULL) {
            return;
        }
        sp1C->unk4 = (s32) (D_8002BA44->unk1C + arg0->unk8->unk90);
        sp1C->unk8 = (u16)0x10;
        sp1C->unkC = arg1;
        sp1C->unk0 = 0;
        func_80020978(arg0->unk8, 3, sp1C);
    }
}

s32 func_8001D9B0(s16 arg0) {
    struct7 *sp4;

    sp4 = D_8002BA44->unk44;
    if (sp4->unk4 == (u32)&D_1001E530) {
        return D_8002BA44->unk48[arg0].unk1C;
    } else {
        return 0;
    }
}

s32 func_8001DA28(s16 arg0) {
    struct7 *sp4;

    sp4 = D_8002BA44->unk44;
    if (sp4->unk4 == (u32)&D_1001E530) {
        return D_8002BA44->unk48[arg0].unk40;
    } else {
        return 0;
    }
}

void func_8001DAA0(s32 arg0, s16 arg1, s32 arg2) {
    s32 sp1C = arg0;
    func_8001ED6C(sp1C, arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_1D900/func_8001DAE4.s")
// NON-MATCHING: extra cvt.d.s
// void func_8001DAE4(struct47 *arg0, s16 arg1, s32 *arg2) {
//     if (arg1 == 8) {
//         arg0->unk2 = (f32) *arg2 * D_8002C790;
//     } else if (arg1 == 9) {
//         arg0->unk0 = *arg2;
//     }
//     func_8001CF38(arg0, (f32) D_8002BA44->unk54);
// }
