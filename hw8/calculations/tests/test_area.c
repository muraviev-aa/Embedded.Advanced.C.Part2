#include "unity.h"
#include "area.h"

void test_area_rectangle(void)
{
    TEST_ASSERT_EQUAL(15, area_rectangle(3, 5));
}

void test_area_triangle(void)
{
    TEST_ASSERT_EQUAL(7.5, area_triangle(3, 5));
}