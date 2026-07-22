#include <ultra64.h>
#include "functions.h"
#include "variables.h"


struct249 *func_1509B704(s16 arg0);
void func_1509C120(void);
void func_1509C3A0(void);
void *allocate_memory(s32, s32, s32, s32);
struct248 *func_1509B950(struct248 *arg0);

// structs.h's struct249 is missing the "prev" link at 0x1C, and struct250 types
// its head/tail as struct249*. Declare local equivalents instead of editing the
// shared headers.
typedef struct Node249 Node249;
struct Node249 {
    u16 unk0;
    u8  pad2[0x16];
    Node249 *next;
    Node249 *prev;
};

typedef struct {
    u16 length;
    u8  pad2[0x2];
    Node249 *head;
    Node249 *tail;
} List250;

#define LIST249 (*(List250 *)&D_800D2F48)


void func_1509B4A0(s32 arg0, s32 arg1) {
    s32 i;

    if(0) {};

    D_8003C8E0 = 0x5000000;
    func_1509C120();
    func_15096970();

    for (i = 0; i < D_800D2F3C; i++) {
        if (func_1509CBD4(D_800D2F40[i])) {
            func_1509B5AC(D_800D2F40[i], arg1);
        }
    }

    func_1509C3A0();
    D_8003C8E0 = 0;
}

u16 *func_1509B570(s32 arg0) {
    struct248 *temp_v0;
    u16 res;

    temp_v0 = func_1509B704(arg0);
    if (temp_v0 != 0) {
        res = temp_v0->unkA;
        return (s32)temp_v0 + (res & 0xFFFF);
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509B5AC.s")

struct249 *func_1509B704(s16 arg0) {
    struct249 *tmp;
    s32 mask = 0xFFFF03FF;
    s32 i;

    tmp = D_800D2F48.unk4;
    for (i = 0; i < D_800D2F48.length; i++) {
        if (arg0 == (tmp->unk0 & mask)) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}


void func_1509B764(Node249 *arg0) {
    if (LIST249.length == 1) {
        LIST249.head = NULL;
        LIST249.tail = NULL;
    } else {
        if (arg0 == LIST249.head) {
            LIST249.head = arg0->next;
            arg0->next->prev = NULL;
        } else {
            arg0->prev->next = arg0->next;
        }
        if (arg0 == LIST249.tail) {
            LIST249.tail = arg0->prev;
            arg0->prev->next = NULL;
        } else {
            arg0->next->prev = arg0->prev;
        }
    }
    func_10004074(arg0);
    LIST249.length--;
}

void func_1509B810(Node249 *arg0) {
    Node249 *v0;
    s32 key;
    s32 i;
    s32 mask = 0xFFFF03FF;

    v0 = LIST249.tail;
    key = arg0->unk0 & mask;
    if (LIST249.length == 0) {
        LIST249.head = arg0;
        LIST249.tail = arg0;
        arg0->next = NULL;
        arg0->prev = NULL;
        LIST249.length++;
        return;
    }
    for (i = 0; i < LIST249.length; v0 = v0->prev) {
        i++;
        if ((v0->unk0 & mask) < key) {
            if (v0 == LIST249.tail) {
                arg0->prev = v0;
                arg0->next = NULL;
                v0->next = arg0;
                LIST249.tail = arg0;
                LIST249.length++;
                return;
            }
            arg0->prev = v0;
            arg0->next = v0->next;
            v0->next->prev = arg0;
            v0->next = arg0;
            LIST249.length++;
            return;
        }
    }
    v0 = LIST249.head;
    LIST249.head = arg0;
    arg0->prev = NULL;
    arg0->next = v0;
    v0->prev = arg0;
    LIST249.length++;
}

void func_1509B8FC(s16 arg0) {
    struct248 *temp_v0;
    s16 sp18[2];

    temp_v0 = func_1502B5C8(&sp18, 2, 20, arg0);
    temp_v0->unk0 |= arg0;
    temp_v0->unk2 = D_800BE9F0;
    func_1509B950(temp_v0);
}

struct248 *func_1509B950(struct248 *arg0) {
    struct248 *new_var;
    s32 pad;

    pad = 8 - (((s32)arg0 + arg0->unk4) & 7);
    arg0->unkA = arg0->unk4 + pad;
    arg0->unk4 = arg0->unkA + arg0->unk6;
    arg0->unk4 = (arg0->unk4 - (((s32)arg0 + arg0->unk4) & 7)) + 8;

    new_var = allocate_memory(arg0->unk4, 0xFF, 2, 0);
    if (new_var == NULL) {
        while (1) {}
    }

    bcopy(arg0, new_var, arg0->unk4);
    bzero((u8 *)new_var + new_var->unkA, new_var->unk6);
    func_10004074(arg0);
    return new_var;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BBA0.s")

//
#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BE40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509BFB0.s")

// PERMUTER CANDIDATE (best 39, pure stack-offset near-miss): logic byte-correct,
// registers all match; only the {saved@0x34, sp38@0x38} local block lands 8 bytes
// too high (saved@0x3C, sp38@0x40). Target reserves an 8-byte gap at frame top
// (0x48-0x4F) that no accessed local produces. Reconstruction:
//   void *sp38[4]; void *saved; s32 s3, i;
//   s3 = func_150ADA20() & 3; saved = D_800D2E4C;
//   if (saved != 0) { if ((func_150ADA20() & 4) == 0) return; }
//   for (i=0;i<=s3;i++) sp38[i] = allocate_memory(0x1B,0xFF,2,0);
//   for (i=0;i<=s3;i++) if (i != s3) func_10004074(sp38[i]);
//   D_800D2E4C = sp38[s3];
//   if (saved != 0) { bcopy(saved, D_800D2E4C, 0x1B); func_10004074(saved); }
// permuter NO ZERO, best 39
#pragma GLOBAL_ASM("asm/nonmatchings/game_C8950/func_1509C120.s")

void func_1509C228(void) {
    if ((D_800D2E68 & 8) || (D_800D2E4C->unkF & 1)) {
        func_1509BFB0(2, 0x2000, 0x36, 0, 1);
        return;
    }
    func_1509BFB0(2, 0x2000, 0x36, 1, 1);
}

s32 func_1509C2A4(void) {
    s32 temp_v0 = D_800BE9F0;
    if ((temp_v0 == 3) ||
        (temp_v0 == 5) ||
        (temp_v0 == 9) ||
        (temp_v0 == 13) ||
        (temp_v0 == 15) ||
        (temp_v0 == 17) ||
        (temp_v0 == 21) ||
        (temp_v0 == 22) ||
        (temp_v0 == 24) ||
        (temp_v0 == 26) ||
        (temp_v0 == 29) ||
        (temp_v0 == 31) ||
        (temp_v0 == 32) ||
        (temp_v0 == 33) ||
        (temp_v0 == 34) ||
        (temp_v0 == 36) ||
        (temp_v0 == 37) ||
        (temp_v0 == 42) ||
        (temp_v0 == 43) ||
        (temp_v0 == 45) ||
        (temp_v0 == 48) ||
        (temp_v0 == 51) ||
        (temp_v0 == 52) ||
        (temp_v0 == 56) ||
        (temp_v0 == 62) ||
        (temp_v0 == 63) ||
        (D_800D2E44 != 0)
      ) {
        return 0;
    }
    return 1;
}

void func_1509C3A0(void) {
    if ((D_800D2E43 != 0) && (D_800D2E44 == 0) && (func_1509C2A4() != 0)) {
        D_800BE3DF = (s8) D_800BE9F4;
        if (D_800C35C4 == 0) {
            func_15007718(D_8008FDA8);
        }
        D_800D2E43 = 0;
    }
}


s32 func_1509C414(s32 arg0) {
    return ((D_800D2E4C->unk3 & 1) << 0xA) + arg0 + 0x1400;
}
