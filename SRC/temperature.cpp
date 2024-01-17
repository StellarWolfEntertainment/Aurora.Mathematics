#include "../INC/Aurora/Mathematics/temperature.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/col.h"

namespace Aurora::Mathematics
{
	float temperature::celsius() const
	{
		return kelvin_ - 273.15f;
	}

	void temperature::celsius(float value)
	{
		kelvin_ = value + 273.15f;
	}

	float temperature::fahrenheit() const
	{
		const float mult = 9.0f / 5.0f;
		return (celsius() * mult) + 32;
	}

	void temperature::fahrenheit(float value)
	{
		const float mult = 5.0f / 9.0f;
		celsius((value - 32) * mult);
	}

	float temperature::kelvin() const
	{
		return kelvin_;
	}

	void temperature::kelvin(float value)
	{
		kelvin_ = value;
	}

	temperature temperature::zero()
	{
		return temperature(0.0f);
	}

	temperature temperature::fromCelsius(float value)
	{
		return temperature(value + 273.15f);
	}

	temperature temperature::fromFahrenheit(float value)
	{
		const float mult = 5.0f / 9.0f;
		return fromCelsius((value - 32) * mult);
	}

	temperature temperature::fromKelvin(float value)
	{
		return temperature(value);
	}

	bool temperature::approximately(temperature value1, temperature value2)
	{
		return Mathematics::approximately(value1.kelvin_, value2.kelvin_);
	}

	col temperature::blackbody(temperature value)
	{
		return Mathematics::blackbody(value.kelvin_);
	}

	temperature temperature::distance(temperature value1, temperature value2)
	{
		return temperature(Mathematics::distance(value1.kelvin_, value2.kelvin_));
	}

	float temperature::inverseLerp(temperature value1, temperature value2, temperature value)
	{
		return Mathematics::inverseLerp(value1.kelvin_, value2.kelvin_, value.kelvin_);
	}

	temperature temperature::lerp(temperature value1, temperature value2, float amount)
	{
		return lerpUnclamped(value1, value2, clamp01(amount));
	}

	temperature temperature::lerpUnclamped(temperature value1, temperature value2, float amount)
	{
		return temperature(Mathematics::lerpUnclamped(value1.kelvin_, value2.kelvin_, amount));
	}

	temperature temperature::lerpSmooth(temperature value1, temperature value2, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
	}

	temperature temperature::lerpSmoothStep(temperature value1, temperature value2, float edge0, float edge1, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
	}

	temperature temperature::max(temperature value1, temperature value2)
	{
		return temperature(Mathematics::max(value1.kelvin_, value2.kelvin_));
	}

	temperature temperature::min(temperature value1, temperature value2)
	{
		return temperature(Mathematics::min(value1.kelvin_, value2.kelvin_));
	}

	int temperature::sign(temperature value)
	{
		return Mathematics::sign(value.kelvin_);
	}

	temperature temperature::smoothstep(temperature edge0, temperature edge1, temperature value, Quality quality)
	{
		return temperature(Mathematics::smoothstep(edge0.kelvin_, edge1.kelvin_, value.kelvin_, quality));
	}

	temperature temperature::operator-() const
	{
		return temperature(-kelvin_);
	}

	temperature temperature::operator-(temperature other) const
	{
		return temperature(kelvin_ - other.kelvin_);
	}

	temperature& temperature::operator-=(temperature other)
	{
		kelvin_ -= other.kelvin_;
		return *this;
	}

	temperature temperature::operator+() const
	{
		return temperature(kelvin_);
	}

	temperature temperature::operator+(temperature other) const
	{
		return temperature(kelvin_ + other.kelvin_);
	}

	temperature& temperature::operator+=(temperature other)
	{
		kelvin_ += other.kelvin_;
		return *this;
	}

	temperature temperature::operator*(float other) const
	{
		return temperature(kelvin_ * other);
	}

	temperature& temperature::operator*=(float other)
	{
		kelvin_ *= other;
		return *this;
	}

	temperature operator*(float lhs, temperature rhs)
	{
		return temperature::fromKelvin(lhs * rhs.kelvin_);
	}

	temperature temperature::operator/(float other) const
	{
		return temperature(kelvin_ / other);
	}

	temperature& temperature::operator/=(float other)
	{
		kelvin_ /= other;
		return *this;
	}

	temperature operator/(float lhs, temperature rhs)
	{
		return temperature::fromKelvin(lhs / rhs.kelvin());
	}

	temperature temperature::operator%(temperature other) const
	{
		return temperature(mod(kelvin_, other.kelvin_));
	}

	temperature& temperature::operator%=(temperature other)
	{
		kelvin_ = mod(kelvin_, other.kelvin_);
		return *this;
	}

	bool temperature::operator==(temperature other) const
	{
		return kelvin_ == other.kelvin_;
	}

	bool temperature::operator!=(temperature other) const
	{
		return !(*this == other);
	}

	bool temperature::operator<(temperature other) const
	{
		return kelvin_ < other.kelvin_;
	}

	bool temperature::operator<=(temperature other) const
	{
		return kelvin_ <= other.kelvin_;
	}

	bool temperature::operator>(temperature other) const
	{
		return kelvin_ > other.kelvin_;
	}

	bool temperature::operator>=(temperature other) const
	{
		return kelvin_ >= other.kelvin_;
	}

	temperature operator""cel(long double value)
	{
		return temperature::fromCelsius(static_cast<float>(value));
	}

	temperature operator""cel(unsigned long long value)
	{
		return temperature::fromCelsius(static_cast<float>(value));
	}

	temperature operator""kel(long double value)
	{
		return temperature::fromFahrenheit(static_cast<float>(value));
	}

	temperature operator""kel(unsigned long long value)
	{
		return temperature::fromFahrenheit(static_cast<float>(value));
	}

	temperature operator""fah(long double value)
	{
		return temperature::fromKelvin(static_cast<float>(value));
	}

	temperature operator""fah(unsigned long long value)
	{
		return temperature::fromKelvin(static_cast<float>(value));
	}
}