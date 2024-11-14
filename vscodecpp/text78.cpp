#include <iostream>
using namespace std;
#include "circle.cpp"
#include "point.cpp"

//  判断圆和点的关系
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