#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001E530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001ED6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F28C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F5A4.s")
// void *func_8001F5A4(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, void *arg5) {
//     void *sp34;
//     s32 sp30;
//     s32 sp2C;
//     u32 sp28;
//     u32 sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t3;
//     void *temp_t3_2;
//     void *temp_t7;
//
//     sp34 = arg5;
//     sp24 = (arg0 + (arg1 * 4))->unk20 + (*arg0 * 2);
//     if (arg2 < (u32) (arg0 + (arg1 * 4))->unk20) {
//         arg2 = arg2 + (*arg0 * 2);
//     }
//     sp28 = (arg4 * 2) + arg2;
//     if (sp24 < sp28) {
//         sp30 = (s32) (sp28 - sp24) >> 1;
//         sp2C = (s32) (sp24 - arg2) >> 1;
//         temp_t7 = sp34;
//         sp34 = temp_t7 + 8;
//         sp20 = temp_t7;
//         *temp_t7 = (s32) ((((sp2C * 2) & 0xFFF) << 0xC) | 0x4000000 | (arg3 & 0xFFF));
//         sp20->unk4 = osVirtualToPhysical(arg2);
//         temp_t3 = sp34;
//         sp34 = temp_t3 + 8;
//         sp1C = temp_t3;
//         sp1C->unk0 = (s32) ((((sp30 * 2) & 0xFFF) << 0xC) | 0x4000000 | ((arg3 + (sp2C * 2)) & 0xFFF));
//         sp1C->unk4 = osVirtualToPhysical((arg0 + (arg1 * 4))->unk20);
//     } else {
//         temp_t3_2 = sp34;
//         sp34 = temp_t3_2 + 8;
//         sp18 = temp_t3_2;
//         *temp_t3_2 = (s32) ((((arg4 * 2) & 0xFFF) << 0xC) | 0x4000000 | (arg3 & 0xFFF));
//         sp18->unk4 = osVirtualToPhysical(arg2);
//     }
//     return sp34;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F79C.s")
// void *func_8001F79C(void *arg0, s32 arg1, u32 arg2, s32 arg3, void *arg4) {
//     void *sp34;
//     s32 sp30;
//     s32 sp2C;
//     u32 sp28;
//     u32 sp24;
//     void *sp20;
//     void *sp1C;
//     void *sp18;
//     void *temp_t0;
//     void *temp_t7;
//     void *temp_t7_2;
//
//     sp34 = arg4;
//     sp24 = (arg0 + (arg1 * 4))->unk20 + (*arg0 * 2);
//     if (arg2 < (u32) (arg0 + (arg1 * 4))->unk20) {
//         arg2 = arg2 + (*arg0 * 2);
//     }
//     sp28 = arg2 + 0x170;
//     if (sp24 < sp28) {
//         sp30 = (s32) (sp28 - sp24) >> 1;
//         sp2C = (s32) (sp24 - arg2) >> 1;
//         temp_t0 = sp34;
//         sp34 = temp_t0 + 8;
//         sp20 = temp_t0;
//         *temp_t0 = (s32) ((((sp2C * 2) & 0xFFF) << 0xC) | 0x6000000 | (arg3 & 0xFFF));
//         sp20->unk4 = osVirtualToPhysical(arg2);
//         temp_t7 = sp34;
//         sp34 = temp_t7 + 8;
//         sp1C = temp_t7;
//         sp1C->unk0 = (s32) ((((sp30 * 2) & 0xFFF) << 0xC) | 0x6000000 | ((arg3 + (sp2C * 2)) & 0xFFF));
//         sp1C->unk4 = osVirtualToPhysical((arg0 + (arg1 * 4))->unk20);
//     } else {
//         temp_t7_2 = sp34;
//         sp34 = temp_t7_2 + 8;
//         sp18 = temp_t7_2;
//         sp18->unk0 = (s32) ((arg3 & 0xFFF) | 0x6170000);
//         sp18->unk4 = osVirtualToPhysical(arg2);
//     }
//     return sp34;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_1E530/func_8001F978.s")
// NON-MATCHING: lots of work still to do
// struct56 *func_8001F978(struct55 *arg0, s32 arg1, s32 arg2, struct56 *arg3) {
//     struct56 *sp24;
//     s16 sp22;
//     struct56 *temp_t9;
//
//     sp24 = arg3;
//     sp22 = arg2 >> 8;
//     temp_t9 = sp24;
//     sp24 = temp_t9->unk8;
//     temp_t9->unk0 = 0xB000020;
//     temp_t9->unk4 = osVirtualToPhysical(&arg0->unk8);
//     temp_t9 = sp24;
//     sp24 = temp_t9->unk8;
//     temp_t9->unk0 = (s32) (((arg0->unk28 & 0xFF) << 0x10) | 0xE000000 | (arg0->unk2 & 0xFFFF));
//     temp_t9->unk4 = (s32) ((osVirtualToPhysical(arg0->unk2C[arg1]) & 0xFFFFFF) | ((sp22 & 0xFF) << 0x18));
//     arg0->unk28 = 0;
//     return sp24;
// }


f32 func_8001FA78(struct06 *arg0, s32 arg1) {
    f32 tmp;

    arg0->unk14 += arg0->unk10 * arg1;
    if (arg0->unk14 > 2.0f) {
        arg0->unk14 -= 4.0f;
    }
    else {
        arg0->unk14 = arg0->unk14; // ???
    }

    tmp = arg0->unk14;
    tmp = tmp < 0.0f ? -tmp : tmp;
    tmp = tmp - 1.0f;

    return tmp * arg0->unk1C;
}
