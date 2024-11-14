#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int i)
{
    cout << i << " ";
}

// 交集 set_intersection
void test01()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.resize(min(v1.size(), v2.size())); // 最特殊都没有交集的时候

    vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), itend, myprint); // itend 是交集的结束位置
    cout << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}