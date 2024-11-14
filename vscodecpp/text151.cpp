#include <iostream>
using namespace std;
#include <deque>

void printdeque(const deque<int> &dq) // 容器中数据不可以更改
{
    for (deque<int>::const_iterator i = dq.begin(); i != dq.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> dq;
    for (int i = 0; i < 10; i++)
    {
        dq.push_back(i);
    }
    printdeque(dq);

    if (dq.empty())
    {
        cout << "容器为空" << endl;
    }
    else
    {
        cout << "容器不为空" << endl;
        cout << "容器大小为" << dq.size() << endl;
        // deque容器没有容量概念，因为可以无限放数据
    }

    // 重新指定大小
    dq.resize(15, 8);
    printdeque(dq);

    dq.resize(2);
    printdeque(dq);
}

int main()
{
    test01();

    system("pause");
    return 0;
}