#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80008F90.s")

void func_800093CC(void) {
    if (D_8002AE40 != 0) {
        osStopThread(&D_8003E3A0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009400.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800095A0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800097CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009980.s")
// NON-MATCHING: might be a struct
// s32 func_80009980(s32 *arg0) {
//     if (D_80040F78[0] == 0) {
//         D_80040F78[1] = (u8) 0;
//         D_80040F78[2] = &D_800406B8;
//         D_80040F78[0] = 1;
//     }
//     *arg0 = 0;
//     return &D_100097CC;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_800099BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009B2C.s")
// NON-MATCHING: might be a struct
// void func_80009B2C(s8 arg0[]) {
//     if ((arg0[0] & 1) == 0) {
//         arg0[20]--;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009B4C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009B90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009BE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009CBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_80009FFC.s")
// NON-MATCHING: might be a struct
// s32 func_80009FFC(void) {
//     if (D_800406A0[0] == 0) {
//         D_800406A0[1] = 0;
//         D_800406A0[2] = &D_80040AC8;
//         D_800406A0[3] = 0;
//         D_800406A0[4] = 0;
//         D_800406A0[0] = (u8)1U;
//     }
//     return &D_10009CBC;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_8000A03C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_8F90/func_8000A348.s")
