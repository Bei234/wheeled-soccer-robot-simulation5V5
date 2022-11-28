#pragma once
const double PI = 3.141592653589793; //15bit

//函数声明
//const float Dis(float x1, float y1, float x2, float y2)noexcept; //两点间距离

template<typename T>
const T Dis(T x1, T y1, T x2, T y2)noexcept//求两点间距离
{
    return(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

template<typename T>
const T Dis(T x1, T y1)noexcept//求任意点到(0, 0)的距离
{
    return(sqrt(pow(x1, 2) + pow(y1, 2)));
}

template<typename T>
inline static T Angle(const T x1, const T y1, const T x2, const T y2)//求机器人的角度
{
    float angle = 0.F, L = Dis<float>(x1, x2, y1, y2);
    if (L == 0.F) {
        L = 0.0001F;
    }  //防止分母为 0
    if ((y2 - y1) / L > 1.F) {
        angle = 90.F;
    }
    else if ((y2 - y1) / L < -1.F) {
        angle = -90.F;
    }
    else {
        angle = asin((y2 - y1) / L) * 180.F / PI;
    }

    if (y1 <= y2 && x2 < x1) {  //含特殊情况：y1 = y2
        angle = 180.F - angle;
    }
    else if (y2 < y1) {
        if (x2 < x1) {
            angle = 180.F - angle;
        }
        else if (x1 < x2) {
            angle += 360.F;
        }
    }
    return angle;
}

template<typename T>
inline static T Angle(T x1, T y1)//求机器人的角度
{
    if (x1 == 0) {
        x1 = 0.0001f;
    }
    return atan(y1 / x1) * 180 / PI;
}