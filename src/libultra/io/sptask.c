#include <ultra64.h>

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/sptask/_VirtualToPhysicalTask.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/io/sptask/osSpTaskLoad.s")

void osSpTaskStartGo(OSTask *tp) {
    while(__osSpDeviceBusy());
    __osSpSetStatus(SP_SET_INTR_BREAK | SP_CLR_SSTEP | SP_CLR_BROKE | SP_CLR_HALT);
}
