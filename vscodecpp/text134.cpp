#include <iostream>
using namespace std;

// string构造

void test01()
{
    string s1;
    cout << "Str1=" << s1 << endl;

    const char *str = "Hello";
    string s2(str);
    cout << "Str2=" << s2 << endl;

    string s3(s2);
    cout << "Str3=" << s3 << endl;

    string s4(5, 'x');
    cout << "Str4=" << s4 << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}