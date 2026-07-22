#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern f32 D_800AB4B0; // 1.299999952f
extern f32 D_800AB49C;

// File-local description of the (still unnamed) object passed to the
// func_151DA6A8 / func_151DADA0 family. structs.h has no entry for it yet.
typedef struct {
    /* 0x000 */ char pad000[0x10];
    /* 0x010 */ f32 unk010;
    /* 0x014 */ f32 unk014;
    /* 0x018 */ char pad018[0x8];
} Struct2062D0Sub;

typedef struct {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ char pad02[0x2];
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
} Struct2062D0Sub110;

typedef struct {
    /* 0x000 */ char pad000[0x4C];
    /* 0x04C */ f32 unk04C;
    /* 0x050 */ f32 unk050;
    /* 0x054 */ char pad054[0x4];
    /* 0x058 */ s32 unk058;
    /* 0x05C */ char pad05C[0x110 - 0x5C];
    /* 0x110 */ Struct2062D0Sub110 unk110;
    /* 0x11C */ char pad11C[0x128 - 0x11C];
    /* 0x128 */ Struct2062D0Sub unk128;
} Struct2062D0;


typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ s8 unk06;
    /* 0x07 */ s8 unk07;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ f32 unk0C;
} Struct9450Sub;

typedef struct {
    /* 0x000 */ char pad000[0x38];
    /* 0x038 */ f32 unk38;
    /* 0x03C */ f32 unk3C;
    /* 0x040 */ char pad040[0xA8 - 0x40];
    /* 0x0A8 */ Struct9450Sub unkA8;
    /* 0x0B8 */ char pad0B8[0xC1 - 0xB8];
    /* 0x0C1 */ u8 unkC1;
} Struct9450;

s32 func_151D9450(Struct9450 *arg0, void *arg1);

u8 func_151D8E20(void) {
    if ((D_800BE9F0 == 0) && (func_150A29C8(0, 0x1C) == 0)) {
        return 10;
    }
    return D_800E0A10;
}

u8 func_151D8E6C(void) {
    u8 tmp[3] = D_800AB340;
    return tmp[(func_150ADA20() % 3U)];
}

u8 func_151D8EB0(void) {
    return 117;
}

u8 func_151D8EBC(void) {
    return 29;
}

u8 func_151D8EC8(void) {
    s32 tmp;

    if (func_150ADA20() & 1) {
        tmp = 17;
    } else {
        tmp = 147;
    }
    return tmp;
}

u8 func_151D8EFC(void) {
    s32 tmp;

    if (func_150ADA20() & 1) {
        tmp = 90;
    } else {
        tmp = 91;
    }
    return tmp;
}

u8 func_151D8F30(void) {
    u8 tmp[5] = D_800AB344;
    return tmp[func_150ADA20() % 5U];
}

u8 func_151D8F7C(void) {
    s32 tmp;

    if ((func_150ADA20() & 1) != 0) {
        tmp = 102;
    } else {
        tmp = 103;
    }
    return tmp;
}

u8 func_151D8FB0(void) {
    return 149;
}

u8 func_151D8FBC(void) {
    return 159;
}

u8 func_151D8FC8(void) {
    return 179;
}

u8 func_151D8FD4(void) {
    return 117;
}

u8 func_151D8FE0(void) {
    u8 tmp[4] = D_800AB34C;
    return tmp[func_150ADA20() & 3];
}

// big struct definition
void func_151D9014(void *arg0, f32 *arg1, u8 arg2, f32 arg3, s16 arg4, u8 arg5, f32 arg6, u8 arg7, f32 arg8, f32 arg9, u8 argA, s32 argB, u8 argC, u8 argD, u8 argE, s32 argF);
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151D9014.s")

s32 func_151D93F4(void *arg0, void *arg1) {
    s32 res;

    if (func_151D9450(arg0, arg1) != 0) {
        if (func_151D9534(arg0, arg1) != 0) {
            res = 1;
        } else {
            res = 0;
        }
    } else {
        res = 0;
    }
    return res;
}

s32 func_151D9450(Struct9450 *arg0, void *arg1) {
    Struct9450Sub *p;

    p = &arg0->unkA8;
    if (arg0->unkC1 & 1) {
        return 1;
    }
    p->unk04 += p->unk06 * D_800BE9E4;
    p->unk05 += p->unk07 * D_800BE9E4;
    arg0->unk38 = (func_151423D8(p->unk04 - 0x40) * p->unk08) + p->unk00;
    arg0->unk3C = (func_151423D8(p->unk05 - 0x40) * p->unk0C) + p->unk00;
    return 1;
}

// func_151D9534: dispatcher (physics update + 3 render-call branches). The reconstruction below is
// algorithmically EXACT and the else-branch is byte-identical modulo a float-register cascade.
// Best hand score 2175. PERMUTER CANDIDATE: in the (unkC1&2) physics block the target keeps
// D_800AB44C's VALUE live in $f2 and reuses it for the unk58 and unk60 multiplies, but IDO here
// address-CSEs it (materializes &D_800AB44C in v0, hoisted above the branch) and reloads the value,
// adding 2 insns whose $f-register renaming cascades through the whole else branch. The forced
// store order (unk58, unk44, unk5C, unk60) defeats value-CSE by hand; needs the permuter.
//
// extern f32 D_800AB44C, D_800AB450, D_800AB454, D_800AB458, D_800AB45C, D_800AB460;
// s32 func_1514672C(f32 *arg0);
// s32 func_15046C80(f32 *arg0, s32 arg1, f32 arg2, f32 *arg3);
// void func_151DAB58(u8, f32, u8, void*, s32, u8, s32);
// SubA8_9534 { f32 unk10@0x10; f32 unk14@0x14; u8 unk18@0x18; }
// Struct9534Arg1 { f32 unk04@0x04; }
// Struct9534 { u8 unk01; u8 unk0C; u8 unk2B; f32 unk38,unk3C,unk40,unk44,unk48; f32 unk58,unk5C,
//              unk60,unk64; s32 unk68; f32 unk80; u8 unk84,unk9D,unkA8,unkC1; }
// s32 func_151D9534(Struct9534 *arg0, Struct9534Arg1 *arg1) {
//     u8 ret; f32 sp50[3]; SubA8_9534 *p; f32 val;   // decl order sets -g3 debug slots
//     ret = 1;
//     if (arg0->unk44 < arg1->unk04) {
//         sp50[0] = arg0->unk40; sp50[1] = arg1->unk04; sp50[2] = arg0->unk48;
//         if (func_1514672C(sp50) == 0) return 0;
//         if (func_15046C80(sp50, 0, arg0->unk44, &arg0->unk80) != 0) {
//             sp50[1] = arg0->unk80 + 2.0f;
//             if (arg0->unkC1 & 2) {
//                 arg0->unk58 = arg0->unk58 * D_800AB44C;
//                 arg0->unk44 = (arg0->unk3C * D_800AB450) + sp50[1];
//                 arg0->unk5C = arg0->unk5C * D_800AB454;
//                 arg0->unk60 = arg0->unk60 * D_800AB44C;
//                 if (fabsf(arg0->unk5C) < D_800AB458) {
//                     arg0->unk58 = 0.0f; arg0->unk68 &= ~6;
//                     arg0->unk5C = 0.0f; arg0->unk60 = 0.0f; arg0->unk64 = 0.0f;
//                 }
//             } else {
//                 ret = 0; p = (SubA8_9534 *) &arg0->unkA8;
//                 val = (arg0->unk38 + arg0->unk3C) * 0.5f;
//                 if (arg0->unk9D == 3)
//                     func_151D9FC0(p->unk18, p->unk14 * val, arg0->unk2B, (s32)&arg0->unk84, (s32)sp50, arg0->unk0C, arg0->unk01);
//                 else if (func_150ADA20() & 1)
//                     func_151D9B8C(p->unk18, (val * D_800AB45C) * p->unk10, arg0->unk2B, (s32)&arg0->unk84, (struct17*)sp50, 0x64, 0, 1, 0, arg0->unk0C, arg0->unk01);
//                 else
//                     func_151DAB58(p->unk18, (val * D_800AB460) * p->unk10, arg0->unk2B, sp50, 1, arg0->unk0C, arg0->unk01);
//             }
//         }
//     }
//     return ret;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151D9534.s")

u8 func_151D97A8(void) {
    s32 tmp[7] = D_800AB350;
    return tmp[func_150ADA20() % 7U];
}

u8 func_151D9820(void) {
    s32 tmp[3] = D_800AB36C;
    return tmp[func_150ADA20() % 3U];
}

u8 func_151D9878(void) {
    s32 tmp[3] = D_800AB378;
    return tmp[func_150ADA20() % 3U];
}

u8 func_151D98D0(void) {
    s32 tmp[2] = D_800AB384;
    return tmp[func_150ADA20() & 1];
}

u8 func_151D9918(void) {
    s32 tmp[2] = D_800AB38C;
    return tmp[func_150ADA20() & 1];
}

u8 func_151D9960(void) {
    s32 tmp[5] = D_800AB394;
    return tmp[func_150ADA20() % 5U];
}

u8 func_151D99C8(void) {
    s32 tmp[3] = D_800AB3A8;
    return tmp[func_150ADA20() % 3U];
}

u8 func_151D9A20(void) {
    s32 tmp[2] = D_800AB3B4;
    return tmp[func_150ADA20() & 1];
}

u8 func_151D9A68(void) {
    s32 tmp[3] = D_800AB3BC;
    return tmp[func_150ADA20() % 3U];
}

u8 func_151D9AC0(void) {
    s32 tmp[1] = D_800AB3C8;
    return tmp[0];
}

u8 func_151D9ADC(void) {
    s32 tmp[3] = D_800AB3CC;
    return tmp[func_150ADA20() % 3U];
}

u8 func_151D9B34(void) {
    s32 tmp[4] = D_800AB3D8;
    return tmp[func_150ADA20() & 3];
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151D9B8C.s")

typedef struct {
    /* 0x00 */ s16 unk00;
    /* 0x02 */ char pad02[0x2];
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ char pad0C[0x8];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ char pad17[1];
} Sub9EB0;

typedef struct {
    /* 0x00 */ char pad00[0x1];
    /* 0x01 */ u8 unk01;
    /* 0x02 */ char pad02[0xC - 0x2];
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ char pad0D[0x28 - 0xD];
    /* 0x28 */ s16 unk28;
    /* 0x2A */ char pad2A[0x40 - 0x2A];
} Struct9EB0;

void func_151D9EB0(Struct9EB0 *arg0) {
    Sub9EB0 *p;
    arg0->unk28 -= D_800BE9E4;
    if (arg0->unk28 < 0) {
        p = (Sub9EB0 *) &arg0->unk28;
        func_151D9014(&p->unk08, &D_800A5480, p->unk16, (func_150ADA68() * D_800AB464) + D_800AB468, (func_150ADA20() % 0x29U) + 0x23, p->unk14, p->unk04, 0, 1.0f, 1.0f, p->unk15, 0, 1, 0, arg0->unk0C, arg0->unk01);
        p->unk00 = (func_150ADA20() % 0x6FU) + 0x1E;
    }
}

void func_151D9FC0(u8 arg0, f32 arg1, u8 arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6) {
    func_151DBCBC(arg0, arg1 * 0.5f, arg2, arg3, arg4, arg5, arg6);
    if ((arg0 != 5) && (arg0 != 2)) {
        func_151DA08C(arg0, arg1 * D_800AB46C, 1.0099999904632568f, arg2, 100, arg3, arg4, arg5, arg6);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DA08C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DA368.s")

s32 func_151DA6A8(Struct2062D0 *arg0) {
    Struct2062D0Sub *sp;
    s32 i;

    if (arg0->unk058 & 1) {
        sp = &arg0->unk128;
        i = D_800BE9E4;
        while (i--) {
            sp->unk010 *= sp->unk014;
        }
    }
    return 1;
}

// TODO when we know what arg0 is...
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DA6F8.s")

void func_151DAB58(u8 arg0, f32 arg1, u8 arg2, void *arg3, s32 arg4, u8 arg5, s32 arg6);

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ char pad04[0x4];
    /* 0x08 */ u8 unk08;
} SubUnk98A938;

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ char pad04[0x1B - 0x4];
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ char pad1C[0x20 - 0x1C];
    /* 0x20 */ u8 unk20;
    /* 0x21 */ char pad21[0x48 - 0x21];
    /* 0x48 */ f32 unk48;
    /* 0x4C */ char pad4C[0x50 - 0x4C];
    /* 0x50 */ u8 unk50;
    /* 0x51 */ char pad51[0x3];
} StructA938Unk98;

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ char pad04[0x4];
    /* 0x08 */ f32 unk08;
    /* 0x0C */ char pad0C[0x8];
} StructAA88Elem;

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ char pad04[0x17];
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ char pad1C[0x20 - 0x1C];
    /* 0x20 */ u8 unk20;
    /* 0x21 */ char pad21[0x4C - 0x21];
    /* 0x4C */ f32 unk4C;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ char pad51[0x3];
} StructAA88Unk98;

typedef struct {
    /* 0x00 */ char pad00[0x1];
    /* 0x01 */ u8 unk01;
    /* 0x02 */ char pad02[0xA];
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ char pad0D[0x2D - 0x0D];
    /* 0x2D */ s8 unk2D;
    /* 0x2E */ char pad2E[0x94 - 0x2E];
    /* 0x94 */ StructAA88Elem *unk94;
    /* 0x98 */ StructAA88Unk98 *unk98;
} StructAA88;

s32 func_151DA938(StructAA88 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5) {
    StructAA88Elem *e;
    StructA938Unk98 *p98;
    f32 vec[3];
    SubUnk98A938 *q;

    e = arg0->unk94;
    p98 = (StructA938Unk98 *) arg0->unk98;
    vec[0] = e[arg0->unk2D].unk00;
    vec[1] = arg4 + 2.0f;
    vec[2] = e[arg0->unk2D].unk08;
    q = (SubUnk98A938 *) &p98->unk48;
    if (func_150ADA20() & 1) {
        func_151D9B8C(q->unk08, (p98->unk00 * 3.0f) * q->unk00, p98->unk1B, arg5, (struct17 *) vec, 0x64, 0, 1, 0, arg0->unk0C, arg0->unk01);
    } else {
        func_151DAB58(q->unk08, (p98->unk00 * D_800AB49C) * q->unk00, p98->unk1B, vec, 1, arg0->unk0C, arg0->unk01);
    }
    p98->unk20 = 4;
    return 1;
}

s32 func_151DAA88(StructAA88 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5) {
    StructAA88Unk98 *p98;
    StructAA88Elem *e;
    f32 sp[3];

    e = arg0->unk94;
    p98 = arg0->unk98;
    sp[0] = e[arg0->unk2D].unk00;
    sp[1] = arg4;
    sp[2] = e[arg0->unk2D].unk08;
    func_151D9FC0(p98->unk50, (p98->unk00 * 11.0f) * p98->unk4C, p98->unk1B, arg5, (s32) sp, arg0->unk0C, arg0->unk01);
    p98->unk20 = 4;
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DAB58.s")

s32 func_151DADA0(Struct2062D0 *arg0) {
    Struct2062D0Sub110 *p;
    f32 temp;

    p = &arg0->unk110;
    p->unk00 += p->unk01 * D_800BE9E4;
    temp = func_151423D8(p->unk00 - 0x40);
    arg0->unk04C = (p->unk04 * temp) + 1.0f;
    arg0->unk050 = D_800AB4B0 - (p->unk08 * temp);
    return 1;
}

// func_151DAE28: quad-transform (func_151D5D60 + memcpy + vertex math). Vertex math
// reconstructed but a header-context frame quirk (separate return-value save at 0x48,
// frame 8 bytes short) + branch polarity resist a byte-match. Best hand score ~4888.
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DAE28.s")

void func_151DB004(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = 0;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = 0;
    arg0->unk1A = 0;
}

void func_151DB068(struct218 *arg0) {
    arg0->unk14 = arg0->unk15 = (func_150ADA20() % 0x38U) + 100;
    arg0->unk16 = 0;
    arg0->unk18 = arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB0CC(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB15C(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB1EC(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB27C(struct218 *arg0) {
    arg0->unk14 = 0xFF;
    arg0->unk15 = 0xFF;
    arg0->unk16 = 0xFF;
    arg0->unk18 = 0xB4;
    arg0->unk19 = 0xC8;
    arg0->unk1A = 0xC8;
}

void func_151DB2A8(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = 200;
    arg0->unk16 = 0;
    arg0->unk18 = 0;
    arg0->unk19 = 200;
    arg0->unk1A = 0;
}

void func_151DB2CC(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk16 = 0;
    arg0->unk18 = 0;
    arg0->unk19 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk1A = 0;
}

void func_151DB330(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x15U) + 95;
    arg0->unk15 = (func_150ADA20() % 0x15U) + 95;
    arg0->unk16 = (func_150ADA20() % 0xBU) + 45;
    arg0->unk18 = (func_150ADA20() & 0xF) + 58;
    arg0->unk19 = (func_150ADA20() & 0xF) + 60;
    arg0->unk1A = (func_150ADA20() % 0xBU) + 25;
}

void func_151DB3D8(struct218 *arg0) {
    arg0->unk14 = 0;
    arg0->unk15 = arg0->unk16 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk18 = 0;
    arg0->unk19 = arg0->unk1A = (func_150ADA20() % 0x2EU) + 180;
}

void func_151DB43C(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk15 = 0;
    arg0->unk16 = (func_150ADA20() % 0x38U) + 80;
    arg0->unk18 = (func_150ADA20() % 0x2EU) + 180;
    arg0->unk19 = 0;
    arg0->unk1A = (func_150ADA20() % 0x2EU) + 180;
}

void func_151DB4CC(struct218 *arg0) {
    arg0->unk14 = (func_150ADA20() % 56U) + 200;
    arg0->unk15 = (func_150ADA20() % 56U) + 200;
    arg0->unk16 = (func_150ADA20() % 56U) + 200;
    arg0->unk18 = (func_150ADA20() % 56U) + 200;
    arg0->unk19 = (func_150ADA20() % 56U) + 200;
    arg0->unk1A = (func_150ADA20() % 56U) + 200;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DB5D0.s")
typedef struct {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ char pad01[0x3];
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ char pad0E[0x2];
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
} SubB97C;

typedef struct {
    /* 0x00 */ char pad00[0x4C];
    /* 0x4C */ f32 unk4C;
    /* 0x50 */ f32 unk50;
    /* 0x54 */ f32 unk54;
    /* 0x58 */ s32 unk58;
    /* 0x5C */ char pad5C[0xA8 - 0x5C];
    /* 0xA8 */ SubB97C unkA8;
} StructB97C;

s32 func_151DB97C(StructB97C *arg0, s32 arg1) {
    SubB97C *s0;
    f32 r3;
    f32 r2;
    f32 r1;

    s0 = &arg0->unkA8;
    if (s0->unk00 & 2) {
        func_15131918(&arg0->unk58, s0->unk04);
    }
    if (s0->unk00 & 1) {
        s0->unk08 += s0->unk0B * D_800BE9E4;
        s0->unk09 += s0->unk0C * D_800BE9E4;
        s0->unk0A += s0->unk0D * D_800BE9E4;
        r1 = func_151423D8(s0->unk08 - 0x40);
        r2 = func_151423D8(s0->unk09 - 0x40);
        r3 = func_151423D8(s0->unk0A - 0x40);
        arg0->unk4C = s0->unk10 * r1;
        arg0->unk50 = s0->unk14 * r2;
        arg0->unk54 = s0->unk18 * r3;
    }
    return 1;
}

// Struct-builder for func_15153F18; heavy IDO scheduling (early &tmp.unk8 pointer
// reuse as store base + exact store ordering) resists a byte-match. Best hand score 3503.
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DBAA8.s")

// typedef struct {
//     s16 unk0; // sp24
//     s16 unk2;
//     s16 unk4;
//     s16 unk6;
//     // s32 unk8[3]; // sp2C
//     s32 unk8;
//     s32 unkC;
//     s32 unk10;
//     f32 unk14;
//     f32 unk18;
//     f32 unk1C;
//     f32 unk20; // sp44
//     f32 unk24;
//     f32 unk28;
//     s16 unk2C; // sp50
//     s16 unk2E;
//     s16 unk30; // sp54
//     s16 unk32;
//     s16 unk34;
//     s16 unk36;
//     s16 unk38;
//     s16 unk3A;
//     s8  unk3C; // sp60
//     u8  pad3D[0x3];
//     f32 unk40; // sp64
//     s16 unk44;
//     s16 unk46;
//     s32 unk48;
// } struct218XXX;
//
// void func_15153F18(s32, s32, s32, u8, s32);
// void func_151DBAA8(struct00 *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
//
//     struct218XXX tmp;
//
//     // tmp.unk8[0] = arg0->unk0;
//     // tmp.unk8[1] = arg0->unk4;
//     // tmp.unk8[2] = arg0->unk8;
//
//     tmp.unk2C = arg1;
//     tmp.unk3C = arg2;
//
//     tmp.unk0 = 0;
//     tmp.unk2 = 0xFF;
//     tmp.unk4 = -0x40;
//     tmp.unk6 = 0x2E;
//     tmp.unk8 = arg0->unk0;
//     tmp.unkC = arg0->unk4;
//     tmp.unk10 = arg0->unk8;
//
//     tmp.unk30 = 3;
//     tmp.unk2E = 0;
//     tmp.unk32 = 2;
//     tmp.unk34 = 0x1E;
//     tmp.unk36 = 0x1E;
//     tmp.unk38 = 0x9B;
//     tmp.unk14 = 5.5f;
//
//     tmp.unk18 = D_800AB4C0;
//     tmp.unk1C = D_800AB4C4;
//     tmp.unk20 = D_800AB4C8;
//     tmp.unk24 = 10.0f;
//     tmp.unk28 = D_800AB4CC;
//
//     tmp.unk3A = 0x64;
//     tmp.unk44 = 0x10;
//     tmp.unk46 = 0xF;
//     tmp.unk48 = 0;
//     tmp.unk40 = 0.5f;
//
//     func_15153F18(&tmp, &tmp.unk8, 0, arg3, arg4);
// }

void func_151DBBD4(struct17 *arg0, s32 arg1, u8 *arg2, u8 arg3, s32 arg4) {
    struct17 tmp;
    struct217 tmp2;

    tmp.unk0 = arg0->unk0;
    tmp.unk4 = arg0->unk4 + 5.0f;
    tmp.unk8 = arg0->unk8;

    tmp2.unkF = *arg2;
    tmp2.unk0 = func_150ADA68();
    tmp2.unk4 = func_150ADA20();

    func_151D9B8C(tmp2.unkF, (tmp2.unk0 * 25.0f) + 10.0f, ((tmp2.unk4 % 0x38U) + 200), arg1 + 4, &tmp, (func_150ADA20() % 0x97U) + 150, 0, 1, 0, arg3, arg4);
}

// func_151DBCBC: stack-struct builder that fills a 0x28-byte descriptor at sp+0x50 and
// dispatches to func_1513C73C (arg3!=0) or func_1513C5B0 (arg3==0). The reconstruction below
// is algorithmically EXACT (all ops byte-identical) but the struct-init constant materialization
// is scheduled with a different temp-register reuse pattern than the target, whose renames
// cascade through the whole function. Hand-reordering the assignments only makes it worse
// (3557 vs 3070). NON-MATCHING: best 3070. PERMUTER CANDIDATE.
//
// extern u8 D_800AB414[];
// typedef struct {
//     s32 unk00; s16 unk04; s8 unk06; s8 unk07; s32 unk08; s32 unk0C;
//     u8 unk10,unk11,unk12,unk13,unk14,unk15,unk16,unk17; s32 unk18; s32 unk1C;
//     u8 unk20; char pad21[1]; s16 unk22; s16 unk24;
// } StructBCBC;
// void func_151DBCBC(u8 arg0, f32 arg1, s16 arg2, s32 arg3, void *arg4, u8 arg5, s32 arg6) {
//     StructBCBC sp50; struct17 *v = (struct17 *) arg4; u8 *tbl; s32 c1, c2, c3;
//     tbl = &D_800AB414[arg0 * 3];
//     sp50.unk00 = 0x67B02; sp50.unk04 = 0x12C; sp50.unk06 = 0x38; sp50.unk07 = 0;
//     sp50.unk08 = 0; sp50.unk0C = 0x8000; sp50.unk10 = arg2; sp50.unk11 = 0xFF;
//     sp50.unk12 = tbl[0]; sp50.unk13 = tbl[1]; sp50.unk14 = tbl[2]; sp50.unk15 = 0xFF;
//     sp50.unk16 = 0; sp50.unk17 = 6; sp50.unk18 = 0x440001; sp50.unk1C = 0;
//     sp50.unk20 = 0xFF; sp50.unk22 = 1; sp50.unk24 = 0xFF;
//     if (arg3 != 0) {
//         c1 = func_150ADA20(); c2 = func_150ADA20(); c3 = func_150ADA20();
//         func_1513C73C((s32)&sp50, 0, 0, arg3, v->unk0, v->unk4, v->unk8, arg1, arg1, c1,
//                       ((c3 & 1) << 1) + (c2 & 1), 0, arg5, arg6);
//     } else {
//         func_1513C5B0((s32)&sp50, 0, 0, 0, v->unk0, v->unk4, v->unk8, arg1, arg1,
//                       0, 0, 0, arg5, arg6);
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DBCBC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DBE80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DC034.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DC260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_2062D0/func_151DC484.s")

// typedef struct {
//     s16 unk10; // sp24
//     s16 unk12; // sp26
//     s16 unk14;
//     s16 unk16; // sp2A
//     s32 unk18[3];
//     s16 unk24; // sp38;
//     s16 unk26; // sp3A
//     f32 unk28; // sp3C
//     f32 unk2C; // sp40
//     s16 unk30; // sp44
//     s16 unk32; // sp46
//     f32 unk34; // sp48;
//     f32 unk38; // sp4C;
//     s8  unk3C; // sp50;
//     s8  unk3D; // sp51;
//     u8  unk3E[2]; //
//     f32 unk40; // sp54
//     f32 unk44; // sp58
//     s8  unk48; // sp5C
//     u8  unk49; // sp5D
//     u8  unk4A[2];
//     f32 unk4C; // sp60
//     s8  unk50; // sp64
//     u8  pad51[3];
//     f32 unk54; // sp68
// } struct217;
//
// typedef struct {
//     s16 unk58; // sp6C
//     s16 unk5A; // sp6E
//     s16 unk5C; // sp70
//     s16 unk5E; // sp72
//     s32 unk60[3]; // sp74
//     f32 unk6C; // sp80
//     f32 unk70; // sp84
//     f32 unk74; // sp88
//     f32 unk78; // sp8C
//     f32 unk7C; // sp90
//     f32 unk80; // sp94
//     s16 unk84; // sp98
//     s16 unk86; // sp9A
//     s16 unk88; // sp9C
//     s16 unk8A; // sp9E
//     s16 unk8C; // spA0
//     s16 unk8E; // spA2
//     s16 unk90; // spA4
//     s16 unk92; // spA6
//     u8  unk94; // spA8;
//     u8  pad95[3];
//     f32 unk98; // spAC;
//     s16 unk9C; // spB0
//     s16 unk9E; // spB2
//     s32 unkA0; // spB4
// } struct218;
//
// void func_151DC484(struct00 *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
//     struct218 tmp2;
//     struct217 tmp;
//
//     tmp2.unk60[0] = arg0->unk0; // sp74.unk0 = (s32) arg0->unk0;
//     tmp2.unk60[1] = arg0->unk4; // sp74.unk4 = (s32) arg0->unk4;
//     tmp2.unk60[2] = arg0->unk8; // sp74.unk8 = (s32) arg0->unk8;
//
//     tmp2.unk5A = 0xFF;   // sp6E = 0xFF;
//     tmp2.unk5C = -0x40;  // sp70 = -0x40;
//     tmp2.unk84 = 8;      // sp98 = 8;
//     tmp2.unk86 = 6;      // sp9A = 6;
//     tmp2.unk58 = 0;      // sp6C = 0;
//     tmp2.unk88 = 3;      // sp9C = 3;
//     tmp2.unk8A = 0;      // sp9E = 0;
//     tmp2.unk5E = 0x28;   // sp72 = 0x28;
//     tmp2.unk8C = 0x3C;   // spA0 = 0x3C;
//     tmp2.unk8E = 0x28;   // spA2 = 0x28;
//
//     tmp2.unk6C = 3.0f;   // sp80 = 3.0f;
//     tmp2.unk90 = 100;     // spA4 = 0x64;
//     tmp2.unk92 = 100;     // spA6 = 0x64;
//     tmp2.unk9C = 16;      // spB0 = 0x10;
//     tmp2.unk9E = 15;      // spB2 = 0xF;
//     tmp2.unk70 = 2.0f;       // sp84 = 2.0f;
//     tmp2.unk74 = D_800AB4E4; // sp88 = D_800AB4E4;
//     tmp2.unk78 = D_800AB4E8; // sp8C = D_800AB4E8;
//     tmp2.unk7C = 8.0f;       // sp90 = 8.0f;
//     tmp2.unk80 = 5.0f;       // sp94 = 5.0f;
//     tmp2.unk98 = 1.0f;       // spAC = 1.0f; 0x3f80
//     tmp2.unk94 = arg2;       // spA8 = arg2;
//     tmp2.unkA0 = 0;      // spB4 = 0;
//
//     // func_15153F18(&sp6C, &sp74, arg1, arg3, arg4);
//     func_15153F18(&tmp2, &tmp2, arg1, arg3, arg4);
//
//     tmp.unk18[0] = arg0->unk0; // sp2C.unk0 = (s32) arg0->unk0;
//     tmp.unk18[1] = arg0->unk4; // sp2C.unk4 = (s32) arg0->unk4;
//     tmp.unk18[2] = arg0->unk8; // sp2C.unk8 = (s32) arg0->unk8;
//
//     tmp.unk24 = 0xC; // sp38 = 0xC;
//     tmp.unk12 = 0xFF;   // sp26 = 0xFF;
//     tmp.unk26 = 6;      // sp3A = 6;
//     tmp.unk10 = 0;      // sp24 = 0;
//     tmp.unk14 = -0x40;  // sp28 = -0x40;
//     tmp.unk16 = 0x1A;   // sp2A = 0x1A;
//     tmp.unk30 = 0x23;   // sp44 = 0x23;
//     tmp.unk32 = 0xF;    // sp46 = 0xF;
//     tmp.unk3C = 0x9B;   // sp50 = 0x9B;
//     tmp.unk3D = 0x64;   // sp51 = 0x64;
//     tmp.unk40 = 59.0f;  // sp54 = 59.0f;
//     tmp.unk44 = 59.0f;  // sp58 = 59.0f;
//     tmp.unk48 = 1;      // sp5C = 1;
//     tmp.unk50 = 1;      // sp64 = 1;
//     tmp.unk54 = 0.0f;   // sp68 = 0.0f;
//     tmp.unk28 = 7.0f;   // sp3C = 7.0f;
//     tmp.unk2C = 3.0f;   // sp40 = 3.0f;
//     tmp.unk34 = D_800AB4EC; // sp48 = D_800AB4EC;
//     tmp.unk38 = D_800AB4F0; // sp4C = D_800AB4F0;
//     tmp.unk49 = arg2;       // sp5D = arg2;
//     tmp.unk4C = D_800AB4F4; // sp60 = D_800AB4F4;
//     // func_15150178(&sp24, &sp2C, arg1, arg3, arg4);
//     func_15150178(&tmp, &tmp.unk18, arg1, arg3, arg4);
// }
