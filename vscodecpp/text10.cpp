#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    c = (a > b ? a : b); // a大于b,真输出a
    cout << "c=" << c << endl;
    (a > b ? a : b) = 100; // 在c++中三目运算符返回的是变量，可以继续赋值
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    system("pause");
    return 0;
}
