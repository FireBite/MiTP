#include "point.h"

#define ABS(a) (a < 0 ? -(a) : (a))

float area(struct POINT a, struct POINT b, struct POINT c) {
    int raw = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return ABS(raw) * 0.5;
}