#include <stdio.h>

// Подсчет количества нулей в двоичной записи числа
int zero_count(int num)
{
    int count = 0;
    while (num)
    {
        if ((num & 1) == 0)   // если текущий бит равен нулю
            count++;          // ведем подсчет нулей
        num >>= 1;
    }
    return count;
}

int main()
{
    int N;            // количество чисел
    int K;            // количество нулей
    int count = 0;    // счетчик

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        if (zero_count(i) == K)
            count++;
    }

    printf("%d\n", count);

    return 0;
}