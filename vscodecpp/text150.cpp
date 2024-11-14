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

    //=赋值
    deque<int> dq2 = dq;
    dq2 = dq;
    printdeque(dq2);

    // assign赋值
    deque<int> dq3;
    dq3.assign(dq.begin(), dq.end());
    printdeque(dq3);

    //
    deque<int> dq4;
    dq4.assign(7, 102);
    printdeque(dq4);
}

int main()
{
    test01();

    system("pause");
    return 0;
}