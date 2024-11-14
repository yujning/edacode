#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class mycompare
{
public:
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

// 二元谓词
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);

    sort(v.begin(), v.end());

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // 使用函数对象，改变算法策略，改变排序规则从大到小

    sort(v.begin(), v.end(), mycompare()); // myconpare()函数对象
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