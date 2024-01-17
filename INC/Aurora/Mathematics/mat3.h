/**
 * @file mat3.h
 * @brief Defines the mat3 struct, representing a 3x3 matrix with float elements.
 * @author Raistlin Wolfe
 */
#pragma once

#include "matrix.h"

namespace Aurora
{
    namespace Mathematics
    {
        struct vec2;
        struct angle;

        /**
         * @brief Represents a 3x3 floating-point matrix
         */
        struct mat3 : public matrix3x3<float>
        {
            /**
             * @brief Returns the identity matrix.
             * @return The identity matrix.
             */
            static mat3 identity();

            /**
             * @brief Calculates the determinant of the matrix.
             * @return The determinant of the matrix.
             */
            float determinant() const;

            /**
             * @brief Default constructor, initializes a zero matrix.
             */
            mat3();

            /**
             * @brief Constructor. Initializes the 3x3 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m12 The value at position (1, 2).
             * @param m13 The value at position (1, 3).
             * @param m21 The value at position (2, 1).
             * @param m22 The value at position (2, 2).
             * @param m23 The value at position (2, 3).
             * @param m31 The value at position (3, 1).
             * @param m32 The value at position (3, 2).
             * @param m33 The value at position (3, 3).
             */
            mat3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);

            /**
            * @brief Checks if two matrices are approximately equal.
            * @param value1 The first matrix for comparison.
            * @param value2 The second matrix for comparison.
            * @return True if the matrices are approximately equal, false otherwise.
            */
            static bool approximately(mat3 value1, mat3 value2);

            /**
            * @brief Inverts the matrix.
            * @param value The matrix to be inverted.
            * @return The inverted matrix.
            */
            static mat3 invert(mat3 value);

            /**
             * @brief Inverts the current matrix.
             */
            void invert();

            /**
             * @brief Transposes the matrix.
             * @param value The matrix to be transposed.
             * @return The transposed matrix.
             */
            static mat3 transpose(mat3 value);

            /**
             * @brief Transposes the current matrix.
             */
            void transpose();

            /**
             * @brief Creates a 3x3 translation matrix based on the specified position.
             * @param position The translation vector.
             * @return The translation matrix.
             */
            static mat3 createTranslation(vec2 position);

            /**
             * @brief Creates a 3x3 scaling matrix based on the specified scale.
             * @param scale The scaling vector.
             * @return The scaling matrix.
             */
            static mat3 createScale(vec2 scale);

            /**
             * @brief Creates a 3x3 rotation matrix based on the specified rotation angles.
             * @param rotation The rotation in degrees.
             * @return The rotation matrix.
             */
            static mat3 createRotation(float rotation);

            /**
             * @brief Creates a 3x3 rotation matrix based on the specified rotation angles.
             * @param rotation The rotation angle.
             * @return The rotation matrix.
             */
            static mat3 createRotation(angle rotation);

            /**
             * @brief Creates a 3x3 transformation matrix based on translation, rotation, and scaling vectors.
             * @param translation The translation vector.
             * @param rotation The rotation in degrees.
             * @param scaling The scaling vector.
             * @return The transformation matrix.
             */
            static mat3 createTransform(vec2 translation, float rotation, vec2 scaling);

            /**
             * @brief Creates a 3x3 transformation matrix based on translation, rotation, and scaling vectors.
             * @param translation The translation vector.
             * @param rotation The rotation angle.
             * @param scaling The scaling vector.
             * @return The transformation matrix.
             */
            static mat3 createTransform(vec2 translation, angle rotation, vec2 scaling);

            /**
             * Creates an orthographic projection matrix for a 2D space.
             *
             * @param scale The orthographic scale, equivalent to the half-height of the projection.
             * @param aspectRatio The aspect ratio of the screen (width / height).
             * @return The orthographic projection matrix.
             */
            static mat3 createOrthographic(float scale, float aspectRatio);

            /**
             * Creates an orthographic projection matrix for a 2D space.
             *
             * @param scale The orthographic scale, equivalent to the half-height of the projection.
             * @param aspectRatio The aspect ratio of the screen (width / height).
             * @param offset The offset of the projection, default is vec2::zero().
             * @return The orthographic projection matrix.
             */
            static mat3 createOrthographic(float scale, float aspectRatio, vec2 offset);

            /**
             * @brief Unary operator for matrix inversion.
             * @return The inverted matrix.
             */
            mat3 operator !() const;

            /**
             * @brief Unary operator for matrix transposition.
             * @return The transposed matrix.
             */
            mat3 operator ~() const;

            /**
             * @brief Unary operator for negation.
             * @return The negated matrix.
             */
            mat3 operator -() const;

            /**
             * @brief Binary operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return The result of the subtraction.
             */
            mat3 operator -(mat3 other) const;

            /**
             * @brief Compound assignment operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return Reference to the modified matrix.
             */
            mat3& operator -=(mat3 other);

            /**
             * @brief Unary operator for identity (no change).
             * @return The unchanged matrix.
             */
            mat3 operator +() const;

            /**
             * @brief Binary operator for matrix addition.
             * @param other The matrix to add.
             * @return The result of the addition.
             */
            mat3 operator +(mat3 other) const;

            /**
             * @brief Compound assignment operator for matrix addition.
             * @param other The matrix to add.
             * @return Reference to the modified matrix.
             */
            mat3& operator +=(mat3 other);

            /**
             * @brief Binary operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return The result of the multiplication.
             */
            mat3 operator *(mat3 other) const;

            /**
             * @brief Compound assignment operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return Reference to the modified matrix.
             */
            mat3& operator *=(mat3 other);

            /**
             * @brief Binary operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return The result of the scalar multiplication.
             */
            mat3 operator *(float other) const;

            /**
             * @brief Compound assignment operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return Reference to the modified matrix.
             */
            mat3& operator *=(float other);

            /**
             * @brief Friend function for scalar multiplication with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to multiply.
             * @return The result of the multiplication.
             */
            friend mat3 operator *(float lhs, mat3 rhs);

            /**
             * @brief Binary operator for matrix division.
             * @param other The matrix to divide by.
             * @return The result of the division.
             */
            mat3 operator /(mat3 other) const;

            /**
             * @brief Compound assignment operator for matrix division.
             * @param other The matrix to divide by.
             * @return Reference to the modified matrix.
             */
            mat3& operator /= (mat3 other);

            /**
             * @brief Binary operator for scalar division.
             * @param other The scalar value to divide by.
             * @return The result of the scalar division.
             */
            mat3 operator /(float other) const;

            /**
             * @brief Compound assignment operator for scalar division.
             * @param other The scalar value to divide by.
             * @return Reference to the modified matrix.
             */
            mat3& operator /=(float other);

            /**
             * @brief Friend function for scalar division with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to divide by.
             * @return The result of the division.
             */
            friend mat3 operator /(float lhs, mat3 rhs);

            /**
             * @brief Equality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are equal, false otherwise.
             */
            bool operator ==(mat3 other) const;

            /**
             * @brief Inequality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are not equal, false otherwise.
             */
            bool operator !=(mat3 other) const;
        };
    }
}