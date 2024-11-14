#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p; // 指针定义的语法：数据类型 *指针变量名
    p = &a; // 指针指向a的地址
    cout << "a的地址为" << &a << endl;
    cout << "p的地址为" << p << endl;
    // 通过解引用的方式来找到指针指向的内存
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;
    system("pause");
    return 0;
}
