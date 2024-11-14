#include <iostream>
using namespace std;
#include <set>

void printset(const set<int> &s)
{
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// set容器构造和赋值
void test01()
{
    set<int> s1;

    // 插入元素
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    // 遍历元素
    printset(s1);

    // 拷贝构造
    set<int> s2(s1);
    printset(s2);

    // 赋值
    set<int> s3;
    s3 = s1;
    printset(s3);
}

int main()
{
    test01();

    system("pause");
    return 0;
}