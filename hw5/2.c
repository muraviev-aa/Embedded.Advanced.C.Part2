#include <stdio.h>
#include <string.h>
#define LENGTH 104               // каждая из строк не превышает по длине 104
#define min_value(a, b) (a < b ? a : b)

void comp_func(char *str, int arr[]);
void print_result(int arr[], int num);
void zero_pad(int arr[], int num);


int main(void)
{
    char first[LENGTH];          // первая символьная строка
    char second[LENGTH];         // вторая символьная строка
    char sum_str[2 * LENGTH + 1];
    int arr[2 * LENGTH] = {0}, str_len;
    scanf("%s", first);
    scanf("%s", second);

    comp_func(sum_str, arr);
    str_len = strlen(sum_str);
    // Печатаем длину наибольшего префикса первой строки
    print_result(arr, str_len);
    zero_pad(arr, str_len);

    sprintf(sum_str, "%s#%s", second, first);
    comp_func(sum_str, arr);
    // Печатаем длину наибольшего суффикса первой строки,
    print_result(arr, strlen(sum_str));
    return 0;
}

void zero_pad(int arr[], int num)
{
    for (int i = 0; i < num; i++)
        arr[i] = 0;
}

void print_result(int arr[], int num)
{
    int res = 0;
    for (int i = 1; i < num; i++)
    {
        if (arr[i] == num - i)
        {
            printf("%d ", arr[i]);
            res = 1;
        }
    }
    if (!res)
        printf("0 ");
}

void comp_func(char *str, int arr[])
{
    int l = 0, r = 0;
    int str_len = (int) strlen(str);
    for (int i = 1; i < str_len; i++)
    {
        if (i <= r)
            arr[i] = min_value(arr[i - l], r - i);
        while (i + arr[i] < str_len && str[arr[i]] == str[arr[i] + i])
            arr[i]++;
        if (i + arr[i] > r)
        {
            l = i;
            r = i + arr[i];
        }
    }
}