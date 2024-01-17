#include "../INC/Aurora/Mathematics/Quality.h"
#include <stdexcept>
#include <string>

namespace Aurora::Mathematics
{
    float smooth(Quality quality, float value)
    {
		switch (quality)
		{
		case Aurora::Mathematics::Quality::Low:
			return value;
		case Aurora::Mathematics::Quality::Medium:
			return value * value * (3.0f - 2.0f * value);
		case Aurora::Mathematics::Quality::High:
			return value * value * value * (value * (value * 6.0f - 15.0f) + 10.0f);
		default:
			throw std::invalid_argument("'" + std::to_string(static_cast<int>(quality)) + "' is not a defined Quality level.");
			break;
		}
    }
}