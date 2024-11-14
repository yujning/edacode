#include <iostream>
using namespace std;

int main()
{
    // 在循环语句中用break
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // 等于5时候跳出循环
        }
        cout << i << endl;
    }
    system("pause");
    return 0;
}
