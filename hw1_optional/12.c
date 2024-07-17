#include <stdio.h>

int func(int n)
{
    printf("Hello function %d\n", n);
    return ++n;
}

int main(void)
{
    int i = 654;
    int *p_i;                 // указатель на переменную
    p_i = &i;

    int **pp_i;               // указатель на указатель
    pp_i = &p_i;

    int arr[5] = {1, 2, 3, 4, 5};
    int *p_arr;
    p_arr = arr; // p_arr = &arr[0]

    struct s
    {
        int i;
        float f;
    } st = {20, 1.14};
    struct s *p_st;           // указатель на структуру
    p_st = &st;

    int (*p_f)(int);          // указатель на функцию
    p_f = func;
    int b = func(5);

    printf("p_i = %p\n", p_i);
    printf("pp_i = %p\n", pp_i);
    printf("*p_i = %d\n", *p_i);
    printf("**pp_i = %d\n", **pp_i);
    printf("p_arr = %p\n", p_arr);
    printf("*p_arr = %d\n", *p_arr);
    printf("p_st = %p\n", p_st);
    printf("p_st->i = %d, p_st->f = %.2f\n", p_st->i, p_st->f);
    p_f(5);
    printf("Work function is %d", b);
    return 0;
}