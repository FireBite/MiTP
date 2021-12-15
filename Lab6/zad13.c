#include <stdio.h>
#include "days.h"

int main() {
    struct DAY dateA;
    struct DAY dateB;

    while (1) {
        printf("First date:  ");
        scanf("%d %d %d", &(dateA.day), &(dateA.month), &(dateA.year));
        printf("Second date: ");
        scanf("%d %d %d", &(dateB.day), &(dateB.month), &(dateB.year));
        
        printf("\nResult: %d days\n\n", days(dateA, dateB));
    }
}