#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_15000000(void) {
    OSMesgQueue *msgQueue;
    s32 i;

    for (i = 0; i < 3; i++)
    {
        msgQueue = &D_80041E58[i];
        osCreateMesgQueue(msgQueue, &D_80041EA0[i], 8);
        func_10008570(i, msgQueue);
    }

    func_100085A4(0, 6, 1); // stub function
    func_1000E934();
}

void func_15000090(void) {
    func_1000DEC4();
}

// maybe next year...
#pragma GLOBAL_ASM("asm/nonmatchings/game_2D4B0/func_150000B0.s")
// void func_150000B0(void) {
//     u8 sp6D;
//     u8 sp6C;
//     u16 sp68;
//     s16 sp66;
//     u16 sp64;
//     u16 sp62;
//     s16 sp60;
//     s32 sp58;
//     ? sp4C;
//     s32 sp44;
//     s32 sp40;
//     void *sp34;
//     ? *temp_s0_2;
//     ? *temp_s0_3;
//     ? *temp_v0_3;
//     s16 temp_a0_2;
//     s16 temp_a0_4;
//     s16 temp_a0_5;
//     s16 temp_s3;
//     s16 temp_s3_2;
//     s32 temp_a0;
//     s32 temp_a0_3;
//     s32 temp_a2;
//     s32 temp_a3;
//     s32 temp_t2;
//     s32 temp_v0_2;
//     s32 temp_v1;
//     s32 temp_v1_2;
//     s32 temp_v1_3;
//     void *temp_s0;
//     void *temp_s0_4;
//     void *temp_v0;
//     void *temp_v0_4;
//     void *temp_v0_5;
//     void *temp_v0_6;
//     void *temp_v0_7;
//     s32 phi_a2;
//     s32 phi_a2_2;
//     s32 phi_a2_3;
//     void *phi_s0;
//     s32 phi_v1;
//     void *phi_s0_2;
//     s32 phi_s3;
//     ? *phi_s0_3;
//     s32 phi_s1;
//     ? *phi_v0;
//     s32 phi_s3_2;
//     s16 phi_s1_2;
//     s32 phi_s3_3;
//     ? *phi_s0_4;
//     s32 phi_s4;
//     s32 phi_a0;
//     void *phi_s0_5;
//     s16 phi_s3_4;
//     s16 phi_s1_3;
//     s32 phi_a3;
//     s32 phi_a3_2;
//     s16 phi_s1_4;
//     s16 phi_s3_5;
//     ? *phi_s0_6;
//     s32 phi_v1_2;
//     s32 phi_a3_3;
//     ? *phi_s0_7;
//     s32 phi_v1_3;
//     s32 phi_a3_4;
//     s32 phi_v1_4;
//     s32 phi_s3_6;
//     s32 phi_s4_2;
//     s32 phi_s4_3;
//
//     temp_v0 = D_800B0DF0;
//     sp44 = 0;
//     D_80041F00 = (u8)0;
//     if (temp_v0 != 0) {
//         sp60.unk0 = (?32) (unaligned s32) temp_v0->unk2C;
//         sp60.unk4 = (?32) (unaligned s32) temp_v0->unk30;
//         sp60.unk8 = (?32) (unaligned s32) temp_v0->unk34;
//         sp60.unkC = (u16) temp_v0->unk38;
//     } else {
//         sp6C = 1;
//         sp62 = 0;
//         sp68 = 0;
//         sp6D = 2;
//         sp60 = 0;
//         sp66 = 0;
//     }
//     D_80041F04 = 0;
//     D_80041F08 = 0;
//     D_80041F0C = 0;
//     if ((sp60 == 1) && ((D_800D2E4C->unk4 & 0x80) != 0)) {
//         sp64 = 0x10;
//         sp60 = 0x46;
//     }
//     phi_a2_3 = 0;
//     if ((u32) sp6C < 5U) {
//         phi_a2 = 0;
//         phi_a2_2 = 0;
//         goto **(&jtbl_80091A30 + (sp6C * 4));
//     case 2:
//         phi_a2 = 1;
//     default:
//     case 0:
//         sp40 = phi_a2;
//         func_1000DEC4(phi_a2);
//         phi_a2_3 = phi_a2;
//         goto block_15;
//     case 3:
//         phi_a2_2 = 1;
//     case 1:
//         if (D_800BE9B4 == 2) {
//             sp40 = phi_a2_2;
//             func_1000DEC4(phi_a2_2);
//             phi_a2_3 = phi_a2_2;
//         } else {
//             phi_a2_3 = phi_a2_2;
//             if (D_800BE9F8 != 0x22) {
//                 sp60 = -1;
//                 sp66 = -1;
//                 phi_a2_3 = 0;
//             }
//         }
//     }
// block_15:
//     sp40 = phi_a2_3;
//     temp_v0_2 = func_1000B548(&sp4C);
//     temp_a2 = phi_a2_3;
//     if (temp_v0_2 < 3) {
//         temp_t2 = (3 - temp_v0_2) & 3;
//         phi_v1_4 = temp_v0_2;
//         if (temp_t2 != 0) {
//             phi_s0 = (temp_v0_2 * 4) + &sp4C;
//             phi_v1 = temp_v0_2;
// loop_18:
//             temp_v1 = phi_v1 + 1;
//             *phi_s0 = -1;
//             phi_s0 = phi_s0 + 4;
//             phi_v1 = temp_v1;
//             if ((temp_t2 + temp_v0_2) != temp_v1) {
//                 goto loop_18;
//             }
//             phi_v1_4 = temp_v1;
//             if (temp_v1 != 3) {
// block_20:
//                 phi_s0_2 = (phi_v1_4 * 4) + &sp4C;
// loop_21:
//                 temp_s0 = phi_s0_2 + 0x10;
//                 temp_s0->unk-C = -1;
//                 temp_s0->unk-8 = -1;
//                 temp_s0->unk-4 = -1;
//                 temp_s0->unk-10 = -1;
//                 phi_s0_2 = temp_s0;
//                 if (temp_s0 != &sp58) {
//                     goto loop_21;
//                 }
//             }
//         } else {
//             goto block_20;
//         }
//     }
//     if ((sp6C == 4) && ((s32) sp66 >= 0)) {
//         phi_s3 = (s32) sp66;
//         phi_s0_3 = &sp4C;
//         phi_s1 = (s32) sp60;
// loop_25:
//         temp_s0_2 = phi_s0_3 + 4;
//         phi_s1_2 = (s16) phi_s1;
//         phi_s3_3 = phi_s3;
//         if (phi_s3 == *phi_s0_3) {
//             phi_v0 = &sp4C;
//             phi_s3_2 = phi_s3;
//             phi_s3_6 = phi_s3;
//             if (phi_s1 >= 0) {
// loop_27:
//                 temp_v0_3 = phi_v0 + 4;
//                 if (phi_s1 == *phi_v0) {
//                     phi_s3_6 = 0;
//                 }
//                 phi_v0 = temp_v0_3;
//                 phi_s3_2 = phi_s3_6;
//                 if (temp_v0_3 != &sp58) {
//                     goto loop_27;
//                 }
//             }
//             phi_s1_2 = (s16) phi_s1;
//             phi_s3_3 = phi_s3_2;
//             if (phi_s3_2 >= 0) {
//                 sp64 = sp6A;
//                 sp62 = sp68;
//                 phi_s1_2 = (s16) phi_s3_2;
//                 phi_s3_3 = phi_s3_2;
//             }
//         }
//         phi_s3 = phi_s3_3;
//         phi_s0_3 = temp_s0_2;
//         phi_s1 = (s32) phi_s1_2;
//         if (temp_s0_2 != &sp58) {
//             goto loop_25;
//         }
//         sp60 = phi_s1_2;
//         sp66 = (s16) phi_s3_3;
//         if (phi_s3_3 >= 0) {
//             sp66 = 0;
//         }
//     }
//     sp40 = temp_a2;
//     func_1000E2F4(0);
//     phi_s0_4 = &sp4C;
//     phi_s4 = temp_v0_2;
//     phi_s4_3 = temp_v0_2;
//     if (temp_a2 == 0) {
// loop_36:
//         temp_a0 = *phi_s0_4;
//         temp_s3 = sp66;
//         phi_s4_2 = phi_s4_3;
//         if (temp_a0 != -1) {
//             if (sp60 == temp_a0) {
//                 sp66 = temp_s3;
//                 temp_a0_2 = sp60;
//                 sp60 = sp60;
//                 func_1000E46C(temp_a0_2, 0, sp64, 0);
//                 func_1000E46C(sp60, 0x64, sp64 ^ 0xFFFF, 0);
//                 func_1000E40C(sp60, sp62);
//                 func_1000DF68(sp60, 0x7FFF, 0);
//                 *phi_s0_4 = -1;
//                 sp60 = (s16) -1;
// block_41:
//                 phi_s4_2 = phi_s4_3 - 1;
//             } else {
//                 sp60 = sp60;
//                 sp66 = temp_s3;
//                 phi_s4_2 = phi_s4_3;
//                 if (temp_s3 == temp_a0) {
//                     sp66 = temp_s3;
//                     func_1000E46C(temp_s3, 0, sp6A, 0);
//                     func_1000E46C(sp66, 0x64, sp6A ^ 0xFFFF, 0);
//                     func_1000E40C(sp66, sp68);
//                     func_1000DF68(sp66, 0x7FFF, 0);
//                     *phi_s0_4 = -1;
//                     sp66 = (s16) -1;
//                     goto block_41;
//                 }
//             }
//         }
//         temp_s0_3 = phi_s0_4 + 4;
//         phi_s0_4 = temp_s0_3;
//         phi_s4_3 = phi_s4_2;
//         if (temp_s0_3 != &sp58) {
//             goto loop_36;
//         }
//         sp60 = sp60;
//         sp66 = sp66;
//         phi_s4 = phi_s4_2;
//     }
//     if ((s32) sp60 >= 0) {
//         sp44 = 1;
//     }
//     phi_a0 = sp44;
//     if ((s32) sp66 >= 0) {
//         phi_a0 = sp44 + 1;
//     }
//     phi_s1_4 = sp60;
//     phi_s3_5 = sp66;
//     if (phi_s4 != 0) {
//         temp_a3 = phi_s4 - phi_a0;
//         phi_s1_4 = sp60;
//         phi_s3_5 = sp66;
//         if (phi_a0 < phi_s4) {
//             phi_s1_4 = sp60;
//             phi_s3_5 = sp66;
//             if (temp_a3 != 0) {
//                 phi_s0_5 = (2 * 4) + &sp4C;
//                 phi_s3_4 = sp66;
//                 phi_s1_3 = sp60;
//                 phi_a3 = temp_a3;
// loop_52:
//                 temp_a0_3 = *phi_s0_5;
//                 phi_a3_2 = phi_a3;
//                 if (temp_a0_3 != -1) {
//                     sp66 = phi_s3_4;
//                     sp60 = phi_s1_3;
//                     sp58 = phi_a3;
//                     func_1000DE1C(temp_a0_3, 4);
//                     *phi_s0_5 = -1;
//                     phi_a3_2 = phi_a3 - 1;
//                 }
//                 temp_s0_4 = phi_s0_5 - 4;
//                 phi_s1_4 = phi_s1_3;
//                 phi_s3_5 = phi_s3_4;
//                 if ((u32) temp_s0_4 >= (u32) &sp4C) {
//                     phi_s0_5 = temp_s0_4;
//                     phi_s3_4 = phi_s3_4;
//                     phi_s1_3 = phi_s1_3;
//                     phi_a3 = phi_a3_2;
//                     phi_s1_4 = phi_s1_3;
//                     phi_s3_5 = phi_s3_4;
//                     if (phi_a3_2 != 0) {
//                         goto loop_52;
//                     }
//                 }
//             }
//         }
//     }
//     sp60 = phi_s1_4;
//     sp66 = phi_s3_5;
//     if ((s32) phi_s1_4 >= 0) {
//         phi_s0_6 = &sp4C;
//         phi_v1_2 = 0;
//         phi_a3_3 = -1;
// loop_58:
//         if (*phi_s0_6 != -1) {
//             phi_a3_3 = phi_v1_2;
//         }
//         temp_v1_2 = phi_v1_2 + 1;
//         phi_s0_6 = phi_s0_6 + 4;
//         phi_v1_2 = temp_v1_2;
//         if (temp_v1_2 != 3) {
//             goto loop_58;
//         }
//         if (phi_a3_3 == -1) {
//             sp60 = phi_s1_4;
//             sp66 = phi_s3_5;
//             if ((s32) phi_s1_4 > 0) {
//                 sp60 = phi_s1_4;
//                 func_1000D96C(phi_s1_4, 0, 0, phi_a3_3);
//             }
//         } else {
//             sp66 = phi_s3_5;
//             if ((s32) phi_s1_4 > 0) {
//                 temp_v0_4 = (phi_a3_3 * 4) + &sp4C;
//                 sp60 = phi_s1_4;
//                 sp34 = temp_v0_4;
//                 func_1000D96C(phi_s1_4, *temp_v0_4, 5, phi_a3_3);
//             } else {
//                 sp60 = phi_s1_4;
//                 temp_v0_5 = (phi_a3_3 * 4) + &sp4C;
//                 sp34 = temp_v0_5;
//                 func_1000DE1C(*temp_v0_5, 4);
//             }
//             *sp34 = -1;
//         }
//         temp_a0_4 = sp60;
//         if ((s32) sp60 > 0) {
//             sp60 = sp60;
//             func_1000E46C(temp_a0_4, 0, sp64, 0);
//             func_1000E40C(sp60, sp62);
//         }
//     }
//     temp_s3_2 = sp66;
//     if ((s32) temp_s3_2 >= 0) {
//         phi_s0_7 = &sp4C;
//         phi_v1_3 = 0;
//         phi_a3_4 = -1;
// loop_73:
//         if (*phi_s0_7 != -1) {
//             phi_a3_4 = phi_v1_3;
//         }
//         temp_v1_3 = phi_v1_3 + 1;
//         phi_s0_7 = phi_s0_7 + 4;
//         phi_v1_3 = temp_v1_3;
//         if (temp_v1_3 != 3) {
//             goto loop_73;
//         }
//         if (phi_a3_4 == -1) {
//             sp66 = temp_s3_2;
//             if ((s32) temp_s3_2 > 0) {
//                 sp66 = temp_s3_2;
//                 func_1000D96C(temp_s3_2, 0, 0, phi_a3_4);
//             }
//         } else {
//             if ((s32) temp_s3_2 > 0) {
//                 temp_v0_6 = (phi_a3_4 * 4) + &sp4C;
//                 sp66 = temp_s3_2;
//                 sp34 = temp_v0_6;
//                 func_1000D96C(temp_s3_2, *temp_v0_6, 5, phi_a3_4);
//             } else {
//                 sp66 = temp_s3_2;
//                 temp_v0_7 = (phi_a3_4 * 4) + &sp4C;
//                 sp34 = temp_v0_7;
//                 func_1000DE1C(*temp_v0_7, 4);
//             }
//             *sp34 = -1;
//         }
//         temp_a0_5 = sp66;
//         if ((s32) sp66 > 0) {
//             sp66 = sp66;
//             func_1000E46C(temp_a0_5, 0, sp6A, 0);
//             func_1000E40C(sp66, sp68);
//         }
//     }
//     func_10017944(1, sp6D);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_2D4B0/func_150006E0.s")
// NON-MATCHING: almost only reg remaining
// void func_150006E0(void) {
//     s32 i;
//     s32 j;
//
//     D_800D9B20 = D_800B0DF0->unk2;
//     D_800D9B1C = D_800B0DF0->unk0;
//     D_800D3670 = 100.0f - D_800D9B1C;
//
//     func_15000940();
//
//     // downhill from here!
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 3; j++) {
//             D_800D9B68[i][j] = 0;
//             D_800D9B78[i][j] = 0;
//         }
//     }
//
//     for (i = 0; i < 3; i++) {
//         D_800D9B84[i] = 0;
//         D_800D9B88[i] = 0;
//     }
//
//     D_800D9B8B = 0xFF;
//     D_800D9B8C = 0xFF;
//     D_800D9E20 = 0xBU;
//
//     for (i = 0; i <= D_80082FA0; i++) {
//         D_800D9E10[i] = func_1515D480(D_800D9E20);
//     }
//
//     for (i = 0; i <= D_80082FA0; i++) {
//         for (j = 0; j < 2; j++) {
//             D_800D9BD0[i][j][4] = 0xff;
//             D_800D9BD0[i][j][0] = 0xff;
//             D_800D9BD0[i][j][5] = 0xff;
//             D_800D9BD0[i][j][1] = 0xff;
//             D_800D9BD0[i][j][6] = 0xff;
//             D_800D9BD0[i][j][2] = 0xff;
//         }
//     }
//
//     for (i = 0; i <= D_80082FA0; i++) {
//         D_800D9AC0[i].unk0 = -1.0f;
//     }
//
//     D_800D9AF0 = 0;
//     for (i = 0; i <= D_80082FA0; i++) {
//         D_800D9AF8[i].unk0 = -1.0f;
//     }
//     D_800D9B18 = 0;
// }
