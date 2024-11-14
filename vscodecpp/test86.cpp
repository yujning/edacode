#include <iostream>
using namespace std;

// 静态成员函数
class person
{

public:
    static void test01()
    {
        m_a = 100;
        // m_b = 200;//静态成员函数不可访问非静态成员变量，无法区分到底是哪个对象的属性
        cout << "静态成员函数的调用" << endl;
    }
    static int m_a; // 类内声明，类外初始化
    int m_b;

    // 静态成员函数也有访问权限
private:
    static void test02()
    {
        cout << "静态函数的私有调用" << endl;
    }
};
int person::m_a = 0; // 类内声明，类外初始化

void test01()
{
    // 1.通过对象访问
    person p;
    p.test01();

    // 2.通过类名访问
    person::test01();
}

void test02()
{
    person::test02(); // 不可访问
}
int main()
{
    test01();

    system("pause");
    return 0;
}