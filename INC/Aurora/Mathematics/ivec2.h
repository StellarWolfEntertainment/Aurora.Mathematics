/**
 * @file ivec2.h
 * @brief Defines the ivec2 structure, representing a 2D integer vector.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
        struct vec2;
        struct vec3;
        struct vec4;
        struct ivec3;
        struct ivec4;

        /**
         * @brief 2D integer vector representation with x, and y components.
         */
        struct ivec2
        {
            /**
             * @brief The x-coordinate of the vector.
             */
            int x;

            /**
             * @brief The y-coordinate of the vector.
             */
            int y;

            /**
             * @brief Creates a vector with both components set to zero.
             * @return The zero vector.
             */
            static ivec2 zero();

            /**
             * @brief Creates a vector with both components set to one.
             * @return The vector with both components set to one.
             */
            static ivec2 one();

            /**
             * @brief Creates a vector pointing left (negative x-axis).
             * @return The left vector.
             */
            static ivec2 left();

            /**
             * @brief Creates a vector pointing right (positive x-axis).
             * @return The right vector.
             */
            static ivec2 right();

            /**
             * @brief Creates a vector pointing down (negative y-axis).
             * @return The down vector.
             */
            static ivec2 down();

            /**
             * @brief Creates a vector pointing up (positive y-axis).
             * @return The up vector.
             */
            static ivec2 up();

            /**
             * @brief Calculates the length of the vector.
             * @return The length of the vector.
             */
            float length() const;

            /**
             * @brief Calculates the squared length of the vector.
             * @return The squared length of the vector.
             */
            float lengthSquared() const;

            /**
             * @brief Returns a 2D vector with components x, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 xx() const;

            /**
             * @brief Sets the components of the 2D vector to the x, and x components of the source vector.
             * @param value The source vector.
             */
            void xx(ivec2 value);

            /**
             * @brief Returns a 2D vector with components x, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 xy() const;

            /**
             * @brief Sets the components of the 2D vector to the x, and y components of the source vector.
             * @param value The source vector.
             */
            void xy(ivec2 value);

            /**
             * @brief Returns a 2D vector with components y, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 yx() const;

            /**
             * @brief Sets the components of the 2D vector to the y, and x components of the source vector.
             * @param value The source vector.
             */
            void yx(ivec2 value);

            /**
             * @brief Returns a 2D vector with components y, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 yy() const;

            /**
             * @brief Sets the components of the 2D vector to the y, and y components of the source vector.
             * @param value The source vector.
             */
            void yy(ivec2 value);

            /**
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xxx() const;

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xxy() const;

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xyx() const;

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xyy() const;

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yxx() const;

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yxy() const;

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yyx() const;

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yyy() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxx() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxy() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyx() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyy() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxx() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxy() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyx() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyy() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxx() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxy() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyx() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyy() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxx() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxy() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyx() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyy() const;

            /**
             * @brief Default constructor for ivec2. Initializes the vector to (0, 0).
             */
            ivec2();

            /**
             * @brief Constructs a 2D vector with the specified x, and y components.
             * @param x The x-component of the vector.
             * @param y The y-component of the vector.
             */
            ivec2(int x, int y);

            /**
             * @brief Calculates the absolute values of each component of the vector.
             * @param value The input vector.
             * @return The vector with absolute values.
             */
            static ivec2 abs(ivec2 value);

            /**
             * @brief Calculates the ceiling of each component of the vector.
             * @param value The input vector.
             * @return The vector with ceiling values.
             */
            static ivec2 ceilToInt(vec2 value);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum value for each component.
             * @param maxValue The maximum value for each component.
             * @return The clamped vector.
             */
            static ivec2 clamp(ivec2 value, int minValue, int maxValue);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum values for each component.
             * @param maxValue The maximum values for each component.
             * @return The clamped vector.
             */
            static ivec2 clamp(ivec2 value, ivec2 minValue, ivec2 maxValue);

            /**
             * @brief Calculates the Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The distance between the vectors.
             */
            static float distance(ivec2 value1, ivec2 value2);

            /**
             * @brief Calculates the squared Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The squared distance between the vectors.
             */
            static float distanceSquared(ivec2 value1, ivec2 value2);

            /**
             * @brief Returns the vector with components rounded downward to the nearest integer.
             * @param value The vector to round.
             * @return The rounded vector.
             */
            static ivec2 floorToInt(vec2 value);

            /**
             * @brief Returns the maximum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the maximum components.
             */
            static ivec2 max(ivec2 value1, ivec2 value2);

            /**
             * @brief Returns the minimum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the minimum components.
             */
            static ivec2 min(ivec2 value1, ivec2 value2);

            /**
             * @brief Returns a vector perpendicular to the input vector.
             * @param value The input vector.
             * @return The perpendicular vector.
             */
            static ivec2 perpendicular(ivec2 value);

            /**
             * @brief Rounds each component of the vector to the nearest integer.
             * @param value The input vector.
             * @return The vector with rounded values.
             */
            static ivec2 roundToInt(vec2 value);

            /**
             * @brief Truncates the components of the vector to the nearest integer values (towards zero).
             * @param value The vector to truncate.
             * @return The truncated vector.
             */
            static ivec2 truncToInt(vec2 value);

            /**
             * @brief Negates each component of the vector.
             * @return The negated vector.
             */
            ivec2 operator -() const;

            /**
             * @brief Subtracts another vector from this vector.
             * @param other The vector to subtract.
             * @return The resulting vector.
             */
            ivec2 operator -(ivec2 other) const;

            /**
             * @brief Subtracts another vector from this vector in place.
             * @param other The vector to subtract.
             * @return Reference to this vector.
             */
            ivec2& operator -=(ivec2 other);

            /**
             * @brief Unary positive operator.
             * @return A copy of this vector.
             */
            ivec2 operator +() const;

            /**
             * @brief Adds another vector to this vector.
             * @param other The vector to add.
             * @return The resulting vector.
             */
            ivec2 operator +(ivec2 other) const;

            /**
             * @brief Adds another vector to this vector in place.
             * @param other The vector to add.
             * @return Reference to this vector.
             */
            ivec2& operator +=(ivec2 other);

            /**
             * @brief Multiplies this vector component-wise with another vector.
             * @param other The vector to multiply with.
             * @return The resulting vector.
             */
            ivec2 operator *(ivec2 other) const;

            /**
             * @brief Multiplies each component of the ivec2 by the corresponding component of another ivec2.
             * @param other The ivec2 to multiply with.
             * @return A reference to the modified ivec2.
             */
            ivec2& operator *=(ivec2 other);

            /**
             * @brief Multiplies this vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector.
             */
            ivec2 operator *(int other) const;

            /**
             * @brief Multiplies this vector by a scalar in place.
             * @param other The scalar value.
             * @return Reference to this vector.
             */
            ivec2& operator *=(int other);

            /**
             * @brief Multiplication operator to scale a vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be scaled.
             * @return The scaled vector.
             */
            friend ivec2 operator *(int lhs, ivec2 rhs);

            /**
             * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return The resulting vector after component-wise division.
             */
            ivec2 operator /(ivec2 other) const;

            /**
             * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return A reference to the modified vector.
             */
            ivec2& operator /= (ivec2 other);

            /**
             * @brief Divides each component of the ivec2 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A new ivec2 resulting from the division.
             */
            ivec2 operator /(int other) const;

            /**
             * @brief Divides each component of the ivec2 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A reference to the modified ivec2.
             */
            ivec2& operator /=(int other);

            /**
             * @brief Division operator to divide each component of the vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be divided.
             * @return The resulting vector after component-wise division.
             */
            friend ivec2 operator /(int lhs, ivec2 rhs);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec2 operator %(ivec2 other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return A reference to the modified vector.
             */
            ivec2& operator %=(ivec2 other);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec2 operator %(int other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return A reference to the modified vector.
             */
            ivec2& operator %=(int other);

            /**
             * @brief Modulo operator to compute the remainder of the division of the scalar by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            friend ivec2 operator%(int lhs, ivec2 rhs);

            /**
             * @brief Bitwise AND operator for 2D integer vectors.
             *
             * @param other The 2D integer vector to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec2 operator &(ivec2 other) const;

            /**
             * @brief Bitwise AND-assignment operator for 2D integer vectors.
             *
             * @param other The 2D integer vector to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 2D integer vector.
             */
            ivec2& operator &=(ivec2 other);

            /**
             * @brief Bitwise AND operator with a scalar integer for 2D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec2 operator &(int other) const;

            /**
             * @brief Bitwise AND-assignment operator with a scalar integer for 2D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 2D integer vector.
             */
            ivec2& operator &=(int other);

            /**
             * @brief Friend function to compute the bitwise AND of an integer and each component of a 2D integer vector.
             *
             * @param lhs The integer on the left-hand side of the bitwise AND operation.
             * @param rhs The 2D integer vector on the right-hand side of the bitwise AND operation.
             * @return The result of the bitwise AND operation.
             */
            friend ivec2 operator&(int lhs, ivec2 rhs);

            /**
             * @brief Equality comparison operator to check if two vectors are equal.
             * @param other The vector to compare against.
             * @return True if the vectors are equal, false otherwise.
             */
            bool operator ==(ivec2 other) const;

            /**
             * @brief Inequality comparison operator to check if two vectors are not equal.
             * @param other The vector to compare against.
             * @return True if the vectors are not equal, false otherwise.
             */
            bool operator !=(ivec2 other) const;

            /**
             * @brief Implicit conversion to a 3D vector.
             * @return The 3D vector with the x, and y components from this vector and the z component set to 0.
             */
            operator ivec3() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            operator ivec4() const;

            /**
             * @brief Implicit conversion to a 2D vector.
             * @return The 2D vector with the x and y components from this vector.
             */
            operator vec2() const;

            /**
             * @brief Implicit conversion to a 3D vector.
             * @return The 2D vector with the x and y components from this vector and the z component set to 0.
             */
            operator vec3() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            operator vec4() const;
        };
    }
}