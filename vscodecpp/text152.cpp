#include <iostream>
using namespace std;
#include <deque>

//  容器插入和删除
void printdeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 俩端操作
void test01()
{
    // 尾插
    deque<int> d;
    d.push_back(1);

    // 头插
    d.push_front(2);

    // 打印
    printdeque(d);

    // 尾删
    d.pop_back();
    printdeque(d);

    // 头删
    d.pop_front();

    printdeque(d);
}

void test02()
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);

    printdeque(d1);

    // insert 插入
    d1.insert(d1.begin(), 4);
    printdeque(d1);

    d1.insert(d1.begin(), 2, 10); // 在d1.begin()处插入2个10

    // 区间插入
    deque<int> d2;
    d2.push_back(10);
    d2.push_back(20);
    d2.push_back(30);

    d1.insert(d1.begin(), d2.begin(), d2.end()); // 在d1.begin()处插入d2的元素
    printdeque(d2);
}

void test03()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(30);
    d.push_front(40);
    printdeque(d);

    // 删除
    d.erase(d.begin());
    deque<int>::iterator it = d.begin();
    it++;
    d.erase(it);
    printdeque(d);

    // 按区间删除
    d.erase(d.begin(), d.end()); // 删除d中所有元素
    // 清空
    d.clear();
    printdeque(d);
}

int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}