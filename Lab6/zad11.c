#include <stdio.h>

void funkcja() {
    static int calls = 0;
    calls++;
    printf("%d\n", calls);
}

int main() {
    printf("First call\n");
    funkcja();

    printf("\nNext 99 calls\n");
    for(int i = 1; i < 100; i++)
        funkcja();
    
    return 0;
}