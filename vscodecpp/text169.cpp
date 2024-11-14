#include <iostream>
using namespace std;

// pair对组的创建
void test01()
{
    // 第一种
    pair<string, int> p("zhangsan", 18);
    cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

    // 第二种

    pair<string, int> p2 = make_pair("lisi", 19);
    cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}