#include <stdio.h>
#include <inttypes.h>

uint32_t bit_extract(uint32_t a, uint8_t b)
{
    return (a & ((1 << b) - 1));
}

int main(void)
{
    uint32_t a;
    uint8_t b;
    scanf("%u%hhd", &a, &b);
    printf("%u", bit_extract(a, b));
    return 0;
}