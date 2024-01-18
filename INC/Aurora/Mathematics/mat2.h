/**
 * @file mat2.h
 * @brief Defines the mat2 struct, representing a 2x2 matrix with float elements.
 * @author Raistlin Wolfe
 */
#pragma once

#include "matrix.h"
#include <map>

namespace Aurora
{
    struct vec2;

    namespace Mathematics
    {
        /**
         * @brief Represents a 2x2 floating-point matrix.
         */
        struct mat2 : public matrix2x2<float>
        {
            /**
             * @brief Returns the identity matrix.
             * @return The identity matrix.
             */
            static mat2 identity();

            /**
             * @brief Calculates the determinant of the matrix.
             * @return The determinant of the matrix.
             */
            float determinant() const;

            /**
             * @brief Calculates the trace of the matrix.
             * @return The trace of the matrix.
             */
            float trace() const;

            /**
             * @brief Gets the specified row from the matrix.
             * @param row The index of the row to retrieve.
             * @return The vector representing the specified row.
             */
            vec2 row(int row) const;

            /**
             * @brief Sets the specified row in the matrix.
             * @param row The index of the row to set.
             * @param value The vector to set as the new row.
             */
            void row(int row, const vec2& value);

            /**
             * @brief Gets the specified column from the matrix.
             * @param col The index of the column to retrieve.
             * @return The vector representing the specified column.
             */
            vec2 col(int col) const;

            /**
             * @brief Sets the specified column in the matrix.
             * @param col The index of the column to set.
             * @param value The vector to set as the new column.
             */
            void col(int col, const vec2& value);


            /**
             * @brief Default constructor, initializes a zero matrix.
             */
            mat2();

            /**
             * @brief Constructor. Initializes the 2x2 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m21 The value at position (2, 1).
             * @param m12 The value at position (1, 2).
             * @param m22 The value at position (2, 2).
             */
            mat2(float m11, float m21, float m12, float m22);

            /**
            * @brief Checks if two matrices are approximately equal.
            * @param value1 The first matrix for comparison.
            * @param value2 The second matrix for comparison.
            * @return True if the matrices are approximately equal, false otherwise.
            */
            static bool approximately(const mat2& value1, const mat2& value2);

            /**
             * @brief Adjugates the matrix.
             * @param value The matrix to be adjugated.
             * @return The adjugated matrix.
             */
            static mat2 adjugate(mat2 value);

            /**
             * @brief Adjugates the current matrix.
             */
            void adjugate();

            /**
            * @brief Inverts the matrix.
            * @param value The matrix to be inverted.
            * @return The inverted matrix.
            */
            static mat2 invert(mat2 value);

            /**
             * @brief Inverts the current matrix.
             */
            void invert();

            /**
             * @brief Transposes the matrix.
             * @param value The matrix to be transposed.
             * @return The transposed matrix.
             */
            static mat2 transpose(mat2 value);

            /**
             * @brief Transposes the current matrix.
             */
            void transpose();

            /**
             * @brief Unary operator for matrix inversion.
             * @return The inverted matrix.
             */
            mat2 operator !() const;

            /**
             * @brief Unary operator for matrix transposition.
             * @return The transposed matrix.
             */
            mat2 operator ~() const;

            /**
             * @brief Unary operator for negation.
             * @return The negated matrix.
             */
            mat2 operator -() const;

            /**
             * @brief Binary operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return The result of the subtraction.
             */
            mat2 operator -( const mat2& other) const;

            /**
             * @brief Compound assignment operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return Reference to the modified matrix.
             */
            mat2& operator -=( const mat2& other);

            /**
             * @brief Unary operator for identity (no change).
             * @return The unchanged matrix.
             */
            mat2 operator +() const;

            /**
             * @brief Binary operator for matrix addition.
             * @param other The matrix to add.
             * @return The result of the addition.
             */
            mat2 operator +( const mat2& other) const;

            /**
             * @brief Compound assignment operator for matrix addition.
             * @param other The matrix to add.
             * @return Reference to the modified matrix.
             */
            mat2& operator +=( const mat2& other);

            /**
             * @brief Binary operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return The result of the multiplication.
             */
            mat2 operator *( const mat2& other) const;

            /**
             * @brief Compound assignment operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return Reference to the modified matrix.
             */
            mat2& operator *=( const mat2& other);

            /**
             * @brief Binary operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return The result of the scalar multiplication.
             */
            mat2 operator *(float other) const;

            /**
             * @brief Compound assignment operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return Reference to the modified matrix.
             */
            mat2& operator *=(float other);

            /**
             * @brief Friend function for scalar multiplication with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to multiply.
             * @return The result of the multiplication.
             */
            friend mat2 operator *(float lhs, const mat2& rhs);

            /**
             * @brief Binary operator for matrix division.
             * @param other The matrix to divide by.
             * @return The result of the division.
             */
            mat2 operator /( const mat2& other) const;

            /**
             * @brief Compound assignment operator for matrix division.
             * @param other The matrix to divide by.
             * @return Reference to the modified matrix.
             */
            mat2& operator /= ( const mat2& other);

            /**
             * @brief Binary operator for scalar division.
             * @param other The scalar value to divide by.
             * @return The result of the scalar division.
             */
            mat2 operator /(float other) const;

            /**
             * @brief Compound assignment operator for scalar division.
             * @param other The scalar value to divide by.
             * @return Reference to the modified matrix.
             */
            mat2& operator /=(float other);

            /**
             * @brief Friend function for scalar division with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to divide by.
             * @return The result of the division.
             */
            friend mat2 operator /(float lhs, const mat2& rhs);

            /**
             * @brief Equality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are equal, false otherwise.
             */
            bool operator ==( const mat2& other) const;

            /**
             * @brief Inequality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are not equal, false otherwise.
             */
            bool operator !=( const mat2& other) const;
        };
    }
}