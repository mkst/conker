#include <ultra64.h>


void guPerspectiveF(f32 mf[4][4], u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale) {
    f32 yscale;
    s32 row, col;

    guMtxIdentF(mf);
    aspect *= 0.008726646192371845f; // PI / 180.0f
    yscale = cosf(aspect) / sinf(aspect);
    mf[0][0] = yscale;
    fovy *= 0.008726646192371845f;  // PI / 180.0f
    mf[1][1] = cosf(fovy) / sinf(fovy);
    mf[2][2] = (near + far) / (near - far);
    mf[2][3] = -1.0f;
    mf[3][2] = (2.0f * near * far) / (near - far);
    mf[3][3] = 0.0f;

    for (row = 0; row < 4; row++) {
        for (col = 0; col < 4; col++) {
            mf[row][col] = mf[row][col] * scale;
          }
    }

    if (perspNorm != NULL) {
        if ((near + far) <= 2.0f) {
            *perspNorm = 0xFFFF;
        } else {
            *perspNorm = (s16) (u32) (131072.0f / (near + far));
            if (*perspNorm <= 0) {
                *perspNorm = 1;
            }
        }
    }
}

void guPerspective(Mtx *m, u16 *perspNorm, float fovy, float aspect, float near, float far, float scale) {
    f32 mtx[4][4];

    guPerspectiveF(&mtx, perspNorm, fovy, aspect, near, far, scale);
    guMtxF2L(&mtx, m);
}
