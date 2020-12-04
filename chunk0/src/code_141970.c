#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141970.s")
// void func_85141970(void *arg0) {
//     func_8514EDF0(arg0->unk2C);
// }

void func_85141990(void *arg0) {
    func_85141970(arg0);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851419B0.s")
void func_851419B0(void *arg0) {
    func_85141970(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851419D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141A7C.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141C0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141CC0.s")

void func_85141DA4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 < 12) && (arg1 >= 0) &&
        (arg2 < 20) && (arg2 >= 0) &&
        (D_800BE616 == 0) &&
        (D_8008A084[arg1] != 0) && (arg2 != -1)) {
        if ((D_8008A0B4[arg2].unk0 != 0) && (D_8008A0B4[arg2].unk4 > 0)) {
            func_85141E38(arg0, arg2);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141E38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85141F78.s")
// NON-MATCHING: need to determine arguments
// void func_85141F78(u8 arg0, struct157 *arg1, f32 arg2, s32 arg3, struct157 *arg4, u8 arg5) {
//     s32 phi_v0;
//     f32 temp_f2;
//     struct157 tmp;
//
//     tmp.unk6 = arg0;
//     tmp.unk7 = 0;
//     tmp.unk0 = 0x6F701;
//     tmp.unk4 = (func_850ADA20() % 61U) + 100;
//     tmp.unk8 = 0;
//     tmp.unkC = 0;
//     tmp.unk10 = (func_850ADA20() & 0x7F) + 128;
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
//     temp_f2 = ((func_850ADA68() * 5.0f) + 10.0f) * arg2;
//     if (arg5 == 2) {
//         phi_v0 = 1;
//     } else {
//         phi_v0 = 0;
//     }
//     func_8513C650(&tmp, 0, 0, arg1->unk4, arg4->unk0, arg1->unk0, arg4->unk8, temp_f2, temp_f2, arg3, phi_v0, 3, 1, 0, 0xFF, 1);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851420F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142180.s")

s32 func_851422C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (arg3 + arg2) >> 1;
}

s32 func_851422DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

s32 func_851422F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142314.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851423D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142444.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851424F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142600.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142838.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142914.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851429E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142A5C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142A80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142AC0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142B04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142B7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142C10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142CF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85142FBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143044.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514306C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143134.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851432BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851436B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514373C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143794.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143834.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143874.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851438D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143D18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143DA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143E08.s")
// s32 func_85143E08(void *arg0) {
//     return (((s32) arg0->unk7A >> 8) + 0x40) & 0xFF;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143E64.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85143E94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514401C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851441A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851442FC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851444DC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144528.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144598.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514462C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514470C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144A74.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144AA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144B34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144B68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144BC8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144C2C.s")
// NON-MATCHING: should be easy, but its not playing.
// s16 func_85144C2C(s16 arg0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144C8C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85144E80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851450B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145128.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851451F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851452C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851454BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514563C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145740.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145974.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145A0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145A50.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145AD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145C90.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145CD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85145EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85146078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851462C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851464B8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_85146508.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514654C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_8514672C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_141970/func_851467A4.s")
