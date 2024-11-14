#include <iostream>
using namespace std;
int max(int a, int b);
int max(int a, int b);

// 声明可以多次，但是定义只能一次
// 比较函数，返回最大值

int main()
{
    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;
    system("pause");
    return 0;
}
int max(int a, int b)
{
    return a > b ? a : b;
}