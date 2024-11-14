#include <iostream>
using namespace std;
#include <deque>

void test01()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    // 通过[]方式访问元素
    for (size_t i = 0; i < d.size(); i++)
    {
        cout << "d[" << i << "]:" << d[i] << endl;
    }
    cout << endl;

    // 通过at方式访问元素
    for (size_t i = 0; i < d.size(); i++)
    {
        cout << "d.at(" << i << "):" << d.at(i) << endl;
    }
    cout << endl;

    cout << "第一个元素为：" << d.front() << endl;
    cout << "最后一个元素为：" << d.back() << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}