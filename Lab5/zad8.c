#include <stdio.h>

int main() {
    int n;
    printf("Box size: ");
    scanf("%d", &n);
    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("\t");

        if(i == 0 || i == n-1) {
            for(int k = 0; k < n; k++)
                printf("%%");
        }
        else {
            printf("%%");
            for(int k = 0; k < n-2; k++)
                printf(" ");
            printf("%%");
        }

        printf("\n");
    }

    printf("\n");
    return 0;
}