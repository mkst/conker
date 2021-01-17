#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// what is this loop doing?
#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_15003120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_150031EC.s")

s32 func_150034B4(void) {
      s32 i;

      for (i = 0; i < 7762; i++) {
          D_800B0E58[i] = -1;
          D_800BC448[i] = 0;
      }

      D_800D9F58 = 0xFFFF; // -1 s16?
      D_800D9F5C = -1;

      if ((D_800BE9F0 != 1) && (D_800BE9F0 != 50)) {
          D_800D9F60 = 0;
      } else {
          D_800D9F60 = 1;
      }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_15003570.s")
// NON-MATCHING: something along these lines
// void func_15003570(void) {
//     s32 temp_s4;
//     s32 phi_s0;
//     s32 phi_s1;
//
//     s32 i;
//     u8 *temp_v0;
//     s16 *phi_s2;
//     s16 *phi_s3;
//
//     temp_s4 = malloc(16, 1, 2, 0);
//
//     phi_s0 = 0x1A37E0; // 1718240
//     phi_s2 = D_80091D20;
//     phi_s3 = D_800B87A0;
//
//     for (i = 0; i < 7762; i++) {
//         if ((phi_s0 & 1) != 0) {
//             phi_s0 = phi_s0 - 1;
//             phi_s1 = 1;
//         } else {
//             phi_s1 = 0;
//         }
//         func_10004514(phi_s0, temp_s4, 16, 1);
//         temp_v0 = temp_s4 + phi_s1;
//         phi_s2[i] = (*temp_v0 << 24) + (*(temp_v0 + 1) << 16) + (*(temp_v0 + 2) << 8) + *(temp_v0 + 3);
//         phi_s0 = phi_s3[i];
//     }
//
//     func_10004074(temp_s4);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_305D0/func_15003668.s")
// NON-MATCHING: 40% there
// void func_15003668(s32 arg0) {
//     struct131 *temp_v0_2;
//     s32 temp_t7;
//     s32 i;
//     s32 tmp0;
//
//     D_800DBE62 = (u8)0;
//     func_15001970();
//     D_800D2C68 = (u8)0;
//     func_150026C4(0);
//     func_15002724(D_800B0E00[0]); // ->unk0
//     func_15002754();
//     func_15001460(D_800B0E00[0]); // ->unk0
//     func_150026E8(0);
//     func_150026C4(1);
//     func_15002724(D_800B0E00[3]);
//     func_15002754();
//     func_15001460(D_800B0E00[3]);
//     func_150026E8(1);
//     func_150026C4(2);
//
//     if (D_800DBEF0 > 0) {
//         for (i = 0; i < D_800DBEF0; i++) {
//             temp_v0_2 = &D_800DBEF4[i];
//             if (((u8)temp_v0_2->unk4F & 0x60) != 32) {
//                 func_15002724(temp_v0_2->unk1C);
//             }
//         }
//     }
//
//     func_15002754();
//     D_800D2C68 = (u8)1;
//     D_800D2C2C = 0;
//
//     for (i = 0; i < D_800DBEF0; i++) {
//         temp_v0_2 = &D_800DBEF4[i];
//         if (((u8)temp_v0_2->unk4F & 0x60) != 32) {
//             temp_v0_2->unk58 = D_800DBE38;
//             temp_v0_2->unk56 = 0; //D_800DBE38 - D_800DBE38;
//             func_15001460(temp_v0_2->unk1C);
//         } else {
//             temp_v0_2->unk58 = 0;
//             temp_v0_2->unk56 = 0;
//         }
//     }
//
//     func_150026E8(2);
//     D_800D2C68 = 0;
//     D_800D3300->unk0 = 0;
//     D_800D3300->unk4 = (s32) (D_800DBE3C << 8);
//     func_1510F800(0);
//     temp_t7 = (func_15002878() + 7) & ~7; // ALIGN8
//     D_800D3668 = D_8003809C;
//     D_800D366C = (s32) (D_8003809C + temp_t7);
//     func_1510F800(2);
// }

void func_150038A0(void) {
    func_15001A08();
    func_15001BC8(0, &D_800DBE2A, &D_800DBE2C);
    func_15001BC8(1, 0, 0);
    func_15001CEC(2);
    func_1510F800(0);
    func_150025FC();
    D_800DBE62 = (u8)1;
}

s32 func_1500390C(s32 arg0) {
    s32 i;

    for (i = 0; i < 7762; i++) {
        if (arg0 == D_800B0E58[i]) {
            return i;
        }
    }
    return -1;
}

void func_150039B0(s32 arg0) {
}

void func_150039BC(s32 arg0) {
    D_800DBE5C = arg0;
    if (D_800DBE5C) {
        D_800DBE5C += 8;
    }
}
