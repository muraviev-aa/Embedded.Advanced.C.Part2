#include <stdio.h>
#include <assert.h>

int main(void)
{
    int a = 5;
    //a = 8;
    assert(a == 5);
    printf("The value is correct! a = 5\n");
    return 0;
}