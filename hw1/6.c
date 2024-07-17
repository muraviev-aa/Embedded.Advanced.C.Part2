#include <stdio.h>
#include <stdint.h>

int number_units(uint32_t a)
{
    unsigned int count = 0;
    while (a != 0)
    {
        if (a % 2 == 1)
            count++;
        a /= 2;
    }
    return count;
}

int main(void)
{
    uint32_t N;
    scanf("%u", &N);
    printf("%d", number_units(N));
    return 0;
}