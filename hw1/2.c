#include <stdio.h>

int main(void)
{
    int N, n, K = 26;
    scanf("%d", &N);
    char tmp;
    while ((tmp = getchar()) != '.')
    {
        n = (int) tmp;
        if (tmp == ' ')
            printf(" ");
        if ('A' <= tmp && tmp <= 'Z')
            printf("%c", (char) ((n - 65) + N) % K + 65);
        if ('a' <= tmp && tmp <= 'z')
            printf("%c", (char) ((n - 97) + N) % K + 97);
    }
    printf(".");
    return 0;
}