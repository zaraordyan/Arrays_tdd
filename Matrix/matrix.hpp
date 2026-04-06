#include <vector>

template<typename T>
class Matrix {
private:
    size_t rows;
    size_t cols;
    std::vector<std::vector<T>> data;

public:
    Matrix(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c, T{})) {}

    std::vector<T>& operator[](size_t i);
    const std::vector<T>& operator[](size_t i) const;
    size_t numRows() const { return rows; }
    size_t numCols() const { return cols; }
    Matrix<T> operator*(const Matrix<T>& other) const;
    Matrix<T> operator+(const Matrix<T>& other) const;
    Matrix<T>& operator+=(const Matrix<T>& other);
};