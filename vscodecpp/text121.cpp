#include <iostream>
using namespace std;
// 普通函数与函数模板调用规则
// 1.如果函数模板和普通函数都可以调用，优先调用普通函数
// 2.可以通过空模板参数列表，强制调用函数模板
// 3.函数模板可以发生函数重载
// 4.如果函数模板可以产生更好的匹配，优先调用函数模板
void myprint(int a, int b)
{
    cout << "普通函数" << endl;
}
template <class T>
void myprint(T a, T b)
{
    cout << "函数模板" << endl;
}
template <class T>
void myprint(T a, T b, T c)
{
    cout << "函数重载模板" << endl;
}
void test01()
{
    int a = 10;
    int b = 20;
    myprint(a, b);

    // 通过空模板参数列表，强制调用函数模板
    myprint<>(a, b);
    myprint(a, b, 10);
    // 如果函数模板可以产生更好的匹配，优先调用函数模板
    char c = 'a';
    myprint(c, c);
}
int main()
{
    test01(); //

    system("pause");
    return 0;
}