#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15141970(struct37 *arg0) {
    func_1514EDF0(arg0, arg0->unk2C);
}

void func_15141990(void *arg0) {
    func_15141970(arg0);
}

void func_151419B0(void *arg0) {
    func_15141970(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151419D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141A7C.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141C0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141CC0.s")

void func_15141DA4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 < 12) && (arg1 >= 0) &&
        (arg2 < 20) && (arg2 >= 0) &&
        (D_800BE616 == 0) &&
        (D_8008A084[arg1] != 0) && (arg2 != -1)) {
        if ((D_8008A0B4[arg2].unk0 != 0) && (D_8008A0B4[arg2].unk4 > 0)) {
            func_15141E38(arg0, arg2);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141E38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141F78.s")
// NON-MATCHING: need to determine arguments
// void func_15141F78(u8 arg0, struct157 *arg1, f32 arg2, s32 arg3, struct157 *arg4, u8 arg5) {
//     s32 phi_v0;
//     f32 temp_f2;
//     struct157 tmp;
//
//     tmp.unk6 = arg0;
//     tmp.unk7 = 0;
//     tmp.unk0 = 0x6F701;
//     tmp.unk4 = (func_150ADA20() % 61U) + 100;
//     tmp.unk8 = 0;
//     tmp.unkC = 0;
//     tmp.unk10 = (func_150ADA20() & 0x7F) + 128;
//     tmp.unk11 = 0xFF;
//     tmp.unk12 = 0xFF;
//     tmp.unk13 = 0xFF;
//     tmp.unk14 = 0xFF;
//     tmp.unk15 = 0xFF;
//     tmp.unk18 = 0x3B0002;
//     tmp.unk16 = 0;
//     tmp.unk17 = 7;
//     tmp.unk20 = 0xFF;
//     tmp.unk22 = 0x28;
//     tmp.unk24 = 6;
//     tmp.unk1C = arg1->unk18;
//     temp_f2 = ((func_150ADA68() * 5.0f) + 10.0f) * arg2;
//     if (arg5 == 2) {
//         phi_v0 = 1;
//     } else {
//         phi_v0 = 0;
//     }
//     func_1513C650(&tmp, 0, 0, arg1->unk4, arg4->unk0, arg1->unk0, arg4->unk8, temp_f2, temp_f2, arg3, phi_v0, 3, 1, 0, 0xFF, 1);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151420F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142180.s")

s32 func_151422C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (arg3 + arg2) >> 1;
}

s32 func_151422DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

s32 func_151422F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142314.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151423D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142444.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151424F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142600.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142838.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142914.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151429E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142A5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142A80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142AC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142B04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142B7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142C10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142CF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15142FBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143044.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514306C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143134.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151432BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151436B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514373C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143794.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143834.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143874.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151438D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143D18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143DA8.s")

s32 func_15143E08(struct127 *arg0) {
    return (((s32) arg0->unk7A >> 8) + 64) & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143E64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143E94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514401C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151441A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151442FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151444DC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144528.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144598.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514462C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514470C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144A74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144AA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144B34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144B68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144BC8.s")

s32 func_15144C2C(s16 arg0) {
    s16 tmp1 = arg0;

    while (tmp1 >= 256)
    {
        tmp1 -= 255;
    }
    while (tmp1 < 0)
    {
        tmp1 += 255;
    }

    return tmp1;
}

f32 func_15144C8C(f32 arg0, f32 arg1) {
    f32 tmp;

    arg0 = func_15144B68(arg0);
    tmp = fabsf(arg0 - func_15144B68(arg1));
    if (D_800A56A8 < tmp) {
        tmp = D_800A56AC - tmp;
    }
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144E80.s")

void func_151450B4(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk4 * arg1->unk8 - arg0->unk8 * arg1->unk4;
    arg2->unk4 = arg0->unk8 * arg1->unk0 - arg0->unk0 * arg1->unk8;
    arg2->unk8 = arg0->unk0 * arg1->unk4 - arg0->unk4 * arg1->unk0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145128.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151451F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151452C4.s")

s32 func_151454BC(u8 arg0, f32 arg1, struct17 *arg2) {
    f32 tmp1;
    f32 tmp2;
    f32 tmp3;
    struct17 *temp_v0;

    temp_v0 = func_15144B34(arg0);
    tmp1 = arg2->unk0 - temp_v0->unk0;
    tmp2 = arg2->unk4 - temp_v0->unk4;
    tmp3 = arg2->unk8 - temp_v0->unk8;

    if ((arg1 * arg1) < ((tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3))) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514563C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145740.s")
// NON-MATCHING: 90% there
// void func_15145740(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 arg4) {
//     struct194 tmp;
//     f32 temp_f6;
//     s16 phi_v1;
//     s16 phi_t0;
//
//     if ((arg0->unk4 == 0x96) && ((arg0->unk31C->unk7D != 0))) {
//         phi_t0 = arg0->unk7A + arg0->unk31C->unk80;
//     } else {
//         if (arg0->unk31C != 0) {
//             phi_t0 = arg0->unk7A - arg0->unk31C->unk12;
//         } else {
//             phi_t0 = arg0->unk7A;
//         }
//     }
//     if ((arg0->unk4 == 0x96) && (arg0->unk31C->unk7D != 0)) {
//         phi_v1 = arg0->unk31C->unk82 + 1024;
//     } else {
//         phi_v1 = arg0->unk1D1 * 200;
//     }
//     tmp.unk14 = phi_t0;
//     tmp.unk10 = phi_v1 * 0.005493164f;
//     tmp.unk0 = tmp.unk10 * D_800A56B4;
//     func_1505A184(phi_t0, 2000.0f, tmp.unk10, &arg1->unk0, &arg1->unk8, &arg1->unk4);
//     if (arg2 != 0) {
//         arg2->unk4 = func_15047C00(tmp.unk0) * 1000.0f;
//         temp_f6 = func_15047D60(tmp.unk0) * 1000.0f;
//         tmp.unk8 = temp_f6;
//         tmp.unk4 = phi_t0 * D_800A56B8;
//         arg2->unk0 = func_15047C00(tmp.unk4) * tmp.unk8;
//         arg2->unk8 = func_15047D60(tmp.unk4) * -temp_f6;
//         if (arg3 != 0) {
//             tmp.unkC = tmp.unk0 + arg4;
//             arg3->unk4 = func_15047C00(tmp.unkC) * 1000.0f;
//             tmp.unk8 = func_15047D60(tmp.unkC) * 1000.0f;
//             arg3->unk0 = func_15047C00(tmp.unk4) * tmp.unk8;
//             arg3->unk8 = func_15047D60(tmp.unk4) * -tmp.unk8;
//         }
//     }
// }

void func_15145974(struct17 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = func_150484A0(arg0->unk0, arg0->unk8) * D_800A56BC;
    if (arg2 != NULL) {
        *arg2 = (func_150484A0(sqrtf(arg0->unk0 * arg0->unk0 + arg0->unk8 * arg0->unk8), arg0->unk4) * D_800A56C0) - 90.0f;
    }
}

f32 func_15145A0C(f32 arg0, f32 arg1, f32 arg2) {
    return D_800A548C[(s32)(arg0 * arg2 * 100.0f)] * arg1;
}


void func_15145A50(struct127 *arg0) {
    arg0->unk5 = 3;
    if (D_800BE9F0 != 51) {
        if ((D_800BE616 != 0) || (arg0->unk0 == 5) || (arg0->unk0 == 1) || (arg0->unk0 == 21)) {
            arg0->unk0 = 5;
            if (arg0->unk31C != NULL) {
                arg0->unk31C->unk78 = 0;
            }
        } else {
            func_15053694(arg0);
        }
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145AD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145C90.s")
// NON-MATCHING: mostly right idea
// u8 func_15145C90(s32 arg0) {
//     if (arg0 < 0) {
//         return 1;
//     } else {
//         return (D_800DBEF4[arg0].unk6F & 0x80) == 0x80;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145CD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15146078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151462C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151464B8.s")

void func_15146508(struct127 *arg0, struct127 *arg1) {
    struct193 tmp;

    tmp.unk0 = arg0;
    tmp.unk4 = arg1;
    tmp.unk8 = arg0->unk3B;
    tmp.unk9 = arg1->unk3B;
    func_15169040(&tmp, 45, arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514654C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514672C.s")
// NON-MATCHING: JUSTREG: uses f0/f2 not at/f0
// s32 func_1514672C(struct17 *arg0) {
//     if ((fabsf(arg0->unk0) > D_800A56C4) || (fabsf(arg0->unk8) > D_800A56C4) || (arg0->unk4 > D_800A56C4) || (arg0->unk4 < D_800A56C8)) {
//         return 0;
//     } else {
//         return 1;
//     }
// }

void func_151467A4(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7) {
    *arg0 = *arg0 - D_800BE9A4;
    if (*arg0 < 0.0f) {
        *arg0 = func_150ADA68() * arg1;
        if ((func_150ADA20(arg0) & 3) != 0) {
            *arg2 = (func_150ADA68() * (arg4 - arg3)) + arg3;
        } else {
            *arg2 = (func_150ADA68() * (arg5 - arg4)) + arg4;
        }
    }
    *arg7 = ((*arg2 - *arg7) * arg6) + *arg7;
}
