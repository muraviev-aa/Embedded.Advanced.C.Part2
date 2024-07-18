#include <stdio.h>
#include "lib.h"


int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Jx = %.2f\n", moment_inertia_rectangle_x(a, b));
    printf("Jy = %.2f\n", moment_inertia_rectangle_y(a, b));
    return 0;
}