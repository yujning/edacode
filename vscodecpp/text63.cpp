#include <iostream>
using namespace std;

// 交换函数
// 1.值传递
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "值传递:";
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

// 2.地址传递
void swap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "地址传递:";
    cout << "a=" << *a << endl;
    cout << "b=" << *b << endl;
}

// 3.引用传递
void swap03(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    // swap01(a, b);
    // cout << "值传递:";
    // cout << "a=" << a << endl; // 值传递,形参不会修饰实参
    // cout << "b=" << b << endl;

    // swap02(&a, &b);
    // cout << "地址传递:";
    // cout << "a=" << a << endl; // 地址传递,形参会修饰实参
    // cout << "b=" << b << endl;

    swap03(a, b);
    cout << "引用传递:";
    cout << "a=" << a << endl; // 引用传递,形参会修饰实参
    cout << "b=" << b << endl; // 别名改变，原名也改

    // 引用传递和地址传递一样
    system("pause");
    return 0;
}