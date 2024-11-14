#pragma once
#include <iostream>
using namespace std;
#include "point.h"

// 创建圆类
class circle
{
public:
    void setr(int r);

    int getr();

    // 设置圆心
    void setcenter(point center);

    // 获取圆心
    point getcenter();

private:
    int m_r;
    point m_center; // 圆心,在类中可以写另一个类
};
