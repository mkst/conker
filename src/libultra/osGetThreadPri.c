#include <ultra64.h>

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/osGetThreadPri/osGetThreadPri.s")

/*
extern OSThread *D_8002BE00;

OSPri osGetThreadPri(OSThread *thread) {
    if (thread == NULL) {
        thread = D_8002BE00;
    }
    return thread->priority;

}
*/
