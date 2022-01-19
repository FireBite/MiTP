#include "sortchar.h"
#include "string.h"

void bubble_char(char *data[], int len, int start) {
    int hasChanged;
    int iteration = 0;

    do {
        hasChanged = 0;
        for (int i = start; i < len - 1 - iteration; i++) {
            if (strcmp(data[i], data[i+1]) > 0) {
                char *temp = data[i];
                data[i] = data[i+1];  
                data[i+1] = temp;
                hasChanged = 1;    
            }
        }
        iteration++;
    }
    while (hasChanged);
}