#include "../INC/Aurora/Mathematics/hsv.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/col.h"
#include "../INC/Aurora/Mathematics/col32.h"
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/Quality.h"

namespace Aurora::Mathematics
{
	hsv::hsv() : h(0), s(0), v(0), a(100) { }

	hsv::hsv(float h, float s, float v, float a) : h(h), s(s), v(v), a(a) { }

	hsv::hsv(angle h, float s, float v, float a) : h(h.degrees()), s(s), v(v), a(a) { }

	bool hsv::approximately(hsv value1, hsv value2)
	{
		return
			Mathematics::approximately(value1.h, value2.h) &&
			Mathematics::approximately(value1.s, value2.s) &&
			Mathematics::approximately(value1.v, value2.v) &&
			Mathematics::approximately(value1.a, value2.a);
	}

	hsv hsv::lerp(hsv value1, hsv value2, float amount, LerpDirection direction)
	{
		return lerpUnclamped(value1, value2, amount, direction);
	}

	hsv hsv::lerpUnclamped(hsv value1, hsv value2, float amount, LerpDirection direction)
	{
		return hsv(
			Mathematics::lerpAngle(value1.h, value2.h, amount, direction),
			Mathematics::lerp(value1.s, value2.s, amount),
			Mathematics::lerp(value1.v, value2.v, amount),
			Mathematics::lerp(value1.a, value2.a, amount)
		);
	}

	hsv hsv::lerpSmooth(hsv value1, hsv value2, float amount, Quality quality, LerpDirection direction)
	{
		return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)), direction);
	}

	hsv hsv::lerpSmoothStep(hsv value1, hsv value2, float edge0, float edge1, float amount, Quality quality, LerpDirection direction)
	{
		return lerpUnclamped(value1, value2, smoothstep(edge0, edge1, amount, quality), direction);
	}

	hsv hsv::operator!() const
	{
		return hsv(Mathematics::wrapAngleUnsigned(360 - h), 100 - s, 100 - v, 100 - a);
	}

	hsv hsv::operator~() const
	{
		return hsv(
			Mathematics::wrapAngleUnsigned(h + 180),
			s,
			v,
			a
		);
	}

	bool hsv::operator==(hsv other) const
	{
		return h == other.h && s == other.s && v == other.v && a == other.a;
	}

	bool hsv::operator!=(hsv other) const
	{
		return !((*this) == other);
	}

	hsv::operator col() const
	{
		float h1 = Mathematics::wrapAngleUnsigned(h);
		float s1 = Mathematics::clamp01(s / 100);
		float v1 = v / 100; // this is left unclamped for HDR compatibility

		float c = v1 * s1;
		float x = c * (1 - abs(mod(h1 / 60, 2) - 1));
		float m = v1 - c;

		float r = 0;
		float g = 0;
		float b = 0;

		if (0 <= h1 && h1 < 60)
		{
			r = c;
			g = x;
		}
		else if (60 <= h1 && h1 < 120)
		{
			r = x;
			g = c;
		}
		else if (120 <= h1 && h1 < 180)
		{
			g = c;
			b = x;
		}
		else if (180 <= h1 && h1 < 240)
		{
			g = x;
			b = c;
		}
		else if (240 <= h1 && h1 < 300)
		{
			r = x;
			b = c;
		}
		else
		{
			r = c;
			b = x;
		}

		return col(r + m, g + m, b + m, a / 100.0f);
	}

	hsv::operator col32() const
	{
		return (col)(*this);
	}

}