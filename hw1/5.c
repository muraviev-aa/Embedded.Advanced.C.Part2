#include <stdio.h>
#include <stdint.h>

uint32_t max_num_byte(uint32_t N, uint8_t K)
{
    uint32_t maxVal = 0;
    uint32_t mask = (1 << K) - 1;

    for (int i = 0; i <= 32 - K; i++)
    {
        uint32_t currentVal = (N >> i) & mask;
        if (currentVal > maxVal)
        {
            maxVal = currentVal;
        }
    }
    return maxVal;
}

int main()
{
    uint32_t N;
    uint8_t K;
    scanf("%u %hhd", &N, &K);
    printf("%u\n", max_num_byte(N, K));
    return 0;
}