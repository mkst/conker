#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001420.s")
// NOT MATCHING: JUSTREG: uses v0 registers not a1 registers
// void func_10001420(void) {
//     s32 *tmp = &D_80043B40;
//     s32 cnt = 4064;
//
//     do {
//         *tmp++ = 0;
//     }
//     while ((s32)tmp < (u32)&D_80043B40 + cnt);
// }

void func_10001444(void) {
    u32 saveMask = __osDisableInt();
    func_100061F8(2, 31);
    func_10001420();
    func_10005BE0();
    osInvalICache(&D_1002AAD0, 0x80400000 - (u32)&D_1002AAD0);
    __osRestoreInt(saveMask);
}

void func_100014A0(void) {
    osStopThread(&D_80031AE0);
}

void func_100014C4(s32 arg0) {
    u32 saveMask = __osDisableInt();
    func_100061F8(2, 31);

    if (0) {};

    if (D_8003BE74) {
        func_10004074(D_8003BE74 | 0x80000000);
    }
    if (D_8003BE70) {
        func_10004074(D_8003BE70 | 0x80000000);
    }
    func_10005B04(arg0);
    func_10001420();
    func_10005BE0();
    __osRestoreInt(saveMask);
}

// this is a loopy mutha. contains delay slot so insert nop after .L1000183C
#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001550.s")

s16 func_100019F0(s16 *arg0, struct05 *arg1) {
    s16 temp_v1 = (arg1->unk0 & 0x7FF0) >> 4;

    if (temp_v1 == 0x7FF) {
        s32 ret;
        *arg0 = 0;
        if ((arg1->unk0 & 0xF) || (arg1->unk2) || (arg1->unk4) || (arg1->unk6)) {
            ret = 2;
        }
        else {
            ret = 1;
        }
        return ret;
    }

    if (temp_v1 > 0) {
        arg1->unk0 = (arg1->unk0 & 0x800F) | 0x3FF0;
        *arg0 = temp_v1 - 0x3FE; // 1022
        return -1;
    }

    if (temp_v1 < 0) {
      return 2;
    }

    *arg0 = 0;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_1420/func_10001AA8.s")
// some kind of memory allocation?
// NON-MATCHING: 50% of the way there...
// void func_10001AA8(struct246 *arg0, u8 arg1, u8 *arg2, s16 arg3, s16 arg4) {
//     s32 temp_v0_3;
//     s32 temp_v1_2;
//     s32 phi_v0;
//     u8 *phi_s1;
//     s32 phi_v1;
//     s32 required;
//     u8 *mem_array;
//
//     if (arg3 <= 0) {
//         arg2 = &D_8002BF70;
//         arg3 = 1;
//     }
//
//     if (arg1 != 0x66) {
//         if ((arg1 == 0x67) || (arg1 == 0x47)) {
//             if ((arg4 >= -4) && (arg4 < arg0->unk24)) {
// block_7:
//                 arg4 = arg4 + 1;
//                 if (arg1 != 0x66) {
//                     phi_v0 = arg0->unk24;
//                     if (((arg0->unk30 & 8) == 0) && (arg3 < arg0->unk24) ){
//                         arg0->unk24 = arg3;
//                         phi_v0 = arg3;
//                     }
//                     arg0->unk24 = phi_v0 - arg4;
//                     if (arg0->unk24 < 0) {
//                         arg0->unk24 = 0;
//                     }
//                 }
//                 if (arg4 <= 0) {
//                     *(arg0->unk8 + arg0->unk14) = 0x30;
//                     arg0->unk14 += 1;
//                     if ((arg0->unk24 > 0) || ((arg0->unk30 & 8) != 0)) {
//                         *(arg0->unk8 + arg0->unk14) = 0x2E;
//                         arg0->unk14 += 1;
//                     }
//                     phi_v1 = -arg4;
//                     if (arg0->unk24 < phi_v1) {
//                         phi_v1 = arg0->unk24;
//                         arg4 = -arg0->unk24;
//                     }
//                     arg0->unk18 = phi_v1;
//                     arg0->unk24 += arg4;
//                     if (arg0->unk24 < arg3) {
//                         arg3 = (s16)arg0->unk24;
//                     }
//                     arg0->unk1C = arg3;
//                     memcpy(arg0->unk8 + arg0->unk14, arg2, arg3);
//                     arg0->unk20 = arg0->unk24 - arg3;
//                 } else if (arg3 < (s32) arg4) {
//                     memcpy(arg0->unk8 + arg0->unk14, arg2, arg3);
//                     arg0->unk14 = (s32) (arg0->unk14 + arg3);
//                     arg0->unk18 = (s32) (arg4 - arg3);
//                     if ((arg0->unk24 > 0) || ((arg0->unk30 & 8) != 0)) {
//                         *(arg0->unk8 + arg0->unk14) = (u8)0x2E;
//                         arg0->unk1C = (s32) (arg0->unk1C + 1);
//                     }
//                     arg0->unk20 = arg0->unk24;
//                 } else {
//                     memcpy(arg0->unk8 + arg0->unk14, arg2, arg4);
//                     arg0->unk14 = (s32) (arg0->unk14 + arg4);
//                     if ((arg0->unk24 > 0) || ((arg0->unk30 & 8) != 0)) {
//                         *(arg0->unk8 + arg0->unk14) = (u8)0x2E;
//                         arg0->unk14 = (s32) (arg0->unk14 + 1);
//                     }
//                     arg3 = (s16) arg3 - arg4;
//                     if (arg0->unk24 < (s32) arg3) {
//                         arg3 = (s16) arg0->unk24;
//                     }
//                     memcpy(arg0->unk8 + arg0->unk14, arg4 + arg2, arg3);
//                     arg0->unk14 = (s32) (arg0->unk14 + arg3);
//                     arg0->unk18 = (s32) (arg0->unk24 - arg3);
//                 }
//             } else {
// block_33:
//                 if ((arg1 == 0x67) || (arg1 == 0x47)) {
//                     phi_v0 = arg0->unk24;
//                     if (arg3 < phi_v0) {
//                         arg0->unk24 = arg3;
//                         phi_v0 = arg3;
//                     }
//                     arg0->unk24 = phi_v0 - 1;
//                     if (arg0->unk24 < 0) {
//                         arg0->unk24 = 0;
//                     }
//                     if (arg1 == 0x67) {
//                         arg1 = 0x65U;
//                     } else {
//                         arg1 = 0x45U;
//                     }
//                 }
//                 *(arg0->unk8 + arg0->unk14) = *arg2;
//                 arg0->unk14 += 1;
//                 if ((arg0->unk24 > 0) || ((arg0->unk30 & 8) != 0)) {
//                     *(arg0->unk8 + arg0->unk14) = 0x2E;
//                     arg0->unk14 += 1;
//                 }
//                 if (arg0->unk24 > 0) {
//                     arg3 = arg3 - 1;
//                     if (arg0->unk24 < arg3) {
//                         arg3 = (s16) arg0->unk24; // (s16)
//                     }
//                     memcpy(arg0->unk8 + arg0->unk14, arg2 + 1, arg3);
//                     arg0->unk14 += arg3;
//                     arg0->unk18 = (arg0->unk24 - arg3);
//                 }
//                 mem_array = arg0->unk8 + arg0->unk14;
//                 *(mem_array) = arg1;
//                 mem_array += 1;
//                 if (arg4 >= 0) {
//                     mem_array[0] = 43;
//                     required = arg4;
//                     mem_array += 1;
//                 } else {
//                     mem_array[0] = 45;
//                     required = -arg4;
//                     mem_array += 1;
//                 }
//                 if (required >= 100) {
//                     if (required >= 1000) {
//                         *mem_array = (s8) ((required / 1000) + 48);
//                         required = required % 1000;
//                         mem_array += 1;
//                     }
//                     *mem_array = (s8) ((required / 100) + 48);
//                     required = (required % 100);
//                     mem_array += 1;
//                 }
//                 *(mem_array + 0) = (required / 10) + 48;
//                 *(mem_array + 1) = (required % 10) + 48;
//                 arg0->unk1C = (((mem_array + 2) - arg0->unk8) - arg0->unk14);
//             }
//         } else {
//             goto block_33;
//         }
//     } else {
//         goto block_7;
//     }
//
//     if ((arg0->unk30 & 0x14) == 0x10) {
//         temp_v1_2 = arg0->unk28;
//         temp_v0_3 = arg0->unkC + arg0->unk14 + arg0->unk18 + arg0->unk1C + arg0->unk20;
//         if (temp_v0_3 < temp_v1_2) {
//             arg0->unk10 = temp_v1_2 - temp_v0_3;
//         }
//     }
// }
