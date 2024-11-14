#include <iostream>
using namespace std;

int main()
{
    // 在switch中运用break
    cout << "请选择你挑战副本的难度" << endl;
    cout << "1.普通" << endl;
    cout << "2.中等" << endl;
    cout << "3.困难" << endl;
    int select = 0;
    cin >> select;
    switch (select)
    {
    case 1:
        cout << "您选择的是普通难度" << endl;
        break;
    case 2:
        cout << "您选择的是中等难度" << endl;
        break;
    case 3:
        cout << "您选择的是困难难度" << endl;
        break;
    default:
        break;
    }
    system("pause");
    return 0;
}