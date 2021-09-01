#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 D_80088B44;
extern s32 D_800CC454;

void func_150F51A0(s32 arg0, s32 arg1) {
    D_80088B40 = 1;
}

s32 func_150F51BC(void) {
    if (D_80088B40 != 0) {
        D_80088B40 = 0;
        return 1;
    } else {
        return 0;
    }
}

void func_150F51E8(s32 arg0) {
    if (((D_800CC454 & 0X1F) == 3) || ((D_800CC454 & 0x1F) == 4)) {
        if (D_800BE9E4 < D_80088B44){
            if(D_800C35EA != 1) {
                D_80088B44 = (D_80088B44 - D_800BE9E4);
            }
        } else {
            D_80088B44 = ((func_150ADA20() & 0x3F) + 0xC0);
            func_10010F30(15, 18000, ((func_150ADA20() & 0x3F) + 0x20), 0, 0);
        }
    }
}
