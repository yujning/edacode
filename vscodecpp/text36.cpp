#include <iostream>
using namespace std;

// 值传递
// 定义函数，实现两个数字进行交换函数
// 如果函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    // 返回值不需要时候，可以不写return
}
int main()
{
    int a = 10;
    int b = 0;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    swap(a, b);
    // 当做值传递时候，函数的形参发生变化，实参不会变

    system("pause");
    return 0;
}