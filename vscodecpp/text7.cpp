#include <iostream>
using namespace std;

int main()
{
    // 比较运算符
    int a = 10;
    int b = 20;
    cout << (a == b) << endl;
    cout << (a != b) << endl; // 异或，验证是否不相等，不相等=1
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    system("pause");
    return 0;
}