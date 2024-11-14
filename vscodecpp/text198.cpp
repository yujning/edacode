#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int a)
{
    cout << a << endl;
}

// swap ,同种类型
void test01()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    vector<int> v2;
    v2.push_back(3);
    swap(v1, v2);
    for_each(v1.begin(), v1.end(), myprint);
    cout << endl;
    for_each(v2.begin(), v2.end(), myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}