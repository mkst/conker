#include <ultra64.h>

s32 func_80017EC0(struct18 *arg0) {
    if (arg0->unk18 == 0) {
        return 0;
    }

    return (s32)  ((f32)arg0->unk24 / arg0->unk18->unk8);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/code_17EC0/func_80017EC0.s")


/*

s32 func_80017EC0(void *arg0) {
    if (arg0->unk18 == 0) {
        return 0;
    }
    return (s32) ((f32) arg0->unk24 / arg0->unk18->unk8);
}

*/

void func_80017EFC(void) {
}

void func_80017F04(void) {
}
