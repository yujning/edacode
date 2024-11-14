#include <iostream>
using namespace std;
#include <list>

void test01()
{
    list<int> L1;
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);
    L1.push_back(4);

    // L1[0]不可以用[]访问list容器中的元素
    // L1.at(0) 不可以用at访问list容器中的元素

    // 原因是list本质链表，不适用连续线性空间存储数据，迭代器也是不支持随机访问的

    cout << "第一个元素为：" << L1.front() << endl;
    cout << "最后一个元素为：" << L1.back() << endl;

    //验证迭代器是不支持随机访问的
    list<int>::iterator it = L1.begin();
    it = it++; // 不支持it=it+1;
    it--;
}

int main()
{
    test01();

    system("pause");
    return 0;
}