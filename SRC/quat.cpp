#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/quat.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/math.h"

namespace Aurora::Mathematics
{
	quat quat::identity()
	{
		return quat();
	}

	float quat::length() const
	{
		return sqrt(lengthSquared());
	}

	float quat::lengthSquared() const
	{
		return (x * x) + (y * y) + (z * z) + (w * w);
	}

	quat quat::normalized() const
	{
		return normalize(*this);
	}

	quat quat::inverted() const
	{
		return invert(*this);
	}

	quat quat::conjugated() const
	{
		return conjugate(*this);
	}

	quat::quat() : x(0), y(0), z(0), w(1) {	}

	quat::quat(float x, float y, float z, float w) : x(x), y(y), z(z), w(w)
	{
		normalize();
	}

	quat::quat(vec3 eulerAngles)
	{
		float pitch = eulerAngles.x;
		float yaw = eulerAngles.y;
		float roll = eulerAngles.z;

		// note that the 'trig' functions used by this type are custom, and take/return degrees.
		float c1 = cos(pitch * 0.5f);
		float s1 = sin(pitch * 0.5f);
		float c2 = cos(yaw * 0.5f);
		float s2 = sin(yaw * 0.5f);
		float c3 = cos(roll * 0.5f);
		float s3 = sin(roll * 0.5f);

		// Compute quaternion components
		w = c1 * c2 * c3 - s1 * s2 * s3;
		x = s1 * c2 * c3 + c1 * s2 * s3;
		y = c1 * s2 * c3 - s1 * c2 * s3;
		z = c1 * c2 * s3 + s1 * s2 * c3;

		normalize();
	}

	quat quat::abs(quat value)
	{
		return quat(
			Mathematics::abs(value.x),
			Mathematics::abs(value.y),
			Mathematics::abs(value.z),
			Mathematics::abs(value.w)
		);
	}

	bool quat::approximately(quat value1, quat value2)
	{
		return
			Mathematics::approximately(value1.x, value2.x) &&
			Mathematics::approximately(value1.y, value2.y) &&
			Mathematics::approximately(value1.z, value2.z) &&
			Mathematics::approximately(value1.w, value2.w);
	}

	quat quat::barycentric(quat value1, quat value2, quat value3, float amount1, float amount2)
	{
		return quat(
			Mathematics::barycentric(value1.x, value2.x, value3.x, amount1, amount2),
			Mathematics::barycentric(value1.y, value2.y, value3.y, amount1, amount2),
			Mathematics::barycentric(value1.z, value2.z, value3.z, amount1, amount2),
			Mathematics::barycentric(value1.w, value2.w, value3.w, amount1, amount2)
		);
	}

	quat quat::catmullRom(quat value1, quat value2, quat value3, quat value4, float amount)
	{
		return quat(
			Mathematics::catmullRom(value1.x, value2.x, value3.x, value4.x, amount),
			Mathematics::catmullRom(value1.y, value2.y, value3.y, value4.y, amount),
			Mathematics::catmullRom(value1.z, value2.z, value3.z, value4.z, amount),
			Mathematics::catmullRom(value1.w, value2.w, value3.w, value4.w, amount)
		);
	}

	quat quat::conjugate(quat value)
	{
		value.conjugate();
		return value;
	}

	void quat::conjugate()
	{
		normalize();
		x = -x;
		y = -y;
		z = -z;
	}

	float quat::dot(quat value1, quat value2)
	{
		return (value1.x * value2.x) + (value1.y * value2.y) + (value1.z * value2.z) + (value1.w * value2.w);
	}

	quat quat::hermite(quat value1, quat tangent1, quat value2, quat tangent2, float amount)
	{
		return quat(
			Mathematics::hermite(value1.x, tangent1.x, value2.x, tangent2.x, amount),
			Mathematics::hermite(value1.y, tangent1.y, value2.y, tangent2.y, amount),
			Mathematics::hermite(value1.z, tangent1.z, value2.z, tangent2.z, amount),
			Mathematics::hermite(value1.w, tangent1.w, value2.w, tangent2.w, amount)
		);
	}

	quat quat::invert(quat value)
	{
		value.invert();
		return value;
	}

	void quat::invert()
	{
		float len = length();
		if (!Mathematics::approximately(len, 0.0f))
		{
			float invNorm = 1.0f / len;
			x = -x * invNorm;
			y = -y * invNorm;
			z = -z * invNorm;
			w = w * invNorm;
		}
		else
		{
			*this = identity();
		}
	}

	quat quat::lerp(quat value1, quat value2, float amount)
	{
		return lerpUnclamped(value1, value2, clamp01(amount));
	}

	quat quat::lerpUnclamped(quat value1, quat value2, float amount)
	{
		return quat(
			Mathematics::lerpUnclamped(value1.x, value2.x, amount),
			Mathematics::lerpUnclamped(value1.y, value2.y, amount),
			Mathematics::lerpUnclamped(value1.z, value2.z, amount),
			Mathematics::lerpUnclamped(value1.w, value2.w, amount)
		);
	}

	quat quat::lerpSmooth(quat value1, quat value2, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
	}

	quat quat::lerpSmoothStep(quat value1, quat value2, float edge0, float edge1, float amount, Quality quality)
	{
		return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
	}

	quat quat::slerp(quat value1, quat value2, float amount)
	{
		amount = clamp01(amount);
		float dotProduct = dot(value1, value2);

		// Ensure the dot product is within bounds to avoid numerical instability
		dotProduct = clamp(dotProduct, -1.0f, 1.0f);

		// Determine the direction of interpolation
		int sign = Mathematics::sign(dotProduct);

		// Ensure the quaternions are normalized
		value1.normalize();
		value2.normalize();

		// Interpolate using spherical linear interpolation
		float theta = acos(dotProduct * sign);
		float sinTheta = sin(theta);
		float invSinTheta = 1.0f / sinTheta;

		float weight1 = sin((1.0f - amount) * theta) * invSinTheta;
		float weight2 = sin(amount * theta) * invSinTheta;

		value1.x *= weight1;
		value1.y *= weight1;
		value1.z *= weight1;
		value1.w *= weight1;

		value2.x *= weight2 * sign;
		value2.y *= weight2 * sign;
		value2.z *= weight2 * sign;
		value2.w *= weight2 * sign;

		// Perform the interpolation
		return value1 + value2;
	}

	quat quat::slerpSmooth(quat value1, quat value2, float amount, Quality quality)
	{
		return slerp(value1, value2, smooth(quality, clamp01(amount)));
	}

	quat quat::slerpSmoothStep(quat value1, quat value2, float edge0, float edge1, float amount, Quality quality)
	{
		return slerp(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
	}


	quat quat::max(quat value1, quat value2)
	{
		return quat(
			Mathematics::max(value1.x, value2.x),
			Mathematics::max(value1.y, value2.y),
			Mathematics::max(value1.z, value2.z),
			Mathematics::max(value1.w, value2.w)
		);
	}

	quat quat::min(quat value1, quat value2)
	{
		return quat(
			Mathematics::min(value1.x, value2.x),
			Mathematics::min(value1.y, value2.y),
			Mathematics::min(value1.z, value2.z),
			Mathematics::min(value1.w, value2.w)
		);
	}

	quat quat::normalize(quat value)
	{
		value.normalize();
		return value;
	}

	void quat::normalize()
	{
		float len = length();

		if (!Mathematics::approximately(len, 0))
		{
			float l = 1.0f / len;
			x *= l;
			y *= l;
			z *= l;
			w *= l;
		}
		else {
			*this = identity();
		}
	}

	quat quat::smoothstep(quat edge0, quat edge1, quat value, Quality quality)
	{
		return quat(
			Mathematics::smoothstep(edge0.x, edge1.x, value.x, quality),
			Mathematics::smoothstep(edge0.y, edge1.y, value.y, quality),
			Mathematics::smoothstep(edge0.z, edge1.z, value.z, quality),
			Mathematics::smoothstep(edge0.w, edge1.w, value.w, quality)
		);
	}

	quat quat::operator!() const
	{
		return invert(*this);
	}

	quat quat::operator~() const
	{
		return conjugate(*this);
	}

	quat quat::operator-() const
	{
		quat t = this->normalized();
		return quat(-t.x, -t.y, -t.z, -t.w);
	}

	quat quat::operator-(quat other) const
	{
		quat t = this->normalized();
		other.normalize();
		return quat(
			t.x - other.x,
			t.y - other.y,
			t.z - other.z,
			t.w - other.w
		);
	}

	quat& quat::operator-=(quat other)
	{
		this->normalize();
		other.normalize();
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;
		normalize();

		return *this;
	}

	quat quat::operator+() const
	{
		return quat(x, y, z, w);
	}

	// technically this operator may actually do something, since it returns a new quaternion, it may in fact change the values as the output is a normalized quaternion.
	quat quat::operator+(quat other) const
	{
		quat t = this->normalized();
		other.normalize();
		return quat(
			t.x + other.x,
			t.y + other.y,
			t.z + other.z,
			t.w + other.w
		);
	}

	quat& quat::operator+=(quat other)
	{
		normalize();
		other.normalize();
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;
		normalize();

		return *this;
	}

	quat quat::operator*(quat other) const
	{
		quat t = this->normalized();
		other.normalize();

		return quat(
			t.x * other.w + t.y * other.z - t.z * other.y + t.w * other.x,
			-t.x * other.z + t.y * other.w + t.z * other.x + t.w * other.y,
			t.x * other.y - t.y * other.x + t.z * other.w + t.w * other.z,
			-t.x * other.x - t.y * other.y - t.z * other.z + t.w * other.w
		);
	}

	quat& quat::operator*=(quat other)
	{
		*this = *this * other;
		normalize(); // not sure that normalizing here is necessary, since the constructor already normalizes
		return *this;
	}

	quat quat::operator/(quat other) const
	{
		return *this * !other;
	}

	quat& quat::operator/=(quat other)
	{
		*this *= !other;
		return *this;
	}

	bool quat::operator==(quat other) const
	{
		return x == other.x && y == other.y && z == other.z && w == other.w;
	}

	bool quat::operator!=(quat other) const
	{
		return !(*this == other);
	}

	quat::operator vec3() const
	{
		// Pitch (y-axis rotation)
		float pitch = atan(2.0f * (y * z + w * x), w * w - x * x - y * y + z * z);


		// Yaw (z-axis rotation)
		float yaw = atan(2.0f * (x * y + w * z), w * w + x * x - y * y - z * z);

		// Roll (x-axis rotation)
		float roll = asin(clamp(2.0f * (x * z - w * y), -1.0f, 1.0f));

		return vec3(pitch, yaw, roll);
	}
}