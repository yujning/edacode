#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int i)
{
    cout << i << " ";
}
// 差集 set_difference
void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> v3; // 目标容器
    v3.resize(max(v1.size(), v2.size()));
    vector<int>::iterator itend1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); // v1和v2的差集
    for_each(v3.begin(), itend1, myprint);
    cout << endl;

    vector<int>::iterator itend2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin()); // v2和v1的差集
    for_each(v3.begin(), itend2, myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}