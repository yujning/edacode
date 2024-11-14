#include <iostream>
using namespace std;
#include <numeric>
#include <vector>

// accumulate
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "accumulate=" << accumulate(v.begin(), v.end(), 1) << endl; // 累加，1是起始累加值，1+1+2+3=7
}

int main()
{
    test01();

    system("pause");
    return 0;
}