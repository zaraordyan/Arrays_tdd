#include <gtest/gtest.h>
#include "subarray.h" 

TEST(isSubarrayTests, sizeof11false)
{
    EXPECT_FALSE(isSubarray((int[]){1}, 1, (int[]){2}, 1));
}
TEST(isSubarrayTests, sizeof11true)
{
    EXPECT_TRUE(isSubarray((int[]){1}, 1, (int[]){1}, 1));
}

TEST(isSubarrayTests, sizeof12true)
{
    EXPECT_TRUE(isSubarray((int[]){1}, 1, (int[]){1,2}, 2));
}

TEST(isSubarrayTests, sizeof21true)
{
    EXPECT_TRUE(isSubarray((int[]){4,2}, 2, (int[]){2}, 1));
}

TEST(isSubarrayTests, sizeof12false)
{
    EXPECT_FALSE(isSubarray((int[]){3}, 1, (int[]){1,2}, 2));
}

TEST(isSubarrayTests, sizeof21false)
{
    EXPECT_FALSE(isSubarray((int[]){4,2}, 2, (int[]){5}, 1));
}

TEST(isSubarrayTests, sizeofSmallLargetrue)
{
    EXPECT_TRUE(isSubarray((int[]){3,4,5,6,7}, 5, (int[]){1,2,3,4,5,6,7,8,9,10}, 10));
}

TEST(isSubarrayTests, sizeofLargeSmalltrue)
{
    EXPECT_TRUE(isSubarray((int[]){23,45,7,6,1,8,3,4,6,345,23,1}, 12, (int[]){8,3,4,6,345}, 5));
}

TEST(isSubarrayTests, sizeofSmallLargeFalse)
{
    EXPECT_FALSE(isSubarray((int[]){3,4,98}, 3, (int[]){1,2,3,4,5,6,7,8}, 8));
}

TEST(isSubarrayTests, sizeof21LargeSmallFalse)
{
    EXPECT_FALSE(isSubarray((int[]){23,45,7,6,1,8,3,4,6,345,23,1}, 12, (int[]){34,1992,4}, 3));
}