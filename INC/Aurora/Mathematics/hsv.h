/**
 * @file hsv.h
 * @brief Defines the hsv structure, representing a color in the HSV color space.
 * @author Raistlin Wolfe
 */
#pragma once

#include "LerpDirection.h"

namespace Aurora
{
    namespace Mathematics
    {
        struct angle;
        struct col;
        struct col32;
        enum class Quality;

        /**
         * @brief Represents a color in the HSV color space.
         */
        struct hsv
        {
            /**
             * @brief Hue component of the color.
             */
            float h;

            /**
             * @brief Saturation component of the color.
             */
            float s;

            /**
             * @brief Value component of the color.
             */
            float v;

            /**
             * @brief Alpha component of the color.
             */
            float a;

            /**
             * @brief Default constructor, initializes all color components to zero, and the alpha component to 1.
             */
            hsv();

            /**
             * @brief Constructor with specified color components.
             * @param h Hue component.
             * @param s Saturation component.
             * @param v Value component.
             * @param a Alpha component (default is 100).
             */
            hsv(float h, float s, float v, float a = 100);

            /**
             * @brief Constructor with specified color components.
             * @param h Hue component.
             * @param s Saturation component.
             * @param v Value component.
             * @param a Alpha component (default is 100).
             */
            hsv(angle h, float s, float v, float a = 100);

            /**
             * @brief Checks if two colors are approximately equal within a small tolerance.
             * @param value1 The first color for comparison.
             * @param value2 The second color for comparison.
             * @return True if colors are approximately equal, false otherwise.
             */
            static bool approximately(hsv value1, hsv value2);


            /**
             * @brief Linearly interpolates between two colors.
             * @param value1 The starting color.
             * @param value2 The ending color.
             * @param amount The interpolation parameter.
             * @param direction The direction of hue interpolation.
             * @return The interpolated color.
             */
            static hsv lerp(hsv value1, hsv value2, float amount, LerpDirection direction = LerpDirection::Direct);

            /**
             * @brief Linearly interpolates between two colors without clamping the interpolation parameter.
             * @param value1 The starting color.
             * @param value2 The ending color.
             * @param amount The interpolation parameter.
             * @param direction The direction of hue interpolation.
             * @return The unclamped interpolated color.
             */
            static hsv lerpUnclamped(hsv value1, hsv value2, float amount, LerpDirection direction = LerpDirection::Direct);

            /**
             * @brief Smoothly interpolates between two colors with a specified quality.
             * @param value1 The starting color.
             * @param value2 The ending color.
             * @param amount The interpolation parameter.
             * @param quality The quality of the interpolation.
             * @param direction The direction of hue interpolation.
             * @return The smoothly interpolated color.
             */
            static hsv lerpSmooth(hsv value1, hsv value2, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

            /**
             * @brief Performs smoothstep interpolation between two colors with specified edges.
             * @param value1 The starting color.
             * @param value2 The ending color.
             * @param edge0 The lower edge.
             * @param edge1 The upper edge.
             * @param amount The interpolation parameter.
             * @param quality The quality of the interpolation.
             * @param direction The direction of hue interpolation.
             * @return The smoothly interpolated color using smoothstep function.
             */
            static hsv lerpSmoothStep(hsv value1, hsv value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction = LerpDirection::Direct);

            /**
             * @brief Calculates the inversion of the color by subtracting each component from it's maximum.
             * @return The inverted color.
             */
            hsv operator !() const;

            /**
             * @brief Calculates the complement of the color by shifting the hue 180 degrees.
             * @return The complemented color.
             */
            hsv operator~() const;

            /**
             * @brief Equality comparison operator for colors.
             * @param other The color to compare.
             * @return True if colors are equal, false otherwise.
             */
            bool operator==(hsv other) const;

            /**
             * @brief Inequality comparison operator for colors.
             * @param other The color to compare.
             * @return True if colors are not equal, false otherwise.
             */
            bool operator!=(hsv other) const;

            /**
             * @brief Implicit conversion operator to col.
             * @return The color represented as a col.
             */
            operator col() const;

            /**
             * @brief Implicit conversion operator to col32.
             * @return The color represented as a col32.
             */
            operator col32() const;
        };
    }
}