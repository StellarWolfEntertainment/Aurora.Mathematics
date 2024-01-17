#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/ivec2.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/ivec3.h"
#include "../INC/Aurora/Mathematics/ivec4.h"

namespace Aurora::Mathematics
{
    ivec2 ivec2::zero()
    {
        return ivec2(0, 0);
    }

    ivec2 ivec2::one()
    {
        return ivec2(1, 1);
    }

    ivec2 ivec2::left()
    {
        return ivec2(-1, 0);
    }

    ivec2 ivec2::right()
    {
        return ivec2(1, 0);
    }

    ivec2 ivec2::down()
    {
        return ivec2(0, -1);
    }

    ivec2 ivec2::up()
    {
        return ivec2(0, 1);
    }

    float ivec2::length() const
    {
        return sqrt(lengthSquared());
    }

    float ivec2::lengthSquared() const
    {
        return (x * x) + (y * y);
    }

    ivec2 ivec2::xx() const
    {
        return ivec2(x, x);
    }

    void ivec2::xx(ivec2 value)
    {
        x = value.x;
        y = value.x;
    }

    ivec2 ivec2::xy() const
    {
        return ivec2(x, y);
    }

    void ivec2::xy(ivec2 value)
    {
        x = value.x;
        y = value.y;
    }

    ivec2 ivec2::yx() const
    {
        return ivec2(y, x);
    }

    void ivec2::yx(ivec2 value)
    {
        x = value.y;
        y = value.x;
    }

    ivec2 ivec2::yy() const
    {
        return ivec2(y, y);
    }

    void ivec2::yy(ivec2 value)
    {
        x = value.y;
        y = value.y;
    }

    ivec3 ivec2::xxx() const
    {
        return ivec3(x, x, x);
    }

    ivec3 ivec2::xxy() const
    {
        return ivec3(x, x, y);
    }

    ivec3 ivec2::xyx() const
    {
        return ivec3(x, y, x);
    }

    ivec3 ivec2::xyy() const
    {
        return ivec3(x, y, y);
    }

    ivec3 ivec2::yxx() const
    {
        return ivec3(y, x, x);
    }

    ivec3 ivec2::yxy() const
    {
        return ivec3(y, x, y);
    }

    ivec3 ivec2::yyx() const
    {
        return ivec3(y, y, x);
    }

    ivec3 ivec2::yyy() const
    {
        return ivec3(y, y, y);
    }

    ivec4 ivec2::xxxx() const
    {
        return ivec4(x, x, x, x);
    }

    ivec4 ivec2::xxxy() const
    {
        return ivec4(x, x, x, y);
    }

    ivec4 ivec2::xxyx() const
    {
        return ivec4(x, x, y, x);
    }

    ivec4 ivec2::xxyy() const
    {
        return ivec4(x, x, y, y);
    }

    ivec4 ivec2::xyxx() const
    {
        return ivec4(x, y, x, x);
    }

    ivec4 ivec2::xyxy() const
    {
        return ivec4(x, y, x, y);
    }

    ivec4 ivec2::xyyx() const
    {
        return ivec4(x, y, y, x);
    }

    ivec4 ivec2::xyyy() const
    {
        return ivec4(x, y, y, y);
    }

    ivec4 ivec2::yxxx() const
    {
        return ivec4(y, x, x, x);
    }

    ivec4 ivec2::yxxy() const
    {
        return ivec4(y, x, x, y);
    }

    ivec4 ivec2::yxyx() const
    {
        return ivec4(y, x, y, x);
    }

    ivec4 ivec2::yxyy() const
    {
        return ivec4(y, x, y, y);
    }

    ivec4 ivec2::yyxx() const
    {
        return ivec4(y, y, x, x);
    }

    ivec4 ivec2::yyxy() const
    {
        return ivec4(y, y, x, y);
    }

    ivec4 ivec2::yyyx() const
    {
        return ivec4(y, y, y, x);
    }

    ivec4 ivec2::yyyy() const
    {
        return ivec4(y, y, y, y);
    }

    ivec2::ivec2() : x(0), y(0) { }

    ivec2::ivec2(int x, int y) : x(x), y(y) { }

    ivec2 ivec2::abs(ivec2 value)
    {
        return ivec2(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y)
        );
    }

    ivec2 ivec2::ceilToInt(vec2 value)
    {
        return ivec2(
            Mathematics::ceilToInt(value.x),
            Mathematics::ceilToInt(value.y)
        );
    }

    ivec2 ivec2::clamp(ivec2 value, int minValue, int maxValue)
    {
        return ivec2(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue)
        );
    }

    ivec2 ivec2::clamp(ivec2 value, ivec2 minValue, ivec2 maxValue)
    {
        return ivec2(
            Mathematics::clamp(value.x, minValue.x, maxValue.y),
            Mathematics::clamp(value.y, minValue.y, maxValue.y)
        );
    }

    float ivec2::distance(ivec2 value1, ivec2 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float ivec2::distanceSquared(ivec2 value1, ivec2 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);

        return (dx * dx) + (dy * dy);
    }

    ivec2 ivec2::floorToInt(vec2 value)
    {
        return ivec2(
            Mathematics::floorToInt(value.x),
            Mathematics::floorToInt(value.y)
        );
    }

    ivec2 ivec2::max(ivec2 value1, ivec2 value2)
    {
        return ivec2(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y)
        );
    }

    ivec2 ivec2::min(ivec2 value1, ivec2 value2)
    {
        return ivec2(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y)
        );
    }

    ivec2 ivec2::perpendicular(ivec2 value)
    {
        return ivec2(-value.y, value.x);
    }

    ivec2 ivec2::roundToInt(vec2 value)
    {
        return ivec2(
            Mathematics::roundToInt(value.x),
            Mathematics::roundToInt(value.y)
        );
    }

    ivec2 ivec2::truncToInt(vec2 value)
    {
        return ivec2(
            Mathematics::truncToInt(value.x),
            Mathematics::truncToInt(value.y)
        );
    }

    ivec2 ivec2::operator-() const
    {
        return ivec2(-x, -y);
    }

    ivec2 ivec2::operator-(ivec2 other) const
    {
        return ivec2(
            x - other.x,
            y - other.y
        );
    }

    ivec2& ivec2::operator-=(ivec2 other)
    {
        x -= other.x;
        y -= other.y;

        return *this;
    }

    ivec2 ivec2::operator+() const
    {
        return ivec2(x, y);
    }

    ivec2 ivec2::operator+(ivec2 other) const
    {
        return ivec2(
            x + other.x,
            y + other.y
        );
    }

    ivec2& ivec2::operator+=(ivec2 other)
    {
        x += other.x;
        y += other.y;

        return *this;
    }

    ivec2 ivec2::operator*(ivec2 other) const
    {
        return ivec2(
            x * other.x,
            y * other.y
        );
    }

    ivec2& ivec2::operator*=(ivec2 other)
    {
        x *= other.x;
        y *= other.y;

        return *this;
    }

    ivec2 ivec2::operator*(int other) const
    {
        return ivec2(
            x * other,
            y * other
        );
    }

    ivec2& ivec2::operator*=(int other)
    {
        x *= other;
        y *= other;

        return *this;
    }

    ivec2 operator*(int lhs, ivec2 rhs)
    {
        return ivec2(
            lhs * rhs.x,
            lhs * rhs.y
        );
    }

    ivec2 ivec2::operator/(ivec2 other) const
    {
        return ivec2(
            x / other.x,
            y / other.y
        );
    }

    ivec2& ivec2::operator/=(ivec2 other)
    {
        x /= other.x;
        y /= other.y;

        return *this;
    }

    ivec2 ivec2::operator/(int other) const
    {
        return ivec2(
            x / other,
            y / other
        );
    }

    ivec2& ivec2::operator/=(int other)
    {
        x /= other;
        y /= other;

        return *this;
    }

    ivec2 operator/(int lhs, ivec2 rhs)
    {
        return ivec2(
            lhs / rhs.x,
            lhs / rhs.y
        );
    }

    ivec2 ivec2::operator%(ivec2 other) const
    {
        return ivec2(
            x % other.x,
            y % other.y
        );
    }

    ivec2& ivec2::operator%=(ivec2 other)
    {
        x %= other.x;
        y %= other.y;

        return *this;
    }

    ivec2 ivec2::operator%(int other) const
    {
        return ivec2(
            x % other,
            y % other
        );
    }

    ivec2& ivec2::operator%=(int other)
    {
        x %= other;
        y %= other;

        return *this;
    }

    ivec2 operator%(int lhs, ivec2 rhs)
    {
        return ivec2(
            lhs % rhs.x,
            lhs % rhs.y
        );
    }

    ivec2 operator&(int lhs, ivec2 rhs)
    {
        return ivec2(
            lhs & rhs.x,
            lhs & rhs.y
        );
    }

    ivec2 ivec2::operator&(ivec2 other) const
    {
        return ivec2(
            x & other.x,
            y & other.y
        );
    }

    ivec2& ivec2::operator&=(ivec2 other)
    {
        x &= other.x;
        y &= other.y;

        return *this;
    }

    ivec2 ivec2::operator&(int other) const
    {
        return ivec2(
            x & other,
            y & other
        );
    }

    ivec2& ivec2::operator&=(int other)
    {
        x &= other;
        y &= other;

        return *this;
    }

    bool ivec2::operator==(ivec2 other) const
    {
        return x == other.x && y == other.y;
    }

    bool ivec2::operator!=(ivec2 other) const
    {
        return !(*this == other);
    }

    ivec2::operator ivec3() const
    {
        return ivec3(x, y, 0);
    }

    ivec2::operator ivec4() const
    {
        return ivec4(x, y, 0, 0);
    }

    ivec2::operator vec2() const
    {
        return vec2(x, y);
    }

    ivec2::operator vec3() const
    {
        return vec3(x, y, 0);
    }

    ivec2::operator vec4() const
    {
        return vec4(x, y, 0, 0);
    }
}
