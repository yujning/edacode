#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int value)
{
    cout << value << endl;
}

// vector容器存放内置数据类型

void test01()
{
    // 创建了一个vector容器，数组
    vector<int> v;

    // 往数组中添加元素
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过迭代器访问容器中的数据
    vector<int>::iterator itbegin = v.begin(); // 指向第一个元素
    vector<int>::iterator itend = v.end();     // 指向最后一个元素的下一个位置

    // 第一种遍历方式
    while (itbegin != itend)
    {
        cout << *itbegin << endl;
        itbegin++;
    }

    // 第二种遍历方式
    for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)
    {
        cout << *itbegin << endl;
    }

    // 第三种遍历方式,利用STL提供遍历算法
    for_each(v.begin(), v.end(), myprint); // 利用for_each 遍历时候调用myprint函数
}
int main()
{
    test01();

    system("pause");
    return 0;
}