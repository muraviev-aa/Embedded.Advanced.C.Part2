#include <stdio.h>
#include "calculations.h"

int main() {
    int a = 5;
    int b = 7;
    printf("result addition_operation is %d\n", addition_operation(a, b));
    printf("division_operation is %.2f\n", division_operation(a, b));
    printf("multiplication_operation is %d\n", multiplication_operation(a, b));
    return 0;
}