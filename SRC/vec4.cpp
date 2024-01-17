#include "../INC/Aurora/Mathematics/vec4.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/ivec3.h"
#include "../INC/Aurora/Mathematics/ivec4.h"
#include "../INC/Aurora/Mathematics/col.h"

namespace Aurora::Mathematics
{
    vec4 vec4::zero()
    {
        return vec4(0, 0, 0, 0);
    }

    vec4 vec4::one()
    {
        return vec4(1, 1, 1, 1);
    }

    vec4 vec4::left()
    {
        return vec4(-1, 0, 0, 0);
    }

    vec4 vec4::right()
    {
        return vec4(1, 0, 0, 0);
    }

    vec4 vec4::down()
    {
        return vec4(0, -1, 0, 0);
    }

    vec4 vec4::up()
    {
        return vec4(0, 1, 0, 0);
    }

    vec4 vec4::back()
    {
        return vec4(0, 0, -1, 0);
    }

    vec4 vec4::forward()
    {
        return vec4(0, 0, 1, 0);
    }

    vec4 vec4::past()
    {
        return vec4(0, 0, 0, -1);
    }

    vec4 vec4::future()
    {
        return vec4(0, 0, 0, 1);
    }

    float vec4::length() const
    {
        return sqrt(lengthSquared());
    }

    float vec4::lengthSquared() const
    {
        return (x * x) + (y * y) + (z * z) + (w * w);
    }

    vec4 vec4::normalized() const
    {
        return normalize(*this);
    }

    vec2 vec4::xx() const
    {
        return vec2(x, x);
    }

    vec2 vec4::xy() const
    {
        return vec2(x, y);
    }

    vec2 vec4::xz() const
    {
        return vec2(x, z);
    }

    vec2 vec4::xw() const
    {
        return vec2(x, w);
    }

    vec2 vec4::yx() const
    {
        return vec2(y, x);
    }

    vec2 vec4::yy() const
    {
        return vec2(y, y);
    }

    vec2 vec4::yz() const
    {
        return vec2(y, z);
    }

    vec2 vec4::yw() const
    {
        return vec2(y, w);
    }

    vec2 vec4::zx() const
    {
        return vec2(z, x);
    }

    vec2 vec4::zy() const
    {
        return vec2(z, y);
    }

    vec2 vec4::zz() const
    {
        return vec2(z, z);
    }

    vec2 vec4::zw() const
    {
        return vec2(z, w);
    }

    vec2 vec4::wx() const
    {
        return vec2(w, x);
    }

    vec2 vec4::wy() const
    {
        return vec2(w, y);
    }

    vec2 vec4::wz() const
    {
        return vec2(w, z);
    }

    vec2 vec4::ww() const
    {
        return vec2(w, w);
    }

    vec3 vec4::xxx() const
    {
        return vec3(x, x, x);
    }

    vec3 vec4::xxy() const
    {
        return vec3(x, x, y);
    }

    vec3 vec4::xxz() const
    {
        return vec3(x, x, z);
    }

    vec3 vec4::xxw() const
    {
        return vec3(x, x, w);
    }

    vec3 vec4::xyx() const
    {
        return vec3(x, y, x);
    }

    vec3 vec4::xyy() const
    {
        return vec3(x, y, y);
    }

    vec3 vec4::xyz() const
    {
        return vec3(x, y, z);
    }

    vec3 vec4::xyw() const
    {
        return vec3(x, y, w);
    }

    vec3 vec4::xzx() const
    {
        return vec3(x, z, x);
    }

    vec3 vec4::xzy() const
    {
        return vec3(x, z, y);
    }

    vec3 vec4::xzz() const
    {
        return vec3(x, z, z);
    }

    vec3 vec4::xzw() const
    {
        return vec3(x, z, w);
    }

    vec3 vec4::xwx() const
    {
        return vec3(x, w, x);
    }

    vec3 vec4::xwy() const
    {
        return vec3(x, w, y);
    }

    vec3 vec4::xwz() const
    {
        return vec3(x, w, z);
    }

    vec3 vec4::xww() const
    {
        return vec3(x, w, w);
    }

    vec3 vec4::yxx() const
    {
        return vec3(y, x, x);
    }

    vec3 vec4::yxy() const
    {
        return vec3(y, x, y);
    }

    vec3 vec4::yxz() const
    {
        return vec3(y, x, z);
    }

    vec3 vec4::yxw() const
    {
        return vec3(y, x, w);
    }

    vec3 vec4::yyx() const
    {
        return vec3(y, y, x);
    }

    vec3 vec4::yyy() const
    {
        return vec3(y, y, y);
    }

    vec3 vec4::yyz() const
    {
        return vec3(y, y, z);
    }

    vec3 vec4::yyw() const
    {
        return vec3(y, y, w);
    }

    vec3 vec4::yzx() const
    {
        return vec3(y, z, x);
    }

    vec3 vec4::yzy() const
    {
        return vec3(y, z, y);
    }

    vec3 vec4::yzz() const
    {
        return vec3(y, z, z);
    }

    vec3 vec4::yzw() const
    {
        return vec3(y, z, w);
    }

    vec3 vec4::ywx() const
    {
        return vec3(y, w, x);
    }

    vec3 vec4::ywy() const
    {
        return vec3(y, w, y);
    }

    vec3 vec4::ywz() const
    {
        return vec3(y, w, z);
    }

    vec3 vec4::yww() const
    {
        return vec3(y, w, w);
    }

    vec3 vec4::zxx() const
    {
        return vec3(z, x, x);
    }

    vec3 vec4::zxy() const
    {
        return vec3(z, x, y);
    }

    vec3 vec4::zxz() const
    {
        return vec3(z, x, z);
    }

    vec3 vec4::zxw() const
    {
        return vec3(z, x, w);
    }

    vec3 vec4::zyx() const
    {
        return vec3(z, y, x);
    }

    vec3 vec4::zyy() const
    {
        return vec3(z, y, y);
    }

    vec3 vec4::zyz() const
    {
        return vec3(z, y, z);
    }

    vec3 vec4::zyw() const
    {
        return vec3(z, y, w);
    }

    vec3 vec4::zzx() const
    {
        return vec3(z, z, x);
    }

    vec3 vec4::zzy() const
    {
        return vec3(z, z, y);
    }

    vec3 vec4::zzz() const
    {
        return vec3(z, z, z);
    }

    vec3 vec4::zzw() const
    {
        return vec3(z, z, w);
    }

    vec3 vec4::zwx() const
    {
        return vec3(z, w, x);
    }

    vec3 vec4::zwy() const
    {
        return vec3(z, w, y);
    }

    vec3 vec4::zwz() const
    {
        return vec3(z, w, z);
    }

    vec3 vec4::zww() const
    {
        return vec3(z, w, w);
    }

    vec3 vec4::wxx() const
    {
        return vec3(w, x, x);
    }

    vec3 vec4::wxy() const
    {
        return vec3(w, x, y);
    }

    vec3 vec4::wxz() const
    {
        return vec3(w, x, z);
    }

    vec3 vec4::wxw() const
    {
        return vec3(w, x, w);
    }

    vec3 vec4::wyx() const
    {
        return vec3(w, y, x);
    }

    vec3 vec4::wyy() const
    {
        return vec3(w, y, y);
    }

    vec3 vec4::wyz() const
    {
        return vec3(w, y, z);
    }

    vec3 vec4::wyw() const
    {
        return vec3(w, y, w);
    }

    vec3 vec4::wzx() const
    {
        return vec3(w, z, x);
    }

    vec3 vec4::wzy() const
    {
        return vec3(w, z, y);
    }

    vec3 vec4::wzz() const
    {
        return vec3(w, z, z);
    }

    vec3 vec4::wzw() const
    {
        return vec3(w, z, w);
    }

    vec3 vec4::wwx() const
    {
        return vec3(w, w, x);
    }

    vec3 vec4::wwy() const
    {
        return vec3(w, w, y);
    }

    vec3 vec4::wwz() const
    {
        return vec3(w, w, z);
    }

    vec3 vec4::www() const
    {
        return vec3(w, w, w);
    }

    vec4 vec4::xxxx() const
    {
        return vec4(x, x, x, x);
    }

    void vec4::xxxx(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::xxxy() const
    {
        return vec4(x, x, x, y);
    }

    void vec4::xxxy(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::xxxz() const
    {
        return vec4(x, x, x, z);
    }

    void vec4::xxxz(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::xxxw() const
    {
        return vec4(x, x, x, w);
    }

    void vec4::xxxw(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::xxyx() const
    {
        return vec4(x, x, y, x);
    }

    void vec4::xxyx(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::xxyy() const
    {
        return vec4(x, x, y, y);
    }

    void vec4::xxyy(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::xxyz() const
    {
        return vec4(x, x, y, z);
    }

    void vec4::xxyz(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::xxyw() const
    {
        return vec4(x, x, y, w);
    }

    void vec4::xxyw(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::xxzx() const
    {
        return vec4(x, x, z, x);
    }

    void vec4::xxzx(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::xxzy() const
    {
        return vec4(x, x, z, y);
    }

    void vec4::xxzy(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::xxzz() const
    {
        return vec4(x, x, z, z);
    }

    void vec4::xxzz(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::xxzw() const
    {
        return vec4(x, x, z, w);
    }

    void vec4::xxzw(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::xxwx() const
    {
        return vec4(x, x, w, x);
    }

    void vec4::xxwx(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::xxwy() const
    {
        return vec4(x, x, w, y);
    }

    void vec4::xxwy(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::xxwz() const
    {
        return vec4(x, x, w, z);
    }

    void vec4::xxwz(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::xxww() const
    {
        return vec4(x, x, w, w);
    }

    void vec4::xxww(vec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::xyxx() const
    {
        return vec4(x, y, x, x);
    }

    void vec4::xyxx(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::xyxy() const
    {
        return vec4(x, y, x, y);
    }

    void vec4::xyxy(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::xyxz() const
    {
        return vec4(x, y, x, z);
    }

    void vec4::xyxz(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::xyxw() const
    {
        return vec4(x, y, x, w);
    }

    void vec4::xyxw(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::xyyx() const
    {
        return vec4(x, y, y, x);
    }

    void vec4::xyyx(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::xyyy() const
    {
        return vec4(x, y, y, y);
    }

    void vec4::xyyy(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::xyyz() const
    {
        return vec4(x, y, y, z);
    }

    void vec4::xyyz(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::xyyw() const
    {
        return vec4(x, y, y, w);
    }

    void vec4::xyyw(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::xyzx() const
    {
        return vec4(x, y, z, x);
    }

    void vec4::xyzx(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::xyzy() const
    {
        return vec4(x, y, z, y);
    }

    void vec4::xyzy(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::xyzz() const
    {
        return vec4(x, y, z, z);
    }

    void vec4::xyzz(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::xyzw() const
    {
        return vec4(x, y, z, w);
    }

    void vec4::xyzw(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::xywx() const
    {
        return vec4(x, y, w, x);
    }

    void vec4::xywx(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::xywy() const
    {
        return vec4(x, y, w, y);
    }

    void vec4::xywy(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::xywz() const
    {
        return vec4(x, y, w, z);
    }

    void vec4::xywz(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::xyww() const
    {
        return vec4(x, y, w, w);
    }

    void vec4::xyww(vec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::xzxx() const
    {
        return vec4(x, z, x, x);
    }

    void vec4::xzxx(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::xzxy() const
    {
        return vec4(x, z, x, y);
    }

    void vec4::xzxy(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::xzxz() const
    {
        return vec4(x, z, x, z);
    }

    void vec4::xzxz(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::xzxw() const
    {
        return vec4(x, z, x, w);
    }

    void vec4::xzxw(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::xzyx() const
    {
        return vec4(x, z, y, x);
    }

    void vec4::xzyx(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::xzyy() const
    {
        return vec4(x, z, y, y);
    }

    void vec4::xzyy(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::xzyz() const
    {
        return vec4(x, z, y, z);
    }

    void vec4::xzyz(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::xzyw() const
    {
        return vec4(x, z, y, w);
    }

    void vec4::xzyw(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::xzzx() const
    {
        return vec4(x, z, z, x);
    }

    void vec4::xzzx(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::xzzy() const
    {
        return vec4(x, z, z, y);
    }

    void vec4::xzzy(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::xzzz() const
    {
        return vec4(x, z, z, z);
    }

    void vec4::xzzz(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::xzzw() const
    {
        return vec4(x, z, z, w);
    }

    void vec4::xzzw(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::xzwx() const
    {
        return vec4(x, z, w, x);
    }

    void vec4::xzwx(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::xzwy() const
    {
        return vec4(x, z, w, y);
    }

    void vec4::xzwy(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::xzwz() const
    {
        return vec4(x, z, w, z);
    }

    void vec4::xzwz(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::xzww() const
    {
        return vec4(x, z, w, w);
    }

    void vec4::xzww(vec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::xwxx() const
    {
        return vec4(x, w, x, x);
    }

    void vec4::xwxx(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::xwxy() const
    {
        return vec4(x, w, x, y);
    }

    void vec4::xwxy(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::xwxz() const
    {
        return vec4(x, w, x, z);
    }

    void vec4::xwxz(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::xwxw() const
    {
        return vec4(x, w, x, w);
    }

    void vec4::xwxw(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::xwyx() const
    {
        return vec4(x, w, y, x);
    }

    void vec4::xwyx(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::xwyy() const
    {
        return vec4(x, w, y, y);
    }

    void vec4::xwyy(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::xwyz() const
    {
        return vec4(x, w, y, z);
    }

    void vec4::xwyz(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::xwyw() const
    {
        return vec4(x, w, y, w);
    }

    void vec4::xwyw(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::xwzx() const
    {
        return vec4(x, w, z, x);
    }

    void vec4::xwzx(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::xwzy() const
    {
        return vec4(x, w, z, y);
    }

    void vec4::xwzy(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::xwzz() const
    {
        return vec4(x, w, z, z);
    }

    void vec4::xwzz(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::xwzw() const
    {
        return vec4(x, w, z, w);
    }

    void vec4::xwzw(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::xwwx() const
    {
        return vec4(x, w, w, x);
    }

    void vec4::xwwx(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::xwwy() const
    {
        return vec4(x, w, w, y);
    }

    void vec4::xwwy(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::xwwz() const
    {
        return vec4(x, w, w, z);
    }

    void vec4::xwwz(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::xwww() const
    {
        return vec4(x, w, w, w);
    }

    void vec4::xwww(vec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::yxxx() const
    {
        return vec4(y, x, x, x);
    }

    void vec4::yxxx(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::yxxy() const
    {
        return vec4(y, x, x, y);
    }

    void vec4::yxxy(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::yxxz() const
    {
        return vec4(y, x, x, z);
    }

    void vec4::yxxz(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::yxxw() const
    {
        return vec4(y, x, x, w);
    }

    void vec4::yxxw(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::yxyx() const
    {
        return vec4(y, x, y, x);
    }

    void vec4::yxyx(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::yxyy() const
    {
        return vec4(y, x, y, y);
    }

    void vec4::yxyy(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::yxyz() const
    {
        return vec4(y, x, y, z);
    }

    void vec4::yxyz(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::yxyw() const
    {
        return vec4(y, x, y, w);
    }

    void vec4::yxyw(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::yxzx() const
    {
        return vec4(y, x, z, x);
    }

    void vec4::yxzx(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::yxzy() const
    {
        return vec4(y, x, z, y);
    }

    void vec4::yxzy(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::yxzz() const
    {
        return vec4(y, x, z, z);
    }

    void vec4::yxzz(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::yxzw() const
    {
        return vec4(y, x, z, w);
    }

    void vec4::yxzw(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::yxwx() const
    {
        return vec4(y, x, w, x);
    }

    void vec4::yxwx(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::yxwy() const
    {
        return vec4(y, x, w, y);
    }

    void vec4::yxwy(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::yxwz() const
    {
        return vec4(y, x, w, z);
    }

    void vec4::yxwz(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::yxww() const
    {
        return vec4(y, x, w, w);
    }

    void vec4::yxww(vec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::yyxx() const
    {
        return vec4(y, y, x, x);
    }

    void vec4::yyxx(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::yyxy() const
    {
        return vec4(y, y, x, y);
    }

    void vec4::yyxy(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::yyxz() const
    {
        return vec4(y, y, x, z);
    }

    void vec4::yyxz(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::yyxw() const
    {
        return vec4(y, y, x, w);
    }

    void vec4::yyxw(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::yyyx() const
    {
        return vec4(y, y, y, x);
    }

    void vec4::yyyx(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::yyyy() const
    {
        return vec4(y, y, y, y);
    }

    void vec4::yyyy(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::yyyz() const
    {
        return vec4(y, y, y, z);
    }

    void vec4::yyyz(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::yyyw() const
    {
        return vec4(y, y, y, w);
    }

    void vec4::yyyw(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::yyzx() const
    {
        return vec4(y, y, z, x);
    }

    void vec4::yyzx(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::yyzy() const
    {
        return vec4(y, y, z, y);
    }

    void vec4::yyzy(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::yyzz() const
    {
        return vec4(y, y, z, z);
    }

    void vec4::yyzz(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::yyzw() const
    {
        return vec4(y, y, z, w);
    }

    void vec4::yyzw(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::yywx() const
    {
        return vec4(y, y, w, x);
    }

    void vec4::yywx(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::yywy() const
    {
        return vec4(y, y, w, y);
    }

    void vec4::yywy(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::yywz() const
    {
        return vec4(y, y, w, z);
    }

    void vec4::yywz(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::yyww() const
    {
        return vec4(y, y, w, w);
    }

    void vec4::yyww(vec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::yzxx() const
    {
        return vec4(y, z, x, x);
    }

    void vec4::yzxx(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::yzxy() const
    {
        return vec4(y, z, x, y);
    }

    void vec4::yzxy(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::yzxz() const
    {
        return vec4(y, z, x, z);
    }

    void vec4::yzxz(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::yzxw() const
    {
        return vec4(y, z, x, w);
    }

    void vec4::yzxw(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::yzyx() const
    {
        return vec4(y, z, y, x);
    }

    void vec4::yzyx(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::yzyy() const
    {
        return vec4(y, z, y, y);
    }

    void vec4::yzyy(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::yzyz() const
    {
        return vec4(y, z, y, z);
    }

    void vec4::yzyz(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::yzyw() const
    {
        return vec4(y, z, y, w);
    }

    void vec4::yzyw(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::yzzx() const
    {
        return vec4(y, z, z, x);
    }

    void vec4::yzzx(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::yzzy() const
    {
        return vec4(y, z, z, y);
    }

    void vec4::yzzy(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::yzzz() const
    {
        return vec4(y, z, z, z);
    }

    void vec4::yzzz(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::yzzw() const
    {
        return vec4(y, z, z, w);
    }

    void vec4::yzzw(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::yzwx() const
    {
        return vec4(y, z, w, x);
    }

    void vec4::yzwx(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::yzwy() const
    {
        return vec4(y, z, w, y);
    }

    void vec4::yzwy(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::yzwz() const
    {
        return vec4(y, z, w, z);
    }

    void vec4::yzwz(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::yzww() const
    {
        return vec4(y, z, w, w);
    }

    void vec4::yzww(vec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::ywxx() const
    {
        return vec4(y, w, x, x);
    }

    void vec4::ywxx(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::ywxy() const
    {
        return vec4(y, w, x, y);
    }

    void vec4::ywxy(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::ywxz() const
    {
        return vec4(y, w, x, z);
    }

    void vec4::ywxz(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::ywxw() const
    {
        return vec4(y, w, x, w);
    }

    void vec4::ywxw(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::ywyx() const
    {
        return vec4(y, w, y, x);
    }

    void vec4::ywyx(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::ywyy() const
    {
        return vec4(y, w, y, y);
    }

    void vec4::ywyy(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::ywyz() const
    {
        return vec4(y, w, y, z);
    }

    void vec4::ywyz(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::ywyw() const
    {
        return vec4(y, w, y, w);
    }

    void vec4::ywyw(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::ywzx() const
    {
        return vec4(y, w, z, x);
    }

    void vec4::ywzx(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::ywzy() const
    {
        return vec4(y, w, z, y);
    }

    void vec4::ywzy(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::ywzz() const
    {
        return vec4(y, w, z, z);
    }

    void vec4::ywzz(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::ywzw() const
    {
        return vec4(y, w, z, w);
    }

    void vec4::ywzw(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::ywwx() const
    {
        return vec4(y, w, w, x);
    }

    void vec4::ywwx(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::ywwy() const
    {
        return vec4(y, w, w, y);
    }

    void vec4::ywwy(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::ywwz() const
    {
        return vec4(y, w, w, z);
    }

    void vec4::ywwz(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::ywww() const
    {
        return vec4(y, w, w, w);
    }

    void vec4::ywww(vec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::zxxx() const
    {
        return vec4(z, x, x, x);
    }

    void vec4::zxxx(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::zxxy() const
    {
        return vec4(z, x, x, y);
    }

    void vec4::zxxy(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::zxxz() const
    {
        return vec4(z, x, x, z);
    }

    void vec4::zxxz(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::zxxw() const
    {
        return vec4(z, x, x, w);
    }

    void vec4::zxxw(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::zxyx() const
    {
        return vec4(z, x, y, x);
    }

    void vec4::zxyx(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::zxyy() const
    {
        return vec4(z, x, y, y);
    }

    void vec4::zxyy(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::zxyz() const
    {
        return vec4(z, x, y, z);
    }

    void vec4::zxyz(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::zxyw() const
    {
        return vec4(z, x, y, w);
    }

    void vec4::zxyw(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::zxzx() const
    {
        return vec4(z, x, z, x);
    }

    void vec4::zxzx(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::zxzy() const
    {
        return vec4(z, x, z, y);
    }

    void vec4::zxzy(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::zxzz() const
    {
        return vec4(z, x, z, z);
    }

    void vec4::zxzz(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::zxzw() const
    {
        return vec4(z, x, z, w);
    }

    void vec4::zxzw(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::zxwx() const
    {
        return vec4(z, x, w, x);
    }

    void vec4::zxwx(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::zxwy() const
    {
        return vec4(z, x, w, y);
    }

    void vec4::zxwy(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::zxwz() const
    {
        return vec4(z, x, w, z);
    }

    void vec4::zxwz(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::zxww() const
    {
        return vec4(z, x, w, w);
    }

    void vec4::zxww(vec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::zyxx() const
    {
        return vec4(z, y, x, x);
    }

    void vec4::zyxx(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::zyxy() const
    {
        return vec4(z, y, x, y);
    }

    void vec4::zyxy(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::zyxz() const
    {
        return vec4(z, y, x, z);
    }

    void vec4::zyxz(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::zyxw() const
    {
        return vec4(z, y, x, w);
    }

    void vec4::zyxw(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::zyyx() const
    {
        return vec4(z, y, y, x);
    }

    void vec4::zyyx(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::zyyy() const
    {
        return vec4(z, y, y, y);
    }

    void vec4::zyyy(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::zyyz() const
    {
        return vec4(z, y, y, z);
    }

    void vec4::zyyz(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::zyyw() const
    {
        return vec4(z, y, y, w);
    }

    void vec4::zyyw(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::zyzx() const
    {
        return vec4(z, y, z, x);
    }

    void vec4::zyzx(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::zyzy() const
    {
        return vec4(z, y, z, y);
    }

    void vec4::zyzy(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::zyzz() const
    {
        return vec4(z, y, z, z);
    }

    void vec4::zyzz(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::zyzw() const
    {
        return vec4(z, y, z, w);
    }

    void vec4::zyzw(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::zywx() const
    {
        return vec4(z, y, w, x);
    }

    void vec4::zywx(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::zywy() const
    {
        return vec4(z, y, w, y);
    }

    void vec4::zywy(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::zywz() const
    {
        return vec4(z, y, w, z);
    }

    void vec4::zywz(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::zyww() const
    {
        return vec4(z, y, w, w);
    }

    void vec4::zyww(vec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::zzxx() const
    {
        return vec4(z, z, x, x);
    }

    void vec4::zzxx(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::zzxy() const
    {
        return vec4(z, z, x, y);
    }

    void vec4::zzxy(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::zzxz() const
    {
        return vec4(z, z, x, z);
    }

    void vec4::zzxz(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::zzxw() const
    {
        return vec4(z, z, x, w);
    }

    void vec4::zzxw(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::zzyx() const
    {
        return vec4(z, z, y, x);
    }

    void vec4::zzyx(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::zzyy() const
    {
        return vec4(z, z, y, y);
    }

    void vec4::zzyy(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::zzyz() const
    {
        return vec4(z, z, y, z);
    }

    void vec4::zzyz(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::zzyw() const
    {
        return vec4(z, z, y, w);
    }

    void vec4::zzyw(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::zzzx() const
    {
        return vec4(z, z, z, x);
    }

    void vec4::zzzx(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::zzzy() const
    {
        return vec4(z, z, z, y);
    }

    void vec4::zzzy(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::zzzz() const
    {
        return vec4(z, z, z, z);
    }

    void vec4::zzzz(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::zzzw() const
    {
        return vec4(z, z, z, w);
    }

    void vec4::zzzw(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::zzwx() const
    {
        return vec4(z, z, w, x);
    }

    void vec4::zzwx(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::zzwy() const
    {
        return vec4(z, z, w, y);
    }

    void vec4::zzwy(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::zzwz() const
    {
        return vec4(z, z, w, z);
    }

    void vec4::zzwz(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::zzww() const
    {
        return vec4(z, z, w, w);
    }

    void vec4::zzww(vec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::zwxx() const
    {
        return vec4(z, w, x, x);
    }

    void vec4::zwxx(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::zwxy() const
    {
        return vec4(z, w, x, y);
    }

    void vec4::zwxy(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::zwxz() const
    {
        return vec4(z, w, x, z);
    }

    void vec4::zwxz(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::zwxw() const
    {
        return vec4(z, w, x, w);
    }

    void vec4::zwxw(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::zwyx() const
    {
        return vec4(z, w, y, x);
    }

    void vec4::zwyx(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::zwyy() const
    {
        return vec4(z, w, y, y);
    }

    void vec4::zwyy(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::zwyz() const
    {
        return vec4(z, w, y, z);
    }

    void vec4::zwyz(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::zwyw() const
    {
        return vec4(z, w, y, w);
    }

    void vec4::zwyw(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::zwzx() const
    {
        return vec4(z, w, z, x);
    }

    void vec4::zwzx(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::zwzy() const
    {
        return vec4(z, w, z, y);
    }

    void vec4::zwzy(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::zwzz() const
    {
        return vec4(z, w, z, z);
    }

    void vec4::zwzz(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::zwzw() const
    {
        return vec4(z, w, z, w);
    }

    void vec4::zwzw(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::zwwx() const
    {
        return vec4(z, w, w, x);
    }

    void vec4::zwwx(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::zwwy() const
    {
        return vec4(z, w, w, y);
    }

    void vec4::zwwy(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::zwwz() const
    {
        return vec4(z, w, w, z);
    }

    void vec4::zwwz(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::zwww() const
    {
        return vec4(z, w, w, w);
    }

    void vec4::zwww(vec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::wxxx() const
    {
        return vec4(w, x, x, x);
    }

    void vec4::wxxx(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::wxxy() const
    {
        return vec4(w, x, x, y);
    }

    void vec4::wxxy(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::wxxz() const
    {
        return vec4(w, x, x, z);
    }

    void vec4::wxxz(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::wxxw() const
    {
        return vec4(w, x, x, w);
    }

    void vec4::wxxw(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::wxyx() const
    {
        return vec4(w, x, y, x);
    }

    void vec4::wxyx(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::wxyy() const
    {
        return vec4(w, x, y, y);
    }

    void vec4::wxyy(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::wxyz() const
    {
        return vec4(w, x, y, z);
    }

    void vec4::wxyz(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::wxyw() const
    {
        return vec4(w, x, y, w);
    }

    void vec4::wxyw(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::wxzx() const
    {
        return vec4(w, x, z, x);
    }

    void vec4::wxzx(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::wxzy() const
    {
        return vec4(w, x, z, y);
    }

    void vec4::wxzy(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::wxzz() const
    {
        return vec4(w, x, z, z);
    }

    void vec4::wxzz(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::wxzw() const
    {
        return vec4(w, x, z, w);
    }

    void vec4::wxzw(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::wxwx() const
    {
        return vec4(w, x, w, x);
    }

    void vec4::wxwx(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::wxwy() const
    {
        return vec4(w, x, w, y);
    }

    void vec4::wxwy(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::wxwz() const
    {
        return vec4(w, x, w, z);
    }

    void vec4::wxwz(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::wxww() const
    {
        return vec4(w, x, w, w);
    }

    void vec4::wxww(vec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::wyxx() const
    {
        return vec4(w, y, x, x);
    }

    void vec4::wyxx(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::wyxy() const
    {
        return vec4(w, y, x, y);
    }

    void vec4::wyxy(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::wyxz() const
    {
        return vec4(w, y, x, z);
    }

    void vec4::wyxz(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::wyxw() const
    {
        return vec4(w, y, x, w);
    }

    void vec4::wyxw(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::wyyx() const
    {
        return vec4(w, y, y, x);
    }

    void vec4::wyyx(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::wyyy() const
    {
        return vec4(w, y, y, y);
    }

    void vec4::wyyy(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::wyyz() const
    {
        return vec4(w, y, y, z);
    }

    void vec4::wyyz(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::wyyw() const
    {
        return vec4(w, y, y, w);
    }

    void vec4::wyyw(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::wyzx() const
    {
        return vec4(w, y, z, x);
    }

    void vec4::wyzx(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::wyzy() const
    {
        return vec4(w, y, z, y);
    }

    void vec4::wyzy(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::wyzz() const
    {
        return vec4(w, y, z, z);
    }

    void vec4::wyzz(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::wyzw() const
    {
        return vec4(w, y, z, w);
    }

    void vec4::wyzw(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::wywx() const
    {
        return vec4(w, y, w, x);
    }

    void vec4::wywx(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::wywy() const
    {
        return vec4(w, y, w, y);
    }

    void vec4::wywy(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::wywz() const
    {
        return vec4(w, y, w, z);
    }

    void vec4::wywz(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::wyww() const
    {
        return vec4(w, y, w, w);
    }

    void vec4::wyww(vec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::wzxx() const
    {
        return vec4(w, z, x, x);
    }

    void vec4::wzxx(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::wzxy() const
    {
        return vec4(w, z, x, y);
    }

    void vec4::wzxy(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::wzxz() const
    {
        return vec4(w, z, x, z);
    }

    void vec4::wzxz(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::wzxw() const
    {
        return vec4(w, z, x, w);
    }

    void vec4::wzxw(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::wzyx() const
    {
        return vec4(w, z, y, x);
    }

    void vec4::wzyx(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::wzyy() const
    {
        return vec4(w, z, y, y);
    }

    void vec4::wzyy(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::wzyz() const
    {
        return vec4(w, z, y, z);
    }

    void vec4::wzyz(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::wzyw() const
    {
        return vec4(w, z, y, w);
    }

    void vec4::wzyw(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::wzzx() const
    {
        return vec4(w, z, z, x);
    }

    void vec4::wzzx(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::wzzy() const
    {
        return vec4(w, z, z, y);
    }

    void vec4::wzzy(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::wzzz() const
    {
        return vec4(w, z, z, z);
    }

    void vec4::wzzz(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::wzzw() const
    {
        return vec4(w, z, z, w);
    }

    void vec4::wzzw(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::wzwx() const
    {
        return vec4(w, z, w, x);
    }

    void vec4::wzwx(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::wzwy() const
    {
        return vec4(w, z, w, y);
    }

    void vec4::wzwy(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::wzwz() const
    {
        return vec4(w, z, w, z);
    }

    void vec4::wzwz(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::wzww() const
    {
        return vec4(w, z, w, w);
    }

    void vec4::wzww(vec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    vec4 vec4::wwxx() const
    {
        return vec4(w, w, x, x);
    }

    void vec4::wwxx(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    vec4 vec4::wwxy() const
    {
        return vec4(w, w, x, y);
    }

    void vec4::wwxy(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    vec4 vec4::wwxz() const
    {
        return vec4(w, w, x, z);
    }

    void vec4::wwxz(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    vec4 vec4::wwxw() const
    {
        return vec4(w, w, x, w);
    }

    void vec4::wwxw(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    vec4 vec4::wwyx() const
    {
        return vec4(w, w, y, x);
    }

    void vec4::wwyx(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    vec4 vec4::wwyy() const
    {
        return vec4(w, w, y, y);
    }

    void vec4::wwyy(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    vec4 vec4::wwyz() const
    {
        return vec4(w, w, y, z);
    }

    void vec4::wwyz(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    vec4 vec4::wwyw() const
    {
        return vec4(w, w, y, w);
    }

    void vec4::wwyw(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    vec4 vec4::wwzx() const
    {
        return vec4(w, w, z, x);
    }

    void vec4::wwzx(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    vec4 vec4::wwzy() const
    {
        return vec4(w, w, z, y);
    }

    void vec4::wwzy(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    vec4 vec4::wwzz() const
    {
        return vec4(w, w, z, z);
    }

    void vec4::wwzz(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    vec4 vec4::wwzw() const
    {
        return vec4(w, w, z, w);
    }

    void vec4::wwzw(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    vec4 vec4::wwwx() const
    {
        return vec4(w, w, w, x);
    }

    void vec4::wwwx(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    vec4 vec4::wwwy() const
    {
        return vec4(w, w, w, y);
    }

    void vec4::wwwy(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    vec4 vec4::wwwz() const
    {
        return vec4(w, w, w, z);
    }

    void vec4::wwwz(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    vec4 vec4::wwww() const
    {
        return vec4(w, w, w, w);
    }

    void vec4::wwww(vec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    vec4::vec4() : x(0), y(0), z(0), w(0) { }

    vec4::vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) { }

    vec4 vec4::abs(vec4 value)
    {
        return vec4(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y),
            Mathematics::abs(value.z),
            Mathematics::abs(value.w)
        );
    }

    bool vec4::approximately(vec4 value1, vec4 value2)
    {
        return
            Mathematics::approximately(value1.x, value2.x) &&
            Mathematics::approximately(value1.y, value2.y) &&
            Mathematics::approximately(value1.z, value2.z) &&
            Mathematics::approximately(value1.w, value2.w);
    }

    vec4 vec4::barycentric(vec4 value1, vec4 value2, vec4 value3, float amount1, float amount2)
    {
        return vec4(
            Mathematics::barycentric(value1.x, value2.x, value3.x, amount1, amount2),
            Mathematics::barycentric(value1.y, value2.y, value3.y, amount1, amount2),
            Mathematics::barycentric(value1.z, value2.z, value3.z, amount1, amount2),
            Mathematics::barycentric(value1.w, value2.w, value3.w, amount1, amount2)
        );
    }

    vec4 vec4::catmullRom(vec4 value1, vec4 value2, vec4 value3, vec4 value4, float amount)
    {
        return vec4(
            Mathematics::catmullRom(value1.x, value2.x, value3.x, value4.x, amount),
            Mathematics::catmullRom(value1.y, value2.y, value3.y, value4.y, amount),
            Mathematics::catmullRom(value1.z, value2.z, value3.z, value4.z, amount),
            Mathematics::catmullRom(value1.w, value2.w, value3.w, value4.w, amount)
        );
    }

    vec4 vec4::ceil(vec4 value)
    {
        return vec4(
            Mathematics::ceil(value.x),
            Mathematics::ceil(value.y),
            Mathematics::ceil(value.z),
            Mathematics::ceil(value.w)
        );
    }

    vec4 vec4::clamp(vec4 value, float minValue, float maxValue)
    {
        return vec4(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue),
            Mathematics::clamp(value.z, minValue, maxValue),
            Mathematics::clamp(value.w, minValue, maxValue)
        );
    }

    vec4 vec4::clamp(vec4 value, vec4 minValue, vec4 maxValue)
    {
        return vec4(
            Mathematics::clamp(value.x, minValue.x, maxValue.x),
            Mathematics::clamp(value.y, minValue.y, maxValue.y),
            Mathematics::clamp(value.z, minValue.z, maxValue.z),
            Mathematics::clamp(value.w, minValue.w, maxValue.w)
        );
    }

    float vec4::distance(vec4 value1, vec4 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float vec4::distanceSquared(vec4 value1, vec4 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);
        float dz = Mathematics::distance(value1.z, value2.z);
        float dw = Mathematics::distance(value1.w, value2.w);

        return (dx * dx) + (dy * dy) + (dz * dz) + (dw * dw);
    }

    float vec4::dot(vec4 value1, vec4 value2)
    {
        return (value1.x * value2.x) + (value1.y * value2.y) + (value1.z * value2.z) + (value1.w * value2.w);
    }

    vec4 vec4::floor(vec4 value)
    {
        return vec4(
            Mathematics::floor(value.x),
            Mathematics::floor(value.y),
            Mathematics::floor(value.z),
            Mathematics::floor(value.w)
        );
    }

    vec4 vec4::frac(vec4 value)
    {
        return value - floor(value);
    }

    vec4 vec4::hermite(vec4 value1, vec4 tangent1, vec4 value2, vec4 tangent2, float amount)
    {
        return vec4(
            Mathematics::hermite(value1.x, tangent1.x, value2.x, tangent2.x, amount),
            Mathematics::hermite(value1.y, tangent1.y, value2.y, tangent2.y, amount),
            Mathematics::hermite(value1.z, tangent1.z, value2.z, tangent2.z, amount),
            Mathematics::hermite(value1.w, tangent1.w, value2.w, tangent2.w, amount)
        );
    }

    vec4 vec4::lerp(vec4 value1, vec4 value2, float amount)
    {
        return lerpUnclamped(value1, value2, clamp01(amount));
    }

    vec4 vec4::lerpUnclamped(vec4 value1, vec4 value2, float amount)
    {
        return vec4(
            Mathematics::lerpUnclamped(value1.x, value2.x, amount),
            Mathematics::lerpUnclamped(value1.y, value2.y, amount),
            Mathematics::lerpUnclamped(value1.z, value2.z, amount),
            Mathematics::lerpUnclamped(value1.w, value2.w, amount)
        );
    }

    vec4 vec4::lerpSmooth(vec4 value1, vec4 value2, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, smooth(quality, clamp01(amount)));
    }

    vec4 vec4::lerpSmoothStep(vec4 value1, vec4 value2, float edge0, float edge1, float amount, Quality quality)
    {
        return lerpUnclamped(value1, value2, Mathematics::smoothstep(edge0, edge1, amount, quality));
    }

    vec4 vec4::max(vec4 value1, vec4 value2)
    {
        return vec4(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y),
            Mathematics::max(value1.z, value2.z),
            Mathematics::max(value1.w, value2.w)
        );
    }

    vec4 vec4::min(vec4 value1, vec4 value2)
    {
        return vec4(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y),
            Mathematics::min(value1.z, value2.z),
            Mathematics::min(value1.w, value2.w)
        );
    }

    vec4 vec4::normalize(vec4 value)
    {
        value.normalize();
        return value;
    }

    void vec4::normalize()
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
    }

    vec4 vec4::project(vec4 vector, vec4 onNormal)
    {
        float dotProduct = dot(vector, onNormal);
        float magnitudeSquared = onNormal.lengthSquared();

        if (Mathematics::approximately(magnitudeSquared, 0))
        {
            return zero();
        }

        float scalar = dotProduct / magnitudeSquared;
        return onNormal * scalar;
    }

    vec4 vec4::reflect(vec4 vector, vec4 onNormal)
    {
        return vector - 2.0f * dot(vector, onNormal) * onNormal;
    }

    vec4 vec4::refract(vec4 vector, vec4 onNormal, float ior, float iot)
    {
        float dotNI = dot(vector, onNormal);
        float k = 1.0f - ior * ior * (1.0f - dotNI * dotNI);

        if (k < 0.0f)
            return zero();  // Total internal reflection

        return ior * vector - (ior * dotNI + sqrt(k)) * onNormal;
    }

    vec4 vec4::reject(vec4 vector, vec4 onNormal)
    {
        return vector - project(vector, onNormal);
    }

    vec4 vec4::round(vec4 value)
    {
        return vec4(
            Mathematics::round(value.x),
            Mathematics::round(value.y),
            Mathematics::round(value.z),
            Mathematics::round(value.w)
        );
    }

    vec4 vec4::smoothstep(vec4 edge0, vec4 edge1, vec4 value, Quality quality)
    {
        return vec4(
            Mathematics::smoothstep(edge0.x, edge1.x, value.x, quality),
            Mathematics::smoothstep(edge0.y, edge1.y, value.y, quality),
            Mathematics::smoothstep(edge0.z, edge1.z, value.z, quality),
            Mathematics::smoothstep(edge0.w, edge1.w, value.w, quality)
        );
    }

    vec4 vec4::trunc(vec4 value)
    {
        return vec4(
            Mathematics::trunc(value.x),
            Mathematics::trunc(value.y),
            Mathematics::trunc(value.z),
            Mathematics::trunc(value.w)
        );
    }

    vec4 vec4::operator-() const
    {
        return vec4(-x, -y, -z, -w);
    }

    vec4 vec4::operator-(vec4 other) const
    {
        return vec4(
            x - other.x,
            y - other.y,
            z - other.z,
            w - other.w
        );
    }

    vec4& vec4::operator-=(vec4 other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        w -= other.w;

        return *this;
    }

    vec4 vec4::operator+() const
    {
        return vec4(x, y, z, w);
    }

    vec4 vec4::operator+(vec4 other) const
    {
        return vec4(
            x + other.x,
            y + other.y,
            z + other.z,
            w + other.w
        );
    }

    vec4& vec4::operator+=(vec4 other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        w += other.w;

        return *this;
    }

    vec4 vec4::operator*(vec4 other) const
    {
        return vec4(
            x * other.x,
            y * other.y,
            z * other.z,
            w * other.w
        );
    }

    vec4& vec4::operator*=(vec4 other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;
        w *= other.w;

        return *this;
    }

    vec4 vec4::operator*(float other) const
    {
        return vec4(
            x * other,
            y * other,
            z * other,
            w * other
        );
    }

    vec4& vec4::operator*=(float other)
    {
        x *= other;
        y *= other;
        z *= other;
        w *= other;

        return *this;
    }

    vec4 operator*(float lhs, vec4 rhs)
    {
        return vec4(
            lhs * rhs.x,
            lhs * rhs.y,
            lhs * rhs.z,
            lhs * rhs.w
        );
    }

    vec4 vec4::operator/(vec4 other) const
    {
        return vec4(
            x / other.x,
            y / other.y,
            z / other.z,
            w / other.w
        );
    }

    vec4& vec4::operator/=(vec4 other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;
        w /= other.w;

        return *this;
    }

    vec4 vec4::operator/(float other) const
    {
        return vec4(
            x / other,
            y / other,
            z / other,
            w / other
        );
    }

    vec4& vec4::operator/=(float other)
    {
        x /= other;
        y /= other;
        z /= other;
        w /= other;

        return *this;
    }

    vec4 operator/(float lhs, vec4 rhs)
    {
        return vec4(
            lhs / rhs.x,
            lhs / rhs.y,
            lhs / rhs.z,
            lhs / rhs.w
        );
    }

    vec4 vec4::operator%(vec4 other) const
    {
        return vec4(
            mod(x, other.x),
            mod(y, other.y),
            mod(z, other.z),
            mod(w, other.w)
        );
    }

    vec4& vec4::operator%=(vec4 other)
    {
        x = mod(x, other.x);
        y = mod(y, other.y);
        z = mod(z, other.z);
        w = mod(w, other.w);

        return *this;
    }

    vec4 vec4::operator%(float other) const
    {
        return vec4(
            mod(x, other),
            mod(y, other),
            mod(z, other),
            mod(w, other)
        );
    }

    vec4& vec4::operator%=(float other)
    {
        x = mod(x, other);
        y = mod(y, other);
        z = mod(z, other);
        w = mod(w, other);

        return *this;
    }

    vec4 operator%(float lhs, vec4 rhs)
    {
        return vec4(
            mod(lhs, rhs.x),
            mod(lhs, rhs.y),
            mod(lhs, rhs.z),
            mod(lhs, rhs.w)
        );
    }

    bool vec4::operator==(vec4 other) const
    {
        return x == other.x && y == other.y && z == other.z && w == other.w;
    }

    bool vec4::operator!=(vec4 other) const
    {
        return !(*this == other);
    }

    vec4::operator vec2() const
    {
        return vec2(x, y);
    }

    vec4::operator vec3() const
    {
        return vec3(x, y, z);
    }

    vec4::operator ivec2() const
    {
        return ivec2(static_cast<int>(x), static_cast<int>(y));
    }

    vec4::operator ivec3() const
    {
        return ivec3(static_cast<int>(x), static_cast<int>(y), static_cast<int>(z));
    }

    vec4::operator ivec4() const
    {
        return ivec4(static_cast<int>(x), static_cast<int>(y), static_cast<int>(z), static_cast<int>(w));
    }

    vec4::operator col() const
    {
        return col(x, y, z, w);
    }
}