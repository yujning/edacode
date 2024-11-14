#include <iostream>
using namespace std;
#include <list>

void printlist(const list<int> &l1)
{
    for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    // 头插
    l1.push_front(0);
    l1.push_front(-1);

    //-1,0,1,2,3,4

    printlist(l1);

    // 尾删
    l1.pop_back();
    printlist(l1);

    // 头删
    l1.pop_front();
    printlist(l1);

    // insert插入
    l1.insert(++l1.begin(), 5);
    printlist(l1);

    // 删除
    l1.erase(++l1.begin());
    printlist(l1);

    // 移除
    l1.push_back(10000);
    l1.push_back(10000);
    printlist(l1);
    l1.remove(10000); // 移除所有10000
    printlist(l1);

    // 清空
    l1.clear();
    printlist(l1);
}

int main()
{
    test01();

    system("pause");
    return 0;
}