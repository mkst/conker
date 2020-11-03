#include <ultra64.h>

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osSpGetStatus.s")
// NON-MATCHING: jr/lw reversed
// u32 __osSpGetStatus()
// {
//     return IO_READ(SP_STATUS_REG);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osSiDeviceBusy.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/osPfsInit.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osPfsGetStatus.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/osLeoDiskInit.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osSumcalc.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osIdCheckSum.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osRepairPackId.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osCheckPackId.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osGetId.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osCheckId.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osPfsRWInode.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/libultra_27620/__osPfsSelectBank.s")
