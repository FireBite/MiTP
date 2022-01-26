#include "sort.h"
#include <string.h>

void swap(void *ad1, void *ad2, int bytes) {
    void *tmp = (void*) malloc(bytes);
    memcpy(tmp, ad1, bytes);
    memcpy(ad1, ad2, bytes);
    memcpy(ad2, tmp, bytes);
    free(tmp);
}

void sort(void* base, size_t nel, size_t width, int (* compar)(const void *, const void *)) {
    int hasChanged;
    size_t iteration = 0;

    do {
        hasChanged = 0;
        for (size_t i = 0; i < nel - 1 - iteration; i++) {
            if (compar(base + i * width, base + ((i + 1) * width)) > 0) {
                swap(base + i * width, base + (i + 1) * width, width);
                hasChanged = 1;               
            }
        }
        iteration++;
    }
    while (hasChanged);
}