#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void (*jtbl_80095A30[8])(void) = {
    0x1500798C,
    0x15007994,
    0x150079C0,
    0x150079CC,
    0x1500798C,
    0,
    0,
    0
};

// chunk0 entrypoint
#pragma GLOBAL_ASM("asm/nonmatchings/code_7830/func_15007830.s")
// void func_15007830(void) {
//     u32 temp_t0;
//
//     func_15007A20();
//     D_800D2C28 = 0;
//     func_10023790(&D_800BEA10, &D_800BEA28, 16); // osCreateMesgQueue
//     D_800BEA68->unk0 = 2;
//     D_800BEA68->unk20 = 2;
//     D_800BE617 = 0;
//     func_100050A0(&D_800BEA10);
//     func_15003570();
//     D_800BEAAB = 0;
//     func_10008180();
//     func_15000000();
//     func_15016588();
//     func_151EEFF0();
//     D_800BEAA8 = 0;
//     func_150061B0();
//     func_15006234();
//     func_151DD970();
//     func_15015920(0);
//     func_15008A60();
//     func_15042D50();
//     D_800BE615 = (u8)5U;
//     D_800BEA00->unk0 = 1;
//     D_800BEA04->unk0 = 0;
//     D_800BEAAA = (u8)1;
//     func_1509C120();
//     do {
//         if ((D_800BE615 - 1) < 5U) {
//             switch(D_800BE615) {
//                 case 1:
//                     func_151E50C8();
//                     // break;
//                 case 2:
//                     func_15017498();
//                     if (2 == D_800E0B94) {
//                         func_150ADACC(0x81280783);
//                     }
//                     func_15007A70(D_800BEA04->unk2, D_800BEA00->unk2, D_800BE9F4[1] /*.unk2*/);
//                     break;
//                 default:
//                     func_15007B3C();
//                     D_800BE615 = 0U;
//                 }
//         }
//         func_100051E8();
//         D_800BE9E8 = 0;
//         func_150186D0();
//     } while (1);
// }

void func_15007A20(void) {
    func_100226F0(&D_800B0DC0, (s32)&D_800E9D00 - (s32)&D_800B0DC0);
    func_100226F0(&D_80044B20, 0x3E000); // 253952
}
