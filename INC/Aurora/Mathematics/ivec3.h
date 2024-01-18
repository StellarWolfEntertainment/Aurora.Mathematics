/**
 * @file ivec3.h
 * @brief Defines the ivec3 structure, representing a 3D integer vector.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
        struct vec2;
        struct vec3;
        struct vec4;
        struct ivec2;
        struct ivec4;

        /**
         * @brief 3D integer vector representation with x, y, and z components.
         */
        struct ivec3
        {
            /**
             * @brief The x-coordinate of the vector.
             */
            int x;

            /**
             * @brief The y-coordinate of the vector.
             */
            int y;

            /**
             * @brief The z-coordinate of the vector.
             */
            int z;

            /**
             * @brief Creates a vector with both components set to zero.
             * @return The zero vector.
             */
            static ivec3 zero();

            /**
             * @brief Creates a vector with both components set to one.
             * @return The vector with both components set to one.
             */
            static ivec3 one();

            /**
             * @brief Creates a vector pointing left (negative x-axis).
             * @return The left vector.
             */
            static ivec3 left();

            /**
             * @brief Creates a vector pointing right (positive x-axis).
             * @return The right vector.
             */
            static ivec3 right();

            /**
             * @brief Creates a vector pointing down (negative y-axis).
             * @return The down vector.
             */
            static ivec3 down();

            /**
             * @brief Creates a vector pointing up (positive y-axis).
             * @return The up vector.
             */
            static ivec3 up();

            /**
             * @brief Creates a vector pointing back (negative z-axis).
             * @return The down vector.
             */
            static ivec3 back();

            /**
             * @brief Creates a vector pointing forward (positive z-axis).
             * @return The up vector.
             */
            static ivec3 forward();

            /**
             * @brief Calculates the length of the vector.
             * @return The length of the vector.
             */
            float length() const;

            /**
             * @brief Calculates the squared length of the vector.
             * @return The squared length of the vector.
             */
            float lengthSquared() const;

            /**
             * @brief Returns a 2D vector with components x, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 xx() const;

            /**
             * @brief Returns a 2D vector with components x, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 xy() const;

            /**
             * @brief Returns a 2D vector with components x, and z.
             * @return The swizzled 2D vector.
             */
            ivec2 xz() const;

            /**
             * @brief Returns a 2D vector with components y, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 yx() const;

            /**
             * @brief Returns a 2D vector with components y, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 yy() const;

            /**
             * @brief Returns a 2D vector with components y, and z.
             * @return The swizzled 2D vector.
             */
            ivec2 yz() const;

            /**
             * @brief Returns a 2D vector with components z, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 zx() const;

            /**
             * @brief Returns a 2D vector with components z, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 zy() const;

            /**
             * @brief Returns a 2D vector with components z, and z.
             * @return The swizzled 2D vector.
             */
            ivec2 zz() const;

            /**
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xxx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xxx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xxy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xxy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xxz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xxz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xyx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xyx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xyy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xyy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xyz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xyz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xzx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xzx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xzy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xzy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xzz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xzz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yxx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yxx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yxy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yxy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yxz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yxz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yyx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yyx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yyy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yyy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yyz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yyz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yzx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yzx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yzy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yzy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yzz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yzz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zxx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zxx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zxy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zxy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zxz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zxz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zyx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zyx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zyy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zyy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zyz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zyz(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zzx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zzx(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zzy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zzy(ivec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zzz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zzz(ivec3 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxx() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxy() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxz() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyx() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyy() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyz() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzx() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzy() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzz() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxx() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxy() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxz() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyx() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyy() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyz() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzx() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzy() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzz() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxx() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxy() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxz() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyx() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyy() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyz() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzx() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzy() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzz() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxx() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxy() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxz() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyx() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyy() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyz() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzx() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzy() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzz() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxx() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxy() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxz() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyx() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyy() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyz() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzx() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzy() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzz() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxx() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxy() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxz() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyx() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyy() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyz() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzx() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzy() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzz() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxx() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxy() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxz() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyx() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyy() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyz() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzx() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzy() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzz() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxx() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxy() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxz() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyx() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyy() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyz() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzx() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzy() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzz() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxx() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxy() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxz() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyx() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyy() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyz() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzx() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzy() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzz() const;

            /**
             * @brief Default constructor for ivec3. Initializes the vector to (0, 0).
             */
            ivec3();

            /**
             * @brief Constructs a 3D vector with the specified x, y, and z components.
             * @param x The x-component of the vector.
             * @param y The y-component of the vector.
             * @param z The z-component of the vector.
             */
            ivec3(int x, int y, int z);

            /**
             * @brief Calculates the absolute values of each component of the vector.
             * @param value The input vector.
             * @return The vector with absolute values.
             */
            static ivec3 abs(ivec3 value);

            /**
             * @brief Calculates the ceiling of each component of the vector.
             * @param value The input vector.
             * @return The vector with ceiling values.
             */
            static ivec3 ceilToInt(vec3 value);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum value for each component.
             * @param maxValue The maximum value for each component.
             * @return The clamped vector.
             */
            static ivec3 clamp(ivec3 value, int minValue, int maxValue);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum values for each component.
             * @param maxValue The maximum values for each component.
             * @return The clamped vector.
             */
            static ivec3 clamp(ivec3 value, ivec3 minValue, ivec3 maxValue);

            /**
             * @brief Calculates the Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The distance between the vectors.
             */
            static float distance(ivec3 value1, ivec3 value2);

            /**
             * @brief Calculates the squared Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The squared distance between the vectors.
             */
            static float distanceSquared(ivec3 value1, ivec3 value2);

            /**
             * @brief Returns the vector with components rounded downward to the nearest integer.
             * @param value The vector to round.
             * @return The rounded vector.
             */
            static ivec3 floorToInt(vec3 value);

            /**
             * @brief Returns the maximum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the maximum components.
             */
            static ivec3 max(ivec3 value1, ivec3 value2);

            /**
             * @brief Returns the minimum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the minimum components.
             */
            static ivec3 min(ivec3 value1, ivec3 value2);

            /**
             * @brief Rounds each component of the vector to the nearest integer.
             * @param value The input vector.
             * @return The vector with rounded values.
             */
            static ivec3 roundToInt(vec3 value);

            /**
             * @brief Truncates the components of the vector to the nearest integer values (towards zero).
             * @param value The vector to truncate.
             * @return The truncated vector.
             */
            static ivec3 truncToInt(vec3 value);

            /**
             * @brief Negates each component of the vector.
             * @return The negated vector.
             */
            ivec3 operator -() const;

            /**
             * @brief Subtracts another vector from this vector.
             * @param other The vector to subtract.
             * @return The resulting vector.
             */
            ivec3 operator -(ivec3 other) const;

            /**
             * @brief Subtracts another vector from this vector in place.
             * @param other The vector to subtract.
             * @return Reference to this vector.
             */
            ivec3& operator -=(ivec3 other);

            /**
             * @brief Unary positive operator.
             * @return A copy of this vector.
             */
            ivec3 operator +() const;

            /**
             * @brief Adds another vector to this vector.
             * @param other The vector to add.
             * @return The resulting vector.
             */
            ivec3 operator +(ivec3 other) const;

            /**
             * @brief Adds another vector to this vector in place.
             * @param other The vector to add.
             * @return Reference to this vector.
             */
            ivec3& operator +=(ivec3 other);

            /**
             * @brief Multiplies this vector component-wise with another vector.
             * @param other The vector to multiply with.
             * @return The resulting vector.
             */
            ivec3 operator *(ivec3 other) const;

            /**
             * @brief Multiplies each component of the ivec3 by the corresponding component of another ivec3.
             * @param other The ivec3 to multiply with.
             * @return A reference to the modified ivec3.
             */
            ivec3& operator *=(ivec3 other);

            /**
             * @brief Multiplies this vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector.
             */
            ivec3 operator *(int other) const;

            /**
             * @brief Multiplies this vector by a scalar in place.
             * @param other The scalar value.
             * @return Reference to this vector.
             */
            ivec3& operator *=(int other);

            /**
             * @brief Multiplication operator to scale a vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be scaled.
             * @return The scaled vector.
             */
            friend ivec3 operator *(int lhs, ivec3 rhs);

            /**
             * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return The resulting vector after component-wise division.
             */
            ivec3 operator /(ivec3 other) const;

            /**
             * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return A reference to the modified vector.
             */
            ivec3& operator /= (ivec3 other);

            /**
             * @brief Divides each component of the ivec3 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A new ivec3 resulting from the division.
             */
            ivec3 operator /(int other) const;

            /**
             * @brief Divides each component of the ivec3 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A reference to the modified ivec3.
             */
            ivec3& operator /=(int other);

            /**
             * @brief Division operator to divide each component of the vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be divided.
             * @return The resulting vector after component-wise division.
             */
            friend ivec3 operator /(int lhs, ivec3 rhs);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec3 operator %(ivec3 other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return A reference to the modified vector.
             */
            ivec3& operator %=(ivec3 other);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec3 operator %(int other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return A reference to the modified vector.
             */
            ivec3& operator %=(int other);

            /**
             * @brief Modulo operator to compute the remainder of the division of the scalar by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            friend ivec3 operator%(int lhs, ivec3 rhs);

            /**
             * @brief Bitwise AND operator for 3D integer vectors.
             *
             * @param other The 3D integer vector to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec3 operator &(ivec3 other) const;

            /**
             * @brief Bitwise AND-assignment operator for 3D integer vectors.
             *
             * @param other The 3D integer vector to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 3D integer vector.
             */
            ivec3& operator &=(ivec3 other);

            /**
             * @brief Bitwise AND operator with a scalar integer for 3D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec3 operator &(int other) const;

            /**
             * @brief Bitwise AND-assignment operator with a scalar integer for 3D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 3D integer vector.
             */
            ivec3& operator &=(int other);

            /**
             * @brief Equality comparison operator to check if two vectors are equal.
             * @param other The vector to compare against.
             * @return True if the vectors are equal, false otherwise.
             */
            bool operator ==(ivec3 other) const;

            /**
             * @brief Inequality comparison operator to check if two vectors are not equal.
             * @param other The vector to compare against.
             * @return True if the vectors are not equal, false otherwise.
             */
            bool operator !=(ivec3 other) const;

            /**
             * @brief Gets the element at the specified index in the vector.
             * @param idx The index of the element to retrieve.
             * @return The value at the specified index.
             */
            int operator[](int idx) const;

            /**
             * @brief Gets or sets the element at the specified index in the vector.
             * @param idx The index of the element to modify.
             * @return Reference to the element at the specified index.
             */
            int& operator[](int idx);

            /**
             * @brief Explicit conversion to a 3D vector.
             * @return The 3D vector with the x, and y components from this vector.
             */
            explicit operator ivec2() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            operator ivec4() const;

            /**
             * @brief Explicit conversion to a 2D vector.
             * @return The 2D vector with the x and y components from this vector.
             */
            explicit operator vec2() const;

            /**
             * @brief Implicit conversion to a 3D vector.
             * @return The 2D vector with the x and y components from this vector and the z component set to 0.
             */
            operator vec3() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            operator vec4() const;
        };
    }
}