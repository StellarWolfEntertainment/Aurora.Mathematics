/**
 * @file rect.h
 * @brief Defines the rect structure, representing a 2D rectangle.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		struct vec2;

		/**
		 * @brief Represents a 2D rectangle with position and size.
		 */
		struct rect
		{

			/**
			 * @brief Gets the x-coordinate of the rectangle.
			 */
			float x() const;

			/**
			 * @brief Sets the x-coordinate of the rectangle.
			 */
			void x(float value);

			/**
			 * @brief Gets the y-coordinate of the rectangle.
			 * @return The y-coordinate.
			 */
			float y() const;

			/**
			 * @brief Sets the y-coordinate of the rectangle.
			 * @param value The new y-coordinate value.
			 */
			void y(float value);

			/**
			 * @brief Gets the width of the rectangle.
			 * @return The width of the rectangle.
			 */
			float width() const;

			/**
			 * @brief Sets the width of the rectangle.
			 * @param value The new width value.
			 */
			void width(float value);

			/**
			 * @brief Gets the height of the rectangle.
			 * @return The height of the rectangle.
			 */
			float height() const;

			/**
			 * @brief Sets the height of the rectangle.
			 * @param value The new height value.
			 */
			void height(float value);

			/**
			 * @brief Gets the position of the rectangle as a vec2.
			 * @return The position as a vec2.
			 */
			vec2 position() const;

			/**
			 * @brief Sets the position of the rectangle using a vec2.
			 * @param value The new position as a vec2.
			 */
			void position(vec2 value);

			/**
			 * @brief Gets the size of the rectangle as a vec2.
			 * @return The size as a vec2.
			 */
			vec2 size() const;

			/**
			 * @brief Sets the size of the rectangle using a vec2.
			 * @param value The new size as a vec2.
			 */
			void size(vec2 value);

			/**
			 * @brief Gets the minimum x-coordinate of the rectangle.
			 * @return The minimum x-coordinate.
			 */
			float xMin() const;

			/**
			 * @brief Sets the minimum x-coordinate of the rectangle.
			 * @param value The new minimum x-coordinate value.
			 */
			void xMin(float value);

			/**
			 * @brief Gets the minimum y-coordinate of the rectangle.
			 * @return The minimum y-coordinate.
			 */
			float yMin() const;

			/**
			 * @brief Sets the minimum y-coordinate of the rectangle.
			 * @param value The new minimum y-coordinate value.
			 */
			void yMin(float value);

			/**
			 * @brief Gets the maximum x-coordinate of the rectangle.
			 * @return The maximum x-coordinate.
			 */
			float xMax() const;

			/**
			 * @brief Sets the maximum x-coordinate of the rectangle.
			 * @param value The new maximum x-coordinate value.
			 */
			void xMax(float value);

			/**
			 * @brief Gets the maximum y-coordinate of the rectangle.
			 * @return The maximum y-coordinate.
			 */
			float yMax() const;

			/**
			 * @brief Sets the maximum y-coordinate of the rectangle.
			 * @param value The new maximum y-coordinate value.
			 */
			void yMax(float value);

			/**
			 * @brief Gets the center point of the rectangle.
			 */
			vec2 center() const;

			/**
			 * @brief Sets the center point of the rectangle.
			 */
			void center(vec2 value);

			/**
			 * @brief Constructs a rectangle with specified position and size.
			 */
			rect(float x, float y, float width, float height);

			/**
			 * @brief Constructs a rectangle with specified position and size using vec2.
			 */
			rect(vec2 position, vec2 size);

			/**
			 * @brief Checks if two rectangles are approximately equal.
			 */
			static bool approximately(rect value1, rect value2);

			/**
			 * @brief Checks if a point is inside the rectangle.
			 */
			static bool inside(rect value, vec2 point);

			/**
			 * @brief Checks if another rectangle is inside this rectangle.
			 */
			bool inside(vec2 point) const;

			/**
			 * @brief Checks if one rectangle is completely inside another rectangle.
			 * @param value1 The first rectangle to check.
			 * @param value2 The second rectangle to check against.
			 * @return True if value1 is inside value2, false otherwise.
			 */
			static bool inside(rect value1, rect value2);

			/**
			 * @brief Checks if this rectangle is completely inside another rectangle.
			 * @param value The rectangle to check against.
			 * @return True if this rectangle is inside the specified rectangle, false otherwise.
			 */
			bool inside(rect value) const;

			/**
			 * @brief Checks if two rectangles intersect.
			 * @param value1 The first rectangle to check.
			 * @param value2 The second rectangle to check against.
			 * @return True if value1 intersects with value2, false otherwise.
			 */
			static bool intersects(rect value1, rect value2);

			/**
			 * @brief Checks if this rectangle intersects with another rectangle.
			 * @param other The rectangle to check against.
			 * @return True if this rectangle intersects with the specified rectangle, false otherwise.
			 */
			bool intersects(rect other) const;


			/**
			 * @brief Creates a new rectangle by adding padding to the specified rectangle.
			 * @param value The rectangle to pad.
			 * @param top The padding value for the top side.
			 * @param right The padding value for the right side.
			 * @param bottom The padding value for the bottom side.
			 * @param left The padding value for the left side.
			 * @return A new rectangle with padding applied.
			 */
			static rect pad(rect value, float top, float right, float bottom, float left);

			/**
			 * @brief Creates a new rectangle by adding vertical and horizontal padding to the specified rectangle.
			 * @param value The rectangle to pad.
			 * @param top The padding value for the top side.
			 * @param horizontal The padding value for both the left and right sides.
			 * @param bottom The padding value for the bottom side.
			 * @return A new rectangle with padding applied.
			 */
			static rect pad(rect value, float top, float horizontal, float bottom);

			/**
			 * @brief Creates a new rectangle by adding vertical and horizontal padding to the specified rectangle.
			 * @param value The rectangle to pad.
			 * @param vertical The padding value for both the top and bottom sides.
			 * @param horizontal The padding value for both the left and right sides.
			 * @return A new rectangle with padding applied.
			 */
			static rect pad(rect value, float vertical, float horizontal);

			/**
			 * @brief Creates a new rectangle by adding uniform padding to all sides of the specified rectangle.
			 * @param value The rectangle to pad.
			 * @param padding The uniform padding value for all sides.
			 * @return A new rectangle with padding applied.
			 */
			static rect pad(rect value, float padding);

			/**
			 * @brief Adds padding to the current rectangle.
			 * @param top The padding value for the top side.
			 * @param right The padding value for the right side.
			 * @param bottom The padding value for the bottom side.
			 * @param left The padding value for the left side.
			 */
			void pad(float top, float right, float bottom, float left);

			/**
			 * @brief Adds vertical and horizontal padding to the current rectangle.
			 * @param top The padding value for the top side.
			 * @param horizontal The padding value for both the left and right sides.
			 * @param bottom The padding value for the bottom side.
			 */
			void pad(float top, float horizontal, float bottom);

			/**
			 * @brief Adds vertical and horizontal padding to the current rectangle.
			 * @param vertical The padding value for both the top and bottom sides.
			 * @param horizontal The padding value for both the left and right sides.
			 */
			void pad(float vertical, float horizontal);

			/**
			 * @brief Adds uniform padding to all sides of the current rectangle.
			 * @param padding The uniform padding value for all sides.
			 */
			void pad(float padding);

			/**
			 * @brief Creates a new rectangle by adding margins to the specified rectangle.
			 * @param value The rectangle to add margins to.
			 * @param top The margin value for the top side.
			 * @param right The margin value for the right side.
			 * @param bottom The margin value for the bottom side.
			 * @param left The margin value for the left side.
			 * @return A new rectangle with margins applied.
			 */
			static rect margin(rect value, float top, float right, float bottom, float left);

			/**
			 * @brief Creates a new rectangle by adding vertical and horizontal margins to the specified rectangle.
			 * @param value The rectangle to add margins to.
			 * @param top The margin value for the top side.
			 * @param horizontal The margin value for both the left and right sides.
			 * @param bottom The margin value for the bottom side.
			 * @return A new rectangle with margins applied.
			 */
			static rect margin(rect value, float top, float horizontal, float bottom);

			/**
			 * @brief Creates a new rectangle by adding vertical and horizontal margins to the specified rectangle.
			 * @param value The rectangle to add margins to.
			 * @param vertical The margin value for both the top and bottom sides.
			 * @param horizontal The margin value for both the left and right sides.
			 * @return A new rectangle with margins applied.
			 */
			static rect margin(rect value, float vertical, float horizontal);

			/**
			 * @brief Creates a new rectangle by adding uniform margins to all sides of the specified rectangle.
			 * @param value The rectangle to add margins to.
			 * @param margin The uniform margin value for all sides.
			 * @return A new rectangle with margins applied.
			 */
			static rect margin(rect value, float margin);

			/**
			 * @brief Adds margins to the current rectangle.
			 * @param top The margin value for the top side.
			 * @param right The margin value for the right side.
			 * @param bottom The margin value for the bottom side.
			 * @param left The margin value for the left side.
			 */
			void margin(float top, float right, float bottom, float left);

			/**
			 * @brief Adds vertical and horizontal margins to the current rectangle.
			 * @param top The margin value for the top side.
			 * @param horizontal The margin value for both the left and right sides.
			 * @param bottom The margin value for the bottom side.
			 */
			void margin(float top, float horizontal, float bottom);

			/**
			 * @brief Adds vertical and horizontal margins to the current rectangle.
			 * @param vertical The margin value for both the top and bottom sides.
			 * @param horizontal The margin value for both the left and right sides.
			 */
			void margin(float vertical, float horizontal);

			/**
			 * @brief Adds uniform margins to all sides of the current rectangle.
			 * @param margin The uniform margin value for all sides.
			 */
			void margin(float margin);

			/**
			 * @brief Merges two rectangles into a new rectangle that encompasses both.
			 * @param value1 The first rectangle to merge.
			 * @param value2 The second rectangle to merge.
			 * @return A new rectangle that encompasses both input rectangles.
			 */
			static rect merge(rect value1, rect value2);

			/**
			 * @brief Merges the current rectangle with another rectangle, expanding to encompass both.
			 * @param value The rectangle to merge with.
			 */
			void merge(rect value);

			/**
			 * @brief Merges a rectangle with a point, expanding to encompass both.
			 * @param value The rectangle to merge.
			 * @param point The point to merge with.
			 * @return A new rectangle that encompasses both input rectangle and point.
			 */
			static rect merge(rect value, vec2 point);

			/**
			 * @brief Merges the current rectangle with a point, expanding to encompass both.
			 * @param point The point to merge with.
			 */
			void merge(vec2 point);

			/**
			 * @brief Compares two rectangles for equality.
			 * @param other The rectangle to compare against.
			 * @return True if the rectangles are equal, false otherwise.
			 */
			bool operator ==(rect other) const;

			/**
			 * @brief Compares two rectangles for inequality.
			 * @param other The rectangle to compare against.
			 * @return True if the rectangles are not equal, false otherwise.
			 */
			bool operator !=(rect other) const;
		private:
			float x_;
			float y_;
			float w_;
			float h_;
		};
	}
}