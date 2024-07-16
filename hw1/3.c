#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t a;
    uint8_t b;
    scanf("%u%hhd", &a, &b);
    printf("%u\n", (a >> b) | (a << (32 - b)));
    return 0;
}
