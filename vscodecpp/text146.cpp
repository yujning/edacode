#include <iostream>
using namespace std;
#include <vector>

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // 利用at方式访问元素
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    // 返回第一个元素
    cout << "第一个元素为" << v1.front() << endl;

    // 获取最后一个元素
    cout << "最后一个元素为" << v1.back() << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}