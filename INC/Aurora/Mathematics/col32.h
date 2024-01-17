/**
 * @file col32.h
 * @brief Defines the col32 struct representing an RGBA color.
 * @author Raistlin Wolfe
 */
#pragma once

#include <cstdint>

namespace Aurora
{
	namespace Mathematics
	{
		struct hsv;
		struct col;

		/**
		 * @brief Represents a color with red, green, blue, and alpha components.
		 */
		struct col32
		{
			/**
			 * @brief Red component of the color.
			 */
			uint8_t r;

			/**
			 * @brief Green component of the color.
			 */
			uint8_t g;

			/**
			 * @brief Blue component of the color.
			 */
			uint8_t b;

			/**
			 * @brief Alpha component of the color.
			 */
			uint8_t a;

			/**
			 * @brief Gets the minimum color component among red, green, and blue.
			 * @return The minimum color component.
			 */
			uint8_t minColorComponent() const;

			/**
			 * @brief Gets the maximum color component among red, green, and blue.
			 * @return The maximum color component.
			 */
			uint8_t maxColorComponent() const;

			/**
			 * @brief Default constructor, initializes all color components to zero, and the alpha component to 255.
			 */
			col32();

			/**
			 * @brief Constructor with specified color components.
			 * @param r Red component.
			 * @param g Green component.
			 * @param b Blue component.
			 * @param a Alpha component (default is 255).
			 */
			col32(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);

			/**
			 * @brief Returns the maximum of two colors component-wise.
			 * @param value1 The first color.
			 * @param value2 The second color.
			 * @return The color with the greater component values.
			 */
			static col32 max(col32 value1, col32 value2);

			/**
			 * @brief Returns the minimum of two colors component-wise.
			 * @param value1 The first color.
			 * @param value2 The second color.
			 * @return The color with the smaller component values.
			 */
			static col32 min(col32 value1, col32 value2);

			/**
			 * @brief Calculates the inversion of the color by subtracting each component from 255.
			 * @return The inverted color.
			 */
			col32 operator !() const;

			/**
			 * @brief Calculates the complement of the color by subtracting each component from 255, leaves alpha channel uninverted.
			 * @return The complemented color.
			 */
			col32 operator~() const;

			/**
			 * @brief Subtraction operator for colors.
			 * @param other The color to subtract.
			 * @return The result of the subtraction.
			 */
			col32 operator -(col32 other) const;

			/**
			 * @brief Compound subtraction operator for colors.
			 * @param other The color to subtract.
			 * @return A reference to the modified color.
			 */
			col32& operator -=(col32 other);

			/**
			 * @brief Addition operator for colors.
			 * @param other The color to add.
			 * @return The result of the addition.
			 */
			col32 operator +(col32 other) const;

			/**
			 * @brief Compound addition operator for colors.
			 * @param other The color to add.
			 * @return A reference to the modified color.
			 */
			col32& operator +=(col32 other);

			/**
			 * @brief Equality comparison operator for colors.
			 * @param other The color to compare.
			 * @return True if colors are equal, false otherwise.
			 */
			bool operator ==(col32 other) const;

			/**
			 * @brief Inequality comparison operator for colors.
			 * @param other The color to compare.
			 * @return True if colors are not equal, false otherwise.
			 */
			bool operator !=(col32 other) const;

			/**
			 * @brief Implicit conversion operator to col.
			 * @return The color represented as a col.
			 */
			operator col() const;

			/**
			 * @brief Implicit conversion operator to hsv.
			 * @return The color represented as a hsv.
			 */
			operator hsv() const;
		};
	}
}