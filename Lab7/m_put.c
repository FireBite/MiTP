#include "matrix.h"

int m_put(MATRIX *m, int x, int y, int value) {
    if (x <= 0 || x > m->x  || y <= 0 || y > m->y)
        return 0;

    m->ptr[--y + --x * m->y] = value;
    return 1;
}