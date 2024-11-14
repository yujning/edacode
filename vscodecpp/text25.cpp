#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)

        {
            cout << i << endl;
        }
        else
            continue; // continue不执行下面语句，但继续循环，而break会退出循环，goto可以无条件跳转语句
    }
    system("pause");
    return 0;
}
