#include <iostream>
using namespace std;
#include "swap.h"

// 栈区
// 由编译器自动分配释放，存放函数的参数值，局部变量等
// 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

int *func()
{
    // 形参也存放在栈区
    int a = 10; // 局部变量，存放在栈区，栈区的数据在函数执行后自动释放
    return &a;
}
int main()
{
    int *p = func();

    cout << *p << endl; //
    cout << *p << endl;
    system("pause");
    return 0;
}