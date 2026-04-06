#include <gtest/gtest.h>
#include "matrix.cpp"

TEST(MatrixTest, ZeroByZeroConstruction) {
    Matrix<int> m(0, 0);

    EXPECT_EQ(m.numRows(), 0);
    EXPECT_EQ(m.numCols(), 0);
}

TEST(MatrixTest, ZeroByZeroMultiplication) {
    Matrix<int> a(0, 0);
    Matrix<int> b(0, 0);

    Matrix<int> c = a * b;

    EXPECT_EQ(c.numRows(), 0);
    EXPECT_EQ(c.numCols(), 0);
}

TEST(MatrixTest, ZeroMatrixAccessThrows) {
    Matrix<int> m(0, 0);

    EXPECT_THROW(m[0][0], std::out_of_range);
}

TEST(MatrixTest, BasicMultiplication) {
    Matrix<int> a(2, 2);
    Matrix<int> b(2, 2);

    a[0][0] = 1; a[0][1] = 2;
    a[1][0] = 3; a[1][1] = 4;

    b[0][0] = 5; b[0][1] = 6;
    b[1][0] = 7; b[1][1] = 8;

    Matrix<int> c = a * b;

    EXPECT_EQ(c[0][0], 19);
    EXPECT_EQ(c[0][1], 22);
    EXPECT_EQ(c[1][0], 43);
    EXPECT_EQ(c[1][1], 50);
}

TEST(MatrixTest, MultiplicationDimensionMismatchThrows) {
    Matrix<int> a(2, 3);
    Matrix<int> b(2, 2);

    EXPECT_THROW(a * b, std::invalid_argument);
}

