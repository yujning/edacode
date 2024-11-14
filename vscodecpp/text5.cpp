#include <iostream>
using namespace std;

int main()
{
    // 前置递增
    int a1 = 10;
    ++a1; // 变量加1
    cout << "a1=" << a1 << endl;
    // 后置递增
    int b1 = 10;
    cout << "b1=" << b1 << endl;

    // 前置和后置的区别
    // 前置递增先让变量加1，然后进行表达运算
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2=" << a2 << endl;
    cout << "b2=" << b2 << endl;

    // 后置递增
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3=" << a3 << endl;
    cout << "b3=" << b3 << endl; // 10*10,然后a3+1

    system("pause");
    return 0;
}