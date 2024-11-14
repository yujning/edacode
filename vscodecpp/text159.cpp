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

    printlist(l1);

    // 判断容器是否为空
    if (l1.empty())
    {
        cout << "l1为空" << endl;
    }
    else
    {
        cout << "l1不为空" << endl;
        cout << "l1的size为:" << l1.size() << endl;
    }

    // 重新指定大小
    l1.resize(8, 9); // 重新指定大小为8，多出来的空间用9填充
    printlist(l1);
}

int main()
{
    test01();

    system("pause");
    return 0;
}