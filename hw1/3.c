#include <stdio.h>
#include <inttypes.h>

uint32_t cyclic_shift(uint32_t a, uint8_t b)
{
    return ((a >> b) | (a << (32 - b)));
}

int main(void)
{
    uint32_t a;
    uint8_t b;
    scanf("%u%hhd", &a, &b);
    printf("%u\n", cyclic_shift(a, b));
    return 0;
}
