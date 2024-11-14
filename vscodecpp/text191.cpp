#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 常用排序算法 sort
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
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myprint);

    cout << endl;

    // 改为降序
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}