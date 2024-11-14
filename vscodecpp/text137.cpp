#include <iostream>
using namespace std;

// 字符串查找和替换

// 查找
void test01()
{
    string str1 = "abcdef";
    int pos1 = str1.find("fe"); // 从0开始查找，找到则返回位置，找不到返回-1
    cout << "pos1=" << pos1 << endl;
    int pos2 = str1.find("de");
    cout << "pos2=" << pos2 << endl;

    // rfind
    int pos3 = str1.rfind("bc"); // 从末尾开始查找，找到则返回位置，找不到返回-1
    cout << "pos3=" << pos3 << endl;
}

// 替换
void test02()
{
    string str1 = "abcdef";
    str1.replace(1, 3, "1234"); // 从位置1开始，替换3个字符，替换为"123"
    cout << "str1=" << str1 << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}