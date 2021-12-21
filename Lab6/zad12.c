#include <stdio.h>

int main() {
    int sum;
    printf("Money: ");
    scanf("%d", &sum);

    if (sum % 10 != 0 || sum < 20 || sum == 30) {
        printf("Cannot divide %dPLN into notes\n", sum);
        return 1;
    }

    for (int b20 = 0; b20 <= sum / 20; b20++) {
        for (int b50 = 0; b50 <= (sum - b20*20) / 50; b50++) {
            int b100 = ((sum - b50*50 - b20*20) / 100);

            if((b100*100 + b50*50 + b20*20) == sum)
                printf("%dPLN = %d*100 + %d*50 + %d*20\n", sum, b100, b50, b20);
        }
    }

    return 0;
}