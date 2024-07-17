#include <stdio.h>
#include <inttypes.h>

uint32_t bit_extract(uint32_t a, uint8_t b)
{
    return (a & ((1 << b) - 1));
}

int main(void)
{
    uint32_t N;
    uint8_t K;
    scanf("%u%hhd", &N, &K);
    printf("%u", bit_extract(N, K));
    return 0;
}