#include "../INC/Aurora/Mathematics/mat3.h"

#include <stdexcept>
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/angle.h"

namespace Aurora::Mathematics
{
    mat3 mat3::identity()
    {
        return mat3(1, 0, 0, 0, 1, 0, 0, 0, 1);
    }

    float mat3::determinant() const
    {
        return m11() * (m22() * m33() - m23() * m32()) -
            m12() * (m21() * m33() - m23() * m31()) +
            m13() * (m21() * m32() - m22() * m31());
    }

    mat3::mat3() : matrix3x3<float>() {}

    mat3::mat3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) : matrix3x3<float>(m11, m12, m13, m21, m22, m23, m31, m32, m33) {}

    bool mat3::approximately(mat3 value1, mat3 value2)
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

    mat3 mat3::invert(mat3 value)
    {
        value.invert();
        return value;
    }

    void mat3::invert()
    {
        float det = determinant();

        if (Mathematics::approximately(det, 0.0f))
        {
            throw std::runtime_error("matrix is not invertible");
        }

        float i = 1.0f / det;

        float n11 = (m22() * m33() - m23() * m32()) * i;
        float n12 = (m13() * m32() - m12() * m33()) * i;
        float n13 = (m12() * m23() - m13() * m22()) * i;

        float n21 = (m23() * m31() - m21() * m33()) * i;
        float n22 = (m11() * m33() - m13() * m31()) * i;
        float n23 = (m13() * m21() - m11() * m23()) * i;

        float n31 = (m21() * m32() - m22() * m31()) * i;
        float n32 = (m12() * m31() - m11() * m32()) * i;
        float n33 = (m11() * m22() - m12() * m21()) * i;

        m11(n11);
        m12(n12);
        m13(n13);

        m21(n21);
        m22(n22);
        m23(n23);

        m31(n31);
        m32(n32);
        m33(n33);
    }

    mat3 mat3::transpose(mat3 value)
    {
        value.transpose();
        return value;
    }

    void mat3::transpose()
    {
        for (int i = 0; i < rows(); ++i) {
            for (int j = i + 1; j < cols(); ++j) {
                // Swap elements (i, j) and (j, i)
                std::swap(this->operator()(j, i), this->operator()(i, j));
            }
        }
    }

    mat3 mat3::createTranslation(vec2 position)
    {
        return mat3(
            1, 0, position.x,
            0, 1, position.y,
            0, 0, 1);
    }

    mat3 mat3::createScale(vec2 scale)
    {
        return mat3(
            scale.x, 0, 0,
            0, scale.y, 0,
            0, 0, 1
        );
    }

    mat3 mat3::createRotation(float rotation)
    {
        return mat3(
            cos(rotation), sin(rotation), 0,
            -sin(rotation), cos(rotation), 0,
            0, 0, 1
        );
    }

    mat3 mat3::createRotation(angle rotation)
    {
        return mat3(
            angle::cos(rotation), angle::sin(rotation), 0,
            -angle::sin(rotation), angle::cos(rotation), 0,
            0, 0, 1
        );
    }

    mat3 mat3::createTransform(vec2 translation, float rotation, vec2 scaling)
    {
        mat3 t = createTranslation(translation);
        mat3 s = createScale(scaling);
        mat3 r = createRotation(rotation);

        return t * s * r;
    }

    mat3 mat3::createTransform(vec2 translation, angle rotation, vec2 scaling)
    {
        mat3 t = createTranslation(translation);
        mat3 s = createScale(scaling);
        mat3 r = createRotation(rotation);

        return t * s * r;
    }

    mat3 mat3::createOrthographic(float scale, float aspectRatio)
    {
        return createOrthographic(scale, aspectRatio, vec2());
    }

    mat3 mat3::createOrthographic(float scale, float aspectRatio, vec2 offset)
    {
        float halfHeight = scale * 0.5f;
        float halfWidth = halfHeight * aspectRatio;

        float lef = -halfWidth - offset.x;
        float rig = halfWidth - offset.x;
        float top = halfHeight + offset.y;
        float bot = -halfHeight + offset.y;

        return mat3(
            2.0f / (rig - lef), 0, -(rig + lef) / (rig - lef),
            0, 2.0f / (top - bot), -(top + bot) / (top - bot),
            0, 0, 1
        );
    }

    mat3 mat3::operator!() const
    {
        return invert(*this);
    }

    mat3 mat3::operator~() const
    {
        return transpose(*this);
    }

    mat3 mat3::operator-() const
    {
        mat3 result = mat3();

        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                result(r, c) = (*this)(r, c);
            }
        }

        return result;
    }

    mat3 mat3::operator-(mat3 other) const
    {
        mat3 result = *this;
        result -= other;
        return result;
    }

    mat3& mat3::operator-=(mat3 other)
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

    mat3 mat3::operator+() const
    {
        return *this;
    }

    mat3 mat3::operator+(mat3 other) const
    {
        mat3 result = *this;
        result += other;
        return result;
    }

    mat3& mat3::operator+=(mat3 other)
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

    mat3 mat3::operator*(mat3 other) const
    {
        mat3 result = *this;
        result *= other;
        return result;
    }

    mat3& mat3::operator*=(mat3 other)
    {
        mat3 result;

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

    mat3 mat3::operator*(float other) const
    {
        mat3 result = *this;
        result *= other;
        return result;
    }

    mat3& mat3::operator*=(float other)
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


    mat3 operator*(float lhs, mat3 rhs)
    {
        mat3 result = mat3();

        for (int r = 0; r < mat3::rows(); r++)
        {
            for (int c = 0; c < mat3::cols(); c++)
            {
                result(r, c) = lhs * rhs(r, c);
            }
        }

        return result;
    }

    mat3 mat3::operator/(mat3 other) const
    {
        mat3 result = *this;
        result /= other;
        return result;
    }

    mat3& mat3::operator/=(mat3 other)
    {
        return *this *= invert(other);
    }

    mat3 mat3::operator/(float other) const
    {
        mat3 result = *this;
        result *= other;
        return result;
    }

    mat3& mat3::operator/=(float other)
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

    mat3 operator/(float lhs, mat3 rhs)
    {
        mat3 result = mat3();

        for (int r = 0; r < mat3::rows(); r++)
        {
            for (int c = 0; c < mat3::cols(); c++)
            {
                result(r, c) = lhs / rhs(r, c);
            }
        }

        return result;
    }

    bool mat3::operator==(mat3 other) const
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

    bool mat3::operator!=(mat3 other) const
    {
        return !(*this == other);
    }
}