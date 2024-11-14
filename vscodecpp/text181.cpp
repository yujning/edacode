#include <iostream>
using namespace std;
#include <algorithm>
#include <functional>
#include <vector>

class mycompare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

// 内建函数对象—关系仿函数
// 大于 greater
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 降序
    sort(v.begin(), v.end(), mycompare());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}