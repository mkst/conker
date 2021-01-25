#include <ultra64.h>


#define PI 3.14159265358979323846f

void guRotateF(float m[4][4], f32 a, f32 x, f32 y, f32 z) {
    f32 sin_a;
    f32 cos_a;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 xx;
    f32 yy;
    f32 zz;

    guNormalize(&x, &y, &z);
    a *= PI / 180.0f;
    sin_a = sinf(a);
    cos_a = cosf(a);

    sp2C = x * y * (1.0f - cos_a);
    sp28 = y * z * (1.0f - cos_a);
    sp24 = z * x * (1.0f - cos_a);

    guMtxIdentF(m);
    xx = x * x;
    m[0][0] = (1.0f - xx) * cos_a + xx;
    m[2][1] = sp28 - x * sin_a;
    m[1][2] = sp28 + x * sin_a;
    yy = y * y;
    m[1][1] = (1.0f - yy) * cos_a + yy;
    m[2][0] = sp24 + y * sin_a;
    m[0][2] = sp24 - y * sin_a;
    zz = z * z;
    m[2][2] = (1.0f - zz) * cos_a + zz;
    m[1][0] = sp2C - z * sin_a;
    m[0][1] = sp2C + z * sin_a;
}

void guRotate(Mtx *m, f32 a, f32 x, f32 y, f32 z) {
    f32 mf[4][4];
    guRotateF(mf, a, x, y, z);
    guMtxF2L(mf, m);
}
