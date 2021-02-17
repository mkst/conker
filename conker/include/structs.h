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
typedef struct struct108 struct108;
typedef struct struct216 struct216;
typedef struct struct255 struct255;
typedef struct struct256 struct256;

/*
  union convention
  ================
  b  -> (signed) byte (s8)
  ub -> unsigned byte (u8)
  h  -> (signed) short (s16)
  uh -> unsigned short (u16)
  w  -> (signed) word (s16)
  uw -> unsigned word (u16)
*/

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;   // used
    s32 unk10;
    s32 unk14;
    s32 unk18;  // used
} struct00; // size 0x1C

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
    s16 unk2C;
    s16 unk2E;
    s8  unk30;
    s8  unk31;
    s8  unk32;
    s8  unk33;
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

struct struct12 {
    s32 unk0;
    s32 unk4;
    u8  unk8;
    u8  unk9;
    u8  padA[0x2];
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

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
    void (*unk2C)(s32 arg0);
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

struct struct27 {
    s32 unk0;
    struct27 *unk4;
    s32 unk8;
};

struct struct25 {
    struct25 *unk0; // ALInstrument
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

typedef struct {
    s16 unk0;   // used
    s16 unk2;
    s16 unk4;   // used
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8  unkC;
    u8  unkD;
    s16 unkE;
} struct39;

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
    s16 unk68; // used
    s16 unk6A; // used
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
    s16 unk94;
    s16 unk96;
    u8  unk98;
    u8  unk99; // used
    u16 unk9A;
    s16 unk9C;
    s16 unk9E;
    u16 unkA0; // used
    u16 unkA2; // used
    s16 unkA4;
    s16 unkA6;
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
    s32 unk18;  // used
    s16 pad1C;
    s8  unk1E;
    u8  unk1F;
} struct47;

typedef struct {
    s16 unk0;
    s8  unk2;
    s8  unk3;
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
    u8  unk0;
    u8  unk1;   // used
    u8  unk2;
    u8  unk3;
    u8  unk4;
    u8  unk5;
    u8  unk6;
    u8  unk7;
    s32 unk8;
    s16 unkC;
    u8  unkE;
    u8  unkF;
    s16 unk10;
    u8  unk12;  // used
    u8  unk13;
    u8  unk14;
    u8  pad15[0x3];
    u8  unk18;  // used
    u8  unk19;  // used
    u8  pad1A[0x2];
    s16 unk1C;
    u8  pad1E[0xA];
    u8  unk28;
    u8  unk29[0x3];
    s32 unk2C;
    s32 unk30;
    u8  pad34[0x6];
    u8  unk3A;
    u8  pad3B[0x2];
    u8  unk3D;
} struct102;

typedef struct {
    u16 unk0;
    u16 unk2;  // used
    u8  unk4;
    u8  unk5;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  padB[0x3];
    u8  unkE;
    u8  padF;
    u8  unk10;
    u8  pad11;
    u8  unk12;
    u8  unk13;
    u8  unk14;
    u8  pad15;
    s16 unk16;
    u8  pad18[0x2];
    u16 unk1A;
    u8  pad1C[0xD];
    u8  unk29;
    u8  pad2A[0x1F];
    u8  unk49;
    u8  unk4A;
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
    u8 pad[0xEC];
} struct150; // size 0xEC

typedef struct {
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
    u8  unk0;
    u8  pad1;
    u8  unk2;
    u8  pad3;
    u8  unk4;
    u8  pad5;
    s16 unk6;
    u8  pad8[0x4];
    u8  unkC;
    u8  padD[0x3];
    u8  unk10;
    u8  pad11[0x5];
    u8  unk16;
    u8  pad17[0x4];
    u8  unk1B;
} struct110;

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
    u8  unk3B;
} struct114;

typedef struct {
    void (*unk0)(struct102 *arg0); // used
    u8 pad0[0x14];
    void (*unk18)(struct102 *arg0); // used
    u8 pad1[0x18];
} struct115;

typedef struct {
    u8 pad[0x20];
} struct117; // used as OSMesg

typedef struct {
    u8  pad0[0x14];
    s32 unk14;
    f32 unk18;
    u8  pad1C[0xfc];
    s32 unk118;
    s32 unk11C;
    s32 unk120;
    s32 unk124;
} struct118;

struct struct119 {
    s16 unk0;
    u8  pad2[0x16E];
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

struct FLOAT {
    f32 unk0;
};

struct SHORTS {
    s16 unk0;
    s16 unk2;
};

struct UBYTES4 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct WORD {
    s32 unk0;
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
    u8  pad14[0x3];
    u8  unk17;
    s16 unk18;
    s16 unk1A;  // used
    s16 unk1C;  // used
    s16 unk1E;  // used
    s16 unk20;
    s16 unk22;  // used
    s16 unk24;  // used
    s16 unk26;  // used
    union {
        struct UBYTES4 i;
        struct FLOAT f;
    } data;
}; // size 0x2C

typedef struct {
    s16 unk0;
    s16 unk2;       // used
    s32 unk4;
    s16 unk8[0x10]; // used
    s32 unk28;      // used
} struct125;

// movement modifier?
typedef struct {
    u8  pad0[0x8];
    u16 unk8;
    u8  padA[0x2];
    u8  unkC;
    u8  padD;
    u16 unkE;
    u8  pad10[0x2];
    s16 unk12;
    u8  unk14;
    u8  pad15;
    u8  unk16;
    u8  pad17[0xF];
    s8  unk26;
    u8  unk27;
    s32 unk28;
    s32 unk2C;
    u8  unk30;
    u8  unk31;
    u8  pad32[0x4];
    u8  unk36;
    u8  pad37;
    s32 unk38;
    u8  pad3C[0x8];
    s8  unk44;
    u8  pad45[0x5];
    /* 0x4A */ s8  chased; //unk4A;
    /* 0x4B */ s8  chasing; //unk4B;
    u16 unk4C;
    u8  unk4E;
    u8  pad4F[0x3];
    u8  unk52;
    u8  pad53;
    s8  unk54;
    s8  unk55;
    u8  pad56;
    u8  unk57;
    u8  unk58;   // used
    u8  unk59;   // used
    u8  pad5A[0xC];
    u16 unk66;
    u8  pad68[0x3];
    u8  unk6B;
    u8  pad6C[0x9];
    u8  unk75;
    u8  pad76[0x2];
    u8  unk78;
    u8  pad79[0x4];
    /* 0x7D */  u8  matrix_physics; //unk7D;
    u8  pad7E[0x2];
    s16 unk80;
    s16 unk82;
    u8  unk84;
    u8  pad85[0x3];
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
    u8  pad96;
    u8  unk97;
    u8  pad98[0x7C];
    u16 unk114;
    u16 unk116;
    u16 unk118;
    u8  unk11A;
    u8  pad11B[0x5];
    u8  unk120;
    u8  unk121;
    u8  unk122;
    u8  unk123;
    s16 unk124;
    u16 pad126;
    u8  unk128;
    u8  pad129[0x6C];
    u8  unk195;
    u8  pad196[0x2];
    u8  unk198;
    u8  pad199;
    /* 0x19a */ u8  grenade_count;
    u8  unk19B;
    u8  pad19C[0x2];
    u16 unk19E;
    u16 unk1A0;
    u8  pad1A2[0x7];
    u8  unk1A9;
    s16 unk1AA;
} struct126;

typedef struct {
    u16 unk0;
    u8  unk2;
    u8  unk3;
    u8  unk4;
    u8  pad5[0x9];
    u8  unkE;
    u8  unkF;
    u8  pad10[0x8];
    s32 unk18;
    u8  unk1C[0x4];
    f32 unk20;
    f32 unk24;
} struct129;

typedef struct {
    u8  pad0[0x4];
    u16 unk4;
    u8  pad6[0x2];
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u8  pad14[0x4];
    f32 unk18;
} struct197;

struct struct127 {
    /* 0x00 */  s32 interaction_state;
    /* 0x04 */  u8  id;
    u8  unk5;
    u8  unk6;
    u8  unk7;
    u8  unk8;
    u8  unk9;
    u8  unkA;
    u8  unkB;
    u8  unkC;
    u8  unkD;
    union {
      s16 h;
      u8  ub[2];
    } unkE;
    s8  unk10;
    s8  unk11;
    u8  unk12;
    u8  unk13;
    /* 0x14 */  f32 x_position;
    /* 0x18 */  f32 y_position;
    /* 0x1C */  f32 z_position;
    /* 0x20 */  f32 y_velocity;
    /* 0x24 */  f32 gravity;
    f32 unk28;
    /* 0x2C */  f32 old_x_position;
    /* 0x30 */  f32 old_y_position;
    /* 0x34 */  f32 old_z_position;
    u8  unk38;
    u8  pad39;
    s8  unk3A;
    /* 0x3B */  u8  unique_id;
    /* 0x3C */  f32 xz_velocity;
    f32 unk40;  // used
    f32 unk44;
    f32 unk48;
    /* 0x4C */  f32 animation_speed;
    u32 pad50;
    u32 pad54;
    u32 pad58;
    s32 unk5C;  // used
    s32 unk60;
    s8  unk64;
    u8  unk65;  // used
    u8  pad66;
    u8  pad67;
    u32 pad68;
    s16 pad6C;
    s8  unk6E;
    s8  pad6F;
    u32 pad70;
    u8  unk74;
    s8  pad75;
    u16 unk76;  // moving_angle
    u16 unk78;
    u16 unk7A;  // facing angle
    u16 unk7C;
    u8  unk7E;
    u8  unk7F;  // counter
    u8  unk80;  // counter
    u8  unk81;  // counter
    u8  unk82;  // counter
    u8  unk83;  // used
    union {
        u16 uh;
        u8  ub[2];
    }   unk84;
    u8  unk86;
    u8  unk87;
    u8  unk88;
    /* 0x89 */  u8  disable_run;   // slowdown?
    /* 0x8A */  u8  disable_jump; // unk8A;
    u16 unk8C;  // used
    u16 unk8E;  // used
    u16 unk90;
    u16 unk92;
    s32 unk94;
    u32 pad98;
    u32 unk9C;
    u32 padA0;
    u32 padA4;
    u8  unkA8;
    u8  unkA9;
    u8  unkAA;
    u8  unkAB;
    u8  padAC;
    /* 0xAD */  u8  in_water;
    u8  unkAE;
    u8  padAF;
    s8  unkB0;
    u8  padB1;
    u16 unkB2;  // (oxygen?)
    s32 padB4;
    f32 unkB8;  // used
    u32 padBC;
    /* 0xC0 */  f32 target_speed;
    f32 unkC4;
    u32 padC8;
    s16 unkCC;
    s16 unkCE;
    u8  unkD0;
    s8  padD1;
    s16 unkD2;    // used
    s16 unkD4;    // used
    s16 unkD6;    // used
    s16 unkD8;
    s16 unkDA;
    f32 unkDC;    // used
    f32 unkE0;    // used
    s16 unkE4;    // used
    s16 unkE6;    // used
    u16 unkE8;    // used
    u16 unkEA;
    f32 unkEC;
    f32 unkF0;
    s32 unkF4;
    s32 unkF8;
    s32 unkFC;
    u8  unk100;   // used
    u8  unk101;
    u8  unk102;
    u8  unk103;
    /* 0x104 */ u8  stunned; //unk104;
    u8  unk105;
    u8  unk106;
    u8  unk107;
    u8  pad108;
    u8  unk109;
    u8  pad10A;
    u8  unk10B;
    s16 unk10C;
    u8  unk10E;
    u8  unk10F;
    u32 pad110;
    f32 unk114;
    f32 unk118;
    f32 unk11C;
    u8  unk120;
    u8  unk121;
    u8  unk122;
    u8  unk123;
    u8  unk124;
    /* 0x125 */ u8  immune; // used
    u8  pad126;
    u8  unk127;
    u32 pad128;
    u32 pad12C;
    u32 pad130;
    u32 pad134;
    u8  unk138;
    u8  pad139[0x3];
    u8  unk13C; // used
    u8  unk13D;
    u8  unk13E;
    u8  unk13F; // used
    s32 unk140;
    struct129 *unk144; // used
    f32 unk148;
    /* 0x14C */ f32 xz_scale;
    /* 0x150 */ f32 y_scale;
    f32 unk154;
    f32 unk158;
    f32 unk15C;
    u32 pad160;
    f32 unk164;
    f32 unk168;
    f32 unk16C;
    f32 unk170;
    u32 pad174;
    u32 pad178;
    u32 pad17C;
    f32 unk180;
    s32 unk184;
    u32 pad188;
    f32 unk18C; // used
    u32 pad190;
    u8  pad194;
    u8  unk195;
    u8  pad196;
    u8  unk197;
    u8  unk198;
    u8  pad199;
    u8  pad19A;
    u8  pad19B;
    u32 pad19C;
    u32 pad1A0;
    u16 pad1A4;
    s16 unk1A6;
    u32 pad1A8;
    u32 pad1AC;
    u32 pad1B0;
    u32 pad1B4;
    u32 pad1B8;
    u32 pad1BC;
    u32 pad1C0;
    u32 pad1C4;
    u8  pad1C8;
    u8  unk1C9;
    /* 0x1CA */ u8  health;
    u8  unk1CB;
    f32 unk1CC;
    s8  unk1D0;
    s8  unk1D1;
    u16 pad1D2;
    struct255 *unk1D4;
    u32 pad1D8;
    u32 pad1DC;
    u32 pad1E0;
    u8  unk1E4;
    u8  unk1E5;
    u8  unk1E6;
    u8  unk1E7;
    u8  unk1E8;
    u8  pad1E9;
    u16 unk1EA;
    u16 unk1EC;
    u8  pad1EE[0x2];
    u32 pad1F0;
    s32 unk1F4;
    u32 pad1F8;
    u8  unk1FC;
    u8  unk1FD;
    u8  pad1FE;
    u8  unk1FF;
    s8  unk200;
    u8  pad201[0x3];
    s32 unk204;
    u32 pad208;
    u8  pad20C[0x3];
    u8  unk20F;
    u8  pad210;
    u8  unk211;
    u8  unk212[0x2];
    s32 unk214;
    struct216 *unk218; // struct216 is 5 bytes long
    u16 unk21C;
    u8  unk21E;
    u8  unk21F;
    u8  unk220;
    s8  unk221;
    u8  unk222;
    u8  unk223;
    u16 unk224;
    u8  unk226;
    u8  pad227;
    u8  unk228;
    u8  unk229;
    u8  pad22A;
    u8  unk22B;
    u16 unk22C;
    s16 unk22E;
    u8  pad230;
    u8  unk231;
    u8  unk232; // used
    u8  unk233;
    u8  unk234;
    u8  unk235;
    u8  unk236;
    u8  unk237;
    u8  unk238;
    s8  unk239; // used
    u8  unk23A;
    u8  unk23B;
    u8  pad23C;
    u8  unk23D;
    u8  unk23E;
    u8  unk23F;
    u8  unk240;
    u8  unk241;
    u8  unk242;
    u8  pad243;
    s16 unk244;
    u8  unk246;
    u8  unk247;
    u8  unk248;
    u8  unk249;
    u8  unk24A;
    u8  pad24B;
    u8  unk24C;
    u8  unk24D;
    u8  unk24E;
    s8  unk24F;
    u8  unk250;
    u8  unk251;
    u8  unk252;
    u8  unk253;
    u8  unk254;
    u8  unk255;
    u8  unk256;
    u8  unk257;
    u8  unk258;
    u8  pad259[0x3];
    s32 unk25C;
    u8  pad260[0x14];
    u8  unk274;
    u8  pad275;
    s8  unk276;
    u8  pad277;
    s16 unk278;
    u8  unk27A[0x8];
    s16 unk282;
    u8  unk284;
    u8  unk285;
    u8  unk286;
    u8  unk287;
    u8  pad288[0x41];
    u8  unk2C9;
    s8  unk2CA;
    s8  unk2CB;
    s32 unk2CC;
    struct197 *unk2D0;
    u8  pad2D4[0x10];
    s32 unk2E4;
    s32 unk2E8;
    s32 unk2EC;
    u8  pad2F0[0x8];
    u16 unk2F8; // wait animation?
    u8  unk2FA;
    u8  unk2FB;
    u8  pad2FC[0x3];
    u8  unk2FF;
    u8  unk300;
    u8  unk301[0x17];
    /* 0x318 */ struct108 *camera;
    struct126 *unk31C; // used (is this actually 127?)
    u8  pad320[0xC];
}; // size 0x32C => 812 bytes game_object

typedef struct {
    u8  pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8  pad16[0x6];
    s32 unk1C;
    u8  pad20[0x8];
    s32 unk28;
    u8  pad2C[0x22];
    u8  unk4E;
    s8  unk4F;
    u8  pad50[0x6];
    s16 unk56;
    s16 unk58;
    u8  pad5A[0x15];
    u8  unk6F;
    u8  pad70[0x30];
} struct131; // size 0xA0

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
    u16 unk8;
    u16 unkA;
    s32 unkC;
    s32 unk10;
    u16 unk14;
    u8  unk16;
    u8  unk17;
    s32 unk18;
    s32 unk1C; // struct ptr?
    s32 unk20;
    s32 unk24;
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
    f32 unkC;
    f32 unk10;
    u8  pad14[0x20];
    f32 unk34;
    f32 unk38;
    u8  pad3C[0x8];
    s32 unk44;
    s32 unk4C;
    struct14 unk50[3]; // 3 * 0x10 structs
    u8  pad80[0x4];
    s32 unk84;
    u8  pad88[0xf4];
} struct140; // 0x180

typedef struct {
    u16 unk0;
    u16 unk2;
    s16 unk4;
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
    s32 unk0;   // used (unk3?)
    s32 unk4;   // used
    s32 unk8;
    s32 unkC;
    s32 *unk10;
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
    u8  pad34[0x4];
    s32 unk38;
    u8  unk3C[0x10];
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u16 unk52;
    u8  pad54[0x4];
    u16 unk58;
    s16 unk5A;
    s16 unk5C;
    u8  pad5E[0x2];
    struct00 *unk60;  // used
} struct151;

typedef struct {
    s32 pad0;
    u8  unk4;
    s8  unk5; // used
} struct152;

typedef struct {
    s32 pad0;
    struct152 *unk4;
} struct153;

typedef struct {
    s32 pad0;
    s32 pad4;
    s32 pad8;
    struct153 *unkC;
    s32 pad10;
    s32 pad14;
    s32 pad18;
    s32 pad1C;
    s32 pad20;
    s32 pad24;
    s32 pad28;
    s32 pad2C;
    s32 pad30;
    f32 unk34;  // used
} struct154;

typedef struct {
    u8 pad[0x68];
} struct156; // size 0x68

typedef struct {
    s32 unk0;
    s16 unk4;
    s8  unk6;
    s8  unk7;
    s32 unk8;
    s32 unkC;
    s8  unk10;
    s8  unk11;
    s8  unk12;
    s8  unk13;
    s8  unk14;
    s8  unk15;
    s8  unk16;
    s8  unk17;
    s32 unk18;
    s32 unk1C;
    s8  unk20;
    s8  pad21;
    s16 unk22;
    s16 unk24;
} struct157;

struct struct108 {
                u16 unk0;
                u16 unk2[0x15];
    /* 0x02C */ s32 unk2C;
    /* 0x030 */ struct150 *unk30;
    /* 0x034 */ u8  pad34[0x50];
    /* 0x084 */ s32 unk84;
                s32 unk88;
    /* 0x088 */ u8  pad8C[0x50];
    /* 0x0DC */ s32 unkDC;
                s32 unkE0;
    /* 0x0E0 */ u8  padE4[0x50];
    /* 0x134 */ s32 unk134;
                s32 unk138;
    /* 0x138 */ u8  pad13C[0x50];
    /* 0x18C */ f32 unk18C;      // used
    /* 0x190 */ f32 unk190;      // used
    /* 0x194 */ f32 unk194;
                f32 unk198;
    /* 0x19C */ f32 unk19C;
    /* 0x1A0 */ f32 unk1A0;
    /* 0x1A4 */ f32 unk1A4;
    /* 0x1A8 */ f32 unk1A8;
    /* 0x1AC */ u8  pad1AC[0x8];
    /* 0x1B4 */ s16 unk1B4;      // used
    /* 0x1B6 */ u16 unk1B6[0x15]; // 0x15 * 2 => 0x1E0
    /* 0x1E0 */ s16 unk1E0;
    /* 0x1E2 */ s16 unk1E2;
    /* 0x1E4 */ u8  pad1E4[0x28];
    /* 0x20C */ s16 unk20C[0x15];
    /* 0x236 */ u8  pad236[0x2];
    /* 0x238 */ s32 unk238;
    /* 0x23C */ u8  unk23C;
    /* 0x23D */ u8  unk23D;
    /* 0x23E */ u8  unk23E; // used
    /* 0x23F */ u8  unk23F;
    /* 0x240 */ s32 unk240;
    /* 0x244 */ s16 unk244;
    /* 0x246 */ s16 pad246;
    /* 0x248 */ s32 unk248;
    /* 0x24C */ f32 unk24C;
    /* 0x250 */ f32 unk250;
    /* 0x254 */ u8  pad254[0x18];
    /* 0x26C */ f32 unk26C;
    /* 0x270 */ s16 pad270;
    /* 0x272 */ s16 unk272;
    /* 0x274 */ u8  pad274[0x24];
    /* 0x298 */ u16 unk298;
    /* 0x29A */ u8  pad29A[0xA];
    /* 0x2A4 */ f32 unk2A4;
    /* 0x2A8 */ f32 unk2A8;
    /* 0x2AC */ s32 unk2AC; // is this really s32?
    /* 0x2B0 */ f32 unk2B0;
    /* 0x2B4 */ f32 unk2B4;
    /* 0x2B8 */ f32 unk2B8;
    /* 0x2BC */ f32 unk2BC;
    /* 0x2C0 */ f32 unk2C0;
    /* 0x2C4 */ f32 unk2C4;
    /* 0x2C8 */ s32 unk2C8;
    /* 0x2CC */ s32 unk2CC;
    /* 0x2D0 */ s32 unk2D0;
    /* 0x2D4 */ u8  pad2D4[0xC];
    /* 0x2E0 */ s32 unk2E0;
    /* 0x2E4 */ s32 unk2E4;
    /* 0x2E8 */ s32 unk2E8;
    /* 0x2EC */ s32 unk2EC;
    /* 0x2F0 */ s32 unk2F0;
    /* 0x2F4 */ s32 unk2F4;
    /* 0x2F8 */ f32 unk2F8; // struct ptr?
    /* 0x2FC */ f32 unk2FC;
    /* 0x300 */ f32 unk300;
    /* 0x304 */ f32 unk304;
    /* 0x308 */ f32 unk308;
    /* 0x30C */ f32 unk30C;
    /* 0x310 */ u8  pad310[0x38];
    /* 0x348 */ f32 unk348;      // used
    /* 0x34C */ f32 unk34C;      // used
    /* 0x350 */ u8  pad350[0x4];
    /* 0x354 */ f32 unk354;
    /* 0x358 */ f32 unk358;
    /* 0x35C */ f32 unk35C;
    /* 0x360 */ u32 pad360;
    /* 0x364 */ f32 unk364;
    /* 0x368 */ s16 unk368;
    /* 0x36A */ u16 unk36A;
    /* 0x36C */ u16 *unk36C;
    /* 0x370 */ u8  pad370[0x4];
    /* 0x374 */ f32 unk374;      // used
    /* 0x378 */ u32 pad378;
    /* 0x37C */ f32 unk37C;
    /* 0x380 */ f32 unk380;
    /* 0x384 */ f32 unk384;
    /* 0x388 */ f32 unk388;
    /* 0x38C */ f32 unk38C;
    /* 0x390 */ f32 unk390;
    /* 0x394 */ s32 pad394;
    /* 0x398 */ f32 unk398;
    /* 0x39C */ f32 unk39C;
    /* 0x3A0 */ f32 unk3A0;
    /* 0x3A4 */ f32 pad3A4;
    /* 0x3A8 */ f32 unk3A8;
    /* 0x3AC */ u8  pad3AC[0x20];
    /* 0x3CC */ s16 unk3CC;
    /* 0x3CE */ u16 pad3CE;
    /* 0x3D0 */ struct127 *unk3D0;
    /* 0x3D4 */ struct127 *unk3D4;
    /* 0x3D8 */ u8  pad3D8[0x8];
    /* 0x3E0 */ f32 unk3E0;
    /* 0x3E4 */ u32 pad3E4;
    /* 0x3E8 */ u8  unk3E8;
    /* 0x3E9 */ u8  pad3E9[0xb];
    /* 0x3F4 */ f32 unk3F4;
    /* 0x3F8 */ f32 unk3F8;
    /* 0x3FC */ u8  pad3FC[0x1d0];
    /* 0x5CC */ f32 unk5CC;
    /* 0x5D0 */ u32 pad5D0;
    /* 0x5D4 */ s32 unk5D4;
    /* 0x5D8 */ f32 unk5D8;
    /* 0x5DC */ u8  pad5DC[0xC];
    /* 0x5E8 */ f32 unk5E8;
    /* 0x5EC */ s32 pad5EC;
    /* 0x5F0 */ s32 unk5F0;
    /* 0x5F4 */ u8  pad5F4[0x6];
    /* 0x5FA */ s16 unk5FA;
    /* 0x5FC */ u16 unk5FC;
    /* 0x5FE */ u16 unk5FE;
    /* 0x600 */ u8  pad600[0x18];
    /* 0x618 */ s32 unk618; // struct ptr
    /* 0x61C */ u8  pad61C[0x48];
    /* 0x664 */ f32 unk664;
    /* 0x668 */ f32 unk668;
    /* 0x66C */ f32 unk66C;
    /* 0x670 */ f32 unk670;
    /* 0x674 */ f32 unk674;
    /* 0x678 */ u8  pad678[0x4];
    /* 0x67C */ f32 unk67C;
    /* 0x680 */ u8  pad680[0x18];
    /* 0x698 */ s32 unk698;
    /* 0x69C */ u8  pad69C[0x14];
    /* 0x6B0 */ s32 unk6B0;
    /* 0x6B4 */ u8  pad6B4[0x14];
    /* 0x6C8 */ s32 unk6C8;
    /* 0x6CC */ u8  pad6CC[0x30];
    /* 0x6FC */ s32 unk6FC; // struct pointer
    /* 0x700 */ u8  pad700[0xC];
                s16 unk70C;
                s16 unk70E;
                s16 unk710;
                s16 unk712;
                u8  pad714[0xC];
                f32 unk720;
                f32 unk724;
                f32 unk728;
                f32 unk72C;
                u8  pad730[0xC];
    /* 0x73C */ s16 unk73C;
    /* 0x73E */ u8  pad73E[0x42];
                f32 unk780;
                u8  pad784[0x30];
    /* 0x7B4 */ f32 unk7B4; // used
    /* 0x7B8 */ f32 unk7B8;
    /* 0x7BC */ f32 unk7BC;
    /* 0x7C0 */ u8  pad7C0[0x8];
                s32 unk7C8;
    /* 0x7CC */ s32 unk7CC;
    /* 0x7D0 */ u8  pad7D0[0x14];
                u8  unk7E4;
                u8  pad7E5;
                u16 unk7E6;
    /* 0x7E8 */ f32 unk7E8;
    /* 0x7EC */ u32 pad7EC;
    /* 0x7F0 */ u32 pad7F0;
    /* 0x7F4 */ u16 unk7F4;
    /* 0x7F6 */ u16 unk7F6;
                f32 unk7F8;
                f32 unk7FC;
                f32 unk800;
    /* 0x7F8 */ u8  pad814[0x68];
    /* 0x86C */ f32 unk86C;
    /* 0x870 */ s32 unk870; // struct pointer
                f32 unk874;
                f32 unk878;
                f32 unk87C;
    /* 0x874 */ u8  pad880[0x3C];
    /* 0x8BC */ s32 unk8BC;
    /* 0x8C0 */ u8  pad8C0[0x2D];
                u8  unk8ED;
                u8  pad8EE[0xB1];
}; // size 0x9A0

// func_80002E50
typedef struct {
    u16 unk0;
    u16 unk2;
    OSMesgQueue *unk4;
    OSMesgQueue *unk8;
    OSMesgQueue *unkC;
    OSMesgQueue *unk10;
    s32 (*unk14)(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    s32 (*unk18)(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
} struct158;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
} struct160; // size 0x14

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
} struct161; // size 0x18

typedef struct {
    u8  pad0[0x8];
    s32 unk8;
    u8  padC[0x2];
    s8  unkE;
    s8  padF;
    u8  pad10[0x8];
    s32 unk18;
    u8  pad1C[0x2];
    s8  unk1E;
    s8  pad1F;
    u8  pad20[0x8];
    s32 unk28;
    u8  pad2C[0x2];
    s8  unk2E;
    s8  pad2F;
} struct162;

typedef struct {
    u16 unk0;
    u8  pad2[0xA];
    u8  unkC;
    u8  padD[0x2B];
} struct163; // size 0x38

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
} struct164;

typedef struct {
    s32 unk0;
    u8  pad[0x14];
    f32 unk18;
} struct165;

typedef struct {
    s32 unk0;  // used
    s32 unk4;  // used
    s32 unk8;  // used
} struct167;

typedef struct {
    s32 unk0;
    s32 unk4;
    f32 unk8;
    u8  unkC[0x8];
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    u8  pad2C[0x30];
    f32 unk5C;
} struct168;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8  pad12[0x3];
    u8  unk15;
} struct169;

typedef struct {
    s32 unk0; // sp60
    u8  pad4[0x10];
    f32 unk18;
    f32 unk1C;
    u8  pad20[0x4];
    f32 unk24;
    s8  unk28;
    s8  unk29;
    s8  unk2A;
    s8  unk2B;
    f32 unk2C; // sp8C
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8  pad3C[0x4];
    s32 unk40; // sp A0  // guess f32
    f32 unk44;           // guess f32
    s16 unk48;
    s16 unk4A;
    f32 unk4C;           // guess f32
    f32 unk50; // spB0   // guess f32
    s8  unk54;
    s8  unk55;
    s8  unk56;
    s8  unk57;
    s8  unk58;
    s8  unk59;
    s8  unk5A;
    s8  unk5B;
    s8  unk5C;
    s8  unk5D;
    s16 unk5E;
    s16 unk60; // spc0
    s16 unk62;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70; // spD0
    f32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
    f32 unk8C;
    f32 unk90; // spF0
    f32 unk94;
    s32 unk98;
    s32 unk9C;
    s8  unkA0; // sp100
    s8  unkA1;
    s8  unkA2;
    s8  unkA3;
    s8  unkA4;
    s8  unkA5;
} struct170;

typedef struct {
    f32 unk0;   // sp8C
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;  // sp9C
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;  // spAC
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;  // spBC
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40; // spCC
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50; // spDC
    f32 unk54;
    s32 unk58;
    s16 unk5C;
    s16 unk5E;
    s8  unk60; // spEC
    u8  pad61[0x3];
    s32 unk64;
    s8  unk68;
    s8  unk69;
    s8  unk6A;
    s8  unk6B;
    s8  unk6C;
    s8  unk6D;
    s8  unk6E;
    s8  unk6F;
    s8  unk70; // spFC
    s8  unk71;
    s8  unk72;
    u8  unk73;
    s32 unk74; // sp100
    s8  unk78;
    u8  pad79;
    s16 unk7A;
    s16 unk7C;
} struct171;

typedef struct {
    s32 unk0;
    u8  unk4;
    u8  pad5[0x3];
} struct172; // 0x8 bytes?

typedef struct {
    s32 unk0;
    f32 unk4;
    u8  unk8;
    u8  pad9[0x3];
} struct173;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} struct174; // size 0x10

typedef struct {
    struct127* unk0;
    u8  unk4;
    u8  pad5;
    s16 unk6;
    s16 unk8;
    s16 unkA;
} struct175;

typedef struct {
    struct39* unk0;
    f32 unk4;
    s32 unk8;
    f32 unkC;
} struct176;

typedef struct {
    s16 unk0;
    s16 pad2;
    s32 unk4;
    s32 unk8;
} struct177;

typedef struct {
    s16 unk0;
    s16 pad2;
    s16 unk4;
    u8  unk6[0x2E];
} struct178; // size 0x34

typedef struct {
    s32 unk0;
    f32 unk4;
    s32 unk8;
    s32 unkC;
    f32 unk10;
    s32 unk14;
} struct180; // size 0x18

typedef struct {
    s8  unk0;
    u8  pad[0x3];
    struct180 unk4;
    f32 unk1C;
    s8  unk20;
} struct179;

typedef struct {
    u8 pad[0x170];
    s32 unk170;
} struct181;

typedef struct {
    struct127 *unk0;
    u8 unk4;
    u8 pad5[0x1];
    s16 unk6;
} struct182;

typedef struct {
    s8  unk0;
    u8  pad1[0x3];
    s32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s8  unk24;
    s8  unk25;
    s8  unk26;
} struct183; // size 0x27

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} struct184; // size 0x20, 32 bytes

typedef struct {
    struct127* unk0;
    u8  unk4;
    u8  pad5;
    s16 unk6;
    s8  unk8;
    s8  unk9;
    s8  unkA;
} struct185;

typedef struct {
    u8 pad0[0x8];
    s32 unk8; // pointer
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u16 unk16;
    u8  pad18[0xC];
    u16 unk24;
    u8  pad26[0xA];
    u16 unk30;
    u16 unk32;
    u8  pad34[0x28];
    s32 unk5C;
    u8  pad60[0x14];
    s32 unk74; // pointer
    u8  pad78[0xC];
    s32 unk84;
    s32 unk88;
    u8  pad8C[0x8];
    s16 unk94;
    s16 unk96;
    u8  pad98[0x2];
    u8  unk9A;
    u8  pad9B[0x5];
} struct186; // size 0xA0, 160 bytes

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8  unk6;
    u8  unk7;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u8  pad14;
    u8  unk15;
} struct187;

typedef struct {
    s32 unk0;
    s32 unk4;
    struct158* unk8;
} struct188;

typedef struct struct189 struct189;

struct struct189 {
    s32 unk0;
    s32 unk4;
    struct189* unk8;
};

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8  padC[0x8];
    f32 unk14;
    u8  pad18[0x8];
    f32 unk20;
    u8  pad24[0xC];
} struct190;

typedef struct {
    f32 unk0;
    u8  pad4[0x3C];
    f32 unk40;
    u8  pad44[0x3C];
    f32 unk80;
    u8  pad84[0x2C];
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u8  padB0[0x4];
    f32 unkB4;
    u8  padB8[0x3C];
    f32 unkF4;
    u8  padF8[0x3C];
    f32 unk134;
    u8  unk138[0x3C];
    f32 unk174;
    f32 unk178;
    f32 unk17C;
    f32 unk180;
    f32 unk184;
    f32 unk188;
    f32 unk18C;
    f32 unk190;
    f32 unk194;
} struct191; // size 0x194

typedef struct {
    f32 unk0;
    s32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
} struct192; // size 0x14

typedef struct {
    struct127 *unk0;
    struct127 *unk4;
    u8 unk8;
    u8 unk9;
} struct193;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    s16 unk14;
} struct194;

typedef struct {
    u16 unk0;
    u8  pad2[0x1E];
    u16 unk20;
} struct195;

typedef struct {
    s32 unk0;
    struct127 *unk4;
    s32 unk8;
    s32 unkC;
} struct198;

typedef struct {
    u8  pad0[0x4];
    s32 unk4;
    u8  pad8[0x1C];
    f32 unk24;
    f32 unk28;
    f32 unk2C;
} struct199; // size 0x30

typedef struct {
    f32 unk0;
    f32 unk4;
} struct200;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
} struct201;

typedef struct {
    u8  pad0[0x1C];
    s16 unk1C;
    u8  pad1E[0xA];
    s8  unk28;
} struct202;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} struct203;

typedef struct {
    u8 pad0[0x28];
    struct203 *unk28;
    u8  pad2C[0x8];
    u8  unk34;
} struct204;

typedef struct {
    u8 pad0[0x14];
    u8 unk14;
} struct205;

typedef struct {
    struct205 *unk0;
    u16 unk4;
    u8  pad6[0x6];
    u8  unkC;
    u8  padD[0x63];
    s32 *unk70; // tbd
} struct206;

typedef struct {
    u8 pad0[0x28];
    struct206 *unk28;
} struct207;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u8  padC[0x4];
    s32 unk10;
    u8  pad14;
    u8  unk15;
} struct208;

typedef struct {
    f32 unk0;
    f32 unk4;
    u8  pad8[0x3];
    u8  unkB;
    u8  padC[0x4];
    f32 unk10;
    f32 unk14;
    u8  pad18[0x3];
    u8  unk1B;
    u8  pad1C[0x4];
    f32 unk20;
    f32 unk24;
    f32 unk28;
    u8  pad2C[0x3];
    u8  unk2F;
} struct209;

typedef struct {
    s32 unk0;
    u8  pad4[0xC];
    s32 unk10;
    s32 unk14;
    union {
        struct UBYTES4 b;
        struct WORD    i;
    } unk18;
    u8  unk1C[0x2];
    u8  unk1E;
    u8  unk1F;
    u8  pad20[0xC];
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    s32 unk3C;
    s16 unk40;
    s16 unk42;
    s16 unk44;
    u8  pad46[0xA];
    s16 unk50;
    s16 unk52;
    s16 unk54;
    s16 pad56;
    s32 unk58;
    u8  pad5C[0x4];
    s16 unk60;
    s16 unk62;
    s16 unk64;
    u8  pad66[0xA];
    s16 unk70;
    s16 unk72;
    s16 unk74;
    u8  pad76[0xA];
    u8  unk80;
    u8  unk81;
    u8  pad82[0x2];
    s32 unk84;
    u32 pad88;
    s32 unk8C[4];
    s32 unk9C;
    s32 unkA0;
    s32 unkA4[4];
    s32 unkB4;
    u8  padB8[0x48];
    s32 unk100;
    u8  pad104[0xC];
    s32 unk110;
    u8  pad114[0x8];
    s32 unk11C;
} struct210;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
} struct211; //size 0x18

typedef struct {
    s32 unk0;
    union {
        struct UBYTES4 b;
        struct WORD   i;
    } unk4;
    u8  unk8;
    u8  unk9;
} struct212;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8  pad8[0x8];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8  pad18[0x8];
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    u8  pad28[0x8];
    s16 unk30;
    s16 unk32;
    s16 unk34;
    s16 unk36;
    u8  pad38[0x8];
} struct213;

typedef struct {
    u8 pad0[0x7];
    u8 unk7;
    u8 pad8[0x3];
    u8 unkB;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} struct214;

typedef struct {
    u8 pad0[0x8];
    s32 unk8;
    union {
        struct SHORTS s;
        struct WORD   i;
    } unkC;
    s32 unk10;
    s32 unk14;
} struct215;


struct struct216 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
};

typedef struct {
  f32 unk0;
  s32 unk4;
  u8  pad8[0x7];
  u8  unkF;
} struct217;

typedef struct {
    u16 unk0;
    u8  pad2[0x2];
    s32 unk4;
    s32 unk8;
    u8  padC[0x8];
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 pad17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
} struct218;

typedef struct {
    s32 unk0;
    s32 unk4;
    u8  unk8;
    u8  pad9[9];
    u8  unk12;
} struct219;

typedef struct {
    s8  unk0;
    s8  unk1;
    s16 unk2;
    u8  unk4;
} struct220;

typedef struct {
    s32 unk0; // struct pointer
    f32 unk4;
    f32 unk8;
} struct221; // size 0xC

typedef struct {
    u8 unk0[8];
} struct222; //size 0x08

typedef struct {
    s32 unk0;
    union {
        u8  ub;
        s32 w;
    } unk4;
    u8  unk8;
    u8  unk9;
} struct223;

typedef struct struct224 struct224;

struct struct224 {
    u8  pad0[0x10];
    s32 unk10;
    u8  unk14;
    u8  pad15[0xB];
    s16 unk20;
    u8  pad22[0x2];
    s32 unk24;
    s32 unk28;
    u8  unk2C[0x4];
    struct224 *unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    struct224 *unk44;
};

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    u8  pad20[0x4E];
    u8  unk6E;
} struct228;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8  pad12[0x12];
    u8  unk24;
} struct227;

typedef struct {
    u8  pad0[0x5];
    u8  unk5;
    u8  unk6;
    u8  unk7;
    u8  pad8;
    u8  unk9;
    u8  padA[0x4];
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8  unk16[0x19];
    u8  unk2F;
} struct226;

typedef struct {
    struct127 *unk0; // struct127 pointer?
    u8  unk4;
    u8  pad5[0x9];
    u8  unkE; // 6 bytes?
    s8  unkF;
    s16 unk10;
    u8  unk12;
    u8  pad13;
    struct226 *unk14;
    struct227 *unk18; // struct227 pointer?
    f32 unk1C;
    s32 unk20; // struct17 pointer?
    s8  unk24;
    u8  unk25;
    u8  pad26[0x2];
    s16 unk28;
    u8  unk2A;
    u8  pad2B[0x2];
    u8  unk2D;
    u8  pad2E[0x2];
    s32 unk30;
} struct225;

// only used by func_15163B98 ?
typedef struct {
    u8 pad0[0x28];
    struct228 *unk28;
    u8  pad2C[0x14];
    f32 unk40;
} struct230;

typedef struct {
    s8  unk0;
    s8  unk1;
    s16 unk2;
    s8  unk4;
    u8  pad5;
} Header; // size 0x6

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8  unk12;
    u8  pad13;
} struct232; // size 0x14

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8  padC[0xC];
    f32 unk18;
    u8  unk1C[0x8];
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    u8  pad30[0x14];
} struct233; // size 0x44

typedef struct {
    s8  unk0;
    u8  pad1[0x3];
    s32 unk4;
} struct234; // size 0x8;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} struct235;

typedef struct {
    u8 pad0[0x28];
    struct235 unk28; // is this just 8 f32s ?
} struct236;

typedef struct {
    f32 unk0[5];
    struct226 *unk14;
    struct235 unk18; // is this just 8 f32s ?
} struct237;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s8  unk24;
    s8  unk25;
    s8  unk26;
    s8  unk27;
    s8  unk28;
    s8  pad29[0x7];
} struct238;

typedef struct {
    u8 pad0[0x12];
    u8 unk12;
    u8 pad13[0x35];
    u8 unk48;
} struct239;

typedef struct {
    u8  pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8  pad16[0x66];
    s32 unk7C;
} struct240;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
} struct241; // size 0x34

typedef struct {
    u8  pad0[0x14];
    struct226 *unk14;
    s32 *unk18; // struct ptr?
    f32 unk1C;
    s32 unk20;
    s32 *unk24; // struct17 struct ptr?
} struct242;

typedef struct {
    f32 unk0;
    u8  unk4;
    u8  pad5[0x3];
} struct243;

typedef struct {
    s32 unk0;
    u8  unk4;
    u8  unk5;
    u8  pad6[0x2];
} struct244;

typedef struct {
    s32 unk0; // ptr
    s32 unk4; // ptr
    s32 unk8; // ptr
    s8  unkC;
    u8  unkD;
    u8  padE[0x2];
} struct245; // size 0x10

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Header2; // size 0xC

typedef struct {
    u8  pad0[0x8];
    u8 *unk8; // ptr?
    u8  unkC[0x4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    u8  unk2C[0x4];
    s32 unk30;
} struct246;

typedef struct {
    u8 pad0[0x760];
} struct247; // maybe naudio?

typedef struct {
    u16 unk0; // is this a pointer?
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
} struct248; // size 0xC;

typedef struct struct249 struct249;

struct struct249 {
    u16 unk0;
    u8  pad2[0x16];
    struct249 *next;
};

typedef struct {
    u16 length;
    u8  pad2[0x2];
    struct249 *unk4;
    s32 unk8;         // tbd
} struct250; // size 0xC;

typedef struct {
    u16 unk0;
    u8  pad2[0x16];
    union {
      s32 w;
      u16 h[2];
    } unk18;
    s32 unk1C;
} struct251;

typedef struct {
    u8 pad0[0x15];
    u8 unk15;
    u8 pad16[0x2];
} struct252; // size 0x18

typedef struct {
    u8  pad0[0x14];
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    u8  pad20[0x8];
} struct253; // size 0x28

typedef struct {
    u8 pad0[0x1A];
    s16 unk1A;
} struct254;

struct struct255 {
    u8 pad0[0x240];
    struct254 *unk240;
};

struct struct256 {
    u8 pad0[0x80];
    struct256 *unk80;
    f32 unk84;
    f32 unk88;
    f32 unk8C;
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    f32 unkB0;
    u8  unkB4;
    u8  padB5[0x3];
}; // size 0xB8

typedef struct {
    u8 pad0[0xD16];
    s16 unkD16;
} struct257;

typedef struct {
    s32 unk0;
    u8  pad4[0x2];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 unkC;
} struct258;

typedef struct {
    u8  unk0[0x74];
    f32 unk74;
    f32 unk78;
    u8  unk7C[0xC];
    f32 unk88;
    f32 unk8C;
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    f32 unkB0;
    f32 unkB4;
    u8  unkB8[0xC8];
} struct259; // size 0x180

typedef struct {
    u8  pad0[0xD];
    u8  unkD;
    s16 unkE;
    s8  unk10;
    s8  unk11;
    s8  unk12;
    u8  unk13;
    s32 unk14; // union here?
    u8  pad18[0xC];
} struct260; // size at least 0x24

#endif
