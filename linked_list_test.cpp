#include <gtest/gtest.h>
#include "linked_list.cpp" 

TEST(LinkedListTests, InsertOneElement)
{
    insert(10);

    EXPECT_EQ(get(0), 10);
}

TEST(LinkedListTests, InsertTwoElement)
{
    insert(20);

    EXPECT_EQ(get(1), 20);
}

TEST(LinkedListTests, InsertMulElements)
{
    insert(30);
    insert(4);
    insert(5);
    insert(108);
    insert(321);
    insert(98);
    insert(9843);

    EXPECT_EQ(get(8), 9843);
    EXPECT_EQ(get(9), -1);
}

TEST(LinkedListTests, DeleteOneElement)
{
    deleteElement(1);

    EXPECT_EQ(get(1), 30);
    EXPECT_EQ(get(8), -1);
}

TEST(LinkedListTests, DeleteInsertElement)
{
    insert(43);
    EXPECT_EQ(get(8), 43);



    deleteElement(0);
    EXPECT_EQ(get(0), 30);
    EXPECT_EQ(get(8), -1);

    deleteElement(4);
    EXPECT_EQ(get(4), 98);
    EXPECT_EQ(get(7), -1);
}


