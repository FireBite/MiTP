#include <stdio.h>
#include "matrix.h"

#define CHECK_ERROR(a) if(!(a)) { printf("ERROR\n"); return 0; }

int main() {
    int x, y;
    MATRIX m1 = m_create_empty();
    MATRIX m2 = m_create_empty();
    MATRIX res = m_create_empty();

    printf("Creating matrix 1 from user input\n");
    printf("Matrix size: ");
    scanf("%d %d", &x, &y);

    printf("Enter elements\n");
    CHECK_ERROR(m_scanf_(&m1, x, y));
    CHECK_ERROR(m_printf(&m1));

    printf("Creating matrix 2 from user input\n");
    printf("Matrix size: ");
    scanf("%d %d", &x, &y);

    printf("Enter elements\n");
    CHECK_ERROR(m_scanf_(&m2, x, y));
    CHECK_ERROR(m_printf(&m2));

    printf("Multiplying matrix 1 and matrix 2\n");
    CHECK_ERROR(m_multiplication(&m1, &m2, &res));
    CHECK_ERROR(m_printf(&res));

    printf("Removing matrix\n");
    CHECK_ERROR(m_remove(&m1));
    CHECK_ERROR(m_remove(&m2));
    CHECK_ERROR(m_remove(&res));

    return 0;
}