#include <iostream>
using namespace std;

// 字符串比较是通过字符的ASCII码值比较实现的
//= 返回0
//< 返回-1
//> 返回1

void test01()
{
    string str1 = "abc";
    string str2 = "abd";
    int result = str1.compare(str2);
    if (result == 0)
        cout << "相等" << endl;
    else if (result < 0)
        cout << "小于" << endl;
    else
        cout << "大于" << endl;
}
int main()
{
    test01();

    system("pause");
    return 0;
}