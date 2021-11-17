#include <stdio.h>

int numSize(int num) {
    int size = 1;
    while(num / 10 != 0) {
        num /= 10;
        size++;
    }

    return size;
}

void prettyPrint(int num) {
    int size = 5 - numSize(num);
    
    while(size) {
        printf(" ");
        size--;
    }
    
    printf("%d\n", num);
}

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    prettyPrint(a);
    prettyPrint(b);
    prettyPrint(c);
    prettyPrint(d);
    printf("-----\n");
    prettyPrint(a+b+c+d);

    return 0;
}