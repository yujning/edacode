#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "请输入一个分数";
    cin >> score;
    cout << "您输入的分数为" << score << endl;
    if (score > 600)
    {
        if (score > 700)
        {
            cout << "清华" << endl;
        }
        else if (score > 650)
        {
            cout << "北大" << endl;
        }
        else
            cout << "考入人大" << endl;
    }
    else if (score > 500)
    {
        cout << "考入二本" << endl;
    }
    else if (score > 400)
    {
        cout << "考入三本" << endl;
    }
    else
    {
        cout << "未考入本科" << endl;
    }

    system("pause");
    return 0;
}