#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/ivec3.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/ivec4.h"
#include <stdexcept>
#include <string>

namespace Aurora::Mathematics
{
    ivec3 ivec3::zero()
    {
        return ivec3(0, 0, 0);
    }

    ivec3 ivec3::one()
    {
        return ivec3(1, 1, 1);
    }

    ivec3 ivec3::left()
    {
        return ivec3(-1, 0, 0);
    }

    ivec3 ivec3::right()
    {
        return ivec3(1, 0, 0);
    }

    ivec3 ivec3::down()
    {
        return ivec3(0, -1, 0);
    }

    ivec3 ivec3::up()
    {
        return ivec3(0, 1, 0);
    }

    ivec3 ivec3::back()
    {
        return ivec3(0, 0, -1);
    }

    ivec3 ivec3::forward()
    {
        return ivec3(0, 0, 1);
    }

    float ivec3::length() const
    {
        return sqrt(lengthSquared());
    }

    float ivec3::lengthSquared() const
    {
        return (x * x) + (y * y) + (z * z);
    }

    ivec2 ivec3::xx() const
    {
        return ivec2(x, x);
    }

    ivec2 ivec3::xy() const
    {
        return ivec2(x, y);
    }

    ivec2 ivec3::xz() const
    {
        return ivec2(x, z);
    }

    ivec2 ivec3::yx() const
    {
        return ivec2(y, x);
    }

    ivec2 ivec3::yy() const
    {
        return ivec2(y, y);
    }

    ivec2 ivec3::yz() const
    {
        return ivec2(y, z);
    }

    ivec2 ivec3::zx() const
    {
        return ivec2(z, x);
    }

    ivec2 ivec3::zy() const
    {
        return ivec2(z, y);
    }

    ivec2 ivec3::zz() const
    {
        return ivec2(z, z);
    }

    ivec3 ivec3::xxx() const
    {
        return ivec3(x, x, x);
    }

    void ivec3::xxx(ivec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
    }

    ivec3 ivec3::xxy() const
    {
        return ivec3(x, x, y);
    }

    void ivec3::xxy(ivec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
    }

    ivec3 ivec3::xxz() const
    {
        return ivec3(x, x, z);
    }

    void ivec3::xxz(ivec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
    }

    ivec3 ivec3::xyx() const
    {
        return ivec3(x, y, x);
    }

    void ivec3::xyx(ivec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
    }

    ivec3 ivec3::xyy() const
    {
        return ivec3(x, y, y);
    }

    void ivec3::xyy(ivec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
    }

    ivec3 ivec3::xyz() const
    {
        return ivec3(x, y, z);
    }

    void ivec3::xyz(ivec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
    }

    ivec3 ivec3::xzx() const
    {
        return ivec3(x, z, x);
    }

    void ivec3::xzx(ivec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
    }

    ivec3 ivec3::xzy() const
    {
        return ivec3(x, z, y);
    }

    void ivec3::xzy(ivec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
    }

    ivec3 ivec3::xzz() const
    {
        return ivec3(x, z, z);
    }

    void ivec3::xzz(ivec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
    }

    ivec3 ivec3::yxx() const
    {
        return ivec3(y, x, x);
    }

    void ivec3::yxx(ivec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
    }

    ivec3 ivec3::yxy() const
    {
        return ivec3(y, x, y);
    }

    void ivec3::yxy(ivec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
    }

    ivec3 ivec3::yxz() const
    {
        return ivec3(y, x, z);
    }

    void ivec3::yxz(ivec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
    }

    ivec3 ivec3::yyx() const
    {
        return ivec3(y, y, x);
    }

    void ivec3::yyx(ivec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
    }

    ivec3 ivec3::yyy() const
    {
        return ivec3(y, y, y);
    }

    void ivec3::yyy(ivec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
    }

    ivec3 ivec3::yyz() const
    {
        return ivec3(y, y, z);
    }

    void ivec3::yyz(ivec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
    }

    ivec3 ivec3::yzx() const
    {
        return ivec3(y, z, x);
    }

    void ivec3::yzx(ivec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
    }

    ivec3 ivec3::yzy() const
    {
        return ivec3(y, z, y);
    }

    void ivec3::yzy(ivec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
    }

    ivec3 ivec3::yzz() const
    {
        return ivec3(y, z, z);
    }

    void ivec3::yzz(ivec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
    }

    ivec3 ivec3::zxx() const
    {
        return ivec3(z, x, x);
    }

    void ivec3::zxx(ivec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
    }

    ivec3 ivec3::zxy() const
    {
        return ivec3(z, x, y);
    }

    void ivec3::zxy(ivec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
    }

    ivec3 ivec3::zxz() const
    {
        return ivec3(z, x, z);
    }

    void ivec3::zxz(ivec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
    }

    ivec3 ivec3::zyx() const
    {
        return ivec3(z, y, x);
    }

    void ivec3::zyx(ivec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
    }

    ivec3 ivec3::zyy() const
    {
        return ivec3(z, y, y);
    }

    void ivec3::zyy(ivec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
    }

    ivec3 ivec3::zyz() const
    {
        return ivec3(z, y, z);
    }

    void ivec3::zyz(ivec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
    }

    ivec3 ivec3::zzx() const
    {
        return ivec3(z, z, x);
    }

    void ivec3::zzx(ivec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
    }

    ivec3 ivec3::zzy() const
    {
        return ivec3(z, z, y);
    }

    void ivec3::zzy(ivec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
    }

    ivec3 ivec3::zzz() const
    {
        return ivec3(z, z, z);
    }

    void ivec3::zzz(ivec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
    }

    ivec4 ivec3::xxxx() const
    {
        return ivec4(x, x, x, x);
    }

    ivec4 ivec3::xxxy() const
    {
        return ivec4(x, x, x, y);
    }

    ivec4 ivec3::xxxz() const
    {
        return ivec4(x, x, x, z);
    }

    ivec4 ivec3::xxyx() const
    {
        return ivec4(x, x, y, x);
    }

    ivec4 ivec3::xxyy() const
    {
        return ivec4(x, x, y, y);
    }

    ivec4 ivec3::xxyz() const
    {
        return ivec4(x, x, y, z);
    }

    ivec4 ivec3::xxzx() const
    {
        return ivec4(x, x, z, x);
    }

    ivec4 ivec3::xxzy() const
    {
        return ivec4(x, x, z, y);
    }

    ivec4 ivec3::xxzz() const
    {
        return ivec4(x, x, z, z);
    }

    ivec4 ivec3::xyxx() const
    {
        return ivec4(x, y, x, x);
    }

    ivec4 ivec3::xyxy() const
    {
        return ivec4(x, y, x, y);
    }

    ivec4 ivec3::xyxz() const
    {
        return ivec4(x, y, x, z);
    }

    ivec4 ivec3::xyyx() const
    {
        return ivec4(x, y, y, x);
    }

    ivec4 ivec3::xyyy() const
    {
        return ivec4(x, y, y, y);
    }

    ivec4 ivec3::xyyz() const
    {
        return ivec4(x, y, y, z);
    }

    ivec4 ivec3::xyzx() const
    {
        return ivec4(x, y, z, x);
    }

    ivec4 ivec3::xyzy() const
    {
        return ivec4(x, y, z, y);
    }

    ivec4 ivec3::xyzz() const
    {
        return ivec4(x, y, z, z);
    }

    ivec4 ivec3::xzxx() const
    {
        return ivec4(x, z, x, x);
    }

    ivec4 ivec3::xzxy() const
    {
        return ivec4(x, z, x, y);
    }

    ivec4 ivec3::xzxz() const
    {
        return ivec4(x, z, x, z);
    }

    ivec4 ivec3::xzyx() const
    {
        return ivec4(x, z, y, x);
    }

    ivec4 ivec3::xzyy() const
    {
        return ivec4(x, z, y, y);
    }

    ivec4 ivec3::xzyz() const
    {
        return ivec4(x, z, y, z);
    }

    ivec4 ivec3::xzzx() const
    {
        return ivec4(x, z, z, x);
    }

    ivec4 ivec3::xzzy() const
    {
        return ivec4(x, z, z, y);
    }

    ivec4 ivec3::xzzz() const
    {
        return ivec4(x, z, z, z);
    }

    ivec4 ivec3::yxxx() const
    {
        return ivec4(y, x, x, x);
    }

    ivec4 ivec3::yxxy() const
    {
        return ivec4(y, x, x, y);
    }

    ivec4 ivec3::yxxz() const
    {
        return ivec4(y, x, x, z);
    }

    ivec4 ivec3::yxyx() const
    {
        return ivec4(y, x, y, x);
    }

    ivec4 ivec3::yxyy() const
    {
        return ivec4(y, x, y, y);
    }

    ivec4 ivec3::yxyz() const
    {
        return ivec4(y, x, y, z);
    }

    ivec4 ivec3::yxzx() const
    {
        return ivec4(y, x, z, x);
    }

    ivec4 ivec3::yxzy() const
    {
        return ivec4(y, x, z, y);
    }

    ivec4 ivec3::yxzz() const
    {
        return ivec4(y, x, z, z);
    }

    ivec4 ivec3::yyxx() const
    {
        return ivec4(y, y, x, x);
    }

    ivec4 ivec3::yyxy() const
    {
        return ivec4(y, y, x, y);
    }

    ivec4 ivec3::yyxz() const
    {
        return ivec4(y, y, x, z);
    }

    ivec4 ivec3::yyyx() const
    {
        return ivec4(y, y, y, x);
    }

    ivec4 ivec3::yyyy() const
    {
        return ivec4(y, y, y, y);
    }

    ivec4 ivec3::yyyz() const
    {
        return ivec4(y, y, y, z);
    }

    ivec4 ivec3::yyzx() const
    {
        return ivec4(y, y, z, x);
    }

    ivec4 ivec3::yyzy() const
    {
        return ivec4(y, y, z, y);
    }

    ivec4 ivec3::yyzz() const
    {
        return ivec4(y, y, z, z);
    }

    ivec4 ivec3::yzxx() const
    {
        return ivec4(y, z, x, x);
    }

    ivec4 ivec3::yzxy() const
    {
        return ivec4(y, z, x, y);
    }

    ivec4 ivec3::yzxz() const
    {
        return ivec4(y, z, x, z);
    }

    ivec4 ivec3::yzyx() const
    {
        return ivec4(y, z, y, x);
    }

    ivec4 ivec3::yzyy() const
    {
        return ivec4(y, z, y, y);
    }

    ivec4 ivec3::yzyz() const
    {
        return ivec4(y, z, y, z);
    }

    ivec4 ivec3::yzzx() const
    {
        return ivec4(y, z, z, x);
    }

    ivec4 ivec3::yzzy() const
    {
        return ivec4(y, z, z, y);
    }

    ivec4 ivec3::yzzz() const
    {
        return ivec4(y, z, z, z);
    }

    ivec4 ivec3::zxxx() const
    {
        return ivec4(z, x, x, x);
    }

    ivec4 ivec3::zxxy() const
    {
        return ivec4(z, x, x, y);
    }

    ivec4 ivec3::zxxz() const
    {
        return ivec4(z, x, x, z);
    }

    ivec4 ivec3::zxyx() const
    {
        return ivec4(z, x, y, x);
    }

    ivec4 ivec3::zxyy() const
    {
        return ivec4(z, x, y, y);
    }

    ivec4 ivec3::zxyz() const
    {
        return ivec4(z, x, y, z);
    }

    ivec4 ivec3::zxzx() const
    {
        return ivec4(z, x, z, x);
    }

    ivec4 ivec3::zxzy() const
    {
        return ivec4(z, x, z, y);
    }

    ivec4 ivec3::zxzz() const
    {
        return ivec4(z, x, z, z);
    }

    ivec4 ivec3::zyxx() const
    {
        return ivec4(z, y, x, x);
    }

    ivec4 ivec3::zyxy() const
    {
        return ivec4(z, y, x, y);
    }

    ivec4 ivec3::zyxz() const
    {
        return ivec4(z, y, x, z);
    }

    ivec4 ivec3::zyyx() const
    {
        return ivec4(z, y, y, x);
    }

    ivec4 ivec3::zyyy() const
    {
        return ivec4(z, y, y, y);
    }

    ivec4 ivec3::zyyz() const
    {
        return ivec4(z, y, y, z);
    }

    ivec4 ivec3::zyzx() const
    {
        return ivec4(z, y, z, x);
    }

    ivec4 ivec3::zyzy() const
    {
        return ivec4(z, y, z, y);
    }

    ivec4 ivec3::zyzz() const
    {
        return ivec4(z, y, z, z);
    }

    ivec4 ivec3::zzxx() const
    {
        return ivec4(z, z, x, x);
    }

    ivec4 ivec3::zzxy() const
    {
        return ivec4(z, z, x, y);
    }

    ivec4 ivec3::zzxz() const
    {
        return ivec4(z, z, x, z);
    }

    ivec4 ivec3::zzyx() const
    {
        return ivec4(z, z, y, x);
    }

    ivec4 ivec3::zzyy() const
    {
        return ivec4(z, z, y, y);
    }

    ivec4 ivec3::zzyz() const
    {
        return ivec4(z, z, y, z);
    }

    ivec4 ivec3::zzzx() const
    {
        return ivec4(z, z, z, x);
    }

    ivec4 ivec3::zzzy() const
    {
        return ivec4(z, z, z, y);
    }

    ivec4 ivec3::zzzz() const
    {
        return ivec4(z, z, z, z);
    }

    ivec3::ivec3() : x(0), y(0), z(0) { }

    ivec3::ivec3(int x, int y, int z) : x(x), y(y), z(z) { }

    ivec3 ivec3::abs(ivec3 value)
    {
        return ivec3(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y),
            Mathematics::abs(value.z)
        );
    }

    ivec3 ivec3::ceilToInt(vec3 value)
    {
        return ivec3(
            Mathematics::ceilToInt(value.x),
            Mathematics::ceilToInt(value.y),
            Mathematics::ceilToInt(value.z)
        );
    }

    ivec3 ivec3::clamp(ivec3 value, int minValue, int maxValue)
    {
        return ivec3(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue),
            Mathematics::clamp(value.z, minValue, maxValue)
        );
    }

    ivec3 ivec3::clamp(ivec3 value, ivec3 minValue, ivec3 maxValue)
    {
        return ivec3(
            Mathematics::clamp(value.x, minValue.x, maxValue.x),
            Mathematics::clamp(value.y, minValue.y, maxValue.y),
            Mathematics::clamp(value.z, minValue.z, maxValue.z)
        );
    }

    float ivec3::distance(ivec3 value1, ivec3 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float ivec3::distanceSquared(ivec3 value1, ivec3 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);
        float dz = Mathematics::distance(value1.z, value2.z);

        return (dx * dx) + (dy * dy) + (dz * dz);
    }

    ivec3 ivec3::floorToInt(vec3 value)
    {
        return ivec3(
            Mathematics::floorToInt(value.x),
            Mathematics::floorToInt(value.y),
            Mathematics::floorToInt(value.z)
        );
    }

    ivec3 ivec3::max(ivec3 value1, ivec3 value2)
    {
        return ivec3(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y),
            Mathematics::max(value1.z, value2.z)
        );
    }

    ivec3 ivec3::min(ivec3 value1, ivec3 value2)
    {
        return ivec3(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y),
            Mathematics::min(value1.z, value2.z)
        );
    }

    ivec3 ivec3::roundToInt(vec3 value)
    {
        return ivec3(
            Mathematics::roundToInt(value.x),
            Mathematics::roundToInt(value.y),
            Mathematics::roundToInt(value.z)
        );
    }

    ivec3 ivec3::truncToInt(vec3 value)
    {
        return ivec3(
            Mathematics::truncToInt(value.x),
            Mathematics::truncToInt(value.y),
            Mathematics::truncToInt(value.z)
        );
    }

    ivec3 ivec3::operator-() const
    {
        return ivec3(-x, -y, -z);
    }

    ivec3 ivec3::operator-(ivec3 other) const
    {
        return ivec3(
            x - other.x,
            y - other.y,
            z - other.z
        );
    }

    ivec3& ivec3::operator-=(ivec3 other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;

        return *this;
    }

    ivec3 ivec3::operator+() const
    {
        return ivec3(x, y, z);
    }

    ivec3 ivec3::operator+(ivec3 other) const
    {
        return ivec3(
            x + other.x,
            y + other.y,
            z + other.z
        );
    }

    ivec3& ivec3::operator+=(ivec3 other)
    {
        x += other.x;
        y += other.y;
        z += other.z;

        return *this;
    }

    ivec3 ivec3::operator*(ivec3 other) const
    {
        return ivec3(
            x * other.x,
            y * other.y,
            z * other.z
        );
    }

    ivec3& ivec3::operator*=(ivec3 other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;

        return *this;
    }

    ivec3 ivec3::operator*(int other) const
    {
        return ivec3(
            x * other,
            y * other,
            z * other
        );
    }

    ivec3& ivec3::operator*=(int other)
    {
        x *= other;
        y *= other;
        z *= other;

        return *this;
    }

    ivec3 operator*(int lhs, ivec3 rhs)
    {
        return ivec3(
            lhs * rhs.x,
            lhs * rhs.y,
            lhs * rhs.z
        );
    }

    ivec3 ivec3::operator/(ivec3 other) const
    {
        return ivec3(
            x / other.x,
            y / other.y,
            z / other.z
        );
    }

    ivec3& ivec3::operator/=(ivec3 other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;

        return *this;
    }

    ivec3 ivec3::operator/(int other) const
    {
        return ivec3(
            x / other,
            y / other,
            z / other
        );
    }

    ivec3& ivec3::operator/=(int other)
    {
        x /= other;
        y /= other;
        z /= other;

        return *this;
    }

    ivec3 operator/(int lhs, ivec3 rhs)
    {
        return ivec3(
            lhs / rhs.x,
            lhs / rhs.y,
            lhs / rhs.z
        );
    }

    ivec3 ivec3::operator%(ivec3 other) const
    {
        return ivec3(
            x % other.x,
            y % other.y,
            z % other.z
        );
    }

    ivec3& ivec3::operator%=(ivec3 other)
    {
        x %= other.x;
        y %= other.y;
        z %= other.z;

        return *this;
    }

    ivec3 ivec3::operator%(int other) const
    {
        return ivec3(
            x % other,
            y % other,
            z % other
        );
    }

    ivec3& ivec3::operator%=(int other)
    {
        x %= other;
        y %= other;
        z %= other;

        return *this;
    }

    ivec3 operator%(int lhs, ivec3 rhs)
    {
        return ivec3(
            lhs % rhs.x,
            lhs % rhs.y,
            lhs % rhs.z
        );
    }

    ivec3 operator&(int lhs, ivec3 rhs)
    {
        return ivec3(
            lhs & rhs.x,
            lhs & rhs.y,
            lhs & rhs.z
        );
    }

    ivec3 ivec3::operator&(ivec3 other) const
    {
        return ivec3(
            x & other.x,
            y & other.y,
            z & other.z
        );
    }

    ivec3& ivec3::operator&=(ivec3 other)
    {
        x &= other.x;
        y &= other.y;
        z &= other.z;

        return *this;
    }

    ivec3 ivec3::operator&(int other) const
    {
        return ivec3(
            x & other,
            y & other,
            z & other
        );
    }

    ivec3& ivec3::operator&=(int other)
    {
        x &= other;
        y &= other;
        z &= other;

        return *this;
    }

    bool ivec3::operator==(ivec3 other) const
    {
        return x == other.x && y == other.y && z == other.z;
    }

    bool ivec3::operator!=(ivec3 other) const
    {
        return !(*this == other);
    }

    int ivec3::operator[](int idx) const
    {
        if (idx == 0)
        {
            return x;
        }
        else if (idx == 1)
        {
            return y;
        }
        else if (idx == 2)
        {
            return z;
        }
        else
        {
            throw std::out_of_range("The requested position does not exist in the vector (" + std::to_string(idx) + ").");
        }
    }

    int& ivec3::operator[](int idx)
    {
        if (idx == 0)
        {
            return x;
        }
        else if (idx == 1)
        {
            return y;
        }
        else if (idx == 2)
        {
            return z;
        }
        else
        {
            throw std::out_of_range("The requested position does not exist in the vector (" + std::to_string(idx) + ").");
        }
    }

    ivec3::operator ivec2() const
    {
        return ivec2(x, y);
    }

    ivec3::operator ivec4() const
    {
        return ivec4(x, y, z, 0);
    }

    ivec3::operator vec2() const
    {
        return vec2(x, y);
    }

    ivec3::operator vec3() const
    {
        return vec3(x, y, z);
    }

    ivec3::operator vec4() const
    {
        return vec4(x, y, z, 0);
    }
}
