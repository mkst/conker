// #include <ultra64.h>

#include <libaudio.h>
#include <os_internal.h>
#include <ultraerror.h>

#include "functions.h"
#include "variables.h"

void alSeqFileNew(ALSeqFile *arg0, u8 *base) {
    s32 offset = base;
    s32 i;

    for (i = 0; i < arg0->seqCount; i++)
    {
        arg0->seqArray[i].offset += offset;
    }
}

// non-vanila alBnkfNew
void func_10012934(ALBankFile *file, u8 *table, s32 arg2) {
    s32 offset = file;
    s32 woffset = table;
    s32 sp1C = arg2;

    s32 i;

    ALFailIf(file->revision != AL_BANK_VERSION, ERR_ALBNKFNEW);

    for (i = 0; i < file->bankCount; i++) {
        file->bankArray[i] = (ALBank *)((u8 *)file->bankArray[i] + offset) ; // (s32)sp24; // ??
        if (file->bankArray[i] != 0) {
            func_10012A28(file->bankArray[i], offset, woffset, sp1C);
        }
    }
}

void func_10012A28(struct121 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    s32 tmp;

    if (arg0->unk2 != 0) {
        return;
    }

    arg0->unk2 = 1;

    if (arg0->unk8 != 0) {
        arg0->unk8 += arg1;
        func_10012B84(arg0->unk8, arg3);
    }

    for (i = 0; i < arg0->unk0; i ++) {
        if (arg0->unkC[i] != 0) {
            if (i == 0) {
                arg0->unkC[i] += arg1;
                func_10012BD0(arg0->unkC[i], arg3);
            } else {
                tmp = (arg3 & -8) << 5;
                arg0->unkC[i] += tmp;
            }
        }
    }
}

void func_10012B84(struct11 *arg0, s32 arg1) {
    if (arg0->unk3) {
        return;
    }
    arg0->unk3 = 1;
    arg1 = (0xFFFFFFF8 & arg1) << 5;
    arg0->unk10[0] += arg1;
}

void func_10012BD0(struct11 *arg0, s32 arg1) {
    s32 i;

    if (arg0->unk3 != 0) {
        return;
    }
    arg0->unk3 = 1;

    arg1 = (arg1 & -8) << 5;

    for (i = 0; i < arg0->unkE; i++)
    {
        arg0->unk10[i] += arg1;
    }
}

void func_10012C5C(struct9 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unkE) {
        return;
    }
    arg0->unkE = 1;
    arg0->unk0 += arg1;
    arg0->unk4 += arg1;
    arg0->unk8 += arg1;
    func_10012CFC(arg0->unk8, arg1, arg2);
}

void func_10012CFC(struct12 *arg0, s32 arg1, s32 arg2) {
    arg0->unk9 = 1;
    arg0->unk0 += arg2;
    if (arg0->unk8 == 0) {
        arg0->unk10 += arg1;
        if (arg0->unkC != 0) {
            arg0->unkC += arg1;
        }
        arg0->unk14 = 0;
    } else if ((arg0->unk8 == 1) && (arg0->unkC != 0)) {
        arg0->unkC = (s32) (arg0->unkC + arg1);
    }
}

f32 func_10012D80(u8 arg0) {
    f32 sp4 = 1.0309929847717285f;
    f32 sp0 = 1.0f;

    while (arg0)
    {
        if (arg0 & 1) {
            sp0 *= sp4;
        }
        sp4 *= sp4;
        arg0 = (u32)arg0 >> 1;
    }
    return sp0;
}

s32 func_10012E04(s32 *arg0, f32 *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    struct124 *sp2C;
    s32 ret;

    ret = 0;
    if (arg5 == 0) {
        return 0;
    }
    if (D_80042800 != 0) {
        sp2C = D_80042800;
        D_80042800 = D_80042800->unk0;
        sp2C->unk4 = arg2;
        *arg0 = sp2C;
        ret = arg5 << 0xE;
        switch (arg2) {
            case 1:
                sp2C->unk24 = 0;
                sp2C->unk22 = 0x103 - arg3;
                sp2C->data.i.unk0 = arg4 >> 1;
                sp2C->data.i.unk1 = 0x7F - sp2C->data.i.unk0;
                *arg1 = sp2C->data.i.unk1;
                break;
            case 128:
                sp2C->data.f.unk0 = func_10012D80(arg4);
                sp2C->unk24 = 0;
                sp2C->unk22 = 0x103 - arg3;
                *arg1 = 1.0f;
                break;
            default:
                break;
        }
    }
    return ret;
}

s32 func_10012F94(struct124 *arg0, f32 *arg1) {
    f32 sp2C;
    struct124 *sp28;
    s32 ret;

    sp28 = arg0;
    ret = 16000;

    switch (sp28->unk4)
    {
        case 1: // guess this means union is u8s
            sp28->unk24 = (u16)sp28->unk24 + 1;
            if ((u16)sp28->unk24 >= (u16)sp28->unk22) {
                sp28->unk24 = 0;
            }
            sp2C = (f32)(u16)sp28->unk24 / (f32) (u16)sp28->unk22;
            sp2C = sinf(sp2C * 6.2831854820251465f); // 2 * PI
            sp2C = sp28->data.i.unk0 * sp2C;
            *arg1 = sp28->data.i.unk1 + sp2C;
            break;

        case 128: // guess this means float?
            sp28->unk24 = (u16)sp28->unk24 + 1;
            if ((u16)sp28->unk24 >= (u16)sp28->unk22) {
                sp28->unk24 = 0;
            }
            sp2C = (f32)(u16) sp28->unk24 / (f32)(u16) sp28->unk22;
            sp2C = sinf(sp2C * 6.2831854820251465f) * sp28->data.f.unk0;
            *arg1 = alCents2Ratio(sp2C);
            break;
        default:
            break;
    }

    return ret;
}

void func_100131D8(s32 *arg0) {
    *arg0 = (s32*)D_80042800;
    D_80042800 = arg0;
}

void func_100131FC(struct13 *arg0, s32 arg1) {
    s32 *sp24;
    s32 i;

    D_80042804 = alHeapDBAlloc(0, 0, arg0->unkC, arg1, 0x2C);
    D_80042800 = (s32) D_80042804;
    D_80042800 = (s32) D_80042804; // ???
    sp24 = D_80042804;

    for (i = 0; i < (arg1 - 1); i++) {
        *sp24 = (i * 0x2C) + D_80042804 + 0x2C; // is this an array?
        sp24 = *sp24;
    }
    *sp24 = 0;
    arg0->unk10 = func_10012E04;
    arg0->unk14 = func_10012F94;
    arg0->unk18 = func_100131D8;
}
