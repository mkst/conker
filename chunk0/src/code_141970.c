#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15141970.s")
// void func_15141970(void *arg0) {
//     func_1514EDF0(arg0->unk2C);
// }

void func_15141990(void *arg0) {
    func_15141970(arg0);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151419B0.s")
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
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15143E08.s")
// s32 func_15143E08(void *arg0) {
//     return (((s32) arg0->unk7A >> 8) + 0x40) & 0xFF;
// }

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
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144C2C.s")
// NON-MATCHING: should be easy, but its not playing.
// s16 func_15144C2C(s16 arg0) {
//
//     s16 tmp1 = arg0;
//     s32 tmp2;
//
//     while (tmp1 >= 256)
//     {
//         tmp1 -= 255;
//     }
//
//     tmp2 = tmp1;
//     while (tmp2 < 0)
//     {
//         tmp2 += 255;
//     }
//
//     return (s32)tmp2;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144C8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15144E80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151450B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145128.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151451F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151452C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151454BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514563C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145740.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145974.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145A0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145A50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145AD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145C90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145CD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15145EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15146078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151462C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151464B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_15146508.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514654C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_1514672C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_151467A4.s")
