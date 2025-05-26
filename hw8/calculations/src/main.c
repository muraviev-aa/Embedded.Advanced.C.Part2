#include <stdio.h>
#include "math.h"
#include "area.h"

int main() {
    int a = 5, b = 3;
    printf("Sum: %d\n", add(a, b));
    printf("Division: %.2f\n", division(a, b));
    printf("Area rectangle: %d\n", area_rectangle(a, b));
    return 0;
}