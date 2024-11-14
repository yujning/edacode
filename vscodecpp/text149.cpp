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

    deque<int> dq2(dq.begin(), dq.end() - 1); // 按照区间来赋值
    printdeque(dq2);

    deque<int> deq3(10, 100); // 10个100
    printdeque(deq3);

    deque<int> deq4(deq3); // 拷贝构造
    printdeque(deq4);
}

int main()
{
    test01();

    system("pause");
    return 0;
}