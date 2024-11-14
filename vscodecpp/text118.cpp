#include <iostream>
using namespace std;

// 函数交换模板
template <typename T> // typename可以替换成class
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
void test01()
{
    int a = 10;
    int b = 20;
    myswap(a, b); // 自动类型推导,必须推导出一致的数据类型
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    // myswap<int>(a, b); // 显示指定类型,模板t中的类型为Int，必须确定出T的类型，才可以使用
}

template <typename T>
void func()
{
    cout << "func调用" << endl;
}
void test02()
{
    // func();//没有定义t的类型
    func<int>(); // 显示指定类型
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}
