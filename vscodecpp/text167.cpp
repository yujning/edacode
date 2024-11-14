#include <iostream>
using namespace std;
#include <set>
// set容器 查找和统计
void test01()
{

    set<int> s1;

    // 插入数据
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    // 查找
    set<int>::iterator pos = s1.find(2);
    if (pos != s1.end())
    {
        cout << "找到了" << *pos << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}

// 统计
void test02()
{
    set<int> s1;

    // 插入数据
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(2);

    // 统计个数
    cout << "s1中有" << s1.count(2) << "个2" << endl; // 要么0个，要么1个
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}