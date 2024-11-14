#include <iostream>
using namespace std;
#include <vector>

void test01()
{
    vector<vector<int>> v;

    // 创建一个小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    // 向小容器中添加元素
    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }

    // 将小容器添加到大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    // 遍历大容器中的元素
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        //*it是小容器
        for (vector<int>::iterator it1 = (*it).begin(); it1 != (*it).end(); it1++)
        {
            cout << *it1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    test01();

    system("pause");
    return 0;
}