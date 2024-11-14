#include <iostream>
using namespace std;
#include <set>

void printset(const set<int> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
}

// set容器 大小和交换
// 大小和交换
void test01()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(2);
    printset(s1);
    cout << "s1的大小为" << s1.size() << endl;

    // 判断是否为空
    if (s1.empty())
    {
        cout << "s1为空" << endl;
    }
    else
    {
        cout << "s1不为空" << endl;
    }
}
// 交换

void test02()
{
    set<int> s1;
    s1.insert(3);
    s1.insert(2);
    s1.insert(1);

    set<int> s2;
    s2.insert(4);
    s2.insert(5);
    s2.insert(6);

    s1.swap(s2);
    printset(s1);
    printset(s2);
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}