#include <iostream>
using namespace std;
#include <list>
void printlist(const list<int> &l)
{
    for (list<int>::const_iterator i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

void test01()
{
    // 创建List容器
    list<int> l1;

    // 添加数据
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    printlist(l1);

    // 区间方式构造
    list<int> l2(l1.begin(), l1.end());
    printlist(l2);

    list<int> l3(l2); // 拷贝构造
    printlist(l3);

    list<int> l4(10, 1000);
    printlist(l4);
}

int main()
{
    test01();

    system("pause");
    return 0;
}