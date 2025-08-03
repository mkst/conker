#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// game entrypoint
#pragma GLOBAL_ASM("asm/nonmatchings/game/entrypoint/func_15007830.s")
// NON-MATCHING: need to better understand jump tables
// void func_15007830(void) {
//     func_15007A20();
//     D_800D2C28 = 0;
//     osCreateMesgQueue(&D_800BEA10, &D_800BEA28, 16);
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
//     D_800BEA04[0] = 0;
//     D_800BEA00[0] = 1;
//     D_800BE615 = 5;
//     D_800BEAAA = 1;
//     func_1509C120();
//     do {
//         switch(D_800BE615) {
//             case 0:
//             case 4:
//                 func_151E50C8();
//             case 1:
//                 func_15017498();
//                 if (2 == D_800E0B94) {
//                     func_150ADACC(0x81280783);
//                 }
//                 func_15007A70(D_800BEA04[1], D_800BEA00[1], D_800BE9F4[1]);
//             case 2:
//                 func_15007B3C();
//                 D_800BE615 = 0U;
//             case 3:
//                 func_100051E8();
//                 D_800BE9E8 = 0;
//                 func_150186D0();
//         }
//     } while (1);
// }
