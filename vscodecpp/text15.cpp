#include <iostream>
using namespace std;

int main()
{
    int num = rand() % 100 + 1; // 生成0+1~99+1随机数
    int a = 0;
    int cishu = 0;
    cout << "请输入猜数次数:";
    cin >> cishu;
    cout << "请输入你要猜的数的大小:";

    while (cishu > 0)
    {
        cin >> a;
        if (a > num)
        {
            cout << "过大" << endl;
            cishu = cishu - 1;
            if (cishu == 0)
            {
                cout << "没有机会了" << endl;
            }
            else
            {
                cout << "你还有" << cishu << "次机会" << endl;
            }
        }
        else if (a < num)
        {
            cout << "过小" << endl;
            cishu = cishu - 1;
            if (cishu == 0)
            {
                cout << "没有机会了" << endl;
            }
            else
            {
                cout << "你还有" << cishu << "次机会" << endl;
            }
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