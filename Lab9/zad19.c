#include <stdio.h>
#include "sortchar.h"
#include "string.h"
#include "stdlib.h"

void print_array(char *arr[], int len, int start) {
    for(int i = start; i < len + start; i++)
        printf("%s ", arr[i]);

    printf("\n");
}

char parse_args(int argc, char *argv[], int *dataStart) {
    char parseResult = 0;

    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'n') {
         if (argv[1][2] == '\0' && argc > 3) {
            if (!strcmp(argv[2], "bubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[2], "merge")) {
                parseResult = 'm';
            }
            (*dataStart) = 3;
        }
        else if (argc > 2){
            if (!strcmp(argv[1], "-nbubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[1], "-nmerge")) {
                parseResult = 'm';
            }
            (*dataStart) = 2;
        }
    }

    return parseResult;
}

int main(int argc, char *argv[]) {
    char parseResult = 0;
    int dataStart;

    parseResult = parse_args(argc, argv, &dataStart);

    if (!parseResult) {
        printf("%s\n", argv[0]);
        printf("usage: %s –nvalue [data..]\n\n", argv[0]);
        printf("Possible values:\n");
        printf("bubble - for bubble sort\n");
        printf("merge - for merge sort\n");
        return 0;
    }

    int len = argc - dataStart;

    char **tab = (char**)malloc(sizeof(char**) * len);
    for (int i = dataStart; i < dataStart + len; i++)
        tab[i-dataStart] = argv[i];

    printf("[Unsort] ");
    print_array(tab, len, 0);
    
    if (parseResult == 'b') {
        bubble_char(tab, len, 0);
        printf("[Bubble] ");
    }
    if (parseResult == 'm') {
        merge_char(tab, len, 0);
        printf("[Merge ] ");
    }

    print_array(tab, len, 0);

    return 0;
}