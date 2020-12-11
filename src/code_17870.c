#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_10017870(u8 arg0) {
    s32 i;

    D_800428C0 = (u8)0;
    D_800428C1 = (u8)0;
    D_800428C2 = (u8)0;

    switch (arg0) {

        case 1:
              D_800428C1 = (u8)1;
            break;
        case 3:
            D_800428C2 = (u8)1;
            break;
        case 4:
            D_800428C0 = (u8)1;
            break;
    }

    for(i = 0; i < 2; i++) {
        func_10017944(i, 0);
    }
}

void func_10017944(s32 arg0, u32 arg1) {
    if (arg1 == 0) {
        arg1 = D_800428C8[arg0];
    }

    D_800428C4[arg0] = 0;
    D_800428C6[arg0] = 0;

    switch (arg1)
    {
        case 2:
            if (D_800428C0 != 0) {
                D_800428C6[arg0] = 1;
            }
            break;
        case 3:
            if (D_800428C0 != 0) {
                D_800428C4[arg0] = 1;
            }
            break;
        case 4:
            if (D_800428C1 == 0) {
                D_800428C4[arg0] = 1;
            }
            break;
        case 5:
            if (D_800428C1 == 0) {
                D_800428C4[arg0] = 1;
                D_800428C6[arg0] = 1;
            }
            break;
    }

    D_800428C8[arg0] = arg1;
}
