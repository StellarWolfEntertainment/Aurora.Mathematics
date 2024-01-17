#include "../INC/Aurora/Mathematics/vec2.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/ivec3.h"
#include "../INC/Aurora/Mathematics/ivec4.h"

namespace Aurora::Mathematics
{
    vec2 vec2::zero()
    {
        return vec2(0, 0);
    }

    vec2 vec2::one()
    {
        return vec2(1, 1);
    }

    vec2 vec2::left()
    {
        return vec2(-1, 0);
    }

    vec2 vec2::right()
    {
        return vec2(1, 0);
    }

    vec2 vec2::down()
    {
        return vec2(0, -1);
    }

    vec2 vec2::up()
    {
        return vec2(0, 1);
    }

    float vec2::length() const
    {
        return sqrt(lengthSquared());
    }

    float vec2::lengthSquared() const
    {
        return (x * x) + (y * y);
    }

    vec2 vec2::normalized() const
    {
        return normalize(*this);
    }

    vec2 vec2::xx() const
    {
        return vec2(x, x);
    }

    void vec2::xx(vec2 value)
    {
        x = value.x;
        y = value.x;
    }

    vec2 vec2::xy() const
    {
        return vec2(x, y);
    }

    void vec2::xy(vec2 value)
    {
        x = value.x;
        y = value.y;
    }

    vec2 vec2::yx() const
    {
        return vec2(y, x);
    }

    void vec2::yx(vec2 value)
    {
        x = value.y;
        y = value.x;
    }

    vec2 vec2::yy() const
    {
        return vec2(y, y);
    }

    void vec2::yy(vec2 value)
    {
        x = value.y;
        y = value.y;
    }

    vec3 vec2::xxx() const
    {
        return vec3(x, x, x);
    }

    vec3 vec2::xxy() const
    {
        return vec3(x, x, y);
    }

    vec3 vec2::xyx() const
    {
        return vec3(x, y, x);
    }

    vec3 vec2::xyy() const
    {
        return vec3(x, y, y);
    }

    vec3 vec2::yxx() const
    {
        return vec3(y, x, x);
    }

    vec3 vec2::yxy() const
    {
        return vec3(y, x, y);
    }

    vec3 vec2::yyx() const
    {
        return vec3(y, y, x);
    }

    vec3 vec2::yyy() const
    {
        return vec3(y, y, y);
    }

    vec4 vec2::xxxx() const
    {
        return vec4(x, x, x, x);
    }

    vec4 vec2::xxxy() const
    {
        return vec4(x, x, x, y);
    }

    vec4 vec2::xxyx() const
    {
        return vec4(x, x, y, x);
    }

    vec4 vec2::xxyy() const
    {
        return vec4(x, x, y, y);
    }

    vec4 vec2::xyxx() const
    {
        return vec4(x, y, x, x);
    }

    vec4 vec2::xyxy() const
    {
        return vec4(x, y, x, y);
    }

    vec4 vec2::xyyx() const
    {
        return vec4(x, y, y, x);
    }

    vec4 vec2::xyyy() const
    {
        return vec4(x, y, y, y);
    }

    vec4 vec2::yxxx() const
    {
        return vec4(y, x, x, x);
    }

    vec4 vec2::yxxy() const
    {
        return vec4(y, x, x, y);
    }

    vec4 vec2::yxyx() const
    {
        return vec4(y, x, y, x);
    }

    vec4 vec2::yxyy() const
    {
        return vec4(y, x, y, y);
    }

    vec4 vec2::yyxx() const
    {
        return vec4(y, y, x, x);
    }

    vec4 vec2::yyxy() const
    {
        return vec4(y, y, x, y);
    }

    vec4 vec2::yyyx() const
    {
        return vec4(y, y, y, x);
    }

    vec4 vec2::yyyy() const
    {
        return vec4(y, y, y, y);
    }

    vec2::vec2() : x(0), y(0) { }

    vec2::vec2(float x, float y) : x(x), y(y) { }

    vec2::vec2(Mathematics::angle angle, float radius) : x(angle::cos(angle)* radius), y(angle::sin(angle)* radius) { }

    vec2 vec2::abs(vec2 value)
    {
        return vec2(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y)
        );
    }
    bool vec2::approximately(vec2 value1, vec2 value2)
    {
        return
            Mathematics::approximately(value1.x, value2.x) &&
            Mathematics::approximately(value1.y, value2.y);
    }

    angle vec2::angle(vec2 value)
    {
        return angle::atan(value);
    }

    vec2 vec2::barycentric(vec2 value1, vec2 value2, vec2 value3, float amount1, float amount2)
    {
        return vec2(
            Mathematics::barycentric(value1.x, value2.x, value3.x, amount1, amount2),
            Mathematics::barycentric(value1.y, value2.y, value3.y, amount1, amount2)
        );
    }

    vec2 vec2::catmullRom(vec2 value1, vec2 value2, vec2 value3, vec2 value4, float amount)
    {
        return vec2(
            Mathematics::catmullRom(value1.x, value2.x, value3.x, value4.x, amount),
            Mathematics::catmullRom(value1.y, value2.y, value3.y, value4.y, amount)
        );
    }

    vec2 vec2::ceil(vec2 value)
    {
        return vec2(
            Mathematics::ceil(value.x),
            Mathematics::ceil(value.y)
        );
    }

    vec2 vec2::clamp(vec2 value, float minValue, float maxValue)
    {
        return vec2(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue)
        );
    }

    vec2 vec2::clamp(vec2 value, vec2 minValue, vec2 maxValue)
    {
        return vec2(
            Mathematics::clamp(value.x, minValue.x, maxValue.x),
            Mathematics::clamp(value.y, minValue.y, maxValue.y)
        );
    }

    float vec2::cross(vec2 value1, vec2 value2)
    {
        return (value1.x * value2.y) - (value1.y * value2.x);
    }

    float vec2::distance(vec2 value1, vec2 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float vec2::distanceSquared(vec2 value1, vec2 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);

        return (dx * dx) + (dy * dy);
    }

    float vec2::dot(vec2 value1, vec2 value2)
    {
        return (value1.x * value2.x) + (value1.y * value2.y);
    }

    vec2 vec2::floor(vec2 value)
    {
        return vec2(
            Mathematics::floor(value.x),
            Mathematics::floor(value.y)
        );
    }

    vec2 vec2::frac(vec2 value)
    {
        return value - floor(value);
    }

    vec2 vec2::hermite(vec2 value1, vec2 tangent1, vec2 value2, vec2 tangent2, float amount)
    {
        return vec2(
            Mathematics::hermite(value1.x, tangent1.x, value2.x, tangent2.x, amount),
            Mathematics::hermite(value1.y, tangent1.y, value2.y, tangent2.y, amount)
        );
    }

    vec2 vec2::lerp(vec2 value1, vec2 value2, float amount)
    {
        return lerpUnclamped(value1, value2, clamp01(amount));
    }

    vec2 vec2::lerpUnclamped(vec2 value1, vec2 value2, float amount)
    {
        return vec2(
            Mathematics::lerpUnclamped(value1.x, value2.x, amount),
            Mathematics::lerpUnclamped(value1.y, value2.y, amount)
        );
    }

    vec2 vec2::lerpSmooth(vec2 value1, vec2 value2, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
    }

    vec2 vec2::lerpSmoothStep(vec2 value1, vec2 value2, float edge0, float edge1, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
    }

    vec2 vec2::max(vec2 value1, vec2 value2)
    {
        return vec2(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y)
        );
    }

    vec2 vec2::min(vec2 value1, vec2 value2)
    {
        return vec2(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y)
        );
    }

    vec2 vec2::normalize(vec2 value)
    {
        value.normalize();
        return value;
    }

    void vec2::normalize()
    {
        float len = length();

        if (!Mathematics::approximately(len, 0))
        {
            float l = 1.0f / len;
            x *= l;
            y *= l;
        }
    }

    vec2 vec2::perpendicular(vec2 value)
    {
        return vec2(-value.y, value.x);
    }

    vec2 vec2::project(vec2 vector, vec2 onNormal)
    {
        float dotProduct = dot(vector, onNormal);
        float magnitudeSquared = onNormal.lengthSquared();

        if (Mathematics::approximately(magnitudeSquared, 0))
        {
            return zero();
        }

        float scalar = dotProduct / magnitudeSquared;
        return onNormal * scalar;
    }

    vec2 vec2::reflect(vec2 vector, vec2 onNormal)
    {
        return vector - 2.0f * dot(vector, onNormal) * onNormal;
    }

    vec2 vec2::refract(vec2 vector, vec2 onNormal, float ior, float iot)
    {
        float dotNI = dot(vector, onNormal);
        float k = 1.0f - ior * ior * (1.0f - dotNI * dotNI);

        if (k < 0.0f)
            return zero();  // Total internal reflection

        return ior * vector - (ior * dotNI + sqrt(k)) * onNormal;
    }

    vec2 vec2::reject(vec2 vector, vec2 onNormal)
    {
        return vector - project(vector, onNormal);
    }

    vec2 vec2::rotate(vec2 vector, float angle)
    {
        float cosTheta = Mathematics::cos(angle);
        float sinTheta = Mathematics::sin(angle);

        return vec2(
            vector.x * cosTheta - vector.y * sinTheta,
            vector.x * sinTheta + vector.y * cosTheta
        );
    }

    vec2 vec2::rotate(vec2 vector, Mathematics::angle angle)
    {
        float cosTheta = angle::cos(angle);
        float sinTheta = angle::sin(angle);

        return vec2(
            vector.x * cosTheta - vector.y * sinTheta,
            vector.x * sinTheta + vector.y * cosTheta
        );
    }

    vec2 vec2::rotateAround(vec2 vector, vec2 origin, float angle)
    {
        vector -= origin;
        vector = rotate(vector, angle);
        return vector + origin;
    }

    vec2 vec2::rotateAround(vec2 vector, vec2 origin, Mathematics::angle angle)
    {
        vector -= origin;
        vector = rotate(vector, angle);
        return vector + origin;
    }

    vec2 vec2::round(vec2 value)
    {
        return vec2(
            Mathematics::round(value.x),
            Mathematics::round(value.y)
        );
    }

    vec2 vec2::smoothstep(vec2 edge0, vec2 edge1, vec2 value, Quality quality)
    {
        return vec2(
            Mathematics::smoothstep(edge0.x, edge1.x, value.x, quality),
            Mathematics::smoothstep(edge0.y, edge1.y, value.y, quality)
        );
    }

    vec2 vec2::trunc(vec2 value)
    {
        return vec2(
            Mathematics::trunc(value.x),
            Mathematics::trunc(value.y)
        );
    }

    vec2 vec2::operator-() const
    {
        return vec2(-x, -y);
    }

    vec2 vec2::operator-(vec2 other) const
    {
        return vec2(
            x - other.x,
            y - other.y
        );
    }

    vec2& vec2::operator-=(vec2 other)
    {
        x -= other.x;
        y -= other.y;

        return *this;
    }

    vec2 vec2::operator+() const
    {
        return vec2(x, y);
    }

    vec2 vec2::operator+(vec2 other) const
    {
        return vec2(
            x + other.x,
            y + other.y
        );
    }

    vec2& vec2::operator+=(vec2 other)
    {
        x += other.x;
        y += other.y;

        return *this;
    }

    vec2 vec2::operator*(vec2 other) const
    {
        return vec2(
            x * other.x,
            y * other.y
        );
    }

    vec2& vec2::operator*=(vec2 other)
    {
        x *= other.x;
        y *= other.y;

        return *this;
    }

    vec2 vec2::operator*(float other) const
    {
        return vec2(
            x * other,
            y * other
        );
    }

    vec2& vec2::operator*=(float other)
    {
        x *= other;
        y *= other;

        return *this;
    }

    vec2 operator*(float lhs, vec2 rhs)
    {
        return vec2(
            lhs * rhs.x,
            lhs * rhs.y
        );
    }

    vec2 vec2::operator/(vec2 other) const
    {
        return vec2(
            x / other.x,
            y / other.y
        );
    }

    vec2& vec2::operator/=(vec2 other)
    {
        x /= other.x;
        y /= other.y;

        return *this;
    }

    vec2 vec2::operator/(float other) const
    {
        return vec2(
            x / other,
            y / other
        );
    }

    vec2& vec2::operator/=(float other)
    {
        x /= other;
        y /= other;

        return *this;
    }

    vec2 operator/(float lhs, vec2 rhs)
    {
        return vec2(
            lhs / rhs.x,
            lhs / rhs.y
        );
    }

    vec2 vec2::operator%(vec2 other) const
    {
        return vec2(
            mod(x, other.x),
            mod(y, other.y)
        );
    }

    vec2& vec2::operator%=(vec2 other)
    {
        x = mod(x, other.x);
        y = mod(y, other.y);

        return *this;
    }

    vec2 vec2::operator%(float other) const
    {
        return vec2(
            mod(x, other),
            mod(y, other)
        );
    }

    vec2& vec2::operator%=(float other)
    {
        x = mod(x, other);
        y = mod(y, other);

        return *this;
    }

    vec2 operator%(float lhs, vec2 rhs)
    {
        return vec2(
            mod(lhs, rhs.x),
            mod(lhs, rhs.y)
        );
    }

    bool vec2::operator==(vec2 other) const
    {
        return x == other.x && y == other.y;
    }

    bool vec2::operator!=(vec2 other) const
    {
        return !(*this == other);
    }

    vec2::operator vec3() const
    {
        return vec3(x, y, 0);
    }

    vec2::operator vec4() const
    {
        return vec4(x, y, 0, 0);
    }

    vec2::operator ivec2() const
    {
        return ivec2(static_cast<int>(x), static_cast<int>(y));
    }

    vec2::operator ivec3() const
    {
        return ivec3(static_cast<int>(x), static_cast<int>(y), 0);
    }

    vec2::operator ivec4() const
    {
        return ivec4(static_cast<int>(x), static_cast<int>(y), 0, 0);
    }
}