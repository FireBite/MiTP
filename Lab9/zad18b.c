#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

int comp_int(const void *ad1, const void *ad2) {
    return *(int *) ad1 - *(int *) ad2;
}

void print_array(int arr[], int len) {
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

char parse_args(int argc, char *argv[]) {
    char parseResult = 0;

    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'n') {
         if (argv[1][2] == '\0' && argc >= 2) {
            if (!strcmp(argv[2], "bubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[2], "qsort")) {
                parseResult = 'm';
            }
        }
        else {
            if (!strcmp(argv[1], "-nbubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[1], "-nqsort")) {
                parseResult = 's';
            }
        }
    }

    return parseResult;
}

int main(int argc, char *argv[]) {
    char parseResult = 0;
    int len = 0;

    parseResult = parse_args(argc, argv);

    if (!parseResult) {
        printf("%s\n", argv[0]);
        printf("usage: %s –nvalue\n\n", argv[0]);
        printf("Possible values:\n");
        printf("qsort - for built-in qsort\n");
        printf("bubble - for bubble sort\n");
        return 0;
    }
    
    while (len <= 1) {
        printf("Length: ");
        while(!scanf("%d", &len));
    }
    int *data = (int*) malloc(sizeof(int) * len);

    printf("Data: ");
    for (int n = 0; n < len; n++) {
        int val;

        while(!scanf("%d", &val));
        data[n] = val;
    }

    printf("[Unsort] ");
    print_array(data, len);
    
    if (parseResult == 'b') {
        sort(data, len, sizeof(int), comp_int);
        printf("[Bubble] ");
    }
    if (parseResult == 's') {
        qsort(data, len, sizeof(int), comp_int);
        printf("[QSort ] ");
    }

    print_array(data, len);
    free(data);

    return 0;
}