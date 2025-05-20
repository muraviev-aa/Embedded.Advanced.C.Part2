#ifndef AREA_H //уникальный макрос защиты
#define AREA_H

#ifdef __cplusplus
extern "C"
{
#endif

int area_rectangle(int a, int b);
double area_triangle(int a, int h);
double area_circle(int r);
double area_trapezoid(int a, int b, int h);
double area_hexagon(int a);

#ifdef __cplusplus
}
#endif

#endif // AREA_H