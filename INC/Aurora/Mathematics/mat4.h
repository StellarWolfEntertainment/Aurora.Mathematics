/**
 * @file mat4.h
 * @brief Defines the mat4 struct, representing a 4x4 matrix with float elements.
 * @author Raistlin Wolfe
 */
#pragma once

#include "matrix.h"

namespace Aurora
{
    namespace Mathematics
    {
        struct vec2;
        struct vec3;
        struct angle;

        /**
         * @brief Represents a 4x4 floating-point matrix
         */
        struct mat4 : public matrix4x4<float>
        {
            /**
             * @brief Returns the identity matrix.
             * @return The identity matrix.
             */
            static mat4 identity();

            /**
             * @brief Calculates the determinant of the matrix.
             * @return The determinant of the matrix.
             */
            float determinant() const;

            /**
             * @brief Default constructor, initializes a zero matrix.
             */
            mat4();

            /**
             * @brief Constructor. Initializes the 4x4 matrix with the provided values.
             * @param m11 The value at position (1, 1).
             * @param m12 The value at position (1, 2).
             * @param m13 The value at position (1, 3).
             * @param m14 The value at position (1, 4).
             * @param m21 The value at position (2, 1).
             * @param m22 The value at position (2, 2).
             * @param m23 The value at position (2, 3).
             * @param m24 The value at position (2, 4).
             * @param m31 The value at position (3, 1).
             * @param m32 The value at position (3, 2).
             * @param m33 The value at position (3, 3).
             * @param m34 The value at position (3, 4).
             * @param m41 The value at position (4, 1).
             * @param m42 The value at position (4, 2).
             * @param m43 The value at position (4, 3).
             * @param m44 The value at position (4, 4).
             */
            mat4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);

            /**
            * @brief Checks if two matrices are approximately equal.
            * @param value1 The first matrix for comparison.
            * @param value2 The second matrix for comparison.
            * @return True if the matrices are approximately equal, false otherwise.
            */
            static bool approximately(mat4 value1, mat4 value2);

            /**
            * @brief Inverts the matrix.
            * @param value The matrix to be inverted.
            * @return The inverted matrix.
            */
            static mat4 invert(mat4 value);

            /**
             * @brief Inverts the current matrix.
             */
            void invert();

            /**
             * @brief Transposes the matrix.
             * @param value The matrix to be transposed.
             * @return The transposed matrix.
             */
            static mat4 transpose(mat4 value);

            /**
             * @brief Transposes the current matrix.
             */
            void transpose();

            /**
             * @brief Creates a 4x4 translation matrix based on the specified position.
             * @param position The translation vector.
             * @return The translation matrix.
             */
            static mat4 createTranslation(vec3 position);

            /**
             * @brief Creates a 4x4 scaling matrix based on the specified scale.
             * @param scale The scaling vector.
             * @return The scaling matrix.
             */
            static mat4 createScale(vec3 scale);

            /**
             * @brief Creates a 4x4 rotation matrix based on the specified rotation angles.
             * @param rotation The rotation vector in degrees.
             * @return The rotation matrix.
             */
            static mat4 createRotation(vec3 rotation);

            /**
             * @brief Creates a 4x4 transformation matrix based on translation, rotation, and scaling vectors.
             * @param translation The translation vector.
             * @param rotation The rotation vector in degrees.
             * @param scaling The scaling vector.
             * @return The transformation matrix.
             */
            static mat4 createTransform(vec3 translation, vec3 rotation, vec3 scaling);

            /**
             * Creates a perspective projection matrix.
             *
             * @param fov Field of view angle in degrees.
             * @param aspectRatio Aspect ratio of the viewport (width / height).
             * @param nearClip Distance to the near clipping plane.
             * @param farClip Distance to the far clipping plane.
             * @return A perspective projection matrix.
             */
            static mat4 createPerspective(float fov, float aspectRatio, float nearClip, float farClip);

            /**
             * Creates an orthographc projection matrix.
             *
             * @param scale The scale factor for the projection.
             * @param aspectRatio Aspect ratio of the viewport (width / height).
             * @param nearClip Distance to the near clipping plane.
             * @param farClip Distance to the far clipping plane.
             * @return An orthographic projection matrix.
            */
            mat4 createOrthographic(float scale, float aspectRatio, float nearClip, float farClip);

            /**
             * Creates an orthographc projection matrix.
             *
             * @param scale The scale factor for the projection.
             * @param aspectRatio Aspect ratio of the viewport (width / height).
             * @param nearClip Distance to the near clipping plane.
             * @param farClip Distance to the far clipping plane.
             * @param offset The offset from center in 2D space.
             * @return An orthographic projection matrix.
            */
            mat4 createOrthographic(float scale, float aspectRatio, float nearClip, float farClip, vec2 offset);

            /**
             * @brief Unary operator for matrix inversion.
             * @return The inverted matrix.
             */
            mat4 operator !() const;

            /**
             * @brief Unary operator for matrix transposition.
             * @return The transposed matrix.
             */
            mat4 operator ~() const;

            /**
             * @brief Unary operator for negation.
             * @return The negated matrix.
             */
            mat4 operator -() const;

            /**
             * @brief Binary operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return The result of the subtraction.
             */
            mat4 operator -(mat4 other) const;

            /**
             * @brief Compound assignment operator for matrix subtraction.
             * @param other The matrix to subtract.
             * @return Reference to the modified matrix.
             */
            mat4& operator -=(mat4 other);

            /**
             * @brief Unary operator for identity (no change).
             * @return The unchanged matrix.
             */
            mat4 operator +() const;

            /**
             * @brief Binary operator for matrix addition.
             * @param other The matrix to add.
             * @return The result of the addition.
             */
            mat4 operator +(mat4 other) const;

            /**
             * @brief Compound assignment operator for matrix addition.
             * @param other The matrix to add.
             * @return Reference to the modified matrix.
             */
            mat4& operator +=(mat4 other);

            /**
             * @brief Binary operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return The result of the multiplication.
             */
            mat4 operator *(mat4 other) const;

            /**
             * @brief Compound assignment operator for matrix multiplication.
             * @param other The matrix to multiply.
             * @return Reference to the modified matrix.
             */
            mat4& operator *=(mat4 other);

            /**
             * @brief Binary operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return The result of the scalar multiplication.
             */
            mat4 operator *(float other) const;

            /**
             * @brief Compound assignment operator for scalar multiplication.
             * @param other The scalar value to multiply.
             * @return Reference to the modified matrix.
             */
            mat4& operator *=(float other);

            /**
             * @brief Friend function for scalar multiplication with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to multiply.
             * @return The result of the multiplication.
             */
            friend mat4 operator *(float lhs, mat4 rhs);

            /**
             * @brief Binary operator for matrix division.
             * @param other The matrix to divide by.
             * @return The result of the division.
             */
            mat4 operator /(mat4 other) const;

            /**
             * @brief Compound assignment operator for matrix division.
             * @param other The matrix to divide by.
             * @return Reference to the modified matrix.
             */
            mat4& operator /= (mat4 other);

            /**
             * @brief Binary operator for scalar division.
             * @param other The scalar value to divide by.
             * @return The result of the scalar division.
             */
            mat4 operator /(float other) const;

            /**
             * @brief Compound assignment operator for scalar division.
             * @param other The scalar value to divide by.
             * @return Reference to the modified matrix.
             */
            mat4& operator /=(float other);

            /**
             * @brief Friend function for scalar division with matrix on the left.
             * @param lhs The scalar value.
             * @param rhs The matrix to divide by.
             * @return The result of the division.
             */
            friend mat4 operator /(float lhs, mat4 rhs);

            /**
             * @brief Equality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are equal, false otherwise.
             */
            bool operator ==(mat4 other) const;

            /**
             * @brief Inequality operator.
             * @param other The matrix to compare with.
             * @return True if matrices are not equal, false otherwise.
             */
            bool operator !=(mat4 other) const;
        };
    }
}