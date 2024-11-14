#include <iostream>
using namespace std;
// 函数重载满足条件
void func()
{
    cout << "func调用" << endl;
}
void func(int a)
{
    cout << "func (int a)调用" << endl;
}
void func(int a, double b)
{
    cout << "func(int a,double b)调用" << endl;
}
void func(double a, int b)
{
    cout << "func(double a, int b)调用" << endl;
}

// 函数返回值不可以作为函数重载条件
//  int func(double a, int b)
//  {
//      cout << "func(double a, int b)调用" << endl;
//  }

int main()
{
    func();
    func(10);
    func(10, 3.14);
    func(3.14, 10);

    system("pause");
    return 0;
}