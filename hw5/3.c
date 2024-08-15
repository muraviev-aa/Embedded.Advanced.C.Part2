#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

int select_operation(char symbol, int num1, int num2);

int main(void)
{
    char arr_str[MAX_SIZE];
    int arr_num[MAX_SIZE];
    int top = -1;

    fgets(arr_str, sizeof(arr_str), stdin);

    // Разделение строки по пробелам на части
    char *part = strtok(arr_str, " ");
    while (part)
    {
        // Если это число
        if (isdigit(part[0]))
        {
            int num = atoi(part);
            arr_num[++top] = num;
        } else if (part[0] == '.')
        {
            break;
        } else
        {
            // Если это символ
            int b = arr_num[top--];
            int a = arr_num[top--];
            // Выполняем операцию
            int result = select_operation(part[0], a, b);
            arr_num[++top] = result; // результат помещаем в массив
        }
        part = strtok(NULL, " ");  // следующая часть
    }

    printf("%d\n", arr_num[top]);
    return 0;
}

// Выбор операции и её выполнение
int select_operation(char symbol, int num1, int num2)
{
    switch (symbol)
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 0;
    }
}