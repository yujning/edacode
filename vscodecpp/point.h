#pragma once
#include <iostream>
using namespace std;
// 创建点类
class point
{
public:
    // 设置、获取
    void setx(int x);

    int getx();

    void sety(int y);

    int gety();

private:
    int m_x;
    int m_y;
};