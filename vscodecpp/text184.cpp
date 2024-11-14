#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class myprint
{
public:
    void operator()(int x)
    {
        cout << x + 100 << " ";
    }
};

class transform1
{
public:
    int operator()(int x)
    {
        return x;
    }
};
// 常用遍历算法Transform
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int> vtarget;
    vtarget.resize(v.size()); // 目标容器需要提前开辟空间

    transform(v.begin(), v.end(), vtarget.begin(), transform1());
    for_each(vtarget.begin(), vtarget.end(), myprint());
    cout << endl;
}
int main()
{
    test01();

    system("pause");
    return 0;
}