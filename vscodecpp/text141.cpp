#include <iostream>
using namespace std;

// 子串
void test01()
{
    string str = "abcdef";
    string substr = str.substr(1, 3);
    cout << "substr=" << substr << endl;
}

// 实用操作
void test02()
{
    string email = "hello@qq.com";
    // 从邮箱中提取用户名
    int pos = email.find("@");
    string username = email.substr(0, pos); // pos个字符
    cout << "username=" << username << endl;
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}