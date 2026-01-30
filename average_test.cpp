#include <gtest/gtest.h>
#include "average.h" 

TEST(AverageTest, sizeof0) {
    EXPECT_EQ(average(nullptr,0), 0);
}

TEST(AverageTest, sizeof1) {
    EXPECT_EQ(average((float[]){2},1), 2);
}

TEST(AverageTest, sizeof2) {
    EXPECT_EQ(average((float[]){5.6, 5.4},2), 5.5);
}

TEST(AverageTest, sizeof10) {
    EXPECT_EQ(average((float[]){1, 2, 3, 4, 5, 6, 7, 8, 9, 10},10), 5.5);
}
