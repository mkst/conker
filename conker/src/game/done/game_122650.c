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
        D_80088B40 = 0U;
        return 1;
    }
    return 0;
}

void func_150F51E8(s32 arg0) {
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v0;

    temp_t6 = D_800CC454 & 0x1F;
    if ((temp_t6 == 3) || (temp_t6 == 4)) {
        temp_v0 = D_800BE9E4;
        temp_v1 = D_80088B44;
        phi_v0 = temp_v0;

        if (temp_v0 < temp_v1){
			if(D_800C35EA != 1) {
				D_80088B44 = (temp_v1 - temp_v0);
        	}
		} else {
			D_80088B44 = ((func_150ADA20() & 0x3F) + 0xC0);
			func_10010F30(15, 18000, ((func_150ADA20() & 0x3F) + 0x20), 0, 0);
		}
	}
}

