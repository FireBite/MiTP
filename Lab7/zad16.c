#include <stdio.h>
#include "matrix.h"

#define CHECK_ERROR(a) if(!(a)) { printf("ERROR\n"); return 0; }

int main() {
    int x, y;
    MATRIX matrix = m_create_empty();

    printf("Creating matrix from user input\n");
    printf("Matrix size: ");
    scanf("%d %d", &x, &y);

    printf("Enter elements\n");
    CHECK_ERROR(m_scanf_(&matrix, x, y));
    CHECK_ERROR(m_printf(&matrix));

    printf("Det: %d\n", m_determinant(&matrix));

    printf("Removing matrix\n");
    CHECK_ERROR(m_remove(&matrix));

    return 0;
}