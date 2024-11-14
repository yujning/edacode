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

bool mycompare(int a, int b)
{
    return a > b; // a>b返回真
}

void test01()
{
    list<int> l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(5);
    l1.push_back(8);
    l1.push_back(3);

    cout << "反转前:" << endl;
    printlist(l1);

    // 反转
    l1.reverse();
    cout << "反转后:" << endl;
    printlist(l1);

    // 排序
    l1.sort(); // 不能直接sort(l1.begin(), l1.end())，因为所有不支持随机访问迭代器的容器，不可以用标准算法
    cout << "排序后:" << endl;
    printlist(l1);

    // 降序
    l1.sort(mycompare);
    cout << "降序排序后:" << endl;
    printlist(l1);
}

int main()
{
    test01();

    system("pause");
    return 0;
}