#include "../INC/Aurora/Mathematics/col32.h"

#include <cmath>
#include "../INC/Aurora/Mathematics/col.h"
#include "../INC/Aurora/Mathematics/hsv.h"
#include <stdexcept>
#include <string>

namespace Aurora::Mathematics
{
	uint8_t add(uint8_t a, uint8_t b);
	uint8_t sub(uint8_t a, uint8_t b);

	uint8_t col32::minColorComponent() const
	{
		return std::min(std::min(r, g), b);
	}

	uint8_t col32::maxColorComponent() const
	{
		return std::max(std::max(r, g), b);
	}

	col32::col32() : r(0), g(0), b(0), a(255) { }
	
	col32::col32(uint8_t r, uint8_t g, uint8_t b, uint8_t a) : r(r), g(g), b(b), a(a) { }

	col32 col32::max(col32 value1, col32 value2)
	{
		return col32(
			std::max(value1.r, value2.r),
			std::max(value1.g, value2.g),
			std::max(value1.b, value2.b),
			std::max(value1.a, value2.a)
		);
	}

	col32 col32::min(col32 value1, col32 value2)
	{
		return col32(
			std::min(value1.r, value2.r),
			std::min(value1.g, value2.g),
			std::min(value1.b, value2.b),
			std::min(value1.a, value2.a)
		);
	}

	col32 col32::operator!() const
	{
		return col32(
			255 - r,
			255 - g,
			255 - b,
			255 - a
		);
	}

	col32 col32::operator~() const
	{
		return col32(
			255 - r,
			255 - g,
			255 - b,
			a
		);
	}

	col32 col32::operator-(col32 other) const
	{
		return col32(
			sub(r, other.r),
			sub(g, other.g),
			sub(b, other.b),
			sub(a, other.a)
		);
	}

	col32& col32::operator-=(col32 other)
	{
		*this = (*this) - other;
		return *this;
	}

	col32 col32::operator+(col32 other) const
	{
		return col32(
			add(r, other.r),
			add(g, other.g),
			add(b, other.b),
			add(a, other.a)
		);
	}

	col32& col32::operator+=(col32 other)
	{
		*this = (*this) + other;
		return *this;
	}

	bool col32::operator==(col32 other) const
	{
		return r == other.r && g == other.g && b == other.b && a == other.a;
	}

	bool col32::operator!=(col32 other) const
	{
		return !((*this) == other);
	}

	uint8_t col32::operator[](int idx) const
	{
		if (idx == 0)
		{
			return r;
		}
		else if (idx == 1)
		{
			return g;
		}
		else if (idx == 2)
		{
			return b;
		}
		else if (idx == 3)
		{
			return a;
		}
		else
		{
			throw std::out_of_range("The requested position does not exist in the vector (" + std::to_string(idx) + ").");
		}
	}

	uint8_t& col32::operator[](int idx)
	{
		if (idx == 0)
		{
			return r;
		}
		else if (idx == 1)
		{
			return g;
		}
		else if (idx == 2)
		{
			return b;
		}
		else if (idx == 3)
		{
			return a;
		}
		else
		{
			throw std::out_of_range("The requested position does not exist in the vector (" + std::to_string(idx) + ").");
		}
	}

	col32::operator col() const
	{
		return col(
			r / 255.0f,
			g / 255.0f,
			b / 255.0f,
			a / 255.0f
		);
	}

	col32::operator hsv() const
	{
		return (col)(*this);
	}

	uint8_t add(uint8_t a, uint8_t b)
	{
		int16_t a1 = static_cast<int16_t>(a);
		int16_t b1 = static_cast<int16_t>(b);

		int16_t r = std::min(std::max(a1 + b1, 0), 255);

		return static_cast<uint8_t>(r);
	}

	uint8_t sub(uint8_t a, uint8_t b)
	{
		int16_t a1 = static_cast<int16_t>(a);
		int16_t b1 = static_cast<int16_t>(b);

		int16_t r = std::min(std::max(a1 - b1, 0), 255);

		return static_cast<uint8_t>(r);
	}
}