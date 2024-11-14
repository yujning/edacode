#include <iostream>
using namespace std;
#include <functional>
void test01()
{
    negate<int> f;
    cout << f(50) << endl;
}
// plus 二元仿函数 加法
void test02()
{
    plus<int> f;
    cout << f(10, 20) << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}