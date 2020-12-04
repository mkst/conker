#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_5290/func_85005290.s")
// NON-MATCHING: first half ok, second half needs work
// void func_85005290(s32 arg0, s32 arg1) {
//     s32 pad0;
//     s32 sp68;
//     s32 pad1;
//     s32 temp_s0;
//     s32 i;
//
//     D_800DC020 = func_8502B5C8(&sp68, 3, 12, arg0, 8);
//     D_80089550 = (sp68 / 24U);
//     temp_s0 = D_80082FA0 + 1;
//     D_800DBFF0 = func_80003C40(temp_s0 * 0x9A0, 1, 1, 0);
//     D_800DC2B0 = func_80003C40(temp_s0 * 0xB0, 1, 0, 0);
//     D_800DC2A0->unk0 = func_80003C40(temp_s0 << 6, 1, 1, 0);
//     D_800DC2A0->unk4 = func_80003C40(temp_s0 << 6, 1, 1, 0);
//
//     i = 0;
//     do {
//         D_800BE2B0[i] = func_80003C40(D_800BE620 * 2, 1, 2, 0);
//         func_850054C4(&D_800DBFF0[i], i, arg0, arg1);
//         D_800DBFF4[i] = 0;
//     } while (D_80082FA0 >= i++) ;
//
//     func_8512ABF8();
//     func_8512D238();
//     D_800894B0 = 0;
//     D_800DC010 = func_80003C40((D_80082FA0 * 0x9A0) + 0x9A0, 1, 2, 0);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_5290/func_850054C4.s")
// NON-MATCHING: not a terrible start.
// void func_850054C4(struct108 *arg0, s32 arg1, s16 arg2, s32 arg3) {
//     f32 temp_f2;
//     f32 temp_f4;
//     s32 temp_s2;
//     u16 temp_t9;
//     u8 temp_v0;
//     struct127 *temp_a2;
//     u16 phi_s0;
//     f32 phi_f4;
//
//     func_800226F0(arg0, 0x9A0); // bzero
//
//     arg0->unk23C = 1;
//     arg0->unk23D = arg1;
//
//     for (phi_s0 = 0; phi_s0 < 0x15; phi_s0++)
//     {
//         func_851239CC(arg0, phi_s0);
//         arg0->unk1B6[phi_s0] = 999;
//     }
//     temp_v0 = arg0->unk23D;
//     temp_a2 = &D_800CC2D0[temp_v0]; // * 0x32C);
//     arg0->unk5D4 = (f32) (((f32) D_800BE624 * 60.0f) / 216.0f);
//     arg0->unk2C = 1;
//     arg0->unkDC = 0;
//     arg0->unk3D0 = temp_a2;
//     arg0->unk24C = 1.0f;
//     arg0->unk250 = 1.0f;
//     arg0->unk3CC = (s16) temp_v0;
//     arg0->unk5D8 = (f32) (((f32) D_800BE624 * 40.0f) / 216.0f);
//     temp_a2->unk318 = arg0;
//     arg0->unk134 = 1;
//     arg0->unk84 = 0xE;
//     arg0->unk240 = 0;
//     arg0->unk1E0 = (u16)0xD;
//     arg0->unk1B4 = (u16)3;
//     arg0->unk5CC = 1.0f;
//     arg0->unk3A8 = 0.0f;
//     func_85124B18(arg0);
//     arg0->unk272 = (u16)-1;
//     arg0->unk5FA = (s16) 1;
//     arg0->unk3E8 = (u8)1;
//     temp_t9 = D_800B0DF0->unk2;
//     temp_f4 = (f32) temp_t9;
//     phi_f4 = temp_f4;
//     if ((s32) temp_t9 < 0) {
//         phi_f4 = temp_f4 + 4294967296.0f;
//     }
//     arg0->unk67C = phi_f4;
//     arg0->unk2B0 = (f32) arg0->unk2A4;
//     arg0->unk2B4 = (f32) arg0->unk2A8;
//     arg0->unk2B8 = (f32) arg0->unk2AC;
//     arg0->unk5F0 = (s32) (arg0->unk5F0 | 0x80000000);
//     arg0->unk384 = (f32) D_800959E0;
//     func_85124AB4(arg0);
//     func_85125394(arg0);
//     arg0->unk5FC = (u16)0xA;
//     arg0->unk26C = 1.0f;
//     func_8512D66C(arg0);
//     temp_v0 = arg0->unk23D;
//     arg0->unk238 = -1;
//     arg0->unk3CC = (s16) temp_v0;
//     arg0->unk368 = (s16) temp_v0;
//     temp_a2 = &D_800CC2D0[temp_v0]; // * 0x32C);
//     arg0->unk3D0 = temp_a2;
//     arg0->unk3D4 = temp_a2->unk31C;
//     func_851298C0(arg0, arg2, temp_a2);
//     temp_f2 = D_800959E4;
//     arg0->unk7CC = 2;
//     arg0->unk3F4 = -1.0f;
//     arg0->unk3F8 = -1.0f;
//     arg0->unk7BC = temp_f2;
//     arg0->unk3E0 = (f32) arg0->unk3A0;
//     arg0->unk3D4->unk18C = temp_f2;
//     func_8512D6F0(arg0);
//     func_85125924(arg0);
//     arg0->unk674 = 1.0f;
//     func_85085430(arg0->unk3D0, arg3, 0);
//     func_85005A60(arg0, arg2);
//     arg0->unk2E0 = arg0->unk2BC;
//     arg0->unk364 = D_800959E8;
//     arg0->unk2E8 = arg0->unk2C4;
//     arg0->unk2E4 = arg0->unk2C0;
//     arg0->unk2F0 = arg0->unk2FC;
//     arg0->unk2EC = arg0->unk2F8;
//     arg0->unk2F4 = arg0->unk300;
//     arg0->unk7E8 = 50.0f;
//     arg0->unk86C = D_800959EC;
//     arg0->unk8BC = D_800BE2B0[arg0->unk23D]; // * 4) + 0x800C0000)->unk-1D50;
//     D_80089520 = 0;
//     D_800C3671 = (u8)0;
//     D_80089524[arg0->unk23D] = 0;
//     D_80089534[arg0->unk23D] = 0;
//     arg0->unk5FE = (u16)0x3C;
//     arg0->unk23C = (u8)1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code_5290/func_85005818.s")
// void func_85005818(struct108 *arg0, void *arg1, void *arg2) {
//     void *sp48;
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f14;
//     f32 temp_f2;
//     f32 temp_f2_2;
//     void *temp_a1;
//     void *temp_v0;
//     void *temp_v1;
//
//     arg0->unk23C = (u8)1;
//     temp_v1 = arg0->unk2F8;
//     arg0->unk2F8 = (f32) arg2->unk0;
//     arg0->unk2FC = (f32) arg2->unk4;
//     arg0->unk300 = (f32) arg2->unk8;
//     arg0->unk27C = (s32) temp_v1->unk0;
//     arg0->unk280 = (s32) temp_v1->unk4;
//     arg0->unk284 = (s32) temp_v1->unk8;
//     arg0->unk304 = (s32) temp_v1->unk0;
//     arg0->unk308 = (s32) temp_v1->unk4;
//     arg0->unk30C = (s32) temp_v1->unk8;
//     temp_f0 = arg0->unk2FC;
//     sp48 = temp_v1;
//     func_8510E7A4(arg0->unk644, arg0->unk648, arg0->unk354, arg0->unk360, arg0->unk640, 0, arg0->unk2F8, temp_f0, arg0->unk300, temp_f0, 0, 0, D_800959F0, temp_f0);
//     temp_f2 = arg0->unk354;
//     arg0->unk358 = temp_f2;
//     arg0->unk35C = temp_f2;
//     temp_v0 = arg0->unk2A4;
//     temp_a1 = arg0->unk2BC;
//     arg0->unk2A4 = (f32) arg1->unk14;
//     arg0->unk2A8 = (f32) arg1->unk18;
//     arg0->unk2AC = (f32) arg1->unk1C;
//     temp_a1->unk0 = (s32) temp_v0->unk0;
//     temp_a1->unk4 = (s32) temp_v0->unk4;
//     temp_a1->unk8 = (s32) temp_v0->unk8;
//     temp_f12 = arg0->unk2A4 - arg0->unk2F8;
//     temp_f14 = arg0->unk2AC - arg0->unk300;
//     arg0->unk2B0 = (s32) temp_v0->unk0;
//     arg0->unk2B4 = (s32) temp_v0->unk4;
//     temp_f2_2 = arg0->unk2FC - arg0->unk354;
//     arg0->unk2B8 = (s32) temp_v0->unk8;
//     arg0->unk34C = temp_f2_2;
//     arg0->unk348 = temp_f2_2;
//     arg0->unk374 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14));
//     arg0->unk2E0 = (s32) temp_a1->unk0;
//     arg0->unk2E4 = (s32) temp_a1->unk4;
//     arg0->unk2E8 = (s32) temp_a1->unk8;
//     arg0->unk2EC = (s32) temp_v1->unk0;
//     arg0->unk2F0 = (s32) temp_v1->unk4;
//     arg0->unk2F4 = (s32) temp_v1->unk8;
//     func_85124B18(temp_f12, temp_f14, arg0, temp_a1);
//     func_85125330(arg0);
//     func_8512523C(arg0);
//     func_85123070(arg0);
//     arg0->unk5F0 = (s32) (arg0->unk5F0 | 4);
//     if ((D_800BE9F0 != 0x21) && (D_800C35EA != 1)) {
//         func_8512D560(arg0, 5, 0);
//         D_800C3600->unkC = (f32) arg0->unk37C;
//         func_8512D560(arg0, 8, D_800C3600);
//         func_8512D560(arg0, 6, 0);
//     }
// }
