/**
 * @file angle.h
 * @brief Defines the angle struct, representing a unitless angle.
 * @author Raistlin Wolfe
 */
#pragma once

#include "LerpDirection.h"

namespace Aurora
{
	namespace Mathematics
	{
		struct vec2;
		enum class Quality;

		/**
		 * @brief Represents a unitless angle.
		 */
		struct angle
		{
			/**
			 * @brief Gets the angle in radians.
			 * @return The angle in radians.
			 */
			float radians() const;

			/**
			 * @brief Sets the angle in radians.
			 * @param value The value to set the angle to.
			 */
			void radians(float value);

			/**
			 * @brief Gets the angle in degrees.
			 * @return The angle in degrees.
			 */
			float degrees() const;

			/**
			 * @brief Sets the angle in degrees.
			 * @param value The value to set the angle to.
			 */
			void degrees(float value);

			/**
			 * @brief Returns an angle with zero radians.
			 * @return An angle with zero radians.
			 */
			static angle zero();

			/**
			 * @brief Returns an angle representing a quarter rotation.
			 * @return An angle representing a quarter rotation.
			 */
			static angle quarter();

			/**
			 * @brief Returns an angle representing a half rotation.
			 * @return An angle representing a half rotation.
			 */
			static angle half();

			/**
			 * @brief Returns an angle representing three-quarters of a rotation.
			 * @return An angle representing three-quarters of a rotation.
			 */
			static angle threeQuarter();

			/**
			 * @brief Returns an angle representing a full rotation.
			 * @return An angle representing a full rotation.
			 */
			static angle full();

			/**
			 * @brief Default constructor for angle. Initializes the angle to 0.
			 */
			angle();

			/**
			 * @brief Creates an angle from the specified value in degrees.
			 * @param value The value in degrees.
			 * @return An angle representing the specified value in degrees.
			 */
			static angle fromDegrees(float value);

			/**
			 * @brief Creates an angle from the specified value in radians.
			 * @param value The value in radians.
			 * @return An angle representing the specified value in radians.
			 */
			static angle fromRadians(float value);

			/**
			 * @brief Returns the absolute value of the given angle.
			 * @param value The angle to calculate the absolute value for.
			 * @return The absolute value of the angle.
			 */
			static angle abs(angle value);

			/**
			 * @brief Calculates the arccosine of the specified value.
			 * @param value The value to calculate the arccosine for.
			 * @return The arccosine of the value, represented as an angle.
			 */
			static angle acos(float value);

			/**
			 * @brief Calculates the inverse hyperbolic cosine of the specified value.
			 * @param value The value to calculate the inverse hyperbolic cosine for.
			 * @return The inverse hyperbolic cosine of the value, represented as an angle.
			 */
			static angle acosh(float value);

			/**
			 * @brief Checks if two angles are approximately equal within a small tolerance.
			 * @param value1 The first angle for comparison.
			 * @param value2 The second angle for comparison.
			 * @return True if the angles are approximately equal, false otherwise.
			 */
			static bool approximately(angle value1, angle value2);

			/**
			 * @brief Calculates the arcsine of the specified value.
			 * @param value The value to calculate the arcsine for.
			 * @return The arcsine of the value, represented as an angle.
			 */
			static angle asin(float value);

			/**
			 * @brief Calculates the inverse hyperbolic sine of the specified value.
			 * @param value The value to calculate the inverse hyperbolic sine for.
			 * @return The inverse hyperbolic sine of the value, represented as an angle.
			 */
			static angle asinh(float value);

			/**
			 * @brief Calculates the arctangent of the specified value.
			 * @param value The value to calculate the arctangent for.
			 * @return The arctangent of the value, represented as an angle.
			 */
			static angle atan(float value);

			/**
			 * @brief Calculates the arctangent of the ratio of two specified values.
			 * @param y The numerator of the ratio.
			 * @param x The denominator of the ratio.
			 * @return The arctangent of the ratio, represented as an angle.
			 */
			static angle atan(float y, float x);

			/**
			 * @brief Calculates the arctangent of a specified 2D vector.
			 * @param value The 2D vector to calculate the arctangent for.
			 * @return The arctangent of the vector, represented as an angle.
			 */
			static angle atan(vec2 value);

			/**
			 * @brief Calculates the inverse hyperbolic tangent of the specified value.
			 * @param value The value to calculate the inverse hyperbolic tangent for.
			 * @return The inverse hyperbolic tangent of the value, represented as an angle.
			 */
			static angle atanh(float value);

			/**
			 * @brief Calculates the cosine of the specified angle.
			 * @param value The angle to calculate the cosine for.
			 * @return The cosine of the angle.
			 */
			static float cos(angle value);

			/**
			 * @brief Calculates the hyperbolic cosine of the specified angle.
			 * @param value The angle to calculate the hyperbolic cosine for.
			 * @return The hyperbolic cosine of the angle.
			 */
			static float cosh(angle value);

			/**
			 * @brief Calculates the distance between two angles.
			 * @param value1 The first angle.
			 * @param value2 The second angle.
			 * @return The distance between the two angles, represented as an angle.
			 */
			static angle distance(angle value1, angle value2);

			/**
			 * @brief Calculates the inverse linear interpolation parameter for an angle.
			 * @param value1 The starting angle.
			 * @param value2 The ending angle.
			 * @param value The angle to find the inverse lerp parameter for.
			 * @return The inverse lerp parameter for the specified angle.
			 */
			static float inverseLerp(angle value1, angle value2, angle value);


			/**
			 * @brief Linearly interpolates between two angles.
			 * @param value1 The starting angle.
			 * @param value2 The ending angle.
			 * @param amount The interpolation parameter.
			 * @param direction The direction of interpolation.
			 * @return The interpolated angle.
			 */
			static angle lerp(angle value1, angle value2, float amount, LerpDirection direction);

			/**
			 * @brief Linearly interpolates between two angles without clamping the interpolation parameter.
			 * @param value1 The starting angle.
			 * @param value2 The ending angle.
			 * @param amount The interpolation parameter.
			 * @param direction The direction of interpolation.
			 * @return The unclamped interpolated angle.
			 */
			static angle lerpUnclamped(angle value1, angle value2, float amount, LerpDirection direction = LerpDirection::Direct);

			/**
			 * @brief Smoothly interpolates between two angles with a specified quality.
			 * @param value1 The starting angle.
			 * @param value2 The ending angle.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @param direction The direction of interpolation.
			 * @return The smoothly interpolated angle.
			 */
			static angle lerpSmooth(angle value1, angle value2, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

			/**
			 * @brief Performs smoothstep interpolation between two angles with specified edges.
			 * @param value1 The starting angle.
			 * @param value2 The ending angle.
			 * @param edge0 The lower edge.
			 * @param edge1 The upper edge.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @param direction The direction of interpolation.
			 * @return The smoothly interpolated angle using smoothstep function.
			 */
			static angle lerpSmoothStep(angle value1, angle value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

			/**
			 * @brief Returns the maximum of two angles.
			 * @param value1 The first angle.
			 * @param value2 The second angle.
			 * @return The greater of the two angles.
			 */
			static angle max(angle value1, angle value2);

			/**
			 * @brief Returns the minimum of two angles.
			 * @param value1 The first angle.
			 * @param value2 The second angle.
			 * @return The smaller of the two angles.
			 */
			static angle min(angle value1, angle value2);

			/**
			 * @brief Gets the sign of the specified angle.
			 * @param value The angle to determine the sign for.
			 * @return -1 if the angle is negative, 0 if it is zero, and 1 if it is positive.
			 */
			static int sign(angle value);

			/**
			 * @brief Calculates the sine of the specified angle.
			 * @param value The angle to calculate the sine for.
			 * @return The sine of the angle.
			 */
			static float sin(angle value);

			/**
			 * @brief Calculates the hyperbolic sine of the specified angle.
			 * @param value The angle to calculate the hyperbolic sine for.
			 * @return The hyperbolic sine of the angle.
			 */
			static float sinh(angle value);

			/**
			 * @brief Performs smoothstep interpolation between two angles.
			 * @param edge0 The lower edge.
			 * @param edge1 The upper edge.
			 * @param value The angle to interpolate.
			 * @param quality The quality of the interpolation.
			 * @return The smoothly interpolated angle using smoothstep function.
			 */
			static angle smoothstep(angle edge0, angle edge1, angle value, Quality quality);

			/**
			 * @brief Calculates the tangent of the specified angle.
			 * @param value The angle to calculate the tangent for.
			 * @return The tangent of the angle.
			 */
			static float tan(angle value);

			/**
			 * @brief Calculates the hyperbolic tangent of the specified angle.
			 * @param value The angle to calculate the hyperbolic tangent for.
			 * @return The hyperbolic tangent of the angle.
			 */
			static float tanh(angle value);

			/**
			 * @brief Wraps the specified angle to the range [-π, π] while preserving the sign.
			 * @param value The angle to wrap.
			 * @return The wrapped angle with the same sign as the original.
			 */
			static angle wrapSigned(angle value);

			/**
			 * @brief Wraps the specified angle to the range [0, 2π].
			 * @param value The angle to wrap.
			 * @return The wrapped angle in the unsigned range.
			 */
			static angle wrapUnsigned(angle value);

			/**
			 * @brief Calculates the inversion of the angle by subtracting it from 2π.
			 * @return The inverted angle.
			 */
			angle operator !() const;

			/**
			 * @brief Calculates the complement of the angle by subtracting it from π.
			 * @return The complemented angle.
			 */
			angle operator ~() const;

			/**
			 * @brief Unary negation operator.
			 * @return The negated angle.
			 */
			angle operator -() const;

			/**
			 * @brief Subtraction operator.
			 * @param other The angle to subtract.
			 * @return The result of the subtraction.
			 */
			angle operator -(angle other) const;

			/**
			 * @brief Compound subtraction operator.
			 * @param other The angle to subtract.
			 * @return A reference to the modified angle.
			 */
			angle& operator -=(angle other);

			/**
			 * @brief Unary plus operator.
			 * @return The angle itself.
			 */
			angle operator +() const;

			/**
			 * @brief Addition operator.
			 * @param other The angle to add.
			 * @return The result of the addition.
			 */
			angle operator +(angle other) const;

			/**
			 * @brief Compound addition operator.
			 * @param other The angle to add.
			 * @return A reference to the modified angle.
			 */
			angle& operator +=(angle other);

			/**
			 * @brief Multiplies the angle by a scalar.
			 * @param other The scalar to multiply by.
			 * @return The result of the multiplication.
			 */
			angle operator *(float other) const;

			/**
			 * @brief Compound multiplication operator by a scalar.
			 * @param other The scalar to multiply by.
			 * @return A reference to the modified angle.
			 */
			angle& operator *=(float other);

			/**
			 * @brief Friend function to enable multiplication of an angle by a scalar from the left.
			 * @param lhs The scalar on the left side of the multiplication.
			 * @param rhs The angle on the right side of the multiplication.
			 * @return The result of the multiplication.
			 */
			friend angle operator *(float lhs, angle rhs);

			/**
			 * @brief Divides the angle by a scalar.
			 * @param other The scalar to divide by.
			 * @return The result of the division.
			 */
			angle operator /(float other) const;

			/**
			 * @brief Compound division operator by a scalar.
			 * @param other The scalar to divide by.
			 * @return A reference to the modified angle.
			 */
			angle& operator /=(float other);

			/**
			 * @brief Friend function to enable division of an angle by a scalar from the left.
			 * @param lhs The scalar on the left side of the division.
			 * @param rhs The angle on the right side of the division.
			 * @return The result of the division.
			 */
			friend angle operator /(float lhs, angle rhs);

			/**
			 * @brief Calculates the modulus of the angle by another angle.
			 * @param other The angle to use as the modulus.
			 * @return The result of the modulus operation.
			 */
			angle operator %(angle other) const;

			/**
			 * @brief Compound modulus operator by another angle.
			 * @param other The angle to use as the modulus.
			 * @return A reference to the modified angle.
			 */
			angle& operator %=(angle other);

			/**
			 * @brief Equality comparison operator.
			 * @param other The angle to compare.
			 * @return True if angles are equal, false otherwise.
			 */
			bool operator ==(angle other) const;

			/**
			 * @brief Inequality comparison operator.
			 * @param other The angle to compare.
			 * @return True if angles are not equal, false otherwise.
			 */
			bool operator !=(angle other) const;

			/**
			 * @brief Less than comparison operator.
			 * @param other The angle to compare.
			 * @return True if the current angle is less than the other, false otherwise.
			 */
			bool operator <(angle other) const;

			/**
			 * @brief Less than or equal to comparison operator.
			 * @param other The angle to compare.
			 * @return True if the current angle is less than or equal to the other, false otherwise.
			 */
			bool operator <=(angle other) const;

			/**
			 * @brief Greater than comparison operator.
			 * @param other The angle to compare.
			 * @return True if the current angle is greater than the other, false otherwise.
			 */
			bool operator >(angle other) const;

			/**
			 * @brief Greater than or equal to comparison operator.
			 * @param other The angle to compare.
			 * @return True if the current angle is greater than or equal to the other, false otherwise.
			 */
			bool operator >=(angle other) const;

		private:
			explicit angle(float radians);
			float radians_;
		};


		/**
		 * @brief Literal operator for degrees.
		 * @param value The value in degrees.
		 * @return The angle in degrees.
		 */
		angle operator "" deg(long double value);

		/**
		 * @brief Literal operator for degrees.
		 * @param value The value in degrees.
		 * @return The angle in degrees.
		 */
		angle operator "" deg(unsigned long long value);

		/**
		 * @brief Literal operator for radians.
		 * @param value The value in radians.
		 * @return The angle in radians.
		 */
		angle operator "" rad(long double value);

		/**
		 * @brief Literal operator for radians.
		 * @param value The value in radians.
		 * @return The angle in radians.
		 */
		angle operator "" rad(unsigned long long value);
	}
}