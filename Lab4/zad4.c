#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    
    if(a - (int)a != 0) {
        printf("Liczba nie jest całkowita\n");
        return 0;
    }

    printf("Liczba całkowita\nLiczba jest %s \n", (int)a % 2 == 0 ? "parzysta" : "nieparzysta");

    return 0;
}