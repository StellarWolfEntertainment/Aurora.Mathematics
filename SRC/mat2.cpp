#include "../INC/Aurora/Mathematics/mat2.h"

#include <stdexcept>
#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/vec2.h"

namespace Aurora::Mathematics
{
    mat2 mat2::identity()
    {
        return mat2(
            1, 0,
            0, 1
        );
    }

    float mat2::determinant() const
    {
        return (m11() * m22()) - (m12() * m21());
    }

    float mat2::trace() const
    {
        return m11() + m22();
    }

    vec2 mat2::row(int r) const
    {
        return vec2(operator()(r, 0), operator()(r, 1));
    }

    void mat2::row(int r, const vec2& value)
    {
        operator()(r, 0) = value.x;
        operator()(r, 1) = value.y;
    }

    vec2 mat2::col(int c) const
    {
        return vec2(operator()(0, c), operator()(1, c));
    }

    void mat2::col(int c, const vec2& value)
    {
        operator()(0, c) = value.x;
        operator()(1, c) = value.y;
    }

    mat2::mat2() : matrix2x2<float>() {}

    mat2::mat2(float m11, float m21, float m12, float m22) : matrix2x2<float>(m11, m21, m12, m22) {}

    bool mat2::approximately(const mat2& value1, const mat2& value2)
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

    mat2 mat2::adjugate(mat2 value)
    {
        value.adjugate();
        return value;
    }

    void mat2::adjugate()
    {
        float n11 = m22();
        float n12 = -m12();
        float n21 = -m21();
        float n22 = m11();

        m11() = n11;
        m12() = n12;
        m21() = n21;
        m22() = n22;
    }

    mat2 mat2::invert(mat2 value)
    {
        value.invert();
        return value;
    }

    void mat2::invert()
    {
        float det = determinant();

        if (Mathematics::approximately(det, 0.0f))
        {
            throw std::runtime_error("matrix is not invertible");
        }

        float i = 1.0f / det;

        float n11 = m22() * i;
        float n12 = -m12() * i;
        float n21 = -m21() * i;
        float n22 = m11() * i;

        m11() = n11;
        m12() = n12;
        m21() = n21;
        m22() = n22;
    }

    mat2 mat2::transpose(mat2 value)
    {
        value.transpose();
        return value;
    }

    void mat2::transpose()
    {
        for (int i = 0; i < rows(); ++i) {
            for (int j = i + 1; j < cols(); ++j) {
                // Swap elements (i, j) and (j, i)
                std::swap(this->operator()(j, i), this->operator()(i, j));
            }
        }
    }

    mat2 mat2::operator!() const
    {
        return invert(*this);
    }

    mat2 mat2::operator~() const
    {
        return transpose(*this);
    }

    mat2 mat2::operator-() const
    {
        mat2 result = mat2();

        for (int r = 0; r < rows(); r++)
        {
            for (int c = 0; c < cols(); c++)
            {
                result(r, c) = (*this)(r, c);
            }
        }

        return result;
    }

    mat2 mat2::operator-(const mat2& other) const
    {
        mat2 result = *this;
        result -= other;
        return result;
    }

    mat2& mat2::operator-=(const mat2& other)
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

    mat2 mat2::operator+() const
    {
        return *this;
    }

    mat2 mat2::operator+(const mat2& other) const
    {
        mat2 result = *this;
        result += other;
        return result;
    }

    mat2& mat2::operator+=(const mat2& other)
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

    mat2 mat2::operator*( const mat2& other) const
    {
        mat2 result = *this;
        result *= other;
        return result;
    }

    mat2& mat2::operator*=( const mat2& other)
    {
        mat2 result;

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

    mat2 mat2::operator*(float other) const
    {
        mat2 result = *this;
        result *= other;
        return result;
    }

    mat2& mat2::operator*=(float other)
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


    mat2 operator*(float lhs, const mat2& rhs)
    {
        mat2 result = mat2();

        for (int r = 0; r < mat2::rows(); r++)
        {
            for (int c = 0; c < mat2::cols(); c++)
            {
                result(r, c) = lhs * rhs(r, c);
            }
        }

        return result;
    }

    mat2 mat2::operator/( const mat2& other) const
    {
        mat2 result = *this;
        result /= other;
        return result;
    }

    mat2& mat2::operator/=( const mat2& other)
    {
        return *this *= invert(other);
    }

    mat2 mat2::operator/(float other) const
    {
        mat2 result = *this;
        result *= other;
        return result;
    }

    mat2& mat2::operator/=(float other)
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

    mat2 operator/(float lhs, const mat2& rhs)
    {
        mat2 result = mat2();

        for (int r = 0; r < mat2::rows(); r++)
        {
            for (int c = 0; c < mat2::cols(); c++)
            {
                result(r, c) = lhs / rhs(r, c);
            }
        }

        return result;
    }

    bool mat2::operator==( const mat2& other) const
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

    bool mat2::operator!=( const mat2& other) const
    {
        return !(*this == other);
    }
}