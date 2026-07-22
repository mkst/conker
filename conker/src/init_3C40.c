#include <ultra64.h>

#include "functions.h"
#include "variables.h"

// File-local view of the allocator block header (struct54 in structs.h declares
// unkC/unk10 as s32, but this function walks them as pointers).
typedef struct L54 {
    /* 0x00 */ struct L54 *unk0;   // next physical block
    /* 0x04 */ struct L54 *unk4;   // prev physical block
    /* 0x08 */ u32 unk8;           // tag<<24 | size
    /* 0x0C */ struct L54 *unkC;   // free-list forward
    /* 0x10 */ struct L54 *unk10;  // free-list backward
} L54;


s32 allocate_memory(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_10003C6C(arg0, arg1, arg2, 0, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_3C40/func_10003C6C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/init_3C40/func_10004074.s")
// PERMUTER NO ZERO, best 476 (was 1301). Allocator free() with prev/next
// physical coalescing + sorted free-list re-insertion. Control flow matches the
// target exactly. Permuter (~30k iters, 2 runs + chain) plateaued at 370 in its
// isolated harness / 476 in full build; never zeroed. Two permuter-found tweaks
// help and are folded into the reconstruction below:
//   (1) `volatile int mask` forces mask to a spill slot (matches target)  -> 741
//   (2) re-reading `((L54 *)D_800380B8) == NULL` in the !coalesced guard    -> 476
// Remaining diff is the documented coupled reg/frame cascade, not reachable from
// C: IDO copies arg0 into a2 (frame 0x30, node->v1, mask@0x1c); this recon gets
// arg0->a3 (frame 0x38, node->a2), and the a2-vs-a3 choice cascades through the
// whole body (node/cur reg-numbering) plus higher spill-slot packing.
// void func_10004074(void *arg0) {
//     L54 *node; L54 *cur; volatile int mask; s32 coalesced; L54 *prev; L54 *next;
//     if (arg0 == NULL) { return; }
//     node = (L54 *)((u8 *)arg0 - 0xC);
//     cur = node;
//     coalesced = 0;
//     mask = osSetIntMask(1);
//     *(u8 *)&node->unk8 = 0;
//     prev = node->unk4;
//     if ((prev != NULL) && ((prev->unk8 >> 24) == 0)) {
//         next = node->unk0; cur = prev; coalesced = 1;
//         prev->unk0 = next;
//         prev->unk8 = prev->unk8 + node->unk8 + 0xC;
//         if (next != NULL) { next->unk4 = cur; }
//     }
//     next = cur->unk0;
//     if ((next != NULL) && ((next->unk8 >> 24) == 0)) {
//         prev = next->unk0; cur->unk0 = prev; coalesced = 1;
//         cur->unk8 = cur->unk8 + next->unk8 + 0xC;
//         if (prev != NULL) { prev->unk4 = cur; }
//         prev = next->unkC; cur->unkC = prev;
//         if (prev != NULL) { prev->unk10 = cur; }
//         prev = next->unk10;
//         if (prev == NULL) { D_800380B8 = (struct54 *)cur; cur->unk10 = NULL; }
//         else if (prev != cur) { cur->unk10 = prev; if (prev != NULL) { prev->unkC = cur; } }
//     }
//     if (!coalesced) {
//         prev = (L54 *)D_800380B8;
//         if (((L54 *)D_800380B8) == NULL) { cur->unkC = NULL; cur->unk10 = NULL; D_800380B8 = (struct54 *)cur; }
//         else if (cur < prev) { cur->unkC = prev; cur->unk10 = NULL; prev->unk10 = cur; D_800380B8 = (struct54 *)cur; }
//         else {
//             for (;;) {
//                 next = prev->unkC;
//                 if (next == NULL) { cur->unkC = NULL; cur->unk10 = prev; prev->unkC = cur; break; }
//                 if (cur < next) { cur->unkC = next; cur->unk10 = prev; next->unk10 = cur; prev->unkC = cur; break; }
//                 prev = next;
//             }
//         }
//     }
//     if (cur->unkC == NULL) { D_800380BC = (s32 *)cur; }
//     if ((u32)D_8002AC30 < cur->unk8) { D_8002AC30 = cur->unk8; D_800380B0 = (struct54 *)cur; }
//     osSetIntMask(mask);
// }

void func_10004250(void) {
    s32 temp_v0;
    u32 temp_v1;
    OSIntMask mask;
    struct54 *phi_s0;

    mask = osSetIntMask(1);

    if (phi_s0 = D_800380B4) {
        do {
            temp_v1 = phi_s0->unk8;
            temp_v0 = temp_v1 >> 0x18;
            if (2 == temp_v0) {
                func_10004074(&phi_s0->unkC);
            } else if ((temp_v0 == 3) || (temp_v0 == 4)) {
                phi_s0->unk8 = ((temp_v0 - 1) << 0x18) | (temp_v1 & 0xFFFFFF);
            }
        } while(phi_s0 = phi_s0->unk0);
    }
    osSetIntMask(mask);
}

void func_10004308(void) {
    u32 temp_t6;
    struct54 *phi_s0;
    OSIntMask mask;

    mask = osSetIntMask(1);
    phi_s0 = D_800380B4;
    func_15042D50();

    if (phi_s0) {
        do {
            temp_t6 = phi_s0->unk8 >> 24;
            if (temp_t6 == 1 || temp_t6 == 2 || temp_t6 == 3 || temp_t6 == 4) {
                func_10004074(&phi_s0->unkC);
            }
        }
        while (phi_s0 = phi_s0->unk0);
    }
    osSetIntMask(mask);
}

void func_100043B4(s32 *arg0, u32 arg1) {
    OSIntMask mask;
    struct54 *node;

    mask = osSetIntMask(1);
    node = (struct54 *)((u32)arg0 - 0xC);
    node->unk8 = (node->unk8 & 0xFFFFFF) | (arg1 << 24);
    osSetIntMask(mask);
}

void func_1000440C(void) {
    struct54 *foo;
    struct54 *last_good_foo;
    s32 tmp0;

    for (foo = D_800380B8, tmp0 = NULL; foo != NULL; foo = (struct54 *)foo->unkC) {
        if (tmp0 < (s32) foo->unk8) {
            tmp0 = foo->unk8;
            last_good_foo = foo;
        }
    }

    D_800380B0 = last_good_foo;
    D_8002AC30 = tmp0;
}
