/**
 * @file vec3.h
 * @brief Defines the vec3 structure, representing a 3D vector.
 * @author Raistlin Wolfe
 */
#pragma once

namespace Aurora
{
    namespace Mathematics
    {
	    enum class Quality;
	    struct vec2;
	    struct vec4;
	    struct ivec2;
	    struct ivec3;
	    struct ivec4;

	    /**
	     * @brief 3D vector representation with x, y, and z components.
	     */
	    struct vec3
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
		     * @brief Creates a vector with both components set to zero.
		     * @return The zero vector.
		     */
		    static vec3 zero();

		    /**
		     * @brief Creates a vector with both components set to one.
		     * @return The vector with both components set to one.
		     */
		    static vec3 one();

		    /**
		     * @brief Creates a vector pointing left (negative x-axis).
		     * @return The left vector.
		     */
		    static vec3 left();

		    /**
		     * @brief Creates a vector pointing right (positive x-axis).
		     * @return The right vector.
		     */
		    static vec3 right();

		    /**
		     * @brief Creates a vector pointing down (negative y-axis).
		     * @return The down vector.
		     */
		    static vec3 down();

		    /**
		     * @brief Creates a vector pointing up (positive y-axis).
		     * @return The up vector.
		     */
		    static vec3 up();

		    /**
		     * @brief Creates a vector pointing back (negative z-axis).
		     * @return The back vector.
		     */
		    static vec3 back();

		    /**
		     * @brief Creates a vector pointing forward (positive z-axis).
		     * @return The forward vector.
		     */
		    static vec3 forward();

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
		    vec3 normalized() const;

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
             * @brief Returns a 3D vector with components x, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xxx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and x components of the source vector.
             * @param value The source vector.
             */
            void xxx(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xxy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and y components of the source vector.
             * @param value The source vector.
             */
            void xxy(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xxz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, x, and z components of the source vector.
             * @param value The source vector.
             */
            void xxz(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xyx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and x components of the source vector.
             * @param value The source vector.
             */
            void xyx(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xyy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and y components of the source vector.
             * @param value The source vector.
             */
            void xyy(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xyz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, y, and z components of the source vector.
             * @param value The source vector.
             */
            void xyz(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 xzx() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and x components of the source vector.
             * @param value The source vector.
             */
            void xzx(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 xzy() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and y components of the source vector.
             * @param value The source vector.
             */
            void xzy(vec3 value);

            /**
             * @brief Returns a 3D vector with components x, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 xzz() const;

            /**
             * @brief Sets the components of the 3D vector to the x, z, and z components of the source vector.
             * @param value The source vector.
             */
            void xzz(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yxx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and x components of the source vector.
             * @param value The source vector.
             */
            void yxx(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yxy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and y components of the source vector.
             * @param value The source vector.
             */
            void yxy(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yxz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, x, and z components of the source vector.
             * @param value The source vector.
             */
            void yxz(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yyx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and x components of the source vector.
             * @param value The source vector.
             */
            void yyx(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yyy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and y components of the source vector.
             * @param value The source vector.
             */
            void yyy(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yyz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, y, and z components of the source vector.
             * @param value The source vector.
             */
            void yyz(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 yzx() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and x components of the source vector.
             * @param value The source vector.
             */
            void yzx(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 yzy() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and y components of the source vector.
             * @param value The source vector.
             */
            void yzy(vec3 value);

            /**
             * @brief Returns a 3D vector with components y, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 yzz() const;

            /**
             * @brief Sets the components of the 3D vector to the y, z, and z components of the source vector.
             * @param value The source vector.
             */
            void yzz(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zxx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and x components of the source vector.
             * @param value The source vector.
             */
            void zxx(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zxy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and y components of the source vector.
             * @param value The source vector.
             */
            void zxy(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, x, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zxz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, x, and z components of the source vector.
             * @param value The source vector.
             */
            void zxz(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zyx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and x components of the source vector.
             * @param value The source vector.
             */
            void zyx(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zyy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and y components of the source vector.
             * @param value The source vector.
             */
            void zyy(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, y, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zyz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, y, and z components of the source vector.
             * @param value The source vector.
             */
            void zyz(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and x.
             * @return The swizzled 3D vector.
             */
            vec3 zzx() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and x components of the source vector.
             * @param value The source vector.
             */
            void zzx(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and y.
             * @return The swizzled 3D vector.
             */
            vec3 zzy() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and y components of the source vector.
             * @param value The source vector.
             */
            void zzy(vec3 value);

            /**
             * @brief Returns a 3D vector with components z, z, and z.
             * @return The swizzled 3D vector.
             */
            vec3 zzz() const;

            /**
             * @brief Sets the components of the 3D vector to the z, z, and z components of the source vector.
             * @param value The source vector.
             */
            void zzz(vec3 value);

            /**
             * @brief Returns a 4D vector with components x, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxxx() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxxy() const;

            /**
             * @brief Returns a 4D vector with components x, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxxz() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxyx() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxyy() const;

            /**
             * @brief Returns a 4D vector with components x, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxyz() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xxzx() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xxzy() const;

            /**
             * @brief Returns a 4D vector with components x, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xxzz() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyxx() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyxy() const;

            /**
             * @brief Returns a 4D vector with components x, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyxz() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyyx() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyyy() const;

            /**
             * @brief Returns a 4D vector with components x, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyyz() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xyzx() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xyzy() const;

            /**
             * @brief Returns a 4D vector with components x, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xyzz() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzxx() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzxy() const;

            /**
             * @brief Returns a 4D vector with components x, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzxz() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzyx() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzyy() const;

            /**
             * @brief Returns a 4D vector with components x, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzyz() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 xzzx() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 xzzy() const;

            /**
             * @brief Returns a 4D vector with components x, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 xzzz() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxxx() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxxy() const;

            /**
             * @brief Returns a 4D vector with components y, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxxz() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxyx() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxyy() const;

            /**
             * @brief Returns a 4D vector with components y, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxyz() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yxzx() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yxzy() const;

            /**
             * @brief Returns a 4D vector with components y, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yxzz() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyxx() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyxy() const;

            /**
             * @brief Returns a 4D vector with components y, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyxz() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyyx() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyyy() const;

            /**
             * @brief Returns a 4D vector with components y, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyyz() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yyzx() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yyzy() const;

            /**
             * @brief Returns a 4D vector with components y, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yyzz() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzxx() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzxy() const;

            /**
             * @brief Returns a 4D vector with components y, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzxz() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzyx() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzyy() const;

            /**
             * @brief Returns a 4D vector with components y, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzyz() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 yzzx() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 yzzy() const;

            /**
             * @brief Returns a 4D vector with components y, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 yzzz() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxxx() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxxy() const;

            /**
             * @brief Returns a 4D vector with components z, x, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxxz() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxyx() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxyy() const;

            /**
             * @brief Returns a 4D vector with components z, x, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxyz() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zxzx() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zxzy() const;

            /**
             * @brief Returns a 4D vector with components z, x, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zxzz() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyxx() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyxy() const;

            /**
             * @brief Returns a 4D vector with components z, y, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyxz() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyyx() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyyy() const;

            /**
             * @brief Returns a 4D vector with components z, y, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyyz() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zyzx() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zyzy() const;

            /**
             * @brief Returns a 4D vector with components z, y, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zyzz() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzxx() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzxy() const;

            /**
             * @brief Returns a 4D vector with components z, z, x, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzxz() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzyx() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzyy() const;

            /**
             * @brief Returns a 4D vector with components z, z, y, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzyz() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and x.
             * @return The swizzled 4D vector.
             */
            vec4 zzzx() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and y.
             * @return The swizzled 4D vector.
             */
            vec4 zzzy() const;

            /**
             * @brief Returns a 4D vector with components z, z, z, and z.
             * @return The swizzled 4D vector.
             */
            vec4 zzzz() const;

		    /**
		     * @brief Default constructor for vec3. Initializes the vector to (0, 0, 0).
		     */
		    vec3();

		    /**
		     * @brief Constructs a 3D vector with the specified x, y, and z components.
             * @param x The x-component of the vector.
             * @param y The y-component of the vector.
             * @param z The z-component of the vector.
		     */
		    vec3(float x, float y, float z);

		    /**
		     * @brief Calculates the absolute values of each component of the vector.
		     * @param value The input vector.
		     * @return The vector with absolute values.
		     */
		    static vec3 abs(vec3 value);

		    /**
		     * @brief Checks if two vectors are approximately equal within a small tolerance.
		     * @param value1 The first vector for comparison.
		     * @param value2 The second vector for comparison.
		     * @return True if the vectors are approximately equal, false otherwise.
		     */
		    static bool approximately(vec3 value1, vec3 value2);

		    /**
		     * @brief Performs a barycentric interpolation between three vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param value3 The third vector.
		     * @param amount1 The weighting factor for the first vector.
		     * @param amount2 The weighting factor for the second vector.
		     * @return The interpolated vector.
		     */
		    static vec3 barycentric(vec3 value1, vec3 value2, vec3 value3, float amount1, float amount2);

		    /**
		     * @brief Performs a Catmull-Rom interpolation between four vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param value3 The third vector.
		     * @param value4 The fourth vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec3 catmullRom(vec3 value1, vec3 value2, vec3 value3, vec3 value4, float amount);

		    /**
		     * @brief Calculates the ceiling of each component of the vector.
		     * @param value The input vector.
		     * @return The vector with ceiling values.
		     */
		    static vec3 ceil(vec3 value);

		    /**
		     * @brief Clamps the vector components to a specified range.
		     * @param value The vector to clamp.
		     * @param minValue The minimum value for each component.
		     * @param maxValue The maximum value for each component.
		     * @return The clamped vector.
		     */
		    static vec3 clamp(vec3 value, float minValue, float maxValue);

		    /**
		     * @brief Clamps the vector components to a specified range.
		     * @param value The vector to clamp.
		     * @param minValue The minimum value for each component.
		     * @param maxValue The maximum value for each component.
		     * @return The clamped vector.
		     */
		    static vec3 clamp(vec3 value, vec3 minValue, vec3 maxValue);

		    /**
		     * @brief Calculates the cross product of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The cross product of the vectors.
		     */
		    static vec3 cross(vec3 value1, vec3 value2);

		    /**
		     * @brief Calculates the Euclidean distance between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The distance between the vectors.
		     */
		    static float distance(vec3 value1, vec3 value2);

		    /**
		     * @brief Calculates the squared Euclidean distance between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The squared distance between the vectors.
		     */
		    static float distanceSquared(vec3 value1, vec3 value2);

		    /**
		     * @brief Calculates the dot product of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The dot product of the vectors.
		     */
		    static float dot(vec3 value1, vec3 value2);

		    /**
		     * @brief Returns the vector with components rounded downward to the nearest integer.
		     * @param value The vector to round.
		     * @return The rounded vector.
		     */
		    static vec3 floor(vec3 value);

            /**
             * @brief Extracts the fractional parts of each component of a 3D vector.
             *
             * @param value The input 3D vector.
             * @return A 2D vector containing the fractional parts of each component of the input vector.
             */
            static vec3 frac(vec3 value);

		    /**
		     * @brief Performs a Hermite spline interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param tangent1 The tangent vector at the first vector.
		     * @param value2 The second vector.
		     * @param tangent2 The tangent vector at the second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec3 hermite(vec3 value1, vec3 tangent1, vec3 value2, vec3 tangent2, float amount);

		    /**
		     * @brief Performs a linear interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec3 lerp(vec3 value1, vec3 value2, float amount);

		    /**
		     * @brief Performs an unclamped linear interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @return The interpolated vector.
		     */
		    static vec3 lerpUnclamped(vec3 value1, vec3 value2, float amount);

		    /**
		     * @brief Performs a smooth interpolation between two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @param amount The interpolation factor.
		     * @param quality The quality of the interpolation.
		     * @return The smoothly interpolated vector.
		     */
		    static vec3 lerpSmooth(vec3 value1, vec3 value2, float amount, Quality quality);

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
		    static vec3 lerpSmoothStep(vec3 value1, vec3 value2, float edge0, float edge1, float amount, Quality quality);

		    /**
		     * @brief Returns the maximum components of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The vector with the maximum components.
		     */
		    static vec3 max(vec3 value1, vec3 value2);

		    /**
		     * @brief Returns the minimum components of two vectors.
		     * @param value1 The first vector.
		     * @param value2 The second vector.
		     * @return The vector with the minimum components.
		     */
		    static vec3 min(vec3 value1, vec3 value2);

		    /**
		     * @brief Normalizes the input vector.
		     * @param value The input vector.
		     * @return The normalized vector.
		     */
		    static vec3 normalize(vec3 value);

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
		    static vec3 project(vec3 vector, vec3 onNormal);

		    /**
		     * @brief Reflects a vector off a surface with the specified normal.
		     * @param vector The incident vector.
		     * @param onNormal The surface normal.
		     * @return The reflected vector.
		     */
		    static vec3 reflect(vec3 vector, vec3 onNormal);

		    /**
		     * @brief Refracts a vector through a surface with the specified normal and indices of refraction.
		     * @param vector The incident vector.
		     * @param onNormal The surface normal.
		     * @param ior The index of refraction of the incident medium.
		     * @param iot The index of refraction of the transmitted medium.
		     * @return The refracted vector.
		     */
		    static vec3 refract(vec3 vector, vec3 onNormal, float ior, float iot);

		    /**
		     * @brief Rejects a vector from another vector.
		     * @param vector The vector to reject.
		     * @param onNormal The vector from which to reject.
		     * @return The rejected vector.
		     */
		    static vec3 reject(vec3 vector, vec3 onNormal);

		    /**
		     * @brief Rotates a vector by another vector representing angles.
		     * @param vector The vector to rotate.
		     * @param angle The angles by which to rotate.
		     * @return The rotated vector.
		     */
		    static vec3 rotate(vec3 vector, vec3 angle);

		    /**
		     * @brief Rotates a vector around a specified origin by an angle.
		     * @param vector The vector to rotate.
		     * @param origin The rotation origin.
		     * @param angle The angle by which to rotate.
		     * @return The rotated vector.
		     */
		    static vec3 rotateAround(vec3 vector, vec3 origin, vec3 angle);

		    /**
		     * @brief Rounds each component of the vector to the nearest integer.
		     * @param value The input vector.
		     * @return The vector with rounded values.
		     */
		    static vec3 round(vec3 value);

		    /**
		     * @brief Performs a smooth step interpolation between two vectors.
		     * @param edge0 The lower edge.
		     * @param edge1 The upper edge.
		     * @param value The input vector.
             * @param quality The quality of the interpolation.
		     * @return The smoothly interpolated vector.
		     */
		    static vec3 smoothstep(vec3 edge0, vec3 edge1, vec3 value, Quality quality);

		    /**
		     * @brief Truncates the components of the vector to the nearest integer values (towards zero).
		     * @param value The vector to truncate.
		     * @return The truncated vector.
		     */
		    static vec3 trunc(vec3 value);

		    /**
		     * @brief Negates each component of the vector.
		     * @return The negated vector.
		     */
		    vec3 operator -() const;

		    /**
		     * @brief Subtracts another vector from this vector.
		     * @param other The vector to subtract.
		     * @return The resulting vector.
		     */
		    vec3 operator -(vec3 other) const;

		    /**
		     * @brief Subtracts another vector from this vector in place.
		     * @param other The vector to subtract.
		     * @return Reference to this vector.
		     */
		    vec3& operator -=(vec3 other);

		    /**
		     * @brief Unary positive operator.
		     * @return A copy of this vector.
		     */
		    vec3 operator +() const;

		    /**
		     * @brief Adds another vector to this vector.
		     * @param other The vector to add.
		     * @return The resulting vector.
		     */
		    vec3 operator +(vec3 other) const;

		    /**
		     * @brief Adds another vector to this vector in place.
		     * @param other The vector to add.
		     * @return Reference to this vector.
		     */
		    vec3& operator +=(vec3 other);

		    /**
		     * @brief Multiplies this vector component-wise with another vector.
		     * @param other The vector to multiply with.
		     * @return The resulting vector.
		     */
		    vec3 operator *(vec3 other) const;

		    /**
		     * @brief Multiplies each component of the vec3 by the corresponding component of another vec3.
		     * @param other The vec3 to multiply with.
		     * @return A reference to the modified vec3.
		     */
		    vec3& operator *=(vec3 other);

		    /**
		     * @brief Multiplies this vector by a scalar.
		     * @param other The scalar value.
		     * @return The resulting vector.
		     */
		    vec3 operator *(float other) const;

		    /**
		     * @brief Multiplies this vector by a scalar in place.
		     * @param other The scalar value.
		     * @return Reference to this vector.
		     */
		    vec3& operator *=(float other);

		    /**
		     * @brief Multiplication operator to scale a vector by a scalar.
		     * @param lhs The scalar value.
		     * @param rhs The vector to be scaled.
		     * @return The scaled vector.
		     */
		    friend vec3 operator *(float lhs, vec3 rhs);

		    /**
		     * @brief Division operator to divide each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to divide.
		     * @return The resulting vector after component-wise division.
		     */
		    vec3 operator /(vec3 other) const;

		    /**
		     * @brief Compound assignment operator to divide each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to divide.
		     * @return A reference to the modified vector.
		     */
		    vec3& operator /= (vec3 other);

		    /**
		     * @brief Divides each component of the vec3 by a scalar value.
		     * @param other The scalar value to divide by.
		     * @return A new vec3 resulting from the division.
		     */
		    vec3 operator /(float other) const;

		    /**
		     * @brief Divides each component of the vec3 by a scalar value.
		     * @param other The scalar value to divide by.
		     * @return A reference to the modified vec3.
		     */
		    vec3& operator /=(float other);

		    /**
		     * @brief Division operator to divide each component of the vector by a scalar.
		     * @param lhs The scalar value.
		     * @param rhs The vector to be divided.
		     * @return The resulting vector after component-wise division.
		     */
		    friend vec3 operator /(float lhs, vec3 rhs);

		    /**
		     * @brief Modulo operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to compute the remainder.
		     * @return The resulting vector after component-wise modulo operation.
		     */
		    vec3 operator %(vec3 other) const;

		    /**
		     * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by the corresponding component of another vector.
		     * @param other The vector by which to compute the remainder.
		     * @return A reference to the modified vector.
		     */
		    vec3& operator %=(vec3 other);

		    /**
		     * @brief Modulo operator to compute the remainder of the division of each component of the vector by a scalar.
		     * @param other The scalar value.
		     * @return The resulting vector after component-wise modulo operation.
		     */
		    vec3 operator %(float other) const;

		    /**
		     * @brief Compound assignment operator to compute the remainder of the division of each component of the vector by a scalar.
		     * @param other The scalar value.
		     * @return A reference to the modified vector.
		     */
		    vec3& operator %=(float other);

		    /**
		     * @brief Equality comparison operator to check if two vectors are equal.
		     * @param other The vector to compare against.
		     * @return True if the vectors are equal, false otherwise.
		     */
		    bool operator ==(vec3 other) const;

		    /**
		     * @brief Inequality comparison operator to check if two vectors are not equal.
		     * @param other The vector to compare against.
		     * @return True if the vectors are not equal, false otherwise.
		     */
		    bool operator !=(vec3 other) const;

            /**
             * @brief Gets the element at the specified index in the vector.
             * @param idx The index of the element to retrieve.
             * @return The value at the specified index.
             */
            float operator[](int idx) const;

            /**
             * @brief Gets or sets the element at the specified index in the vector.
             * @param idx The index of the element to modify.
             * @return Reference to the element at the specified index.
             */
            float& operator[](int idx);

		    /**
		     * @brief Explicit conversion to a 2D vector.
		     * @return The 2D vector with the x, and y components from this vector.
		     */
		    explicit operator vec2() const;

		    /**
		     * @brief Implicit conversion to a 4D vector.
		     * @return The 4D vector with the x, y, and z components from this vector and the w component set to 0.
		     */
		    operator vec4() const;

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
		     * @return The 4D vector with the x, y, and z components from this vector and the w component set to 0.
		     */
		    explicit operator ivec4() const;
	    };
    }
}