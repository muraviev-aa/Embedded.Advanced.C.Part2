#include <stdio.h>

int main(void)
{
    int n, tmp, max = 0, max_count = 1;
    // Вводим первое число - общее количество цифр, которые нужно ввести
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp); // вводим сами цифры, их количество равно уже введенному числу
        if (tmp > max)
        {
            max = tmp;
            max_count = 1;
        } else if (tmp == max)
            max_count++;
    }
    printf("%d", max_count);
    return 0;
}