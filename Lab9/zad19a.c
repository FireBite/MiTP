#include <stdio.h>
#include "sortchar.h"
#include "string.h"
#include "stdlib.h"

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
            else if (!strcmp(argv[2], "merge")) {
                parseResult = 'm';
            }
        }
        else if (argc == 2){
            if (!strcmp(argv[1], "-nbubble")) {
                parseResult = 'b';
            }
            else if (!strcmp(argv[1], "-nmerge")) {
                parseResult = 'm';
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
        printf("bubble - for bubble sort\n");
        printf("merge - for merge sort\n");
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
        bubble_char(tab, len, 0);
        printf("[Bubble] ");
    }
    if (parseResult == 'm') {
        merge_char(tab, len, 0);
        printf("[Merge ] ");
    }

    print_array(tab, len, 0);

    for (int n = 0; n < len; n++)
        free(tab[n]);

    free(tab);

    return 0;
}