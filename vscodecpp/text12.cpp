#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "请给电影打分:";
    cin >> score;
    switch (score)
    {
    case 10:
    case 9:
        cout << "非常好" << endl;
        break;
    case 8:
        cout << "好" << endl;
        break;
    case 7:
    case 6:
        cout << "还可以" << endl;
        break;
    default:
        cout << "一般" << endl;
        break;
    }

    system("pause");
    return 0;
}