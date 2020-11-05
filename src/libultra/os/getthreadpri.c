#include <ultra64.h>

extern OSThread *__osRunningThread;

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/os/getthreadpri/osGetThreadPri.s")
// NON-MATCHING: just.. doesnt match
//
// OSPri osGetThreadPri(OSThread *thread) {
//     if (thread == NULL) {
//         thread = __osRunningThread;
//     }
//     return thread->priority;
// }
