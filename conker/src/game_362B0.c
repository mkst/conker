#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 D_800DDE54[];
extern f32 *D_800DDE60[];

typedef struct {
    u8  pad0[0x14];
    s16 unk14;
    u8  pad16;
    u8  unk17;
} Struct8008D050;

extern Struct8008D050 D_8008D050[];

void func_15008E00(void) {
    D_800DDE50 = (u8)0;
}

void func_15008E10(s32 arg0) {
    s32 i;

    D_800DDE54[D_800DDE50] = arg0;
    D_800DDE60[D_800DDE50] = (f32 *) allocate_memory(0x1E0, 1, 0, 0);

    for (i = 0; i < 120; i += 3) {
        D_800DDE60[D_800DDE50][i] = 0.0f;
        D_800DDE60[D_800DDE50][i + 2] = D_800DDE60[D_800DDE50][i + 1] = D_800DDE60[D_800DDE50][i];
    }

    D_800DDE60[D_800DDE50][0x77] = (f32) D_8008D050[arg0].unk14;
    D_8008D050[arg0].unk17 = 0;
    D_800DDE50++;
}
