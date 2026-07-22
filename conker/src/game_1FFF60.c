#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_151D3354(struct224 *arg0);
void func_151D3308(struct224 *arg0);

// structs.h's struct224 is missing several fields used by this file (0x18, 0x1D,
// 0x2A) and types 0x34 as three loose words, so a file-local view is declared
// here rather than editing the shared header.
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Vec1FFF60;

typedef struct Struct1FFF60 Struct1FFF60;

struct Struct1FFF60 {
    /* 0x00 */ u8  pad0[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8  unk14;
    /* 0x15 */ u8  pad15[0x3];
    /* 0x18 */ u8  unk18;
    /* 0x19 */ u8  pad19[0x4];
    /* 0x1D */ u8  unk1D;
    /* 0x1E */ u8  pad1E[0x2];
    /* 0x20 */ s16 unk20;
    /* 0x22 */ u8  pad22[0x2];
    /* 0x24 */ Struct1FFF60 *unk24;
    /* 0x28 */ union {
                   s32 w;
                   struct {
                       u8 unk0;
                       u8 unk1;
                       s8 unk2;
                       u8 unk3;
                   } b;
               } unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ Struct1FFF60 *unk30;
    /* 0x34 */ Vec1FFF60 unk34;
    /* 0x40 */ Struct1FFF60 *unk40;
    /* 0x44 */ Struct1FFF60 *unk44;
};

Struct1FFF60 *func_15167A68(s32, s32, s32, s32, u8, s32);

void func_151D2AB0(s32 arg0) {
    u32 tmp;

    (&D_800E0950)[arg0] = (&D_800E0950)[arg0] + 1;

    if ((&D_800E0950)[arg0] < 2) {
        D_800E0990[arg0] = func_1502B5C8(&tmp, 2, 9, D_800AB140[arg0]);
        D_800E0968[arg0] = tmp >> 4;
    }
}

void func_151D2B4C(s32 arg0) {
    if ((&D_800E0950)[arg0] != 0) {
        (&D_800E0950)[arg0] = (&D_800E0950)[arg0] - 1;
        if ((&D_800E0950)[arg0] == 0) {
            func_100043B4(D_800E0990[arg0], 4);
        }
    }
}

Struct1FFF60 *func_151D2BA4(void *arg0, Vec1FFF60 *arg1, s32 arg2, u8 arg3, s32 arg4) {
    Struct1FFF60 *tmp;

    tmp = func_15167A68(0x3D, arg4, arg2 + 0x48, 1, arg3, 1);
    if (tmp == NULL) {
        return NULL;
    }

    memcpy(&tmp->unk10, arg0, 0x24);
    tmp->unk34 = *arg1;

    func_151D3308(tmp);
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2C40.s")

void func_151D2DAC(struct102 *arg0) {
    func_151D3354(arg0);
}

void func_151D2DCC(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516972C(tmp->unk2C);
    }
    func_15169804(tmp);
}

void func_151D2E14(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516979C(tmp->unk2C);
    }
    func_15169824(tmp);
}

// NON-MATCHING: best 3 of 41 instructions differ (instruction order/shape exact).
// In the arg2 == 0x2D arm the target holds arg1->unk0 in v0 and arg0->unk10 in
// v1; every variant tried puts them in the opposite pair (or spills one to a2).
// The arg2 == 0 arm matches exactly with the four locals below.
void func_151D2E5C(Struct1FFF60 *arg0, struct223 *arg1, u8 arg2) {
    Struct1FFF60 *new_var;
    s32 tmp0;
    s32 tmp1;
    s32 tmp2;
    s32 tmp3;

    new_var = arg0;
    if (arg2 == 0) {
        tmp0 = new_var->unk10;
        tmp1 = arg1->unk0;
        tmp2 = new_var->unk14;
        tmp3 = arg1->unk4.ub;
        if ((tmp0 == tmp1) || (tmp3 == tmp2)) {
            func_1516972C(new_var);
        }
    } else if (arg2 == 0x2D) {
        if (new_var->unk10 == arg1->unk0) {
            arg0->unk10 = arg1->unk4.w;
            arg0->unk14 = arg1->unk9;
        } else if (new_var->unk10 == arg1->unk4.w) {
            new_var->unk10 = arg1->unk0;
            new_var->unk14 = arg1->unk8;
        }
    }
}

Struct1FFF60 *func_151D2F00(void *arg0, s32 arg1, u8 arg2, s32 arg3) {
    Struct1FFF60 *tmp;

    tmp = func_15167A68(0x3E, arg3, arg1 + 0x30, 1, arg2, 1);
    if (tmp == NULL) {
        return NULL;
    }

    memcpy(&tmp->unk10, arg0, 0x10);
    tmp->unk20 = 0;
    tmp->unk24 = NULL;
    tmp->unk28.w = 0;
    tmp->unk18 &= ~2;
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2F90.s")

// NON-MATCHING: best 3 of 49 instructions differ; all registers and all other
// instructions are exact. The target rotates the loop (move s0,s1 / bnezl s1 /
// duplicated "lb v0,0x2a(s0)" in the likely-delay slot); every loop form tried
// (while, do/while on cur, do/while on next, for) sinks "move s0,s1" into a
// plain "bnez s1" delay slot instead.
extern void (*D_8008FC48[])(Struct1FFF60 *, Vec1FFF60 *);
extern void (*D_8008FC5C[])(Struct1FFF60 *);
void func_1514EDF0(Struct1FFF60 *, s32);

void func_151D3130(Struct1FFF60 *arg0) {
    void (*func)(Struct1FFF60 *);
    Struct1FFF60 *cur;

    func = D_8008FC5C[arg0->unk1D];
    if (func != NULL) {
        func(arg0);
    }

    cur = arg0->unk24;
    while (cur != NULL) {
        Struct1FFF60 *next;
        next = cur->unk40;
        if (cur->unk28.b.unk2 != -1) {
            D_8008FC48[cur->unk28.b.unk2](cur, &cur->unk34);
        }
        cur->unk2C = 0;
        func_1516972C(cur);
        cur = next;
    }

    func_1514EDF0(arg0, arg0->unk10);
}

void func_151D31F4(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169804(arg0);
}

void func_151D3220(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169824(arg0);
}

// NON-MATCHING: best 2 of 47 instructions differ; every register is exact.
// After the func_151D33FC call the target keeps "lbu a2,0x23(sp)" as a real
// instruction and fills the following "b" delay slot by duplicating the join's
// "lbu t1,0x1d(a0)"; this version sinks the a2 reload into that delay slot
// instead (one instruction shorter). Restructuring as a switch made it worse.
extern void (*D_8008FC64[])(Struct1FFF60 *, struct223 *, u8);
void func_151D33FC(struct224 *, struct223 *);

void func_151D324C(Struct1FFF60 *arg0, struct223 *arg1, u8 arg2) {
    void (*func)(Struct1FFF60 *, struct223 *, u8);

    if (arg2 == 0) {
        func_151D33FC(arg0, arg1);
    dummy_label:;
    } else if (arg2 == 0x2D) {
        if (arg0->unk10 == arg1->unk0) {
            arg0->unk10 = arg1->unk4.w;
            arg0->unk14 = arg1->unk9;
        } else if (arg0->unk10 == arg1->unk4.w) {
            arg0->unk10 = arg1->unk0;
            arg0->unk14 = arg1->unk8;
        }
    }

    func = D_8008FC64[arg0->unk1D];
    if (func != NULL) {
        func(arg0, arg1, arg2);
    }
}

void func_151D3308(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;

    temp_v0 = arg0->unk30;
    if (temp_v0 != 0) {
        arg0->unk40 = temp_v0->unk24;
        temp_v1 = temp_v0->unk24;
        if (temp_v1 != 0) {
            temp_v1->unk44 = arg0;
        } else {
            temp_v0->unk28 = arg0;
        }
        arg0->unk44 = 0;
        temp_v0->unk24 = arg0;
        temp_v0->unk20 += 1;
        arg0->unk30 = temp_v0;
    }
}

void func_151D3354(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;
    struct224 *temp_v2;

    if (arg0->unk30) {
        temp_v0 = arg0->unk30;
        if (temp_v1 = arg0->unk44) {
            temp_v1->unk40 = arg0->unk40;
        } else {
            temp_v0->unk24 = arg0->unk40;
        }

        if (temp_v2 = arg0->unk40) {
            temp_v2->unk44 = arg0->unk44;
        } else {
            temp_v0->unk28 = arg0->unk44;
        }

        temp_v0->unk20 -= 1;
    }
}

void func_151D33B8(struct224 *arg0) {
    while (arg0->unk20 > 0) {
        func_1516972C(arg0->unk24);
    };
}

void func_151D33FC(struct224 *arg0, struct223 *arg1) {
    s32 tmp0;
    s32 tmp1;
    s32 tmp2;
    s32 tmp3;

    tmp0 = arg0->unk10;
    tmp1 = arg0->unk14;
    tmp2 = arg1->unk4.ub;
    tmp3 = arg1->unk0;
    if ((tmp0 == tmp3) || (tmp2 == tmp1)) {
        func_1516972C(arg0);
    }
}

// NON-MATCHING (best 290): body is byte-correct but the target fuses the struct-copy
// destination and the call's first arg into a0; functions.h declares func_15169260's
// first param as s32, forcing a pointer->s32 conversion (move a0,v0). BLOCKED on
// func_15169260's real signature (pointer first param). Revisit after game_1944C0.
//   void func_151D343C(s32 arg0, u8 arg1) {
//       s32 sp1C = D_800AB168[0];
//       func_15169260(&sp1C, 1, arg0, arg1);  // needs pointer-typed param1
//   }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D343C.s")
