#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15040350(void *arg0, u32 arg1) {
    s32 i;

    D_800C68A0 = D_800848B0 = 0;
    D_800C68A1 = 0;

    for (i = 0; i < 16; i++) {
        D_800C6860[i] = -1;
    }
    D_800C6860[0] = 0;
    func_150403C8(arg0, arg1, 0);
}

// contains jump relative
#pragma GLOBAL_ASM("asm/nonmatchings/game_6D800/func_150403C8.s")

s32 func_1504072C(s32 arg0) {
    if ((arg0 & 7) != 0) {
        return 1;
    }
    return 0;
}

void func_15040748(s32 arg0) {
}

s32 func_15040754(struct148 *arg0) { // overly simple
    s32 temp_a2;
    s32 temp_a1;

    temp_a1 = (arg0->unk0 >> 1) & 0x7F;
    temp_a2 = (arg0->unk0 >> 12) & 0xFF;
    temp_a1 = temp_a1 - temp_a2;

    if (temp_a1 < 0) {
        return 1;
    }
    return func_1504072C(arg0->unk4);
}

void func_150407A0(void) {
}

void func_150407A8(s32 arg0) {
}

void func_150407B4(s32 arg0) {
}

void func_150407C0(s32 arg0) {
}

void func_150407CC(s32 arg0) {
}

void func_150407D8(s32 arg0) {
}

void func_150407E4(s32 arg0) {
}

void func_150407F0(s32 arg0) {
}

void func_150407FC(s32 arg0) {
}

void func_15040808(s32 arg0) {
}

void func_15040814(s32 arg0) {
}

void func_15040820(s32 arg0) {
}

s32 func_1504082C(u32 *arg0) {
    s32 tmp0 = (*arg0 >> 16) & 0xff;
    s32 tmp1 = (*arg0 >> 8) & 0xff;
    s32 tmp2 = (*arg0 >> 0) & 0xff;

    if ((tmp0 & 1) || (tmp1 & 1) || (tmp2 & 1)) {
        return 1;
    } else {
        return 0;
    }
}

void func_1504086C(s32 arg0) {
}

void func_15040878(s32 arg0) {
}

void func_15040884(s32 arg0) {
}

void func_15040890(s32 arg0) {
}

void func_1504089C(s32 arg0) {
}

void func_150408A8(s32 arg0) {
}

void func_150408B4(s32 arg0) {
}

void func_150408C0(s32 arg0) {
}

void func_150408CC(struct148 *arg0) {
    func_1504072C(arg0->unk4);
}

void func_150408F0(s32 arg0) {
}

void func_150408FC(s32 arg0) {
}

void func_15040908(s32 arg0) {
}

void func_15040914(s32 arg0) {
}

void func_15040920(s32 arg0) {
}

void func_1504092C(s32 arg0) {
}

void func_15040938(s32 arg0) {
}

void func_15040944(s32 arg0) {
}

void func_15040950(s32 arg0) {
}

void func_1504095C(s32 arg0) {
}

void func_15040968(s32 arg0) {
}

void func_15040974(s32 arg0) {
}

void func_15040980(s32 arg0) {
}

void func_1504098C(s32 arg0) {
}

void func_15040998(s32 arg0) {
}

void func_150409A4(s32 arg0) {
}

void func_150409B0(s32 arg0) {
}

void func_150409BC(s32 arg0) {
}

void func_150409C8(s32 arg0) {
}

void func_150409D4(s32 arg0) {
}

void func_150409E0(s32 arg0) {
}

void func_150409EC(s32 arg0) {
}

void func_150409F8(s32 arg0) {
}

void func_15040A04(s32 arg0) {
}

void func_15040A10(s32 arg0) {
}

void func_15040A1C(s32 arg0) {
}

void func_15040A28(s32 arg0) {
}

void func_15040A34(s32 arg0) {
}

void func_15040A40(s32 arg0) {
}

void func_15040A4C(void) {
}

void func_15040A54(s32 arg0) {
}

void func_15040A60(s32 arg0) {
}

void func_15040A6C(s32 arg0) {
}

// contains delay slot
#pragma GLOBAL_ASM("asm/nonmatchings/game_6D800/func_15040A78.s")

// file-local 8-byte element type for func_15040CC8's argument array (not in structs.h)
typedef struct {
    u8 unk0;
    u8 pad1[7];
} Struct6D800;

void func_15040CC8(Struct6D800 *arg0) {
    s32 i;
    s32 j;

    for (i = 0; i < 16; i++) {
    }

    // the redundant i--/i++ keeps IDO from rewriting the loop test as "i != 0xA"; removing it mismatches
    for (i = -0x14; i < 0xA; i++) {
        j = (s32) &arg0[i];
        D_800844B0[*(u8 *) j](j);
        i--;
        i++;
    }

    if (D_800848B0 != 0) {
        func_1500390C(D_800848B0);
    }
}

void func_15040D60(s32 arg0) {
}

void func_15040D6C(s32 arg0) {
}

void func_15040D78(s32 arg0) {
}
