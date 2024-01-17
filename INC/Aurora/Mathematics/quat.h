/**
 * @file quat.h
 * @brief Defines the quat structure, representing a mathematical quaternion for 3D rotations.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		enum class Quality;
		struct vec3;

		/**
		 * @brief Quaternion representation with x, y, z, and w components. <b>Note:</b> This struct automatically normalizes rotations before and after each operation.
		 */
		struct quat
		{
			/**
			 * @brief The X component of the quaternion.
			 */
			float x;

			/**
			 * @brief The Y component of the quaternion.
			 */
			float y;

			/**
			 * @brief The Z component of the quaternion.
			 */
			float z;

			/**
			 * @brief The W component of the quaternion.
			 */
			float w;

			/**
			 * @brief Gets the identity quaternion.
			 *
			 * @return The identity quaternion.
			 */
			static quat identity();

			/**
			 * @brief Gets the length of the quaternion.
			 *
			 * @return The length of the quaternion.
			 */
			float length() const;

			/**
			 * @brief Gets the squared length of the quaternion.
			 *
			 * @return The squared length of the quaternion.
			 */
			float lengthSquared() const;

			/**
			 * @brief Gets the normalized quaternion.
			 *
			 * @return The normalized quaternion.
			 */
			quat normalized() const;

			/**
			 * @brief Gets the inverted quaternion.
			 *
			 * @return The inverted quaternion.
			 */
			quat inverted() const;

			/**
			 * @brief Gets the conjugate of the quaternion.
			 *
			 * @return The conjugated quaternion.
			 */
			quat conjugated() const;

			/**
			 * @brief Creates a quaternion at identity.
			 */
			quat();

			/**
			 * @brief Creates a quaternion with the specified components.
			 *
			 * @param x The x component.
			 * @param y The y component.
			 * @param z The z component.
			 * @param w The w component.
			 */
			quat(float x, float y, float z, float w);

			/**
			 * @brief Creates a quaternion from euler angles.
			 *
			 * @param eulerAngles The euler angles as a vec3.
			 */
			quat(vec3 eulerAngles);

			/**
			 * @brief Gets the absolute value of the quaternion.
			 *
			 * @param value The input quaternion.
			 * @return The absolute value quaternion.
			 */
			static quat abs(quat value);

			/**
			 * @brief Checks if two quaternions are approximately equal.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @return True if approximately equal, false otherwise.
			 */
			static bool approximately(quat value1, quat value2);

			/**
			 * @brief Performs barycentric interpolation among three quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param value3 The third quaternion.
			 * @param amount1 The weight factor for the first quaternion.
			 * @param amount2 The weight factor for the second quaternion.
			 * @return The interpolated quaternion.
			 */
			static quat barycentric(quat value1, quat value2, quat value3, float amount1, float amount2);

			/**
			 * @brief Performs Catmull-Rom interpolation among four quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param value3 The third quaternion.
			 * @param value4 The fourth quaternion.
			 * @param amount The interpolation parameter.
			 * @return The interpolated quaternion.
			 */
			static quat catmullRom(quat value1, quat value2, quat value3, quat value4, float amount);

			/**
			 * @brief Returns the conjugate of the specified quaternion.
			 *
			 * @param value The input quaternion.
			 * @return The conjugate quaternion.
			 */
			static quat conjugate(quat value);

			/**
			 * @brief Inverts the current quaternion in-place.
			 */
			void conjugate();

			/**
			 * @brief Calculates the dot product of two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @return The dot product of the two quaternions.
			 */
			static float dot(quat value1, quat value2);

			/**
			 * @brief Performs Hermite spline interpolation between two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param tangent1 The tangent for the first quaternion.
			 * @param value2 The second quaternion.
			 * @param tangent2 The tangent for the second quaternion.
			 * @param amount The interpolation parameter.
			 * @return The interpolated quaternion.
			 */
			static quat hermite(quat value1, quat tangent1, quat value2, quat tangent2, float amount);

			/**
			 * @brief Returns the inverted quaternion.
			 *
			 * @param value The input quaternion.
			 * @return The inverted quaternion.
			 */
			static quat invert(quat value);

			/**
			 * @brief Inverts the current quaternion in-place.
			 */
			void invert();

			/**
			 * @brief Performs linear interpolation between two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param amount The interpolation parameter.
			 * @return The interpolated quaternion.
			 */
			static quat lerp(quat value1, quat value2, float amount);

			/**
			 * @brief Performs linear interpolation between two quaternions without clamping the interpolation parameter.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param amount The interpolation parameter.
			 * @return The unclamped interpolated quaternion.
			 */
			static quat lerpUnclamped(quat value1, quat value2, float amount);

			/**
			 * @brief Performs smooth linear interpolation between two quaternions with specified quality.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothed interpolated quaternion.
			 */
			static quat lerpSmooth(quat value1, quat value2, float amount, Quality quality);

			/**
			 * @brief Performs smooth step linear interpolation between two quaternions with specified quality and step edges.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param edge0 The lower edge of the step.
			 * @param edge1 The upper edge of the step.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothed step interpolated quaternion.
			 */
			static quat lerpSmoothStep(quat value1, quat value2, float edge0, float edge1, float amount, Quality quality);

			/**
			 * @brief Performs spherical linear interpolation between two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param amount The interpolation parameter.
			 * @return The spherical interpolated quaternion.
			 */
			static quat slerp(quat value1, quat value2, float amount);

			/**
			 * @brief Performs smooth spherical linear interpolation between two quaternions with specified quality.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothed spherical interpolated quaternion.
			 */
			static quat slerpSmooth(quat value1, quat value2, float amount, Quality quality);

			/**
			 * @brief Performs smooth step spherical linear interpolation between two quaternions with specified quality and step edges.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @param edge0 The lower edge of the step.
			 * @param edge1 The upper edge of the step.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothed step spherical interpolated quaternion.
			 */
			static quat slerpSmoothStep(quat value1, quat value2, float edge0, float edge1, float amount, Quality quality);

			/**
			 * @brief Returns the component-wise maximum quaternion of two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @return The maximum quaternion.
			 */
			static quat max(quat value1, quat value2);

			/**
			 * @brief Returns the component-wise minimum quaternion of two quaternions.
			 *
			 * @param value1 The first quaternion.
			 * @param value2 The second quaternion.
			 * @return The minimum quaternion.
			 */
			static quat min(quat value1, quat value2);

			/**
			 * @brief Returns the normalized quaternion.
			 *
			 * @param value The input quaternion.
			 * @return The normalized quaternion.
			 */
			static quat normalize(quat value);

			/**
			 * @brief Normalizes the current quaternion in-place.
			 */
			void normalize();

			/**
			 * @brief Performs smooth step interpolation between two quaternions with specified quality.
			 *
			 * @param edge0 The lower edge of the step.
			 * @param edge1 The upper edge of the step.
			 * @param value The input quaternion.
			 * @param quality The quality of the interpolation.
			 * @return The smooth stepped interpolated quaternion.
			 */
			static quat smoothstep(quat edge0, quat edge1, quat value, Quality quality);

			/**
			 * @brief Returns the inverted quaternion.
			 *
			 * @return The inverted quaternion.
			 */
			quat operator!() const;

			/**
			 * @brief Returns the conjugated quaternion.
			 *
			 * @return The conjugated quaternion.
			 */
			quat operator~() const;

			/**
			 * @brief Returns the negation of the quaternion.
			 *
			 * @return The negated quaternion.
			 */
			quat operator-() const;

			/**
			 * @brief Subtracts another quaternion from the current quaternion.
			 *
			 * @param other The quaternion to subtract.
			 * @return The result of the subtraction.
			 */
			quat operator-(quat other) const;

			/**
			 * @brief Subtracts another quaternion from the current quaternion in-place.
			 *
			 * @param other The quaternion to subtract.
			 * @return Reference to the modified quaternion.
			 */
			quat& operator-=(quat other);

			/**
			 * @brief Returns the current quaternion.
			 *
			 * @return The current quaternion.
			 */
			quat operator+() const;

			/**
			 * @brief Adds another quaternion to the current quaternion.
			 *
			 * @param other The quaternion to add.
			 * @return The result of the addition.
			 */
			quat operator+(quat other) const;

			/**
			 * @brief Adds another quaternion to the current quaternion in-place.
			 *
			 * @param other The quaternion to add.
			 * @return Reference to the modified quaternion.
			 */
			quat& operator+=(quat other);

			/**
			 * @brief Multiplies the current quaternion by another quaternion.
			 *
			 * @param other The quaternion to multiply by.
			 * @return The result of the multiplication.
			 */
			quat operator*(quat other) const;

			/**
			 * @brief Multiplies the current quaternion by another quaternion in-place.
			 *
			 * @param other The quaternion to multiply by.
			 * @return Reference to the modified quaternion.
			 */
			quat& operator*=(quat other);

			/**
			 * @brief Divides the current quaternion by another quaternion.
			 *
			 * @param other The quaternion to divide by.
			 * @return The result of the division.
			 */
			quat operator/(quat other) const;

			/**
			 * @brief Divides the current quaternion by another quaternion in-place.
			 *
			 * @param other The quaternion to divide by.
			 * @return Reference to the modified quaternion.
			 */
			quat& operator/=(quat other);

			/**
			 * @brief Checks if two quaternions are equal.
			 *
			 * @param other The quaternion to compare with.
			 * @return True if equal, false otherwise.
			 */
			bool operator==(quat other) const;

			/**
			 * @brief Checks if two quaternions are not equal.
			 *
			 * @param other The quaternion to compare with.
			 * @return True if not equal, false otherwise.
			 */
			bool operator!=(quat other) const;

			/**
			 * Converts the quaternion to euler angles.
			 *
			 * @return The euler angles as a vec3.
			 */
			operator vec3() const;
		};
	}
}