#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15017300(s16 arg0, s16 arg1) {
    s32 i;
    s16 tmp;

    tmp = arg0;
    bzero(&D_800D2138, 524);
    D_800D2138 = tmp;

    for (i = 0; i < 16; i++) {
        if ((1 << i) & arg1) {
            func_15085710(i, 0, D_80087270[i]);
            D_800D2457 = D_800D2456 = 6;
            func_15085710(i, 5, D_8008726C);
            func_15085710(i, 2, D_80087260);
            if (D_800BE616 != 0) {
                func_15085710(i, 9, D_80087264);
            }
        }
        func_1501748C(arg1);
    }
    D_800D2340 = arg1;
    D_800D2132 = 0;
}

void func_1501748C(s16 arg0) {
}

void func_15017498(void) {
    bzero(&D_800D2138, 524);
}

// D_800D23C0 is declared as s32 in variables.h (shared header, not editable here)
// but is really a pointer to an array of 0x18-byte records. RECORDS reinterprets
// the storage as the correct pointer type.
typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ u16 unk2;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u16 unk8[8];
} Struct150174C0; /* size = 0x18 */

#define RECORDS (*(Struct150174C0**)&D_800D23C0)

void func_150174C0(s32 arg0) {
    s32 i;
    s32 j;

    for (i = 0; i < (s32)D_80087380; i++) {
        for (j = 0; j < RECORDS[i].unk2; j++) {
            if ((RECORDS[i].unk8[j] >> 12) == 2) {
                RECORDS[i].unk8[j] += arg0;
            }
        }
    }
}

void func_15017578(s32 arg0) {
    u32 tmp = 0;
    D_800D23C0 = func_1502B5C8(&tmp, 3, 12, arg0, 4);
    D_80087380 = tmp / 24;
    func_150174C0(D_800DBF00);
}
