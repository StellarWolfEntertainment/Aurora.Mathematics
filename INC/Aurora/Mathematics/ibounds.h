/**
 * @file ibounds.h
 * @brief Defines the ibounds structure, representing a 3D integer box.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		struct vec3;
		struct ivec3;
		struct bounds;

		/**
		 * @brief Represents a 3D integer box with position and size.
		 */
		struct ibounds
		{

			/**
			 * @brief Gets the x-coordinate of the box.
			 */
			int x() const;

			/**
			 * @brief Sets the x-coordinate of the box.
			 */
			void x(int value);

			/**
			 * @brief Gets the y-coordinate of the box.
			 * @return The y-coordinate.
			 */
			int y() const;

			/**
			 * @brief Sets the y-coordinate of the box.
			 * @param value The new y-coordinate value.
			 */
			void y(int value);

			/**
			 * @brief Gets the z-coordinate of the box.
			 * @return The z-coordinate.
			 */
			int z() const;

			/**
			 * @brief Sets the z-coordinate of the box.
			 * @param value The new z-coordinate value.
			 */
			void z(int value);

			/**
			 * @brief Gets the width of the box.
			 * @return The width of the box.
			 */
			int width() const;

			/**
			 * @brief Sets the width of the box.
			 * @param value The new width value.
			 */
			void width(int value);

			/**
			 * @brief Gets the height of the box.
			 * @return The height of the box.
			 */
			int height() const;

			/**
			 * @brief Sets the height of the box.
			 * @param value The new height value.
			 */
			void height(int value);

			/**
			 * @brief Gets the depth of the box.
			 * @return The depth of the box.
			 */
			int depth() const;

			/**
			 * @brief Sets the depth of the box.
			 * @param value The new depth value.
			 */
			void depth(int value);

			/**
			 * @brief Gets the position of the ibounds as a ivec3.
			 * @return The position as a ivec3.
			 */
			ivec3 position() const;

			/**
			 * @brief Sets the position of the ibounds using a ivec3.
			 * @param value The new position as a ivec3.
			 */
			void position(ivec3 value);

			/**
			 * @brief Gets the size of the ibounds as a ivec3.
			 * @return The size as a ivec3.
			 */
			ivec3 size() const;

			/**
			 * @brief Sets the size of the ibounds using a ivec3.
			 * @param value The new size as a ivec3.
			 */
			void size(ivec3 value);

			/**
			 * @brief Gets the minimum x-coordinate of the box.
			 * @return The minimum x-coordinate.
			 */
			int xMin() const;

			/**
			 * @brief Sets the minimum x-coordinate of the box.
			 * @param value The new minimum x-coordinate value.
			 */
			void xMin(int value);

			/**
			 * @brief Gets the minimum y-coordinate of the box.
			 * @return The minimum y-coordinate.
			 */
			int yMin() const;

			/**
			 * @brief Sets the minimum y-coordinate of the box.
			 * @param value The new minimum y-coordinate value.
			 */
			void yMin(int value);

			/**
			 * @brief Gets the minimum z-coordinate of the box.
			 * @return The minimum z-coordinate.
			 */
			int zMin() const;

			/**
			 * @brief Sets the minimum z-coordinate of the box.
			 * @param value The new minimum z-coordinate value.
			 */
			void zMin(int value);

			/**
			 * @brief Gets the maximum x-coordinate of the box.
			 * @return The maximum x-coordinate.
			 */
			int xMax() const;

			/**
			 * @brief Sets the maximum x-coordinate of the box.
			 * @param value The new maximum x-coordinate value.
			 */
			void xMax(int value);

			/**
			 * @brief Gets the maximum y-coordinate of the box.
			 * @return The maximum y-coordinate.
			 */
			int yMax() const;

			/**
			 * @brief Sets the maximum y-coordinate of the box.
			 * @param value The new maximum y-coordinate value.
			 */
			void yMax(int value);

			/**
			 * @brief Gets the maximum z-coordinate of the box.
			 * @return The maximum z-coordinate.
			 */
			int zMax() const;

			/**
			 * @brief Sets the maximum z-coordinate of the box.
			 * @param value The new maximum z-coordinate value.
			 */
			void zMax(int value);

			/**
			 * @brief Gets the center point of the box.
			 */
			vec3 center() const;

			/**
			 * @brief Constructs a ibounds with specified position and size.
			 */
			ibounds(int x, int y, int z, int width, int height, int depth);

			/**
			 * @brief Constructs a ibounds with specified position and size using ivec3.
			 */
			ibounds(ivec3 position, ivec3 size);

			/**
			 * @brief Checks if two iboundss are approximately equal.
			 */
			static bool approximately(ibounds value1, ibounds value2);

			/**
			 * @brief Checks if a point is inside the box.
			 */
			static bool inside(ibounds value, ivec3 point);

			/**
			 * @brief Checks if another ibounds is inside this box.
			 */
			bool inside(ivec3 point) const;

			/**
			 * @brief Checks if one ibounds is completely inside another box.
			 * @param value1 The first ibounds to check.
			 * @param value2 The second ibounds to check against.
			 * @return True if value1 is inside value2, false otherwise.
			 */
			static bool inside(ibounds value1, ibounds value2);

			/**
			 * @brief Checks if this ibounds is completely inside another box.
			 * @param value The ibounds to check against.
			 * @return True if this ibounds is inside the specified ibounds, false otherwise.
			 */
			bool inside(ibounds value) const;

			/**
			 * @brief Checks if two iboundss intersect.
			 * @param value1 The first ibounds to check.
			 * @param value2 The second ibounds to check against.
			 * @return True if value1 intersects with value2, false otherwise.
			 */
			static bool intersects(ibounds value1, ibounds value2);

			/**
			 * @brief Checks if this ibounds intersects with another box.
			 * @param other The ibounds to check against.
			 * @return True if this ibounds intersects with the specified ibounds, false otherwise.
			 */
			bool intersects(ibounds other) const;

			/**
			 * @brief Merges two iboundss into a new ibounds that encompasses both.
			 * @param value1 The first ibounds to merge.
			 * @param value2 The second ibounds to merge.
			 * @return A new ibounds that encompasses both input iboundss.
			 */
			static ibounds merge(ibounds value1, ibounds value2);

			/**
			 * @brief Merges the current ibounds with another ibounds, expanding to encompass both.
			 * @param value The ibounds to merge with.
			 */
			void merge(ibounds value);

			/**
			 * @brief Merges a ibounds with a point, expanding to encompass both.
			 * @param value The ibounds to merge.
			 * @param point The point to merge with.
			 * @return A new ibounds that encompasses both input ibounds and point.
			 */
			static ibounds merge(ibounds value, ivec3 point);

			/**
			 * @brief Merges the current ibounds with a point, expanding to encompass both.
			 * @param point The point to merge with.
			 */
			void merge(ivec3 point);

			/**
			 * @brief Compares two iboundss for equality.
			 * @param other The ibounds to compare against.
			 * @return True if the iboundss are equal, false otherwise.
			 */
			bool operator ==(ibounds other) const;

			/**
			 * @brief Compares two iboundss for inequality.
			 * @param other The ibounds to compare against.
			 * @return True if the iboundss are not equal, false otherwise.
			 */
			bool operator !=(ibounds other) const;

			/**
			 * @brief Converts the box to a floating point box.
			*/
			operator bounds() const;
		private:
			int x_;
			int y_;
			int z_;
			int w_;
			int h_;
			int d_;
		};
	}
}