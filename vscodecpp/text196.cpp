#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int i)
{
    cout << i << " ";
}

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(i);
    }
    replace(v.begin(), v.end(), 3, 10); // 将v中所有3替换为10
    for_each(v.begin(), v.end(), myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}