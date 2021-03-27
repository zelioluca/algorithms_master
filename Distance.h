//
// Created by luca on 27.3.2021.
//

#ifndef ALGORITHMS_DISTANCE_H
#define ALGORITHMS_DISTANCE_H

#include  <iostream>
#include <cmath>

struct point {
    float x;
    float y;
};

float GetDistance(point a, point b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

point PolarToCartesian(float x, float y)
{
    point temp;
    temp.x = sqrt(x*x + y*y);
    temp.y = atan2(y, x);

    return temp;
}

#endif //ALGORITHMS_DISTANCE_H
