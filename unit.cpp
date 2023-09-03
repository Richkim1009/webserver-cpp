#include <gtest/gtest.h>
#include "square.h"

namespace {
    TEST(SquareTest, perimeter)
    {
        Square sqr(0,0,5);
        const int peri = sqr.perimeter();
        EXPECT_EQ(peri, 20);
    }
    
    TEST(SquareTest, area)
    {
        Square sqr{1,1,3};
        const int area = sqr.area();
        EXPECT_EQ(area, 9);
    }

    TEST(SquareTest, scale)
    {
        Square sqr{2,2,2};
        sqr.scale(2);
        EXPECT_EQ(sqr.mL, 4);
    }
}
