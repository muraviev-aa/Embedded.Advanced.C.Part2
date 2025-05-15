#include <gtest/gtest.h>
extern "C"
{
#include "../include/calculations.h"
}

TEST(CalculationsTest, AdditionOperation)
{
    EXPECT_EQ(addition_operation(2, 3), 5);
    EXPECT_EQ(addition_operation(-1, 1), 0);
    EXPECT_EQ(addition_operation(0, 0), 0);
}

TEST(CalculationsTest, DivisionOperation)
{
    EXPECT_EQ(division_operation(6, 2), 3.0);
    EXPECT_EQ(division_operation(12, 3), 4.0);
    EXPECT_EQ(division_operation(3, 2), 1.5);
}

TEST(DivisionTest, AccuracyToHundredths)
{
    int a = 1;
    int b = 3;
    double result = division_operation(a, b);
    // Ожидаемый результат примерно 0.33
    ASSERT_NEAR(result, 0.33, 0.01);
}

TEST(CalculationsTest, MultiplOperation)
{
    EXPECT_EQ(multiplication_operation(3, 7), 21);
    EXPECT_EQ(multiplication_operation(12, 3), 36);
    EXPECT_EQ(multiplication_operation(6, 6), 36);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}