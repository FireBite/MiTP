#include <stdio.h>

int calls = 0;

void funkcja() {
    calls++;
    printf("%d\n", calls);
}

int main() {
    printf("First call\n");
    funkcja();

    printf("\nNext 99 calls\n");
    for(int i = 1; i < 100; i++)
        funkcja();
    
}