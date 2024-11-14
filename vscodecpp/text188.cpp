#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 常用查找算法binary_search
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i * 2);
    }
    v.push_back(9); // 容器被打断
    //  查找容器中是否有9元素，容器必须是有序的序列
    if (binary_search(v.begin(), v.end(), 9))
    {
        cout << "容器中存在元素9" << endl;
    }
    else
    {
        cout << "容器中不存在元素9" << endl;
    }
}

int main()
{
    test01();

    system("pause");
    return 0;
}