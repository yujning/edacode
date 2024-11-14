#include <iostream>
using namespace std;

// 左移运算符重载
class person
{
public:
    int m_a;
    int m_b;
};

// 如果用成员函数重载左移运算符，p.operator<<(cout)简化为p<<cout
// 不会利用成员函数重载<<运算符，因为无法实现cout在左侧
// 实现cout在左侧就得写全局函数

ostream &operator<<(ostream &cout, person &p) // cout的类型是ostream 输出流
{
    cout << "m_a=" << p.m_a << " m_b=" << p.m_b << endl;
    return cout;
}

int main()
{
    person p1;
    p1.m_a = 10;
    p1.m_b = 20;
    cout << "p1=" << p1 << endl;

    system("pause");
    return 0;
}