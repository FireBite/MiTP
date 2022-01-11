#include <stdlib.h>
#include "matrix.h"

MATRIX m_create(int x, int y) {
    MATRIX m;
    
    m.x = x;
    m.y = y;
    m.ptr = calloc(x * y, sizeof(int));

    return m;
}

MATRIX m_create_empty() {
    MATRIX m;
    
    m.x = 0;
    m.y = 0;
    m.ptr = NULL;

    return m;
}