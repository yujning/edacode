#include <iostream>
using namespace std;

int main()
{
    // 逻辑运算符
    // 非,在c++中除了0都是真，a=10为真，真取反，假输出0
    int a = 10;
    cout << !a << endl;       // 取俩次反就是 !!a
    int b = 0;                // 假
    cout << (a && b) << endl; // 与
    cout << (a || b) << endl; // 或
    system("pause");
    return 0;
}