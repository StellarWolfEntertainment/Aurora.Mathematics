#pragma warning(disable: 4244)
#include "../INC/Aurora/Mathematics/ivec4.h"

#include "../INC/Aurora/Mathematics/math.h"
#include "../INC/Aurora/Mathematics/angle.h"
#include "../INC/Aurora/Mathematics/Quality.h"
#include "../INC/Aurora/Mathematics/vec2.h"
#include "../INC/Aurora/Mathematics/vec3.h"
#include "../INC/Aurora/Mathematics/vec4.h"
#include "../INC/Aurora/Mathematics/ivec2.h"
#include "../INC/Aurora/Mathematics/ivec3.h"

namespace Aurora::Mathematics
{
    ivec4 ivec4::zero()
    {
        return ivec4(0, 0, 0, 0);
    }

    ivec4 ivec4::one()
    {
        return ivec4(1, 1, 1, 1);
    }

    ivec4 ivec4::left()
    {
        return ivec4(-1, 0, 0, 0);
    }

    ivec4 ivec4::right()
    {
        return ivec4(1, 0, 0, 0);
    }

    ivec4 ivec4::down()
    {
        return ivec4(0, -1, 0, 0);
    }

    ivec4 ivec4::up()
    {
        return ivec4(0, 1, 0, 0);
    }

    ivec4 ivec4::back()
    {
        return ivec4(0, 0, -1, 0);
    }

    ivec4 ivec4::forward()
    {
        return ivec4(0, 0, 1, 0);
    }

    ivec4 ivec4::past()
    {
        return ivec4(0, 0, 0, -1);
    }

    ivec4 ivec4::future()
    {
        return ivec4(0, 0, 0, 1);
    }

    float ivec4::length() const
    {
        return sqrt(lengthSquared());
    }

    float ivec4::lengthSquared() const
    {
        return (x * x) + (y * y) + (z * z) + (w * w);
    }

    ivec2 ivec4::xx() const
    {
        return ivec2(x, x);
    }

    ivec2 ivec4::xy() const
    {
        return ivec2(x, y);
    }

    ivec2 ivec4::xz() const
    {
        return ivec2(x, z);
    }

    ivec2 ivec4::xw() const
    {
        return ivec2(x, w);
    }

    ivec2 ivec4::yx() const
    {
        return ivec2(y, x);
    }

    ivec2 ivec4::yy() const
    {
        return ivec2(y, y);
    }

    ivec2 ivec4::yz() const
    {
        return ivec2(y, z);
    }

    ivec2 ivec4::yw() const
    {
        return ivec2(y, w);
    }

    ivec2 ivec4::zx() const
    {
        return ivec2(z, x);
    }

    ivec2 ivec4::zy() const
    {
        return ivec2(z, y);
    }

    ivec2 ivec4::zz() const
    {
        return ivec2(z, z);
    }

    ivec2 ivec4::zw() const
    {
        return ivec2(z, w);
    }

    ivec2 ivec4::wx() const
    {
        return ivec2(w, x);
    }

    ivec2 ivec4::wy() const
    {
        return ivec2(w, y);
    }

    ivec2 ivec4::wz() const
    {
        return ivec2(w, z);
    }

    ivec2 ivec4::ww() const
    {
        return ivec2(w, w);
    }

    ivec3 ivec4::xxx() const
    {
        return ivec3(x, x, x);
    }

    ivec3 ivec4::xxy() const
    {
        return ivec3(x, x, y);
    }

    ivec3 ivec4::xxz() const
    {
        return ivec3(x, x, z);
    }

    ivec3 ivec4::xxw() const
    {
        return ivec3(x, x, w);
    }

    ivec3 ivec4::xyx() const
    {
        return ivec3(x, y, x);
    }

    ivec3 ivec4::xyy() const
    {
        return ivec3(x, y, y);
    }

    ivec3 ivec4::xyz() const
    {
        return ivec3(x, y, z);
    }

    ivec3 ivec4::xyw() const
    {
        return ivec3(x, y, w);
    }

    ivec3 ivec4::xzx() const
    {
        return ivec3(x, z, x);
    }

    ivec3 ivec4::xzy() const
    {
        return ivec3(x, z, y);
    }

    ivec3 ivec4::xzz() const
    {
        return ivec3(x, z, z);
    }

    ivec3 ivec4::xzw() const
    {
        return ivec3(x, z, w);
    }

    ivec3 ivec4::xwx() const
    {
        return ivec3(x, w, x);
    }

    ivec3 ivec4::xwy() const
    {
        return ivec3(x, w, y);
    }

    ivec3 ivec4::xwz() const
    {
        return ivec3(x, w, z);
    }

    ivec3 ivec4::xww() const
    {
        return ivec3(x, w, w);
    }

    ivec3 ivec4::yxx() const
    {
        return ivec3(y, x, x);
    }

    ivec3 ivec4::yxy() const
    {
        return ivec3(y, x, y);
    }

    ivec3 ivec4::yxz() const
    {
        return ivec3(y, x, z);
    }

    ivec3 ivec4::yxw() const
    {
        return ivec3(y, x, w);
    }

    ivec3 ivec4::yyx() const
    {
        return ivec3(y, y, x);
    }

    ivec3 ivec4::yyy() const
    {
        return ivec3(y, y, y);
    }

    ivec3 ivec4::yyz() const
    {
        return ivec3(y, y, z);
    }

    ivec3 ivec4::yyw() const
    {
        return ivec3(y, y, w);
    }

    ivec3 ivec4::yzx() const
    {
        return ivec3(y, z, x);
    }

    ivec3 ivec4::yzy() const
    {
        return ivec3(y, z, y);
    }

    ivec3 ivec4::yzz() const
    {
        return ivec3(y, z, z);
    }

    ivec3 ivec4::yzw() const
    {
        return ivec3(y, z, w);
    }

    ivec3 ivec4::ywx() const
    {
        return ivec3(y, w, x);
    }

    ivec3 ivec4::ywy() const
    {
        return ivec3(y, w, y);
    }

    ivec3 ivec4::ywz() const
    {
        return ivec3(y, w, z);
    }

    ivec3 ivec4::yww() const
    {
        return ivec3(y, w, w);
    }

    ivec3 ivec4::zxx() const
    {
        return ivec3(z, x, x);
    }

    ivec3 ivec4::zxy() const
    {
        return ivec3(z, x, y);
    }

    ivec3 ivec4::zxz() const
    {
        return ivec3(z, x, z);
    }

    ivec3 ivec4::zxw() const
    {
        return ivec3(z, x, w);
    }

    ivec3 ivec4::zyx() const
    {
        return ivec3(z, y, x);
    }

    ivec3 ivec4::zyy() const
    {
        return ivec3(z, y, y);
    }

    ivec3 ivec4::zyz() const
    {
        return ivec3(z, y, z);
    }

    ivec3 ivec4::zyw() const
    {
        return ivec3(z, y, w);
    }

    ivec3 ivec4::zzx() const
    {
        return ivec3(z, z, x);
    }

    ivec3 ivec4::zzy() const
    {
        return ivec3(z, z, y);
    }

    ivec3 ivec4::zzz() const
    {
        return ivec3(z, z, z);
    }

    ivec3 ivec4::zzw() const
    {
        return ivec3(z, z, w);
    }

    ivec3 ivec4::zwx() const
    {
        return ivec3(z, w, x);
    }

    ivec3 ivec4::zwy() const
    {
        return ivec3(z, w, y);
    }

    ivec3 ivec4::zwz() const
    {
        return ivec3(z, w, z);
    }

    ivec3 ivec4::zww() const
    {
        return ivec3(z, w, w);
    }

    ivec3 ivec4::wxx() const
    {
        return ivec3(w, x, x);
    }

    ivec3 ivec4::wxy() const
    {
        return ivec3(w, x, y);
    }

    ivec3 ivec4::wxz() const
    {
        return ivec3(w, x, z);
    }

    ivec3 ivec4::wxw() const
    {
        return ivec3(w, x, w);
    }

    ivec3 ivec4::wyx() const
    {
        return ivec3(w, y, x);
    }

    ivec3 ivec4::wyy() const
    {
        return ivec3(w, y, y);
    }

    ivec3 ivec4::wyz() const
    {
        return ivec3(w, y, z);
    }

    ivec3 ivec4::wyw() const
    {
        return ivec3(w, y, w);
    }

    ivec3 ivec4::wzx() const
    {
        return ivec3(w, z, x);
    }

    ivec3 ivec4::wzy() const
    {
        return ivec3(w, z, y);
    }

    ivec3 ivec4::wzz() const
    {
        return ivec3(w, z, z);
    }

    ivec3 ivec4::wzw() const
    {
        return ivec3(w, z, w);
    }

    ivec3 ivec4::wwx() const
    {
        return ivec3(w, w, x);
    }

    ivec3 ivec4::wwy() const
    {
        return ivec3(w, w, y);
    }

    ivec3 ivec4::wwz() const
    {
        return ivec3(w, w, z);
    }

    ivec3 ivec4::www() const
    {
        return ivec3(w, w, w);
    }

    ivec4 ivec4::xxxx() const
    {
        return ivec4(x, x, x, x);
    }

    void ivec4::xxxx(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::xxxy() const
    {
        return ivec4(x, x, x, y);
    }

    void ivec4::xxxy(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::xxxz() const
    {
        return ivec4(x, x, x, z);
    }

    void ivec4::xxxz(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::xxxw() const
    {
        return ivec4(x, x, x, w);
    }

    void ivec4::xxxw(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::xxyx() const
    {
        return ivec4(x, x, y, x);
    }

    void ivec4::xxyx(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::xxyy() const
    {
        return ivec4(x, x, y, y);
    }

    void ivec4::xxyy(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::xxyz() const
    {
        return ivec4(x, x, y, z);
    }

    void ivec4::xxyz(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::xxyw() const
    {
        return ivec4(x, x, y, w);
    }

    void ivec4::xxyw(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::xxzx() const
    {
        return ivec4(x, x, z, x);
    }

    void ivec4::xxzx(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::xxzy() const
    {
        return ivec4(x, x, z, y);
    }

    void ivec4::xxzy(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::xxzz() const
    {
        return ivec4(x, x, z, z);
    }

    void ivec4::xxzz(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::xxzw() const
    {
        return ivec4(x, x, z, w);
    }

    void ivec4::xxzw(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::xxwx() const
    {
        return ivec4(x, x, w, x);
    }

    void ivec4::xxwx(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::xxwy() const
    {
        return ivec4(x, x, w, y);
    }

    void ivec4::xxwy(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::xxwz() const
    {
        return ivec4(x, x, w, z);
    }

    void ivec4::xxwz(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::xxww() const
    {
        return ivec4(x, x, w, w);
    }

    void ivec4::xxww(ivec4 value)
    {
        x = value.x;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::xyxx() const
    {
        return ivec4(x, y, x, x);
    }

    void ivec4::xyxx(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::xyxy() const
    {
        return ivec4(x, y, x, y);
    }

    void ivec4::xyxy(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::xyxz() const
    {
        return ivec4(x, y, x, z);
    }

    void ivec4::xyxz(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::xyxw() const
    {
        return ivec4(x, y, x, w);
    }

    void ivec4::xyxw(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::xyyx() const
    {
        return ivec4(x, y, y, x);
    }

    void ivec4::xyyx(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::xyyy() const
    {
        return ivec4(x, y, y, y);
    }

    void ivec4::xyyy(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::xyyz() const
    {
        return ivec4(x, y, y, z);
    }

    void ivec4::xyyz(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::xyyw() const
    {
        return ivec4(x, y, y, w);
    }

    void ivec4::xyyw(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::xyzx() const
    {
        return ivec4(x, y, z, x);
    }

    void ivec4::xyzx(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::xyzy() const
    {
        return ivec4(x, y, z, y);
    }

    void ivec4::xyzy(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::xyzz() const
    {
        return ivec4(x, y, z, z);
    }

    void ivec4::xyzz(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::xyzw() const
    {
        return ivec4(x, y, z, w);
    }

    void ivec4::xyzw(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::xywx() const
    {
        return ivec4(x, y, w, x);
    }

    void ivec4::xywx(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::xywy() const
    {
        return ivec4(x, y, w, y);
    }

    void ivec4::xywy(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::xywz() const
    {
        return ivec4(x, y, w, z);
    }

    void ivec4::xywz(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::xyww() const
    {
        return ivec4(x, y, w, w);
    }

    void ivec4::xyww(ivec4 value)
    {
        x = value.x;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::xzxx() const
    {
        return ivec4(x, z, x, x);
    }

    void ivec4::xzxx(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::xzxy() const
    {
        return ivec4(x, z, x, y);
    }

    void ivec4::xzxy(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::xzxz() const
    {
        return ivec4(x, z, x, z);
    }

    void ivec4::xzxz(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::xzxw() const
    {
        return ivec4(x, z, x, w);
    }

    void ivec4::xzxw(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::xzyx() const
    {
        return ivec4(x, z, y, x);
    }

    void ivec4::xzyx(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::xzyy() const
    {
        return ivec4(x, z, y, y);
    }

    void ivec4::xzyy(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::xzyz() const
    {
        return ivec4(x, z, y, z);
    }

    void ivec4::xzyz(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::xzyw() const
    {
        return ivec4(x, z, y, w);
    }

    void ivec4::xzyw(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::xzzx() const
    {
        return ivec4(x, z, z, x);
    }

    void ivec4::xzzx(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::xzzy() const
    {
        return ivec4(x, z, z, y);
    }

    void ivec4::xzzy(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::xzzz() const
    {
        return ivec4(x, z, z, z);
    }

    void ivec4::xzzz(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::xzzw() const
    {
        return ivec4(x, z, z, w);
    }

    void ivec4::xzzw(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::xzwx() const
    {
        return ivec4(x, z, w, x);
    }

    void ivec4::xzwx(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::xzwy() const
    {
        return ivec4(x, z, w, y);
    }

    void ivec4::xzwy(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::xzwz() const
    {
        return ivec4(x, z, w, z);
    }

    void ivec4::xzwz(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::xzww() const
    {
        return ivec4(x, z, w, w);
    }

    void ivec4::xzww(ivec4 value)
    {
        x = value.x;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::xwxx() const
    {
        return ivec4(x, w, x, x);
    }

    void ivec4::xwxx(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::xwxy() const
    {
        return ivec4(x, w, x, y);
    }

    void ivec4::xwxy(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::xwxz() const
    {
        return ivec4(x, w, x, z);
    }

    void ivec4::xwxz(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::xwxw() const
    {
        return ivec4(x, w, x, w);
    }

    void ivec4::xwxw(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::xwyx() const
    {
        return ivec4(x, w, y, x);
    }

    void ivec4::xwyx(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::xwyy() const
    {
        return ivec4(x, w, y, y);
    }

    void ivec4::xwyy(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::xwyz() const
    {
        return ivec4(x, w, y, z);
    }

    void ivec4::xwyz(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::xwyw() const
    {
        return ivec4(x, w, y, w);
    }

    void ivec4::xwyw(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::xwzx() const
    {
        return ivec4(x, w, z, x);
    }

    void ivec4::xwzx(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::xwzy() const
    {
        return ivec4(x, w, z, y);
    }

    void ivec4::xwzy(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::xwzz() const
    {
        return ivec4(x, w, z, z);
    }

    void ivec4::xwzz(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::xwzw() const
    {
        return ivec4(x, w, z, w);
    }

    void ivec4::xwzw(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::xwwx() const
    {
        return ivec4(x, w, w, x);
    }

    void ivec4::xwwx(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::xwwy() const
    {
        return ivec4(x, w, w, y);
    }

    void ivec4::xwwy(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::xwwz() const
    {
        return ivec4(x, w, w, z);
    }

    void ivec4::xwwz(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::xwww() const
    {
        return ivec4(x, w, w, w);
    }

    void ivec4::xwww(ivec4 value)
    {
        x = value.x;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::yxxx() const
    {
        return ivec4(y, x, x, x);
    }

    void ivec4::yxxx(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::yxxy() const
    {
        return ivec4(y, x, x, y);
    }

    void ivec4::yxxy(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::yxxz() const
    {
        return ivec4(y, x, x, z);
    }

    void ivec4::yxxz(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::yxxw() const
    {
        return ivec4(y, x, x, w);
    }

    void ivec4::yxxw(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::yxyx() const
    {
        return ivec4(y, x, y, x);
    }

    void ivec4::yxyx(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::yxyy() const
    {
        return ivec4(y, x, y, y);
    }

    void ivec4::yxyy(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::yxyz() const
    {
        return ivec4(y, x, y, z);
    }

    void ivec4::yxyz(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::yxyw() const
    {
        return ivec4(y, x, y, w);
    }

    void ivec4::yxyw(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::yxzx() const
    {
        return ivec4(y, x, z, x);
    }

    void ivec4::yxzx(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::yxzy() const
    {
        return ivec4(y, x, z, y);
    }

    void ivec4::yxzy(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::yxzz() const
    {
        return ivec4(y, x, z, z);
    }

    void ivec4::yxzz(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::yxzw() const
    {
        return ivec4(y, x, z, w);
    }

    void ivec4::yxzw(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::yxwx() const
    {
        return ivec4(y, x, w, x);
    }

    void ivec4::yxwx(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::yxwy() const
    {
        return ivec4(y, x, w, y);
    }

    void ivec4::yxwy(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::yxwz() const
    {
        return ivec4(y, x, w, z);
    }

    void ivec4::yxwz(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::yxww() const
    {
        return ivec4(y, x, w, w);
    }

    void ivec4::yxww(ivec4 value)
    {
        x = value.y;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::yyxx() const
    {
        return ivec4(y, y, x, x);
    }

    void ivec4::yyxx(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::yyxy() const
    {
        return ivec4(y, y, x, y);
    }

    void ivec4::yyxy(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::yyxz() const
    {
        return ivec4(y, y, x, z);
    }

    void ivec4::yyxz(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::yyxw() const
    {
        return ivec4(y, y, x, w);
    }

    void ivec4::yyxw(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::yyyx() const
    {
        return ivec4(y, y, y, x);
    }

    void ivec4::yyyx(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::yyyy() const
    {
        return ivec4(y, y, y, y);
    }

    void ivec4::yyyy(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::yyyz() const
    {
        return ivec4(y, y, y, z);
    }

    void ivec4::yyyz(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::yyyw() const
    {
        return ivec4(y, y, y, w);
    }

    void ivec4::yyyw(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::yyzx() const
    {
        return ivec4(y, y, z, x);
    }

    void ivec4::yyzx(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::yyzy() const
    {
        return ivec4(y, y, z, y);
    }

    void ivec4::yyzy(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::yyzz() const
    {
        return ivec4(y, y, z, z);
    }

    void ivec4::yyzz(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::yyzw() const
    {
        return ivec4(y, y, z, w);
    }

    void ivec4::yyzw(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::yywx() const
    {
        return ivec4(y, y, w, x);
    }

    void ivec4::yywx(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::yywy() const
    {
        return ivec4(y, y, w, y);
    }

    void ivec4::yywy(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::yywz() const
    {
        return ivec4(y, y, w, z);
    }

    void ivec4::yywz(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::yyww() const
    {
        return ivec4(y, y, w, w);
    }

    void ivec4::yyww(ivec4 value)
    {
        x = value.y;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::yzxx() const
    {
        return ivec4(y, z, x, x);
    }

    void ivec4::yzxx(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::yzxy() const
    {
        return ivec4(y, z, x, y);
    }

    void ivec4::yzxy(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::yzxz() const
    {
        return ivec4(y, z, x, z);
    }

    void ivec4::yzxz(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::yzxw() const
    {
        return ivec4(y, z, x, w);
    }

    void ivec4::yzxw(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::yzyx() const
    {
        return ivec4(y, z, y, x);
    }

    void ivec4::yzyx(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::yzyy() const
    {
        return ivec4(y, z, y, y);
    }

    void ivec4::yzyy(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::yzyz() const
    {
        return ivec4(y, z, y, z);
    }

    void ivec4::yzyz(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::yzyw() const
    {
        return ivec4(y, z, y, w);
    }

    void ivec4::yzyw(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::yzzx() const
    {
        return ivec4(y, z, z, x);
    }

    void ivec4::yzzx(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::yzzy() const
    {
        return ivec4(y, z, z, y);
    }

    void ivec4::yzzy(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::yzzz() const
    {
        return ivec4(y, z, z, z);
    }

    void ivec4::yzzz(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::yzzw() const
    {
        return ivec4(y, z, z, w);
    }

    void ivec4::yzzw(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::yzwx() const
    {
        return ivec4(y, z, w, x);
    }

    void ivec4::yzwx(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::yzwy() const
    {
        return ivec4(y, z, w, y);
    }

    void ivec4::yzwy(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::yzwz() const
    {
        return ivec4(y, z, w, z);
    }

    void ivec4::yzwz(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::yzww() const
    {
        return ivec4(y, z, w, w);
    }

    void ivec4::yzww(ivec4 value)
    {
        x = value.y;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::ywxx() const
    {
        return ivec4(y, w, x, x);
    }

    void ivec4::ywxx(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::ywxy() const
    {
        return ivec4(y, w, x, y);
    }

    void ivec4::ywxy(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::ywxz() const
    {
        return ivec4(y, w, x, z);
    }

    void ivec4::ywxz(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::ywxw() const
    {
        return ivec4(y, w, x, w);
    }

    void ivec4::ywxw(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::ywyx() const
    {
        return ivec4(y, w, y, x);
    }

    void ivec4::ywyx(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::ywyy() const
    {
        return ivec4(y, w, y, y);
    }

    void ivec4::ywyy(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::ywyz() const
    {
        return ivec4(y, w, y, z);
    }

    void ivec4::ywyz(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::ywyw() const
    {
        return ivec4(y, w, y, w);
    }

    void ivec4::ywyw(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::ywzx() const
    {
        return ivec4(y, w, z, x);
    }

    void ivec4::ywzx(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::ywzy() const
    {
        return ivec4(y, w, z, y);
    }

    void ivec4::ywzy(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::ywzz() const
    {
        return ivec4(y, w, z, z);
    }

    void ivec4::ywzz(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::ywzw() const
    {
        return ivec4(y, w, z, w);
    }

    void ivec4::ywzw(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::ywwx() const
    {
        return ivec4(y, w, w, x);
    }

    void ivec4::ywwx(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::ywwy() const
    {
        return ivec4(y, w, w, y);
    }

    void ivec4::ywwy(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::ywwz() const
    {
        return ivec4(y, w, w, z);
    }

    void ivec4::ywwz(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::ywww() const
    {
        return ivec4(y, w, w, w);
    }

    void ivec4::ywww(ivec4 value)
    {
        x = value.y;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::zxxx() const
    {
        return ivec4(z, x, x, x);
    }

    void ivec4::zxxx(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::zxxy() const
    {
        return ivec4(z, x, x, y);
    }

    void ivec4::zxxy(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::zxxz() const
    {
        return ivec4(z, x, x, z);
    }

    void ivec4::zxxz(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::zxxw() const
    {
        return ivec4(z, x, x, w);
    }

    void ivec4::zxxw(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::zxyx() const
    {
        return ivec4(z, x, y, x);
    }

    void ivec4::zxyx(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::zxyy() const
    {
        return ivec4(z, x, y, y);
    }

    void ivec4::zxyy(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::zxyz() const
    {
        return ivec4(z, x, y, z);
    }

    void ivec4::zxyz(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::zxyw() const
    {
        return ivec4(z, x, y, w);
    }

    void ivec4::zxyw(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::zxzx() const
    {
        return ivec4(z, x, z, x);
    }

    void ivec4::zxzx(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::zxzy() const
    {
        return ivec4(z, x, z, y);
    }

    void ivec4::zxzy(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::zxzz() const
    {
        return ivec4(z, x, z, z);
    }

    void ivec4::zxzz(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::zxzw() const
    {
        return ivec4(z, x, z, w);
    }

    void ivec4::zxzw(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::zxwx() const
    {
        return ivec4(z, x, w, x);
    }

    void ivec4::zxwx(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::zxwy() const
    {
        return ivec4(z, x, w, y);
    }

    void ivec4::zxwy(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::zxwz() const
    {
        return ivec4(z, x, w, z);
    }

    void ivec4::zxwz(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::zxww() const
    {
        return ivec4(z, x, w, w);
    }

    void ivec4::zxww(ivec4 value)
    {
        x = value.z;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::zyxx() const
    {
        return ivec4(z, y, x, x);
    }

    void ivec4::zyxx(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::zyxy() const
    {
        return ivec4(z, y, x, y);
    }

    void ivec4::zyxy(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::zyxz() const
    {
        return ivec4(z, y, x, z);
    }

    void ivec4::zyxz(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::zyxw() const
    {
        return ivec4(z, y, x, w);
    }

    void ivec4::zyxw(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::zyyx() const
    {
        return ivec4(z, y, y, x);
    }

    void ivec4::zyyx(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::zyyy() const
    {
        return ivec4(z, y, y, y);
    }

    void ivec4::zyyy(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::zyyz() const
    {
        return ivec4(z, y, y, z);
    }

    void ivec4::zyyz(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::zyyw() const
    {
        return ivec4(z, y, y, w);
    }

    void ivec4::zyyw(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::zyzx() const
    {
        return ivec4(z, y, z, x);
    }

    void ivec4::zyzx(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::zyzy() const
    {
        return ivec4(z, y, z, y);
    }

    void ivec4::zyzy(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::zyzz() const
    {
        return ivec4(z, y, z, z);
    }

    void ivec4::zyzz(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::zyzw() const
    {
        return ivec4(z, y, z, w);
    }

    void ivec4::zyzw(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::zywx() const
    {
        return ivec4(z, y, w, x);
    }

    void ivec4::zywx(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::zywy() const
    {
        return ivec4(z, y, w, y);
    }

    void ivec4::zywy(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::zywz() const
    {
        return ivec4(z, y, w, z);
    }

    void ivec4::zywz(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::zyww() const
    {
        return ivec4(z, y, w, w);
    }

    void ivec4::zyww(ivec4 value)
    {
        x = value.z;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::zzxx() const
    {
        return ivec4(z, z, x, x);
    }

    void ivec4::zzxx(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::zzxy() const
    {
        return ivec4(z, z, x, y);
    }

    void ivec4::zzxy(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::zzxz() const
    {
        return ivec4(z, z, x, z);
    }

    void ivec4::zzxz(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::zzxw() const
    {
        return ivec4(z, z, x, w);
    }

    void ivec4::zzxw(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::zzyx() const
    {
        return ivec4(z, z, y, x);
    }

    void ivec4::zzyx(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::zzyy() const
    {
        return ivec4(z, z, y, y);
    }

    void ivec4::zzyy(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::zzyz() const
    {
        return ivec4(z, z, y, z);
    }

    void ivec4::zzyz(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::zzyw() const
    {
        return ivec4(z, z, y, w);
    }

    void ivec4::zzyw(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::zzzx() const
    {
        return ivec4(z, z, z, x);
    }

    void ivec4::zzzx(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::zzzy() const
    {
        return ivec4(z, z, z, y);
    }

    void ivec4::zzzy(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::zzzz() const
    {
        return ivec4(z, z, z, z);
    }

    void ivec4::zzzz(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::zzzw() const
    {
        return ivec4(z, z, z, w);
    }

    void ivec4::zzzw(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::zzwx() const
    {
        return ivec4(z, z, w, x);
    }

    void ivec4::zzwx(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::zzwy() const
    {
        return ivec4(z, z, w, y);
    }

    void ivec4::zzwy(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::zzwz() const
    {
        return ivec4(z, z, w, z);
    }

    void ivec4::zzwz(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::zzww() const
    {
        return ivec4(z, z, w, w);
    }

    void ivec4::zzww(ivec4 value)
    {
        x = value.z;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::zwxx() const
    {
        return ivec4(z, w, x, x);
    }

    void ivec4::zwxx(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::zwxy() const
    {
        return ivec4(z, w, x, y);
    }

    void ivec4::zwxy(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::zwxz() const
    {
        return ivec4(z, w, x, z);
    }

    void ivec4::zwxz(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::zwxw() const
    {
        return ivec4(z, w, x, w);
    }

    void ivec4::zwxw(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::zwyx() const
    {
        return ivec4(z, w, y, x);
    }

    void ivec4::zwyx(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::zwyy() const
    {
        return ivec4(z, w, y, y);
    }

    void ivec4::zwyy(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::zwyz() const
    {
        return ivec4(z, w, y, z);
    }

    void ivec4::zwyz(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::zwyw() const
    {
        return ivec4(z, w, y, w);
    }

    void ivec4::zwyw(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::zwzx() const
    {
        return ivec4(z, w, z, x);
    }

    void ivec4::zwzx(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::zwzy() const
    {
        return ivec4(z, w, z, y);
    }

    void ivec4::zwzy(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::zwzz() const
    {
        return ivec4(z, w, z, z);
    }

    void ivec4::zwzz(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::zwzw() const
    {
        return ivec4(z, w, z, w);
    }

    void ivec4::zwzw(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::zwwx() const
    {
        return ivec4(z, w, w, x);
    }

    void ivec4::zwwx(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::zwwy() const
    {
        return ivec4(z, w, w, y);
    }

    void ivec4::zwwy(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::zwwz() const
    {
        return ivec4(z, w, w, z);
    }

    void ivec4::zwwz(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::zwww() const
    {
        return ivec4(z, w, w, w);
    }

    void ivec4::zwww(ivec4 value)
    {
        x = value.z;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::wxxx() const
    {
        return ivec4(w, x, x, x);
    }

    void ivec4::wxxx(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::wxxy() const
    {
        return ivec4(w, x, x, y);
    }

    void ivec4::wxxy(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::wxxz() const
    {
        return ivec4(w, x, x, z);
    }

    void ivec4::wxxz(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::wxxw() const
    {
        return ivec4(w, x, x, w);
    }

    void ivec4::wxxw(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::wxyx() const
    {
        return ivec4(w, x, y, x);
    }

    void ivec4::wxyx(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::wxyy() const
    {
        return ivec4(w, x, y, y);
    }

    void ivec4::wxyy(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::wxyz() const
    {
        return ivec4(w, x, y, z);
    }

    void ivec4::wxyz(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::wxyw() const
    {
        return ivec4(w, x, y, w);
    }

    void ivec4::wxyw(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::wxzx() const
    {
        return ivec4(w, x, z, x);
    }

    void ivec4::wxzx(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::wxzy() const
    {
        return ivec4(w, x, z, y);
    }

    void ivec4::wxzy(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::wxzz() const
    {
        return ivec4(w, x, z, z);
    }

    void ivec4::wxzz(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::wxzw() const
    {
        return ivec4(w, x, z, w);
    }

    void ivec4::wxzw(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::wxwx() const
    {
        return ivec4(w, x, w, x);
    }

    void ivec4::wxwx(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::wxwy() const
    {
        return ivec4(w, x, w, y);
    }

    void ivec4::wxwy(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::wxwz() const
    {
        return ivec4(w, x, w, z);
    }

    void ivec4::wxwz(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::wxww() const
    {
        return ivec4(w, x, w, w);
    }

    void ivec4::wxww(ivec4 value)
    {
        x = value.w;
        y = value.x;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::wyxx() const
    {
        return ivec4(w, y, x, x);
    }

    void ivec4::wyxx(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::wyxy() const
    {
        return ivec4(w, y, x, y);
    }

    void ivec4::wyxy(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::wyxz() const
    {
        return ivec4(w, y, x, z);
    }

    void ivec4::wyxz(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::wyxw() const
    {
        return ivec4(w, y, x, w);
    }

    void ivec4::wyxw(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::wyyx() const
    {
        return ivec4(w, y, y, x);
    }

    void ivec4::wyyx(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::wyyy() const
    {
        return ivec4(w, y, y, y);
    }

    void ivec4::wyyy(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::wyyz() const
    {
        return ivec4(w, y, y, z);
    }

    void ivec4::wyyz(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::wyyw() const
    {
        return ivec4(w, y, y, w);
    }

    void ivec4::wyyw(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::wyzx() const
    {
        return ivec4(w, y, z, x);
    }

    void ivec4::wyzx(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::wyzy() const
    {
        return ivec4(w, y, z, y);
    }

    void ivec4::wyzy(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::wyzz() const
    {
        return ivec4(w, y, z, z);
    }

    void ivec4::wyzz(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::wyzw() const
    {
        return ivec4(w, y, z, w);
    }

    void ivec4::wyzw(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::wywx() const
    {
        return ivec4(w, y, w, x);
    }

    void ivec4::wywx(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::wywy() const
    {
        return ivec4(w, y, w, y);
    }

    void ivec4::wywy(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::wywz() const
    {
        return ivec4(w, y, w, z);
    }

    void ivec4::wywz(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::wyww() const
    {
        return ivec4(w, y, w, w);
    }

    void ivec4::wyww(ivec4 value)
    {
        x = value.w;
        y = value.y;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::wzxx() const
    {
        return ivec4(w, z, x, x);
    }

    void ivec4::wzxx(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::wzxy() const
    {
        return ivec4(w, z, x, y);
    }

    void ivec4::wzxy(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::wzxz() const
    {
        return ivec4(w, z, x, z);
    }

    void ivec4::wzxz(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::wzxw() const
    {
        return ivec4(w, z, x, w);
    }

    void ivec4::wzxw(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::wzyx() const
    {
        return ivec4(w, z, y, x);
    }

    void ivec4::wzyx(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::wzyy() const
    {
        return ivec4(w, z, y, y);
    }

    void ivec4::wzyy(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::wzyz() const
    {
        return ivec4(w, z, y, z);
    }

    void ivec4::wzyz(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::wzyw() const
    {
        return ivec4(w, z, y, w);
    }

    void ivec4::wzyw(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::wzzx() const
    {
        return ivec4(w, z, z, x);
    }

    void ivec4::wzzx(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::wzzy() const
    {
        return ivec4(w, z, z, y);
    }

    void ivec4::wzzy(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::wzzz() const
    {
        return ivec4(w, z, z, z);
    }

    void ivec4::wzzz(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::wzzw() const
    {
        return ivec4(w, z, z, w);
    }

    void ivec4::wzzw(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::wzwx() const
    {
        return ivec4(w, z, w, x);
    }

    void ivec4::wzwx(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::wzwy() const
    {
        return ivec4(w, z, w, y);
    }

    void ivec4::wzwy(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::wzwz() const
    {
        return ivec4(w, z, w, z);
    }

    void ivec4::wzwz(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::wzww() const
    {
        return ivec4(w, z, w, w);
    }

    void ivec4::wzww(ivec4 value)
    {
        x = value.w;
        y = value.z;
        z = value.w;
        w = value.w;
    }

    ivec4 ivec4::wwxx() const
    {
        return ivec4(w, w, x, x);
    }

    void ivec4::wwxx(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.x;
    }

    ivec4 ivec4::wwxy() const
    {
        return ivec4(w, w, x, y);
    }

    void ivec4::wwxy(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.y;
    }

    ivec4 ivec4::wwxz() const
    {
        return ivec4(w, w, x, z);
    }

    void ivec4::wwxz(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.z;
    }

    ivec4 ivec4::wwxw() const
    {
        return ivec4(w, w, x, w);
    }

    void ivec4::wwxw(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.x;
        w = value.w;
    }

    ivec4 ivec4::wwyx() const
    {
        return ivec4(w, w, y, x);
    }

    void ivec4::wwyx(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.x;
    }

    ivec4 ivec4::wwyy() const
    {
        return ivec4(w, w, y, y);
    }

    void ivec4::wwyy(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.y;
    }

    ivec4 ivec4::wwyz() const
    {
        return ivec4(w, w, y, z);
    }

    void ivec4::wwyz(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.z;
    }

    ivec4 ivec4::wwyw() const
    {
        return ivec4(w, w, y, w);
    }

    void ivec4::wwyw(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.y;
        w = value.w;
    }

    ivec4 ivec4::wwzx() const
    {
        return ivec4(w, w, z, x);
    }

    void ivec4::wwzx(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.x;
    }

    ivec4 ivec4::wwzy() const
    {
        return ivec4(w, w, z, y);
    }

    void ivec4::wwzy(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.y;
    }

    ivec4 ivec4::wwzz() const
    {
        return ivec4(w, w, z, z);
    }

    void ivec4::wwzz(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.z;
    }

    ivec4 ivec4::wwzw() const
    {
        return ivec4(w, w, z, w);
    }

    void ivec4::wwzw(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.z;
        w = value.w;
    }

    ivec4 ivec4::wwwx() const
    {
        return ivec4(w, w, w, x);
    }

    void ivec4::wwwx(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.x;
    }

    ivec4 ivec4::wwwy() const
    {
        return ivec4(w, w, w, y);
    }

    void ivec4::wwwy(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.y;
    }

    ivec4 ivec4::wwwz() const
    {
        return ivec4(w, w, w, z);
    }

    void ivec4::wwwz(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.z;
    }

    ivec4 ivec4::wwww() const
    {
        return ivec4(w, w, w, w);
    }

    void ivec4::wwww(ivec4 value)
    {
        x = value.w;
        y = value.w;
        z = value.w;
        w = value.w;
    }

    ivec4::ivec4() : x(0), y(0), z(0), w(0) { }

    ivec4::ivec4(int x, int y, int z, int w) : x(x), y(y), z(z), w(w) { }

    ivec4 ivec4::abs(ivec4 value)
    {
        return ivec4(
            Mathematics::abs(value.x),
            Mathematics::abs(value.y),
            Mathematics::abs(value.z),
            Mathematics::abs(value.w)
        );
    }

    ivec4 ivec4::ceilToInt(vec4 value)
    {
        return ivec4(
            Mathematics::ceilToInt(value.x),
            Mathematics::ceilToInt(value.y),
            Mathematics::ceilToInt(value.z),
            Mathematics::ceilToInt(value.w)
        );
    }

    ivec4 ivec4::clamp(ivec4 value, int minValue, int maxValue)
    {
        return ivec4(
            Mathematics::clamp(value.x, minValue, maxValue),
            Mathematics::clamp(value.y, minValue, maxValue),
            Mathematics::clamp(value.z, minValue, maxValue),
            Mathematics::clamp(value.w, minValue, maxValue)
        );
    }

    ivec4 ivec4::clamp(ivec4 value, ivec4 minValue, ivec4 maxValue)
    {
        return ivec4(
            Mathematics::clamp(value.x, minValue.x, maxValue.x),
            Mathematics::clamp(value.y, minValue.y, maxValue.y),
            Mathematics::clamp(value.z, minValue.z, maxValue.z),
            Mathematics::clamp(value.w, minValue.w, maxValue.w)
        );
    }

    float ivec4::distance(ivec4 value1, ivec4 value2)
    {
        return sqrt(distanceSquared(value1, value2));
    }

    float ivec4::distanceSquared(ivec4 value1, ivec4 value2)
    {
        float dx = Mathematics::distance(value1.x, value2.x);
        float dy = Mathematics::distance(value1.y, value2.y);
        float dz = Mathematics::distance(value1.z, value2.z);
        float dw = Mathematics::distance(value1.w, value2.w);

        return (dx * dx) + (dy * dy) + (dz * dz) + (dw * dw);
    }

    ivec4 ivec4::floorToInt(vec4 value)
    {
        return ivec4(
            Mathematics::floorToInt(value.x),
            Mathematics::floorToInt(value.y),
            Mathematics::floorToInt(value.z),
            Mathematics::floorToInt(value.w)
        );
    }

    ivec4 ivec4::max(ivec4 value1, ivec4 value2)
    {
        return ivec4(
            Mathematics::max(value1.x, value2.x),
            Mathematics::max(value1.y, value2.y),
            Mathematics::max(value1.z, value2.z),
            Mathematics::max(value1.w, value2.w)
        );
    }

    ivec4 ivec4::min(ivec4 value1, ivec4 value2)
    {
        return ivec4(
            Mathematics::min(value1.x, value2.x),
            Mathematics::min(value1.y, value2.y),
            Mathematics::min(value1.z, value2.z),
            Mathematics::min(value1.w, value2.w)
        );
    }

    ivec4 ivec4::roundToInt(vec4 value)
    {
        return ivec4(
            Mathematics::roundToInt(value.x),
            Mathematics::roundToInt(value.y),
            Mathematics::roundToInt(value.z),
            Mathematics::roundToInt(value.w)
        );
    }

    ivec4 ivec4::truncToInt(vec4 value)
    {
        return ivec4(
            Mathematics::truncToInt(value.x),
            Mathematics::truncToInt(value.y),
            Mathematics::truncToInt(value.z),
            Mathematics::truncToInt(value.w)
        );
    }

    ivec4 ivec4::operator-() const
    {
        return ivec4(-x, -y, -z, -w);
    }

    ivec4 ivec4::operator-(ivec4 other) const
    {
        return ivec4(
            x - other.x,
            y - other.y,
            z - other.z,
            w - other.w
        );
    }

    ivec4& ivec4::operator-=(ivec4 other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        w -= other.w;

        return *this;
    }

    ivec4 ivec4::operator+() const
    {
        return ivec4(x, y, z, w);
    }

    ivec4 ivec4::operator+(ivec4 other) const
    {
        return ivec4(
            x + other.x,
            y + other.y,
            z + other.z,
            w + other.w
        );
    }

    ivec4& ivec4::operator+=(ivec4 other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        w += other.w;

        return *this;
    }

    ivec4 ivec4::operator*(ivec4 other) const
    {
        return ivec4(
            x * other.x,
            y * other.y,
            z * other.z,
            w * other.w
        );
    }

    ivec4& ivec4::operator*=(ivec4 other)
    {
        x *= other.x;
        y *= other.y;
        z *= other.z;
        w *= other.w;

        return *this;
    }

    ivec4 ivec4::operator*(int other) const
    {
        return ivec4(
            x * other,
            y * other,
            z * other,
            w * other
        );
    }

    ivec4& ivec4::operator*=(int other)
    {
        x *= other;
        y *= other;
        z *= other;
        w *= other;

        return *this;
    }

    ivec4 operator*(int lhs, ivec4 rhs)
    {
        return ivec4(
            lhs * rhs.x,
            lhs * rhs.y,
            lhs * rhs.z,
            lhs * rhs.w
        );
    }

    ivec4 ivec4::operator/(ivec4 other) const
    {
        return ivec4(
            x / other.x,
            y / other.y,
            z / other.z,
            w / other.w
        );
    }

    ivec4& ivec4::operator/=(ivec4 other)
    {
        x /= other.x;
        y /= other.y;
        z /= other.z;
        w /= other.w;

        return *this;
    }

    ivec4 ivec4::operator/(int other) const
    {
        return ivec4(
            x / other,
            y / other,
            z / other,
            w / other
        );
    }

    ivec4& ivec4::operator/=(int other)
    {
        x /= other;
        y /= other;
        z /= other;
        w /= other;

        return *this;
    }

    ivec4 operator/(int lhs, ivec4 rhs)
    {
        return ivec4(
            lhs / rhs.x,
            lhs / rhs.y,
            lhs / rhs.z,
            lhs / rhs.w
        );
    }

    ivec4 ivec4::operator%(ivec4 other) const
    {
        return ivec4(
            x % other.x,
            y % other.y,
            z % other.z,
            w % other.w
        );
    }

    ivec4& ivec4::operator%=(ivec4 other)
    {
        x %= other.x;
        y %= other.y;
        z %= other.z;
        w %= other.w;

        return *this;
    }

    ivec4 ivec4::operator%(int other) const
    {
        return ivec4(
            x % other,
            y % other,
            z % other,
            w % other
        );
    }

    ivec4& ivec4::operator%=(int other)
    {
        x %= other;
        y %= other;
        z %= other;
        w %= other;

        return *this;
    }

    ivec4 operator%(int lhs, ivec4 rhs)
    {
        return ivec4(
            lhs % rhs.x,
            lhs % rhs.y,
            lhs % rhs.z,
            lhs % rhs.w
        );
    }

    ivec4 operator&(int lhs, ivec4 rhs)
    {
        return ivec4(
            lhs & rhs.x,
            lhs & rhs.y,
            lhs & rhs.z,
            lhs & rhs.w
        );
    }

    ivec4 ivec4::operator&(ivec4 other) const
    {
        return ivec4(
            x & other.x,
            y & other.y,
            z & other.z,
            w & other.w
        );
    }

    ivec4& ivec4::operator&=(ivec4 other)
    {
        x &= other.x;
        y &= other.y;
        z &= other.z;
        w &= other.w;

        return *this;
    }

    ivec4 ivec4::operator&(int other) const
    {
        return ivec4(
            x & other,
            y & other,
            z & other,
            w & other
        );
    }

    ivec4& ivec4::operator&=(int other)
    {
        x &= other;
        y &= other;
        z &= other;
        w &= other;

        return *this;
    }

    bool ivec4::operator==(ivec4 other) const
    {
        return x == other.x && y == other.y && z == other.z && w == other.w;
    }

    bool ivec4::operator!=(ivec4 other) const
    {
        return !(*this == other);
    }

    ivec4::operator ivec2() const
    {
        return ivec2(x, y);
    }

    ivec4::operator ivec3() const
    {
        return ivec3(x, y, z);
    }

    ivec4::operator vec2() const
    {
        return vec2(x, y);
    }

    ivec4::operator vec3() const
    {
        return vec3(x, y, z);
    }

    ivec4::operator vec4() const
    {
        return vec4(x, y, z, w);
    }
}