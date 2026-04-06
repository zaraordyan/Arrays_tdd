#include "matrix.hpp"
#include <stdexcept>

template <typename T>
std::vector<T>& Matrix<T>::operator[](size_t i) {
    if (i >= rows) throw std::out_of_range("Row index out of range");
    return data[i];
}

template <typename T>
const std::vector<T>& Matrix<T>::operator[](size_t i) const {
    if (i >= rows) throw std::out_of_range("Row index out of range");
    return data[i];
}

template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& other) const {
    if (cols != other.rows)
        throw std::invalid_argument("Matrix dimensions do not match for multiplication");

    Matrix<T> result(rows, other.cols);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < other.cols; ++j) {
            for (size_t k = 0; k < cols; ++k) {
                result[i][j] += data[i][k] * other[k][j];
            }
        }
    }

    return result;
}

template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& other) const {
    if (rows != other.rows || cols != other.cols)
        throw std::invalid_argument("Matrix dimensions must match for addition");

    Matrix<T> result(rows, cols);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result[i][j] = data[i][j] + other[i][j];
        }
    }

    return result;
}

template <typename T>
Matrix<T>& Matrix<T>::operator+=(const Matrix<T>& other) {
    if (rows != other.rows || cols != other.cols)
        throw std::invalid_argument("Matrix dimensions must match");

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            data[i][j] += other[i][j];
        }
    }

    return *this;
}