#include <stdio.h>
#include "matrix.h"

int m_scanf(MATRIX *m) {
    for (int x = 0; x < m->x; x++) {
        for (int y = 0; y < m->y; y++) {
            if (!scanf("%d", m->ptr + (y + x * m->y)))
                return 0;
        }
    }

    return m->x * m->y;
}