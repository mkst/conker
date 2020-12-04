#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_22040/func_80022040.s")
// NON-MATCHING: 80% matching
// struct21 *func_80022040(struct42 *arg0, struct119 *arg1, s32 arg2, struct21 *arg3) {
//     struct21 *sp2C;
//     f32 sp28;
//     struct21 *sp24;
//     struct21 *sp20;
//     struct21 *sp1C;
//
//     sp2C = arg3;
//     sp2C = func_80022460(arg0, arg1, arg3);
//
//     if ((arg0->unk99 != 0) && (arg0->unk99 < 64)) {
//         if (arg0->unk99 >= 6) {
//             sp28 = D_8002C820 / sqrtf(arg0->unk99 + 1.0f);
//         } else {
//             sp28 = 65536.0f / (arg0->unk99 + 1.0f);
//         }
//         if (sp28 < D_8002C834) {
//             sp28 = D_8002C838;
//         }
//         sp24 = sp2C = &sp2C->unk8;
//         sp24->unk0 = ((s32)arg1 & 0xFFFF);
//         sp24->unk4 =  (((u32) sp28 & 0xFFFF) << 16) | (arg0->unk99 + 1);
//     }
//     if ((s16)arg0->unkA2 > 0) {
//         if (arg0->unkC8 != 0) {
//             func_8001CF38(&arg0->unkA0, 22050.0f);
//         }
//         sp20 = sp2C = &sp2C->unk8;
//         sp20->unk0 = 0xB000020;
//         sp20->unk4 = osVirtualToPhysical(&arg0->unkA8);
//         if (arg0->unkC8 == 2) {
//             arg0->unkC8 = 0;
//         }
//         sp1C = sp2C = &sp2C->unk8;
//         sp1C->unk0 = (((s32)arg1 & 0xFFFF) | (((arg0->unkC8 & 0xFF) << 0x10) | 0xE000000));
//         sp1C->unk4 = (osVirtualToPhysical(arg0->unkCC) & 0xFFFFFF & 0xFFFFFF);
//         arg0->unkC8 = 0;
//     }
//     return sp2C;
// }

s32 func_80022338(struct21 *arg0, s32 arg1, s32 arg2) {
    f32 *sp24 = &arg2;

    switch (arg1) {
        case 4:
            arg0->unkA2 = 0;
            func_80021C40(arg0, 4, arg2);
            break;
        case 18:
            arg0->unkA2 = arg2;
            arg0->unkC8 |= 2;
            break;
        case 19:
            arg0->unkA0 = *sp24;
            arg0->unkC8 |= 2;
            break;
        case 17:
            arg0->unk99 = arg2;
            break;
        default:
            func_80021C40(arg0, arg1, arg2);
            if (0){};
    }

    return 0;
}
