#include <stdlib.h>
#include "matrix.h"

MATRIX m_create(int x, int y) {
    MATRIX m;
    
    m.x = x;
    m.y = y;
    m.ptr = calloc(x * y, sizeof(int));

    return m;
}