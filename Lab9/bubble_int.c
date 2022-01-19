#include "sortint.h"

void bubble_int(int data[], int len) {
    int hasChanged;
    int iteration = 0;

    do {
        hasChanged = 0;
        for (int i = 0; i < len - 1 - iteration; i++) {
            if (data[i] > data[i+1]) {
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                hasChanged = 1;               
            }
        }
        iteration++;
    }
    while (hasChanged);
}