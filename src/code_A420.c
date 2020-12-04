#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000A420.s")
// NON-MATCHING: mostly just stack + 1 cast
// s32 func_8000A420(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 *arg9, s32 *argA, s32 *argB) {
//     s8 temp_t5;
//     s16 tmp0;
//     //
//     f32 phi_f12;
//     //
//     s32 temp_t1;
//     s32 ret;
//     s32 sp24;
//     s32 temp_v1;
//
//     sp24 = 128;
//     if ((arg7 & 0x8000) != 0) {
//         // if arg7 is negative, take abs
//         arg7 = arg7 & 0x7FFF;
//         ret = func_850AD960(arg4, arg6, 0, 0);
//     } else {
//         ret = func_850AD9A0(arg4, arg5, arg6);
//     }
//     temp_t1 = arg8 - arg7;
//     temp_v1 = ((arg8 - ret) << 15) / temp_t1;
//     temp_v1 = 0x7FFF - temp_v1;
//     if (temp_v1 >= 401) {
//         if (arg9 != 0) {
//             if (func_850AD960(arg0, arg2, 0, 0) >= 31) {
//                 phi_f12 = sqrtf((f32) ((arg0 * arg0) + (arg2 * arg2)));
//                 if (D_8002C200 < phi_f12) { // rodata, 0.009999999776482582
//                     phi_f12 = (f32) arg0 / phi_f12;
//                 }
//                 tmp0 = (s32) ((f64) func_850487E0(phi_f12) * D_8002C208); // rodata, 3.068309783935547
//                 if (arg2 > 0) {
//                     if (tmp0 < 0) {
//                         tmp0 = -128 - tmp0;
//                     } else {
//                         tmp0 = 128 - tmp0;
//                     }
//                 }
//                 temp_t5 = (s8) (s32) ((f32) tmp0 + (arg3 * F_0__7111111283302307)); // 0.7111111283302307
//                 if (( temp_t5 >= 96) || ( temp_t5 < -96)) {
//                     tmp0 = 0;
//                 } else if ( temp_t5 >= 32) {
//                     tmp0 = 95 - temp_t5;
//                 } else if (temp_t5 < -32) {
//                     tmp0 = -95 - temp_t5;
//                 } else {
//                     sp24 = 0;
//                     tmp0 = temp_t5 * 2;
//                 }
//                 *arg9 = (tmp0 + 64) | sp24;
//             } else {
//                 *arg9 = 64;
//             }
//         }
//         if ((0x7FFF - ((s32) ((arg8 - ret) << 15) / temp_t1)) < 0) {
//             temp_v1 = 0;
//         }
//         if (temp_v1 >= 0x8000) {
//             temp_v1 = 0x7FFF;
//         }
//         *argA = temp_v1;
//     } else {
//         *argA = 0;
//     }
//     if (argB != 0) {
//         *argB = ret;
//     }
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000A750.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B060.s")
// NON-MATCHING: fair amount to fix up
// s32 func_8000B060(f32 arg0, f32 arg1, s32 arg2) {
//     s16 sp1C;
//     f32 sp18;
//     f32 temp_f0;
//     s16 temp_t8;
//     s32 temp_f6;
//     s8 temp_t9;
//     s16 phi_v1;
//     s16 phi_v1_2;
//     s16 phi_a1;
//
//     temp_f0 = sqrtf((arg0 * arg0) + (arg1 * arg1));
//     sp18 = temp_f0;
//     if (D_8002C214 < temp_f0) {
//         sp18 = arg0 / temp_f0;
//     }
//     sp1C = 128;
//     temp_f6 = ((f64) func_850487E0(sp18) * D_8002C218); // ,(u16)0x80
//     phi_v1 = temp_f6;
//     if (0.0f < arg1) {
//         temp_t8 = temp_f6;
//         if ((s32) temp_t8 < 0) {
//             phi_v1 = (s16) (-128 - temp_t8);
//         } else {
//             phi_v1 = (s16) (128 - temp_t8);
//         }
//     }
//     temp_t9 = phi_v1 + arg2;
//     if (( temp_t9 >= 96) || ( temp_t9 < -96)) {
//         phi_v1_2 = 0;
//         phi_a1 = 128;
//     } else if ((s32) temp_t9 >= 32) {
//         phi_v1_2 = (s16) (0x5F - temp_t9);
//         phi_a1 = 128;
//     } else if ((s32) temp_t9 < -32) {
//         phi_v1_2 = (s16) (-0x5F - temp_t9);
//         phi_a1 = 128;
//     } else {
//         phi_v1_2 = (s16) (temp_t9 * 2);
//         phi_a1 = 0;
//     }
//     return (phi_v1_2 + 64) | phi_a1;
// }

struct151 *func_8000B1B0(s32 arg0) {
    s32 i;

    for(i = 0; i < 3; i++)
    {
        if ((D_800417B0[i] != 0) && (arg0 == D_800417B0[i]->unk4)) {
            return D_800417B0[i];
        }
    }

    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B1FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B294.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B2F4.s")
// NON-MATCHING: close... using t1/t2 not t2/t3
// struct137 *func_8000B2F4(s32 arg0) {
//     struct137 *tmp;
//     struct138 *tmp2 = &D_8002B074[arg0];
//     s32 i;
//
//     for (i = 0; i < 12; i++)
//     {
//         tmp = &D_800419A8[i];
//
//         if (tmp->unk4 == -1) {
//
//             bzero(&D_800419A8[i], 100);
//
//             tmp->unk0 = -1;
//
//             if (arg0 < 150) {
//                 tmp->unk2C = (s32)(u16)tmp2->unk0;
//             } else {
//                 tmp->unk2C = 26000;
//             }
//             tmp->unk30 = tmp->unk2C;
//
//             tmp->unk5A = 32768;
//             tmp->unk58 = 32768;
//             tmp->unk54 = 32768;
//             tmp->unk52 = 32768;
//             tmp->unk4C = 32768;
//             tmp->unk4E = 32768;
//             tmp->unk4 = arg0;
//             tmp->unk8 = &D_8002B9D4;
//             tmp->unkC = &D_8002B9F4;
//             tmp->unk10 = tmp;
//             return tmp;
//         }
//     }
//     return NULL;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B3D4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B638.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B830.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000B8B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BA18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BAFC.s")

s32 func_8000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        func_8000E704(20, 1, 0xFFFF);
        arg0 = 1;
    }
    return arg0;
}

s32 func_8000BC28(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    s32 tmp = func_80008A4C(arg1, 0) + func_80008A4C(arg1, 6) + 1;
    if (tmp >= 256) {
        tmp = 255;
    } else {
        if (tmp < 16) {
            tmp = 1;
        }
    }
    if (tmp != arg0) {
        func_850C851C(tmp - 1);
        arg0 = tmp;
    }
    return arg0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000BF60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C350.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C7E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000C934.s")
// NON-MATCHING: close but last part isn't quite right
// s32 func_8000C934(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
//     s32 sp3C;
//     s32 sp38;
//     s32 temp_a1;
//     s32 temp_t7;
//
//     sp3C = 0;
//     temp_t7 = D_800DBFF0->unk5F0 & 1;
//     if (temp_t7 != 0) {
//         sp38 = 0x7FFF;
//     } else {
//         sp38 = 12000;
//     }
//     if ((D_800BE9F0 == 0x37) && (temp_t7 == 0)) {
//         func_800114D0(2200, 1066, -1600, sp38, 3000, 1500, 0, &sp3C, 0);
//         sp3C = sp38 - (sp3C & 0xFF00);
//     }
//     temp_a1 = sp3C;
//     if ((sp3C != arg0) & 0xFFFF) {
//         // sp3C = temp_a1;
//         func_8000E40C(84, sp3C);
//     }
//     return temp_a1 | 0x80000000;
// }

s32 func_8000CA18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 tmp;

    if (D_800BE9F0 == 55) {
        if ((D_800DBFF0->unk5F0 & 1) != 0) {
            tmp = 0;
        } else {
            func_800114D0(2200, 1066, -1600, 24000, 3000, 1500, 0, &tmp, 0);
            tmp &= 0xFF00;
        }
    } else {
        tmp = 24000;
    }

    if ((tmp != arg0) & 0xFFFF) {
        func_8000E40C(84, tmp);
    }
    return tmp | 0x80000000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CAE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CBA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CBF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CC54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CD40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CDA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000CEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D2F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D758.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000D96C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DE1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DEC4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000DF68.s")

void func_8000E054(s32 arg0, s32 arg1) {
    struct151 *sp1C;

    sp1C = func_8000B1B0(arg0);
    if (sp1C != 0) {
        if ((2 == sp1C->unk15) && (arg1 == 0)) {
            func_800084D8(sp1C->unk0);
            sp1C->unk15 = 0;
            sp1C->unk30 = -1;
            func_8000CC54(sp1C->unk0, sp1C);
            return;
        }
        if ((2 != sp1C->unk15) && (arg1 != 0)) {
            if (sp1C->unk15 != 1) {
                func_80008F58(sp1C->unk0);
            }
            sp1C->unk15 = 2;
        }
    }
}

s32 func_8000E0F8(s32 arg0) {
    struct151 *tmp;

    arg0 &= 0xFFF;
    tmp = func_8000B1FC(arg0);

    if (tmp && tmp->unk60 == 0) {
        return 1;
    } else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E134.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E17C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E2F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E40C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E46C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E588.s")
// #pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E654.s")

s32 func_8000E654(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct151 *sp1C;
    struct151 *phi_a0;

    sp1C = func_8000B1FC(arg0);
    phi_a0 = NULL;
    if (arg3 >= 0) {
        phi_a0 = func_8000B1FC(arg3);
    }

    if (sp1C != NULL) {
        if (arg2 == 0) {
            if (sp1C->unk0 >= 0) {
                func_80008C6C(sp1C->unk0, arg1 - 1);
                return 1;
            }
        }
        sp1C->unk24 = arg1;
        sp1C->unk20 = arg2;
        if (phi_a0 != NULL) {
            sp1C->unk10 = phi_a0;
        }
        return 1;
    }
    return 0;
}


s32 func_8000E704(s32 arg0, s32 arg1, s32 arg2) {
    struct151 *tmp = func_8000B1B0(arg0);
    if (tmp && tmp->unk0 >= 0) {
        func_80008A94(tmp->unk0, arg2, arg1);
        return 1;
    }
    return 0;
}

void func_8000E75C(s32 arg0) {
    D_8002B070 = arg0 >> 1;
}

s32 func_8000E770(s32 *arg0, s32 *arg1) {
    if (arg0 != 0) {
        *arg0 = D_80041F08;
    }
    if (arg1 != 0) {
        *arg1 = D_80041F0C;
    }
    return D_80041F04;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E7A0.s")
// NON-MATCHING: mostly just wrong registers
// void func_8000E7A0(u32 arg0, s32 arg1) {
//     u8 tmp;
//
//     if ((arg0 & 1) == 1) {
//         D_80041F04 |= 1;
//     } else if (arg0 & 2) {
//         D_80041F0C += 1;
//         D_80041F08 += arg1;
//     } else if (arg0 & 4) {
//         D_80041F08 = 1 + arg1;
//         D_80041F04 |= 4;
//     } else if (arg0 & 8) {
//         D_80041F0C = arg1 >> 8;
//         tmp = arg1;
//         if ((tmp == 0) || (tmp == 4) || (tmp == 5))  {
//             D_80041F08 = 2;
//         } else if (tmp == 10) {
//             D_80041F08 = 1;
//         }
//         else {
//             D_80041F08 = 3;
//         }
//     } else if (arg0 & 16) {
//         D_80041F04 |= 16;
//     }
// }

void func_8000E8C4(s32 arg0) {
    if ((arg0 & 1) == 1) {
        D_80041F04 &= -2; // truncate odd to even
    }
}

u8 func_8000E8F0(s32 arg0) {
    struct151 *temp_v0 = func_8000B1B0(arg0);
    if ((temp_v0 != 0) && (temp_v0->unk0 >= 0)) {
        return D_800418AC[temp_v0->unk0];
    } else {
        return 0;
    }
}

// initialising with grim loops
#pragma GLOBAL_ASM("asm/nonmatchings/code_A420/func_8000E934.s")

u16 func_8000EA94(s32 arg0) {
    u16 tmp;

    if (arg0 == 0) {
        tmp = 82;
    } else if (arg0 == 2) {
        tmp = 81;
    } else if (arg0 == 1) {
        tmp = 83;
    }
    func_8000D96C(tmp, 0, 0);
    return tmp;
}
