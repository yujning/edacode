#include <iostream>
using namespace std;

// 占位参数
// 返回值类型  函数名 （数据类型）{}
void func(int a, int = 10) // 占位函数还可以有默认参数
{
    cout << "this is func" << endl;
}
int main()
{
    func(10);

    system("pause");
    return 0;
}