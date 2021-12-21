#include "point.h"
#include <math.h>

float len(struct POINT a, struct POINT b) {
    return sqrtf(powf(a.x - b.x, 2) + powf(a.y - b.y, 2)); 
}

float perimeter(struct POINT a, struct POINT b, struct POINT c) {
    return len(a, b) + len(b, c) + len(a, c); 
}