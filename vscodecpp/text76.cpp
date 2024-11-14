#include <iostream>
using namespace std;
// 创建立方体类

class cube
{
public:
    void setnum(int l, int w, int h)
    {
        m_l = l;
        m_w = w;
        m_h = h;
    }
    int getl()
    {
        return m_l;
    }

    int getw()
    {
        return m_w;
    }

    int geth()
    {
        return m_h;
    }
    int getnumS()
    {
        return m_l * m_w * m_h;
    }
    int getnumV()
    {
        return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
    }

    // 利用成员函数判断俩个立方体是否相等
    bool issameclass(cube &c)
    {
        if (m_l == c.getl() && m_h == c.geth() && m_w == c.getw())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    int m_l; // 长
    int m_w; // 宽
    int m_h; // 高
};

// 利用全局函数判断俩个立方体是否相等
bool issame(cube &c1, cube &c2)
{
    if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw())
    {
        return true;
    }
    return false;
}

int main()
{
    cube c1;
    c1.setnum(10, 20, 30);
    cout << "立方体的体积为" << c1.getnumS() << endl;
    cout << "立方体的面积为" << c1.getnumV() << endl;

    cube c2;
    c2.setnum(10, 20, 30);
    cout << "立方体的体积为" << c2.getnumS() << endl;
    cout << "立方体的面积为" << c2.getnumV() << endl;

    bool ref = issame(c1, c2); // 利用全局函数判断
    if (ref == 1)
    {
        cout << "俩个立方体相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }

    // 利用成员函数判断俩个立方体是否相等
    bool ret = c1.issameclass(c2);
    if (ret == 1)
    {
        cout << "俩个立方体相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }

    system("pause");
    return 0;
}