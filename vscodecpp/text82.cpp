#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1.创建一个类，c++编译器会给每个类都添加至少3个函数
// 默认构造（空实现）
// 析构函数(空实现)
// 拷贝构造（值拷贝）
class person
{
public:
    // person()
    // {
    //     cout << "无参函数的调用" << endl;
    // }
    person(int age)
    {
        cout << "有参函数的调用" << endl;
        m_age = age;
    }
    ~person()
    {
        cout << "析构函数的调用" << endl;
    }
    int m_age;
    // person(const person &p)
    // {
    //     m_age = p.m_age;
    //     cout << "拷贝函数的调用" << endl;
    // }
};
void test01()
{
    person p;
    p.m_age = 18;
    person p2(p); // 注释掉拷贝，仍然可以运行
    cout << "p2的年龄为" << p2.m_age << endl;
}

// 2.如果写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
// 如果写了拷贝构造函数，编译器就不再提供其他函数

void test02() // 只注释无参
{
    person p; // 无参调用，注释了无参，写了有参，编译器不再提供无参，报错
}

void test03() // 只注释无参，但仍提供拷贝
{
    person p(28);
    person p2(p);
}

test04() // 注释掉除了拷贝函数
{
    person p;
    person p1(p);
    person p(19);
}
int main()
{
    test01();
    test02();
    test03();
    test04();

    system("pause");
    return 0;
}