#include <stdio.h>

long long fib(long long a, long long b, int n) {
    return (--n > 0) ? fib(b, a+b, n) : a;
}

int main() {
    int n;
    printf("Element: ");
    scanf("%d", &n);

    printf("%lld\n", fib(1, 1, n));

    return 0;
}