#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/ibounds.h"
#include "../INC/Aurora/Mathematics/bounds.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/ivec3.h"
#include "../INC/Aurora/Mathematics/math.h"

namespace Aurora::Mathematics
{

	int ibounds::x() const
	{
		return x_;
	}

	void ibounds::x(int value)
	{
		x_ = value;
	}

	int ibounds::y() const
	{
		return y_;
	}

	void ibounds::y(int value)
	{
		y_ = value;
	}

	int ibounds::z() const
	{
		return z_;
	}

	void ibounds::z(int value)
	{
		z_ = value;
	}

	int ibounds::width() const
	{
		return w_;
	}

	void ibounds::width(int value)
	{
		if (value < 0)
		{
			x_ -= value;
			value = -value;
		}

		w_ = value;
	}

	int ibounds::height() const
	{
		return h_;
	}

	void ibounds::height(int value)
	{
		if (value < 0)
		{
			y_ -= value;
			value = -value;
		}

		h_ = value;
	}

	int ibounds::depth() const
	{
		return d_;
	}

	void ibounds::depth(int value)
	{
		if (value < 0)
		{
			d_ -= value;
			value = -value;
		}

		d_ = value;
	}

	ivec3 ibounds::position() const
	{
		return ivec3(x_, y_, z_);
	}

	void ibounds::position(ivec3 value)
	{
		x_ = value.x;
		y_ = value.y;
		z_ = value.z;
	}

	ivec3 ibounds::size() const
	{
		return ivec3(w_, h_, d_);
	}

	void ibounds::size(ivec3 value)
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

	int ibounds::xMin() const
	{
		return x_;
	}

	void ibounds::xMin(int value)
	{
		w_ += x_ - value;
		x_ = value;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	int ibounds::yMin() const
	{
		return y_;
	}

	void ibounds::yMin(int value)
	{
		h_ += y_ - value;
		y_ = value;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	int ibounds::zMin() const
	{
		return z_;
	}

	void ibounds::zMin(int value)
	{
		d_ += z_ - value;
		z_ = value;

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	int ibounds::xMax() const
	{
		return x_ + w_;
	}

	void ibounds::xMax(int value)
	{
		w_ = value - x_;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	int ibounds::yMax() const
	{
		return y_ + h_;
	}

	void ibounds::yMax(int value)
	{
		h_ = value - y_;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	int ibounds::zMax() const
	{
		return z_ + d_;
	}

	void ibounds::zMax(int value)
	{
		d_ = value - z_;

		if (d_ < 0)
		{
			z_ -= d_;
			d_ = -d_;
		}
	}

	vec3 ibounds::center() const
	{
		return vec3((xMin() + xMax()) * 0.5f, (yMin() + yMax()) * 0.5f, (zMin() + zMax()) * 0.5f);
	}

	ibounds::ibounds(int x, int y, int z, int width, int height, int depth) : x_(x), y_(y), z_(z), w_(width), h_(height), d_(depth) { }

	ibounds::ibounds(ivec3 position, ivec3 size) : x_(position.x), y_(position.y), z_(position.z), w_(size.x), h_(size.y), d_(size.z) { }

	bool ibounds::approximately(ibounds value1, ibounds value2)
	{
		return
			Mathematics::approximately(value1.x_, value2.x_) &&
			Mathematics::approximately(value1.y_, value2.y_) &&
			Mathematics::approximately(value1.z_, value2.z_) &&
			Mathematics::approximately(value1.w_, value2.w_) &&
			Mathematics::approximately(value1.h_, value2.h_) &&
			Mathematics::approximately(value1.d_, value2.d_);
	}

	bool ibounds::inside(ibounds value, ivec3 point)
	{
		return value.inside(point);
	}

	bool ibounds::inside(ivec3 point) const
	{
		return point.x >= x_ && point.x <= x_ + w_ &&
			point.y >= y_ && point.y <= y_ + h_ &&
			point.z >= z_ && point.z <= z_ + d_;
	}

	bool ibounds::inside(ibounds value1, ibounds value2)
	{
		return value1.inside(value2);
	}

	bool ibounds::inside(ibounds value) const
	{
		return value.x_ >= x_ && value.x_ + value.w_ <= x_ + w_ &&
			value.y_ >= y_ && value.y_ + value.h_ <= y_ + h_ &&
			value.z_ >= z_ && value.z_ + value.d_ <= z_ + d_;
	}

	bool ibounds::intersects(ibounds value1, ibounds value2)
	{
		return value1.intersects(value2);
	}

	bool ibounds::intersects(ibounds other) const
	{
		// Check for horizontal overlap
		bool horizontalOverlap = x_ < other.x_ + other.w_ && x_ + w_ > other.x_;

		// Check for vertical overlap
		bool verticalOverlap = y_ < other.y_ + other.h_ && y_ + h_ > other.y_;

		bool depthOverlap = z_ < other.z_ + other.d_ && z_ + d_ > other.z_;

		// Return true if there is overlap in both diiboundsions
		return horizontalOverlap && verticalOverlap && depthOverlap;
	}

	ibounds ibounds::merge(ibounds value1, ibounds value2)
	{
		value1.merge(value2);
		return value1;
	}

	void ibounds::merge(ibounds value)
	{
		int minX = Mathematics::min(x_, value.x_);
		int minY = Mathematics::min(y_, value.y_);
		int minZ = Mathematics::min(z_, value.z_);
		int maxX = Mathematics::max(x_ + w_, value.x_ + value.w_);
		int maxY = Mathematics::max(y_ + h_, value.y_ + value.h_);
		int maxZ = Mathematics::max(z_ + d_, value.z_ + value.d_);

		// Update position and size based on merged ibounds
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

	ibounds ibounds::merge(ibounds value, ivec3 point)
	{
		value.merge(point);
		return value;
	}

	void ibounds::merge(ivec3 point)
	{
		int minX = Mathematics::min(x_, point.x);
		int minY = Mathematics::min(y_, point.y);
		int minZ = Mathematics::min(z_, point.z);
		int maxX = Mathematics::max(x_ + w_, point.x);
		int maxY = Mathematics::max(y_ + h_, point.y);
		int maxZ = Mathematics::max(z_ + d_, point.z);

		// Update position and size based on merged ibounds
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

	bool ibounds::operator==(ibounds other) const
	{
		return x_ == other.x_ && y_ == other.y_ && z_ == other.z_ && w_ == other.w_ && h_ == other.h_ && d_ == other.d_;
	}

	bool ibounds::operator!=(ibounds other) const
	{
		return !((*this) == other);
	}

	ibounds::operator bounds() const
	{
		return bounds(x_, y_, z_, w_, h_, d_);
	}
}