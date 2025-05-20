#include <gtest/gtest.h>
#include "../include/calculations.h"

TEST(CalculationsTest, Addition)
{
    EXPECT_EQ(addition_operation(2, 3), 5);
    EXPECT_EQ(addition_operation(4, 8), 12);
    EXPECT_EQ(addition_operation(1, 14), 15);
}

TEST(CalculationsTest, Subtraction)
{
    EXPECT_EQ(subtraction_operation(2, 3), -1);
    EXPECT_EQ(subtraction_operation(4, 8), -4);
    EXPECT_EQ(subtraction_operation(21, 14), 7);
}

TEST(CalculationsTest, Division)
{
    EXPECT_EQ(division_operation(4, 2), 2);
    EXPECT_EQ(division_operation(10, 5), 2);
    EXPECT_EQ(division_operation(20, 4), 5);
}