/**
 * @file bounds.h
 * @brief Defines the bounds structure, representing a 3D box.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		struct vec3;

		/**
		 * @brief Represents a 3D box with position and size.
		 */
		struct bounds
		{

			/**
			 * @brief Gets the x-coordinate of the box.
			 */
			float x() const;

			/**
			 * @brief Sets the x-coordinate of the box.
			 */
			void x(float value);

			/**
			 * @brief Gets the y-coordinate of the box.
			 * @return The y-coordinate.
			 */
			float y() const;

			/**
			 * @brief Sets the y-coordinate of the box.
			 * @param value The new y-coordinate value.
			 */
			void y(float value);

			/**
			 * @brief Gets the z-coordinate of the box.
			 * @return The z-coordinate.
			 */
			float z() const;

			/**
			 * @brief Sets the z-coordinate of the box.
			 * @param value The new z-coordinate value.
			 */
			void z(float value);

			/**
			 * @brief Gets the width of the box.
			 * @return The width of the box.
			 */
			float width() const;

			/**
			 * @brief Sets the width of the box.
			 * @param value The new width value.
			 */
			void width(float value);

			/**
			 * @brief Gets the height of the box.
			 * @return The height of the box.
			 */
			float height() const;

			/**
			 * @brief Sets the height of the box.
			 * @param value The new height value.
			 */
			void height(float value);

			/**
			 * @brief Gets the depth of the box.
			 * @return The depth of the box.
			 */
			float depth() const;

			/**
			 * @brief Sets the depth of the box.
			 * @param value The new depth value.
			 */
			void depth(float value);

			/**
			 * @brief Gets the position of the bounds as a vec3.
			 * @return The position as a vec3.
			 */
			vec3 position() const;

			/**
			 * @brief Sets the position of the bounds using a vec3.
			 * @param value The new position as a vec3.
			 */
			void position(vec3 value);

			/**
			 * @brief Gets the size of the bounds as a vec3.
			 * @return The size as a vec3.
			 */
			vec3 size() const;

			/**
			 * @brief Sets the size of the bounds using a vec3.
			 * @param value The new size as a vec3.
			 */
			void size(vec3 value);

			/**
			 * @brief Gets the minimum x-coordinate of the box.
			 * @return The minimum x-coordinate.
			 */
			float xMin() const;

			/**
			 * @brief Sets the minimum x-coordinate of the box.
			 * @param value The new minimum x-coordinate value.
			 */
			void xMin(float value);

			/**
			 * @brief Gets the minimum y-coordinate of the box.
			 * @return The minimum y-coordinate.
			 */
			float yMin() const;

			/**
			 * @brief Sets the minimum y-coordinate of the box.
			 * @param value The new minimum y-coordinate value.
			 */
			void yMin(float value);

			/**
			 * @brief Gets the minimum z-coordinate of the box.
			 * @return The minimum z-coordinate.
			 */
			float zMin() const;

			/**
			 * @brief Sets the minimum z-coordinate of the box.
			 * @param value The new minimum z-coordinate value.
			 */
			void zMin(float value);

			/**
			 * @brief Gets the maximum x-coordinate of the box.
			 * @return The maximum x-coordinate.
			 */
			float xMax() const;

			/**
			 * @brief Sets the maximum x-coordinate of the box.
			 * @param value The new maximum x-coordinate value.
			 */
			void xMax(float value);

			/**
			 * @brief Gets the maximum y-coordinate of the box.
			 * @return The maximum y-coordinate.
			 */
			float yMax() const;

			/**
			 * @brief Sets the maximum y-coordinate of the box.
			 * @param value The new maximum y-coordinate value.
			 */
			void yMax(float value);

			/**
			 * @brief Gets the maximum z-coordinate of the box.
			 * @return The maximum z-coordinate.
			 */
			float zMax() const;

			/**
			 * @brief Sets the maximum z-coordinate of the box.
			 * @param value The new maximum z-coordinate value.
			 */
			void zMax(float value);

			/**
			 * @brief Gets the center point of the box.
			 */
			vec3 center() const;

			/**
			 * @brief Sets the center point of the box.
			 */
			void center(vec3 value);

			/**
			 * @brief Constructs a bounds with specified position and size.
			 */
			bounds(float x, float y, float z, float width, float height, float depth);

			/**
			 * @brief Constructs a bounds with specified position and size using vec3.
			 */
			bounds(vec3 position, vec3 size);

			/**
			 * @brief Checks if two boundss are approximately equal.
			 */
			static bool approximately(bounds value1, bounds value2);

			/**
			 * @brief Checks if a point is inside the box.
			 */
			static bool inside(bounds value, vec3 point);

			/**
			 * @brief Checks if another bounds is inside this box.
			 */
			bool inside(vec3 point) const;

			/**
			 * @brief Checks if one bounds is completely inside another box.
			 * @param value1 The first bounds to check.
			 * @param value2 The second bounds to check against.
			 * @return True if value1 is inside value2, false otherwise.
			 */
			static bool inside(bounds value1, bounds value2);

			/**
			 * @brief Checks if this bounds is completely inside another box.
			 * @param value The bounds to check against.
			 * @return True if this bounds is inside the specified bounds, false otherwise.
			 */
			bool inside(bounds value) const;

			/**
			 * @brief Checks if two boundss intersect.
			 * @param value1 The first bounds to check.
			 * @param value2 The second bounds to check against.
			 * @return True if value1 intersects with value2, false otherwise.
			 */
			static bool intersects(bounds value1, bounds value2);

			/**
			 * @brief Checks if this bounds intersects with another box.
			 * @param other The bounds to check against.
			 * @return True if this bounds intersects with the specified bounds, false otherwise.
			 */
			bool intersects(bounds other) const;

			/**
			 * @brief Merges two boundss into a new bounds that encompasses both.
			 * @param value1 The first bounds to merge.
			 * @param value2 The second bounds to merge.
			 * @return A new bounds that encompasses both input boundss.
			 */
			static bounds merge(bounds value1, bounds value2);

			/**
			 * @brief Merges the current bounds with another bounds, expanding to encompass both.
			 * @param value The bounds to merge with.
			 */
			void merge(bounds value);

			/**
			 * @brief Merges a bounds with a point, expanding to encompass both.
			 * @param value The bounds to merge.
			 * @param point The point to merge with.
			 * @return A new bounds that encompasses both input bounds and point.
			 */
			static bounds merge(bounds value, vec3 point);

			/**
			 * @brief Merges the current bounds with a point, expanding to encompass both.
			 * @param point The point to merge with.
			 */
			void merge(vec3 point);

			/**
			 * @brief Compares two boundss for equality.
			 * @param other The bounds to compare against.
			 * @return True if the boundss are equal, false otherwise.
			 */
			bool operator ==(bounds other) const;

			/**
			 * @brief Compares two boundss for inequality.
			 * @param other The bounds to compare against.
			 * @return True if the boundss are not equal, false otherwise.
			 */
			bool operator !=(bounds other) const;
		private:
			float x_;
			float y_;
			float z_;
			float w_;
			float h_;
			float d_;
		};
	}
}