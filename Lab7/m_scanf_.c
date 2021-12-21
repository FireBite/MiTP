#include <stdlib.h>
#include "matrix.h"

int m_scanf_(MATRIX *m, int x, int y) {
    if (!m)
        return 0;

    if (x != m->x || y != m->y) {
        if (!m->ptr) {
            m->ptr = calloc(x * y, sizeof(int));
        }
        else {
            m->ptr = realloc(m->ptr, sizeof(int) * x * y);
        }
    }

    if (!m->ptr)
        return 0;

    m->x = x;
    m->y = y;

    return m_scanf(m);
}