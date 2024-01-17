/**
 * @file LerpDirection.h
 * @brief Defines the LerpDirection enum representing different directions for linear angle interpolation.
 * @author Raistlin Wolfe
*/
#pragma once

namespace Aurora
{
	namespace Mathematics
	{
		/**
		 * @brief Enumerates different directions for linear interpolation.
		 */
		enum class LerpDirection
		{
			/*
			* @brief Direct interpolation from the start to the end.
			*/
			Direct,

			/**
			 * @brief Shortest path interpolation between two values.
			 */
			Shortest,

			/**
			 * @brief Longest path interpolation between two values.
			 */
			Longest,

			/**
			 * @brief Clockwise interpolation direction.
			 */
			Clockwise,

			/**
			 * @brief Counterclockwise interpolation direction.
			 */
			Counterclockwise
		};
	}
}