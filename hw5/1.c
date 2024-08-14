#include <stdio.h>

int get_num(int *arr_num);
int count_num(int *arr_num, int n);
int count_res(int *res, int n);

int main()
{
    int arr_num[30] = {0};   // заданное натуральное число
    printf("%d\n", count_num(arr_num, get_num(arr_num)));
    return 0;
}


int count_num(int *arr_num, int n)
{
    int d = 0, res[10000] = {0};
    int d1, d2, d3;
    for (int i = 0; i < n - 2; i++)
    {
        d1 = arr_num[i];
        for (int j = i + 1; j < n - 1; j++)
        {
            d2 = arr_num[j];
            for (int k = j + 1; k < n; k++)
            {
                d3 = arr_num[k];
                res[d++] = d1 * 100 + d2 * 10 + d3;
            }
        }
    }
    return count_res(res, d);
}

int count_res(int *res, int n)
{
    for (int i = 0; i < n; i++)
    {
        int value = res[i];
        for (int j = i + 1; j < n; j++)
        {
            if (res[j] != -1 && value == res[j])
                res[j] = -1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (res[i] >= 0)
            count++;
    }
    return count;
}

int get_num(int *arr_num)
{
    int n = 0;
    int num;
    char c;
    while ((c = getchar()) != '\n')
    {
        num = c - 0x30;
        if (num >= 0 && num < 10)
            arr_num[n++] = num;
    }
    return n;
}