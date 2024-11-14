#include <iostream>
using namespace std;
// 加法函数
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int a = 5;
    int b = 0;

    int c = add(a, b);
    cout << "c=" << c << endl;
    system("pause");
    return 0;
}
