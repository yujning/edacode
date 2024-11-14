#include <iostream>
using namespace std;

// 创建点类
class point
{
public:
    // 设置、获取
    void setx(int x)
    {
        m_x = x;
    }
    int getx()
    {
        return m_x;
    }

    void sety(int y)
    {
        m_y = y;
    }
    int gety()
    {
        return m_y;
    }

private:
    int m_x;
    int m_y;
};

// 创建圆类
class circle
{
public:
    void setr(int r)
    {
        m_r = r;
    }
    int getr()
    {
        return m_r;
    }
    // 设置圆心
    void setcenter(point center)
    {
        m_center = center;
    }

    // 获取圆心
    point getcenter()
    {
        return m_center;
    }

private:
    int m_r;
    point m_center; // 圆心,在类中可以写另一个类
};

// 判断圆和点的关系
void isincircle(circle &c, point &p)
{
    // 计算俩点间的距离平方
    int d = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) + (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());

    // 计算半径的平方
    int rd = c.getr() * c.getr();

    if (d < rd * rd)
    {
        cout << "点在圆内" << endl;
    }
    else if (d == rd * rd)
    {
        cout << "点在圆上" << endl;
    }
    else
        cout << "点在圆外" << endl;
}

int main()
{
    // 创建圆
    circle c;
    c.setr(10);
    point center;
    center.setx(10);
    center.sety(0);
    point p;
    p.setx(10);
    p.sety(10);
    isincircle(c, p);
    system("pause");
    return 0;
}