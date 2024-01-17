/**
 * @file ivec4.h
 * @brief Defines the ivec4 structure, representing a 4D integer vector.
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
        struct ivec3;

        /**
         * @brief 4D integer vector representation with x, y, z, and w components.
         */
        struct ivec4
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
             * @brief The w-coordinate of the vector.
             */
            int w;

            /**
             * @brief Creates a vector with both components set to zero.
             * @return The zero vector.
             */
            static ivec4 zero();

            /**
             * @brief Creates a vector with both components set to one.
             * @return The vector with both components set to one.
             */
            static ivec4 one();

            /**
             * @brief Creates a vector pointing left (negative x-axis).
             * @return The left vector.
             */
            static ivec4 left();

            /**
             * @brief Creates a vector pointing right (positive x-axis).
             * @return The right vector.
             */
            static ivec4 right();

            /**
             * @brief Creates a vector pointing down (negative y-axis).
             * @return The down vector.
             */
            static ivec4 down();

            /**
             * @brief Creates a vector pointing up (positive y-axis).
             * @return The up vector.
             */
            static ivec4 up();

            /**
             * @brief Creates a vector pointing back (negative z-axis).
             * @return The down vector.
             */
            static ivec4 back();

            /**
             * @brief Creates a vector pointing forward (positive z-axis).
             * @return The up vector.
             */
            static ivec4 forward();

            /**
             * @brief Creates a vector pointing to the past (negative w-axis).
             * @return The down vector.
             */
            static ivec4 past();

            /**
             * @brief Creates a vector pointing to the future (positive w-axis).
             * @return The up vector.
             */
            static ivec4 future();

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
             * @brief Returns a 2D vector with components x, and w.
             * @return The swizzled 2D vector.
             */
            ivec2 xw() const;

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
             * @brief Returns a 2D vector with components y, and w.
             * @return The swizzled 2D vector.
             */
            ivec2 yw() const;

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
             * @brief Returns a 2D vector with components z, and w.
             * @return The swizzled 2D vector.
             */
            ivec2 zw() const;

            /**
             * @brief Returns a 2D vector with components w, and x.
             * @return The swizzled 2D vector.
             */
            ivec2 wx() const;

            /**
             * @brief Returns a 2D vector with components w, and y.
             * @return The swizzled 2D vector.
             */
            ivec2 wy() const;

            /**
             * @brief Returns a 2D vector with components w, and z.
             * @return The swizzled 2D vector.
             */
            ivec2 wz() const;

            /**
             * @brief Returns a 2D vector with components w, and w.
             * @return The swizzled 2D vector.
             */
            ivec2 ww() const;

            /**
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xxx() const;

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xxy() const;

            /**
             * @brief Returns a 3D vector with components x, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xxz() const;

            /**
             * @brief Returns a 3D vector with components x, x, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 xxw() const;

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xyx() const;

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xyy() const;

            /**
             * @brief Returns a 3D vector with components x, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xyz() const;

            /**
             * @brief Returns a 3D vector with components x, y, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 xyw() const;

            /**
             * @brief Returns a 3D vector with components x, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xzx() const;

            /**
             * @brief Returns a 3D vector with components x, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xzy() const;

            /**
             * @brief Returns a 3D vector with components x, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xzz() const;

            /**
             * @brief Returns a 3D vector with components x, z, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 xzw() const;

            /**
             * @brief Returns a 3D vector with components x, w, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 xwx() const;

            /**
             * @brief Returns a 3D vector with components x, w, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 xwy() const;

            /**
             * @brief Returns a 3D vector with components x, w, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 xwz() const;

            /**
             * @brief Returns a 3D vector with components x, w, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 xww() const;

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yxx() const;

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yxy() const;

            /**
             * @brief Returns a 3D vector with components y, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yxz() const;

            /**
             * @brief Returns a 3D vector with components y, x, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 yxw() const;

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yyx() const;

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yyy() const;

            /**
             * @brief Returns a 3D vector with components y, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yyz() const;

            /**
             * @brief Returns a 3D vector with components y, y, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 yyw() const;

            /**
             * @brief Returns a 3D vector with components y, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 yzx() const;

            /**
             * @brief Returns a 3D vector with components y, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 yzy() const;

            /**
             * @brief Returns a 3D vector with components y, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 yzz() const;

            /**
             * @brief Returns a 3D vector with components y, z, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 yzw() const;

            /**
             * @brief Returns a 3D vector with components y, w, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 ywx() const;

            /**
             * @brief Returns a 3D vector with components y, w, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 ywy() const;

            /**
             * @brief Returns a 3D vector with components y, w, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 ywz() const;

            /**
             * @brief Returns a 3D vector with components y, w, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 yww() const;

            /**
             * @brief Returns a 3D vector with components z, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zxx() const;

            /**
             * @brief Returns a 3D vector with components z, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zxy() const;

            /**
             * @brief Returns a 3D vector with components z, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zxz() const;

            /**
             * @brief Returns a 3D vector with components z, x, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 zxw() const;

            /**
             * @brief Returns a 3D vector with components z, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zyx() const;

            /**
             * @brief Returns a 3D vector with components z, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zyy() const;

            /**
             * @brief Returns a 3D vector with components z, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zyz() const;

            /**
             * @brief Returns a 3D vector with components z, y, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 zyw() const;

            /**
             * @brief Returns a 3D vector with components z, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zzx() const;

            /**
             * @brief Returns a 3D vector with components z, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zzy() const;

            /**
             * @brief Returns a 3D vector with components z, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zzz() const;

            /**
             * @brief Returns a 3D vector with components z, z, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 zzw() const;

            /**
             * @brief Returns a 3D vector with components z, w, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 zwx() const;

            /**
             * @brief Returns a 3D vector with components z, w, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 zwy() const;

            /**
             * @brief Returns a 3D vector with components z, w, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 zwz() const;

            /**
             * @brief Returns a 3D vector with components z, w, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 zww() const;

            /**
             * @brief Returns a 3D vector with components w, x, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 wxx() const;

            /**
             * @brief Returns a 3D vector with components w, x, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 wxy() const;

            /**
             * @brief Returns a 3D vector with components w, x, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 wxz() const;

            /**
             * @brief Returns a 3D vector with components w, x, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 wxw() const;

            /**
             * @brief Returns a 3D vector with components w, y, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 wyx() const;

            /**
             * @brief Returns a 3D vector with components w, y, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 wyy() const;

            /**
             * @brief Returns a 3D vector with components w, y, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 wyz() const;

            /**
             * @brief Returns a 3D vector with components w, y, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 wyw() const;

            /**
             * @brief Returns a 3D vector with components w, z, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 wzx() const;

            /**
             * @brief Returns a 3D vector with components w, z, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 wzy() const;

            /**
             * @brief Returns a 3D vector with components w, z, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 wzz() const;

            /**
             * @brief Returns a 3D vector with components w, z, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 wzw() const;

            /**
             * @brief Returns a 3D vector with components w, w, and x.
             * @return The swizzled 3D vector.
             */
            ivec3 wwx() const;

            /**
             * @brief Returns a 3D vector with components w, w, and y.
             * @return The swizzled 3D vector.
             */
            ivec3 wwy() const;

            /**
             * @brief Returns a 3D vector with components w, w, and z.
             * @return The swizzled 3D vector.
             */
            ivec3 wwz() const;

            /**
             * @brief Returns a 3D vector with components w, w, and w.
             * @return The swizzled 3D vector.
             */
            ivec3 www() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xxxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xxxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xxxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xxxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xxyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xxyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xxyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xxyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xxzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xxzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xxzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xxzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xxwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xxwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xxwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xxww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xxww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xyxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xyxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xyxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xyxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xyyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xyyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xyyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xyyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xyzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xyzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xyzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xyzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xywx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xywx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xywy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xywy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xywz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xywz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xyww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xyww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xzxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xzxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xzxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xzxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xzyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xzyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xzyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xzyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xzzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xzzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xzzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xzzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xzwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xzwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xzwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xzww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xzww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xwxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xwxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xwxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xwxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xwyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xwyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xwyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xwyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xwzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xwzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xwzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xwzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 xwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xwwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 xwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xwwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 xwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xwwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 xwww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xwww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yxxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yxxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yxxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yxxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yxyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yxyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yxyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yxyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yxzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yxzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yxzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yxzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yxwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yxwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yxwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yxww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yxww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yyxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yyxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yyxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yyxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yyyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yyyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yyyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yyyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yyzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yyzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yyzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yyzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yywx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yywx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yywy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yywy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yywz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yywz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yyww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yyww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yzxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yzxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yzxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yzxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yzyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yzyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yzyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yzyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yzzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yzzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yzzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yzzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 yzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yzwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 yzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yzwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 yzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yzwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 yzww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yzww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 ywxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void ywxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 ywxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void ywxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 ywxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void ywxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 ywxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void ywxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 ywyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void ywyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 ywyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void ywyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 ywyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void ywyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 ywyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void ywyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 ywzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void ywzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 ywzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void ywzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 ywzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void ywzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 ywzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void ywzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 ywwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void ywwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 ywwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void ywwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 ywwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void ywwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 ywww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void ywww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zxxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zxxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zxxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zxxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zxyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zxyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zxyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zxyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zxzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zxzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zxzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zxzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zxwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zxwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zxwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zxww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zxww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zyxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zyxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zyxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zyxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zyyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zyyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zyyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zyyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zyzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zyzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zyzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zyzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zywx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zywx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zywy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zywy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zywz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zywz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zyww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zyww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zzxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zzxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zzxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zzxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zzyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zzyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zzyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zzyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zzzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zzzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zzzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zzzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zzwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zzwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zzwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zzww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zzww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zwxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zwxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zwxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zwxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zwyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zwyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zwyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zwyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zwzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zwzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zwzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zwzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 zwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zwwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 zwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zwwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 zwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zwwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 zwww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zwww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wxxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wxxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wxxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wxxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wxyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wxyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wxyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wxyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wxzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wxzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wxzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wxzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wxwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wxwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wxwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wxww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wxww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wyxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wyxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wyxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wyxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wyyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wyyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wyyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wyyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wyzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wyzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wyzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wyzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wywx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wywx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wywy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wywy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wywz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wywz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wyww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wyww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wzxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wzxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wzxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wzxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wzyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wzyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wzyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wzyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wzzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wzzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wzzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wzzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wzwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wzwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wzwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wzww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wzww(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wwxx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wwxy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wwxz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wwxw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wwyx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wwyy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wwyz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wwyw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wwzx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wwzy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wwzz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wwzw(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and x.
             * @return The swizzled 4D vector.
             */
            ivec4 wwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wwwx(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and y.
             * @return The swizzled 4D vector.
             */
            ivec4 wwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wwwy(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and z.
             * @return The swizzled 4D vector.
             */
            ivec4 wwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wwwz(ivec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and w.
             * @return The swizzled 4D vector.
             */
            ivec4 wwww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wwww(ivec4 value);

            /**
             * @brief Default constructor for ivec4. Initializes the vector to (0, 0).
             */
            ivec4();

            /**
             * @brief Constructs a 4D vector with the specified x, y, z, and w components.
             * @param x The x-component of the vector.
             * @param y The y-component of the vector.
             * @param z The z-component of the vector.
             * @param w The w-component of the vector.
             */
            ivec4(int x, int y, int z, int w);

            /**
             * @brief Calculates the absolute values of each component of the vector.
             * @param value The input vector.
             * @return The vector with absolute values.
             */
            static ivec4 abs(ivec4 value);

            /**
             * @brief Calculates the ceiling of each component of the vector.
             * @param value The input vector.
             * @return The vector with ceiling values.
             */
            static ivec4 ceilToInt(vec4 value);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum value for each component.
             * @param maxValue The maximum value for each component.
             * @return The clamped vector.
             */
            static ivec4 clamp(ivec4 value, int minValue, int maxValue);

            /**
             * @brief Clamps the vector components to a specified range.
             * @param value The vector to clamp.
             * @param minValue The minimum values for each component.
             * @param maxValue The maximum values for each component.
             * @return The clamped vector.
             */
            static ivec4 clamp(ivec4 value, ivec4 minValue, ivec4 maxValue);

            /**
             * @brief Calculates the Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The distance between the vectors.
             */
            static float distance(ivec4 value1, ivec4 value2);

            /**
             * @brief Calculates the squared Euclidean distance between two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The squared distance between the vectors.
             */
            static float distanceSquared(ivec4 value1, ivec4 value2);

            /**
             * @brief Returns the vector with components rounded downward to the nearest integer.
             * @param value The vector to round.
             * @return The rounded vector.
             */
            static ivec4 floorToInt(vec4 value);

            /**
             * @brief Returns the maximum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the maximum components.
             */
            static ivec4 max(ivec4 value1, ivec4 value2);

            /**
             * @brief Returns the minimum components of two vectors.
             * @param value1 The first vector.
             * @param value2 The second vector.
             * @return The vector with the minimum components.
             */
            static ivec4 min(ivec4 value1, ivec4 value2);

            /**
             * @brief Rounds each component of the vector to the nearest integer.
             * @param value The input vector.
             * @return The vector with rounded values.
             */
            static ivec4 roundToInt(vec4 value);

            /**
             * @brief Truncates the components of the vector to the nearest integer values (towards zero).
             * @param value The vector to truncate.
             * @return The truncated vector.
             */
            static ivec4 truncToInt(vec4 value);

            /**
             * @brief Negates each component of the vector.
             * @return The negated vector.
             */
            ivec4 operator -() const;

            /**
             * @brief Subtracts another vector from this vector.
             * @param other The vector to subtract.
             * @return The resulting vector.
             */
            ivec4 operator -(ivec4 other) const;

            /**
             * @brief Subtracts another vector from this vector in place.
             * @param other The vector to subtract.
             * @return Reference to this vector.
             */
            ivec4& operator -=(ivec4 other);

            /**
             * @brief Unary positive operator.
             * @return A copy of this vector.
             */
            ivec4 operator +() const;

            /**
             * @brief Adds another vector to this vector.
             * @param other The vector to add.
             * @return The resulting vector.
             */
            ivec4 operator +(ivec4 other) const;

            /**
             * @brief Adds another vector to this vector in place.
             * @param other The vector to add.
             * @return Reference to this vector.
             */
            ivec4& operator +=(ivec4 other);

            /**
             * @brief Multiplies this vector component-wise with another vector.
             * @param other The vector to multiply with.
             * @return The resulting vector.
             */
            ivec4 operator *(ivec4 other) const;

            /**
             * @brief Multiplies each component of the ivec4 by the corresponding component of another ivec4.
             * @param other The ivec4 to multiply with.
             * @return A reference to the modified ivec4.
             */
            ivec4& operator *=(ivec4 other);

            /**
             * @brief Multiplies this vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector.
             */
            ivec4 operator *(int other) const;

            /**
             * @brief Multiplies this vector by a scalar in place.
             * @param other The scalar value.
             * @return Reference to this vector.
             */
            ivec4& operator *=(int other);

            /**
             * @brief Multiplication operator to scale a vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be scaled.
             * @return The scaled vector.
             */
            friend ivec4 operator *(int lhs, ivec4 rhs);

            /**
             * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return The resulting vector after component-wise division.
             */
            ivec4 operator /(ivec4 other) const;

            /**
             * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to divide.
             * @return A reference to the modified vector.
             */
            ivec4& operator /= (ivec4 other);

            /**
             * @brief Divides each component of the ivec4 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A new ivec4 resulting from the division.
             */
            ivec4 operator /(int other) const;

            /**
             * @brief Divides each component of the ivec4 by a scalar value.
             * @param other The scalar value to divide by.
             * @return A reference to the modified ivec4.
             */
            ivec4& operator /=(int other);

            /**
             * @brief Division operator to divide each component of the vector by a scalar.
             * @param lhs The scalar value.
             * @param rhs The vector to be divided.
             * @return The resulting vector after component-wise division.
             */
            friend ivec4 operator /(int lhs, ivec4 rhs);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec4 operator %(ivec4 other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return A reference to the modified vector.
             */
            ivec4& operator %=(ivec4 other);

            /**
             * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return The resulting vector after component-wise modulo operation.
             */
            ivec4 operator %(int other) const;

            /**
             * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
             * @param other The scalar value.
             * @return A reference to the modified vector.
             */
            ivec4& operator %=(int other);

            /**
             * @brief Modulo operator to compute the remainder of the division of the scalar by the corresponding component of another vector.
             * @param other The vector by which to compute the remainder.
             * @return The resulting vector after component-wise modulo operation.
             */
            friend ivec4 operator%(int lhs, ivec4 rhs);

            /**
             * @brief Bitwise AND operator for 4D integer vectors.
             *
             * @param other The 4D integer vector to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec4 operator &(ivec4 other) const;

            /**
             * @brief Bitwise AND-assignment operator for 4D integer vectors.
             *
             * @param other The 4D integer vector to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 4D integer vector.
             */
            ivec4& operator &=(ivec4 other);

            /**
             * @brief Bitwise AND operator with a scalar integer for 4D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with.
             * @return The result of the bitwise AND operation.
             */
            ivec4 operator &(int other) const;

            /**
             * @brief Bitwise AND-assignment operator with a scalar integer for 4D integer vectors.
             *
             * @param other The scalar integer to perform the bitwise AND operation with and assign the result to the current vector.
             * @return A reference to the modified 4D integer vector.
             */
            ivec4& operator &=(int other);

            /**
             * @brief Equality comparison operator to check if two vectors are equal.
             * @param other The vector to compare against.
             * @return True if the vectors are equal, false otherwise.
             */
            bool operator ==(ivec4 other) const;

            /**
             * @brief Inequality comparison operator to check if two vectors are not equal.
             * @param other The vector to compare against.
             * @return True if the vectors are not equal, false otherwise.
             */
            bool operator !=(ivec4 other) const;

            /**
             * @brief Explicit conversion to a 3D vector.
             * @return The 3D vector with the x, and y components from this vector/
             */
            explicit operator ivec2() const;

            /**
             * @brief Explicit conversion to a 4D vector.
             * @return The 4D vector with the x, and y components from this vector and the z, and w component set to 0.
             */
            explicit operator ivec3() const;

            /**
             * @brief Explicit conversion to a 2D vector.
             * @return The 2D vector with the x, and y components from this vector.
             */
            explicit operator vec2() const;

            /**
             * @brief Explicit conversion to a 3D vector.
             * @return The 2D vector with the x, y, and z components from this vector.
             */
            explicit operator vec3() const;

            /**
             * @brief Implicit conversion to a 4D vector.
             * @return The 4D vector with the x, y, z, and w components from this vector.
             */
            operator vec4() const;
        };
    }
}