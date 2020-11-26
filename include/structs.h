#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct struct12 struct12;
typedef struct struct25 struct25;
typedef struct struct27 struct27;
typedef struct struct31 struct31;
typedef struct struct54 struct54;
typedef struct struct56 struct56;
typedef struct struct119 struct119;
typedef struct struct124 struct124;
typedef struct struct127 struct127;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;   // used
    s32 unk10;
    s32 unk14;
    s32 unk18;  // used
} struct00;

typedef struct {
    s32 unk0;
    s32 unk4;
} framebuffer;

typedef struct {
    s16 unk0;   // used
    s16 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;  // used
    s32 unk18;  // used
    s32 unk1C;
    s32 unk20;
    u16 unk24;  // used
    s16 unk26;
    s16 unk28;  // used
    s16 unk2A;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;  // used
    s32 unk4C;  // used
    s32 unk50;  // used
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    u8  unk64;
    u8  unk65;
} struct04;

typedef struct {
    u16 unk0;   // used
    u16 unk2;   // used
    u16 unk4;   // used
    u16 unk6;   // used
} struct05;

typedef struct {
    s32 unk0;
} struct36;

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
} struct37;

typedef struct {
    s32 unk0;     // used
    s32 unk4;     // used
    s32 unk8;     // used
    s32 unkC;     // used
    s32 unk10;    // used
    s32 unk14;    // used
    s32 unk18;    // used
    s32 unk1C;    // used
    s32 unk20;    // used
    s32 unk24;    // used
    s32 unk28;    // used
    s32 unk2C;    // used
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    struct36 *unk40;
    s32 unk44;    // used
    struct37 *unk48; // used
    s32 unk4C;    // used
    s32 unk50;    // used
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
} struct07;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct10;

typedef struct {
    s16 unk0;
    s16 unk2;
    struct10 unk4[8];
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
    u8  unk2;
    u8  unk3;       // used
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;       // used
    u32 unk10[16];  // used
} struct11;

struct struct12 {
    s32 unk0;
    s32 unk1;
    u8  unk8;
    u8  unk9;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

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
} struct14; // size 0x10

typedef struct {
    u32 unk0;
    s32 unk4;
    u32 unk8;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;  // used
} struct15; // 0x30 size

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
    u32 unk1C;
    u32 pad20;
    u32 pad24;
    u32 pad28;
    u32 pad2C;
    u32 pad30;
    u32 pad34;
    u32 pad38;
} struct16; // 0x3C

typedef struct {
  f32 unk0;
  f32 unk4;
  f32 unk8;
} struct17; // TODO: replace with vertex

typedef struct {
  u8 pad0[0x18];
  struct17 *unk18;
  u8 pad1[0x8];
  s32 unk24;
  s32 unk28;
  s32 unk2C;
} struct18;

typedef struct struct19 struct19;

struct struct19 {
    struct19* unk0;
    struct19* unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s8 unkA;
    s8 unkB;
    struct19 *unkC;
} struct20;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    struct20 *unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;    // used
    f32 unk54;    // used
    s32 unk58;    // used
    s32 unk5C;
    s16 unk60;
    s16 unk62;    // used
    s16 unk64;
    s16 unk66;
    s16 unk68;
    s16 unk6A;
    s16 unk6C;
    s16 unk6E;    // used
    s16 unk70;
    s16 unk72;
    s16 unk74;    // used
    s16 unk76;    // used
    s32 unk78;
    s32 unk7C;    // used
    s32 unk80;    // used
    OSMesgQueue *unk84;   // used
    s32 *unk88;   // used
    s32 unk8C;    // used
    s32 unk90;
    s32 unk94;
    s8  unk98;
    s8  unk99;
    s16 unk9A;
    s32 unk9C;
    s16 unkA0;
    s16 unkA2;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
} struct21;

typedef struct {
    s32 unk0;
    s32 unk4;
    struct21 *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s16 unk1C;
    s16 unk1E;
} struct22;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} struct23;

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
    s16 unk34;
    s8  unk36;
} struct24;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct28;


struct struct27 {
    s32 unk0;
    struct27 *unk4;
    s32 unk8;
} ;

struct struct25 {
    struct25 *unk0;
    u16 unk4;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    f32 unk10;
    u8  unk14;
    s8  unk15;
    u8  unk16;
    u8  unk17;
    f32 unk18;
    u32 unk1C;
    u32 unk20;
    struct27 *unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 unk3B;
}; // 0x3C

typedef struct {
    s32 *unk0;
    u16 unk4;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  unkB;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    u8  unkF;
    f32 unk10;
    u32 unk14;
    f32 unk18;
    u32 unk1C;
    u32 unk20;
    struct27 *unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u8  unk34;
    u8  unk35;
    u8  unk36;
    u8  unk37;
    u8  unk38;
    u8  unk39;
    u8  unk3A;
    u8  unk3B;
} struct29;

// size 0x44
typedef struct {
    s32 unk0;
    s32 unk4;
    u8  unk8;
    u8  unk9;
    u16 unkA;
    struct15 *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8  pad[0x28];
} struct30;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    s32 unk28;
    u32 unk2C;
    u16 unk30;
    u16 unk32;
    u8  unk34;
    u8  unk35;
    u8  unk36;
    u8  unk37;
    u16 unk38;
    u16 unk3A;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    struct25 *unk60;
    struct25 *unk64;
    s32 unk68;
    struct30 *unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
    f32 unk7C;
    f32 unk80;
    s32 unk84; // address of mesgQueue?
    s32 unk88;
    u8  unk8C;
    u8  unk8D;
} struct26;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct32;

struct struct31 {
    struct31 *unk0;     // used
    struct31 **unk4;    // used
    s32 unk8;
    s32 unkC;           // used
    s32 unk10;
    u8 pad[0x1C];
    f32 unk30;          // used
    s32 unk34;
    struct31** unk38;   // used
    s32 unk3C;          // used
    s32 unk40;          // used
    s32 unk44;
    s32 unk48;
    s16 unk4C;          // used
    s8  unk4E;          // used
    s16 unk50;
    s8  unk52;
    u8  unk53;          // used
    u8  unk54;          // used
};

// === 16 byte structs ===
typedef struct {
    s16 unk0;   // used
    u16 unk2;
    s32 unk4;   // used
    u8  unk8;   // used
    u8  unk9;   // used
    u8  unkA;   // used
    u8  unkB;
    u32 unkC;
} struct33;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    f32 unk4;   // used
    f32 unk8;   // used
    u32 unkC;
} struct34;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    s32 unk4;   // used
    u32 unk8;   // used
    u32 unkC;
} struct35;

typedef struct {
    s16 unk0;   // used
    u16 unk2;
    u8  unk4;   // used
    u8  unk5;   // used
    u8  unk6;   // used
    u32 unk7;   // used
    u8  unk8;
    u8  unk9;
    u8  unkA;
} struct38;

typedef struct {
    s16 unk0;   // used
    s16 unk2;
    s16 unk4;   // used
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
} struct39;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    f32 unkC;
} struct40;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
    s32 unk10;
} struct41;

typedef struct {
    s16 unk0;   // used
    s16 unk2;   // used
    s32 unk4;
    u16 *unk8; // used
    s32 unkC;
    s32 unk10;
    s32 unk14; // used
    s32 unk18; // used
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    struct25 *unk28; // probably not this struct
    s32 unk2C;
    s32 unk30; // used
    s32 unk34; // used
    s32 unk38;
    s32 unk3C;
    s32 unk40; // used
    s32 unk44; // used
    s32 unk48; // used
    f32 unk4C; // used
    s32 unk50; // used
    f32 unk54; // used
    s32 unk58; // used
    s32 unk5C; // used
    u16 unk60; // used
    u16 unk62; // used
    u16 unk64; // used
    u16 unk66; // used
    u16 unk68; // used
    u16 unk6A; // used
    u16 unk6C; // used
    u16 unk6E; // used
    u16 unk70; // used
    u16 unk72;
    u16 unk74;
    u16 unk76; // used
    s32 unk78; // used
    s32 unk7C; // used
    s32 unk80; // used
    s32 unk84; // used
    s32 unk88; // used
    s32 unk8C; // used
    s32 unk90;
    s32 unk94;
    u8  unk98;
    u8  unk99; // used
    u16 unk9A;
    s32 unk9C;
    u16 unkA0; // used
    u16 unkA2; // used
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 *unkB8; // used
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8; // used
    s32 unkCC; // used
} struct42;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
} struct43;

typedef struct {
    s16 unk0;   // used
    s16 unk2;   // used
    s16 unk4;   // used
    s16 unk6;
    s32 unk8;   // used
} struct44;

typedef struct {
    s32 unk0;   // used
    s32 unk4;   // used
    u16 unk8;   // used
    s16 unkA;   // used
    f32 unkC;   // used
    s16 unk10;  // used
    u8  unk12;  // used
    u8  unk13;  // used
    u8  unk14;  // used
    u8  unk15;  // used
    u16 unk16;
    f32 unk18;  // used
    s32 unk1C;  // used
    s32 unk20;  // used
} struct45;

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
} struct46;

typedef struct {
    s16 unk0;   // used
    s16 unk2;   // used
    s16 unk4;
    s16 unk6;
    s16 unk8;   // used
    s16 unkA;   // used
    u16 unkC;   // used
    s16 unkE;
    s32 unk10;
    s16 unk14;
    u8  unk16;
    u8  unk17;
    s16 unk18;  // used
    s16 unk1A;  // used
    s16 pad1C;
    s8  unk1F;
} struct47;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 pad1[0x1b];
    u8 unk3B;
    u8 pad0[0x4F];
    u16 unk8C;
    u16 unk8E;
    u8 pad2[0x288];
    s32 unk318;
    u8 pad3[0xb8];
    s32 unk3D4;
} struct48;

typedef struct {
    s16 unk0;
    s8 unk2;
    s8 unk3;
} struct49;

typedef struct {
    s32 unk0;   // used
    s32 unk4;   // used
    s16 unk8;   // used
    s16 unkA;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;  // used
    s32 unk20;  // used
    s32 unk24;
    s32 unk28;  // used
    s32 unk2C;  // used
    s32 unk30;  // used
    s32 unk34;  // used
    s32 unk38;  // used
    s32 unk3C;
    s32 unk40;  // used
    s32 unk44;  // used
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;  // used
    s32 unk5C;  // used
    s32 unk60;  // used
    s32 unk64;  // used
    s32 unk68;  // used
    s32 unk6C;  // used
    s32 unk70;  // used
} struct50;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
} struct51;

typedef struct {
    s32 unk0;
    f32 unk4;
} struct52;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} struct53; // used as OSMesg

struct struct54 {
    struct54 *unk0;   // used
    struct54 *unk4;
    u32 unk8;   // used
    s32 unkC;   // used
    s32 unk10;
    s8 unk14;   // used
    u8 unk15;   // used
    u8 unk16;   // used
};

typedef struct {
    s16 unk0;
    s16 unk2; // used
    s32 unk4;
    s32 unk8;
    u8 pad[0x1C];
    s32 unk28; // used
    s32 *unk2C; // used
} struct55;

struct struct56 {
    s32 unk0;
    s32 unk4;
    struct56 *unk8;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;  // used
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;  // used
} struct57;

typedef struct { // size 0x44
  u32 pad0[3];
  s32 unkC;               // used
  void *framebuffer;      // framebuffer
  s32 unk14;
  OSTask *osTask;          // used
  u32 pad1[0xF];
  OSMesgQueue *mesgQueue; // used
  OSMesg *mesg;           // used
} struct58;


/* chunk 0 */

typedef struct {
  f32 x;
  f32 y;
  f32 z;
} vertex;

typedef struct {
  u8 unk0;
  u8 unk1;
  u8 unk2;
} struct100;

typedef struct {
  s32 unk0;
  f32 unk4;
  f32 unk8;
} struct101;

typedef struct {
  u8  unk0;
  u8  unk1;   // used
  u8  unk2;
  u8  unk3;
  u8  unk4;
  u8  unk5;
  u8  unk6;
  u8  unk7;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  u8  unk18;  // used
  u8  unk19;  // used
} struct102;

typedef struct {
  u16 unk0;
  u8  unk2;
  u8  unk3;   // used?
  u16 unk4;   // used
  u16 unk6;
  u16 unk8;
  u16 unkA;
  u16 unkC;   // used
  s32 unkE;   // used
} struct103;

typedef struct {
    u8 pad[0xA];
    u8 unkA;
} struct104;

typedef struct {
    s32 unk0;  // used
    s32 unk4;  // used
    s32 unk8;  // used
    s32 unkC;  // used
} struct105;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s8  pad[0x3];
    u8  unkF;
} struct106;

typedef struct {
    s8 pad0[0x1C];
    s32 unk1C;
    s8 pad1[0x8];
    s32 unk28;
    s8 pad2[0x78];
} struct107;

typedef struct {
    u8 pad[0xEC];
} struct150; // size 0xEC

typedef struct {
    u8  pad00[0x2C];
    s32 unk2C;       // used
    struct150 *unk30;
    u8  pad01[0x50];
    s32 unk84;       // used
    u8  pad10[0xaC];
    s32 unk134;      // used
    u8  pad11[0x54];
    f32 unk18C;      // used
    f32 unk190;      // used
    u8  pad12[0x20];
    s16 unk1B4;      // used
    u8  pad20[0x2A];
    u16 unk1E0;      // used
    u8  pad30[0x5A];
    u8  unk23C;
    u8  unk23D;
    u8  unk23E; // used
    u8  unk23F;
    u8  pad31[0x108];
    f32 unk348;      // used
    f32 unk34C;      // used
    u8  pad40[0x24];
    f32 unk374;      // used
    u8  pad48[0x58];
    struct127 *unk3D0;
    u8  pad50[0x21c];
    s32 unk5F0;      // used
    u8  pad60[0x148];
    u16 unk73C;
} struct108;

typedef struct {
    u8  pad[0x18]; // help me
    f32 unk20;
    f32 unk24;
    s16 unk28;
    u16 unk2A;
    s16 unk2C;
    s16 unk2E;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54; //?
    f32 unk58;
    f32 unk5C;
    u16 unk60;
    u16 unk62;
    f32 unk64;
    f32 unk68;
    u16 unk6C;
    u16 unk6E;
    s32 unk70;
    s32 unk74;
} struct109;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    f32 unk6;
    s16 unkA;
    s16 unkC;
    u16 unkE;
    s32 unk10;
    s16 unk14;
    u8  unk16;
} struct110;

typedef struct {
    u8 pad[0x18];
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} struct111;

typedef struct {
    f32 unk0;   // used
    f32 unk4;   // used
    f32 unk8;   // used
    f32 unkC;
    f32 unk10;  // used
    f32 unk14;  // used
    f32 unk18;  // used
    f32 unk1C;
    f32 unk20;  // used
    f32 unk24;  // used
    f32 unk28;  // used
    f32 unk2C;
    f32 unk30;  // used
    f32 unk34;  // used
    f32 unk38;  // used
    f32 unk3C;
} struct112;

typedef struct {
    u8 pad0[0x18];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    u8 pad1[0x18];
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    s16 unk3E;
} struct113;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;  // used
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s16 unk28;
    s16 unk2A;  // used
    s32 unk2C;
    s32 unk30;
    s16 unk34;  // used
    s16 unk36;  // used
    s16 unk38;
    s8  unk3A;  // used
} struct114;

typedef struct {
    void (*unk0)(struct102 *arg0); // used
    u8 pad0[0x14];
    void (*unk18)(struct102 *arg0); // used
    u8 pad1[0x18];
} struct115;

typedef struct {
    u8 pad[0x18];
} struct116;

typedef struct {
    u8 pad[0x20];
} struct117; // used as OSMesg

typedef struct {
    u8  pad0[0x14];
    s32 unk14;
    f32 unk18;
    u8  pad1[0xfc];
    s32 unk118;
    s32 unk11C;
    s32 unk120;
    s32 unk124;
} struct118;

struct struct119 {
    u8 pad0[0x170];
    struct119 *unk170;
};

typedef struct {
    u16 unk0;       // used
    u16 unk2;
    u16 unk4;       // used
    u16 unk6;
    struct31 *unk8; // used
} struct120;

typedef struct {
    s16 unk0;
    u8  unk2;
    u8  unk3;
    s32 unk4;
    s32 unk8;
    s32 unkC[8];
} struct121;

typedef struct {
    s32 unk0;
} struct123;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4[8];
} struct122;

struct INTS {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct FLOAT {
    f32 unk0;
};

struct struct124 {
    struct124* unk0;
    u8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    s32 unk10;
    s32 unk14;
    s16 unk18;
    s16 unk1A;  // used
    s16 unk1C;  // used
    s16 unk1E;  // used
    s16 unk20;
    s16 unk22;  // used
    s16 unk24;  // used
    s16 unk26;  // used
    union {
        struct INTS i;
        struct FLOAT f;
    } data;
};

typedef struct {
    s16 unk0;
    s16 unk2;       // used
    s32 unk4;
    s16 unk8[0x10]; // used
    s32 unk28;      // used
} struct125;

typedef struct {
    u8 pad0[0x14];
    u8 unk14;
    u8 pad[0x12];
    u8 unk27;
    s32 unk28;
    s32 unk2C;
    u8 unk30;
    u8 pad2[0x1d];
    u8 unk4E;
    u8 pad3[0x9];
    u8 unk58;   // used
    u8 unk59;   // used
    u8 pad4[0x11];
    u8 unk6B;
    u8 pad5[0x18];
    s32 unk84;  // used
    s16 unk88;
    s16 unk8A;  // used
    u16 unk8C;  // used
    s8  unk8E;  // used
    s8  unk8F;  // used
    s8  unk90;
    s8  unk91;
    s8  unk92;
    s8  unk93;
    s8  unk94;
    s8  unk95;  // used
    u8  pad7[0x8a];
    u8  unk120;
    u8  unk121;
    u8  unk122;
    u8  unk123;
    s16 unk124;
} struct126;

typedef struct {
    u16 unk0;
    u8  unk2;
    u8  unk3;
    u8  unk4;
    u8  pad[0x1b];
    f32 unk20;
    f32 unk24;
} struct129;

struct struct127 {
    s32 unk0;   // used
    u8  unk4;   // used
    u8  pad5;
    u8  pad6;
    u8  pad7;
    u32 pad8;
    u32 padC;
    s32 unk10;  // used
    s32 unk14;  // used
    f32 unk18;  // used
    f32 unk1C;  // used
    f32 unk20;  // used
    f32 unk24;  // used
    u32 pad28;
    f32 unk2C;  // used
    f32 unk30;  // used
    f32 unk34;  // used
    u8  pad38;
    u8  pad39;
    u8  pad3A;
    u8  unk3B;  // used
    f32 unk3C;  // used
    f32 unk40;  // used
    u32 pad44;
    u32 unk48;
    f32 unk4C;  // used
    u32 pad50;
    u32 pad54;
    u32 pad58;
    s32 unk5C;  // used
    s32 unk60;
    s8  unk64;
    s8  unk65;  // used
    u8  pad66;
    u8  pad67;
    u32 pad68;
    u32 pad6C;
    u32 pad70;
    u16 pad74;
    u16 unk76;  // used
    u16 unk78;
    u16 unk7A;  // used
    u16 unk7C;
    u16 unk7E;
    u8  unk80;
    u8  unk81;  // used
    u8  unk82;
    u8  unk83;  // used
    u16 unk84;  // used
    u8  unk86;
    u8  unk87;
    u8  unk88;
    u8  unk89;  // used
    u16 pad8A;
    u16 unk8C;  // used
    u16 unk8E;  // used
    u32 pad90;
    u32 pad94;
    u32 pad98;
    u32 unk9C;
    u32 padA0;
    u32 padA4;
    u32 padA8;
    u8  padAC;
    u8  unkAD;  // used
    u16 padAE;
    u16 padB0;
    u16 unkB2;  // used
    s32 padB4;
    f32 unkB8;  // used
    u32 padBC;
    u32 padC0;
    f32 unkC4;
    u32 padC8;
    u32 padCC;
    u16 padD0;
    s16 unkD2;    // used
    s16 unkD4;    // used
    u16 unkD6;    // used
    u16 unkD8;
    u16 unkDA;
    f32 unkDC;    // used
    f32 unkE0;    // used
    s16 unkE4;    // used
    s16 unkE6;    // used
    u16 unkE8;    // used
    u16 unkEA;
    f32 unkEC;
    f32 unkF0;
    u32 padF4;
    u32 padF8;
    u32 padFC;
    u8  unk100;   // used
    u8  unk101;
    u8  unk102;
    u8  unk103;
    u8  unk104;
    u8  pad105;
    u8  pad106;
    u8  pad107;
    u32 pad108;
    u16 pad10C;
    u8  unk10E;
    u8  unk10F;
    u32 pad110;
    u32 pad114;
    f32 unk118;
    u32 pad11C;
    u32 pad120;
    u8  unk124;
    u8  unk125; // used
    u8  pad126;
    u8  pad127;
    u32 pad128;
    u32 pad12C;
    u32 pad130;
    u32 pad134;
    u32 pad138;
    u8  unk13C; // used
    u8  pad13D;
    u8  pad13E;
    u8  unk13F; // used
    s32 unk140;
    struct129 *unk144; // used
    s32 unk148;
    f32 unk14C;
    f32 unk150;
    f32 unk154;
    f32 unk158;
    f32 unk15C;
    u32 pad160;
    u32 pad164;
    u32 pad168;
    u32 pad16C;
    u32 pad170;
    u32 pad174;
    u32 pad178;
    u32 pad17C;
    u32 pad180;
    u32 pad184;
    u32 pad188;
    u32 pad18C;
    u32 pad190;
    u32 pad194;
    u32 pad198;
    u32 pad19C;
    u32 pad1A0;
    u32 pad1A4;
    u32 pad1A8;
    u32 pad1AC;
    u32 pad1B0;
    u32 pad1B4;
    u32 pad1B8;
    u32 pad1BC;
    u32 pad1C0;
    u32 pad1C4;
    u16 pad1C8;
    u8  unk1CA; // used
    u8  unk1CB;
    f32 unk1CC;
    u32 pad1D0;
    s32 unk1D4;
    u32 pad1D8;
    u32 pad1DC;
    u32 pad1E0;
    s32 unk1E4;
    u32 pad1E8;
    u32 pad1EC;
    u32 pad1F0;
    s32 unk1F4;
    u32 pad1F8;
    u32 pad1FC;
    u32 pad200;
    s32 unk204;
    u32 pad208;
    u32 pad20C;
    u32 pad210;
    s32 unk214;
    s32 unk218; // used
    u32 pad21C;
    u32 pad220;
    u32 pad224;
    u32 pad228;
    u32 pad22C;
    u16 pad230;
    s8  unk232; // used
    u8  pad233;
    u8  pad234;
    u8  pad235;
    u8  pad236;
    u8  pad237;
    u8  pad238;
    s8  unk239; // used
    u8  padB[0xde];
    struct48  *unk318;
    struct126 *unk31C; // used
    u8  padCa[0xC];
}; // size 0x32c => 812 bytes

typedef struct {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    struct48 *unk1C;
    s32 unk20;
} struct130;

typedef struct {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad1[0x2f];
    s16 unk4F;
    u8 pad2[0x6];
    s16 unk56;
    s16 unk58;
} struct131;

typedef struct {
    u8  pad0[0x48];
    u8  unk48;  // used
    u8  pad49;
    u8  pad4A;
    u8  pad4B;
    s32 unk4C; // used
} struct132;

typedef struct {
    u8 pad[0x1b];
    u8 unk1B;
} struct133;

typedef struct {
    s16 unk0;
    u16 unk2;
    s16 unk4;
    u16 unk6;
    u8 pad[0xE];
    u8 unk16;
    u8 unk17;
    s32 unk18;
    s32 unk1C;
} struct134;

typedef struct {
    struct134 *unk0;
    struct134 *unk4;
    s32 unk8;
    struct134 *unkC;
    f32 unk10;
    f32 unk14;
    s32 unk18;
    s8  unk1C;
    s8  pad1D;
    s8  pad1E;
    s8  pad1F;
} struct135; // size 0x34 (memcpy) ?

typedef struct {
    u8 pad[0x16];
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
} struct136;

typedef struct struct137 struct137;

struct struct137 {
    s32 unk0; // used
    s32 unk4; // used
    s32 unk8; // used
    s32 unkC; // used
    struct137 *unk10; // used
    s32 pad14;
    s32 pad18;
    s32 pad1C;
    s32 pad20;
    s32 pad24;
    s32 pad28;
    s32 unk2C; // used
    u32 unk30; // used
    s32 pad34;
    s32 pad38;
    s32 pad3C;
    s32 pad40;
    s32 pad44;
    s32 pad48;
    u16 unk4C; // used
    u16 unk4E; // used
    u16 pad50;
    u16 unk52; // used
    u16 unk54; // used
    u16 pad56;
    u16 unk58; // used
    u16 unk5A; // used
    u16 pad5C;
    u16 pad5E;
    u16 pad60;
    u16 pad62;
}; // 0x64 (100) bytes

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
} struct138;

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s16 unk8[16];
} struct139;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 pad[0x174];
} struct140; // 0x180

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    s32 unk28;
    f32 unk2C;
    f32 unk30; // sp70
    f32 unk34;
    s16 unk38;
    s16 unk3A;
    f32 unk3C;
    f32 unk40; // sp80
    s16 unk44;
    s16 unk46;
    s32 unk48;
    s32 unk4C;
} struct145;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} struct146; // dummy 0x18 length

typedef struct {
    u8 unk0;  // used
    u8 unk1;
    u8 unk2;
    u8 unk3;
    s32 unk4; // used but might be u8
    s32 unk8; // used
    struct54 *unkC;
    struct54 *unk10;
    s32 unk14;
} struct147;

typedef struct {
    u32 unk0;
    u32 unk4;
} struct148;

typedef struct {
    u8 pad[0xF8];
} struct149; // size 0xF8

typedef struct {
    s32 unk0;   // used (unk3?)
    s32 unk4;   // used
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s8  unk14;
    u8  unk15;  // used
    s8  unk16;
    s8  unk17;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;  // used
    u8  pad[0x2C];
    s32 unk60;  // used
} struct151;


#endif
