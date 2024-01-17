#include "../INC/Aurora/Mathematics/vec3.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/ivec3.h"
#include "../INC/Aurora/Mathematics/ivec4.h"

namespace Aurora::Mathematics
{
    vec3 vec3::zero()
    {
        return vec3(0, 0, 0);
    }

    vec3 vec3::one()
    {
        return vec3(1, 1, 1);
    }

    vec3 vec3::left()
    {
        return vec3(-1, 0, 0);
    }

    vec3 vec3::right()
    {
        return vec3(1, 0, 0);
    }

    vec3 vec3::down()
    {
        return vec3(0, -1, 0);
    }

    vec3 vec3::up()
    {
        return vec3(0, 1, 0);
    }

    vec3 vec3::back()
    {
        return vec3(0, 0, -1);
    }

    vec3 vec3::forward()
    {
        return vec3(0, 0, 1);
    }

    float vec3::length() const
    {
        return sqrt(lengthSquared());
    }

    float vec3::lengthSquared() const
    {
        return (x * x) + (y * y) + (z * z);
    }

    vec3 vec3::normalized() const
    {
        return normalize(*this);
    }

    vec2 vec3::xx() const
    {
        return vec2(x, x);
    }

    vec2 vec3::xy() const
    {
        return vec2(x, y);
    }

    vec2 vec3::xz() const
    {
        return vec2(x, z);
    }

    vec2 vec3::yx() const
    {
        return vec2(y, x);
    }

    vec2 vec3::yy() const
    {
        return vec2(y, y);
    }

    vec2 vec3::yz() const
    {
        return vec2(y, z);
    }

    vec2 vec3::zx() const
    {
        return vec2(z, x);
    }

    vec2 vec3::zy() const
    {
        return vec2(z, y);
    }

    vec2 vec3::zz() const
    {
        return vec2(z, z);
    }

    vec3 vec3::xxx() const
    {
        return vec3(x, x, x);
    }

    void vec3::xxx(vec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
    }

    vec3 vec3::xxy() const
    {
        return vec3(x, x, y);
    }

    void vec3::xxy(vec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
    }

    vec3 vec3::xxz() const
    {
        return vec3(x, x, z);
    }

    void vec3::xxz(vec3 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
    }

    vec3 vec3::xyx() const
    {
        return vec3(x, y, x);
    }

    void vec3::xyx(vec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
    }

    vec3 vec3::xyy() const
    {
        return vec3(x, y, y);
    }

    void vec3::xyy(vec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
    }

    vec3 vec3::xyz() const
    {
        return vec3(x, y, z);
    }

    void vec3::xyz(vec3 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
    }

    vec3 vec3::xzx() const
    {
        return vec3(x, z, x);
    }

    void vec3::xzx(vec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
    }

    vec3 vec3::xzy() const
    {
        return vec3(x, z, y);
    }

    void vec3::xzy(vec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
    }

    vec3 vec3::xzz() const
    {
        return vec3(x, z, z);
    }

    void vec3::xzz(vec3 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
    }

    vec3 vec3::yxx() const
    {
        return vec3(y, x, x);
    }

    void vec3::yxx(vec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
    }

    vec3 vec3::yxy() const
    {
        return vec3(y, x, y);
    }

    void vec3::yxy(vec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
    }

    vec3 vec3::yxz() const
    {
        return vec3(y, x, z);
    }

    void vec3::yxz(vec3 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
    }

    vec3 vec3::yyx() const
    {
        return vec3(y, y, x);
    }

    void vec3::yyx(vec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
    }

    vec3 vec3::yyy() const
    {
        return vec3(y, y, y);
    }

    void vec3::yyy(vec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
    }

    vec3 vec3::yyz() const
    {
        return vec3(y, y, z);
    }

    void vec3::yyz(vec3 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
    }

    vec3 vec3::yzx() const
    {
        return vec3(y, z, x);
    }

    void vec3::yzx(vec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
    }

    vec3 vec3::yzy() const
    {
        return vec3(y, z, y);
    }

    void vec3::yzy(vec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
    }

    vec3 vec3::yzz() const
    {
        return vec3(y, z, z);
    }

    void vec3::yzz(vec3 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
    }

    vec3 vec3::zxx() const
    {
        return vec3(z, x, x);
    }

    void vec3::zxx(vec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
    }

    vec3 vec3::zxy() const
    {
        return vec3(z, x, y);
    }

    void vec3::zxy(vec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
    }

    vec3 vec3::zxz() const
    {
        return vec3(z, x, z);
    }

    void vec3::zxz(vec3 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
    }

    vec3 vec3::zyx() const
    {
        return vec3(z, y, x);
    }

    void vec3::zyx(vec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
    }

    vec3 vec3::zyy() const
    {
        return vec3(z, y, y);
    }

    void vec3::zyy(vec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
    }

    vec3 vec3::zyz() const
    {
        return vec3(z, y, z);
    }

    void vec3::zyz(vec3 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
    }

    vec3 vec3::zzx() const
    {
        return vec3(z, z, x);
    }

    void vec3::zzx(vec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
    }

    vec3 vec3::zzy() const
    {
        return vec3(z, z, y);
    }

    void vec3::zzy(vec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
    }

    vec3 vec3::zzz() const
    {
        return vec3(z, z, z);
    }

    void vec3::zzz(vec3 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
    }

    vec4 vec3::xxxx() const
    {
        return vec4(x, x, x, x);
    }

    vec4 vec3::xxxy() const
    {
        return vec4(x, x, x, y);
    }

    vec4 vec3::xxxz() const
    {
        return vec4(x, x, x, z);
    }

    vec4 vec3::xxyx() const
    {
        return vec4(x, x, y, x);
    }

    vec4 vec3::xxyy() const
    {
        return vec4(x, x, y, y);
    }

    vec4 vec3::xxyz() const
    {
        return vec4(x, x, y, z);
    }

    vec4 vec3::xxzx() const
    {
        return vec4(x, x, z, x);
    }

    vec4 vec3::xxzy() const
    {
        return vec4(x, x, z, y);
    }

    vec4 vec3::xxzz() const
    {
        return vec4(x, x, z, z);
    }

    vec4 vec3::xyxx() const
    {
        return vec4(x, y, x, x);
    }

    vec4 vec3::xyxy() const
    {
        return vec4(x, y, x, y);
    }

    vec4 vec3::xyxz() const
    {
        return vec4(x, y, x, z);
    }

    vec4 vec3::xyyx() const
    {
        return vec4(x, y, y, x);
    }

    vec4 vec3::xyyy() const
    {
        return vec4(x, y, y, y);
    }

    vec4 vec3::xyyz() const
    {
        return vec4(x, y, y, z);
    }

    vec4 vec3::xyzx() const
    {
        return vec4(x, y, z, x);
    }

    vec4 vec3::xyzy() const
    {
        return vec4(x, y, z, y);
    }

    vec4 vec3::xyzz() const
    {
        return vec4(x, y, z, z);
    }

    vec4 vec3::xzxx() const
    {
        return vec4(x, z, x, x);
    }

    vec4 vec3::xzxy() const
    {
        return vec4(x, z, x, y);
    }

    vec4 vec3::xzxz() const
    {
        return vec4(x, z, x, z);
    }

    vec4 vec3::xzyx() const
    {
        return vec4(x, z, y, x);
    }

    vec4 vec3::xzyy() const
    {
        return vec4(x, z, y, y);
    }

    vec4 vec3::xzyz() const
    {
        return vec4(x, z, y, z);
    }

    vec4 vec3::xzzx() const
    {
        return vec4(x, z, z, x);
    }

    vec4 vec3::xzzy() const
    {
        return vec4(x, z, z, y);
    }

    vec4 vec3::xzzz() const
    {
        return vec4(x, z, z, z);
    }

    vec4 vec3::yxxx() const
    {
        return vec4(y, x, x, x);
    }

    vec4 vec3::yxxy() const
    {
        return vec4(y, x, x, y);
    }

    vec4 vec3::yxxz() const
    {
        return vec4(y, x, x, z);
    }

    vec4 vec3::yxyx() const
    {
        return vec4(y, x, y, x);
    }

    vec4 vec3::yxyy() const
    {
        return vec4(y, x, y, y);
    }

    vec4 vec3::yxyz() const
    {
        return vec4(y, x, y, z);
    }

    vec4 vec3::yxzx() const
    {
        return vec4(y, x, z, x);
    }

    vec4 vec3::yxzy() const
    {
        return vec4(y, x, z, y);
    }

    vec4 vec3::yxzz() const
    {
        return vec4(y, x, z, z);
    }

    vec4 vec3::yyxx() const
    {
        return vec4(y, y, x, x);
    }

    vec4 vec3::yyxy() const
    {
        return vec4(y, y, x, y);
    }

    vec4 vec3::yyxz() const
    {
        return vec4(y, y, x, z);
    }

    vec4 vec3::yyyx() const
    {
        return vec4(y, y, y, x);
    }

    vec4 vec3::yyyy() const
    {
        return vec4(y, y, y, y);
    }

    vec4 vec3::yyyz() const
    {
        return vec4(y, y, y, z);
    }

    vec4 vec3::yyzx() const
    {
        return vec4(y, y, z, x);
    }

    vec4 vec3::yyzy() const
    {
        return vec4(y, y, z, y);
    }

    vec4 vec3::yyzz() const
    {
        return vec4(y, y, z, z);
    }

    vec4 vec3::yzxx() const
    {
        return vec4(y, z, x, x);
    }

    vec4 vec3::yzxy() const
    {
        return vec4(y, z, x, y);
    }

    vec4 vec3::yzxz() const
    {
        return vec4(y, z, x, z);
    }

    vec4 vec3::yzyx() const
    {
        return vec4(y, z, y, x);
    }

    vec4 vec3::yzyy() const
    {
        return vec4(y, z, y, y);
    }

    vec4 vec3::yzyz() const
    {
        return vec4(y, z, y, z);
    }

    vec4 vec3::yzzx() const
    {
        return vec4(y, z, z, x);
    }

    vec4 vec3::yzzy() const
    {
        return vec4(y, z, z, y);
    }

    vec4 vec3::yzzz() const
    {
        return vec4(y, z, z, z);
    }

    vec4 vec3::zxxx() const
    {
        return vec4(z, x, x, x);
    }

    vec4 vec3::zxxy() const
    {
        return vec4(z, x, x, y);
    }

    vec4 vec3::zxxz() const
    {
        return vec4(z, x, x, z);
    }

    vec4 vec3::zxyx() const
    {
        return vec4(z, x, y, x);
    }

    vec4 vec3::zxyy() const
    {
        return vec4(z, x, y, y);
    }

    vec4 vec3::zxyz() const
    {
        return vec4(z, x, y, z);
    }

    vec4 vec3::zxzx() const
    {
        return vec4(z, x, z, x);
    }

    vec4 vec3::zxzy() const
    {
        return vec4(z, x, z, y);
    }

    vec4 vec3::zxzz() const
    {
        return vec4(z, x, z, z);
    }

    vec4 vec3::zyxx() const
    {
        return vec4(z, y, x, x);
    }

    vec4 vec3::zyxy() const
    {
        return vec4(z, y, x, y);
    }

    vec4 vec3::zyxz() const
    {
        return vec4(z, y, x, z);
    }

    vec4 vec3::zyyx() const
    {
        return vec4(z, y, y, x);
    }

    vec4 vec3::zyyy() const
    {
        return vec4(z, y, y, y);
    }

    vec4 vec3::zyyz() const
    {
        return vec4(z, y, y, z);
    }

    vec4 vec3::zyzx() const
    {
        return vec4(z, y, z, x);
    }

    vec4 vec3::zyzy() const
    {
        return vec4(z, y, z, y);
    }

    vec4 vec3::zyzz() const
    {
        return vec4(z, y, z, z);
    }

    vec4 vec3::zzxx() const
    {
        return vec4(z, z, x, x);
    }

    vec4 vec3::zzxy() const
    {
        return vec4(z, z, x, y);
    }

    vec4 vec3::zzxz() const
    {
        return vec4(z, z, x, z);
    }

    vec4 vec3::zzyx() const
    {
        return vec4(z, z, y, x);
    }

    vec4 vec3::zzyy() const
    {
        return vec4(z, z, y, y);
    }

    vec4 vec3::zzyz() const
    {
        return vec4(z, z, y, z);
    }

    vec4 vec3::zzzx() const
    {
        return vec4(z, z, z, x);
    }

    vec4 vec3::zzzy() const
    {
        return vec4(z, z, z, y);
    }

    vec4 vec3::zzzz() const
    {
        return vec4(z, z, z, z);
    }

    vec3::vec3() : x(0), y(0), z(0) { }

    vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) { }

    vec3 vec3::abs(vec3 value)
    {
        return vec3(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y),
            Mathematics::abs(value.z)
        );
    }
    bool vec3::approximately(vec3 value1, vec3 value2)
    {
        return
            Mathematics::approximately(value1.x, value2.x) &&
            Mathematics::approximately(value1.y, value2.y) &&
            Mathematics::approximately(value1.z, value2.z);
    }

    vec3 vec3::barycentric(vec3 value1, vec3 value2, vec3 value3, float amount1, float amount2)
    {
        return vec3(
            Mathematics::barycentric(value1.x, value2.x, value3.x, amount1, amount2),
            Mathematics::barycentric(value1.y, value2.y, value3.y, amount1, amount2),
            Mathematics::barycentric(value1.z, value2.z, value3.z, amount1, amount2)
        );
    }

    vec3 vec3::catmullRom(vec3 value1, vec3 value2, vec3 value3, vec3 value4, float amount)
    {
        return vec3(
            Mathematics::catmullRom(value1.x, value2.x, value3.x, value4.x, amount),
            Mathematics::catmullRom(value1.y, value2.y, value3.y, value4.y, amount),
            Mathematics::catmullRom(value1.z, value2.z, value3.z, value4.z, amount)
        );
    }

    vec3 vec3::ceil(vec3 value)
    {
        return vec3(
            Mathematics::ceil(value.x),
            Mathematics::ceil(value.y),
            Mathematics::ceil(value.z)
        );
    }

    vec3 vec3::clamp(vec3 value, float minValue, float maxValue)
    {
        return vec3(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue),
            Mathematics::clamp(value.z, minValue, maxValue)
        );
    }

    vec3 vec3::clamp(vec3 value, vec3 minValue, vec3 maxValue)
    {
        return vec3(
            Mathematics::clamp(value.x, minValue.x, maxValue.x),
            Mathematics::clamp(value.y, minValue.y, maxValue.y),
            Mathematics::clamp(value.z, minValue.z, maxValue.z)
        );
    }

    vec3 vec3::cross(vec3 value1, vec3 value2)
    {
        return vec3(
            value1.y * value2.z - value1.z * value2.y,
            value1.z * value2.x - value1.x * value2.z,
            value1.x * value2.y - value1.y * value2.x
        );
    }

    float vec3::distance(vec3 value1, vec3 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float vec3::distanceSquared(vec3 value1, vec3 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);
        float dz = Mathematics::distance(value1.z, value2.z);

        return (dx * dx) + (dy * dy) + (dz * dz);
    }

    float vec3::dot(vec3 value1, vec3 value2)
    {
        return (value1.x * value2.x) + (value1.y * value2.y) + (value1.z * value2.z);
    }

    vec3 vec3::floor(vec3 value)
    {
        return vec3(
            Mathematics::floor(value.x),
            Mathematics::floor(value.y),
            Mathematics::floor(value.z)
        );
    }

    vec3 vec3::frac(vec3 value)
    {
        return value - floor(value);
    }

    vec3 vec3::hermite(vec3 value1, vec3 tangent1, vec3 value2, vec3 tangent2, float amount)
    {
        return vec3(
            Mathematics::hermite(value1.x, tangent1.x, value2.x, tangent2.x, amount),
            Mathematics::hermite(value1.y, tangent1.y, value2.y, tangent2.y, amount),
            Mathematics::hermite(value1.z, tangent1.z, value2.z, tangent2.z, amount)
        );
    }

    vec3 vec3::lerp(vec3 value1, vec3 value2, float amount)
    {
        return lerpUnclamped(value1, value2, clamp01(amount));
    }

    vec3 vec3::lerpUnclamped(vec3 value1, vec3 value2, float amount)
    {
        return vec3(
            Mathematics::lerpUnclamped(value1.x, value2.x, amount),
            Mathematics::lerpUnclamped(value1.y, value2.y, amount),
            Mathematics::lerpUnclamped(value1.z, value2.z, amount)
        );
    }

    vec3 vec3::lerpSmooth(vec3 value1, vec3 value2, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
    }

    vec3 vec3::lerpSmoothStep(vec3 value1, vec3 value2, float edge0, float edge1, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
    }

    vec3 vec3::max(vec3 value1, vec3 value2)
    {
        return vec3(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y),
            Mathematics::max(value1.z, value2.z)
        );
    }

    vec3 vec3::min(vec3 value1, vec3 value2)
    {
        return vec3(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y),
            Mathematics::min(value1.z, value2.z)
        );
    }

    vec3 vec3::normalize(vec3 value)
    {
        value.normalize();
        return value;
    }

    void vec3::normalize()
    {
        float len = length();

        if (!Mathematics::approximately(len, 0))
        {
            float l = 1.0f / len;
            x *= l;
            y *= l;
            z *= l;
        }
    }

    vec3 vec3::project(vec3 vector, vec3 onNormal)
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

    vec3 vec3::reflect(vec3 vector, vec3 onNormal)
    {
        return vector - 2.0f * dot(vector, onNormal) * onNormal;
    }

    vec3 vec3::refract(vec3 vector, vec3 onNormal, float ior, float iot)
    {
        float dotNI = dot(vector, onNormal);
        float k = 1.0f - ior * ior * (1.0f - dotNI * dotNI);

        if (k < 0.0f)
            return zero();  // Total internal reflection

        return ior * vector - (ior * dotNI + sqrt(k)) * onNormal;
    }

    vec3 vec3::reject(vec3 vector, vec3 onNormal)
    {
        return vector - project(vector, onNormal);
    }

    vec3 vec3::rotate(vec3 vector, vec3 angle)
    {
        float cosThetaX = Mathematics::cos(angle.x);
        float sinThetaX = Mathematics::sin(angle.x);
        float cosThetaY = Mathematics::cos(angle.y);
        float sinThetaY = Mathematics::sin(angle.y);

        float rotatedX = vector.x * cosThetaY - vector.y * sinThetaY;
        float rotatedY = vector.x * sinThetaX * sinThetaY + vector.y * cosThetaX + vector.z * sinThetaX;
        float rotatedZ = -vector.x * cosThetaX * sinThetaY + vector.y * sinThetaX + vector.z * cosThetaX;

        return vec3(rotatedX, rotatedY, rotatedZ);
    }

    vec3 vec3::rotateAround(vec3 vector, vec3 origin, vec3 angle)
    {
        vector -= origin;
        vector = rotate(vector, angle);
        return vector + origin;
    }

    vec3 vec3::round(vec3 value)
    {
        return vec3(
            Mathematics::round(value.x),
            Mathematics::round(value.y),
            Mathematics::round(value.z)
        );
    }

    vec3 vec3::smoothstep(vec3 edge0, vec3 edge1, vec3 value, Quality quality)
    {
        return vec3(
            Mathematics::smoothstep(edge0.x, edge1.x, value.x, quality),
            Mathematics::smoothstep(edge0.y, edge1.y, value.y, quality),
            Mathematics::smoothstep(edge0.z, edge1.z, value.z, quality)
        );
    }

    vec3 vec3::trunc(vec3 value)
    {
        return vec3(
            Mathematics::trunc(value.x),
            Mathematics::trunc(value.y),
            Mathematics::trunc(value.z)
        );
    }

    vec3 vec3::operator-() const
    {
        return vec3(-x, -y, -z);
    }

    vec3 vec3::operator-(vec3 other) const
    {
        return vec3(
            x - other.x,
            y - other.y,
            z - other.z
        );
    }

    vec3& vec3::operator-=(vec3 other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;

        return *this;
    }

    vec3 vec3::operator+() const
    {
        return vec3(x, y, z);
    }

    vec3 vec3::operator+(vec3 other) const
    {
        return vec3(
            x + other.x,
            y + other.y,
            z + other.z
        );
    }

    vec3& vec3::operator+=(vec3 other)
    {
        x += other.x;
        y += other.y;
        z += other.z;

        return *this;
    }

    vec3 vec3::operator*(vec3 other) const
    {
        return vec3(
            x * other.x,
            y * other.y,
            z * other.z
        );
    }

    vec3& vec3::operator*=(vec3 other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;

        return *this;
    }

    vec3 vec3::operator*(float other) const
    {
        return vec3(
            x * other,
            y * other,
            z * other
        );
    }

    vec3& vec3::operator*=(float other)
    {
        x *= other;
        y *= other;
        z *= other;

        return *this;
    }

    vec3 operator*(float lhs, vec3 rhs)
    {
        return vec3(
            lhs * rhs.x,
            lhs * rhs.y,
            lhs * rhs.z
        );
    }

    vec3 vec3::operator/(vec3 other) const
    {
        return vec3(
            x / other.x,
            y / other.y,
            z / other.z
        );
    }

    vec3& vec3::operator/=(vec3 other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;

        return *this;
    }

    vec3 vec3::operator/(float other) const
    {
        return vec3(
            x / other,
            y / other,
            z / other
        );
    }

    vec3& vec3::operator/=(float other)
    {
        x /= other;
        y /= other;
        z /= other;

        return *this;
    }

    vec3 operator/(float lhs, vec3 rhs)
    {
        return vec3(
            lhs / rhs.x,
            lhs / rhs.y,
            lhs / rhs.z
        );
    }

    vec3 vec3::operator%(vec3 other) const
    {
        return vec3(
            mod(x, other.x),
            mod(y, other.y),
            mod(z, other.z)
        );
    }

    vec3& vec3::operator%=(vec3 other)
    {
        x = mod(x, other.x);
        y = mod(y, other.y);
        z = mod(z, other.z);

        return *this;
    }

    vec3 vec3::operator%(float other) const
    {
        return vec3(
            mod(x, other),
            mod(y, other),
            mod(z, other)
        );
    }

    vec3& vec3::operator%=(float other)
    {
        x = mod(x, other);
        y = mod(y, other);
        z = mod(z, other);

        return *this;
    }

    vec3 operator%(float lhs, vec3 rhs)
    {
        return vec3(
            mod(lhs, rhs.x),
            mod(lhs, rhs.y),
            mod(lhs, rhs.z)
        );
    }

    bool vec3::operator==(vec3 other) const
    {
        return x == other.x && y == other.y && z == other.z;
    }

    bool vec3::operator!=(vec3 other) const
    {
        return !(*this == other);
    }

    vec3::operator vec2() const
    {
        return vec2(x, y);
    }

    vec3::operator vec4() const
    {
        return vec4(x, y, z, 0);
    }

    vec3::operator ivec2() const
    {
        return ivec2(static_cast<int>(x), static_cast<int>(y));
    }

    vec3::operator ivec3() const
    {
        return ivec3(static_cast<int>(x), static_cast<int>(y), static_cast<int>(z));
    }

    vec3::operator ivec4() const
    {
        return ivec4(static_cast<int>(x), static_cast<int>(y), static_cast<int>(z), 0);
    }
}