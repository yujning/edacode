#include <iostream>
using namespace std;

int main()
{
    int num = rand() % 100 + 1; // 生成0+1~99+1随机数
    int a = 0;
    cout << "请输入你要猜的数的大小:";

    while (1)
    {
        cin >> a;
        if (a > num)
        {
            cout << "猜的数过大" << endl;
        }
        else if (a < num)
        {
            cout << "猜的数过小" << endl;
        }
        else
        {
            cout << "猜对了" << endl;
            break;
        }
    }

    system("pause");
    return 0;
}