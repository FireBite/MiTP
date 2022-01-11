#include "matrix.h"
#include "stdlib.h"

int calc_det(int *m, int len) {
    if(len == 1)
        return m[0];
    
    if(len == 2)
        return m[0] * m[3] - m[1] * m[2];
    
    int result = 0;

    for(int i = 0; i < len; i++) {
        int x_throw = 0, x_write = 0;
        int *new_m = malloc((len - 1) * (len - 1) * sizeof(int));

        for(int x = 0; x < len; x++) {
            if(x == i) continue;

            for(int y = 1; y < len; y++) {
                new_m[y - 1 + x_write * (len - 1)] = m[y + x * len];
            }

            x_write++;
        }

        result += calc_det(new_m, len - 1) * (i % 2 ? -1 : 1) * (m[i * len]);
        free(new_m);
    }

    //free(new_m);
    return result;
}

int m_determinant(MATRIX *m) {
    if(!m || !m->ptr)
        return __INT_MAX__;

    if(m->x > 0 && m->x != m->y)
        return __INT_MAX__;

    return calc_det(m->ptr, m->x);
}