#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_15F40/func_15015F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code_15F40/func_15015FBC.s")
// s32 func_15015FBC(s32 arg0, s32 arg1) {
//     s16 temp_lo;
//     s16 temp_lo_2;
//     s32 temp_a1_2;
//     s32 temp_a3;
//     s32 temp_v0;
//     s32 temp_v1;
//     u32 temp_a1;
//     void *phi_v1;
//     u32 phi_a1;
//
//     D_800BE638 = arg0;
//     D_800BE650 = arg1;
//     phi_v1 = D_800BE63C;
//     phi_a1 = D_800BE654;
// loop_1:
//     phi_v1->unk0 = arg0;
//     phi_a1->unk0 = arg1;
//     if (phi_a1 < D_800BE660) {
//         if (phi_a1 >= D_800BE658) {
//             phi_v1->unk0 = (s32) (arg0 >> 1);
//         }
//         if (phi_a1 >= D_800BE654) {
//             phi_a1->unk0 = (s32) ((s32) phi_a1->unk0 >> 1);
//         }
//     }
//     phi_v1->unk4 = arg0;
//     phi_a1->unk4 = arg1;
//     if (phi_a1 < D_800BE65C) {
//         if (phi_a1 >= D_800BE654) {
//             phi_v1->unk4 = (s32) (arg0 >> 1);
//         }
//         if (phi_a1 >= D_800BE650) {
//             phi_a1->unk4 = (s32) ((s32) phi_a1->unk4 >> 1);
//         }
//     }
//     temp_a1 = phi_a1 + 8;
//     phi_v1 = phi_v1 + 8;
//     phi_a1 = temp_a1;
//     if (temp_a1 != D_800BE664) {
//         goto loop_1;
//     }
//     temp_a3 = arg1 >> 2;
//     temp_lo = temp_a3 * 3;
//     temp_v1 = arg0 >> 2;
//     temp_v0 = arg0 >> 1;
//     temp_a1_2 = arg1 >> 1;
//     D_800BE668->unk0 = (s16) temp_v0;
//     D_800BE668->unk2 = (s16) temp_a1_2;
//     D_800BE668->unk4 = (s16) temp_v0;
//     D_800BE668->unk6 = (s16) temp_a1_2;
//     D_800BE668->unk8 = (s16) temp_v0;
//     D_800BE668->unkA = (s16) temp_a1_2;
//     D_800BE668->unkC = (s16) temp_v0;
//     D_800BE668->unkE = (s16) temp_a1_2;
//     temp_lo_2 = temp_v1 * 3;
//     D_800BE668->unk10 = (s16) temp_v0;
//     D_800BE668->unk12 = (s16) temp_a1_2;
//     D_800BE668->unk14 = (s16) temp_v0;
//     D_800BE668->unk16 = (s16) temp_a3;
//     D_800BE668->unk18 = (s16) temp_v0;
//     D_800BE668->unk1A = temp_lo;
//     D_800BE668->unk1C = (s16) temp_v0;
//     D_800BE668->unk1E = (s16) temp_a1_2;
//     D_800BE668->unk20 = (u16)0;
//     D_800BE668->unk22 = (u16)0;
//     D_800BE668->unk24 = (u16)0;
//     D_800BE668->unk26 = (u16)0;
//     D_800BE668->unk28 = (s16) temp_v1;
//     D_800BE668->unk2A = (s16) temp_a3;
//     D_800BE668->unk2C = temp_lo_2;
//     D_800BE668->unk2E = (s16) temp_a3;
//     D_800BE668->unk30 = (s16) temp_v0;
//     D_800BE668->unk32 = temp_lo;
//     D_800BE668->unk34 = (s16) temp_v0;
//     D_800BE668->unk36 = (s16) temp_a1_2;
//     D_800BE668->unk38 = (u16)0;
//     D_800BE668->unk3A = (u16)0;
//     D_800BE668->unk3C = (s16) temp_v1;
//     D_800BE668->unk3E = (s16) temp_a3;
//     D_800BE668->unk40 = temp_lo_2;
//     D_800BE668->unk42 = (s16) temp_a3;
//     D_800BE668->unk44 = (s16) temp_v1;
//     D_800BE668->unk46 = temp_lo;
//     D_800BE668->unk48 = temp_lo_2;
//     D_800BE668->unk4A = temp_lo;
//     D_800BE668->unk4C = (s16) temp_v0;
//     D_800BE668->unk4E = (s16) temp_a1_2;
//     return temp_v0;
// }
