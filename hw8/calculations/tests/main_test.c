#include "unity.h"
#include "test_math.h"
#include "test_area.h"

int main(void) {
    UNITY_BEGIN();
    
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_division);
    RUN_TEST(test_area_rectangle);
    RUN_TEST(test_area_triangle);
    
    return UNITY_END();
}