#include <ultra64.h>

// this was the very first function to be successfully translated to C
void func_80017AA0(s32 arg0) {
    s32 pad[3];
    s8 pad2;
    s16 sp18 = 0xf; // 15

    func_8001C224(arg0 + 0x48, &sp18, 0, 2);
}

/*
original mips_2_c

void func_80017AA0(s32 arg0) {
    s16 sp18;

    sp18 = (u16)0xF;
    func_8001C224(arg0 + 0x48, &sp18, 0, 2);
}

*/
