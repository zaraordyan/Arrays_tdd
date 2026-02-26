#include <gtest/gtest.h>
#include "linked_list.cpp" 

LinkedList<int> intList;
LinkedList<std::string> stringList;

TEST(LinkedListTests, DeleteElementFromEmpty)
{
    EXPECT_THROW(intList.deleteElement(0), std::out_of_range);

}

TEST(LinkedListTests, InsertOneIntElement)
{
    intList.insert(10);

    EXPECT_EQ(intList.get(0), 10);
}

TEST(LinkedListTests, InsertOneStrElement)
{
    stringList.insert("dfe tgrt");

    EXPECT_EQ(stringList.get(0), "dfe tgrt");
}

TEST(LinkedListTests, InsertTwoIntElement)
{
    intList.insert(20);

    EXPECT_EQ(intList.get(0), 10);
    EXPECT_EQ(intList.get(1), 20);
}

TEST(LinkedListTests, InsertTwoStrElement)
{
    stringList.insert("huihr rfne juj");

    EXPECT_EQ(stringList.get(0), "dfe tgrt");
    EXPECT_EQ(stringList.get(1), "huihr rfne juj");
}

TEST(LinkedListTests, InsertMulElements)
{
    intList.insert(30);
    intList.insert(43254);
    intList.insert(5);
    intList.insert(108);
    stringList.insert("321");
    stringList.insert("cf4erc");
    stringList.insert("wedffetg5");

    EXPECT_EQ(intList.get(5), 108);
    EXPECT_EQ(intList.get(3), 43254);
    EXPECT_EQ(stringList.get(4), "wedffetg5");
}

TEST(LinkedListTests, DeleteInsertElement)
{
    EXPECT_EQ(intList.get(1), 20);

    intList.deleteElement(1);
    EXPECT_EQ(intList.get(1), 30);

    EXPECT_EQ(stringList.get(3), "cf4erc");
    stringList.deleteElement(3);
    EXPECT_EQ(stringList.get(3), "wedffetg5");
}


