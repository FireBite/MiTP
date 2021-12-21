#include <stdlib.h>
#include "matrix.h"

int m_remove(MATRIX *m) {
    if (!m || !m->ptr)
        return 0;

    m->x = 0;
    m->y = 0;

    free(m->ptr);
    m->ptr = NULL;
    
    return 1;
}