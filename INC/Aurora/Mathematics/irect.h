/**
 * @file irect.h
 * @brief Defines the irect structure, representing a 2D integer rectangle.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		struct vec2;
		struct ivec2;
		struct rect;

		/**
		 * @brief Represents a 2D integer rectangle with position and size.
		 */
		struct irect
		{

			/**
			 * @brief Gets the x-coordinate of the integer rectangle.
			 */
			int x() const;

			/**
			 * @brief Sets the x-coordinate of the integer rectangle.
			 */
			void x(int value);

			/**
			 * @brief Gets the y-coordinate of the integer rectangle.
			 * @return The y-coordinate.
			 */
			int y() const;

			/**
			 * @brief Sets the y-coordinate of the integer rectangle.
			 * @param value The new y-coordinate value.
			 */
			void y(int value);

			/**
			 * @brief Gets the width of the integer rectangle.
			 * @return The width of the integer rectangle.
			 */
			int width() const;

			/**
			 * @brief Sets the width of the integer rectangle.
			 * @param value The new width value.
			 */
			void width(int value);

			/**
			 * @brief Gets the height of the integer rectangle.
			 * @return The height of the integer rectangle.
			 */
			int height() const;

			/**
			 * @brief Sets the height of the integer rectangle.
			 * @param value The new height value.
			 */
			void height(int value);

			/**
			 * @brief Gets the position of the integer rectangle as a ivec2.
			 * @return The position as a ivec2.
			 */
			ivec2 position() const;

			/**
			 * @brief Sets the position of the integer rectangle using a ivec2.
			 * @param value The new position as a ivec2.
			 */
			void position(ivec2 value);

			/**
			 * @brief Gets the size of the integer rectangle as a ivec2.
			 * @return The size as a ivec2.
			 */
			ivec2 size() const;

			/**
			 * @brief Sets the size of the integer rectangle using a ivec2.
			 * @param value The new size as a ivec2.
			 */
			void size(ivec2 value);

			/**
			 * @brief Gets the minimum x-coordinate of the integer rectangle.
			 * @return The minimum x-coordinate.
			 */
			int xMin() const;

			/**
			 * @brief Sets the minimum x-coordinate of the integer rectangle.
			 * @param value The new minimum x-coordinate value.
			 */
			void xMin(int value);

			/**
			 * @brief Gets the minimum y-coordinate of the integer rectangle.
			 * @return The minimum y-coordinate.
			 */
			int yMin() const;

			/**
			 * @brief Sets the minimum y-coordinate of the integer rectangle.
			 * @param value The new minimum y-coordinate value.
			 */
			void yMin(int value);

			/**
			 * @brief Gets the maximum x-coordinate of the integer rectangle.
			 * @return The maximum x-coordinate.
			 */
			int xMax() const;

			/**
			 * @brief Sets the maximum x-coordinate of the integer rectangle.
			 * @param value The new maximum x-coordinate value.
			 */
			void xMax(int value);

			/**
			 * @brief Gets the maximum y-coordinate of the integer rectangle.
			 * @return The maximum y-coordinate.
			 */
			int yMax() const;

			/**
			 * @brief Sets the maximum y-coordinate of the integer rectangle.
			 * @param value The new maximum y-coordinate value.
			 */
			void yMax(int value);

			/**
			 * @brief Gets the center point of the integer rectangle.
			 */
			vec2 center() const;

			/**
			 * @brief Constructs a integer rectangle with specified position and size.
			 */
			irect(int x, int y, int width, int height);

			/**
			 * @brief Constructs a integer rectangle with specified position and size using ivec2.
			 */
			irect(ivec2 position, ivec2 size);

			/**
			 * @brief Checks if a point is inside the integer rectangle.
			 */
			static bool inside(irect value, ivec2 point);

			/**
			 * @brief Checks if another integer rectangle is inside this integer rectangle.
			 */
			bool inside(ivec2 point) const;

			/**
			 * @brief Checks if one integer rectangle is completely inside another integer rectangle.
			 * @param value1 The first integer rectangle to check.
			 * @param value2 The second integer rectangle to check against.
			 * @return True if value1 is inside value2, false otherwise.
			 */
			static bool inside(irect value1, irect value2);

			/**
			 * @brief Checks if this integer rectangle is completely inside another integer rectangle.
			 * @param value The integer rectangle to check against.
			 * @return True if this integer rectangle is inside the specified integer rectangle, false otherwise.
			 */
			bool inside(irect value) const;

			/**
			 * @brief Checks if two integer rectangles intersect.
			 * @param value1 The first integer rectangle to check.
			 * @param value2 The second integer rectangle to check against.
			 * @return True if value1 intersects with value2, false otherwise.
			 */
			static bool intersects(irect value1, irect value2);

			/**
			 * @brief Checks if this integer rectangle intersects with another integer rectangle.
			 * @param other The integer rectangle to check against.
			 * @return True if this integer rectangle intersects with the specified integer rectangle, false otherwise.
			 */
			bool intersects(irect other) const;


			/**
			 * @brief Creates a new integer rectangle by adding padding to the specified integer rectangle.
			 * @param value The integer rectangle to pad.
			 * @param top The padding value for the top side.
			 * @param right The padding value for the right side.
			 * @param bottom The padding value for the bottom side.
			 * @param left The padding value for the left side.
			 * @return A new integer rectangle with padding applied.
			 */
			static irect pad(irect value, int top, int right, int bottom, int left);

			/**
			 * @brief Creates a new integer rectangle by adding vertical and horizontal padding to the specified integer rectangle.
			 * @param value The integer rectangle to pad.
			 * @param top The padding value for the top side.
			 * @param horizontal The padding value for both the left and right sides.
			 * @param bottom The padding value for the bottom side.
			 * @return A new integer rectangle with padding applied.
			 */
			static irect pad(irect value, int top, int horizontal, int bottom);

			/**
			 * @brief Creates a new integer rectangle by adding vertical and horizontal padding to the specified integer rectangle.
			 * @param value The integer rectangle to pad.
			 * @param vertical The padding value for both the top and bottom sides.
			 * @param horizontal The padding value for both the left and right sides.
			 * @return A new integer rectangle with padding applied.
			 */
			static irect pad(irect value, int vertical, int horizontal);

			/**
			 * @brief Creates a new integer rectangle by adding uniform padding to all sides of the specified integer rectangle.
			 * @param value The integer rectangle to pad.
			 * @param padding The uniform padding value for all sides.
			 * @return A new integer rectangle with padding applied.
			 */
			static irect pad(irect value, int padding);

			/**
			 * @brief Adds padding to the current integer rectangle.
			 * @param top The padding value for the top side.
			 * @param right The padding value for the right side.
			 * @param bottom The padding value for the bottom side.
			 * @param left The padding value for the left side.
			 */
			void pad(int top, int right, int bottom, int left);

			/**
			 * @brief Adds vertical and horizontal padding to the current integer rectangle.
			 * @param top The padding value for the top side.
			 * @param horizontal The padding value for both the left and right sides.
			 * @param bottom The padding value for the bottom side.
			 */
			void pad(int top, int horizontal, int bottom);

			/**
			 * @brief Adds vertical and horizontal padding to the current integer rectangle.
			 * @param vertical The padding value for both the top and bottom sides.
			 * @param horizontal The padding value for both the left and right sides.
			 */
			void pad(int vertical, int horizontal);

			/**
			 * @brief Adds uniform padding to all sides of the current integer rectangle.
			 * @param padding The uniform padding value for all sides.
			 */
			void pad(int padding);

			/**
			 * @brief Creates a new integer rectangle by adding margins to the specified integer rectangle.
			 * @param value The integer rectangle to add margins to.
			 * @param top The margin value for the top side.
			 * @param right The margin value for the right side.
			 * @param bottom The margin value for the bottom side.
			 * @param left The margin value for the left side.
			 * @return A new integer rectangle with margins applied.
			 */
			static irect margin(irect value, int top, int right, int bottom, int left);

			/**
			 * @brief Creates a new integer rectangle by adding vertical and horizontal margins to the specified integer rectangle.
			 * @param value The integer rectangle to add margins to.
			 * @param top The margin value for the top side.
			 * @param horizontal The margin value for both the left and right sides.
			 * @param bottom The margin value for the bottom side.
			 * @return A new integer rectangle with margins applied.
			 */
			static irect margin(irect value, int top, int horizontal, int bottom);

			/**
			 * @brief Creates a new integer rectangle by adding vertical and horizontal margins to the specified integer rectangle.
			 * @param value The integer rectangle to add margins to.
			 * @param vertical The margin value for both the top and bottom sides.
			 * @param horizontal The margin value for both the left and right sides.
			 * @return A new integer rectangle with margins applied.
			 */
			static irect margin(irect value, int vertical, int horizontal);

			/**
			 * @brief Creates a new integer rectangle by adding uniform margins to all sides of the specified integer rectangle.
			 * @param value The integer rectangle to add margins to.
			 * @param margin The uniform margin value for all sides.
			 * @return A new integer rectangle with margins applied.
			 */
			static irect margin(irect value, int margin);

			/**
			 * @brief Adds margins to the current integer rectangle.
			 * @param top The margin value for the top side.
			 * @param right The margin value for the right side.
			 * @param bottom The margin value for the bottom side.
			 * @param left The margin value for the left side.
			 */
			void margin(int top, int right, int bottom, int left);

			/**
			 * @brief Adds vertical and horizontal margins to the current integer rectangle.
			 * @param top The margin value for the top side.
			 * @param horizontal The margin value for both the left and right sides.
			 * @param bottom The margin value for the bottom side.
			 */
			void margin(int top, int horizontal, int bottom);

			/**
			 * @brief Adds vertical and horizontal margins to the current integer rectangle.
			 * @param vertical The margin value for both the top and bottom sides.
			 * @param horizontal The margin value for both the left and right sides.
			 */
			void margin(int vertical, int horizontal);

			/**
			 * @brief Adds uniform margins to all sides of the current integer rectangle.
			 * @param margin The uniform margin value for all sides.
			 */
			void margin(int margin);

			/**
			 * @brief Merges two integer rectangles into a new integer rectangle that encompasses both.
			 * @param value1 The first integer rectangle to merge.
			 * @param value2 The second integer rectangle to merge.
			 * @return A new integer rectangle that encompasses both input integer rectangles.
			 */
			static irect merge(irect value1, irect value2);

			/**
			 * @brief Merges the current integer rectangle with another integer rectangle, expanding to encompass both.
			 * @param value The integer rectangle to merge with.
			 */
			void merge(irect value);

			/**
			 * @brief Merges a integer rectangle with a point, expanding to encompass both.
			 * @param value The integer rectangle to merge.
			 * @param point The point to merge with.
			 * @return A new integer rectangle that encompasses both input integer rectangle and point.
			 */
			static irect merge(irect value, ivec2 point);

			/**
			 * @brief Merges the current integer rectangle with a point, expanding to encompass both.
			 * @param point The point to merge with.
			 */
			void merge(ivec2 point);

			/**
			 * @brief Compares two integer rectangles for equality.
			 * @param other The integer rectangle to compare against.
			 * @return True if the integer rectangles are equal, false otherwise.
			 */
			bool operator ==(irect other) const;

			/**
			 * @brief Compares two integer rectangles for inequality.
			 * @param other The integer rectangle to compare against.
			 * @return True if the integer rectangles are not equal, false otherwise.
			 */
			bool operator !=(irect other) const;

			/**
			 * @brief Converts the rectangle to a floating point rectangle.
			*/
			operator rect() const;
		private:
			int x_;
			int y_;
			int w_;
			int h_;
		};
	}
}