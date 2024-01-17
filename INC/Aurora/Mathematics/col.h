/**
 * @file col.h
 * @brief Defines the col struct representing an RGBA color.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		enum class Quality;
		struct vec4;
		struct col32;
		struct hsv;

		/**
		 * @brief Represents a color with red, green, blue, and alpha components.
		 */
		struct col
		{
			/**
			 * @brief Red component of the color.
			 */
			float r;

			/**
			 * @brief Green component of the color.
			 */
			float g;

			/**
			 * @brief Blue component of the color.
			 */
			float b;

			/**
			 * @brief Alpha component of the color.
			 */
			float a;

			/**
			 * @brief Gets the minimum color component among red, green, and blue.
			 * @return The minimum color component.
			 */
			float minColorComponent() const;

			/**
			 * @brief Gets the maximum color component among red, green, and blue.
			 * @return The maximum color component.
			 */
			float maxColorComponent() const;

			/**
			 * @brief Returns a normalized version of the color.
			 * @return The normalized color.
			 */
			col normalized() const;

			/**
			 * @brief Default constructor, initializes all color components to zero, and the alpha component to 1.
			 */
			col();

			/**
			 * @brief Constructor with specified color components.
			 * @param r Red component.
			 * @param g Green component.
			 * @param b Blue component.
			 * @param a Alpha component (default is 1.0).
			 */
			col(float r, float g, float b, float a = 1.0);

			/**
			 * @brief Checks if two colors are approximately equal within a small tolerance.
			 * @param value1 The first color for comparison.
			 * @param value2 The second color for comparison.
			 * @return True if colors are approximately equal, false otherwise.
			 */
			static bool approximately(col value1, col value2);

			/**
			 * @brief Linearly interpolates between two colors.
			 * @param value1 The starting color.
			 * @param value2 The ending color.
			 * @param amount The interpolation parameter.
			 * @return The interpolated color.
			 */
			static col lerp(col value1, col value2, float amount);

			/**
			 * @brief Linearly interpolates between two colors without clamping the interpolation parameter.
			 * @param value1 The starting color.
			 * @param value2 The ending color.
			 * @param amount The interpolation parameter.
			 * @return The unclamped interpolated color.
			 */
			static col lerpUnclamped(col value1, col value2, float amount);

			/**
			 * @brief Smoothly interpolates between two colors with a specified quality.
			 * @param value1 The starting color.
			 * @param value2 The ending color.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothly interpolated color.
			 */
			static col lerpSmooth(col value1, col value2, float amount, Quality quality);

			/**
			 * @brief Performs smoothstep interpolation between two colors with specified edges.
			 * @param value1 The starting color.
			 * @param value2 The ending color.
			 * @param edge0 The lower edge.
			 * @param edge1 The upper edge.
			 * @param amount The interpolation parameter.
			 * @param quality The quality of the interpolation.
			 * @return The smoothly interpolated color using smoothstep function.
			 */
			static col lerpSmoothStep(col value1, col value2, float edge0, float edge1, float amount, Quality quality);

			/**
			 * @brief Returns the maximum of two colors component-wise.
			 * @param value1 The first color.
			 * @param value2 The second color.
			 * @return The color with the greater component values.
			 */
			static col max(col value1, col value2);

			/**
			 * @brief Returns the minimum of two colors component-wise.
			 * @param value1 The first color.
			 * @param value2 The second color.
			 * @return The color with the smaller component values.
			 */
			static col min(col value1, col value2);

			/**
			 * @brief Normalizes the input color.
			 * @param value The input color.
			 * @return The normalized color.
			 */
			static col normalize(col value);

			/**
			 * @brief Normalizes the color.
			 */
			void normalize();

			/**
			 * @brief Calculates the inversion of the color by subtracting each component from 1.
			 * @return The inverted color.
			 */
			col operator !() const;

			/**
			 * @brief Calculates the complement of the color by subtracting each component from 1, leaves alpha channel uninverted.
			 * @return The complemented color.
			 */
			col operator~() const;

			/**
			 * @brief Subtraction operator for colors.
			 * @param other The color to subtract.
			 * @return The result of the subtraction.
			 */
			col operator -(col other) const;

			/**
			 * @brief Compound subtraction operator for colors.
			 * @param other The color to subtract.
			 * @return A reference to the modified color.
			 */
			col& operator -=(col other);

			/**
			 * @brief Addition operator for colors.
			 * @param other The color to add.
			 * @return The result of the addition.
			 */
			col operator +(col other) const;

			/**
			 * @brief Compound addition operator for colors.
			 * @param other The color to add.
			 * @return A reference to the modified color.
			 */
			col& operator +=(col other);

			/**
			 * @brief Component-wise multiplication operator for colors.
			 * @param other The color to multiply by.
			 * @return The result of the multiplication.
			 */
			col operator *(col other) const;

			/**
			 * @brief Compound component-wise multiplication operator for colors.
			 * @param other The color to multiply by.
			 * @return A reference to the modified color.
			 */
			col& operator *=(col other);

			/**
			 * @brief Multiplies each component of the color by a scalar.
			 * @param other The scalar to multiply by.
			 * @return The result of the multiplication.
			 */
			col operator *(float other) const;

			/**
			 * @brief Compound multiplication operator for a color by a scalar.
			 * @param other The scalar to multiply by.
			 * @return A reference to the modified color.
			 */
			col& operator *=(float other);

			/**
			 * @brief Friend function to enable multiplication of a color by a scalar from the left.
			 * @param lhs The scalar on the left side of the multiplication.
			 * @param rhs The color on the right side of the multiplication.
			 * @return The result of the multiplication.
			 */
			friend col operator *(float lhs, col rhs);

			/**
			 * @brief Component-wise division operator for colors.
			 * @param other The color to divide by.
			 * @return The result of the division.
			 */
			col operator /(col other) const;

			/**
			 * @brief Compound component-wise division operator for colors.
			 * @param other The color to divide by.
			 * @return A reference to the modified color.
			 */
			col& operator /=(col other);

			/**
			 * @brief Divides each component of the color by a scalar.
			 * @param other The scalar to divide by.
			 * @return The result of the division.
			 */
			col operator /(float other) const;

			/**
			 * @brief Compound division operator for a color by a scalar.
			 * @param other The scalar to divide by.
			 * @return A reference to the modified color.
			 */
			col& operator /=(float other);

			/**
			 * @brief Friend function to enable division of a color by a scalar from the left.
			 * @param lhs The scalar on the left side of the division.
			 * @param rhs The color on the right side of the division.
			 * @return The result of the division.
			 */
			friend col operator /(float lhs, col rhs);

			/**
			 * @brief Equality comparison operator for colors.
			 * @param other The color to compare.
			 * @return True if colors are equal, false otherwise.
			 */
			bool operator ==(col other) const;

			/**
			 * @brief Inequality comparison operator for colors.
			 * @param other The color to compare.
			 * @return True if colors are not equal, false otherwise.
			 */
			bool operator !=(col other) const;

			/**
			 * @brief Implicit conversion operator to vec4.
			 * @return The color represented as a vec4.
			 */
			operator vec4() const;

			/**
			 * @brief Implicit conversion operator to col32.
			 * @return The color represented as a col32.
			 */
			operator col32() const;

			/**
			 * @brief Implicit conversion operator to hsv.
			 * @return The color represented as a hsv.
			 */
			operator hsv() const;
		};
	}
}