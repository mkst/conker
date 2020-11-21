#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513B5E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513B798.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513B83C.s")

s32 func_8513B968(s32 arg0, s32 arg1) {
    // &arg0->unk_120[D_800BE9C0]
    func_850A7B80(arg0 + 120 + (D_800BE9C0 << 6));
    return 1;
}

void func_8513B9A8(struct132 *arg0) {
    func_800043B4(arg0->unk4C, 4);
    func_85169804(arg0);
}

void func_8513B9DC(struct132 *arg0) {
    func_800043B4(arg0->unk4C, 4);
    func_85169824(arg0);
}

void func_8513BA10(struct132 *arg0) {
    D_80089C44[arg0->unk48]();
}

void func_8513BA44(struct132 *arg0) {
    D_80089C54[arg0->unk48]();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513BA78.s")

s32 func_8513BAD4(s32 arg0, s32 arg1) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513BAE8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513BBFC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code_13B5E0/func_8513BEB0.s")
