#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++) // i 行
    {
        for (int j = 1; j <= i; j++) // j 列
        {
            cout << j << "*" << i << "=" << int(i * j) << " ";
        }
        cout << endl; // 加了endl就是换行
    }
    system("pause");
    return 0;
}
