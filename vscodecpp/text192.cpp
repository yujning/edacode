#include <iostream>
using namespace std;
#include <algorithm>
#include <ctime>
#include <vector>

void myprint(int a)
{
    cout << a << " ";
}

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    random_shuffle(v.begin(), v.end()); // 洗牌算法，打乱顺序
    for_each(v.begin(), v.end(), myprint);
    cout << endl;
}
int main()
{
    // srand((unsigned)time(NULL));
    test01();

    system("pause");
    return 0;
}