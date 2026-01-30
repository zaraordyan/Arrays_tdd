#include <gtest/gtest.h>
#include "max_of_arrays.h" 

TEST(MaxOfArrayTest, sizeof0) {
    EXPECT_EQ(findMax(nullptr,0), 0);
}
TEST(MaxIndOfArrayTest, sizeof0) {
    EXPECT_EQ(findMaxIndex(nullptr,0), 0);
}

TEST(MaxOfArrayTest, sizeof1) {
    EXPECT_EQ(findMax((int[]){2},1), 2);
}
TEST(MaxIndOfArrayTest, sizeof1) {
    EXPECT_EQ(findMaxIndex((int[]){2},1), 0);
}

TEST(MaxOfArrayTest, sizeof2) {
    EXPECT_EQ(findMax((int[]){2, 3},2), 3);
}
TEST(MaxIndOfArrayTest, sizeof2) {
    EXPECT_EQ(findMaxIndex((int[]){2, 3},2), 1);
}

TEST(MaxOfArrayTest, sizeof10) {
    EXPECT_EQ(findMax((int[]){2, 100, 345, 2, 3, 5, 65, 23, 3, 3},10), 345);
}
TEST(MaxIndOfArrayTest, sizeof10) {
    EXPECT_EQ(findMaxIndex((int[]){2, 100, 345, 2, 3, 5, 65, 23, 3, 3},10), 2);
}
