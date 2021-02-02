#include <ultra64.h>
#include "functions.h"
#include "variables.h"

void guMtxXFML(Mtx *m, float x, float y, float z, float *ox, float *oy, float *oz) {
    f32 mf[4][4];

    guMtxL2F(&mf, m);
    guMtxXFMF(&mf, x, y, z, ox, oy, oz);
}

void guMtxCatL(Mtx *m, Mtx *n, Mtx *res) {
    f32 mf[4][4];
    f32 nf[4][4];
    f32 resf[4][4];

    guMtxL2F(&mf, m);
    guMtxL2F(&nf, n);
    guMtxCatF(&mf, &nf, &resf);
    guMtxF2L2(&resf, res);
}
