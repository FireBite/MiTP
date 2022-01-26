#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sort.h"

int comp_str(const void * ad1, const void * ad2) {
    return strcmp(*(const char **) ad1, *(const char **) ad2);
}

void print_array(char *arr[], int len, int start) {
    for(int i = start; i < len + start; i++)
        printf("%s ", arr[i]);

    printf("\n");
}

char parse_args(int argc, char *argv[]) {
    char parseResult = 0;

    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'n') {
         if (argv[1][2] == '\0' && argc == 2) {
            if (!strcmp(argv[2], "bubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[2], "qsort")) {
                parseResult = 's';
            }
        }
        else if (argc == 2){
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

    char **tab = (char**)malloc(sizeof(char**) * len);

    printf("Data: ");
    for (int n = 0; n < len; n++) {
        char *val = malloc(sizeof(char*));
        
        while(!scanf("%s", val));
        tab[n] = val;
    }

    printf("[Unsort] ");
    print_array(tab, len, 0);
    
    if (parseResult == 'b') {
        sort(tab, len, sizeof(char*), comp_str);
        printf("[Bubble] ");
    }
    if (parseResult == 's') {
        qsort(tab, len, sizeof(char*), comp_str);
        printf("[QSort ] ");
    }

    print_array(tab, len, 0);

    for (int n = 0; n < len; n++)
        free(tab[n]);

    free(tab);

    return 0;
}