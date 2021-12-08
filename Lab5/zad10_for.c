#include <stdio.h>

long long fib(int n) {
    long long p = 1, pp = 1;
    
    if (n <= 2)
        return 1;
    
    while (n-2) {
        long long temp = p;
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

    printf("%lld\n", fib(n));

    return 0;
}