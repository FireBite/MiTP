#include <stdio.h>

#define PRINT_MONEY(A, B, C) printf("%dPLN = %d*100 + %d*50 + %d*20\n", sum, A, B, C)
#define PRINT_INITIAL() PRINT_MONEY(b100, b50, b20)

int getNoteCount(int money, int note) {
    int count = 0;
    while(money - note >= 0) {
        money -= note;
        count++;
    }

    return count;
}

int main() {
    int sum, b100 = 0, b50 = 0, b20 = 0;
    printf("Money: ");
    scanf("%d", &sum);

    if(sum < 0) {
        printf("Invalid input, negative money\n");
        return 22;
    }

    int temp_sum = sum;
    b100 = getNoteCount(temp_sum, 100);
    temp_sum -= b100 * 100;
    b50 = getNoteCount(temp_sum, 50);
    temp_sum -= b50 * 50;
    b20 = getNoteCount(temp_sum, 20);
    temp_sum -= b20 * 20;

    if(temp_sum) {
        printf("Cannot divide %dPLN into notes (%dPLN left)\n", sum, temp_sum);
        return 22;
    }

    PRINT_INITIAL();

    for(int i = 1; i <= b100; i++) {
        PRINT_MONEY(b100 - i, b50 + 2*i, b20);

        for(int n = 0; n <= b50; n += 2)
            PRINT_MONEY(b100 - i, b50 - n, b20 + 5*i);
    }

    return 0;
}