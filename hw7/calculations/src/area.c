#include "area.h"
#include <math.h>


int area_rectangle(int a, int b)
{
    return a * b;
}

double area_triangle(int a, int h)
{
    return 0.5 * a * h;
}

double area_circle(int r)
{
    return 3.14 * r;
}

double area_trapezoid(int a, int b, int h)
{
    return 0.5 * (a + b) * h;
}

double area_hexagon(int a)
{
    return 0.5 * (3 * sqrt(3) * pow(a, 2.0));
}