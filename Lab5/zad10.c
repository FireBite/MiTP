#include <stdio.h>

int fib(int n) {
    int p = 1, pp = 1;
    
    if (n <= 2)
        return 1;
    
    while (n-2) {
        int temp = p;
        p = p+pp;
        pp = temp;
        n--;
    }
    
    return p;
}

int main() {
    int n;
    printf("Element: ");
    scanf("%d", &n);

    printf("%d\n", fib(n));

    return 0;
}