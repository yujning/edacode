#include <iostream>
using namespace std;
#include <algorithm>
#include <deque>

void printdeque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it)
    {
        cout << *it << " ";
    }
}

void test01()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);

    cout << "排序前：" << endl;
    printdeque(dq);

    // 排序,默认排序规则，从小到大，升序
    sort(dq.begin(), dq.end());

    cout << "排序后：" << endl;
    printdeque(dq);
}

int main()
{
    test01();

    system("pause");
    return 0;
}