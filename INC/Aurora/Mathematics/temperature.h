/**
 * @file temperature.h
 * @brief Defines the temperature structure, Representing a unitless temperature.
 * @author Raistlin Wolfe
 */
#pragma once
#pragma warning (disable: 4455)

namespace Aurora
{
    namespace Mathematics
    {
        enum class Quality;

        struct col;

        /**
         * @brief Represents a temperature with methods and operators for temperature conversions and operations.
         */
        struct temperature
        {
            /**
             * @brief Gets the temperature in Celsius.
             * @return The temperature in Celsius.
             */
            float celsius() const;

            /**
             * @brief Sets the temperature in Celsius.
             * @param value The temperature in Celsius.
             */
            void celsius(float value);

            /**
             * @brief Gets the temperature in Fahrenheit.
             * @return The temperature in Fahrenheit.
             */
            float fahrenheit() const;

            /**
             * @brief Sets the temperature in Fahrenheit.
             * @param value The temperature in Fahrenheit.
             */
            void fahrenheit(float value);

            /**
             * @brief Gets the temperature in Kelvin.
             * @return The temperature in Kelvin.
             */
            float kelvin() const;

            /**
             * @brief Sets the temperature in Kelvin.
             * @param value The temperature in Kelvin.
             */
            void kelvin(float value);

            /**
             * @brief Creates a temperature with zero Kelvin.
             * @return The temperature with zero Kelvin.
             */
            static temperature zero();

            /**
             * @brief Creates a temperature from Celsius.
             * @param value The temperature in Celsius.
             * @return The temperature object.
             */
            static temperature fromCelsius(float value);

            /**
             * @brief Creates a temperature from Fahrenheit.
             * @param value The temperature in Fahrenheit.
             * @return The temperature object.
             */
            static temperature fromFahrenheit(float value);

            /**
             * @brief Creates a temperature from Kelvin.
             * @param value The temperature in Kelvin.
             * @return The temperature object.
             */
            static temperature fromKelvin(float value);

            /**
             * @brief Checks if two temperatures are approximately equal within a small tolerance.
             * @param value1 The first temperature for comparison.
             * @param value2 The second temperature for comparison.
             * @return True if the temperatures are approximately equal, false otherwise.
             */
            static bool approximately(temperature value1, temperature value2);

            /**
             * @brief Calculates the blackbody color for a given temperature.
             *
             * @param value The temperature for which to calculate the blackbody color.
             * @return The blackbody color as a col (color) structure.
             *
             * <p>This method calculates the color of a blackbody radiator at the specified temperature. The result is
             * represented as a col structure, which typically contains RGB values. The blackbody color calculation is based
             * on the temperature-dependent emission spectrum, providing a visually realistic representation of the radiated color.</p>
             */
            static col blackbody(temperature value);

            /**
             * @brief Calculates the absolute temperature difference between two temperatures.
             * @param value1 The first temperature.
             * @param value2 The second temperature.
             * @return The absolute temperature difference between value1 and value2.
             */
            static temperature distance(temperature value1, temperature value2);

            /**
             * @brief Calculates the inverse lerp (inverse linear interpolation) for the specified temperature within the range [value1, value2].
             * @param value1 The starting temperature of the range.
             * @param value2 The ending temperature of the range.
             * @param value The temperature to inverse lerp.
             * @return The inverse lerp parameter.
             */
            static float inverseLerp(temperature value1, temperature value2, temperature value);

            /**
             * @brief Linearly interpolates between two temperatures.
             * @param value1 The starting temperature.
             * @param value2 The ending temperature.
             * @param amount The interpolation parameter.
             * @return The interpolated temperature.
             */
            static temperature lerp(temperature value1, temperature value2, float amount);

            /**
             * @brief Linearly interpolates between two temperatures without clamping the interpolation parameter.
             * @param value1 The starting temperature.
             * @param value2 The ending temperature.
             * @param amount The interpolation parameter.
             * @return The unclamped interpolated temperature.
             */
            static temperature lerpUnclamped(temperature value1, temperature value2, float amount);

            /**
             * @brief Smoothly interpolates between two temperatures with a specified quality.
             * @param value1 The starting temperature.
             * @param value2 The ending temperature.
             * @param amount The interpolation parameter.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated temperature.
             */
            static temperature lerpSmooth(temperature value1, temperature value2, float amount, Quality quality);

            /**
             * @brief Performs smoothstep interpolation between two temperatures with specified edges and quality.
             * @param value1 The starting temperature.
             * @param value2 The ending temperature.
             * @param edge0 The lower edge.
             * @param edge1 The upper edge.
             * @param amount The interpolation parameter.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated temperature using the smoothstep function.
             */
            static temperature lerpSmoothStep(temperature value1, temperature value2, float edge0, float edge1, float amount, Quality quality);

            /**
             * @brief Returns the maximum of two temperatures.
             * @param value1 The first temperature.
             * @param value2 The second temperature.
             * @return The maximum temperature of the two temperatures.
             */
            static temperature max(temperature value1, temperature value2);

            /**
             * @brief Returns the minimum of two temperatures.
             * @param value1 The first temperature.
             * @param value2 The second temperature.
             * @return The minimum temperature of the two temperatures.
             */
            static temperature min(temperature value1, temperature value2);

            /**
             * @brief Gets the sign of the temperature.
             * @param value The temperature to check.
             * @return 1 if the temperature is positive, -1 if negative, 0 if zero.
             */
            static int sign(temperature value);

            /**
             * @brief Performs smoothstep interpolation between two temperatures.
             * @param edge0 The lower edge.
             * @param edge1 The upper edge.
             * @param value The temperature to interpolate.
             * @param quality The quality of the interpolation.
             * @return The smoothly interpolated temperature using the smoothstep function.
             */
            static temperature smoothstep(temperature edge0, temperature edge1, temperature value, Quality quality);

            /**
             * @brief Unary negation of the temperature.
             * @return The negated temperature.
             */
            temperature operator -() const;

            /**
             * @brief Subtracts another temperature from this temperature.
             * @param other The temperature to subtract.
             * @return The result of the subtraction.
             */
            temperature operator -(temperature other) const;

            /**
             * @brief Subtracts another temperature from this temperature.
             * @param other The temperature to subtract.
             * @return Reference to this temperature after the subtraction.
             */
            temperature& operator -=(temperature other);

            /**
             * @brief Unary plus of the temperature.
             * @return The temperature itself.
             */
            temperature operator +() const;

            /**
             * @brief Adds another temperature to this temperature.
             * @param other The temperature to add.
             * @return The result of the addition.
             */
            temperature operator +(temperature other) const;

            /**
             * @brief Adds another temperature to this temperature.
             * @param other The temperature to add.
             * @return Reference to this temperature after the addition.
             */
            temperature& operator +=(temperature other);

            /**
             * @brief Multiplies the temperature by a scalar.
             * @param other The scalar to multiply.
             * @return The result of the multiplication.
             */
            temperature operator *(float other) const;

            /**
             * @brief Multiplies the temperature by a scalar.
             * @param other The scalar to multiply.
             * @return Reference to this temperature after the multiplication.
             */
            temperature& operator *=(float other);

            /**
             * @brief Multiplication of a scalar by a temperature.
             * @param lhs The scalar.
             * @param rhs The temperature.
             * @return The result of the multiplication.
             */
            friend temperature operator *(float lhs, temperature rhs);

            /**
             * @brief Divides the temperature by a scalar.
             * @param other The scalar to divide by.
             * @return The result of the division.
             */
            temperature operator /(float other) const;

            /**
             * @brief Divides the temperature by a scalar.
             * @param other The scalar to divide by.
             * @return Reference to this temperature after the division.
             */
            temperature& operator /=(float other);

            /**
             * @brief Modulus operation between two temperatures.
             * @param other The temperature to perform the modulus with.
             * @return The result of the modulus operation.
             */
            temperature operator %(temperature other) const;

            /**
             * @brief Modulus assignment operation between two temperatures.
             * @param other The temperature to perform the modulus with.
             * @return Reference to this temperature after the modulus assignment.
             */
            temperature& operator %=(temperature other);

            /**
             * @brief Equality comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if the temperatures are equal, false otherwise.
             */
            bool operator ==(temperature other) const;

            /**
             * @brief Inequality comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if the temperatures are not equal, false otherwise.
             */
            bool operator !=(temperature other) const;

            /**
             * @brief Less than comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if this temperature is less than the other, false otherwise.
             */
            bool operator <(temperature other) const;

            /**
             * @brief Less than or equal to comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if this temperature is less than or equal to the other, false otherwise.
             */
            bool operator <=(temperature other) const;

            /**
             * @brief Greater than comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if this temperature is greater than the other, false otherwise.
             */
            bool operator >(temperature other) const;

            /**
             * @brief Greater than or equal to comparison between two temperatures.
             * @param other The temperature to compare.
             * @return True if this temperature is greater than or equal to the other, false otherwise.
             */
            bool operator >=(temperature other) const;

        private:
            explicit temperature(float kelvin);
            float kelvin_;
        };

        /**
         * @brief Literal operator for creating temperatures in Celsius.
         * @param value The temperature value in Celsius.
         * @return The temperature object.
         */
        temperature operator "" cel(long double value);

        /**
         * @brief Literal operator for creating temperatures in Celsius.
         * @param value The temperature value in Celsius.
         * @return The temperature object.
         */
        temperature operator "" cel(unsigned long long value);

        /**
         * @brief Literal operator for creating temperatures in Kelvin.
         * @param value The temperature value in Kelvin.
         * @return The temperature object.
         */
        temperature operator "" kel(long double value);

        /**
         * @brief Literal operator for creating temperatures in Kelvin.
         * @param value The temperature value in Kelvin.
         * @return The temperature object.
         */
        temperature operator "" kel(unsigned long long value);

        /**
         * @brief Literal operator for creating temperatures in Fahrenheit.
         * @param value The temperature value in Fahrenheit.
         * @return The temperature object.
         */
        temperature operator "" fah(long double value);

        /**
         * @brief Literal operator for creating temperatures in Fahrenheit.
         * @param value The temperature value in Fahrenheit.
         * @return The temperature object.
         */
        temperature operator "" fah(unsigned long long value);
    }
}