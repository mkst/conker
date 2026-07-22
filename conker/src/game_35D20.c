#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// loops and loops

extern s32 D_800DCE50[2][104];
extern void (*D_80082BD0[])(void);
extern void (*D_80082BD4[])(void);
extern s32 D_800DD1B0;

void func_15008870(s32 arg0) {
    s32 start = 0;
    s32 end = 0x68;
    s32 i;
    s32 j;

    if (arg0 == 1) {
        end = 0x65;
    } else if (arg0 == 2) {
        start = 0x65;
    }

    for (j = 0; j < 2; j++) {
        for (i = start; i < end; i++) {
            D_800DCE50[j][i] = 0;
        }
    }
}

void func_15008930(s32 arg0) {
    void (**funcs)(void);
    s32 count;
    s32 i;

    if (arg0 == 1) {
        funcs = D_80082BD0;
        count = 1;
    } else if (arg0 == 2) {
        funcs = D_80082BD4;
        count = 1;
    } else {
        count = 0;
    }

    for (i = 0; i < count; i++) {
        funcs[i]();
    }

    D_800DD1B0 = -1;
}
