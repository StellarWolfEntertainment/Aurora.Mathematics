/**
 * @file math.h
 * @brief Contains various mathematical constants and functions.
 * @author Raistlin Wolfe
 */
#pragma once

#include "LerpDirection.h"

namespace Aurora
{
	namespace Mathematics
	{
		struct vec2;
		struct col;
		enum class Quality;

		/**
		 * @brief The mathematical constant e (Euler's number).
		 */
		constexpr float e = 2.718281828459045f;

		/**
		 * @brief The mathematical constant pi (π).
		 */
		constexpr float pi = 3.141592653589793f;

		/**
		 * @brief The mathematical constant tau (τ), which is 2π.
		 */
		constexpr float tau = 6.283185307179586f;

		/**
		 * @brief The mathematical constant phi (φ), the golden ratio.
		 */
		constexpr float phi = 1.618033988749895f;

		/**
		 * @brief Gets the current precision value.
		 * @return The current precision value.
		 * @note The precision value is used to calculate the epsilon value for approximate comparisons.
		 */
		int precision();

		/**
		 * @brief Sets the precision value for approximate comparisons.
		 * @param value The precision value.
		 * @note If the value is less than 0, precision is disabled, and epsilon is set to 0.
		 */
		void precision(int value);

		/**
		 * @brief Gets the current epsilon value.
		 * @return The current epsilon value.
		 * @note Epsilon is used for approximate comparisons with a precision value.
		 */
		float epsilon();

		/**
		 * @brief Calculates the absolute value of an integer.
		 * @param value The integer value.
		 * @return The absolute value of the integer.
		 */
		int abs(int value);

		/**
		 * @brief Calculates the absolute value of a floating-point number.
		 * @param value The floating-point value.
		 * @return The absolute value of the floating-point number.
		 */
		float abs(float value);

		/**
		 * @brief Calculates the arccosine of the specified value.
		 * @param value The value to calculate the arccosine for.
		 * @return The arccosine of the value in degrees.
		 */
		float acos(float value);

		/**
		 * @brief Calculates the inverse hyperbolic cosine of the specified value.
		 * @param value The value to calculate the inverse hyperbolic cosine for.
		 * @return The inverse hyperbolic cosine of the value in degrees.
		 */
		float acosh(float value);

		/**
		 * @brief Checks if two floating-point values are approximately equal within a small tolerance.
		 * @param value1 The first value for comparison.
		 * @param value2 The second value for comparison.
		 * @return True if the values are approximately equal, false otherwise.
		 */
		bool approximately(float value1, float value2);

		/**
		 * @brief Calculates the arcsine of the specified value.
		 * @param value The value to calculate the arcsine for.
		 * @return The arcsine of the value in degrees.
		 */
		float asin(float value);

		/**
		 * @brief Calculates the inverse hyperbolic sine of the specified value.
		 * @param value The value to calculate the inverse hyperbolic sine for.
		 * @return The inverse hyperbolic sine of the value in degrees.
		 */
		float asinh(float value);

		/**
		 * @brief Calculates the arctangent of the specified value.
		 * @param value The value to calculate the arctangent for.
		 * @return The arctangent of the value in degrees.
		 */
		float atan(float value);

		/**
		 * @brief Calculates the arctangent of the ratio of two specified values.
		 * @param y The numerator of the ratio.
		 * @param x The denominator of the ratio.
		 * @return The arctangent of the ratio in degrees.
		 */
		float atan(float y, float x);

		/**
		 * @brief Calculates the arctangent of a specified 2D vector.
		 * @param vector The 2D vector to calculate the arctangent for.
		 * @return The arctangent of the vector in degrees.
		 */
		float atan(vec2 vector);

		/**
		 * @brief Calculates the inverse hyperbolic tangent of the specified value.
		 * @param value The value to calculate the inverse hyperbolic tangent for.
		 * @return The inverse hyperbolic tangent of the value in degrees.
		 */
		float atanh(float value);

		/**
		 * @brief Calculates the barycentric interpolation of three values.
		 * @param value1 The first value.
		 * @param value2 The second value.
		 * @param value3 The third value.
		 * @param amount1 The barycentric coordinate for value1.
		 * @param amount2 The barycentric coordinate for value2.
		 * @return The result of the barycentric interpolation.
		 */
		float barycentric(float value1, float value2, float value3, float amount1, float amount2);

		/**
		 * @brief Calculates the color of a black body radiator at the given temperature in kelvin.
		 * @param temperature The temperature of the black body radiator in kelvin.
		 * @return The color of the black body radiator.
		 */
		col blackbody(float temperature);

		/**
		 * @brief Calculates the Catmull-Rom interpolation of four values.
		 * @param value1 The first value.
		 * @param value2 The second value.
		 * @param value3 The third value.
		 * @param value4 The fourth value.
		 * @param amount The interpolation parameter.
		 * @return The result of the Catmull-Rom interpolation.
		 */
		float catmullRom(float value1, float value2, float value3, float value4, float amount);

		/**
		 * @brief Calculates the cube root of the specified value.
		 * @param value The value to calculate the cube root for.
		 * @return The cube root of the value.
		 */
		float cbrt(float value);

		/**
		 * @brief Rounds the specified value to the nearest integer greater than or equal to it.
		 * @param value The value to round up.
		 * @return The rounded-up value.
		 */
		float ceil(float value);

		/**
		 * @brief Converts the specified floating-point value to the nearest integer greater than or equal to it.
		 * @param value The value to convert.
		 * @return The converted integer value.
		 */
		int ceilToInt(float value);

		/**
		 * @brief Clamps an integer value to a specified range.
		 * @param value The value to clamp.
		 * @param minValue The minimum allowed value.
		 * @param maxValue The maximum allowed value.
		 * @return The clamped value.
		 */
		int clamp(int value, int minValue, int maxValue);

		/**
		 * @brief Clamps an unsigned integer value to a specified range.
		 * @param value The value to clamp.
		 * @param minValue The minimum allowed value.
		 * @param maxValue The maximum allowed value.
		 * @return The clamped value.
		 */
		unsigned int clamp(unsigned int value, unsigned int minValue, unsigned int maxValue);

		/**
		 * @brief Clamps a floating-point value to a specified range.
		 * @param value The value to clamp.
		 * @param minValue The minimum allowed value.
		 * @param maxValue The maximum allowed value.
		 * @return The clamped value.
		 */
		float clamp(float value, float minValue, float maxValue);

		/**
		 * @brief Clamps a floating-point value to the range [0, 1].
		 * @param value The value to clamp.
		 * @return The clamped value.
		 */
		float clamp01(float value);

		/**
		 * @brief Finds the nearest power of two to the specified integer value.
		 * @param value The input value.
		 * @return The nearest power of two.
		 */
		int closestPowerOfTwo(int value);

		/**
		 * @brief Finds the nearest power of two to the specified unsigned integer value.
		 * @param value The input value.
		 * @return The nearest power of two.
		 */
		unsigned int closestPowerOfTwo(unsigned int value);

		/**
		 * @brief Calculates the cosine of a given angle in degrees.
		 * @param value The angle in radians.
		 * @return The cosine of the angle.
		 */
		float cos(float value);

		/**
		 * @brief Calculates the hyperbolic cosine of a given angle in degrees.
		 * @param value The angle in degrees.
		 * @return The hyperbolic cosine of the angle.
		 */
		float cosh(float value);

		/**
		 * @brief Calculates the signed angular difference between two given angles in degrees
		 * @param value1 The first angle.
		 * @param value2 The second angle.
		 * @return The signed difference in angle between value1 and value2.
		 */
		float deltaAngle(float value1, float value2);

		/**
		 * @brief Calculates the absolute difference between two integers.
		 * @param value1 The first integer.
		 * @param value2 The second integer.
		 * @return The absolute difference between value1 and value2.
		 */
		int distance(int value1, int value2);

		/**
		 * @brief Calculates the absolute difference between two unsigned integers.
		 * @param value1 The first unsigned integer.
		 * @param value2 The second unsigned integer.
		 * @return The absolute difference between value1 and value2.
		 */
		unsigned int distance(unsigned int value1, unsigned int value2);

		/**
		 * @brief Calculates the absolute difference between two floating-point values.
		 * @param value1 The first floating-point value.
		 * @param value2 The second floating-point value.
		 * @return The absolute difference between value1 and value2.
		 */
		float distance(float value1, float value2);

		/**
		 * @brief Calculates the exponential function (e^x) for the specified value.
		 * @param value The exponent.
		 * @return The result of the exponential function.
		 */
		float exp(float value);

		/**
		 * @brief Rounds the specified value to the nearest integer less than or equal to it.
		 * @param value The value to round down.
		 * @return The rounded-down value.
		 */
		float floor(float value);

		/**
		 * @brief Converts the specified floating-point value to the nearest integer less than or equal to it.
		 * @param value The value to convert.
		 * @return The converted integer value.
		 */
		int floorToInt(float value);

		/**
		 * @brief Extracts the fractional part of a floating-point number.
		 *
		 * @param value The input floating-point number.
		 * @return The fractional part of the input value.
		 */
		float frac(float value);

		/**
		 * @brief Converts the specified gamma-corrected color value to linear color.
		 * @param value The gamma-corrected color value.
		 * @return The linear color value.
		 */
		float gammaToLinear(float value);

		/**
		 * @brief Performs Hermite interpolation between two values with specified tangents.
		 * @param value1 The starting value.
		 * @param tangent1 The tangent of the starting value.
		 * @param value2 The ending value.
		 * @param tangent2 The tangent of the ending value.
		 * @param amount The interpolation parameter.
		 * @return The result of Hermite interpolation.
		 */
		float hermite(float value1, float tangent1, float value2, float tangent2, float amount);

		/**
		 * @brief Calculates the inverse lerp (inverse linear interpolation) for the specified value within the range [value1, value2].
		 * @param value1 The starting value of the range.
		 * @param value2 The ending value of the range.
		 * @param value The value to inverse lerp.
		 * @return The inverse lerp parameter.
		 */
		float inverseLerp(float value1, float value2, float value);

		/**
		 * @brief Checks if the specified integer is a power of two.
		 * @param value The integer to check.
		 * @return True if the value is a power of two, false otherwise.
		 */
		bool isPowerOfTwo(int value);

		/**
		 * @brief Checks if the specified unsigned integer is a power of two.
		 * @param value The unsigned integer to check.
		 * @return True if the value is a power of two, false otherwise.
		 */
		bool isPowerOfTwo(unsigned int value);

		/**
		 * @brief Linearly interpolates between two values.
		 * @param value1 The starting value.
		 * @param value2 The ending value.
		 * @param amount The interpolation parameter.
		 * @return The interpolated value.
		 */
		float lerp(float value1, float value2, float amount);

		/**
		 * @brief Linearly interpolates between two values without clamping the interpolation parameter.
		 * @param value1 The starting value.
		 * @param value2 The ending value.
		 * @param amount The interpolation parameter.
		 * @return The unclamped interpolated value.
		 */
		float lerpUnclamped(float value1, float value2, float amount);

		/**
		 * @brief Smoothly interpolates between two values with a specified quality.
		 * @param value1 The starting value.
		 * @param value2 The ending value.
		 * @param amount The interpolation parameter.
		 * @param quality The quality of the interpolation.
		 * @return The smoothly interpolated value.
		 */
		float lerpSmooth(float value1, float value2, float amount, Quality quality);

		/**
		 * @brief Performs smoothstep interpolation between two values with specified edges and quality.
		 * @param value1 The starting value.
		 * @param value2 The ending value.
		 * @param edge0 The lower edge.
		 * @param edge1 The upper edge.
		 * @param amount The interpolation parameter.
		 * @param quality The quality of the interpolation.
		 * @return The smoothly interpolated value using the smoothstep function.
		 */
		float lerpSmoothStep(float value1, float value2, float edge0, float edge1, float amount, Quality quality);

		/**
		 * @brief Linearly interpolates between two angles.
		 * @param value1 The starting angle.
		 * @param value2 The ending angle.
		 * @param amount The interpolation parameter.
		 * @param direction The direction of interpolation.
		 * @return The interpolated angle.
		 */
		float lerpAngle(float value1, float value2, float amount, LerpDirection direction = LerpDirection::Direct);

		/**
		 * @brief Linearly interpolates between two angles without clamping the interpolation parameter.
		 * @param value1 The starting angle.
		 * @param value2 The ending angle.
		 * @param amount The interpolation parameter.
		 * @param direction The direction of interpolation.
		 * @return The unclamped interpolated angle.
		 */
		float lerpAngleUnclamped(float value1, float value2, float amount, LerpDirection direction = LerpDirection::Direct);

		/**
		 * @brief Smoothly interpolates between two angles with a specified quality.
		 * @param value1 The starting angle.
		 * @param value2 The ending angle.
		 * @param amount The interpolation parameter.
		 * @param quality The quality of the interpolation.
		 * @param direction The direction of interpolation.
		 * @return The smoothly interpolated angle.
		 */
		float lerpAngleSmooth(float value1, float value2, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

		/**
		 * @brief Performs smoothstep interpolation between two angles with specified edges and quality.
		 * @param value1 The starting angle.
		 * @param value2 The ending angle.
		 * @param edge0 The lower edge.
		 * @param edge1 The upper edge.
		 * @param amount The interpolation parameter.
		 * @param quality The quality of the interpolation.
		 * @param direction The direction of interpolation.
		 * @return The smoothly interpolated angle using the smoothstep function.
		 */
		float lerpAngleSmoothStep(float value1, float value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

		/**
		 * @brief Converts a linear value to gamma space.
		 * @param value The linear value to convert.
		 * @return The value in gamma space.
		 */
		float linearToGamma(float value);

		/**
		 * @brief Calculates the natural logarithm (base e) of a value.
		 * @param value The value to calculate the logarithm of.
		 * @return The natural logarithm of the value.
		 */
		float log(float value);

		/**
		 * @brief Calculates the logarithm of a value with a specified base.
		 * @param value The value to calculate the logarithm of.
		 * @param base The base of the logarithm.
		 * @return The logarithm of the value with the specified base.
		 */
		float log(float value, float base);

		/**
		 * @brief Calculates the base-2 logarithm of a value.
		 * @param value The value to calculate the base-2 logarithm of.
		 * @return The base-2 logarithm of the value.
		 */
		float log2(float value);

		/**
		 * @brief Calculates the base-8 logarithm of a value.
		 * @param value The value to calculate the base-8 logarithm of.
		 * @return The base-8 logarithm of the value.
		 */
		float log8(float value);

		/**
		 * @brief Calculates the base-10 logarithm of a value.
		 * @param value The value to calculate the base-10 logarithm of.
		 * @return The base-10 logarithm of the value.
		 */
		float log10(float value);

		/**
		 * @brief Calculates the base-16 logarithm of a value.
		 * @param value The value to calculate the base-16 logarithm of.
		 * @return The base-16 logarithm of the value.
		 */
		float log16(float value);

		/**
		 * @brief Returns the maximum of two integers.
		 * @param value1 The first integer.
		 * @param value2 The second integer.
		 * @return The maximum value of the two integers.
		 */
		int max(int value1, int value2);

		/**
		 * @brief Returns the maximum of two unsigned integers.
		 * @param value1 The first unsigned integer.
		 * @param value2 The second unsigned integer.
		 * @return The maximum value of the two unsigned integers.
		 */
		unsigned int max(unsigned int value1, unsigned int value2);

		/**
		 * @brief Returns the maximum of two floating-point numbers.
		 * @param value1 The first floating-point number.
		 * @param value2 The second floating-point number.
		 * @return The maximum value of the two floating-point numbers.
		 */
		float max(float value1, float value2);

		/**
		 * @brief Returns the minimum of two integers.
		 * @param value1 The first integer.
		 * @param value2 The second integer.
		 * @return The minimum value of the two integers.
		 */
		int min(int value1, int value2);

		/**
		 * @brief Returns the minimum of two unsigned integers.
		 * @param value1 The first unsigned integer.
		 * @param value2 The second unsigned integer.
		 * @return The minimum value of the two unsigned integers.
		 */
		unsigned int min(unsigned int value1, unsigned int value2);

		/**
		 * @brief Returns the minimum of two floating-point numbers.
		 * @param value1 The first floating-point number.
		 * @param value2 The second floating-point number.
		 * @return The minimum value of the two floating-point numbers.
		 */
		float min(float value1, float value2);

		/**
		 * @brief Calculates the modulo of a value with a specified length.
		 * @param value The value to calculate the modulo of.
		 * @param length The length of the modulo operation.
		 * @return The result of the modulo operation.
		 */
		float mod(float value, float length);

		/**
		 * @brief Calculates the next power of two greater than or equal to the given integer value.
		 * @param value The input value.
		 * @return The next power of two greater than or equal to the input value.
		 */
		int nextPowerOfTwo(int value);

		/**
		 * @brief Calculates the next power of two greater than or equal to the given unsigned integer value.
		 * @param value The input value.
		 * @return The next power of two greater than or equal to the input value.
		 */
		unsigned int nextPowerOfTwo(unsigned int value);

		/**
		 * @brief Calculates the ping-pong effect of a value within the specified length.
		 * @param value The input value.
		 * @param length The length of the ping-pong effect.
		 * @return The result of the ping-pong effect.
		 */
		float pingPong(float value, float length);

		/**
		 * @brief Calculates the power of a value raised to the specified exponent.
		 * @param value The base value.
		 * @param exponent The exponent.
		 * @return The result of the power operation.
		 */
		float pow(float value, float exponent);

		/**
		 * @brief Calculates the previous power of two less than or equal to the given integer value.
		 * @param value The input value.
		 * @return The previous power of two less than or equal to the input value.
		 */
		int previousPowerOfTwo(int value);

		/**
		 * @brief Calculates the previous power of two less than or equal to the given unsigned integer value.
		 * @param value The input value.
		 * @return The previous power of two less than or equal to the input value.
		 */
		unsigned int previousPowerOfTwo(unsigned int value);

		/**
		 * @brief Calculates the remainder of the division of two floating-point numbers.
		 * @param x The dividend.
		 * @param y The divisor.
		 * @return The remainder of the division.
		 */
		float remainder(float x, float y);

		/**
		 * @brief Calculates the root of a value with a specified base.
		 * @param value The value to calculate the root of.
		 * @param base The base of the root operation.
		 * @return The result of the root operation.
		 */
		float root(float value, float base);

		/**
		 * @brief Rounds a floating-point number to the nearest integer.
		 * @param value The floating-point number to round.
		 * @return The rounded integer value.
		 */
		float round(float value);

		/**
		 * @brief Rounds a floating-point number to the nearest integer.
		 * @param value The floating-point number to round.
		 * @return The rounded integer value.
		 */
		int roundToInt(float value);

		/**
		 * @brief Scales a value from one range to another.
		 * @param value the floating-point number to scale.
		 * @param oldMin the expected current minimum value.
		 * @param oldMax the expected current maximum value.
		 * @param newMin the desired minimum value.
		 * @param newMax the desired maximum value.
		 */
		float scale(float value, float oldMin, float oldMax, float newMin, float newMax);

		/**
		 * @brief Scales a value from one range to another.
		 * @param value the floating-point number to scale.
		 * @param oldRange the expected current range.
		 * @param newRange the desired range.
		 */
		float scale(float value, vec2 oldRange, vec2 newRange);

		/**
		 * @brief Returns the sign of an integer value.
		 * @param value The input integer value.
		 * @return 1 if the value is positive, -1 if it is negative, and 0 if it is zero.
		 */
		int sign(int value);

		/**
		 * @brief Returns the sign of a floating-point value.
		 * @param value The input floating-point value.
		 * @return 1.0f if the value is positive, -1.0f if it is negative, and 0.0f if it is zero.
		 */
		int sign(float value);

		/**
		 * @brief Calculates the sine of a given angle in degrees.
		 * @param value The angle in degrees.
		 * @return The sine of the angle.
		 */
		float sin(float value);

		/**
		 * @brief Calculates the hyperbolic sine of a given angle in degrees.
		 * @param value The angle in degrees.
		 * @return The hyperbolic sine of the angle.
		 */
		float sinh(float value);

		/**
		 * @brief Performs smoothstep interpolation between two values with a specified quality.
		 * @param edge0 The lower edge.
		 * @param edge1 The upper edge.
		 * @param value The interpolation parameter.
		 * @param quality The quality of the interpolation.
		 * @return The smoothly interpolated value using the smoothstep function.
		 */
		float smoothstep(float edge0, float edge1, float value, Quality quality);

		/**
		 * @brief Calculates the square root of a given value.
		 * @param value The input value.
		 * @return The square root of the input value.
		 */
		float sqrt(float value);

		/**
		 * @brief Calculates the tangent of a given angle in degrees.
		 * @param value The angle in degrees.
		 * @return The tangent of the angle.
		 */
		float tan(float value);

		/**
		 * @brief Calculates the hyperbolic tangent of a given angle in degrees.
		 * @param value The angle in degrees.
		 * @return The hyperbolic tangent of the angle.
		 */
		float tanh(float value);

		/**
		 * @brief Converts an angle from degrees to radians.
		 * @param value The angle in degrees.
		 * @return The angle converted to radians.
		 */
		float toDegrees(float value);

		/**
		 * @brief Converts an angle from radians to degrees.
		 * @param value The angle in radians.
		 * @return The angle converted to degrees.
		 */
		float toRadians(float value);

		/**
		 * @brief Truncates the decimal part of a floating-point number, leaving only the integer part.
		 *
		 * @param value The floating-point number to truncate.
		 * @return The truncated value.
		 */
		float trunc(float value);

		/**
		 * @brief Truncates a floating-point value to the nearest integer towards zero.
		 * @param value The input value.
		 * @return The truncated integer value.
		 */
		int truncToInt(float value);

		/**
		 * @brief Wraps an angle to the range of [-180, 180] maintaining the sign.
		 * @param value The input angle in radians.
		 * @return The wrapped angle in the specified range.
		 */
		float wrapAngleSigned(float value);

		/**
		 * @brief Wraps an angle to the range of [0, 360).
		 * @param value The input angle in radians.
		 * @return The wrapped angle in the specified range.
		 */
		float wrapAngleUnsigned(float value);
	}
}