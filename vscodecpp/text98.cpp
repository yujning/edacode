#include <iostream>
using namespace std;

// 重载递减运算符
class myinteger
{
    friend ostream &operator<<(ostream &cout, myinteger myint);
    // friend void test01();

public:
    myinteger()
    {
        m_num = 0;
    }
    // 前置递减
    myinteger &operator--()
    {
        m_num--;
        return *this;
    }

private:
    int m_num;
};
ostream &operator<<(ostream &cout, myinteger myint)
{
    cout << myint.m_num << endl;
    return cout;
}

// 前置递减--a，先减再读
void test01()
{
    myinteger myint;
    cout << --(--myint) << endl; // cout << --(--myint.m_num) << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}