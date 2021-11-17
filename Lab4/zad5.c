#include <stdio.h>

int main() {
    double a,b;
    char operator;

    printf("Podaj wyrażenie: ");
    scanf("%lf%c%lf", &a, &operator, &b);

    switch(operator) {
        case '+':
            a = a + b;
            break;
        case '-':
            a = a - b;
            break;
        case '/':
            a = a / b;
            break;
        case '*':
            a = a * b;
            break;
    }

    printf("Wynik: %lf\n", a);

    return 0;
}