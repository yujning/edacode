#include <iostream>
using namespace std;

// 静态成员
// 所有对象都共享一份数据
// 编译阶段就是分配内存
// 类内声明，类外初始化操作
class person
{
public:
    static int m_a;

private:
    static int m_b;
};
int person::m_a = 100; // 类外声明
int person::m_b = 200;
void test01()
{
    person p;
    cout << "m_a=" << p.m_a << endl;
    person p2;
    p2.m_a = 1000;
    cout << "m_a=" << p.m_a << endl;
}

void test02()
{
    // 静态成员变量，不属于某个对象上，所有对象都共享一份数据
    // 因此静态成员变量有俩种访问方式

    // 1.通过对象进行访问
    person p;
    cout << p.m_a << endl;
    // 2.通过类名进行访问
    cout << person::m_a << endl; // 非静态不可这样访问
    // cout << person::m_b << endl;//类外访问不到私有静态成员变量
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}