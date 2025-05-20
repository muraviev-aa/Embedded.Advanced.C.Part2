#include <gtest/gtest.h>
#include "../include/area.h"

TEST(AreaTest, Rectangle)
{
    EXPECT_EQ(area_rectangle(2, 3), 6);
    EXPECT_EQ(area_rectangle(4, 8), 32);
    EXPECT_EQ(area_rectangle(1, 14), 14);
}

TEST(AreaTest, Triangle)
{
    EXPECT_EQ(area_triangle(2, 3), 3);
    EXPECT_EQ(area_triangle(4, 8), 16);
    EXPECT_EQ(area_triangle(1, 14), 7);
}

TEST(AreaTest, Circle)
{
    EXPECT_EQ(area_circle(8), 25.12);
}

TEST(AreaTest, Trapezoid)
{
    EXPECT_EQ(area_trapezoid(14, 7, 2), 21.00);
}

TEST(AreaTest, Hexagon)
{
    ASSERT_NEAR(area_hexagon(15), 584.567, 0.001);
    ASSERT_NEAR(area_hexagon(20), 1039.230, 0.001);
}