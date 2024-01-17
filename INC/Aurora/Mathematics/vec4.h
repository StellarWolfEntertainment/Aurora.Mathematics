/**
 * @file vec4.h
 * @brief Defines the vec4 structure, representing a 4D vector.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
	    enum class Quality;
	    struct vec2;
	    struct vec3;
	    struct ivec2;
	    struct ivec3;
	    struct ivec4;
	    struct col;

	    /**
	     * @brief 4D vector representation with x, y, z, and w components.
	     */
	    struct vec4
	    {
		    /**
		     * @brief X component of the vector.
		     */
		    float x;

		    /**
		     * @brief Y component of the vector.
		     */
		    float y;

		    /**
		     * @brief Z component of the vector.
		     */
		    float z;

		    /**
		     * @brief W component of the vector.
		     */
		    float w;

		    /**
		     * @brief Creates a vector with both components set to zero.
		     * @return The zero vector.
		     */
		    static vec4 zero();

		    /**
		     * @brief Creates a vector with both components set to one.
		     * @return The vector with both components set to one.
		     */
		    static vec4 one();

		    /**
		     * @brief Creates a vector pointing left (negative x-axis).
		     * @return The left vector.
		     */
		    static vec4 left();

		    /**
		     * @brief Creates a vector pointing right (positive x-axis).
		     * @return The right vector.
		     */
		    static vec4 right();

		    /**
		     * @brief Creates a vector pointing down (negative y-axis).
		     * @return The down vector.
		     */
		    static vec4 down();

		    /**
		     * @brief Creates a vector pointing up (positive y-axis).
		     * @return The up vector.
		     */
		    static vec4 up();

		    /**
		     * @brief Creates a vector pointing back (negative z-axis).
		     * @return The back vector.
		     */
		    static vec4 back();

		    /**
		     * @brief Creates a vector pointing forward (positive w-axis).
		     * @return The forward vector.
		     */
		    static vec4 forward();

		    /**
		     * @brief Creates a vector pointing to the past (negative w-axis).
		     * @return The past vector.
		     */
		    static vec4 past();

		    /**
		     * @brief Creates a vector pointing to the future (positive w-axis).
		     * @return The future vector.
		     */
		    static vec4 future();

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
		     * @brief Returns a normalized version of the vector.
		     * @return The normalized vector.
		     */
		    vec4 normalized() const;

            /**
             * @brief Returns a 2D vector with components x, and x.
             * @return The swizzled 2D vector.
             */
            vec2 xx() const;

            /**
             * @brief Returns a 2D vector with components x, and y.
             * @return The swizzled 2D vector.
             */
            vec2 xy() const;

            /**
             * @brief Returns a 2D vector with components x, and z.
             * @return The swizzled 2D vector.
             */
            vec2 xz() const;

            /**
             * @brief Returns a 2D vector with components x, and w.
             * @return The swizzled 2D vector.
             */
            vec2 xw() const;

            /**
             * @brief Returns a 2D vector with components y, and x.
             * @return The swizzled 2D vector.
             */
            vec2 yx() const;

            /**
             * @brief Returns a 2D vector with components y, and y.
             * @return The swizzled 2D vector.
             */
            vec2 yy() const;

            /**
             * @brief Returns a 2D vector with components y, and z.
             * @return The swizzled 2D vector.
             */
            vec2 yz() const;

            /**
             * @brief Returns a 2D vector with components y, and w.
             * @return The swizzled 2D vector.
             */
            vec2 yw() const;

            /**
             * @brief Returns a 2D vector with components z, and x.
             * @return The swizzled 2D vector.
             */
            vec2 zx() const;

            /**
             * @brief Returns a 2D vector with components z, and y.
             * @return The swizzled 2D vector.
             */
            vec2 zy() const;

            /**
             * @brief Returns a 2D vector with components z, and z.
             * @return The swizzled 2D vector.
             */
            vec2 zz() const;

            /**
             * @brief Returns a 2D vector with components z, and w.
             * @return The swizzled 2D vector.
             */
            vec2 zw() const;

            /**
             * @brief Returns a 2D vector with components w, and x.
             * @return The swizzled 2D vector.
             */
            vec2 wx() const;

            /**
             * @brief Returns a 2D vector with components w, and y.
             * @return The swizzled 2D vector.
             */
            vec2 wy() const;

            /**
             * @brief Returns a 2D vector with components w, and z.
             * @return The swizzled 2D vector.
             */
            vec2 wz() const;

            /**
             * @brief Returns a 2D vector with components w, and w.
             * @return The swizzled 2D vector.
             */
            vec2 ww() const;

            /**
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xxx() const;

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xxy() const;

            /**
             * @brief Returns a 3D vector with components x, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xxz() const;

            /**
             * @brief Returns a 3D vector with components x, x, and w.
             * @return The swizzled 3D vector.
             */
            vec3 xxw() const;

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xyx() const;

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xyy() const;

            /**
             * @brief Returns a 3D vector with components x, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xyz() const;

            /**
             * @brief Returns a 3D vector with components x, y, and w.
             * @return The swizzled 3D vector.
             */
            vec3 xyw() const;

            /**
             * @brief Returns a 3D vector with components x, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xzx() const;

            /**
             * @brief Returns a 3D vector with components x, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xzy() const;

            /**
             * @brief Returns a 3D vector with components x, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xzz() const;

            /**
             * @brief Returns a 3D vector with components x, z, and w.
             * @return The swizzled 3D vector.
             */
            vec3 xzw() const;

            /**
             * @brief Returns a 3D vector with components x, w, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xwx() const;

            /**
             * @brief Returns a 3D vector with components x, w, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xwy() const;

            /**
             * @brief Returns a 3D vector with components x, w, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xwz() const;

            /**
             * @brief Returns a 3D vector with components x, w, and w.
             * @return The swizzled 3D vector.
             */
            vec3 xww() const;

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yxx() const;

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yxy() const;

            /**
             * @brief Returns a 3D vector with components y, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yxz() const;

            /**
             * @brief Returns a 3D vector with components y, x, and w.
             * @return The swizzled 3D vector.
             */
            vec3 yxw() const;

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yyx() const;

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yyy() const;

            /**
             * @brief Returns a 3D vector with components y, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yyz() const;

            /**
             * @brief Returns a 3D vector with components y, y, and w.
             * @return The swizzled 3D vector.
             */
            vec3 yyw() const;

            /**
             * @brief Returns a 3D vector with components y, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yzx() const;

            /**
             * @brief Returns a 3D vector with components y, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yzy() const;

            /**
             * @brief Returns a 3D vector with components y, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yzz() const;

            /**
             * @brief Returns a 3D vector with components y, z, and w.
             * @return The swizzled 3D vector.
             */
            vec3 yzw() const;

            /**
             * @brief Returns a 3D vector with components y, w, and x.
             * @return The swizzled 3D vector.
             */
            vec3 ywx() const;

            /**
             * @brief Returns a 3D vector with components y, w, and y.
             * @return The swizzled 3D vector.
             */
            vec3 ywy() const;

            /**
             * @brief Returns a 3D vector with components y, w, and z.
             * @return The swizzled 3D vector.
             */
            vec3 ywz() const;

            /**
             * @brief Returns a 3D vector with components y, w, and w.
             * @return The swizzled 3D vector.
             */
            vec3 yww() const;

            /**
             * @brief Returns a 3D vector with components z, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zxx() const;

            /**
             * @brief Returns a 3D vector with components z, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zxy() const;

            /**
             * @brief Returns a 3D vector with components z, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zxz() const;

            /**
             * @brief Returns a 3D vector with components z, x, and w.
             * @return The swizzled 3D vector.
             */
            vec3 zxw() const;

            /**
             * @brief Returns a 3D vector with components z, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zyx() const;

            /**
             * @brief Returns a 3D vector with components z, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zyy() const;

            /**
             * @brief Returns a 3D vector with components z, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zyz() const;

            /**
             * @brief Returns a 3D vector with components z, y, and w.
             * @return The swizzled 3D vector.
             */
            vec3 zyw() const;

            /**
             * @brief Returns a 3D vector with components z, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zzx() const;

            /**
             * @brief Returns a 3D vector with components z, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zzy() const;

            /**
             * @brief Returns a 3D vector with components z, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zzz() const;

            /**
             * @brief Returns a 3D vector with components z, z, and w.
             * @return The swizzled 3D vector.
             */
            vec3 zzw() const;

            /**
             * @brief Returns a 3D vector with components z, w, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zwx() const;

            /**
             * @brief Returns a 3D vector with components z, w, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zwy() const;

            /**
             * @brief Returns a 3D vector with components z, w, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zwz() const;

            /**
             * @brief Returns a 3D vector with components z, w, and w.
             * @return The swizzled 3D vector.
             */
            vec3 zww() const;

            /**
             * @brief Returns a 3D vector with components w, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 wxx() const;

            /**
             * @brief Returns a 3D vector with components w, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 wxy() const;

            /**
             * @brief Returns a 3D vector with components w, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 wxz() const;

            /**
             * @brief Returns a 3D vector with components w, x, and w.
             * @return The swizzled 3D vector.
             */
            vec3 wxw() const;

            /**
             * @brief Returns a 3D vector with components w, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 wyx() const;

            /**
             * @brief Returns a 3D vector with components w, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 wyy() const;

            /**
             * @brief Returns a 3D vector with components w, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 wyz() const;

            /**
             * @brief Returns a 3D vector with components w, y, and w.
             * @return The swizzled 3D vector.
             */
            vec3 wyw() const;

            /**
             * @brief Returns a 3D vector with components w, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 wzx() const;

            /**
             * @brief Returns a 3D vector with components w, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 wzy() const;

            /**
             * @brief Returns a 3D vector with components w, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 wzz() const;

            /**
             * @brief Returns a 3D vector with components w, z, and w.
             * @return The swizzled 3D vector.
             */
            vec3 wzw() const;

            /**
             * @brief Returns a 3D vector with components w, w, and x.
             * @return The swizzled 3D vector.
             */
            vec3 wwx() const;

            /**
             * @brief Returns a 3D vector with components w, w, and y.
             * @return The swizzled 3D vector.
             */
            vec3 wwy() const;

            /**
             * @brief Returns a 3D vector with components w, w, and z.
             * @return The swizzled 3D vector.
             */
            vec3 wwz() const;

            /**
             * @brief Returns a 3D vector with components w, w, and w.
             * @return The swizzled 3D vector.
             */
            vec3 www() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xxxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xxxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xxxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xxxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xxyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xxyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xxyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xxyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xxzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xxzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xxzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xxzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xxwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xxwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xxwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, x, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xxww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xxww(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xyxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xyxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xyxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xyxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xyyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xyyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xyyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xyyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xyzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xyzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xyzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xyzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xywx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xywx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xywy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xywy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xywz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xywz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, y, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xyww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xyww(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xzxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xzxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xzxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xzxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xzyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xzyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xzyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xzyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xzzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xzzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xzzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xzzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xzwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xzwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xzwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, z, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xzww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xzww(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xwxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xwxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xwxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void xwxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xwyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xwyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xwyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void xwyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xwzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xwzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xwzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void xwzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void xwwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void xwwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void xwwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components x, w, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 xwww() const;

            /**
             * @brief Sets the components of the 4D vector to the x, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void xwww(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yxxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yxxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yxxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yxxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yxyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yxyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yxyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yxyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yxzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yxzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yxzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yxzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yxwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yxwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yxwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, x, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yxww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yxww(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yyxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yyxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yyxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yyxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yyyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yyyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yyyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yyyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yyzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yyzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yyzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yyzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yywx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yywx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yywy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yywy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yywz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yywz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, y, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yyww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yyww(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yzxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yzxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yzxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void yzxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yzyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yzyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yzyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void yzyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yzzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yzzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yzzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void yzzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void yzwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void yzwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void yzwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, z, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 yzww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void yzww(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 ywxx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void ywxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 ywxy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void ywxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 ywxz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void ywxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 ywxw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void ywxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 ywyx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void ywyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 ywyy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void ywyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 ywyz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void ywyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 ywyw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void ywyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 ywzx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void ywzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 ywzy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void ywzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 ywzz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void ywzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 ywzw() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void ywzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 ywwx() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void ywwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 ywwy() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void ywwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 ywwz() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void ywwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components y, w, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 ywww() const;

            /**
             * @brief Sets the components of the 4D vector to the y, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void ywww(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zxxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zxxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zxxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zxxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zxyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zxyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zxyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zxyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zxzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zxzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zxzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zxzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zxwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zxwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zxwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, x, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zxww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zxww(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zyxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zyxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zyxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zyxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zyyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zyyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zyyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zyyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zyzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zyzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zyzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zyzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zywx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zywx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zywy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zywy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zywz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zywz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, y, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zyww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zyww(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zzxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zzxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zzxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zzxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zzyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zzyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zzyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zzyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zzzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zzzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zzzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zzzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zzwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zzwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zzwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, z, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zzww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zzww(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zwxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zwxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zwxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void zwxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zwyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zwyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zwyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void zwyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zwzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zwzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zwzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void zwzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void zwwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void zwwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void zwwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components z, w, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 zwww() const;

            /**
             * @brief Sets the components of the 4D vector to the z, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void zwww(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wxxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wxxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wxxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wxxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wxxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wxxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wxxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wxxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wxyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wxyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wxyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wxyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wxyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wxyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wxyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wxyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wxzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wxzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wxzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wxzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wxzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wxzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wxzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wxzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wxwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wxwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wxwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wxwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wxwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wxwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, x, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wxww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, x, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wxww(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wyxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wyxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wyxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wyxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wyxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wyxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wyxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wyxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wyyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wyyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wyyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wyyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wyyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wyyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wyyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wyyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wyzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wyzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wyzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wyzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wyzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wyzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wyzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wyzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wywx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wywx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wywy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wywy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wywz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wywz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, y, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wyww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, y, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wyww(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wzxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wzxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wzxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wzxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wzxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wzxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wzxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wzxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wzyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wzyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wzyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wzyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wzyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wzyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wzyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wzyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wzzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wzzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wzzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wzzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wzzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wzzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wzzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wzzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wzwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wzwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wzwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wzwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wzwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wzwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, z, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wzww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, z, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wzww(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wwxx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and x components of the source vector.
             * @param value The source vector.
             */
            void wwxx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wwxy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and y components of the source vector.
             * @param value The source vector.
             */
            void wwxy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wwxz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and z components of the source vector.
             * @param value The source vector.
             */
            void wwxz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, x, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wwxw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, x, and w components of the source vector.
             * @param value The source vector.
             */
            void wwxw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wwyx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and x components of the source vector.
             * @param value The source vector.
             */
            void wwyx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wwyy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and y components of the source vector.
             * @param value The source vector.
             */
            void wwyy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wwyz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and z components of the source vector.
             * @param value The source vector.
             */
            void wwyz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, y, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wwyw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, y, and w components of the source vector.
             * @param value The source vector.
             */
            void wwyw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wwzx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and x components of the source vector.
             * @param value The source vector.
             */
            void wwzx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wwzy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and y components of the source vector.
             * @param value The source vector.
             */
            void wwzy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wwzz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and z components of the source vector.
             * @param value The source vector.
             */
            void wwzz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, z, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wwzw() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, z, and w components of the source vector.
             * @param value The source vector.
             */
            void wwzw(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and x.
             * @return The swizzled 4D vector.
             */
            vec4 wwwx() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and x components of the source vector.
             * @param value The source vector.
             */
            void wwwx(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and y.
             * @return The swizzled 4D vector.
             */
            vec4 wwwy() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and y components of the source vector.
             * @param value The source vector.
             */
            void wwwy(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and z.
             * @return The swizzled 4D vector.
             */
            vec4 wwwz() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and z components of the source vector.
             * @param value The source vector.
             */
            void wwwz(vec4 value);

            /**
             * @brief Returns a 4D vector with components w, w, w, and w.
             * @return The swizzled 4D vector.
             */
            vec4 wwww() const;

            /**
             * @brief Sets the components of the 4D vector to the w, w, w, and w components of the source vector.
             * @param value The source vector.
             */
            void wwww(vec4 value);

		    /**
		     * @brief Default constructor for vec4. Initializes the vector to (0, 0, 0, 0).
		     */
		    vec4();

		    /**
		     * @brief Constructs a 4D vector with the specified x, y, z, and w components.
		     * @param x The x-component of the vector.
		     * @param y The y-component of the vector.
		     * @param z The z-component of the vector.
		     * @param w The w-component of the vector.
		     */
		    vec4(float x, float y, float z, float w);

		    /**
		     * @brief Calculates the absolute values of each component of the vector.
		     * @param value The input vector.
		     * @return The vector with absolute values.
		     */
		    static vec4 abs(vec4 value);

		    /**
		     * @brief Checks if two vectors are approximately equal within a small tolerance.
		     * @param value1 The first vector for comparison.
		     * @param value2 The second vector for comparison.
		     * @return True if the vectors are approximately equal, false otherwise.
		     */
		    static bool approximately(vec4 value1, vec4 value2);

		    /**
		     * @brief Performs a barycentric interpolation between three vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param value3 The third vector.
		     * @param amount1 The weighting factor for the first vector.
		     * @param amount2 The weighting factor for the second vector.
		     * @return The interpolated vector.
		     */
		    static vec4 barycentric(vec4 value1, vec4 value2, vec4 value3, float amount1, float amount2);

		    /**
		     * @brief Performs a Catmull-Rom interpolation between four vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param value3 The third vector.
		     * @param value4 The fourth vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec4 catmullRom(vec4 value1, vec4 value2, vec4 value3, vec4 value4, float amount);

		    /**
		     * @brief Calculates the ceiling of each component of the vector.
		     * @param value The input vector.
		     * @return The vector with ceiling values.
		     */
		    static vec4 ceil(vec4 value);

		    /**
		     * @brief Clamps the vector components to a specified range.
		     * @param value The vector to clamp.
		     * @param minValue The minimum value for each component.
		     * @param maxValue The maximum value for each component.
		     * @return The clamped vector.
		     */
		    static vec4 clamp(vec4 value, float minValue, float maxValue);

		    /**
		     * @brief Clamps the vector components to a specified range.
		     * @param value The vector to clamp.
		     * @param minValue The minimum value for each component.
		     * @param maxValue The maximum value for each component.
		     * @return The clamped vector.
		     */
		    static vec4 clamp(vec4 value, vec4 minValue, vec4 maxValue);

		    /**
		     * @brief Calculates the Euclidean distance between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The distance between the vectors.
		     */
		    static float distance(vec4 value1, vec4 value2);

		    /**
		     * @brief Calculates the squared Euclidean distance between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The squared distance between the vectors.
		     */
		    static float distanceSquared(vec4 value1, vec4 value2);

		    /**
		     * @brief Calculates the dot product of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The dot product of the vectors.
		     */
		    static float dot(vec4 value1, vec4 value2);

		    /**
		     * @brief Returns the vector with components rounded downward to the nearest integer.
		     * @param value The vector to round.
		     * @return The rounded vector.
		     */
		    static vec4 floor(vec4 value);

            /**
             * @brief Extracts the fractional parts of each component of a 4D vector.
             *
             * @param value The input 4D vector.
             * @return A 4D vector containing the fractional parts of each component of the input vector.
             */
            static vec4 frac(vec4 value);

		    /**
		     * @brief Performs a Hermite spline interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param tangent1 The tangent vector at the first vector.
		     * @param value2 The second vector.
		     * @param tangent2 The tangent vector at the second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec4 hermite(vec4 value1, vec4 tangent1, vec4 value2, vec4 tangent2, float amount);

		    /**
		     * @brief Performs a linear interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec4 lerp(vec4 value1, vec4 value2, float amount);

		    /**
		     * @brief Performs an unclamped linear interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec4 lerpUnclamped(vec4 value1, vec4 value2, float amount);

		    /**
		     * @brief Performs a smooth interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @param quality The quality of the interpolation.
		     * @return The smoothly interpolated vector.
		     */
		    static vec4 lerpSmooth(vec4 value1, vec4 value2, float amount, Quality quality);

		    /**
		     * @brief Performs a smooth step interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param edge0 The lower edge.
		     * @param edge1 The upper edge.
		     * @param amount The interpolation factor.
		     * @param quality The quality of the interpolation.
		     * @return The smoothly interpolated vector.
		     */
		    static vec4 lerpSmoothStep(vec4 value1, vec4 value2, float edge0, float edge1, float amount, Quality quality);

		    /**
		     * @brief Returns the maximum components of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The vector with the maximum components.
		     */
		    static vec4 max(vec4 value1, vec4 value2);

		    /**
		     * @brief Returns the minimum components of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The vector with the minimum components.
		     */
		    static vec4 min(vec4 value1, vec4 value2);

		    /**
		     * @brief Normalizes the input vector.
		     * @param value The input vector.
		     * @return The normalized vector.
		     */
		    static vec4 normalize(vec4 value);

		    /**
		     * @brief Normalizes the vector.
		     */
		    void normalize();

		    /**
		     * @brief Projects a vector onto another vector.
		     * @param vector The vector to project.
		     * @param onNormal The vector onto which to project.
		     * @return The projected vector.
		     */
		    static vec4 project(vec4 vector, vec4 onNormal);

		    /**
		     * @brief Reflects a vector off a surface with the specified normal.
		     * @param vector The incident vector.
		     * @param onNormal The surface normal.
		     * @return The reflected vector.
		     */
		    static vec4 reflect(vec4 vector, vec4 onNormal);

		    /**
		     * @brief Refracts a vector through a surface with the specified normal and indices of refraction.
		     * @param vector The incident vector.
		     * @param onNormal The surface normal.
		     * @param ior The index of refraction of the incident medium.
		     * @param iot The index of refraction of the transmitted medium.
		     * @return The refracted vector.
		     */
		    static vec4 refract(vec4 vector, vec4 onNormal, float ior, float iot);

		    /**
		     * @brief Rejects a vector from another vector.
		     * @param vector The vector to reject.
		     * @param onNormal The vector from which to reject.
		     * @return The rejected vector.
		     */
		    static vec4 reject(vec4 vector, vec4 onNormal);

		    /**
		     * @brief Rounds each component of the vector to the nearest integer.
		     * @param value The input vector.
		     * @return The vector with rounded values.
		     */
		    static vec4 round(vec4 value);

		    /**
		     * @brief Performs a smooth step interpolation between two vectors.
		     * @param edge0 The lower edge.
		     * @param edge1 The upper edge.
		     * @param value The input vector.
		     * @param quality The quality of the interpolation.
		     * @return The smoothly interpolated vector.
		     */
		    static vec4 smoothstep(vec4 edge0, vec4 edge1, vec4 value, Quality quality);

		    /**
		     * @brief Truncates the components of the vector to the nearest integer values (towards zero).
		     * @param value The vector to truncate.
		     * @return The truncated vector.
		     */
		    static vec4 trunc(vec4 value);

		    /**
		     * @brief Negates each component of the vector.
		     * @return The negated vector.
		     */
		    vec4 operator -() const;

		    /**
		     * @brief Subtracts another vector from this vector.
		     * @param other The vector to subtract.
		     * @return The resulting vector.
		     */
		    vec4 operator -(vec4 other) const;

		    /**
		     * @brief Subtracts another vector from this vector in place.
		     * @param other The vector to subtract.
		     * @return Reference to this vector.
		     */
		    vec4& operator -=(vec4 other);

		    /**
		     * @brief Unary positive operator.
		     * @return A copy of this vector.
		     */
		    vec4 operator +() const;

		    /**
		     * @brief Adds another vector to this vector.
		     * @param other The vector to add.
		     * @return The resulting vector.
		     */
		    vec4 operator +(vec4 other) const;

		    /**
		     * @brief Adds another vector to this vector in place.
		     * @param other The vector to add.
		     * @return Reference to this vector.
		     */
		    vec4& operator +=(vec4 other);

		    /**
		     * @brief Multiplies this vector component-wise with another vector.
		     * @param other The vector to multiply with.
		     * @return The resulting vector.
		     */
		    vec4 operator *(vec4 other) const;

		    /**
		     * @brief Multiplies each component of the vec4 by the corresponding component of another vec4.
		     * @param other The vec4 to multiply with.
		     * @return A reference to the modified vec4.
		     */
		    vec4& operator *=(vec4 other);

		    /**
		     * @brief Multiplies this vector by a scalar.
		     * @param other The scalar value.
		     * @return The resulting vector.
		     */
		    vec4 operator *(float other) const;

		    /**
		     * @brief Multiplies this vector by a scalar in place.
		     * @param other The scalar value.
		     * @return Reference to this vector.
		     */
		    vec4& operator *=(float other);

		    /**
		     * @brief Multiplication operator to scale a vector by a scalar.
		     * @param lhs The scalar value.
		     * @param rhs The vector to be scaled.
		     * @return The scaled vector.
		     */
		    friend vec4 operator *(float lhs, vec4 rhs);

		    /**
		     * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to divide.
		     * @return The resulting vector after component-wise division.
		     */
		    vec4 operator /(vec4 other) const;

		    /**
		     * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to divide.
		     * @return A reference to the modified vector.
		     */
		    vec4& operator /= (vec4 other);

		    /**
		     * @brief Divides each component of the vec4 by a scalar value.
		     * @param other The scalar value to divide by.
		     * @return A new vec4 resulting from the division.
		     */
		    vec4 operator /(float other) const;

		    /**
		     * @brief Divides each component of the vec4 by a scalar value.
		     * @param other The scalar value to divide by.
		     * @return A reference to the modified vec4.
		     */
		    vec4& operator /=(float other);

		    /**
		     * @brief Division operator to divide each component of the vector by a scalar.
		     * @param lhs The scalar value.
		     * @param rhs The vector to be divided.
		     * @return The resulting vector after component-wise division.
		     */
		    friend vec4 operator /(float lhs, vec4 rhs);

		    /**
		     * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to compute the remainder.
		     * @return The resulting vector after component-wise modulo operation.
		     */
		    vec4 operator %(vec4 other) const;

		    /**
		     * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to compute the remainder.
		     * @return A reference to the modified vector.
		     */
		    vec4& operator %=(vec4 other);

		    /**
		     * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
		     * @param other The scalar value.
		     * @return The resulting vector after component-wise modulo operation.
		     */
		    vec4 operator %(float other) const;

		    /**
		     * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
		     * @param other The scalar value.
		     * @return A reference to the modified vector.
		     */
		    vec4& operator %=(float other);

		    /**
		     * @brief Equality comparison operator to check if two vectors are equal.
		     * @param other The vector to compare against.
		     * @return True if the vectors are equal, false otherwise.
		     */
		    bool operator ==(vec4 other) const;

		    /**
		     * @brief Inequality comparison operator to check if two vectors are not equal.
		     * @param other The vector to compare against.
		     * @return True if the vectors are not equal, false otherwise.
		     */
		    bool operator !=(vec4 other) const;

		    /**
		     * @brief Explicit conversion to a 2D vector.
		     * @return The 2D vector with the x, and y components from this vector.
		     */
		    explicit operator vec2() const;

		    /**
		     * @brief Explicit conversion to a 3D vector.
		     * @return The 3D vector with the x, y, and z components from this vector.
		     */
		    explicit operator vec3() const;

		    /**
		     * @brief Explicit conversion to a 2D vector.
		     * @return The 2D vector with the x, and y components from this vector.
		     */
		    explicit operator ivec2() const;

		    /**
		     * @brief Explicit conversion to a 3D vector.
		     * @return The 3D vector with the x, y, and z components from this vector.
		     */
		    explicit operator ivec3() const;

		    /**
		     * @brief Explicit conversion to a 4D vector.
		     * @return The 4D vector with the x, y, z, and w components from this vector.
		     */
		    explicit operator ivec4() const;

		    /**
		     * @brief Implicit vonversion operator to col.
		     * @return The col with the x, y, z, and w components from this vector mapped to r, g, b, and a.
		     */
		    operator col() const;
	    };
    }
}