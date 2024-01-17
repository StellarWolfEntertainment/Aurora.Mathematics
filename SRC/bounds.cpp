#include "../INC/Aurora/Mathematics/bounds.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/math.h"

namespace Aurora::Mathematics
{

	float bounds::x() const
	{
		return x_;
	}

	void bounds::x(float value)
	{
		x_ = value;
	}

	float bounds::y() const
	{
		return y_;
	}

	void bounds::y(float value)
	{
		y_ = value;
	}

	float bounds::z() const
	{
		return z_;
	}

	void bounds::z(float value)
	{
		z_ = value;
	}

	float bounds::width() const
	{
		return w_;
	}

	void bounds::width(float value)
	{
		if (value < 0)
		{
			x_ -= value;
			value = -value;
		}

		w_ = value;
	}

	float bounds::height() const
	{
		return h_;
	}

	void bounds::height(float value)
	{
		if (value < 0)
		{
			y_ -= value;
			value = -value;
		}

		h_ = value;
	}

	float bounds::depth() const
	{
		return d_;
	}

	void bounds::depth(float value)
	{
		if (value < 0)
		{
			d_ -= value;
			value = -value;
		}

		d_ = value;
	}

	vec3 bounds::position() const
	{
		return vec3(x_, y_, z_);
	}

	void bounds::position(vec3 value)
	{
		x_ = value.x;
		y_ = value.y;
		z_ = value.z;
	}

	vec3 bounds::size() const
	{
		return vec3(w_, h_, d_);
	}

	void bounds::size(vec3 value)
	{
		w_ = value.x;
		h_ = value.y;
		d_ = value.z;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	float bounds::xMin() const
	{
		return x_;
	}

	void bounds::xMin(float value)
	{
		w_ += x_ - value;
		x_ = value;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	float bounds::yMin() const
	{
		return y_;
	}

	void bounds::yMin(float value)
	{
		h_ += y_ - value;
		y_ = value;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	float bounds::zMin() const
	{
		return z_;
	}

	void bounds::zMin(float value)
	{
		d_ += z_ - value;
		z_ = value;

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	float bounds::xMax() const
	{
		return x_ + w_;
	}

	void bounds::xMax(float value)
	{
		w_ = value - x_;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	float bounds::yMax() const
	{
		return y_ + h_;
	}

	void bounds::yMax(float value)
	{
		h_ = value - y_;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	float bounds::zMax() const
	{
		return z_ + d_;
	}

	void bounds::zMax(float value)
	{
		d_ = value - z_;

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	vec3 bounds::center() const
	{
		return vec3((xMin() + xMax()) * 0.5f, (yMin() + yMax()) * 0.5f, (zMin() + zMax()) * 0.5f);
	}

	void bounds::center(vec3 value)
	{
		x_ = value.x - (w_ / 2);
		y_ = value.y - (h_ / 2);
		z_ = value.z - (d_ / 2);
	}

	bounds::bounds(float x, float y, float z, float width, float height, float depth) : x_(x), y_(y), z_(z), w_(width), h_(height), d_(depth) { }

	bounds::bounds(vec3 position, vec3 size) : x_(position.x), y_(position.y), z_(position.z), w_(size.x), h_(size.y), d_(size.z) { }

	bool bounds::approximately(bounds value1, bounds value2)
	{
		return
			Mathematics::approximately(value1.x_, value2.x_) &&
			Mathematics::approximately(value1.y_, value2.y_) &&
			Mathematics::approximately(value1.z_, value2.z_) &&
			Mathematics::approximately(value1.w_, value2.w_) &&
			Mathematics::approximately(value1.h_, value2.h_) &&
			Mathematics::approximately(value1.d_, value2.d_);
	}

	bool bounds::inside(bounds value, vec3 point)
	{
		return value.inside(point);
	}

	bool bounds::inside(vec3 point) const
	{
		return point.x >= x_ && point.x <= x_ + w_ &&
			point.y >= y_ && point.y <= y_ + h_ &&
			point.z >= z_ && point.z <= z_ + d_;
	}

	bool bounds::inside(bounds value1, bounds value2)
	{
		return value1.inside(value2);
	}

	bool bounds::inside(bounds value) const
	{
		return value.x_ >= x_ && value.x_ + value.w_ <= x_ + w_ &&
			value.y_ >= y_ && value.y_ + value.h_ <= y_ + h_ &&
			value.z_ >= z_ && value.z_ + value.d_ <= z_ + d_;
	}

	bool bounds::intersects(bounds value1, bounds value2)
	{
		return value1.intersects(value2);
	}

	bool bounds::intersects(bounds other) const
	{
		// Check for horizontal overlap
		bool horizontalOverlap = x_ < other.x_ + other.w_ && x_ + w_ > other.x_;

		// Check for vertical overlap
		bool verticalOverlap = y_ < other.y_ + other.h_ && y_ + h_ > other.y_;

		bool depthOverlap = z_ < other.z_ + other.d_ && z_ + d_ > other.z_;

		// Return true if there is overlap in both diboundsions
		return horizontalOverlap && verticalOverlap && depthOverlap;
	}

	bounds bounds::merge(bounds value1, bounds value2)
	{
		value1.merge(value2);
		return value1;
	}

	void bounds::merge(bounds value)
	{
		float minX = Mathematics::min(x_, value.x_);
		float minY = Mathematics::min(y_, value.y_);
		float minZ = Mathematics::min(z_, value.z_);
		float maxX = Mathematics::max(x_ + w_, value.x_ + value.w_);
		float maxY = Mathematics::max(y_ + h_, value.y_ + value.h_);
		float maxZ = Mathematics::max(z_ + d_, value.z_ + value.d_);

		// Update position and size based on merged bounds
		x_ = minX;
		y_ = minY;
		z_ = minZ;
		w_ = maxX - minX;
		h_ = maxY - minY;
		d_ = maxZ - minZ;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	bounds bounds::merge(bounds value, vec3 point)
	{
		value.merge(point);
		return value;
	}

	void bounds::merge(vec3 point)
	{
		float minX = Mathematics::min(x_, point.x);
		float minY = Mathematics::min(y_, point.y);
		float minZ = Mathematics::min(z_, point.z);
		float maxX = Mathematics::max(x_ + w_, point.x);
		float maxY = Mathematics::max(y_ + h_, point.y);
		float maxZ = Mathematics::max(z_ + d_, point.z);

		// Update position and size based on merged bounds
		x_ = minX;
		y_ = minY;
		z_ = minZ;
		w_ = maxX - minX;
		h_ = maxY - minY;
		d_ = maxZ - minZ;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	bool bounds::operator==(bounds other) const
	{
		return x_ == other.x_ && y_ == other.y_ && z_ == other.z_ && w_ == other.w_ && h_ == other.h_ && d_ == other.d_;
	}

	bool bounds::operator!=(bounds other) const
	{
		return !((*this) == other);
	}
}