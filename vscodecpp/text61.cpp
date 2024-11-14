#include <iostream>
using namespace std;
// 引用
// 数据类型 &别名=原名

int main()
{
    int a = 10;
    int &b = a;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    b = 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl; // 别名改，原名也跟着改

    system("pause");
    return 0;
}