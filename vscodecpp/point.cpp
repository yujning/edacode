#include "point.h"

// 创建点类

void point::setx(int x) // point::表示在point作用域下，不加就是全局函数
{
    m_x = x;
}
int point::getx()
{
    return m_x;
}

void point::sety(int y)
{
    m_y = y;
}
int point::gety()
{
    return m_y;
}
