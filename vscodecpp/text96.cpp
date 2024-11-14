#include <iostream>
using namespace std;

// 左移运算符重载
class person

{
    friend ostream &operator<<(ostream &cout, person &p);
    // friend void test01();
public:
    person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }

private:
    int m_a;
    int m_b;
};
ostream &operator<<(ostream &cout, person &p)
{
    cout << "m_a=" << p.m_a << " m_b=" << p.m_b << endl;
    return cout;
}
void test01()
{
    // person p1;
    // p1.m_a = 10;
    // p1.m_b = 20;
    person p1(10, 20);
    cout << "p1=" << p1 << endl;
}
int main()
{
    test01();

    system("pause");
    return 0;
}