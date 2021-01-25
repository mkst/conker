#ifndef MACROS_H
#define MACROS_H

#define ALIGN2(val) ((((s32)val) + 0x1) & ~0x1)
#define ALIGN4(val) ((((s32)val) + 0x3) & ~0x3)
#define ALIGN8(val) ((((s32)val) + 0x7) & ~0x7)
#define ALIGN16(val) ((((s32)val) + 0xF) & ~0xF)

#endif
