#include "../INC/Aurora/Mathematics/col.h"

#include <stdint.h>
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/col32.h"
#include "../INC/Aurora/Mathematics/hsv.h"
#include "../INC/Aurora/Mathematics/Quality.h"

namespace Aurora::Mathematics
{
	float col::minColorComponent() const
	{
		return Aurora::Mathematics::min(Aurora::Mathematics::min(r, g), b);
	}

	float col::maxColorComponent() const
	{
		return Aurora::Mathematics::max(Aurora::Mathematics::max(r, g), b);
	}

	col col::normalized() const
	{
		return normalize(*this);
	}

	col::col() : col(0.0f, 0.0f, 0.0f, 1.0f) {}

	col::col(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) { }

	bool col::approximately(col value1, col value2)
	{
		return
			Aurora::Mathematics::approximately(value1.r, value2.r) &&
			Aurora::Mathematics::approximately(value1.g, value2.g) &&
			Aurora::Mathematics::approximately(value1.b, value2.b) &&
			Aurora::Mathematics::approximately(value1.a, value2.a);
	}

	col col::lerp(col value1, col value2, float amount)
	{
		return lerpUnclamped(value1, value2, clamp01(amount));
	}

	col col::lerpUnclamped(col value1, col value2, float amount)
	{
		return col(
			Aurora::Mathematics::lerpUnclamped(value1.r, value2.r, amount),
			Aurora::Mathematics::lerpUnclamped(value1.g, value2.g, amount),
			Aurora::Mathematics::lerpUnclamped(value1.b, value2.b, amount),
			Aurora::Mathematics::lerpUnclamped(value1.a, value2.a, amount)
		);
	}

	col col::lerpSmooth(col value1, col value2, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
	}

	col col::lerpSmoothStep(col value1, col value2, float edge0, float edge1, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, smoothstep(edge0, edge1, amount, quality));
	}

	col col::max(col value1, col value2)
	{
		return col(
			Aurora::Mathematics::max(value1.r, value2.r),
			Aurora::Mathematics::max(value1.g, value2.g),
			Aurora::Mathematics::max(value1.b, value2.b),
			Aurora::Mathematics::max(value1.a, value2.a)
		);
	}

	col col::min(col value1, col value2)
	{
		return col(
			Aurora::Mathematics::min(value1.r, value2.r),
			Aurora::Mathematics::min(value1.g, value2.g),
			Aurora::Mathematics::min(value1.b, value2.b),
			Aurora::Mathematics::min(value1.a, value2.a)
		);
	}

	col col::normalize(col value)
	{
		value.normalize();
		return value;
	}

	void col::normalize()
	{
		float min = minColorComponent();
		float max = maxColorComponent();

		r = scale(r, min, max, 0.0f, 1.0f);
		g = scale(g, min, max, 0.0f, 1.0f);
		b = scale(b, min, max, 0.0f, 1.0f);
		a = clamp01(a);
	}

	col col::operator!() const
	{
		return col(
			1.0f - r,
			1.0f - g,
			1.0f - b,
			1.0f - a
		);
	}

	col col::operator~() const
	{
		return col(
			1.0f - r,
			1.0f - g,
			1.0f - b,
			a
		);
	}

	col col::operator-(col other) const
	{
		return col(
			r - other.r,
			g - other.g,
			b - other.b,
			a - other.a
		);
	}

	col& col::operator-=(col other)
	{
		r -= other.r;
		g -= other.g;
		b -= other.b;
		a -= other.a;

		return *this;
	}

	col col::operator+(col other) const
	{
		return col(
			r + other.r,
			g + other.g,
			b + other.b,
			a + other.a
		);
	}

	col& col::operator+=(col other)
	{
		r += other.r;
		g += other.g;
		b += other.b;
		a += other.a;

		return *this;
	}

	col col::operator*(col other) const
	{
		return col(
			r * other.r,
			g * other.g,
			b * other.b,
			a * other.a
		);
	}

	col& col::operator*=(col other)
	{
		r *= other.r;
		g *= other.g;
		b *= other.b;
		a *= other.a;

		return *this;
	}

	col col::operator*(float other) const
	{
		return col(
			r * other,
			g * other,
			b * other,
			a * other
		);
	}
	col& col::operator*=(float other)
	{
		r *= other;
		g *= other;
		b *= other;
		a *= other;

		return *this;
	}

	col operator*(float lhs, col rhs)
	{
		return col(
			lhs * rhs.r,
			lhs * rhs.g,
			lhs * rhs.b,
			lhs * rhs.a
		);
	}

	col col::operator/(col other) const
	{
		return col(
			r / other.r,
			g / other.g,
			b / other.b,
			a / other.a
		);
	}

	col& col::operator/=(col other)
	{
		r /= other.r;
		g /= other.g;
		b /= other.b;
		a /= other.a;

		return *this;
	}

	col col::operator/(float other) const
	{
		return col(
			r / other,
			g / other,
			b / other,
			a / other
		);
	}

	col& col::operator/=(float other)
	{
		r /= other;
		g /= other;
		b /= other;
		a /= other;

		return *this;
	}

	col operator/(float lhs, col rhs)
	{
		return col(
			lhs / rhs.r,
			lhs / rhs.g,
			lhs / rhs.b,
			lhs / rhs.a
		);
	}

	bool col::operator==(col other) const
	{
		return r == other.r && g == other.g && b == other.b && a == other.a;
	}

	bool col::operator!=(col other) const
	{
		return !(*this == other);
	}

	col::operator vec4() const
	{
		return vec4(r, g, b, a);
	}

	col::operator col32() const
	{
		float max = 1.0f / maxColorComponent();
		float r1 = r * max;
		float g1 = g * max;
		float b1 = b * max;
		float a1 = clamp01(a); // transparency has no bearing on HDR so we just clamp it instead

		return col32(
			static_cast<uint8_t>(r1 * 255),
			static_cast<uint8_t>(g1 * 255),
			static_cast<uint8_t>(b1 * 255),
			static_cast<uint8_t>(a1 * 255)
		);
	}

	col::operator hsv() const
	{
		float cmax = maxColorComponent();
		float cmin = minColorComponent();
		float delta = cmax - cmin;

		float h = 0;
		float s = 0;
		float v = cmax;

		if (delta == 0)
		{
			h = 0;
		}
		else if (Mathematics::approximately(cmax, r))
		{
			h = mod((g - b) / delta, 6);
		}
		else if (Mathematics::approximately(cmax, r))
		{
			h = ((b - r) / delta) + 2;
		}
		else
		{
			h = ((r - g) / delta) + 4;
		}

		h *= 60;

		if (cmax != 0)
		{
			s = delta / cmax;
		}

		return hsv(wrapAngleUnsigned(h), clamp01(s) * 100.0f, v * 100.0f, a * 100.0f);
	}
}