#ifndef STRUCTS_H
#define STRUCTS_H


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
} struct0;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct1;

typedef struct {
  s32 unk0;
  s32 unk4;
  s32 unk8;
} struct2;

typedef struct {
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
} struct3;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8  unk64;
    u8  unk65;
} struct4;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} struct5;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} struct6;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s16 unk30;
    s16 unk32;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    struct0 *unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
} struct7;

typedef struct {
  s32 unk0;
  s32 unk4;
} struct10;

typedef struct {
    u16 unk0;
    s16 unk2;
    struct10 unk4[];
} struct8;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    u8  unkE;
} struct9;

typedef struct {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u32 unk10;
} struct11;

typedef struct {
    s32 unk0;
    s32 unk1;
    u8  unk8;
    u8  unk9;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} struct12;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} struct13;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} struct14;

typedef struct {
    u32 unk0;
    s32 unk4;
    u32 unk8;
} struct15;

typedef struct {
    u32 unk0;
    u16 unk4;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    u8  unkF;
    u32 unk10;
    u8  unk14;
    u8  unk15;
    u8  unk16;
    u8  unk17;
    f32 unk18;
    // padding
    u32 pad1C;
    u32 pad20;
    u32 pad24;
    u32 pad28;
    u32 pad2C;
    u32 pad30;
    u32 pad34;
    u32 pad38;
} struct16;

typedef struct {
  s32 pad1;
  s32 pad2;
  s32 pad3;
  s32 pad4;
  s32 pad5;
  s32 pad6;
  s32 unk8;
} struct17;

typedef struct {
  s32 pad0;
  s32 pad1;
  s32 pad2;
  s32 pad3;
  s32 pad4;
  s32 pad5;
  struct17 *unk18;
  s32 pad6;
  s32 pad7;
  s32 unk24;
} struct18;

#endif
