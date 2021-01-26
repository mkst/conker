#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_1509B4A0(s32 arg0, s32 arg1) {
    s32 i;

    if(0) {};

    D_8003C8E0 = 0x5000000;
    func_1509C120();
    func_15096970();

    for (i = 0; i < D_800D2F3C; i++) {
        if (func_1509CBD4(D_800D2F40[i])) {
            func_1509B5AC(D_800D2F40[i], arg1);
        }
    }

    func_1509C3A0();
    D_8003C8E0 = 0;
}

// #pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B570.s")
s32 *func_1509B704(s16 arg0);

u16 *func_1509B570(s32 arg0) {
    u16 *temp_v0;
    u16 res;

    temp_v0 = func_1509B704(arg0);
    if (temp_v0 != 0) {
        res = temp_v0[5];
        return (s32)temp_v0 + (res & 0xFFFF);
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B704.s")


#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B8FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BBA0.s")

//
#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BE40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BFB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C414.s")
