#include <iostream>
using namespace std;

class father1
{
public:
    father1()
    {
        m_a = 100;
    }

    int m_a;
};

class father2
{
public:
    father2()
    {
        m_a = 200;
    }

    int m_a;
};
class son : public father1, public father2 // 继承多个父类
{
public:
    son()
    {
        m_c = 300;
        m_d = 400;
    }
    int m_c;
    int m_d;
};
void test01()
{
    son s;
    cout << "sizeof(son)=" << sizeof(s) << endl;
    cout << "m_a=" << s.father1::m_a << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}