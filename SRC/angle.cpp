#include "../INC/Aurora/Mathematics/angle.h"

#include <cmath>
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/LerpDirection.h"

namespace Aurora::Mathematics
{
    float angle::radians() const
    {
        return radians_;
    }

    void angle::radians(float value)
    {
        radians_ = value;
    }

    float angle::degrees() const
    {
        return toDegrees(radians_);
    }

    void angle::degrees(float value)
    {
        radians_ = toRadians(value);
    }

    angle angle::zero()
    {
        return angle(0.0f);
    }

    angle angle::quarter()
    {
        return angle(pi * 0.5f);
    }

    angle angle::half()
    {
        return angle(pi);
    }

    angle angle::threeQuarter()
    {
        return angle((3.0f * pi) * 0.5f);
    }

    angle angle::full()
    {
        return angle(tau);
    }

    angle::angle() : radians_(0) { }

    angle angle::fromDegrees(float value)
    {
        return angle(toRadians(value));
    }

    angle angle::fromRadians(float value)
    {
        return angle(value);
    }

    angle angle::abs(angle value)
    {
        return angle(fabsf(value.radians_));
    }

    angle angle::acos(float value)
    {
        return angle(acosf(value));
    }

    angle angle::acosh(float value)
    {
        return angle(acoshf(value));
    }

    bool angle::approximately(angle value1, angle value2)
    {
        return Mathematics::approximately(value1.radians_, value2.radians_);
    }

    angle angle::asin(float value)
    {
        return angle(asinf(value));
    }

    angle angle::asinh(float value)
    {
        return angle(asinhf(value));
    }

    angle angle::atan(float value)
    {
        return angle(atanf(value));
    }

    angle angle::atan(float y, float x)
    {
        return angle(atan2f(y, x));
    }

    angle angle::atan(vec2 value)
    {
        return angle(atan2f(value.y, value.x));
    }

    angle angle::atanh(float value)
    {
        return angle(atanhf(value));
    }

    float angle::cos(angle value)
    {
        return cosf(value.radians_);
    }

    float angle::cosh(angle value)
    {
        return coshf(value.radians_);
    }

    angle angle::distance(angle value1, angle value2)
    {
        return angle::fromDegrees(Mathematics::deltaAngle(value1.degrees(), value2.degrees()));
    }

    float angle::inverseLerp(angle value1, angle value2, angle value)
    {
        return Mathematics::inverseLerp(value1.radians_, value2.radians_, value.radians_);
    }

    angle angle::lerp(angle value1, angle value2, float amount, LerpDirection direction)
    {
        return lerpUnclamped(value1, value2, clamp01(amount), direction);
    }

    angle angle::lerpUnclamped(angle value1, angle value2, float amount, LerpDirection direction)
    {
        return angle::fromDegrees(Mathematics::lerpAngleUnclamped(value1.degrees(), value2.degrees(), amount, direction));
    }

    angle angle::lerpSmooth(angle value1, angle value2, float amount, Quality quality, LerpDirection direction)
    {
        return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)), direction);
    }

    angle angle::lerpSmoothStep(angle value1, angle value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction)
    {
        return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality), direction);
    }

    angle angle::max(angle value1, angle value2)
    {
        return angle(Mathematics::max(value1.radians_, value2.radians_));
    }

    angle angle::min(angle value1, angle value2)
    {
        return angle(Mathematics::min(value1.radians_, value2.radians_));
    }

    int angle::sign(angle value)
    {
        return Mathematics::sign(wrapSigned(value).radians_);
    }

    float angle::sin(angle value)
    {
        return sinf(value.radians_);
    }

    float angle::sinh(angle value)
    {
        return sinhf(value.radians_);
    }

    angle angle::smoothstep(angle edge0, angle edge1, angle value, Quality quality)
    {
        return angle(Mathematics::smoothstep(edge0.radians_, edge1.radians_, value.radians_, quality));
    }

    float angle::tan(angle value)
    {
        return tanf(value.radians_);
    }

    float angle::tanh(angle value)
    {
        return tanhf(value.radians_);
    }

    angle angle::wrapSigned(angle value)
    {
        float twoPi = 2.0f * pi;

        value.radians_ = mod(value.radians_, twoPi);
        if (value.radians_ < -pi)
            value.radians_ += twoPi;
        else if (value.radians_ >= pi)
            value.radians_ -= twoPi;

        return value;
    }

    angle angle::wrapUnsigned(angle value)
    {
        float twoPi = 2.0f * pi;

        value.radians_ = mod(value.radians_, twoPi);
        if (value.radians_ < 0)
            value.radians_ += twoPi;

        return value;
    }

    angle Mathematics::angle::operator!() const
    {
        return angle(tau - wrapUnsigned(*this).radians_);
    }

    angle Mathematics::angle::operator~() const
    {
        return angle(pi - wrapUnsigned(*this).radians_);
    }

    angle Mathematics::angle::operator-() const
    {
        return angle(-radians_);
    }

    angle Mathematics::angle::operator-(angle other) const
    {
        return angle(radians_ - other.radians_);
    }

    angle& Mathematics::angle::operator-=(angle other)
    {
        radians_ -= other.radians_;
        return *this;
    }

    angle Mathematics::angle::operator+() const
    {
        return angle(radians_);
    }

    angle Mathematics::angle::operator+(angle other) const
    {
        return angle(radians_ + other.radians_);
    }

    angle& Mathematics::angle::operator+=(angle other)
    {
        radians_ += other.radians_;
        return *this;
    }

    angle Mathematics::angle::operator*(float other) const
    {
        return angle(radians_ * other);
    }

    angle& Mathematics::angle::operator*=(float other)
    {
        radians_ *= other;
        return *this;
    }

    angle Mathematics::operator*(float lhs, angle rhs)
    {
        return angle(lhs * rhs.radians_);
    }

    angle Mathematics::angle::operator/(float other) const
    {
        return angle(radians_ / other);
    }

    angle& Mathematics::angle::operator/=(float other)
    {
        radians_ /= other;
        return *this;
    }

    angle Mathematics::operator/(float lhs, angle rhs)
    {
        return angle(lhs / rhs.radians_);
    }

    angle Mathematics::angle::operator%(angle other) const
    {
        return angle(mod(radians_, other.radians_));
    }

    angle& Mathematics::angle::operator%=(angle other)
    {
        radians_ = mod(radians_, other.radians_);
        return *this;
    }

    bool Mathematics::angle::operator==(angle other) const
    {
        return radians_ == other.radians_;
    }

    bool Mathematics::angle::operator!=(angle other) const
    {
        return !(*this == other);
    }

    bool Mathematics::angle::operator<(angle other) const
    {
        return radians_ < other.radians_;
    }

    bool Mathematics::angle::operator<=(angle other) const
    {
        return radians_ <= other.radians_;
    }

    bool Mathematics::angle::operator>(angle other) const
    {
        return radians_ > other.radians_;
    }

    bool Mathematics::angle::operator>=(angle other) const
    {
        return radians_ >= other.radians_;
    }

    Mathematics::angle::angle(float rads)
    {
        radians_ = rads;
    }

    angle Mathematics::operator""deg(long double value)
    {
        return angle::fromDegrees(static_cast<float>(value));
    }

    angle operator""deg(unsigned long long value)
    {
        return angle::fromDegrees(static_cast<float>(value));
    }

    angle Mathematics::operator""rad(long double value)
    {
        return angle::fromRadians(static_cast<float>(value));
    }

    angle Mathematics::operator""rad(unsigned long long value)
    {
        return angle::fromRadians(static_cast<float>(value));
    }
}