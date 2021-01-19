#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_3B920/func_1500E470.s")
// NON-MATCHING: damn nops
// void func_1500E470(s32 arg0) {
//     u8 tmp;
//     D_800DD190 = -1;
//     bzero(&D_800DD198, 24);
//     D_800DD404 = 0xFF;
//     D_800DD405 = 0;
//     D_800DD406 = 0;
//     D_800E0930 = 0;
//     D_800E0934 = 0;
//     D_800E0940 = 0;
//     D_8008CD00 = 0;
//     D_80088B60 = 0;
//     D_800BE4E0 = 0;
//     // is this handwritten?
//     D_800E0A10 = func_15012720();
//     func_15012370();
//
//     func_151EF640(64);
//     func_151732E0(arg0);
//     func_15004FE0(arg0);
//     func_150127B0();
//
//     func_1519582C();
//     func_15008BE0();
//     func_15008B90();
//     func_1500E5C0();
//
//     if (0) {};
//     if (D_800B0DF0->unkA) {
//         D_80082D90[D_800B0DF0->unkA]();
//     }
//     func_1500ABA0(arg0);
//     func_1500BEC0();
//     func_1500AC14();
//     func_151872B0(arg0);
//     func_15178EB0();
//     func_15012FE0();
//
//     if (0) {};
//     tmp = (D_800D2E4C->unk4 & 128) == 0;
//     func_151645C4(tmp);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_3B920/func_1500E5C0.s")

void func_1500E70C(s32 arg0) {
    if (arg0 == 0x2B) {
        func_15011C70();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3B920/func_1500E738.s")

void func_1500E890(void) {
    func_15008E00();
    func_15008E10(0);
    func_15008E10(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3B920/func_1500E8C0.s")
// NON-MATCHING: fair bit to figure out
// void func_1500E8C0(void) {
//     struct145 tmp;
//     s32 phi_v0;
//
//     func_15195AA8(D_800B0E00[0], D_800902E8, 0, -1, 0, 0, 0, -6);
//     func_15195AA8(D_800B0E00[1], D_800902E8, 0, -1, 0, 1, 0, -6);
//     tmp.unk28 = D_80096210; // 0.2142857164144516
//     tmp.unk30 = 5.0f;
//     tmp.unk34 = 6.0f;
//     tmp.unk20 = 8.0f;
//     tmp.unk24 = 7.0f;
//     tmp.unk14 = 0.0f;
//     tmp.unk18 = 0.0f;
//     tmp.unk2C = 0.0f;
//     tmp.unk48 = 3;
//     tmp.unk4C = 2;
//     tmp.unk0 = 0x34;
//     tmp.unk2 = 0x12;
//     tmp.unk4 = -0x28;
//     tmp.unk6 = 0xF;
//     tmp.unk38 = 0x9B;
//     tmp.unk3A = 0x64;
//     tmp.unk44 = 0x29;
//     tmp.unk46 = 0x29;
//     tmp.unk10 = 400.0f;
//     tmp.unk1C = 900.0f - 400.0f;
//     tmp.unk3C = D_80096214; // 0.6000000238418579
//     tmp.unk40 = D_80096218;
//     tmp.unkC = D_8009621C;
//     tmp.unk8 = 800.0f;
//     func_15189900(&tmp, 1);
//     if (D_800BE9F0 == 6) {
//         phi_v0 = 52;
//     } else {
//         phi_v0 = 7;
//     }
//     func_1000FA64(1567, (s16)phi_v0, 0, 0, 12000, 1000, 400, func_1000EF40, 0, 0, 72, 0);
// }

void func_1500EAA0(void) {
    func_15195AA8(D_800B0E00[0], D_80090320, 0, -1, 0, 0, 0, -8);
    func_15195AA8(D_800B0E00[1], D_80090320, 0, -1, 0, 1, 0, -8);
}
