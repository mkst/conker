#include <ultra64.h>

extern OSThread *__osRunningThread;

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/os/getthreadpri/osGetThreadPri.s")
// NON-MATCHING: close with -g2 -O2
// OSPri osGetThreadPri(OSThread *thread) {
//     if (thread == NULL) {
//         thread = __osRunningThread;
//     }
//     return thread->priority;
// }
