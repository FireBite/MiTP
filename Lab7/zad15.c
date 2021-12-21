#include <stdio.h>
#include "matrix.h"

#define CHECK_ERROR(a) if(!(a)) { printf("ERROR\n"); return 0; }

int main() {
    printf("Creating matrix 10x10\n");
    MATRIX matrix = m_create(10, 10);

    m_printf(&matrix);

    printf("Entering elements\n");
    m_put(&matrix, 1, 1, 10);
    m_put(&matrix, 10, 1, 9);
    m_put(&matrix, 1, 10, 8);
    m_put(&matrix, 10, 10, 420);

    m_printf(&matrix);

    printf("Reading elements\n");
    printf("Value: %d\n", m_get(&matrix, 1, 1));
    printf("Value: %d\n", m_get(&matrix, 10, 1));
    printf("Value: %d\n", m_get(&matrix, 1, 10));
    printf("Value: %d\n", m_get(&matrix, 10, 10));

    printf("Removing matrix\n");
    m_remove(&matrix);

    int x, y;

    printf("Creating matrix from user input\n");
    printf("Matrix size: ");
    scanf("%d %d", &x, &y);

    printf("Enter elements\n");
    CHECK_ERROR(m_scanf_(&matrix, x, y));
    CHECK_ERROR(m_printf(&matrix));

    printf("Removing matrix\n");
    CHECK_ERROR(m_remove(&matrix));

    return 0;
}