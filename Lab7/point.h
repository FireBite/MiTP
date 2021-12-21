#ifndef POINT_H
#define POINT_H

struct POINT {
    int x;
    int y;
};

float area(struct POINT a, struct POINT b, struct POINT c);
float perimeter(struct POINT a, struct POINT b, struct POINT c);

#endif