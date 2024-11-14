#include <iostream>
using namespace std;

// string 字符串拼接
// string& operator+=(const char* str);
// string& operator+=(const char c);
// string& operator+=(const string &s);
// string& append(const char *s);
// string& append(const char *s, int n);
// string& append(const string &s);
// string& append(int n, char c);
// string& append(const string &s, int start, int n);

void test01()
{
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1=" << str1 << endl;

    str1 += ':';
    cout << "str1=" << str1 << endl;

    string str2 = "LOLO DNF";
    str1 += str2;
    cout << "str1=" << str1 << endl;

    string str3 = "I";
    str3.append("love");
    cout << "str3=" << str3 << endl;

    str3.append("game abcd", 4);
    cout << "str3=" << str3 << endl;

    str3.append(str2, 0, 3); // 只截取到lol
    cout << "str3=" << str3 << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}