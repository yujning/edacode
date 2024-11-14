#include <iostream>
using namespace std;

void test01()
{
    string str1;
    str1 = "hello world";
    // cout << "str1 = " << str1 << endl;

    // 1. 通过[]访问字符串
    for (size_t i = 0; i < str1.size(); i++)
    {
        cout << str1[i] << "";
    }
    cout << endl;

    // 2.通过at方式访问单个字符
    for (size_t i = 0; i < str1.size(); i++)
    {
        cout << str1.at(i) << "";
    }
    cout << endl;

    // 修改单个字符
    str1[0] = 'x';
    cout << "str1 = " << str1 << endl;

    str1.at(1) = 'y';
    cout << "str1 = " << str1 << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}