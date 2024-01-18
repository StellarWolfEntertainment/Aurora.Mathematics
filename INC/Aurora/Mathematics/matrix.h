/**
 * @file matrix.h
 * @brief Defines generic matrix classes with bounds checking.
 * @author Raistlin Wolfe
 */

#pragma once

#include <stdexcept>
#include <string>
#include "math.h"

namespace Aurora
{
    namespace Mathematics
    {
        /**
         * @brief Represents a generic matrix with bounds checking.
         * @tparam T The type of elements in the matrix.
         * @tparam ROWS The number of rows in the matrix.
         * @tparam COLS The number of columns in the matrix.
         */
        template<typename T, int ROWS, int COLS>
        struct matrix
        {
            // properties

            /**
             * @brief Gets the number of rows in the matrix.
             * @return The number of rows.
             */
            inline static int rows() { return ROWS; }

            /**
             * @brief Gets the number of columns in the matrix.
             * @return The number of columns.
             */
            inline static int cols() { return COLS; }

            /**
             * @brief Accesses the element at the specified position in the matrix (read-only).
             * @param col The column index.
             * @param row The row index.
             * @return The value at the specified position.
             * @throws std::out_of_range if the position is out of bounds.
             */
            inline T operator ()(int row, int col) const
            {
                int index = validateCoordinates(row, col);
                return data_[index];
            }

            /**
             * @brief Accesses the element at the specified position in the matrix.
             * @param col The column index.
             * @param row The row index.
             * @return A reference to the value at the specified position.
             * @throws std::out_of_range if the position is out of bounds.
             */
            inline T& operator() (int row, int col)
            {
                int index = validateCoordinates(row, col);
                return data_[index];
            }

            /**
             * @brief Conversion operator to T* for accessing the matrix elements as a contiguous memory block. The returned array is a copy, as such matrix is not responsible for memory management.
             *
             * @return A pointer to the contiguous memory block.
             */
            inline operator T* () const
            {
                T* newData = new T[ROWS * COLS];

                for (int i = 0; i < ROWS * COLS; i++)
                {
                    newData[i] = data_[i];
                }

                return newData;
            }

            /**
             * @brief Copy constructor. Creates a new matrix with the same elements as the provided matrix.
             * @param other The matrix to be copied.
             */
            inline matrix(const matrix& other) : data_(new T[ROWS * COLS])
            {
                for (int i = 0; i < ROWS * COLS; i++)
                {
                    data_[i] = other.data_[i];
                }
            }

            /**
             * @brief Copy assignment operator. Assigns the elements of the provided matrix to this matrix.
             * @param other The matrix to be copied.
             * @return A reference to this matrix after the copy.
             */
            inline matrix& operator=(const matrix& other)
            {
                if (this != &other)
                {
                    delete[] data_;
                    data_ = new T[ROWS * COLS];

                    for (int i = 0; i < ROWS * COLS; i++)
                    {
                        data_[i] = other.data_[i];
                    }
                }
                return *this;
            }

            /**
             * @brief Deleted move constructor. Move semantics are not supported for this matrix.
             */
            inline matrix(matrix&&) = delete;

            /**
             * @brief Deleted move assignment operator. Move semantics are not supported for this matrix.
             * @return A reference to this matrix after the attempted move.
             */
            inline matrix& operator=(matrix&&) = delete;
        protected:
            /**
             * @brief Default constructor. Allocates memory for the matrix.
             */
            inline matrix() : data_(new T[ROWS * COLS]) {}

            /**
             * @brief Destructor. Deallocates memory for the matrix.
             */
            inline ~matrix() { delete[] data_; }

        private:
            T* data_;

            inline static int validateCoordinates(int row, int col)
            {
                if (col < 0 || col >= COLS || row < 0 || row >= ROWS)
                {
                    throw std::out_of_range("The requested position does not exist in the matrix (" + std::to_string(col) + ", " + std::to_string(row) + ").");
                }
                else
                {
                    return col + (row * COLS);
                }
            }
        };

        /**
         * @brief Represents a generic 2x2 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix2x2 : public matrix<T, 2, 2>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Default constructor. Initializes a 2x2 matrix with default values.
             */
            matrix2x2() : matrix<T, 2, 2>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             */
            matrix2x2(T m11, T m21, T m12, T m22) : matrix<T, 2, 2>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
            }
        };

        /**
         * @brief Represents a generic 3x2 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix3x2 : public matrix<T, 3, 2>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Default constructor. Initializes a 3x2 matrix with default values.
             */
            matrix3x2() : matrix<T, 3, 2>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             */
            matrix3x2(T m11, T m21, T m31, T m12, T m22, T m32) : matrix<T, 3, 2>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
            }
        };

        /**
         * @brief Represents a generic 4x2 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix4x2 : public matrix<T, 4, 2>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (4, 1) in the matrix.
             * @return The value at position (4, 1).
             */
            inline T m41() const { return this->operator()(3, 0); }

            /**
             * @brief Gets or sets the value at position (4, 1) in the matrix.
             * @return A reference to the value at position (4, 1).
             */
            inline T& m41() { return this->operator()(3, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Gets the value at position (4, 2) in the matrix.
             * @return The value at position (4, 2).
             */
            inline T m42() const { return this->operator()(3, 1); }

            /**
             * @brief Gets or sets the value at position (4, 2) in the matrix.
             * @return A reference to the value at position (4, 2).
             */
            inline T& m42() { return this->operator()(3, 1); }

            /**
             * @brief Default constructor. Initializes a 4x2 matrix with default values.
             */
            matrix4x2() : matrix<T, 4, 2>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m41 The value at position (4, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             * @param m42 The value at position (4, 2).
             */
            matrix4x2(T m11, T m21, T m31, T m41, T m12, T m22, T m32, T m42) : matrix<T, 4, 2>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(3, 0) = m41;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
                this->operator()(3, 1) = m42;
            }
        };

        /**
         * @brief Represents a generic 2x3 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix2x3 : public matrix<T, 2, 3>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Default constructor. Initializes a 2x3 matrix with default values.
             */
            matrix2x3() : matrix<T, 2, 3>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             */
            matrix2x3(T m11, T m21, T m12, T m22, T m13, T m23) : matrix<T, 2, 3>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
            }
        };

        /**
         * @brief Represents a generic 3x3 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix3x3 : public matrix<T, 3, 3>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Gets the value at position (3, 3) in the matrix.
             * @return The value at position (3, 3).
             */
            inline T m33() const { return this->operator()(2, 2); }

            /**
             * @brief Gets or sets the value at position (3, 3) in the matrix.
             * @return A reference to the value at position (3, 3).
             */
            inline T& m33() { return this->operator()(2, 2); }

            /**
             * @brief Default constructor. Initializes a 3x3 matrix with default values.
             */
            matrix3x3() : matrix<T, 3, 3>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             * @param m33 The value at position (3, 3).
             */
            matrix3x3(T m11, T m21, T m31, T m12, T m22, T m32, T m13, T m23, T m33) : matrix<T, 3, 3>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
                this->operator()(2, 2) = m33;
            }
        };

        /**
         * @brief Represents a generic 4x3 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix4x3 : public matrix<T, 4, 3>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (4, 1) in the matrix.
             * @return The value at position (4, 1).
             */
            inline T m41() const { return this->operator()(3, 0); }

            /**
             * @brief Gets or sets the value at position (4, 1) in the matrix.
             * @return A reference to the value at position (4, 1).
             */
            inline T& m41() { return this->operator()(3, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Gets the value at position (4, 2) in the matrix.
             * @return The value at position (4, 2).
             */
            inline T m42() const { return this->operator()(3, 1); }

            /**
             * @brief Gets or sets the value at position (4, 2) in the matrix.
             * @return A reference to the value at position (4, 2).
             */
            inline T& m42() { return this->operator()(3, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Gets the value at position (3, 3) in the matrix.
             * @return The value at position (3, 3).
             */
            inline T m33() const { return this->operator()(2, 2); }

            /**
             * @brief Gets or sets the value at position (3, 3) in the matrix.
             * @return A reference to the value at position (3, 3).
             */
            inline T& m33() { return this->operator()(2, 2); }

            /**
             * @brief Gets the value at position (4, 3) in the matrix.
             * @return The value at position (4, 3).
             */
            inline T m43() const { return this->operator()(3, 2); }

            /**
             * @brief Gets or sets the value at position (4, 3) in the matrix.
             * @return A reference to the value at position (4, 3).
             */
            inline T& m43() { return this->operator()(3, 2); }

            /**
             * @brief Default constructor. Initializes a 4x3 matrix with default values.
             */
            matrix4x3() : matrix<T, 4, 3>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m41 The value at position (4, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             * @param m42 The value at position (4, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             * @param m33 The value at position (3, 3).
             * @param m43 The value at position (4, 3).
             */
            matrix4x3(T m11, T m21, T m31, T m41, T m12, T m22, T m32, T m42, T m13, T m23, T m33, T m43) : matrix<T, 4, 3>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(3, 0) = m41;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
                this->operator()(3, 1) = m42;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
                this->operator()(2, 2) = m33;
                this->operator()(3, 2) = m43;
            }
        };

        /**
         * @brief Represents a generic 2x4 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix2x4 : public matrix<T, 2, 4>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Gets the value at position (1, 4) in the matrix.
             * @return The value at position (1, 4).
             */
            inline T m14() const { return this->operator()(0, 3); }

            /**
             * @brief Gets or sets the value at position (1, 4) in the matrix.
             * @return A reference to the value at position (1, 4).
             */
            inline T& m14() { return this->operator()(0, 3); }

            /**
             * @brief Gets the value at position (2, 4) in the matrix.
             * @return The value at position (2, 4).
             */
            inline T m24() const { return this->operator()(1, 3); }

            /**
             * @brief Gets or sets the value at position (2, 4) in the matrix.
             * @return A reference to the value at position (2, 4).
             */
            inline T& m24() { return this->operator()(1, 3); }

            /**
             * @brief Default constructor. Initializes a 2x4 matrix with default values.
             */
            matrix2x4() : matrix<T, 2, 4>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             * @param m14 The value at position (1, 4).
             * @param m24 The value at position (2, 4).
             */
            matrix2x4(T m11, T m21, T m12, T m22, T m13, T m23, T m14, T m24) : matrix<T, 2, 4>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
                this->operator()(0, 3) = m14;
                this->operator()(1, 3) = m24;
            }
        };

        /**
         * @brief Represents a generic 3x4 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix3x4 : public matrix<T, 3, 4>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Gets the value at position (3, 3) in the matrix.
             * @return The value at position (3, 3).
             */
            inline T m33() const { return this->operator()(2, 2); }

            /**
             * @brief Gets or sets the value at position (3, 3) in the matrix.
             * @return A reference to the value at position (3, 3).
             */
            inline T& m33() { return this->operator()(2, 2); }

            /**
             * @brief Gets the value at position (1, 4) in the matrix.
             * @return The value at position (1, 4).
             */
            inline T m14() const { return this->operator()(0, 3); }

            /**
             * @brief Gets or sets the value at position (1, 4) in the matrix.
             * @return A reference to the value at position (1, 4).
             */
            inline T& m14() { return this->operator()(0, 3); }

            /**
             * @brief Gets the value at position (2, 4) in the matrix.
             * @return The value at position (2, 4).
             */
            inline T m24() const { return this->operator()(1, 3); }

            /**
             * @brief Gets or sets the value at position (2, 4) in the matrix.
             * @return A reference to the value at position (2, 4).
             */
            inline T& m24() { return this->operator()(1, 3); }

            /**
             * @brief Gets the value at position (3, 4) in the matrix.
             * @return The value at position (3, 4).
             */
            inline T m34() const { return this->operator()(2, 3); }

            /**
             * @brief Gets or sets the value at position (3, 4) in the matrix.
             * @return A reference to the value at position (3, 4).
             */
            inline T& m34() { return this->operator()(2, 3); }

        protected:

            /**
             * @brief Default constructor. Initializes a 3x4 matrix with default values.
             */
            matrix3x4() : matrix<T, 3, 4>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             * @param m33 The value at position (3, 3).
             * @param m14 The value at position (1, 4).
             * @param m24 The value at position (2, 4).
             * @param m34 The value at position (3, 4).
             */
            matrix3x4(T m11, T m21, T m31, T m12, T m22, T m32, T m13, T m23, T m33, T m14, T m24, T m34) : matrix<T, 3, 4>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
                this->operator()(2, 2) = m33;
                this->operator()(0, 3) = m14;
                this->operator()(1, 3) = m24;
                this->operator()(2, 3) = m34;
            }
        };

        /**
         * @brief Represents a generic 4x4 matrix with accessor methods.
         * @tparam T The type of elements in the matrix.
         */
        template<typename T>
        struct matrix4x4 : public matrix<T, 4, 4>
        {
            // properties            

            /**
             * @brief Gets the value at position (1, 1) in the matrix.
             * @return The value at position (1, 1).
             */
            inline T m11() const { return this->operator()(0, 0); }

            /**
             * @brief Gets or sets the value at position (1, 1) in the matrix.
             * @return A reference to the value at position (1, 1).
             */
            inline T& m11() { return this->operator()(0, 0); }

            /**
             * @brief Gets the value at position (2, 1) in the matrix.
             * @return The value at position (2, 1).
             */
            inline T m21() const { return this->operator()(1, 0); }

            /**
             * @brief Gets or sets the value at position (2, 1) in the matrix.
             * @return A reference to the value at position (2, 1).
             */
            inline T& m21() { return this->operator()(1, 0); }

            /**
             * @brief Gets the value at position (3, 1) in the matrix.
             * @return The value at position (3, 1).
             */
            inline T m31() const { return this->operator()(2, 0); }

            /**
             * @brief Gets or sets the value at position (3, 1) in the matrix.
             * @return A reference to the value at position (3, 1).
             */
            inline T& m31() { return this->operator()(2, 0); }

            /**
             * @brief Gets the value at position (4, 1) in the matrix.
             * @return The value at position (4, 1).
             */
            inline T m41() const { return this->operator()(3, 0); }

            /**
             * @brief Gets or sets the value at position (4, 1) in the matrix.
             * @return A reference to the value at position (4, 1).
             */
            inline T& m41() { return this->operator()(3, 0); }

            /**
             * @brief Gets the value at position (1, 2) in the matrix.
             * @return The value at position (1, 2).
             */
            inline T m12() const { return this->operator()(0, 1); }

            /**
             * @brief Gets or sets the value at position (1, 2) in the matrix.
             * @return A reference to the value at position (1, 2).
             */
            inline T& m12() { return this->operator()(0, 1); }

            /**
             * @brief Gets the value at position (2, 2) in the matrix.
             * @return The value at position (2, 2).
             */
            inline T m22() const { return this->operator()(1, 1); }

            /**
             * @brief Gets or sets the value at position (2, 2) in the matrix.
             * @return A reference to the value at position (2, 2).
             */
            inline T& m22() { return this->operator()(1, 1); }

            /**
             * @brief Gets the value at position (3, 2) in the matrix.
             * @return The value at position (3, 2).
             */
            inline T m32() const { return this->operator()(2, 1); }

            /**
             * @brief Gets or sets the value at position (3, 2) in the matrix.
             * @return A reference to the value at position (3, 2).
             */
            inline T& m32() { return this->operator()(2, 1); }

            /**
             * @brief Gets the value at position (4, 2) in the matrix.
             * @return The value at position (4, 2).
             */
            inline T m42() const { return this->operator()(3, 1); }

            /**
             * @brief Gets or sets the value at position (4, 2) in the matrix.
             * @return A reference to the value at position (4, 2).
             */
            inline T& m42() { return this->operator()(3, 1); }

            /**
             * @brief Gets the value at position (1, 3) in the matrix.
             * @return The value at position (1, 3).
             */
            inline T m13() const { return this->operator()(0, 2); }

            /**
             * @brief Gets or sets the value at position (1, 3) in the matrix.
             * @return A reference to the value at position (1, 3).
             */
            inline T& m13() { return this->operator()(0, 2); }

            /**
             * @brief Gets the value at position (2, 3) in the matrix.
             * @return The value at position (2, 3).
             */
            inline T m23() const { return this->operator()(1, 2); }

            /**
             * @brief Gets or sets the value at position (2, 3) in the matrix.
             * @return A reference to the value at position (2, 3).
             */
            inline T& m23() { return this->operator()(1, 2); }

            /**
             * @brief Gets the value at position (3, 3) in the matrix.
             * @return The value at position (3, 3).
             */
            inline T m33() const { return this->operator()(2, 2); }

            /**
             * @brief Gets or sets the value at position (3, 3) in the matrix.
             * @return A reference to the value at position (3, 3).
             */
            inline T& m33() { return this->operator()(2, 2); }

            /**
             * @brief Gets the value at position (4, 3) in the matrix.
             * @return The value at position (4, 3).
             */
            inline T m43() const { return this->operator()(3, 2); }

            /**
             * @brief Gets or sets the value at position (4, 3) in the matrix.
             * @return A reference to the value at position (4, 3).
             */
            inline T& m43() { return this->operator()(3, 2); }

            /**
             * @brief Gets the value at position (1, 4) in the matrix.
             * @return The value at position (1, 4).
             */
            inline T m14() const { return this->operator()(0, 3); }

            /**
             * @brief Gets or sets the value at position (1, 4) in the matrix.
             * @return A reference to the value at position (1, 4).
             */
            inline T& m14() { return this->operator()(0, 3); }

            /**
             * @brief Gets the value at position (2, 4) in the matrix.
             * @return The value at position (2, 4).
             */
            inline T m24() const { return this->operator()(1, 3); }

            /**
             * @brief Gets or sets the value at position (2, 4) in the matrix.
             * @return A reference to the value at position (2, 4).
             */
            inline T& m24() { return this->operator()(1, 3); }

            /**
             * @brief Gets the value at position (3, 4) in the matrix.
             * @return The value at position (3, 4).
             */
            inline T m34() const { return this->operator()(2, 3); }

            /**
             * @brief Gets or sets the value at position (3, 4) in the matrix.
             * @return A reference to the value at position (3, 4).
             */
            inline T& m34() { return this->operator()(2, 3); }

            /**
             * @brief Gets the value at position (4, 4) in the matrix.
             * @return The value at position (4, 4).
             */
            inline T m44() const { return this->operator()(3, 3); }

            /**
             * @brief Gets or sets the value at position (4, 4) in the matrix.
             * @return A reference to the value at position (4, 4).
             */
            inline T& m44() { return this->operator()(3, 3); }

        protected:

            /**
             * @brief Default constructor. Initializes a 4x4 matrix with default values.
             */
            matrix4x4() : matrix<T, 4, 4>() {}

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m31 The value at position (3, 1).
             * @param m41 The value at position (4, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             * @param m32 The value at position (3, 2).
             * @param m42 The value at position (4, 2).
             * @param m13 The value at position (1, 3).
             * @param m23 The value at position (2, 3).
             * @param m33 The value at position (3, 3).
             * @param m43 The value at position (4, 3).
             * @param m14 The value at position (1, 4).
             * @param m24 The value at position (2, 4).
             * @param m34 The value at position (3, 4).
             * @param m44 The value at position (4, 4).
             */
            matrix4x4(T m11, T m21, T m31, T m41, T m12, T m22, T m32, T m42, T m13, T m23, T m33, T m43, T m14, T m24, T m34, T m44) : matrix<T, 4, 4>()
            {
                this->operator()(0, 0) = m11;
                this->operator()(1, 0) = m21;
                this->operator()(2, 0) = m31;
                this->operator()(3, 0) = m41;
                this->operator()(0, 1) = m12;
                this->operator()(1, 1) = m22;
                this->operator()(2, 1) = m32;
                this->operator()(3, 1) = m42;
                this->operator()(0, 2) = m13;
                this->operator()(1, 2) = m23;
                this->operator()(2, 2) = m33;
                this->operator()(3, 2) = m43;
                this->operator()(0, 3) = m14;
                this->operator()(1, 3) = m24;
                this->operator()(2, 3) = m34;
                this->operator()(3, 3) = m44;
            }
        };
    }
}