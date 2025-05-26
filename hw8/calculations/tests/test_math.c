#include "unity.h"
#include "math.h"

int a;
int b;

void setUp(void)
{
    a = 5;
    b = 3;
    // выполнение необходимых действий перед каждым тестом
    // инициализация переменных
    // настройка состояния или подготовка ресурсов, которые будут использованы в тестах
}

void tearDown(void)
{
    printf("END test\n");
    // вывод сообщения
    // очистка после каждого теста
    // освобождение динамически выделенных ресурсов
    // сброс глобальных переменных
}

void test_add(void)
{
    TEST_ASSERT_EQUAL(8, add(a, b));
}

void test_subtract(void)
{
    TEST_ASSERT_EQUAL(2, subtract(a, b));
}

void test_multiply(void)
{
    TEST_ASSERT_EQUAL(15, multiply(a, b));
}

void test_division(void)
{
    TEST_ASSERT_EQUAL(1.67, division(a, b));
    // expected ± tolerance
    TEST_ASSERT_FLOAT_WITHIN(0.001, 1.666, division(a, b));
    TEST_ASSERT_FLOAT_WITHIN(0.01, -1.5, division(-3, 2));
}