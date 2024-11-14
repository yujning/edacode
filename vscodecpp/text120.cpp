#include <iostream>
using namespace std;
// 普通函数调用可以发生隐式类型转换
int myadd01(int a, int b)
{
    return a + b;
}

// 函数模板，自动推导不会发生隐式类转换
template <class T>
T myadd02(T a, T b) // 若传引用不可以做类型转换
{
    return a + b;
}
void test01()
{
    int a = 10;
    double b = 2.5;
    char c = 'a'; // a=97
    cout << myadd01(a, b) << endl;
    cout << myadd01(a, c) << endl;
}
void test02()
{
    int a = 10;
    // double b = 2.5;
    char c = 'a'; // a=97
    // cout << myadd02(a, b) << endl;
    // cout << myadd02(a, c) << endl;
    cout << myadd02<int>(a, c) << endl; //
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}