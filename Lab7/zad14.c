#include <stdio.h>
#include "point.h"

int main() {
    struct POINT a, b, c;

    printf("Point A: ");
    scanf("%d %d", &(a.x), &(a.y));


    printf("Point B: ");
    scanf("%d %d", &(b.x), &(b.y));


    printf("Point C: ");
    scanf("%d %d", &(c.x), &(c.y));

    printf("\nArea:      %f", area(a, b, c));
    printf("\nPerimeter: %f\n", perimeter(a, b, c));

    return 0;
}