#include <iostream>
using namespace std;
#include <set>

void test01()
{
    set<int> s;
    // s.insert(1);
    s.insert(2);
    pair<set<int>::iterator, bool> p = s.insert(1);
    if (p.second)
    {
        cout << "插入成功" << endl;
    }
    else
    {
        cout << "插入失败" << endl;
    }

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);

    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
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