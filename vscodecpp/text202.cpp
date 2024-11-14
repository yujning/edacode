#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int i)
{
    cout << i << " ";
}

// 并集set_union
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
    v3.resize(v1.size() + v2.size());
    vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), itend, myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}