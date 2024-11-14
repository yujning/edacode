#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int val)
{
    cout << val << " ";
}

// 常用拷贝和替换算法
// copy
void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    vector<int> v2;
    v2.resize(v1.size());

    copy(v1.begin(), v1.end(), v2.begin());
    for_each(v2.begin(), v2.end(), myprint);
}
int main()
{
    test01();

    system("pause");
    return 0;
}