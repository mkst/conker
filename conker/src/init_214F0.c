#include <ultra64.h>

#include "functions.h"
#include "variables.h"

typedef struct {
    u32 w0;
    u32 w1;
} Cmd214;

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
    /* 0xC */ u8 data[0x20];
} LoopInfo_214F0;

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
} BookInfo_214F0;

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ LoopInfo_214F0 *unkC;
    /* 0x10 */ BookInfo_214F0 *unk10;
} SampleInfo_214F0;

typedef struct {
    /* 0x00 */ u8 pad0[0x18];
    /* 0x18 */ void *unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ SampleInfo_214F0 *unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ u8 pad30[0x8];
    /* 0x38 */ s32 unk38;
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ s32 unk40;
    /* 0x44 */ s32 unk44;
} Obj_214F0;

// struct21 *func_100214F0(struct42 *arg0, void *arg1, s32 arg2, void *struct21);
#pragma GLOBAL_ASM("asm/nonmatchings/init_214F0/func_100214F0.s")
// PERMUTER CANDIDATE: the reconstruction below is algorithmically byte-correct (all logic/structure
// match; the sp48 and sp5C blocks assemble identically) but is stuck at score ~1935 on a pervasive
// t3<->t4 register-rotation swap that begins at the sp54 block (obj is colored t4 where the target
// uses t3) and cascades through the rest. Not reachable by hand; needs the decomp-permuter.
#if 0
void func_10007DA0(void);
void *func_10021E4C(Cmd214 *gfx, struct42 *obj, s32 a2, s32 count, s16 arg4, s16 arg5, s32 flags);
void *func_100214F0(Obj_214F0 *arg0, s16 *arg1, s32 arg2, Cmd214 *arg3)
{
    Cmd214 *gfx;
    s16 sp7A;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    Obj_214F0 *obj;

    gfx = arg3;
    sp4C = 0;
    sp48 = 0;
    obj = arg0;
    if (arg2 == 0) {
        return gfx;
    }
    sp7A = 0;
    if (obj->unk28 == 0) {
        Cmd214 *slot = gfx++;
        slot->w0 = (*arg1 & 0xFFFFFF) | 0x02000000;
        slot->w1 = arg2 << 1;
        return gfx;
    }
    if ((((u32)obj->unk28->unk10 + 8) & 0x1FFFFFFF) >= 0x800001) {
        D_8003C8E0 = 0x0F000003;
        func_10007DA0();
    }
    {
        Cmd214 *slot = gfx++;
        slot->w0 = (obj->unk2C & 0xFFFFFF) | 0x0B000000;
        slot->w1 = ((u32)obj->unk28->unk10 + 8) & 0x1FFFFFFF;
    }
    sp48 = ((u32)obj->unk20 < (u32)(obj->unk38 + arg2)) && obj->unk24;
    if (sp48) {
        sp5C = obj->unk20 - obj->unk38;
    } else {
        sp5C = arg2;
    }
    if (obj->unk3C) {
        sp54 = 0x10 - obj->unk3C;
    } else {
        sp54 = 0;
    }
    sp74 = sp5C - sp54;
    if (sp74 < 0) {
        sp74 = 0;
    }
    sp70 = (sp74 + 0xF) >> 4;
    sp6C = sp70 * 9;
    if (sp48) {
        gfx = func_10021E4C(gfx, (struct42 *)obj, sp74, sp6C, *arg1, sp7A, obj->unk40);
        if (obj->unk3C) {
            *arg1 = *arg1 + (obj->unk3C << 1);
        } else {
            *arg1 = *arg1 + 0x20;
        }
        obj->unk3C = obj->unk1C & 0xF;
        obj->unk44 = (s32)obj->unk28->unk0 + ((u32)obj->unk1C >> 4) * 9 + 9;
        obj->unk38 = obj->unk1C;
        sp50 = *arg1;
        if (arg2 > sp5C) {
            do {
                arg2 = arg2 - sp5C;
                sp58 = (((sp70 + 1) << 5) + sp50 + 0x10) & -0x20;
                sp50 = sp50 + (sp5C << 1);
                if (obj->unk24 != -1 && obj->unk24 != 0) {
                    obj->unk24 = obj->unk24 - 1;
                }
                if ((u32)arg2 < (u32)(obj->unk20 - obj->unk1C)) {
                    sp5C = arg2;
                } else {
                    sp5C = obj->unk20 - obj->unk1C;
                }
                sp74 = sp5C + obj->unk3C - 0x10;
                if (sp74 < 0) {
                    sp74 = 0;
                }
                sp70 = (sp74 + 0xF) >> 4;
                sp6C = sp70 * 9;
                gfx = func_10021E4C(gfx, (struct42 *)obj, sp74, sp6C, sp58, sp7A, obj->unk40 | 2);
                {
                    Cmd214 *slot = gfx++;
                    slot->w0 = (((obj->unk3C << 1) + sp58) & 0xFFFFFF) | 0x0A000000;
                    slot->w1 = ((sp50 & 0xFFFF) << 16) | ((sp5C << 1) & 0xFFFF);
                }
            } while (arg2 > sp5C);
        }
        obj->unk3C = (obj->unk3C + arg2) & 0xF;
        obj->unk38 = obj->unk38 + arg2;
        obj->unk44 = obj->unk44 + sp70 * 9;
        return gfx;
    } else {
        sp5C = sp70 << 4;
        sp68 = (obj->unk44 + sp6C) - ((s32)obj->unk28->unk0 + obj->unk28->unk4);
        if (sp68 < 0) {
            sp68 = 0;
        }
        sp60 = (sp68 / 9) << 4;
        if (sp5C + sp54 < sp60) {
            sp60 = sp5C + sp54;
        }
        sp6C = sp6C - sp68;
        if (sp60 - (sp60 & 0xF) < arg2) {
            sp4C = 1;
            gfx = func_10021E4C(gfx, (struct42 *)obj, sp5C - sp60, sp6C, *arg1, sp7A, obj->unk40);
            if (obj->unk3C) {
                *arg1 = *arg1 + (obj->unk3C << 1);
            } else {
                *arg1 = *arg1 + 0x20;
            }
            obj->unk3C = (obj->unk3C + arg2) & 0xF;
            obj->unk38 = obj->unk38 + arg2;
            obj->unk44 = obj->unk44 + sp70 * 9;
        } else {
            obj->unk3C = 0;
            obj->unk44 = obj->unk44 + sp70 * 9;
        }
        if (sp60 != 0) {
            obj->unk3C = 0;
            if (sp4C) {
                sp64 = ((sp54 + sp5C) - sp60) << 1;
            } else {
                sp64 = 0;
            }
            {
                Cmd214 *slot = gfx++;
                slot->w0 = ((*arg1 + sp64) & 0xFFFFFF) | 0x02000000;
                slot->w1 = sp60 << 1;
            }
        }
        return gfx;
    }
}

#endif

s32 func_10021C40(Obj_214F0 *arg0, s32 arg1, void *arg2)
{
    switch (arg1) {
    case 5:
        arg0->unk28 = arg2;
        arg0->unk44 = arg0->unk28->unk0;
        arg0->unk38 = 0;
        arg0->unk28->unk4 = arg0->unk28->unk4 / 9 * 9;
        if (((u32)arg0->unk28->unk10 & 0xFF000003) != 0x80000000) {
            arg0->unk24 = 0;
            arg0->unk1C = arg0->unk20 = arg0->unk24;
            break;
        } else {
            arg0->unk2C = arg0->unk28->unk10->unk0 * 2 * arg0->unk28->unk10->unk4 * 8;
        }
        if (arg0->unk28->unkC != 0) {
            arg0->unk1C = arg0->unk28->unkC->unk0;
            arg0->unk20 = arg0->unk28->unkC->unk4;
            arg0->unk24 = arg0->unk28->unkC->unk8;
            bcopy(arg0->unk28->unkC->data, arg0->unk18, 0x20);
        } else {
            arg0->unk24 = 0;
            arg0->unk1C = arg0->unk20 = arg0->unk24;
        }
        break;
    case 4:
        arg0->unk3C = 0;
        arg0->unk40 = 1;
        arg0->unk38 = 0;
        if (arg0->unk28 != 0) {
            arg0->unk44 = arg0->unk28->unk0;
            arg0->unk24 = 0;
        }
        break;
    default:
        break;
    }
    return 0;
}

// ? func_10021C40(void *arg0, s32 arg1, s32 arg2) {
//     s32 temp_s0;
//     s32 temp_s0_2;
//     void *temp_t3;
//     void *temp_t3_2;
//
//     if (arg1 != 4) {
//         if (arg1 != 5) {
//
//         } else {
//             arg0->unk28 = arg2;
//             arg0->unk44 = (s32) *arg0->unk28;
//             arg0->unk38 = 0;
//             temp_t3 = arg0->unk28;
//             temp_t3->unk4 = (s32) (((s32) temp_t3->unk4 / 9) * 9);
//             if ((arg0->unk28->unk10 & 0xFF000003) != 0x80000000) {
//                 arg0->unk24 = 0;
//                 temp_s0 = arg0->unk24;
//                 arg0->unk20 = temp_s0;
//                 arg0->unk1C = temp_s0;
//             } else {
//                 temp_t3_2 = arg0->unk28->unk10;
//                 arg0->unk2C = (s32) (temp_t3_2->unk0 * 2 * temp_t3_2->unk4 * 8);
//                 if (arg0->unk28->unkC != 0) {
//                     arg0->unk1C = (s32) *arg0->unk28->unkC;
//                     arg0->unk20 = (s32) arg0->unk28->unkC->unk4;
//                     arg0->unk24 = (s32) arg0->unk28->unkC->unk8;
//                     bcopy(arg0->unk28->unkC + 0xC, arg0->unk18, 0x20);
//                 } else {
//                     arg0->unk24 = 0;
//                     temp_s0_2 = arg0->unk24;
//                     arg0->unk20 = temp_s0_2;
//                     arg0->unk1C = temp_s0_2;
//                 }
//             }
//         }
//     } else {
//         arg0->unk3C = 0;
//         arg0->unk40 = 1;
//         arg0->unk38 = 0;
//         if (arg0->unk28 != 0) {
//             arg0->unk44 = (s32) *arg0->unk28;
//             arg0->unk24 = 0;
//         }
//     }
//     return 0;
// }

void *func_10021E4C(Cmd214 *gfx, struct42 *obj, s32 a2, s32 count, s16 arg4, s16 arg5, s32 flags)
{
    s32 align;
    s32 res;

    if (count > 0) {
        res = ((s32 (*)(s32, s32, s32))obj->unk30)(obj->unk44, count, obj->unk34);
        if (res == 0) {
            obj->unk80 = 1;
            obj->unk62 = 0;
            obj->unk40 = 0;
            return gfx;
        }
        align = res & 7;
        count = count + align;
        {
            Cmd214 *_a = gfx++;
            _a->w0 = ((((count - (count & 7)) + 8) & 0xFFF) << 12) | 0x04000000 | (arg5 & 0xFFF);
            _a->w1 = res - align;
        }
    } else {
        align = 0;
    }
    if (flags & 2) {
        Cmd214 *_a = gfx++;
        _a->w0 = 0x0F000000;
        _a->w1 = obj->unk18 & 0x1FFFFFFF;
    }
    {
        Cmd214 *_a = gfx++;
        _a->w0 = (obj->unk14 & 0x1FFFFFFF & 0x00FFFFFF) | 0x01000000;
        _a->w1 = ((flags & 0xF) << 28) | (((a2 << 1) & 0xFFF) << 16) | ((align & 0xF) << 12) | (arg4 & 0xFFF);
    }
    obj->unk40 = 0;
    return gfx;
}
