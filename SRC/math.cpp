#include "../INC/Aurora/Mathematics/math.h"

#include <cmath>
#include <limits>

#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/col.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/LerpDirection.h"

using namespace std;

namespace Aurora::Mathematics
{
    float clockwiseAngularDistance(float value1, float value2)
    {
        float delta = deltaAngle(value1, value2);
        return delta >= 0 ? delta - 360 : delta;
    }

    float counterclockwiseAngularDistance(float value1, float value2)
    {
        float delta = deltaAngle(value1, value2);
        return delta > 0 ? delta : 360 + delta;
    }

    float shortestAngularDistance(float value1, float value2)
    {
        return deltaAngle(value1, value2);
    }

    float longestAngularDistance(float value1, float value2)
    {
        float delta = deltaAngle(value1, value2);
        return 360.0f - delta;
    }

    int precision_ = 5;
    float epsilon_ = 1e-5f;

    int precision()
    {
        return precision_;
    }

    void precision(int value)
    {
        if (value < 0)
        {
            precision_ = -1;
            epsilon_ = 0;
        }
        else
        {
            precision_ = value;
            epsilon_ = pow(10, -static_cast<float>(value));
        }
    }

    float epsilon()
    {
        return epsilon_;
    }

    int abs(int value)
    {
        return value < 0 ? -value : value;
    }

    float abs(float value)
    {
        return value < 0 ? -value : value;
    }

    float acos(float value)
    {
        return toDegrees(acosf(value));
    }

    float acosh(float value)
    {
        return toDegrees(acoshf(value));
    }

    bool approximately(float value1, float value2)
    {
        return abs(value2 - value1) <= epsilon_;
    }

    float asin(float value)
    {
        return toDegrees(asinf(value));
    }

    float asinh(float value)
    {
        return toDegrees(asinhf(value));
    }

    float atan(float value)
    {
        return toDegrees(atanf(value));
    }

    float atan(float y, float x)
    {
        return toDegrees(atan2f(y, x));
    }

    float atan(vec2 vector)
    {
        return toDegrees(atan2f(vector.y, vector.x));
    }

    float atanh(float value)
    {
        return toDegrees(atanhf(value));
    }

    float barycentric(float value1, float value2, float value3, float amount1, float amount2)
    {
        return value1 + amount1 * (value2 - value1) + amount2 * (value3 - value1);
    }

    col blackbody(float temperature)
    {
        const float height = 6.626e-34f; // Planck's constant in J*s
        const float c = 3.0e8f; // Speed of light in m/s
        const float k = 1.381e-23f; // Boltzmann's constant in J/K
        const float b = 2.898e-3f; // Wien's displacement constant in m*K
        const float l = (b / temperature) * 1.0e9f; // Peak wavelength in nm

        // Define the wavelength range in nm
        const float min_wl = 380.0f;
        const float max_wl = 780.0f;
        const float step_wl = 5.0f;

        // Initialize the RGB color values
        float R = 0.0f;
        float G = 0.0f;
        float B = 0.0f;

        // Loop over the wavelength range
        for (float wl = min_wl; wl <= max_wl; wl += step_wl)
        {
            // Convert the wavelength to meters
            float lambda = wl * 1.0e-9f;

            // Calculate the spectral radiance using Planck's law
            float B_lambda = (2.0f * height * c * c) / (pow(lambda, 5.0f) * (exp((height * c) / (lambda * k * temperature)) - 1.0f));

            // Convert the spectral radiance to RGB color values using a linear approximation
            // Source: https://www.shadertoy.com/view/4ds3Wd
            float x = wl - 440.0f;
            if (wl >= 380.0f && wl < 440.0f)
            {
                R += -(x / 100.0f) * (x / 100.0f) * B_lambda;
                G += 0.0f;
                B += 1.0f * B_lambda;
            }
            else if (wl >= 440.0f && wl < 490.0f)
            {
                R += 0.0f;
                G += (x / 50.0f) * B_lambda;
                B += 1.0f * B_lambda;
            }
            else if (wl >= 490.0f && wl < 510.0f)
            {
                R += 0.0f;
                G += 1.0f * B_lambda;
                B += -(x / 50.0f) * (x / 50.0f) * B_lambda;
            }
            else if (wl >= 510.0f && wl < 580.0f)
            {
                R += (x / 70.0f) * B_lambda;
                G += 1.0f * B_lambda;
                B += 0.0f;
            }
            else if (wl >= 580.0f && wl < 645.0f)
            {
                R += 1.0f * B_lambda;
                G += -(x / 70.0f) * (x / 70.0f) * B_lambda;
                B += 0.0f;
            }
            else if (wl >= 645.0f && wl <= 780.0f)
            {
                R += 1.0f * B_lambda;
                G += 0.0f;
                B += 0.0f;
            }
        }

        // Normalize the RGB color values
        float max_val = 1.0f / max(R, max(G, B));
        R *= max_val;
        G *= max_val;
        B *= max_val;

        // Return the RGB color as a col object
        return col(R, G, B);
    }

    float catmullRom(float value1, float value2, float value3, float value4, float amount)
    {
        float squared = amount * amount;
        float cubed = amount * squared;

        return 0.5f * ((2.0f * value2) +
            (-value1 + value3) * amount +
            (2.0f * value1 - 5.0f * value2 + 4.0f * value3 - value4) * squared +
            (-value1 + 3.0f * value2 - 3.0f * value3 + value4) * cubed);
    }

    float cbrt(float value)
    {
        return cbrtf(value);
    }

    float ceil(float value)
    {
        return ceilf(value);
    }

    int ceilToInt(float value)
    {
        return static_cast<int>(ceil(value));
    }

    int clamp(int value, int minValue, int maxValue)
    {
        return min(maxValue, max(minValue, value));
    }

    unsigned int clamp(unsigned int value, unsigned int minValue, unsigned int maxValue)
    {
        return min(maxValue, max(minValue, value));
    }

    float clamp(float value, float minValue, float maxValue)
    {
        return min(maxValue, max(minValue, value));
    }

    float clamp01(float value)
    {
        return clamp(value, 0.0f, 1.0f);
    }

    int closestPowerOfTwo(int value)
    {
        if (value <= 0)
        {
            return 1;
        }

        int l = 1;
        int height = 1;

        while (height < value)
        {
            l = height;
            height <<= 1;
        }

        if (value - l < height - value)
        {
            return l;
        }
        else
        {
            return height;
        }
    }

    unsigned int closestPowerOfTwo(unsigned int value)
    {
        if (value == 0)
        {
            return 1;
        }

        unsigned int l = 1;
        unsigned int height = 1;

        while (height < value)
        {
            l = height;
            height <<= 1;
        }

        if (value - l < height - value)
        {
            return l;
        }
        else
        {
            return height;
        }
    }

    float cos(float value)
    {
        return cosf(toRadians(value));
    }

    float cosh(float value)
    {
        return coshf(toRadians(value));
    }

    float deltaAngle(float value1, float value2)
    {
        value1 = fmodf(value1, 360.0f);
        value2 = fmodf(value2, 360.0f);

        float diff = value2 - value1;

        diff = diff - 360 * round(diff / 360);

        return diff;
    }

    int distance(int value1, int value2)
    {
        return abs(value2 - value1);
    }

    unsigned int distance(unsigned int value1, unsigned int value2)
    {
        if (value1 <= value2)
        {
            return value2 - value1;
        }
        else
        {
            // Handle the wrap-around case.
            return std::numeric_limits<unsigned int>::max() - value1 + value2 + 1;
        }
    }

    float distance(float value1, float value2)
    {
        return abs(value2 - value1);
    }

    float exp(float value)
    {
        return expf(value);
    }

    float floor(float value)
    {
        return floorf(value);
    }

    int floorToInt(float value)
    {
        return static_cast<int>(floor(value));
    }

    float frac(float value)
    {
        return value - floor(value);
    }

    float gammaToLinear(float value)
    {
        return(value <= 0.04045f) ? value / 12.92f : pow(clamp01((value + 0.055f) / 1.055f), 2.2f);
    }

    float hermite(float value1, float tangent1, float value2, float tangent2, float amount)
    {
        float squared = amount * amount;
        float cubed = amount * squared;
        float part1 = (2.0f * cubed) - (3.0f * squared) + 1.0f;
        float part2 = (-2.0f * cubed) + (3.0f * squared);
        float part3 = (cubed - 2.0f * squared + amount);
        float part4 = (cubed - squared);

        return value1 * part1 + value2 * part2 + tangent1 * part3 + tangent2 * part4;
    }

    float remainder(float x, float y)
    {
        if (approximately(y, 0.0f))
        {
            return std::numeric_limits<float>::quiet_NaN();
        }

        return std::remainderf(x, y);
    }

    float inverseLerp(float value1, float value2, float value)
    {
        if (approximately(value1, value2))
        {
            return 0.0f;
        }

        return (value1 - value) / (value1 - value2);
    }

    bool isPowerOfTwo(int value)
    {
        if (value <= 0) {
            return false;
        }

        return (value & (value - 1)) == 0;
    }

    bool isPowerOfTwo(unsigned int value)
    {
        if (value == 0) {
            return false;
        }

        return (value & (value - 1)) == 0;
    }

    float lerp(float value1, float value2, float amount)
    {
        return lerpUnclamped(value1, value2, clamp01(amount));
    }

    float lerpUnclamped(float value1, float value2, float amount)
    {
        return value1 + ((value2 - value1) * amount);
    }

    float lerpSmooth(float value1, float value2, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
    }

    float lerpSmoothStep(float value1, float value2, float edge0, float edge1, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, smoothstep(edge0, edge1, amount, quality));
    }

    float lerpAngle(float value1, float value2, float amount, LerpDirection direction)
    {
        return lerpAngleUnclamped(value1, value2, clamp01(amount), direction);
    }

    float lerpAngleUnclamped(float value1, float value2, float amount, LerpDirection direction)
    {
        float delta;

        switch (direction)
        {
        case Aurora::Mathematics::LerpDirection::Shortest:
            delta = shortestAngularDistance(value1, value2);
            break;
        case Aurora::Mathematics::LerpDirection::Longest:
            delta = longestAngularDistance(value1, value2);
            break;
        case Aurora::Mathematics::LerpDirection::Clockwise:
            delta = clockwiseAngularDistance(value1, value2);
            break;
        case Aurora::Mathematics::LerpDirection::Counterclockwise:
            delta = counterclockwiseAngularDistance(value1, value2);
            break;
        default:
            delta = value2 - value1;
            break;
        }

        return lerpUnclamped(value1, value1 + delta, amount);
    }

    float lerpAngleSmooth(float value1, float value2, float amount, Quality quality, LerpDirection direction)
    {
        return lerpAngleUnclamped(value1, value2, smooth(quality, clamp01(amount)), direction);
    }

    float lerpAngleSmoothStep(float value1, float value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction)
    {
        return lerpAngleUnclamped(value1, value2, smoothstep(edge0, edge1, amount, quality), direction);
    }

    float linearToGamma(float value)
    {
        return (value <= 0.04045f) ? value * 12.92f : pow(clamp01(value) * 1.055f - 0.055f, 1.0f / 2.2f);
    }

    float log(float value)
    {
        return logf(value);
    }

    float log(float value, float base)
    {
        return logf(value) / logf(base);
    }

    float log2(float value)
    {
        return log(value, 2);
    }

    float log8(float value)
    {
        return log(value, 8);
    }

    float log10(float value)
    {
        return log(value, 10);
    }

    float log16(float value)
    {
        return log(value, 16);
    }

    int max(int value1, int value2)
    {
        return value1 >= value2 ? value1 : value2;
    }

    unsigned int max(unsigned int value1, unsigned int value2)
    {
        return value1 >= value2 ? value1 : value2;
    }

    float max(float value1, float value2)
    {
        return value1 >= value2 ? value1 : value2;
    }

    int min(int value1, int value2)
    {
        return value1 <= value2 ? value1 : value2;
    }

    unsigned int min(unsigned int value1, unsigned int value2)
    {
        return value1 <= value2 ? value1 : value2;
    }

    float min(float value1, float value2)
    {
        return value1 <= value2 ? value1 : value2;
    }

    float mod(float value, float length)
    {
        return fmodf(value, length);
    }

    int nextPowerOfTwo(int value) {
        if (value <= 0) {
            return 1;
        }

        return static_cast<int>(pow(2, ceil(log2(static_cast<float>(value)))));
    }

    unsigned int nextPowerOfTwo(unsigned int value) {
        if (value == 0) {
            return 1;
        }

        return static_cast<unsigned int>(pow(2, ceil(log2(static_cast<float>(value)))));
    }

    float pingPong(float value, float length)
    {
        return length - abs(length - mod(value, 2.0f * length));
    }

    float pow(float value, float exponent)
    {
        return powf(value, exponent);
    }

    int previousPowerOfTwo(int value) {
        if (value <= 1) {
            return 1;
        }

        return static_cast<int>(pow(2, floor(log2(static_cast<float>(value)))));
    }

    unsigned int previousPowerOfTwo(unsigned int value) {
        if (value <= 1) {
            return 1;
        }

        return static_cast<unsigned int>(pow(2, floor(log2(static_cast<float>(value)))));
    }

    float root(float value, float base)
    {
        if (approximately(base, 0.0f))
        {
            return std::numeric_limits<float>::quiet_NaN();
        }

        return pow(value, 1.0f / base);
    }

    float round(float value)
    {
        return (value >= 0.0f) ? floor(value + 0.5f) : ceil(value - 0.5f);
    }

    int roundToInt(float value)
    {
        return static_cast<int>(round(value));
    }

    float scale(float value, float oldMin, float oldMax, float newMin, float newMax)
    {
        return lerp(newMin, newMax, inverseLerp(oldMin, oldMax, value));
    }

    float scale(float value, vec2 oldRange, vec2 newRange)
    {
        return scale(value, oldRange.x, oldRange.y, newRange.x, newRange.y);
    }

    int sign(int value)
    {
        if (value < 0)
        {
            return -1;
        }
        else if (value > 0)
        {
            return 1;
        }

        return 0;
    }

    int sign(float value)
    {
        if (value < 0.0f)
        {
            return -1;
        }
        else if (value > 0.0f)
        {
            return 1;
        }

        return 0;
    }

    float sin(float value)
    {
        return sinf(toRadians(value));
    }

    float sinh(float value)
    {
        return sinhf(toRadians(value));
    }

    float smoothstep(float edge0, float edge1, float value, Quality quality)
    {
        float x = clamp01(inverseLerp(edge0, edge1, value));

        return smooth(quality, x);
    }

    float sqrt(float value)
    {
        return sqrtf(value);
    }

    float tan(float value)
    {
        return tanf(toRadians(value));
    }

    float tanh(float value)
    {
        return tanhf(toRadians(value));
    }

    float toDegrees(float value) {
        const float mult = 180.0f / pi;
        return value * mult;
    }

    float toRadians(float value) {
        const float mult = pi / 180.0f;
        return value * mult;
    }

    float trunc(float value)
    {
        return truncf(value);
    }

    int truncToInt(float value)
    {
        return static_cast<int>(trunc(value));
    }

    float wrapAngleSigned(float value) {
        constexpr float twoPi = 360.0f;
        return mod(value + 180.0f, twoPi) - 180.0f;
    }

    float wrapAngleUnsigned(float value) {
        constexpr float twoPi = 360.0f;
        return mod(value, twoPi);
    }
}