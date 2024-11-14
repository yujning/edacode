#include <iostream>
using namespace std;
#include <algorithm>
#include <numeric>
#include <vector>

void myprint(int a)
{
    cout << a << " ";
}

// fill 填充
void test01()
{
    vector<int> v;
    v.resize(10);

    // 后期重新填充
    fill(v.begin(), v.end(), 100);
    for_each(v.begin(), v.end(), myprint);
}
int main()
{
    test01();

    system("pause");
    return 0;
}