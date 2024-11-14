#include <iostream>
using namespace std;

// 引用做函数的返回值
// 1.不要反悔局部变量的引用
// int &test01()
// {
//     int a = 10; // 局部变量存放在四区中的栈区，局部变量在test01执行后就被释放了
//     return a;
// }

// 2.函数的调用可以作为左值
int &test02()
{
    static int b = 20; // 静态变量，存放在全局区
    return b;
}

int main()
{
    // int &ref = test01();
    // cout << "ref=" << ref << endl;
    int &ref = test02();
    cout << "ref=" << ref << endl;

    test02() = 1000; // 如果函数的返回值是引用，这个函数调用可以作为左值
    cout << "ref=" << ref << endl;
    system("pause");
    return 0;
}