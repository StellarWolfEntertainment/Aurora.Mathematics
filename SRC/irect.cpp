#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/irect.h"
#include "../INC/Aurora/Mathematics/rect.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/math.h"

namespace Aurora::Mathematics
{

	int irect::x() const
	{
		return x_;
	}

	void irect::x(int value)
	{
		x_ = value;
	}

	int irect::y() const
	{
		return y_;
	}

	void irect::y(int value)
	{
		y_ = value;
	}

	int irect::width() const
	{
		return w_;
	}

	void irect::width(int value)
	{
		if (value < 0)
		{
			x_ -= value;
			value = -value;
		}

		w_ = value;
	}

	int irect::height() const
	{
		return h_;
	}

	void irect::height(int value)
	{
		if (value < 0)
		{
			y_ -= value;
			value = -value;
		}

		h_ = value;
	}

	ivec2 irect::position() const
	{
		return ivec2(x_, y_);
	}

	void irect::position(ivec2 value)
	{
		x_ = value.x;
		y_ = value.y;
	}

	ivec2 irect::size() const
	{
		return ivec2(w_, h_);
	}

	void irect::size(ivec2 value)
	{
		w_ = value.x;
		h_ = value.y;

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
	}

	int irect::xMin() const
	{
		return x_;
	}

	void irect::xMin(int value)
	{
		w_ += x_ - value;
		x_ = value;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	int irect::yMin() const
	{
		return y_;
	}

	void irect::yMin(int value)
	{
		h_ += y_ - value;
		y_ = value;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	int irect::xMax() const
	{
		return x_ + w_;
	}

	void irect::xMax(int value)
	{
		w_ = value - x_;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	int irect::yMax() const
	{
		return y_ + h_;
	}

	void irect::yMax(int value)
	{
		h_ = value - y_;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	vec2 irect::center() const
	{
		return ivec2((xMin() + xMax()) * 0.5f, (yMin() + yMax()) * 0.5f);
	}

	irect::irect(int x, int y, int width, int height) : x_(x), y_(y), w_(width), h_(height) { }

	irect::irect(ivec2 position, ivec2 size) : x_(position.x), y_(position.y), w_(size.x), h_(size.y) { }

	bool irect::inside(irect value, ivec2 point)
	{
		return value.inside(point);
	}

	bool irect::inside(ivec2 point) const
	{
		return point.x >= x_ && point.x <= x_ + w_ &&
			point.y >= y_ && point.y <= y_ + h_;
	}

	bool irect::inside(irect value1, irect value2)
	{
		return value1.inside(value2);
	}

	bool irect::inside(irect value) const
	{
		return value.x_ >= x_ && value.x_ + value.w_ <= x_ + w_ &&
			value.y_ >= y_ && value.y_ + value.h_ <= y_ + h_;
	}

	bool irect::intersects(irect value1, irect value2)
	{
		return value1.intersects(value2);
	}

	bool irect::intersects(irect other) const
	{
		// Check for horizontal overlap
		bool horizontalOverlap = x_ < other.x_ + other.w_ && x_ + w_ > other.x_;

		// Check for vertical overlap
		bool verticalOverlap = y_ < other.y_ + other.h_ && y_ + h_ > other.y_;

		// Return true if there is overlap in both diirections
		return horizontalOverlap && verticalOverlap;
	}

	irect irect::pad(irect value, int top, int right, int bottom, int left)
	{
		value.pad(top, right, bottom, left);
		return value;
	}

	irect irect::pad(irect value, int top, int horizontal, int bottom)
	{
		value.pad(top, horizontal, bottom);
		return value;
	}

	irect irect::pad(irect value, int vertical, int horizontal)
	{
		value.pad(vertical, horizontal);
		return value;
	}

	irect irect::pad(irect value, int padding)
	{
		value.pad(padding);
		return value;
	}

	void irect::pad(int top, int right, int bottom, int left)
	{
		// Adjust the position and size based on padding
		x_ -= left;
		y_ -= bottom;
		w_ += left + right;
		h_ += bottom + top;

		// Ensure non-negative width and height
		if (w_ < 0) {
			x_ += w_;
			w_ = 0;
		}

		if (h_ < 0) {
			y_ += h_;
			h_ = 0;
		}
	}

	void irect::pad(int top, int horizontal, int bottom)
	{
		pad(top, horizontal, bottom, horizontal);
	}

	void irect::pad(int vertical, int horizontal)
	{
		pad(vertical, horizontal, vertical, horizontal);
	}

	void irect::pad(int padding)
	{
		pad(padding, padding, padding, padding);
	}

	irect irect::margin(irect value, int top, int right, int bottom, int left)
	{
		value.margin(top, right, bottom, left);
		return value;
	}

	irect irect::margin(irect value, int top, int horizontal, int bottom)
	{
		value.margin(top, horizontal, bottom);
		return value;
	}

	irect irect::margin(irect value, int vertical, int horizontal)
	{
		value.margin(vertical, horizontal);
		return value;
	}

	irect irect::margin(irect value, int margin)
	{
		value.margin(margin);
		return value;
	}

	void irect::margin(int top, int right, int bottom, int left)
	{
		// Adjust the position and size based on margin
		x_ += left;
		y_ += bottom;
		w_ -= left + right;
		h_ -= bottom + top;

		// Ensure non-negative width and height
		if (w_ < 0) {
			x_ += w_;
			w_ = 0;
		}

		if (h_ < 0) {
			y_ += h_;
			h_ = 0;
		}
	}

	void irect::margin(int top, int horizontal, int bottom)
	{
		margin(top, horizontal, bottom, horizontal);
	}

	void irect::margin(int vertical, int horizontal)
	{
		margin(vertical, horizontal, vertical, horizontal);
	}

	void irect::margin(int margin)
	{
		(*this).margin(margin, margin, margin, margin);
	}

	irect irect::merge(irect value1, irect value2)
	{
		value1.merge(value2);
		return value1;
	}

	void irect::merge(irect value)
	{
		int minX = Mathematics::min(x_, value.x_);
		int minY = Mathematics::min(y_, value.y_);
		int maxX = Mathematics::max(x_ + w_, value.x_ + value.w_);
		int maxY = Mathematics::max(y_ + h_, value.y_ + value.h_);

		// Update position and size based on merged bounds
		x_ = minX;
		y_ = minY;
		w_ = maxX - minX;
		h_ = maxY - minY;

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
	}

	irect irect::merge(irect value, ivec2 point)
	{
		value.merge(point);
		return value;
	}

	void irect::merge(ivec2 point)
	{
		int minX = Mathematics::min(x_, point.x);
		int minY = Mathematics::min(y_, point.y);
		int maxX = Mathematics::max(x_ + w_, point.x);
		int maxY = Mathematics::max(y_ + h_, point.y);

		// Update position and size based on merged bounds
		x_ = minX;
		y_ = minY;
		w_ = maxX - minX;
		h_ = maxY - minY;

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
	}

	bool irect::operator==(irect other) const
	{
		return x_ == other.x_ && y_ == other.y_ && w_ == other.w_ && h_ == other.h_;
	}

	bool irect::operator!=(irect other) const
	{
		return !((*this) == other);
	}

	irect::operator rect() const
	{
		return rect(x_, y_, w_, h_);
	}
}