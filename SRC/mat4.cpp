#include "../INC/Aurora/Mathematics/mat4.h"

#include <stdexcept>
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/quat.h"
#include "../INC/Aurora/Mathematics/ivec2.h"

namespace Aurora::Mathematics
{
    mat4 mat4::identity()
    {
        return mat4(
            1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, 0, 1
        );
    }

    float mat4::determinant() const
    {
        return m11() * (
            m22() * (m33() * m44() - m34() * m43()) -
            m23() * (m32() * m44() - m34() * m42()) +
            m24() * (m32() * m43() - m33() * m42())
            ) -
            m12() * (
                m21() * (m33() * m44() - m34() * m43()) -
                m23() * (m31() * m44() - m34() * m41()) +
                m24() * (m31() * m43() - m33() * m41())
                ) +
            m13() * (
                m21() * (m32() * m44() - m34() * m42()) -
                m22() * (m31() * m44() - m34() * m41()) +
                m24() * (m31() * m42() - m32() * m41())
                ) -
            m14() * (
                m21() * (m32() * m43() - m33() * m42()) -
                m22() * (m31() * m43() - m33() * m41()) +
                m23() * (m31() * m42() - m32() * m41())
                );
    }

    float mat4::trace() const
    {
        return m11() + m22() + m33() + m44();
    }

    vec4 mat4::row(int r) const
    {
        return vec4(operator()(r, 0), operator()(r, 1), operator()(r, 2), operator()(r, 3));
    }

    void mat4::row(int r, const vec4& value)
    {
        operator()(r, 0) = value.x;
        operator()(r, 1) = value.y;
        operator()(r, 2) = value.z;
        operator()(r, 3) = value.w;
    }

    vec4 mat4::col(int c) const
    {
        return vec4(operator()(0, c), operator()(1, c), operator()(2, c), operator()(3, c));
    }

    void mat4::col(int c, const vec4& value)
    {
        operator()(0, c) = value.x;
        operator()(1, c) = value.y;
        operator()(2, c) = value.z;
        operator()(3, c) = value.w;
    }

    mat4::mat4() : matrix4x4<float>() {}

    mat4::mat4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) : matrix4x4<float>(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44) {}

    bool mat4::approximately(const mat4& value1, const mat4& value2)
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                if (!Mathematics::approximately(value1(r, c), value2(r, c)))
                {
                    return false;
                }
            }
        }

        return true;
    }

    mat4 mat4::adjugate(mat4 value)
    {
        value.adjugate();
        return value;
    }

    void mat4::adjugate()
    {
        float n11 = (m22() * (m33() * m44() - m34() * m43()) -
            m23() * (m32() * m44() - m34() * m42()) +
            m24() * (m32() * m43() - m33() * m42()));

        float n12 = (m13() * (m32() * m44() - m34() * m42()) -
            m12() * (m33() * m44() - m34() * m43()) +
            m14() * (m33() * m42() - m32() * m43()));

        float n13 = (m12() * (m23() * m44() - m24() * m43()) -
            m13() * (m22() * m44() - m24() * m42()) +
            m14() * (m22() * m43() - m23() * m42()));

        float n14 = (m13() * (m22() * m34() - m23() * m32()) -
            m12() * (m23() * m34() - m24() * m33()) +
            m14() * (m23() * m32() - m22() * m33()));

        float n21 = (m23() * (m31() * m44() - m34() * m41()) -
            m21() * (m33() * m44() - m34() * m43()) +
            m24() * (m33() * m41() - m31() * m43()));

        float n22 = (m11() * (m33() * m44() - m34() * m43()) -
            m13() * (m31() * m44() - m34() * m41()) +
            m14() * (m31() * m43() - m33() * m41()));

        float n23 = (m13() * (m21() * m44() - m24() * m41()) -
            m11() * (m23() * m44() - m24() * m43()) +
            m14() * (m23() * m41() - m21() * m43()));

        float n24 = (m11() * (m23() * m34() - m24() * m33()) -
            m13() * (m21() * m34() - m24() * m31()) +
            m14() * (m21() * m33() - m23() * m31()));

        float n31 = (m21() * (m32() * m44() - m34() * m42()) -
            m22() * (m31() * m44() - m34() * m41()) +
            m24() * (m31() * m42() - m32() * m41()));

        float n32 = (m12() * (m31() * m44() - m34() * m41()) -
            m11() * (m32() * m44() - m34() * m42()) +
            m14() * (m32() * m41() - m31() * m42()));

        float n33 = (m11() * (m22() * m44() - m24() * m42()) -
            m12() * (m21() * m44() - m24() * m41()) +
            m14() * (m21() * m42() - m22() * m41()));

        float n34 = (m12() * (m21() * m34() - m22() * m33()) -
            m11() * (m22() * m34() - m24() * m32()) +
            m14() * (m22() * m33() - m23() * m32()));

        float n41 = (m22() * (m31() * m43() - m33() * m41()) -
            m21() * (m32() * m43() - m33() * m42()) +
            m23() * (m32() * m41() - m31() * m42()));

        float n42 = (m11() * (m32() * m43() - m33() * m42()) -
            m12() * (m31() * m43() - m33() * m41()) +
            m13() * (m31() * m42() - m32() * m41()));

        float n43 = (m12() * (m21() * m43() - m23() * m41()) -
            m11() * (m22() * m43() - m23() * m42()) +
            m13() * (m22() * m41() - m21() * m42()));

        float n44 = (m11() * (m22() * m33() - m23() * m32()) -
            m12() * (m21() * m33() - m23() * m31()) +
            m13() * (m21() * m32() - m22() * m31()));

        m11() = n11;
        m12() = n12;
        m13() = n13;
        m14() = n14;

        m21() = n21;
        m22() = n22;
        m23() = n23;
        m24() = n24;

        m31() = n31;
        m32() = n32;
        m33() = n33;
        m34() = n34;

        m41() = n41;
        m42() = n42;
        m43() = n43;
        m44() = n44;
    }

    mat4 mat4::invert(mat4 value)
    {
        value.invert();
        return value;
    }

    void mat4::invert()
    {
        float det = determinant();

        if (Mathematics::approximately(det, 0.0f))
        {
            throw std::runtime_error("matrix is not invertible");
        }

        float i = 1.0f / det;

        float n11 = (m22() * (m33() * m44() - m34() * m43()) -
            m23() * (m32() * m44() - m34() * m42()) +
            m24() * (m32() * m43() - m33() * m42())) * i;

        float n12 = (m13() * (m32() * m44() - m34() * m42()) -
            m12() * (m33() * m44() - m34() * m43()) +
            m14() * (m33() * m42() - m32() * m43())) * i;

        float n13 = (m12() * (m23() * m44() - m24() * m43()) -
            m13() * (m22() * m44() - m24() * m42()) +
            m14() * (m22() * m43() - m23() * m42())) * i;

        float n14 = (m13() * (m22() * m34() - m23() * m32()) -
            m12() * (m23() * m34() - m24() * m33()) +
            m14() * (m23() * m32() - m22() * m33())) * i;

        float n21 = (m23() * (m31() * m44() - m34() * m41()) -
            m21() * (m33() * m44() - m34() * m43()) +
            m24() * (m33() * m41() - m31() * m43())) * i;

        float n22 = (m11() * (m33() * m44() - m34() * m43()) -
            m13() * (m31() * m44() - m34() * m41()) +
            m14() * (m31() * m43() - m33() * m41())) * i;

        float n23 = (m13() * (m21() * m44() - m24() * m41()) -
            m11() * (m23() * m44() - m24() * m43()) +
            m14() * (m23() * m41() - m21() * m43())) * i;

        float n24 = (m11() * (m23() * m34() - m24() * m33()) -
            m13() * (m21() * m34() - m24() * m31()) +
            m14() * (m21() * m33() - m23() * m31())) * i;

        float n31 = (m21() * (m32() * m44() - m34() * m42()) -
            m22() * (m31() * m44() - m34() * m41()) +
            m24() * (m31() * m42() - m32() * m41())) * i;

        float n32 = (m12() * (m31() * m44() - m34() * m41()) -
            m11() * (m32() * m44() - m34() * m42()) +
            m14() * (m32() * m41() - m31() * m42())) * i;

        float n33 = (m11() * (m22() * m44() - m24() * m42()) -
            m12() * (m21() * m44() - m24() * m41()) +
            m14() * (m21() * m42() - m22() * m41())) * i;

        float n34 = (m12() * (m21() * m34() - m22() * m33()) -
            m11() * (m22() * m34() - m24() * m32()) +
            m14() * (m22() * m33() - m23() * m32())) * i;

        float n41 = (m22() * (m31() * m43() - m33() * m41()) -
            m21() * (m32() * m43() - m33() * m42()) +
            m23() * (m32() * m41() - m31() * m42())) * i;

        float n42 = (m11() * (m32() * m43() - m33() * m42()) -
            m12() * (m31() * m43() - m33() * m41()) +
            m13() * (m31() * m42() - m32() * m41())) * i;

        float n43 = (m12() * (m21() * m43() - m23() * m41()) -
            m11() * (m22() * m43() - m23() * m42()) +
            m13() * (m22() * m41() - m21() * m42())) * i;

        float n44 = (m11() * (m22() * m33() - m23() * m32()) -
            m12() * (m21() * m33() - m23() * m31()) +
            m13() * (m21() * m32() - m22() * m31())) * i;

        m11() = n11;
        m12() = n12;
        m13() = n13;
        m14() = n14;

        m21() = n21;
        m22() = n22;
        m23() = n23;
        m24() = n24;

        m31() = n31;
        m32() = n32;
        m33() = n33;
        m34() = n34;

        m41() = n41;
        m42() = n42;
        m43() = n43;
        m44() = n44;
    }

    mat4 mat4::transpose(mat4 value)
    {
        value.transpose();
        return value;
    }

    void mat4::transpose()
    {
        for (int i = 0; i < rows(); ++i) {
            for (int j = i + 1; j < cols(); ++j) {
                // Swap elements (i, j) and (j, i)
                std::swap(this->operator()(j, i), this->operator()(i, j));
            }
        }
    }

    mat4 mat4::createTranslation(const vec3& position)
    {
        mat4 mat = identity();
        mat(3, 0) = position.x;
        mat(3, 1) = position.y;
        mat(3, 2) = position.z;
        return mat;
    }

    mat4 mat4::createScale(const vec3& scale)
    {
        mat4 mat = identity();
        mat(0, 0) = scale.x;
        mat(1, 1) = scale.y;
        mat(2, 2) = scale.z;
        return mat;
    }

    mat4 mat4::createRotation(const vec3& rotation)
    {
        return createRotation(quat(rotation));
    }

    mat4 mat4::createRotation(const quat& rotation)
    {
        float xx = rotation.x * rotation.x;
        float yy = rotation.y * rotation.y;
        float zz = rotation.z * rotation.z;
        float xy = rotation.x * rotation.y;
        float xz = rotation.x * rotation.z;
        float yz = rotation.y * rotation.z;
        float wx = rotation.w * rotation.x;
        float wy = rotation.w * rotation.y;
        float wz = rotation.w * rotation.z;

        return {
            1.0f - (2.0f * (yy + zz)), 2.0f * (xy - wz), 2.0f * (xz + wy), 0.0f,
            2.0f * (xy * wz), 1.0f - (2.0f * (xx + zz)), 2.0f * (yz - wx), 0.0f,
            2.0f * (xz - wy), 2.0f * (yz + wx), 1.0f - (2.0f * (xx + yy)), 0.0f,
            0.0f, 0.0f, 0.0f, 1.0f
        };
    }

    mat4 mat4::createTransform(const vec3& translation, const vec3& rotation, const vec3& scaling)
    {
        mat4 t = createTranslation(translation);
        mat4 s = createScale(scaling);
        mat4 r = createRotation(rotation);

        return t * s * r;
    }

    mat4 mat4::createPerspective(float fov, const ivec2& viewport, float nearClip, float farClip)
    {
        float far = max(nearClip, farClip);
        float near = min(nearClip, farClip);
        float aspectRatio = ((float)viewport.x) / viewport.y;
        float thf = tan(fov * 0.5f);
        float ri = 1.0f / (near - far);

        return mat4(
            1.0f / (thf * aspectRatio), 0, 0, 0,
            0, 1.0f / thf, 0, 0,
            0, 0, (near + far) * ri, -1,
            0, 0, 2.0f * near * far * ri, 0
        );
    }

    mat4 mat4::createOrthographic(float scale, const ivec2& viewport, float nearClip, float farClip)
    {
        return createOrthographic(scale, viewport, nearClip, farClip, vec2());
    }

    mat4 mat4::createOrthographic(float scale, const ivec2& viewport, float nearClip, float farClip, vec2 offset)
    {
        float aspectRatio = ((float)viewport.x) / viewport.y;
        float far = max(nearClip, farClip);
        float near = min(nearClip, farClip);

        float halfHeight = scale * 0.5f;
        float halfWidth = halfHeight * aspectRatio;

        float left = -halfWidth - offset.x;
        float right = halfWidth - offset.x;
        float top = halfHeight + offset.y;
        float bottom = -halfHeight + offset.y;

        float rml = right - left;
        float rpl = right + left;
        float tmb = top - bottom;
        float tpb = top + bottom;

        float fmn = far - near;
        float fpn = far + near;

        return mat4(
            2.0f / rml, 0, 0, -rpl / rml,
            0, 2.0f / tmb, 0, -tpb / tmb,
            0, 0, -2.0f / fmn, -fpn / fmn,
            0, 0, 0, 1
        );
    }

    mat4 mat4::operator!() const
    {
        return invert(*this);
    }

    mat4 mat4::operator~() const
    {
        return transpose(*this);
    }

    mat4 mat4::operator-() const
    {
        mat4 result = mat4();

        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                result(r, c) = (*this)(r, c);
            }
        }

        return result;
    }

    mat4 mat4::operator-(const mat4& other) const
    {
        mat4 result = *this;
        result -= other;
        return result;
    }

    mat4& mat4::operator-=(const mat4& other)
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                (*this)(r, c) -= other(r, c);
            }
        }

        return *this;
    }

    mat4 mat4::operator+() const
    {
        return *this;
    }

    mat4 mat4::operator+(const mat4& other) const
    {
        mat4 result = *this;
        result += other;
        return result;
    }

    mat4& mat4::operator+=(const mat4& other)
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                (*this)(r, c) += other(r, c);
            }
        }

        return *this;
    }

    mat4 mat4::operator*(const mat4& other) const
    {
        mat4 result = *this;
        result *= other;
        return result;
    }

    mat4& mat4::operator*=(const mat4& other)
    {
        mat4 result;

        for (int i = 0; i < rows(); i++) {
            for (int j = 0; j < other.cols(); j++) {
                result(i, j) = 0;
                for (int k = 0; k < cols(); k++) {
                    result(i, j) += (*this)(i, k) * other(k, j);
                }
            }
        }

        return *this = result;
    }

    mat4 mat4::operator*(float other) const
    {
        mat4 result = *this;
        result *= other;
        return result;
    }

    mat4& mat4::operator*=(float other)
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                (*this)(r, c) *= other;
            }
        }

        return *this;
    }


    mat4 operator*(float lhs, const mat4& rhs)
    {
        mat4 result = mat4();

        for (int r = 0; r < mat4::rows(); r++)
        {
            for (int c = 0; c < mat4::cols(); c++)
            {
                result(r, c) = lhs * rhs(r, c);
            }
        }

        return result;
    }

    mat4 mat4::operator/(const mat4& other) const
    {
        mat4 result = *this;
        result /= other;
        return result;
    }

    mat4& mat4::operator/=(const mat4& other)
    {
        return *this *= invert(other);
    }

    mat4 mat4::operator/(float other) const
    {
        mat4 result = *this;
        result *= other;
        return result;
    }

    mat4& mat4::operator/=(float other)
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                (*this)(r, c) /= other;
            }
        }

        return *this;
    }

    mat4 operator/(float lhs, const mat4& rhs)
    {
        mat4 result = mat4();

        for (int r = 0; r < mat4::rows(); r++)
        {
            for (int c = 0; c < mat4::cols(); c++)
            {
                result(r, c) = lhs / rhs(r, c);
            }
        }

        return result;
    }

    bool mat4::operator==(const mat4& other) const
    {
        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                if ((*this)(r, c) != other(r, c))
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool mat4::operator!=(const mat4& other) const
    {
        return !(*this == other);
    }
}