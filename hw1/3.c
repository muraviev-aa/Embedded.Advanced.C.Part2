#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t a;
    unsigned int b;
    scanf("%u%u", &a, &b);
    printf("%u\n", (a >> b) | (a << (32 - b)));
    return 0;
}
