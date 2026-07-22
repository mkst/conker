#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void* func_151674F8(void *arg0, s32 arg1, s16 arg2, s32 arg3);
s32 func_1517F4D8(s32 arg0, s32 arg1);
s32 func_1517F3A0(s32 arg0, s32 arg1);
s32 func_15180580(s32 arg0, s32 arg1);
s32 func_1507DB6C(s32 arg0, s32 arg1);
s32 func_1510FEA0(s32 arg0, s32 arg1);
s32 func_1502BAD0(s32 arg0, s32 arg1, s16 arg2);
extern Mtx D_80089470;
extern u8 D_800DCD27;

typedef struct {
    s32 pad0;
    s32 unk4;
    s32 pad8;
    s32 unkC;
    s32 pad10;
    s32 unk14;
    s32 pad18;
    s32 unk1C;
} Struct45B80Ctr;


void func_150186D0(void) {
    func_10001444();
    func_1501A39C();
    func_151E6BFC();

    D_800BE5E0 = 1;
    D_800D18A0 = 0;
    D_800D18A2 = 0;
    D_800D18A4 = 0;
    D_800D23A9 = 0;

    while (func_1501878C() != 0) {};

    D_8002AC60 = 1;
    D_8002AC64 = 3500;
    *D_800BE728 = func_1501BBB8();

    while (func_151DCFD8(1) != 0) {};
}

// something big and interesting
#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_1501878C.s")

void func_15018DFC(void) {
    func_150A09D0(D_800BE9E4);
    func_150619A8();
    func_1501C870();
    if (D_800BEAC0 == 0) {
        if (D_800C35EA == 1) {
            func_1502378C();
        } else {
            func_1504A730();
        }
        func_15085ABC(D_800D2340);
    }
    func_1507C370();
    func_1507C8FC();
}

void func_15018E88(void *arg0, s16 arg1) {
    if (D_800BE616 == 0) {
        func_1517D7B0(&arg0, 1);
    }
    arg0 = func_151674F8(arg0, 0, arg1, 0);
    arg0 = func_151674F8(arg0, 0, arg1, 1);
    func_15174AA4(arg0, D_800BE9F0, arg1);
}

void *func_15018F08(void *arg0, s16 arg1) {
    arg0 = func_15174B48(arg0, D_800BE9F0, arg1);
    arg0 = func_151674F8(arg0, 1, arg1, 0);
    arg0 = func_151674F8(arg0, 1, arg1, 1);

    func_1517D7B0(&arg0, 2);

    return arg0;
}

void func_15018F80(s16 arg0) {
    struct108 *sp24 = &D_800DBFF0[arg0];
    D_8003C8E0 = 0xA000000;
    if ((func_1517F40C(arg0) == 0) && (D_800BEAC0 == 0)) {
        func_1517F448(arg0);
    }
    func_1501B640(arg0);
    D_800D3674 = (sp24->unk388 < 0.0f) ? -1000 : 5000;
    func_15172D80(arg0);
    D_8003C8E0 = 0;
}

void func_1501905C(void) {
    D_800BE9D0 = D_800BE9D8[D_800BE9C0];
    *D_800BE728 = func_1501BBB8();
    func_15019F20();
    if ((D_800BEAC1 != 0) && (D_800BEAC0 == 0)) {
        func_15169040(0, 0x47);
    }
    func_1501C1B0();
    func_1501BB20();
    func_1502C380();
    if (0) {};
    func_1000D758(D_800DBFF0->unk2A4, D_800DBFF0->unk2A8, D_800DBFF0->unk2AC);
    func_10011BB8();
    if (D_800E0B94 == 2) {
        func_150ADACC(0x81280783); // 2166884227
    }
    func_10012020();
}

// few loops
// NON-MATCHING: best ~5895, algorithmically exact. Everything matches byte-for-byte
// EXCEPT the final array-increment loop (loop 3), which IDO unrolls 4x here but not in
// the target. Loops 1 & 2 (with func calls) match; loop 3 has no call so IDO unrolls it.
// Could not defeat the unroll from clean C (struct-ptr, flat-ptr, end-in-local all unroll;
// named temps add -g3 frame slots). Not permuter-fixable (needs the un-unrolled schedule).
/*
s32 func_15019130(void) {
    s32 i;
    u8 j;
    s32 *p;
    s32 *end;

    func_1510D864();
    func_1509BA04(0);
    func_1509BBA0(2);
    D_800DCD27 = 0;
    func_10004250();
    func_1501E400(0);
    func_15034F20();
    func_1510B690();
    func_1510F800(0);
    func_15113180();
    if (D_800BEAC0 == 0) {
        func_15113E54(1);
    }
    if (D_800BEAC0 == 0) {
        func_15114188();
    }
    func_15044A28();
    func_15018DFC();
    func_150242F8(1, 0);
    func_1501EC38(0);
    func_150242F8(0, 0);
    func_15020EC4(0);
    func_1501E2F8(0);
    if ((s8)D_800D23A9 != 0) {
        func_15087CC0();
    }
    func_15122AE0();
    func_1504ADD0();
    func_1510F800(0);
    for (i = 0; i <= D_80082FA0; i++) {
        func_1510FC34(i);
    }
    func_1510B690();
    for (j = 0; j <= D_80082FA0; j++) {
        func_15094EA0(j);
    }
    func_15112A80(0);
    func_151749F8(D_800BE9F0, 0);
    func_1501C860();
    func_1511FC20(D_800BE9C0);
    func_15188B74(0);
    if (D_800BEAC0 == 0) {
        func_1516706C();
        func_151671E8();
    }
    func_1502BEE4();
    if (D_800BE616 == 0) {
        func_150A0D8C();
    }
    func_15113218();
    func_15188B74(1);
    func_151738C4(D_800BE9F0);
    func_1502C1A4();
    func_15113C88();
    if (D_800CC2B0 != 0) {
        func_150636F0();
    }
    if (D_800BEAC0 == 0) {
        func_15183D28();
        func_151670C0();
        func_15177A94();
    }
    if (D_800BEAC0 == 0) {
        func_151814FC();
    }
    func_1517F75C();
    func_1517F7B4();
    func_15036148();
    func_1515D6C8();
    p = (s32 *)&D_80043B40;
    end = (s32 *)&D_80044B20;
    do {
        p[1]++;
        p[3]++;
        p[5]++;
        p[7]++;
        p += 8;
    } while (p != end);
    return 1;
}
*/
#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_15019130.s")

void func_15019414(void) {
    if (D_800BEAC0 == 0) {
        func_15167010();
    }
    func_1517ABB0();
    if (D_800BE616 == 0) {
        func_1508F0A4();
    }
}

void *func_15019464(Gfx *arg0, s16 arg1) {
    func_1510B958(arg1);
    gSPViewport(arg0++, (s32)((u8 *)D_800BE628 + arg1 * 0x180) + D_800BE9C0 * 0x10 + 64);
    arg0 = (Gfx *)func_1501A490((s32)arg0, arg1, 0, 0, 0, 0);
    if (D_800BEAC0 != 0) {
        return arg0;
    }
    if (D_80084480 != 0) {
        return arg0;
    }
    arg0 = (Gfx *)func_1510FEA0((s32)arg0, D_800BE9F0);
    if ((func_1517EFAC(arg1) != 0) || ((D_800D18A0 & (1 << arg1)) != 0)) {
        return arg0;
    }
    arg0 = (Gfx *)func_1515D6D0((s32)arg0, arg1);
    arg0 = (Gfx *)func_1510B9D0((s32)arg0, arg1);
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_150195A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_150198FC.s")

void func_15019BB8(Gfx *arg0, s32 arg1) {
    gSPViewport(arg0++, (s32)((u8 *)D_800BE628 + arg1 * 0x180) + D_800BE9C0 * 0x10 + 64);
    arg0 = (Gfx *)func_1501A490((s32)arg0, arg1, 0, 0, 0, 0);
    arg0 = (Gfx *)func_1517F4D8((s32)arg0, arg1);
    arg0 = (Gfx *)func_1517F3A0((s32)arg0, arg1);
    arg0 = (Gfx *)func_15180580((s32)arg0, arg1);
    if ((D_800D18A0 & (1 << arg1)) || (D_800D18A2 & (1 << arg1))) {
        arg0 = (Gfx *)func_1507DB6C((s32)arg0, arg1);
    }
    arg0 = (Gfx *)func_151674F8(arg0, 4, arg1, 0);
    arg0 = (Gfx *)func_151674F8(arg0, 4, arg1, 1);
}

// NON-MATCHING: best 2922 (PERMUTER CANDIDATE). Algorithmically exact: branch,
// gSPMatrix commands, D_800DC2A0[] access all correct. Only divergence is that IDO
// homes arg1 to its stack arg-slot (0x44) and reloads on every use instead of
// promoting it to $s0 like the target (target: `move s0,a1`). All ~2900 score comes
// from that single allocation decision cascading register numbers + reload insns.
// Needs the permuter to force arg1 into a callee-saved register.
// void *func_15019CC8(Gfx *arg0, s32 arg1) {
//     gSPViewport(arg0++, D_800BE628 + arg1 * 0x180 + D_800BE9C0 * 0x10 + 64);
//     arg0 = (Gfx *)func_1501A490((s32)arg0, arg1, 0, 0, 0, 0);
//     gSPMatrix(arg0++, &D_80089470, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH);
//     gSPMatrix(arg0++, D_800BE628 + arg1 * 0x180 + D_800BE9C0 * 0x40 + 0x100, G_MTX_PROJECTION | G_MTX_LOAD);
//     if (D_800BE9F0 == 0x1D) {
//         arg0 = (Gfx *)func_1502BAD0((s32)arg0, 6, arg1);
//     }
//     arg0 = (Gfx *)func_151674F8(arg0, 5, 0, 0);
//     arg0 = (Gfx *)func_151674F8(arg0, 5, 0, 1);
//     gSPMatrix(arg0++, D_800BE628 + arg1 * 0x180 + D_800BE9C0 * 0x40 + 0x100, G_MTX_PROJECTION | G_MTX_LOAD);
//     gSPMatrix(arg0++, (s32)(&D_800DC2A0)[D_800BE9C0] + arg1 * 0x40, G_MTX_PROJECTION);
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_15019CC8.s")

void func_15019E60(Gfx *arg0) {
    if (D_80082FA0 != 0) {
        D_80082FA4 = D_80082FA0 + 1;
        gSPViewport(arg0++, (D_80082FA4 * 0x180) + D_800BE628 + 64);
    } else {
        gSPViewport(arg0++, D_800BE628 + 64);
    }
    func_15043384(func_151E8620(func_1501A490(arg0, 0xFF, 0, 0, 0, 0)));
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_45B80/func_15019F20.s")
