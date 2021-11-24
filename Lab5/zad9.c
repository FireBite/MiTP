#include <stdio.h>

int main() {
    int n;
    printf("Height: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("\t");

        for(int l = 0; l < ((n-i)*2 + 1)/ 2; l++)
            printf(" ");

        for(int k = 0; k < i*2 + 1; k++)
            printf("%%");

        printf("\n");
    }

    printf("\n");
    return 0;
}