#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85122AE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85122C5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512317C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123508.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123568.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851236D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123934.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851239CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85123A54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124770.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851247C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124B18.s")
// f32 func_85124B18(struct108 *arg0) {
//     s32 temp_t8;
//     void *temp_v0;
//
//     if (arg0->unk1B4 == 0) {
//         arg0->unk1B4 = (u16)4;
//     }
//     temp_t8 = arg0->unk2C & 0x80;
//     if ((temp_t8 != 0) && ((*arg0->unk36C & 0x10) != 0)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (temp_t8 != 0) {
//         arg0->unk348 = (f32) (arg0->unk2FC - arg0->unk354);
//         return (bitwise f32) temp_t8;
//     }
//     if ((temp_t8 != 0) && (arg0->unk3D0->unk102 == 0) && (D_800BE9F0 != 0x17)) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 150.0f;
//         return 40.0f;
//     }
//     if (arg0->unk3D0->unk102 != 0) {
//         arg0->unk348 = 40.0f;
//         arg0->unk34C = 40.0f;
//         arg0->unk374 = 194.0f;
//         return 40.0f;
//     }
//     temp_v0 = (arg0->unk1B4 * 8) + 0x800A34B0;
//     arg0->unk374 = (f32) temp_v0->unk0;
//     arg0->unk348 = (f32) temp_v0->unk4;
//     arg0->unk34C = (f32) arg0->unk348;
//     return (bitwise f32) temp_v0;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85124C38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512523C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125330.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125394.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851253CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125490.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851254F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125594.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125608.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125628.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125690.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851256BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125924.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125A6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125C40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85125DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85126138.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512623C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85126378.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127520.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851277B0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851279A0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127EB8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85127FEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128030.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851283B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_851284C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128540.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128680.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_8512868C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_122AE0/func_85128774.s")
