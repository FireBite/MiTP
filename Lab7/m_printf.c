#include <stdio.h>
#include "matrix.h"

int m_printf(MATRIX *m) {
    printf("====\n");

    for (int x = 0; x < m->x; x++) {
        for (int y = 0; y < m->y; y++)
            printf("%d ", m->ptr[y + x * m->y]);

        printf("\n");
    }

    printf("====\n");
}