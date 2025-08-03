#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#if 0
f32 D_80099020[] = { 0.0, 3.619550943374634, -6.466859817504883, 3.5107080936431885, -0.5643919706344604, 0.005872000008821487 };
f32 D_80099038[] = { 21.717304229736328, -48.572906494140625, 37.104923248291016, -11.031848907470703, 1.0 };
f32 D_8009904C[] = { 0.0, -3.1845738887786865, 3.210297107696533, -0.6077240109443665 };
f32 D_8009905C[] = { -19.107446670532227, 27.860130310058594, -11.065337181091309, 1.0, 0.0 };

f32 D_80099070 = 57.2957763671875;
f32 D_80099074 = 57.2957763671875;
#endif

extern f32 D_80099020[];
extern f32 D_80099038[];
extern f32 D_8009904C[];
extern f32 D_8009905C[];
extern f32 D_80099070;
extern f32 D_80099074;


void func_15048B10(s32 arg0, s32 arg1) {
    struct191 tmp;

    func_1503E5F8(arg0, &tmp.unk194, &tmp.unk190, &tmp.unk18C, &tmp.unk17C, &tmp.unk178, &tmp.unk174, &tmp.unk188, &tmp.unk184, &tmp.unk180);
    guMtxIdentF(&tmp.unk80);
    tmp.unkA4 = -tmp.unk194;
    tmp.unkA8 = -tmp.unk190;
    tmp.unkAC = -tmp.unk18C;

    func_150A8050(&tmp.unk134, -tmp.unk17C,           0,           0);
    func_150A8050(&tmp.unkF4,            0, -tmp.unk178,           0);
    func_150A8050(&tmp.unkB4,            0,           0, -tmp.unk174);

    func_150A7A48(&tmp.unk80,  &tmp.unkB4, &tmp.unk40);
    func_150A7A48(&tmp.unk40,  &tmp.unkF4, &tmp.unk0);
    func_150A7A48(&tmp.unk0,  &tmp.unk134, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_75FC0/func_15048C30.s")
// NON-MATCHING: regs and ordering needs fixing
// f32 func_15048C30(f32 arg0) {
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f14;
//     f32 temp_f16;
//     f32 temp_f18;
//     f32 temp_f2;
//     f32 temp_f2_3;
//
//     s32 temp_t6;
//     s32 temp_v0;
//
//     temp_v0 = *(s32*)&arg0;
//     temp_t6 = (temp_v0 >> 0x17) & 0xFF;
//     if (temp_t6 < 0x7E) {
//         if (temp_t6 >= 0x63) {
//             temp_f2 = arg0 * arg0;
//             return (
//               (temp_f2 * (D_80099020[1] + (((((((D_80099020[5] * temp_f2) + D_80099020[4]) * temp_f2) + D_80099020[3]) * temp_f2) + D_80099020[2]) * temp_f2)) * arg0)
//              / (D_80099038[0] + ((((((temp_f2 + D_80099038[3]) * temp_f2) + D_80099038[2]) * temp_f2) + D_80099038[1]) * temp_f2))) + arg0;
//         } else {
//             return arg0;
//         }
//     }
//     if (temp_t6 < 0x7F) {
//         temp_f2 = fabsf(arg0);
//         if (temp_f2 < D_80085FE8) {
//             temp_f2_3 = arg0 * arg0;
//             temp_f16 = (temp_f2_3 + temp_f2_3) - D_80085FD0;
//             temp_f18 = temp_f16 * temp_f16;
//             temp_f12 = D_80099020[1] + (temp_f18 * (D_80099020[2] + (temp_f18 * (D_80099020[3] + (temp_f18 * (D_80099020[4] + (temp_f18 * D_80099020[5])))))));
//             temp_f14 = D_80099038[0] + (temp_f18 * (D_80099038[1] + (temp_f18 * (D_80099038[2] + (temp_f18 * (D_80099038[3] + temp_f18))))));
//             if (temp_v0 > 0) {
//                 return (0.5f * (((temp_f18 * temp_f12 * temp_f16) / temp_f14) + temp_f16)) + D_80085FD8;
//             } else {
//                 return D_80085FE0 - (0.5f * (((temp_f18 * temp_f12 * temp_f16) / temp_f14) + temp_f16));
//             }
//         }
//         temp_f16 = (D_80085FD0 - temp_f2) * 0.5f;
//         temp_f0 = sqrtf(temp_f16);
//         temp_f18 = ((temp_f16 * (D_8009904C[1] + (((D_8009904C[3] * temp_f16) + D_8009904C[2]) * temp_f16)) * temp_f0) / (D_8009905C[0] + ((((temp_f16 + D_8009905C[2]) * temp_f16) + D_8009905C[1]) * temp_f16))) + temp_f0;
//         if (temp_v0 > 0) {
//             return D_80085FDC - (temp_f18 + temp_f18);
//         } else {
//             return temp_f18 + temp_f18 + D_80085FE4;
//         }
//     }
//     if (arg0 != arg0) { // NaN check
//         return 0.0f;
//     }
//     if (arg0 == D_80085FD0) {
//         return D_80085FDC;
//     }
//     if (arg0 == D_80085FD4) {
//         return D_80085FE4;
//     }
//     return 0.0f;
// }

void func_15048F20(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk0 + arg1->unk0;
    arg2->unk4 = arg0->unk4 + arg1->unk4;
    arg2->unk8 = arg0->unk8 + arg1->unk8;
}

void func_15048F58(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk0 - arg1->unk0;
    arg2->unk4 = arg0->unk4 - arg1->unk4;
    arg2->unk8 = arg0->unk8 - arg1->unk8;
}

void func_15048F90(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg1->unk0 - arg0->unk0;
    arg2->unk4 = arg1->unk4 - arg0->unk4;
    arg2->unk8 = arg1->unk8 - arg0->unk8;
}

f32 func_15048FC8(struct17 *arg0) {
    f32 tmp1;
    f32 tmp2;
    f32 tmp3;

    tmp1 = sqrtf((arg0->unk0 * arg0->unk0) + (arg0->unk8 * arg0->unk8));
    if (tmp1 == 0.0f) {
        return 0.0f;
    }

    tmp2 = -arg0->unk0 / tmp1;
    tmp2 = func_15048C30(tmp2);

    if (arg0->unk8 > 0.0f) {
        tmp2 = 270.0f - (tmp2 * D_80099070);
    } else {
        tmp2 = 90.0f + (tmp2 * D_80099074);
    }

    tmp2 -= 90.0f;

    if (tmp2 < 0.0f) {
        tmp2 += 360.0f;
    }
    return tmp2;
}

s32 func_150490A8(struct17 *arg0) {
    f32 temp_f12;
    s32 phi_v1;

    temp_f12 = sqrtf((arg0->unk0 * arg0->unk0) + (arg0->unk8 * arg0->unk8));

    if (temp_f12 == 0.0f) {
        return 0;
    }

    temp_f12 = arg0->unk0 / temp_f12;
    phi_v1 = func_15048864(temp_f12);

    if (0.0f < arg0->unk8) {
        if (phi_v1 < 64) {
            phi_v1 = 128 - phi_v1;
        } else {
            phi_v1 = 384 - phi_v1;
        }
    }
    return phi_v1;
}

void func_15049148(struct17 *arg0, f32 arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk0 * arg1;
    arg2->unk4 = arg0->unk4 * arg1;
    arg2->unk8 = arg0->unk8 * arg1;
}

void func_1504917C(struct17 *arg0, struct17 *arg1) {
    f32 tmp = func_150AD930(arg0);
    if (tmp != 0.0f) {
        tmp = 1.0f / tmp;
    }
    arg1->unk0 = arg0->unk0 * tmp;
    arg1->unk4 = arg0->unk4 * tmp;
    arg1->unk8 = arg0->unk8 * tmp;
}

void func_150491EC(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg1->unk0 - arg0->unk0;
    arg2->unk4 = arg1->unk4 - arg0->unk4;
    arg2->unk8 = arg1->unk8 - arg0->unk8;
    func_1504917C(arg2, arg2);
}
