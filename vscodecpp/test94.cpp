#include <iostream>
using namespace std;

// 加号运算符重载
// 1.成员函数重载+号

class person
{
public:
    int m_a;
    int m_b;
    person operator+(person &p)
    {
        person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;
    }
};
void test01()
{
    person p1;
    p1.m_a = 10;
    p1.m_b = 20;

    person p2;
    p2.m_a = 10;
    p2.m_b = 20;

    person p3;
    p3 = p1.operator+(p2);
    cout << "p3.m_a=" << p3.m_a << endl;
    cout << "p3.m_b=" << p3.m_b << endl;
}

// 2.全局函数重载+号
person operator+(person *p1, person &p2) // 一个指针，一个引用
{
    person temp;
    temp.m_a = p1->m_a + p2.m_a;
    temp.m_b = p1->m_b + p2.m_b;
    return temp;
}

void test02()
{
    person p1;
    p1.m_a = 10;
    p1.m_b = 20;

    person p2;
    p2.m_a = 10;
    p2.m_b = 20;

    person p4;
    p4 = operator+(&p1, p2);
    cout << "p4.m_a=" << p4.m_a << endl;
    cout << "p4.m_b=" << p4.m_b << endl;
}

// 运算符重载也可以发生函数重载
person operator+(person &p, int a)
{
    person temp;
    temp.m_a = p.m_a + a;
    temp.m_b = p.m_b + a;
    return temp;
}
void test03()
{
    person p1;
    p1.m_a = 10;
    p1.m_b = 20;
    int a = 10;
    person p5;
    // p5 = operator+(p1, a);
    p5 = p1 + a;
    cout << "p5.m_a=" << p5.m_a << endl;
    cout << "p5.m_b=" << p5.m_b << endl;
}

int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}