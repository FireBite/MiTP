#ifndef _MATRIX_H
#define _MATRIX_H

typedef struct MATRIX_S {
    int x;
    int y;
    int *ptr;
} MATRIX;

MATRIX m_create(int x, int y);
MATRIX m_create_empty();
int m_remove(MATRIX *m);

int m_get(MATRIX *m, int x, int y);
int m_put(MATRIX *m, int x, int y, int value);

int m_printf(MATRIX *m);
int m_scanf(MATRIX *m);
int m_scanf_(MATRIX *m, int x, int y);

int m_determinant(MATRIX *m);
int m_multiplication(MATRIX *m1, MATRIX *m2, MATRIX *result);

#endif