#include "matrix.h"

int m_get(MATRIX *m, int x, int y) {
    return m->ptr[--y + --x * m->y];
}