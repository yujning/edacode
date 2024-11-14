#include <iostream>
using namespace std;
#include <fstream>
// 文本文件 写文件
void test01()
{
    // 1.包含头文件 fstream

    // 2.创建文件流对象
    ofstream ofs;
    // 3.打开文件
    ofs.open("test.cpp", ios::out);
    // 4.写文件
    ofs << "hello world";
    // 5.关闭文件
    ofs.close();
}

int main()
{
    test01();

    system("pause");
    return 0;
}