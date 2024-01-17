#include "../INC/Aurora/Mathematics/rect.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/math.h"

namespace Aurora::Mathematics
{

	float rect::x() const
	{
		return x_;
	}

	void rect::x(float value)
	{
		x_ = value;
	}

	float rect::y() const
	{
		return y_;
	}

	void rect::y(float value)
	{
		y_ = value;
	}

	float rect::width() const
	{
		return w_;
	}

	void rect::width(float value)
	{
		if (value < 0)
		{
			x_ -= value;
			value = -value;
		}

		w_ = value;
	}

	float rect::height() const
	{
		return h_;
	}

	void rect::height(float value)
	{
		if (value < 0)
		{
			y_ -= value;
			value = -value;
		}

		h_ = value;
	}

	vec2 rect::position() const
	{
		return vec2(x_, y_);
	}

	void rect::position(vec2 value)
	{
		x_ = value.x;
		y_ = value.y;
	}

	vec2 rect::size() const
	{
		return vec2(w_, h_);
	}

	void rect::size(vec2 value)
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

	float rect::xMin() const
	{
		return x_;
	}

	void rect::xMin(float value)
	{
		w_ += x_ - value;
		x_ = value;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	float rect::yMin() const
	{
		return y_;
	}

	void rect::yMin(float value)
	{
		h_ += y_ - value;
		y_ = value;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	float rect::xMax() const
	{
		return x_ + w_;
	}

	void rect::xMax(float value)
	{
		w_ = value - x_;

		if (w_ < 0)
		{
			x_ -= w_;
			w_ = -w_;
		}
	}

	float rect::yMax() const
	{
		return y_ + h_;
	}

	void rect::yMax(float value)
	{
		h_ = value - y_;

		if (h_ < 0)
		{
			y_ -= h_;
			h_ = -h_;
		}
	}

	vec2 rect::center() const
	{
		return vec2((xMin() + xMax()) * 0.5f, (yMin() + yMax()) * 0.5f);
	}

	void rect::center(vec2 value)
	{
		x_ = value.x - (w_ / 2);
		y_ = value.y - (h_ / 2);
	}

	rect::rect(float x, float y, float width, float height) : x_(x), y_(y), w_(width), h_(height) { }
	
	rect::rect(vec2 position, vec2 size) : x_(position.x), y_(position.y), w_(size.x), h_(size.y) { }

	bool rect::approximately(rect value1, rect value2)
	{
		return
			Mathematics::approximately(value1.x_, value2.x_) &&
			Mathematics::approximately(value1.y_, value2.y_) &&
			Mathematics::approximately(value1.w_, value2.w_) &&
			Mathematics::approximately(value1.h_, value2.h_);
	}

	bool rect::inside(rect value, vec2 point)
	{
		return value.inside(point);
	}

	bool rect::inside(vec2 point) const
	{
		return point.x >= x_ && point.x <= x_ + w_ &&
			point.y >= y_ && point.y <= y_ + h_;
	}

	bool rect::inside(rect value1, rect value2)
	{
		return value1.inside(value2);
	}

	bool rect::inside(rect value) const
	{
		return value.x_ >= x_ && value.x_ + value.w_ <= x_ + w_ &&
			value.y_ >= y_ && value.y_ + value.h_ <= y_ + h_;
	}

	bool rect::intersects(rect value1, rect value2)
	{
		return value1.intersects(value2);
	}

	bool rect::intersects(rect other) const
	{
		// Check for horizontal overlap
		bool horizontalOverlap = x_ < other.x_ + other.w_ && x_ + w_ > other.x_;

		// Check for vertical overlap
		bool verticalOverlap = y_ < other.y_ + other.h_ && y_ + h_ > other.y_;

		// Return true if there is overlap in both directions
		return horizontalOverlap && verticalOverlap;
	}

	rect rect::pad(rect value, float top, float right, float bottom, float left)
	{
		value.pad(top, right, bottom, left);
		return value;
	}

	rect rect::pad(rect value, float top, float horizontal, float bottom)
	{
		value.pad(top, horizontal, bottom);
		return value;
	}

	rect rect::pad(rect value, float vertical, float horizontal)
	{
		value.pad(vertical, horizontal);
		return value;
	}

	rect rect::pad(rect value, float padding)
	{
		value.pad(padding);
		return value;
	}

	void rect::pad(float top, float right, float bottom, float left)
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

	void rect::pad(float top, float horizontal, float bottom)
	{
		pad(top, horizontal, bottom, horizontal);
	}

	void rect::pad(float vertical, float horizontal)
	{
		pad(vertical, horizontal, vertical, horizontal);
	}

	void rect::pad(float padding)
	{
		pad(padding, padding, padding, padding);
	}

	rect rect::margin(rect value, float top, float right, float bottom, float left)
	{
		value.margin(top, right, bottom, left);
		return value;
	}

	rect rect::margin(rect value, float top, float horizontal, float bottom)
	{
		value.margin(top, horizontal, bottom);
		return value;
	}

	rect rect::margin(rect value, float vertical, float horizontal)
	{
		value.margin(vertical, horizontal);
		return value;
	}

	rect rect::margin(rect value, float margin)
	{
		value.margin(margin);
		return value;
	}

	void rect::margin(float top, float right, float bottom, float left)
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

	void rect::margin(float top, float horizontal, float bottom)
	{
		margin(top, horizontal, bottom, horizontal);
	}

	void rect::margin(float vertical, float horizontal)
	{
		margin(vertical, horizontal, vertical, horizontal);
	}

	void rect::margin(float margin)
	{
		(*this).margin(margin, margin, margin, margin);
	}

	rect rect::merge(rect value1, rect value2)
	{
		value1.merge(value2);
		return value1;
	}

	void rect::merge(rect value)
	{
		float minX = Mathematics::min(x_, value.x_);
		float minY = Mathematics::min(y_, value.y_);
		float maxX = Mathematics::max(x_ + w_, value.x_ + value.w_);
		float maxY = Mathematics::max(y_ + h_, value.y_ + value.h_);

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

	rect rect::merge(rect value, vec2 point)
	{
		value.merge(point);
		return value;
	}

	void rect::merge(vec2 point)
	{
		float minX = Mathematics::min(x_, point.x);
		float minY = Mathematics::min(y_, point.y);
		float maxX = Mathematics::max(x_ + w_, point.x);
		float maxY = Mathematics::max(y_ + h_, point.y);

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

	bool rect::operator==(rect other) const
	{
		return x_ == other.x_ && y_ == other.y_ && w_ == other.w_ && h_ == other.h_;
	}

	bool rect::operator!=(rect other) const
	{
		return !((*this) == other);
	}
}