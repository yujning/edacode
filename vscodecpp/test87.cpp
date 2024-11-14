#include <iostream>
using namespace std;

class person
{
    int m_A;               // 非静态成员变量 属于类的对象上
    static int m_b;        // 静态成员变量 不属于类对象上
    void func() {}         // 非静态成员函数，不属于类对象上
    static void func2() {} // 静态成员函数，不属于类的对象上
};
int person::m_b;
void test01()
{
    person p;
    // 1.空对象占用内存空间为1
    // c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    cout << "size of p=" << sizeof(p) << endl;
}

// void test02()
// {
// }

int main()
{
    test01();

    system("pause");
    return 0;
}