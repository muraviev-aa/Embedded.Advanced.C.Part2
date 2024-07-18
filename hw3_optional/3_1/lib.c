#include <math.h>
#include "lib.h"

double moment_inertia_rectangle_x(int a, int b)
{
    return b * pow(a, 3) / 12;
}

double moment_inertia_rectangle_y(int a, int b)
{
    return a * pow(b, 3) / 12;
}