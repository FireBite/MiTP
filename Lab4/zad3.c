#include <stdio.h>

int main() {
    double tempC;
    
    printf("C: ");
    scanf("%lf", &tempC);

    tempC = tempC*1.8 + 32;

    printf("F: %lf\n", tempC);

    return 0;
}