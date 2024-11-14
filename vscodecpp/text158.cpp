#include <iostream>
using namespace std;
#include <list>

void printlist(const list<int> &l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 赋值
void test01()
{
    list<int> l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    printlist(l1);

    list<int> l2;
    l2 = l1; // 赋值operator=
    printlist(l2);

    list<int> l3;
    l3.assign(l1.begin(), l1.end()); // assign
    printlist(l3);

    list<int> l4;
    l4.assign(10, 2);
    printlist(l4);
}

// 交换
void test02()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    printlist(l1);

    list<int> l2;
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);
    printlist(l2);

    cout << "交换前:" << endl;
    printlist(l1);
    printlist(l2);

    cout << "交换后:" << endl;
    l1.swap(l2);
    printlist(l1);
    printlist(l2);
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}