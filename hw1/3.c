#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t a;
    unsigned int b;
    scanf("%d%d", &a, &b);
    printf("%u\n", (a >> b) | (a << (32 - b)));
    return 0;
}
