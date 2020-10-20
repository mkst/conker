#include <ultra64.h>

typedef struct {
  s32 pad1;
  s32 pad2;
  s32 pad3;
  s32 pad4;
  s32 pad5;
  s32 pad6;
  s32 unk8;
} struct1;

typedef struct {
  s32 pad0;
  s32 pad1;
  s32 pad2;
  s32 pad3;
  s32 pad4;
  s32 pad5;
  struct1 *unk18;
  s32 pad6;
  s32 pad7;
  s32 unk24;
} struct2;

s32 func_80017EC0(struct2 *arg0) {
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
