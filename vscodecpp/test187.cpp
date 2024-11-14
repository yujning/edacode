#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 常用查找算法 adjacent_find
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    v.push_back(40);

    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it != v.end())
    {
        cout << "find" << endl;
        cout << *it << endl;
    }

    else
    {
        cout << "not find" << endl;
    }
}

int main()
{
    test01();

    system("pause");
    return 0;
}