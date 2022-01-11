#include "matrix.h"
#include "stdlib.h"

int m_multiplication(MATRIX *m1, MATRIX *m2, MATRIX *result) {
    if (!m1 || !m2 || !result || !m1->ptr || !m2->ptr)
        return 0;

    if (m1->y != m2->x || m1->x == 0 || m2->y ==0 || m2->x == 0)
        return 0;


    if (result->x != m1->x || result->y != m2->y) {
        if (!result->ptr) {
            result->ptr = calloc(m1->x * m2->y, sizeof(int));
        }
        else {
            result->ptr = realloc(result->ptr, sizeof(int) * m1->x * m2->y);
        }
    }

    result->x = m1->x;
    result->y = m2->y;

    for(int x = 0; x < result->x; x++) {
        for(int y = 0; y < result->y; y++) {
            int cell_result = 0;

            for(int cell = 0; cell < m1->y; cell++) {
                cell_result += m1->ptr[cell + x * m1->y] * m2->ptr[y + cell * m2->y];
            }

            result->ptr[y + x * result->y] = cell_result;
        }
    }

    return 1;
}