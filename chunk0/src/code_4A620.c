#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504A620.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504A730.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504ADD0.s")

s32 func_8504AEF4(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504AF10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504B0FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504BA38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504BAF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504BB88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504BC38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504BE2C.s")

s32 func_8504C078(void) {
    if (D_800D154C->unk31C->unk58 != 1) {
        D_800D154C->unk31C->unk59 = 0;
        func_8507F640();
    }
    return 999;
}

s32 func_8504C0B8(void) {
    if (D_800BE9F0 == 27 || D_800BE9F0 == 30) {
        return 395;
    }
    return 27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504C0E8.s")

void func_8504C854(struct127 *arg0) {
    D_800CC288 = arg0->unk31C->unk8C;

    if (arg0->unk31C->unk8E > 0) {
        arg0->unk31C->unk8E -= D_800BE9A0;
    } else {
        arg0->unk31C->unk8A = 0;
    }
    if (arg0->unk31C->unk8F > 0) {
        arg0->unk31C->unk8F -= D_800BE9A0;
    } else {
        arg0->unk31C->unk8C = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504C8BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504C9E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504CA60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8504CB98.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850511E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85051558.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8505210C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85052260.s")

void func_85052408(struct127 *arg0) {
    arg0->unkB2 = 0;
    arg0->unk31C->unk95 = 0;
    if (arg0->unk1CA != 0) {
        arg0->unk81 = 0;
        arg0->unk83 = 0;
        arg0->unk89 = 6;
    }
    arg0->unkAD = 0;
    arg0->unk24 = 4.0f;
    arg0->unkB8 = 0.0f;
    arg0->unk3C = 15.0f;
}

void func_85052458(s32 arg0) {
}

void func_85052464(struct127 *arg0) {
    if (arg0->unk1CA == 0) {
        func_85060F28(arg0, 1);
    }
}

void func_85052490(struct127 *arg0, u16 arg1, f32 arg2, f32 arg3) {
    arg3 *= D_800D1550;

    arg0->unk40 = (arg0->unk7A + 16384) * 0.005493164f;

    if (((arg1 - arg0->unk7A + 16384) & 0x8000) != 0) {
        arg0->unkB8 -= arg2 * arg3;
    } else {
        arg0->unkB8 += arg2 * arg3;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8505250C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85052590.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85052760.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850528C8.s")

void func_85052EF0(struct127 *arg0) {
    arg0->unk125 = 100;
    arg0->unk40 =  ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
    func_8505E650(arg0, 0, 1.0f, 0.0f, 0.0f, 0.0f, 0);
}

struct127 *func_85052F58(s32 arg0, s32 arg1) {
    struct127 *temp_v0;

    temp_v0 = &D_800CC2D0[arg0];
    temp_v0->unk13C = (u8)0;
    temp_v0->unk218 = 0;
    temp_v0->unk232 = arg1;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85052F9C.s")
// NON-MATCHING: plenty still to do here
// void func_85052F9C(struct127 *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
//     s32 sp40;
//     s32 sp3C;
//     f32 temp_ret;
//     u16 temp_v0_3;
//     u8 idx;
//     struct127 *temp_a0;
//     struct05 *temp_v0;
//     s32 phi_a1;
//     s8 phi_v1;
//     struct127 *phi_a0;
//     // f32 phi_return;
//
//     sp3C = 0;
//     phi_a1 = -1;
//     if (arg0->unk4 == 72) {
//         sp40 = -1;
//         temp_v0 = func_85033E84(arg0, -1);
//         phi_a1 = -1;
//         if (temp_v0 != 0) {
//             phi_a1 = temp_v0->unk6;
//         }
//     }
//     idx = arg0->unk124;
//     temp_a0 = &D_800CC2D0[idx];
//     if (arg8 == 0) {
//         // phi_return = idx; // bitwise (f32)
//         if (temp_a0->unk18 < (arg0->unk18 + (arg1 * arg0->unk150))) {
//             // phi_return = 0.0f;
//             if (temp_a0->unk20 < 0.0f) { // stick an || here
//                 arg0->unk13C = (idx + 0x64);
//                 if (arg9 != 0) {
//                     D_800D1580 = arg9;
//                     sp40 = phi_a1;
//                     func_8506E5FC(temp_a0, phi_a1);
//                 }
//                 D_800CC2D0[idx].unk1CC = D_800CC2D0[idx].unk18;
//                 D_800CC2D0[idx].unk76 = arg0->unk7A;
//                 D_800CC2D0[idx].unk31C->unk30 = 0;
//                 if (arg0->unk0 == 0x20) {
//                     D_800CC2D0[idx].unk20 = 0.0f;
//                     arg0->unk20 = 0.0f;
//                     if (arg0->unk4 == 0x48) {
//                         phi_v1 = (s8) 2;
//                         if (phi_a1 == 0x7A) {
//                             arg0->unk65 = (arg0->unk124 + 1);
//                             arg0->unk5C = arg2;
//                             arg0->unk101 = (arg0->unk101 | arg3);
//                             func_8505E650(&D_800CC2D0[idx], 5, 1.0f, 0.0f, 0.0f, 0.0f, 0);
//                             func_85083568(&D_800CC2D0[idx], 0x79, 1.0f, 0);
//                             sp3C = 1;
//                             phi_v1 = (s8) 2;
//                         }
//                     } else {
//                         arg0->unk150 = 0.75f;
//                         D_800CC2D0[idx].unk18 = arg0->unk18;
//                         phi_v1 = 1;
//                         if (D_800BE9F0 == 6) {
//                             phi_v1 = 0x81;
//                         }
//                     }
//                     D_800CC2D0[idx].unk76 = arg0->unk7A;
//                     D_800CC2D0[idx].unk78 = arg0->unk7A;
//                     D_800CC2D0[idx].unk7A = arg0->unk7A;
//                     D_800CC2D0[idx].unk40 = (s16) (arg0->unk7A + 0x4000) * 0.005493164f;
//                     D_800CC2D0[idx].unk31C->unk4E = phi_v1;
//                     D_800CC2D0[idx].unk83 = 0;
//                     D_800CC2D0[idx].unk89 = 0;
//                     phi_a0 = &D_800CC2D0[idx];
//                     // phi_return = arg0->unk7A; // bitwise ( f32)
//                 } else {
//                     D_800CC2D0[idx].unk65 = D_800C3E78 + 1;
//                     D_800CC2D0[idx].unk5C = arg2;
//                     D_800CC2D0[idx].unk89 = 0;
//                     D_800CC2D0[idx].unk101 =  (D_800CC2D0[idx].unk101 | arg3);
//                     phi_a0 = &D_800CC2D0[idx];
//                 }
//                 phi_a0->unk125 =  arg6;
//                 phi_a0->unk239 = arg7;
//                 phi_a0->unk31C->unk27 = 0;
//                 arg0->unk218 = 0;
//                 arg0->unk232 =  arg5;
//                 if (arg4 != 0) {
//                     temp_ret = func_8506160C(phi_a0, 1, 0, 0, 0);
//                     phi_a0->unk101 = (u8) (phi_a0->unk101 | 0x40);
//                     // phi_return = temp_ret;
//                 }
//             }
//         }
//     } else {
//     //    goto block_6;
//     }
//     if (sp3C != 0) {
//         // phi_return =
//         func_85060F28(arg0, 0);
//     }
//     // return phi_return;
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8505327C.s")
// NON-MATCHING: plenty still to do here
// void func_8505327C(struct127 *arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4) {
//     // s32 sp44;
//     f32 sp3C;
//     struct127 *temp_s0;
//     struct126 *temp_v0;
//
//     temp_s0 = &D_800CC2D0[arg0->unk124];
//     if ((temp_s0->unk89 == 0) && (temp_s0->unk104 == 0)) {
//         temp_v0 = temp_s0->unk31C;
//         if ((temp_v0 == 0) || (temp_v0->unk6B == 0)) {
//             temp_s0->unk125 = 0xFFU;
//             temp_s0->unk20 = arg1;
//             temp_s0->unk24 = arg2;
//             temp_s0->unk83 = 0xFFU;
//             temp_s0->unk89 = 0xFFU;
//             temp_s0->unk76 = arg0->unk7A;
//             arg0->unk218 = 0;
//             arg0->unk232 = arg3;
//             // func_8505E650(arg1, arg2, temp_s0, 0x32, 1.2999999523162842f, 4.0f, 0.0f, 0.0f, 0);
//             func_8505E650(arg0, 50, 0x3FA66666, 4.0f, 0.0f, 0.0f, 0);
//             D_800CC2D0[arg0->unk124].unk31C->unk30 = 70;
//             D_800CC2D0[arg0->unk124].unk31C->unk28 = arg0->unk14;
//             D_800CC2D0[arg0->unk124].unk31C->unk2C = arg0->unk1C;
//             if ((arg0->unk1D4 != 0) && (arg4 != -1)) {
//                 func_85043FF0(&sp3C, arg0->unk1D4 + (arg4 << 6));
//                 D_800CC2D0[arg0->unk124].unk31C->unk28 = sp3C;
//                 // D_800CC2D0[arg0->unk124].unk31C->unk2C = sp44;
//             }
//             D_800CC2D0[arg0->unk124].unk31C->unk27 = 1;
//         }
//     }
// }


#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85053430.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850535F4.s")

void func_85053694(struct127 *arg0) {
    arg0->unk0 = 8;
    arg0->unkE4 = 0;
    arg0->unkE6 = 0;
    func_8506160C(arg0, 6, 0, 0, 0);
}

void func_850536D0(struct127 *arg0) {
    arg0->unk0 = 13;
    arg0->unkE4 = 0;
    arg0->unkE6 = 0;
}

void func_850536E8(struct127 *arg0) {
    arg0->unk40 = ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
}

void func_8505371C(struct127 *arg0) {
    arg0->unk40 = ((s16) (arg0->unk7A + 16384)) * 0.005493164f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85053750.s")
// void func_85053750(struct127 *arg0) {
//     s32 tmp;
//
//     if (arg0->unk154 - arg0->unk14C != 0.0f) {
//         if (fabsf(arg0->unk154 - arg0->unk14C) < arg0->unk15C) {
//             func_85062BDC(arg0->unk154, arg0->unk14C, arg0->unk154, arg0->unk150);
//         } else {
//             tmp = 1;
//             if (arg0->unk154 - arg0->unk14C < 0.0f) {
//                 tmp = -1;
//             }
//             func_85062BDC(arg0->unk154, arg0->unk14C, ((f32) tmp * arg0->unk15C) + arg0->unk14C, arg0->unk150);
//         }
//     }
//     if (arg0->unk158 - arg0->unk150 != 0.0f) {
//         if (fabsf(arg0->unk158 - arg0->unk150) < arg0->unk15C) {
//             func_85062BDC(arg0->unk158, arg0->unk14C, arg0, arg0->unk14C, arg0->unk158);
//             return;
//         }
//         tmp = 1;
//         if (arg0->unk158 - arg0->unk150 < 0.0f) {
//             tmp = -1;
//         }
//         func_85062BDC(arg0->unk158, arg0->unk14C, arg0, arg0->unk14C, ((f32) tmp * arg0->unk15C) + arg0->unk150);
//     }
// }



#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85053894.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850538CC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850548D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_850548E4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85054A0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85054A5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85054A94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85054F74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_8505528C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055A2C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055B0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055B64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055BF8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055C88.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_4A620/func_85055D48.s")
