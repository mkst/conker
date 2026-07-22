#include <ultra64.h>

#include "functions.h"
#include "variables.h"

typedef s32 (*Callback221290)(s32, void *, s32, s32);

typedef struct {
    /* 0x0000 */ s32 unk0;
    /* 0x0004 */ Callback221290 unk4;
    /* 0x0008 */ s32 unk8;
    /* 0x000C */ s32 unkC;
    /* 0x0010 */ s32 unk10;
    /* 0x0014 */ s32 unk14;
    /* 0x0018 */ s32 unk18;
    /* 0x001C */ u8  unk1C[0x2000];
    /* 0x201C */ s32 unk201C;
    /* 0x2020 */ s32 unk2020;
    /* 0x2024 */ char pad2024[0x3BA0 - 0x2024];
    /* 0x3BA0 */ s32 unk3BA0;
    /* 0x3BA4 */ char pad3BA4[0x3F88 - 0x3BA4];
    /* 0x3F88 */ s32 unk3F88;
    /* 0x3F8C */ char pad3F8C[0x6A64 - 0x3F8C];
    /* 0x6A64 */ u8  unk6A64[0x900];
    /* 0x7364 */ char pad7364[0x8474 - 0x7364];
    /* 0x8474 */ s32 unk8474;
    /* 0x8478 */ s32 (*unk8478)(void *);
} Struct221290;

extern Struct221290 D_800E1880;
extern s32 func_151F8088(void *, s32);
extern void (*D_800E0E00)(s32, void *, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F3DE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F42E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F4F38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F578C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F63C4.s")
// NON-MATCHING: best 2213. Algorithm reconstructed but -g codegen shape differs:
// target reserves 8 bytes at frame bottom (frame 0x18 vs 0x10) and hoists the loop
// counter increment into the guard's delay slot for the counter-unused copy loops.
// s32 func_151F6970(Struct221290 *p, s32 idx) {
//     s16 *base16 = D_800AEB7C[*(s32 *)((u8 *)p + 0x3BA4)][*(s32 *)((u8 *)p + 0x3BB4)];
//     f32 *dst = (f32 *)((u8 *)p + 0x4F64);
//     f32 *src = (f32 *)((u8 *)p + 0x4664);
//     s32 i = 0;
//     if (*(s32 *)((u8 *)p + idx * 4 + 0x3C98) != 0 && *(s32 *)((u8 *)p + idx * 4 + 0x3CA0) == 2) {
//         if (*(s32 *)((u8 *)p + idx * 4 + 0x3CA8) != 0) {
//             for (; i < 0x24; i++) { *dst++ = *src++; }
//         }
//         for (; i < 0x240; i++) { dst[base16[i]] = *src++; }
//     } else {
//         for (; i < 0x240; i++) { *dst++ = *src++; }
//     }
//     return 1;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6970.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6B28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6FD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F78B4.s")
s32 func_151F7F60(Struct221290 *arg0) {
    s32 n = 0x1000;
    s32 result;

    if ((arg0->unk201C + arg0->unk3F88) >= 0x1FFC) {
        bcopy(&arg0->unk1C[n], &arg0->unk1C[0], n);
        arg0->unk201C -= n;
        arg0->unk2020 -= n << 3;
    }
    result = arg0->unk4(arg0->unk0, &arg0->unk1C[arg0->unk201C], arg0->unk3F88, -1);
    if (result < arg0->unk3F88) {
        bzero(&arg0->unk1C[result], arg0->unk3F88 - result);
    }
    arg0->unk18 += arg0->unk3F88;
    arg0->unk201C += arg0->unk3F88;
    return arg0->unk201C - arg0->unk3F88;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F8088.s")
Struct221290 *func_151F85C4(s32 arg0, Callback221290 arg1, s32 arg2) {
    Struct221290 *temp = &D_800E1880;

    if (temp == NULL) {
        return NULL;
    }
    temp->unkC = -1;
    temp->unk10 = -1;
    temp->unk14 = -1;
    temp->unk0 = arg0;
    temp->unk4 = arg1;
    temp->unk8 = arg2;
    temp->unk201C = 0;
    temp->unk2020 = 0;
    temp->unk3BA0 = 0;
    if (func_151F8088(temp, 0) == 0) {
        return NULL;
    }
    temp->unk8474 = 0;
    bzero(temp->unk6A64, 0x900);
    return temp;
}

s32 func_151F86B0(void *arg0, void **arg1, s32 *arg2) {
    Struct221290 *temp;
    s32 result2;
    u8 buf[0x100];
    s32 j;

    temp = arg0;
    temp->unk3BA0++;
    if (temp->unk3BA0 >= 6) {
        temp->unk3BA0 = 0;
    }
    if (func_151F8088(temp, temp->unk8474) == 0) {
        D_800E0E04 = 3;
        return 0;
    }
    temp->unk8474 = -1;
    result2 = temp->unk8478(temp);
    if (result2 == 0) {
        goto end;
    }
    *arg1 = (u8 *)temp + temp->unk3BA0 * 1160 + 0x2070;
    *arg2 = *(s32 *)((u8 *)temp + 0x3F8C);
    if (*(s32 *)((u8 *)temp + 0x3BC8) != 0) {
        j = 0;
        do {
            if (temp->unk4(temp->unk0, &buf[j], 1, -1) == 0) {
                break;
            }
        } while (buf[j++]);
        if (D_800E0E00 != NULL) {
            D_800E0E00(0, buf, strlen(buf) + 1);
        }
    }
end:
    return result2;
}
