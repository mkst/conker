#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1500C2A0(void) {
    s32 i;

    for (i = 0; i < 233; i++) {
        D_800DC468[i] = 0;
    }

    D_800DC460 = 0;
    D_800DC464 = 0;
    D_800DC63C = 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500C2F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500C8D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500CE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500D3AC.s")
// void func_1500D3AC(s32 arg0, f32 arg1) {
//
//     f32 temp_f0;
//     struct171 tmp;
//     f32 temp_f12;
//     f32 phi_f18;
//     f32 phi_f30; // main tmp
//
//
//     phi_f30 = func_1514462C(arg0) * arg1 * D_8009616C;
//
//     if (phi_f30 > 1.0f) {
//         tmp.unk8 = 1.0f;
//         tmp.unkC = 1.0f;
//         tmp.unk24 = 1.0f;
//         tmp.unk28 = 1.0f;
//         tmp.unk2C = 1.0f;
//         tmp.unk58 = 19776;
//         tmp.unk5C = 300;
//         tmp.unk60 = 0;
//         tmp.unk68 = 255;
//         tmp.unk69 = 14;
//         tmp.unk6A = 0;
//         tmp.unk6B = 0;
//         tmp.unk6C = 0;
//         tmp.unk6D = 0;
//         tmp.unk6E = 0;
//         tmp.unk6F = 0;
//         tmp.unk70 = 2;
//         tmp.unk72 = 0;
//         tmp.unk74 = 0;
//         tmp.unk78 = 0;
//         tmp.unk7A = 1;
//         tmp.unk7C = 0xFF;
//         tmp.unk5E = 0x53;
//         tmp.unk4C = 0.0f;
//
//         do {
//             func_15008340(arg0, &tmp.unk30, &tmp.unk38, &tmp.unk4, &tmp.unk0);
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk34 = tmp.unk40 = (phi_f18 * D_80096170 * ((tmp.unk4 - tmp.unk0) * 0.5f)) + (tmp.unk0 + ((tmp.unk4 - tmp.unk0) * 0.25f));
//
//             temp_f12 = fabsf(tmp.unk40 - tmp.unk4);
//             temp_f0 = fabsf(tmp.unk40 - tmp.unk0);
//
//             if (temp_f0 < temp_f12) {
//                 temp_f0 = temp_f0;
//             } else {
//                 temp_f0 = temp_f12;
//             }
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk54 = ((phi_f18 * D_80096170 * 0.75f) + 0.25f) * temp_f0;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk3C = ((phi_f18 * D_80096170) + (phi_f18 * D_80096170)) * D_80096174;
//
//             phi_f18 = (u16)(func_10024770() * func_150ADA20());
//             tmp.unk44 = (phi_f18 * D_80096170 * D_80096178) + D_8009617C;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk18 = phi_f18 * D_80096170 * 360.0f;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk1C = phi_f18 * D_80096170 * 360.0f;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk20 = phi_f18 * D_80096170 * 360.0f;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk48 = phi_f18 * D_80096170 * D_80096180;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk50 = phi_f18 * D_80096170 * D_80096184;
//
//             phi_f18 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk10 = tmp.unk14 = (phi_f18 * D_80096170 * 0.25f) + 1.0f;
//
//             func_1510F800(0);
//             tmp.unk64 = func_1510FD20(tmp.unk30, tmp.unk38);
//             func_15132A4C(&tmp, 3, 0xFF, 0, 0xFF, 1);
//
//         } while ((phi_f30 -= 1.0f) > 1.0f);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500D8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_C2A0/func_1500DE88.s")
// NON-MATCHING: not a bad start..
// void func_1500DE88(s32 arg0, f32 arg1) {
//
//     f32 temp_f0;    // tmp
//     f32 phi_f10;    // tmp
//     f32 temp_f12;   // another tmp
//     f32 temp_f22;   // D_800961B4
//     f32 temp_f28;   // D_800961B0
//     f32 temp_f30;   // D_800961AC
//     struct21 *temp_v0;    // dummy struct
//     s32 phi_v1;
//     struct170 tmp;
//
//
//     f32 phi_f24 = func_1514462C(arg0) * arg1 * D_800961A8;
//
//     if (phi_f24 > 1.0f) {
//         tmp.unk48 = 20739;
//         tmp.unk40 = 0x200005;
//         tmp.unk57 = 0xFF;
//         tmp.unk5C = 0xFF;
//         tmp.unk44 = 0.0f;
//         tmp.unk4C = 0.0f;
//         tmp.unk50 = 0.0f;
//         tmp.unk55 = 0;
//         tmp.unk56 = 0;
//         tmp.unk59 = 0;
//         tmp.unk5A = 0;
//         tmp.unk7C = 0.0f;
//         tmp.unk80 = 0.0f;
//         tmp.unk84 = 0.0f;
//         tmp.unk62 = 1;
//         tmp.unk64 = 1.0f;
//         tmp.unk4A = 300;
//         tmp.unk5E = 1;
//         tmp.unk60 = 0xFF;
//         tmp.unkA0 = 8;
//         tmp.unkA1 = 6;
//         tmp.unkA2 = 23;
//         tmp.unkA3 = -1;
//         tmp.unkA4 = -1;
//         tmp.unkA5 = 0;
//         tmp.unk28 = 0;
//         tmp.unk29 = 0;
//         tmp.unk34 = 1.0f;
//         tmp.unk38 = 1.0f;
//         tmp.unk5D = 108;
//
//         temp_f30 = D_800961AC;
//         temp_f28 = D_800961B0;
//         temp_f22 = D_800961B4;
//
//         do {
//             phi_f10 = (u16) (func_10024770() * func_150ADA20()) ;
//
//             tmp.unk68 = tmp.unk6C = tmp.unk24 = (phi_f10 * temp_f22 * 600.0f) + 200.0f;
//
//             tmp.unk5B = (func_10024770() * func_150ADA20()) % 0x47U + 0x32;
//             tmp.unk2A = (func_10024770() * func_150ADA20()) % 3U;
//             tmp.unk2B = (func_10024770() * func_150ADA20()) % 3U;
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk2C = ((phi_f10 * temp_f22 * temp_f28) + temp_f30) * tmp.unk24;
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk30 = ((phi_f10 * temp_f22 * temp_f28) + temp_f30) * tmp.unk24;
//
//             if ((func_150ADA20() & 1) != 0) {
//                 tmp.unk0 = 0x40;
//             } else {
//                 tmp.unk0 = 0;
//             }
//
//             if ((func_150ADA20() & 1) != 0) {
//                 phi_v1 = 0x80;
//             } else {
//                 phi_v1 = 0;
//             }
//             tmp.unk98 = phi_v1 | tmp.unk0 | 0xC000 | 0x20000 | 0x800000;
//             tmp.unk58 = ((func_10024770() * func_150ADA20()) % 0x38U) + 0x50;
//             tmp.unk54 = ((func_10024770() * func_150ADA20()) % 0x2EU) + 0xB4;
//             func_15008340(arg0, &tmp.unk70, &tmp.unk78, &tmp.unk1C, &tmp.unk18);
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//
//             temp_f0 = tmp.unk1C - tmp.unk18;
//             tmp.unk8C = (phi_f10 * temp_f22 * (temp_f0 * 0.5f)) + (tmp.unk18 + (temp_f0 * 0.25f));
//             tmp.unk74 = fabsf(tmp.unk8C - tmp.unk1C);
//             temp_f0 = fabsf(tmp.unk74 - tmp.unk18);
//             if (tmp.unk74 < temp_f0) {
//                 temp_f0 = tmp.unk74;
//             }
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk94 = ((phi_f10 * temp_f22 * 0.75f) + 0.25f) * temp_f0;
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//             temp_f0 = phi_f10 * temp_f22;
//             tmp.unk88 = (temp_f0 + temp_f0) * D_800961B8;
//
//             phi_f10 = (u16) (func_10024770() * func_150ADA20());
//             tmp.unk90 = (phi_f10 * temp_f22 * D_800961BC) + D_800961C0;
//             func_1510F800(0);
//             tmp.unk9C = func_1510FD20(tmp.unk70, tmp.unk78);
//             temp_v0 = func_15130280(&tmp.unk40, 2, 0, 28, 255, 1);
//             if (temp_v0 != NULL) {
//                 func_10022EC0(&temp_v0->unkA8, &tmp.unk24, 28); // memcpy  temp_v0->A8 ?
//             }
//             phi_f24 -= 1.0f;
//         }
//         while (phi_f24 > 1.0f);
//     }
// }
