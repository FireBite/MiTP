#ifndef _SORT_H
#define _SORT_H
#include <stdlib.h>

void swap(void *ad1, void *ad2, int bytes);
void sort(void * base, size_t nel, size_t width, int (*compar)(const void *, const void *));

#endif