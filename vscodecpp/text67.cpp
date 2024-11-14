#include <iostream>
using namespace std;
// 函数的默认参数
// 返回值类型  函数名 （参数=默认值）{}
// 注意事项
// 1.函数在某个位置有默认参数，后面都要有参数
int func1(int a, int b = 10, int c = 20, int d = 30)
{
    return a + b + c + d;
}

// 2.函数声明和函数定义只能有一个有默认参数
int func2(int a, int b = 10, int c = 20);
int func2(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << func1(100) << endl;
    cout << func2(10) << endl;

    system("pause");
    return 0;
}