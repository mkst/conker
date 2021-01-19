#include <ultra64.h>

#include "functions.h"
#include "variables.h"


struct151 *func_1000B1B0(s32 arg0) {
    s32 i;

    for(i = 0; i < 3; i++)
    {
        if ((D_800417B0[i] != 0) && (arg0 == D_800417B0[i]->unk4)) {
            return D_800417B0[i];
        }
    }

    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B1FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B294.s")
// NON-MATCHING: no idea.
// struct151 * func_1000B294(s32 *arg0) {
//     s32 i;
//     struct151 *phi_v1;
//     struct151 *tmp;
//     struct151 *ret = NULL;
//
//     for (i = 0; i < 3; i++)
//     {
//         phi_v1 = &D_800417B0[i];
//         ret = phi_v1;
//         if (phi_v1)
//         {
//             if (arg0 == phi_v1->unk10)
//             {
//                 phi_v1->unk10 = phi_v1;
//             }
//             tmp = *phi_v1->unk60;
//             if ((tmp) && (arg0 == tmp->unk10))
//             {
//                 phi_v1->unk10 = tmp;
//             }
//         }
//     }
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B2F4.s")
// NON-MATCHING: JUSTREG: using t1/t2 not t2/t3
// struct137 *func_1000B2F4(s32 arg0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B3D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B548.s")
// NON-MATCHING: something like this but reg is wrong
// s32 func_1000B548(s32 *arg0) {
//     s32 tmp0;
//     s32 tmp4;
//     s32 i;
//     // s32 *ptr = arg0;
//     s32 ret = 0;
//
//     for (i = 0; i < 12; i++) {
//         tmp4 = D_800419A8[i].unk4;
//         if (tmp4 != -1) {
//             tmp0 = D_800419A8[i].unk0;
//             if (tmp0 != -1) {
//                 if (tmp4 < 3) {
//                     *arg0++ = tmp4;
//                     ret++;
//                 }
//             }
//         }
//     }
//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000B638.s")


s32 func_1000B830(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 tmp = D_800DBFF0->unk5F0 & 1;
    if ((tmp != 0) && (arg0 == 0)) {
        arg0 = 1;
        func_1000E40C(16, 1000);
    } else if ((tmp == 0) && (arg0 != 0)) {
        arg0 = 0;
        func_1000E40C(16, 18000);
    }
    return arg0;
}

s32 func_1000B8B8(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 tmp;

    if (D_800BE9F0 == 4) {
        if (((arg0 & 1) != 0) && (D_80041F0C == 0)) {
            func_1000E46C(19, 0, 4096, 0);
            arg0 = arg0 & ~1;
        } else {
            if (D_80041F0C != 0) {
                tmp = D_80041F08 / D_80041F0C / 80;
                if (tmp >= 101) {
                    tmp = 100;
                }
                func_1000E588(19, tmp, 4096);
                arg0 |= 1;
            }
        }
        D_80041F08 = 0;
        D_80041F0C = 0;
        if ((arg0 & 2) == 0) {
            func_1000DF68(19, 0, 1);
            func_1000DF68(19, 32768, 0);
            arg0 |= 2;
        }
        return arg0;
    }
    return func_1000C530(arg0, arg1, arg2, arg3, arg4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BA18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BAFC.s")

s32 func_1000BBE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == 0) {
        func_1000E704(20, 1, 0xFFFF);
        arg0 = 1;
    }
    return arg0;
}

s32 func_1000BC28(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    s32 tmp = func_10008A4C(arg1, 0) + func_10008A4C(arg1, 6) + 1;
    if (tmp >= 256) {
        tmp = 255;
    } else {
        if (tmp < 16) {
            tmp = 1;
        }
    }
    if (tmp != arg0) {
        func_150C851C(tmp - 1);
        arg0 = tmp;
    }
    return arg0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000BF60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C350.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C530.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C7E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000C934.s")
// NON-MATCHING: close but last part isn't quite right
// s32 func_1000C934(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
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
//         func_100114D0(2200, 1066, -1600, sp38, 3000, 1500, 0, &sp3C, 0);
//         sp3C = sp38 - (sp3C & 0xFF00);
//     }
//     temp_a1 = sp3C;
//     if ((sp3C != arg0) & 0xFFFF) {
//         // sp3C = temp_a1;
//         func_1000E40C(84, sp3C);
//     }
//     return temp_a1 | 0x80000000;
// }

s32 func_1000CA18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 tmp;

    if (D_800BE9F0 == 55) {
        if ((D_800DBFF0->unk5F0 & 1) != 0) {
            tmp = 0;
        } else {
            func_100114D0(2200, 1066, -1600, 24000, 3000, 1500, 0, &tmp, 0);
            tmp &= 0xFF00;
        }
    } else {
        tmp = 24000;
    }

    if ((tmp != arg0) & 0xFFFF) {
        func_1000E40C(84, tmp);
    }
    return tmp | 0x80000000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CAE4.s")

void func_1000CBA8(s32 arg0) {
    if (D_800417B0[0] != NULL) {
        D_800417B0[0]->unk4E = arg0;
        D_800417B0[0]->unk50 = (u16)0x500;
    }
    if (D_800417B0[1] != NULL) {
        D_800417B0[1]->unk4E = arg0;
        D_800417B0[1]->unk50 = (u16)0x500;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CBF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CC54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CD40.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CDA0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000CEAC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D2F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D758.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000D96C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000DE1C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000DEC4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000DF68.s")

void func_1000E054(s32 arg0, s32 arg1) {
    struct151 *sp1C;

    sp1C = func_1000B1B0(arg0);
    if (sp1C != 0) {
        if ((2 == sp1C->unk15) && (arg1 == 0)) {
            func_100084D8(sp1C->unk0);
            sp1C->unk15 = 0;
            sp1C->unk30 = -1;
            func_1000CC54(sp1C->unk0, sp1C);
            return;
        }
        if ((2 != sp1C->unk15) && (arg1 != 0)) {
            if (sp1C->unk15 != 1) {
                func_10008F58(sp1C->unk0);
            }
            sp1C->unk15 = 2;
        }
    }
}

s32 func_1000E0F8(s32 arg0) {
    struct151 *tmp;

    arg0 &= 0xFFF;
    tmp = func_1000B1FC(arg0);

    if (tmp && tmp->unk60 == 0) {
        return 1;
    } else {
        return 0;
    }
}

s32 func_1000E134(s32 arg0) {
    s32 tmp;

    if (arg0 < 150) {
        tmp = D_8002B078[arg0][0] & ~0xF0;
        if ((tmp == 1) || (tmp == 3)) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E17C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E2F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E40C.s")
// NON-MATCHING: using a0 not a1
// void func_1000E40C(s32 arg0, s32 arg1) {
//     struct151 *temp_v0;
//
//     if (arg1 >= 0x8000) {
//         arg1 = 0x7FFF;
//     } else if (arg1 < 0) {
//         arg1 = 0;
//     }
//     temp_v0 = func_1000B1FC(arg1);
//     if (temp_v0 != NULL) {
//         if (temp_v0->unk0 < 0) {
//             temp_v0->unk30 = arg1;
//         }
//         temp_v0->unk2C = arg1;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E46C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E588.s")

s32 func_1000E654(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct151 *sp1C;
    struct151 *phi_a0;

    sp1C = func_1000B1FC(arg0);
    phi_a0 = NULL;
    if (arg3 >= 0) {
        phi_a0 = func_1000B1FC(arg3);
    }

    if (sp1C != NULL) {
        if (arg2 == 0) {
            if (sp1C->unk0 >= 0) {
                func_10008C6C(sp1C->unk0, arg1 - 1);
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

s32 func_1000E704(s32 arg0, s32 arg1, s32 arg2) {
    struct151 *tmp = func_1000B1B0(arg0);
    if (tmp && tmp->unk0 >= 0) {
        func_10008A94(tmp->unk0, arg2, arg1);
        return 1;
    }
    return 0;
}

void func_1000E75C(s32 arg0) {
    D_8002B070 = arg0 >> 1;
}

s32 func_1000E770(s32 *arg0, s32 *arg1) {
    if (arg0 != 0) {
        *arg0 = D_80041F08;
    }
    if (arg1 != 0) {
        *arg1 = D_80041F0C;
    }
    return D_80041F04;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E7A0.s")
// NON-MATCHING: mostly just wrong registers
// void func_1000E7A0(u32 arg0, s32 arg1) {
//     s32 tmp;
//     if ((arg0 & 1) == 1) {
//         D_80041F04 |= 1;
//     } else if (arg0 & 2) {
//         D_80041F08 += arg1;
//         D_80041F0C += 1;
//     } else if (arg0 & 4) {
//         D_80041F08 = 1 + arg1;
//         D_80041F04 |= 4;
//     } else if (arg0 & 8) {
//         D_80041F0C = (arg1 >> 8) & 0xff;
//         if ((D_80041F0C == 0) || (D_80041F0C == 4) || (D_80041F0C == 5))  {
//             D_80041F08 = 2;
//         } else if (D_80041F0C == 10) {
//             D_80041F08 = 1;
//         } else {
//             D_80041F08 = 3;
//         }
//     } else if (arg0 & 16) {
//         D_80041F04 |= 16;
//     }
// }

void func_1000E8C4(s32 arg0) {
    if ((arg0 & 1) == 1) {
        D_80041F04 &= -2; // truncate odd to even
    }
}

u8 func_1000E8F0(s32 arg0) {
    struct151 *temp_v0 = func_1000B1B0(arg0);
    if ((temp_v0 != 0) && (temp_v0->unk0 >= 0)) {
        return D_800418AC[temp_v0->unk0];
    } else {
        return 0;
    }
}

// initialising with grim loops
#pragma GLOBAL_ASM("asm/nonmatchings/init_B1B0/func_1000E934.s")

u16 func_1000EA94(s32 arg0) {
    u16 tmp;

    if (arg0 == 0) {
        tmp = 82;
    } else if (arg0 == 2) {
        tmp = 81;
    } else if (arg0 == 1) {
        tmp = 83;
    }
    func_1000D96C(tmp, 0, 0);
    return tmp;
}
