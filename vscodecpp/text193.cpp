#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int x)
{
    cout << x << " ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        // v2.push_back(i + 1);
    }
    v2.push_back(10);
    v2.push_back(14);
    v2.push_back(12);
    vector<int> v3;
    v3.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), v3.end(), myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}