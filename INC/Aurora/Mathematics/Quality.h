/**
 * @file Quality.h
 * @brief Defines the Quality enum, representing different levels of quality for mathematical operations as well as a function for smooth interpolation.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
        /**
         * @brief Enumeration representing different levels of quality for mathematical operations.
         */
        enum class Quality
        {
            /**
             * @brief Low quality.
             */
            Low,

            /**
             * @brief Medium quality.
             */
            Medium,

            /**
             * @brief High quality.
             */
            High
        };

        /**
         * @brief Performs smooth interpolation using the specified quality.
         * @param quality The quality of the interpolation.
         * @param value The value to interpolate.
         * @return The smoothly interpolated value based on the specified quality.
         */
        float smooth(Quality quality, float value);
    }
}