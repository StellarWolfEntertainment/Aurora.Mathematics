/**
 * @file vec2.h
 * @brief Defines the vec2 structure, representing a 2D vector.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
        enum class Quality;

        struct vec3;
        struct vec4;
        struct ivec2;
        struct ivec3;
        struct ivec4;
        struct angle;

        /**
         * @brief 2D vector representation with x, and y components.
         */
        struct vec2
        {
            /**
             * @brief The x-coordinate of the vector.
             */
            float x;

            /**
             * @brief The y-coordinate of the vector.
             */
            float y;

            /**
             * @brief Creates a vector with both components set to zero.
             * @return The zero vector.
             */
            static vec2 zero();

            /**
             * @brief Creates a vector with both components set to one.
             * @return The vector with both components set to one.
             */
            static vec2 one();

            /**
             * @brief Creates a vector pointing left (negative x-axis).
             * @return The left vector.
             */
            static vec2 left();

            /**
             * @brief Creates a vector pointing right (positive x-axis).
             * @return The right vector.
             */
            static vec2 right();

            /**
             * @brief Creates a vector pointing down (negative y-axis).
             * @return The down vector.
             */
            static vec2 down();

            /**
             * @brief Creates a vector pointing up (positive y-axis).
             * @return The up vector.
             */
            static vec2 up();

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
             * @brief Returns a normalized version of the vector.
             * @return The normalized vector.
             */
            vec2 normalized() const;


            /**
             * @brief Returns a 2D vector with components x, and x.
             * @return The swizzled 2D vector.
             */
            vec2 xx() const;

            /**
             * @brief Sets the components of the 2D vector to the x, and x components of the source vector.
             * @param value The source vector.
             */
            void xx(vec2 value);

            /**
             * @brief Returns a 2D vector with components x, and y.
             * @return The swizzled 2D vector.
             */
            vec2 xy() const;

            /**
             * @brief Sets the components of the 2D vector to the x, and y components of the source vector.
             * @param value The source vector.
             */
            void xy(vec2 value);

            /**
             * @brief Returns a 2D vector with components y, and x.
             * @return The swizzled 2D vector.
             */
            vec2 yx() const;

            /**
             * @brief Sets the components of the 2D vector to the y, and x components of the source vector.
             * @param value The source vector.
             */
            void yx(vec2 value);

            /**
             * @brief Returns a 2D vector with components y, and y.
             * @return The swizzled 2D vector.
             */
            vec2 yy() const;

            /**
             * @brief Sets the components of the 2D vector to the y, and y components of the source vector.
             * @param value The source vector.
             */
            void yy(vec2 value);

            /**
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xxx() const;

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xxy() const;

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xyx() const;

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xyy() const;

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yxx() const;

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yxy() const;

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yyx() const;

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yyy() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxxx() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxxy() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxyx() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxyy() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyxx() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyxy() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyyx() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyyy() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxxx() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxxy() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxyx() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxyy() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyxx() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyxy() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyyx() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyyy() const;

            /**
             * @brief Default constructor for vec2. Initializes the vector to (0, 0).
             */
            vec2();

            /**
             * @brief Constructs a 2D vector with the specified x, and y components.
             * @param x The x-component of the vector.
             * @param y The y-component of the vector.
             */
            vec2(float x, float y);

            /**
             * @brief Constructs a 2D vector from an angle and optional radius.
             * @param angle The angle for the direction of the vector.
             * @param radius The optional radius (default is 1.0).
             */
            vec2(angle angle, float radius = 1.0f);

            /**
             * @brief Calculates the absolute values of each component of the vector.
             * @param value The input vector.
             * @return The vector with absolute values.
             */
            static vec2 abs(vec2 value);

            /**
             * @brief Checks if two vectors are approximately equal within a small tolerance.
             * @param value1 The first vector for comparison.
             * @param value2 The second vector for comparison.
             * @return True if the vectors are approximately equal, false otherwise.
             */
            static bool approximately(vec2 value1, vec2 value2);

            /**
             * @brief Calculates the angle of the vector in radians.
             * @param value The vector for which to calculate the angle.
             * @return The angle of the vector in radians.
             */
            static angle angle(vec2 value);

            /**
              * @brief Performs a barycentric interpolation between three vectors.
              * @param value1 The first vector.
              * @param value2 The second vector.
              * @param value3 The third vector.
              * @param amount1 The weighting factor for the first vector.
              * @param amount2 The weighting factor for the second vector.
              * @return The interpolated vector.
              */
            static vec2 barycentric(vec2 value1, vec2 value2, vec2 value3, float amount1, float amount2);

            /**
             * @brief Performs a Catmull-Rom interpolation between four vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @param value3 The third vector.
             * @param value4 The fourth vector.
             * @param amount The interpolation factor.
             * @return The interpolated vector.
             */
            static vec2 catmullRom(vec2 value1, vec2 value2, vec2 value3, vec2 value4, float amount);

            /**
             * @brief Calculates the ceiling of each component of the vector.
             * @param value The input vector.
             * @return The vector with ceiling values.
             */
            static vec2 ceil(vec2 value);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum value for each component.
             * @param maxValue The maximum value for each component.
             * @return The clamped vector.
             */
            static vec2 clamp(vec2 value, float minValue, float maxValue);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum values for each component.
             * @param maxValue The maximum values for each component.
             * @return The clamped vector.
             */
            static vec2 clamp(vec2 value, vec2 minValue, vec2 maxValue);

            /**
             * @brief Calculates the cross product of two vectors (result is a scalar).
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The cross product of the vectors.
             */
            static float cross(vec2 value1, vec2 value2);

            /**
             * @brief Calculates the Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The distance between the vectors.
             */
            static float distance(vec2 value1, vec2 value2);

            /**
             * @brief Calculates the squared Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The squared distance between the vectors.
             */
            static float distanceSquared(vec2 value1, vec2 value2);

            /**
             * @brief Calculates the dot product of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The dot product of the vectors.
             */
            static float dot(vec2 value1, vec2 value2);

            /**
             * @brief Returns the vector with components rounded downward to the nearest integer.
             * @param value The vector to round.
             * @return The rounded vector.
             */
            static vec2 floor(vec2 value);

            /**
             * @brief Extracts the fractional parts of each component of a 2D vector.
             *
             * @param value The input 2D vector.
             * @return A 2D vector containing the fractional parts of each component of the input vector.
             */
            static vec2 frac(vec2 value);

            /**
             * @brief Performs a Hermite spline interpolation between two vectors.
             * @param value1 The first vector.
             * @param tangent1 The tangent vector at the first vector.
             * @param value2 The second vector.
             * @param tangent2 The tangent vector at the second vector.
             * @param amount The interpolation factor.
             * @return The interpolated vector.
             */
            static vec2 hermite(vec2 value1, vec2 tangent1, vec2 value2, vec2 tangent2, float amount);

            /**
             * @brief Performs a linear interpolation between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @param amount The interpolation factor.
             * @return The interpolated vector.
             */
            static vec2 lerp(vec2 value1, vec2 value2, float amount);

            /**
             * @brief Performs an unclamped linear interpolation between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @param amount The interpolation factor.
             * @return The interpolated vector.
             */
            static vec2 lerpUnclamped(vec2 value1, vec2 value2, float amount);

            /**
             * @brief Performs a smooth interpolation between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @param amount The interpolation factor.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated vector.
             */
            static vec2 lerpSmooth(vec2 value1, vec2 value2, float amount, Quality quality);

            /**
             * @brief Performs a smooth step interpolation between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @param edge0 The lower edge.
             * @param edge1 The upper edge.
             * @param amount The interpolation factor.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated vector.
             */
            static vec2 lerpSmoothStep(vec2 value1, vec2 value2, float edge0, float edge1, float amount, Quality quality);

            /**
             * @brief Returns the maximum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the maximum components.
             */
            static vec2 max(vec2 value1, vec2 value2);

            /**
             * @brief Returns the minimum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the minimum components.
             */
            static vec2 min(vec2 value1, vec2 value2);

            /**
             * @brief Normalizes the input vector.
             * @param value The input vector.
             * @return The normalized vector.
             */
            static vec2 normalize(vec2 value);

            /**
             * @brief Normalizes the vector.
             */
            void normalize();

            /**
             * @brief Returns a vector perpendicular to the input vector.
             * @param value The input vector.
             * @return The perpendicular vector.
             */
            static vec2 perpendicular(vec2 value);

            /**
             * @brief Projects a vector onto another vector.
             * @param vector The vector to project.
             * @param onNormal The vector onto which to project.
             * @return The projected vector.
             */
            static vec2 project(vec2 vector, vec2 onNormal);

            /**
             * @brief Reflects a vector off a surface with the specified normal.
             * @param vector The incident vector.
             * @param onNormal The surface normal.
             * @return The reflected vector.
             */
            static vec2 reflect(vec2 vector, vec2 onNormal);

            /**
             * @brief Refracts a vector through a surface with the specified normal and indices of refraction.
             * @param vector The incident vector.
             * @param onNormal The surface normal.
             * @param ior The index of refraction of the incident medium.
             * @param iot The index of refraction of the transmitted medium.
             * @return The refracted vector.
             */
            static vec2 refract(vec2 vector, vec2 onNormal, float ior, float iot);

            /**
             * @brief Rejects a vector from another vector.
             * @param vector The vector to reject.
             * @param onNormal The vector from which to reject.
             * @return The rejected vector.
             */
            static vec2 reject(vec2 vector, vec2 onNormal);

            /**
             * @brief Rotates a vector by a specified angle.
             * @param vector The vector to rotate.
             * @param angle The angle of rotation in degrees.
             * @return The rotated vector.
             */
            static vec2 rotate(vec2 vector, float angle);

            /**
             * @brief Rotates the given vector by the specified angle.
             * @param vector The vector to rotate.
             * @param angle The angle of rotation.
             * @return The rotated vector.
             */
            static vec2 rotate(vec2 vector, Mathematics::angle angle);

            /**
             * @brief Rotates a vector around a specified origin by a specified angle.
             * @param vector The vector to rotate.
             * @param origin The origin of rotation.
             * @param angle The angle of rotation in degrees.
             * @return The rotated vector.
             */
            static vec2 rotateAround(vec2 vector, vec2 origin, float angle);

            /**
             * @brief Rotates a vector around a specified origin by a specified angle.
             * @param vector The vector to rotate.
             * @param origin The origin of rotation.
             * @param angle The angle of rotation.
             * @return The rotated vector.
             */
            static vec2 rotateAround(vec2 vector, vec2 origin, Mathematics::angle angle);

            /**
             * @brief Rounds each component of the vector to the nearest integer.
             * @param value The input vector.
             * @return The vector with rounded values.
             */
            static vec2 round(vec2 value);

            /**
             * @brief Performs a smooth step interpolation between two vectors.
             * @param edge0 The lower edge.
             * @param edge1 The upper edge.
             * @param value The input vector.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated vector.
             */
            static vec2 smoothstep(vec2 edge0, vec2 edge1, vec2 value, Quality quality);

            /**
             * @brief Truncates the components of the vector to the nearest integer values (towards zero).
             * @param value The vector to truncate.
             * @return The truncated vector.
             */
            static vec2 trunc(vec2 value);

            /**
             * @brief Negates each component of the vector.
             * @return The negated vector.
             */
            vec2 operator -() const;

            /**
             * @brief Subtracts another vector from this vector.
             * @param other The vector to subtract.
             * @return The resulting vector.
             */
            vec2 operator -(vec2 other) const;

            /**
             * @brief Subtracts another vector from this vector in place.
             * @param other The vector to subtract.
             * @return Reference to this vector.
             */
            vec2& operator -=(vec2 other);

            /**
             * @brief Unary positive operator.
             * @return A copy of this vector.
             */
            vec2 operator +() const;

            /**
             * @brief Adds another vector to this vector.
             * @param other The vector to add.
             * @return The resulting vector.
             */
            vec2 operator +(vec2 other) const;

            /**
             * @brief Adds another vector to this vector in place.
             * @param other The vector to add.
             * @return Reference to this vector.
             */
            vec2& operator +=(vec2 other);

            /**
             * @brief Multiplies this vector component-wise with another vector.
             * @param other The vector to multiply with.
             * @return The resulting vector.
             */
            vec2 operator *(vec2 other) const;

            /**
             * @brief Multiplies each component of the vec2 by the corresponding component of another vec2.
             * @param other The vec2 to multiply with.
             * @return A reference to the modified vec2.
             */
            vec2& operator *=(vec2 other);

            /**
             * @brief Multiplies this vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector.
             */
            vec2 operator *(float other) const;

            /**
             * @brief Multiplies this vector by a scalar in place.
             * @param other The scalar value.
             * @return Reference to this vector.
             */
            vec2& operator *=(float other);

            /**
             * @brief Multiplication operator to scale a vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be scaled.
             * @return The scaled vector.
             */
            friend vec2 operator *(float lhs, vec2 rhs);

            /**
             * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return The resulting vector after component-wise division.
             */
            vec2 operator /(vec2 other) const;

            /**
             * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return A reference to the modified vector.
             */
            vec2& operator /= (vec2 other);

            /**
             * @brief Divides each component of the vec2 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A new vec2 resulting from the division.
             */
            vec2 operator /(float other) const;

            /**
             * @brief Divides each component of the vec2 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A reference to the modified vec2.
             */
            vec2& operator /=(float other);

            /**
             * @brief Division operator to divide each component of the vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be divided.
             * @return The resulting vector after component-wise division.
             */
            friend vec2 operator /(float lhs, vec2 rhs);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            vec2 operator %(vec2 other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return A reference to the modified vector.
             */
            vec2& operator %=(vec2 other);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector after component-wise modulo operation.
             */
            vec2 operator %(float other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return A reference to the modified vector.
             */
            vec2& operator %=(float other);

            /**
             * @brief Equality comparison operator to check if two vectors are equal.
             * @param other The vector to compare against.
             * @return True if the vectors are equal, false otherwise.
             */
            bool operator ==(vec2 other) const;

            /**
             * @brief Inequality comparison operator to check if two vectors are not equal.
             * @param other The vector to compare against.
             * @return True if the vectors are not equal, false otherwise.
             */
            bool operator !=(vec2 other) const;

            /**
             * @brief Implicit conversion to a 3D vector.
             * @return The 3D vector with the x, and y components from this vector and the z component set to 0.
             */
            operator vec3() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            operator vec4() const;

            /**
             * @brief Explicit conversion to a 2D vector.
             * @return The 2D vector with the x, and y components from this vector.
             */
            explicit operator ivec2() const;

            /**
             * @brief Explicit conversion to a 3D vector.
             * @return The 3D vector with the x, and y components from this vector and the z component set to 0.
             */
            explicit operator ivec3() const;

            /**
             * @brief Explicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w components set to 0.
             */
            explicit operator ivec4() const;
        };
    }
}