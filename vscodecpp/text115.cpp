#include <iostream>
using namespace std;
#include <fstream>
// 文本文件 写文件
void test01()
{
    // 1.包含头文件 fstream

    // 2.创建文件流对象
    ifstream ifs;
    // 3.打开文件
    ifs.open("test.txt", ios::in); // ios::in 读文件,ios::out写文件
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4.读文件
    // 第一种
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    // 第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf))) // 读一行,读一行存入buf中，直到读到文件尾为止
    // {
    //     cout << buf << endl;
    // }

    // 第三种
    string buf;
    while (getline(ifs, buf)) // 读一行存入buf中，直到读到文件尾为止,一行一行读
    {
        cout << buf << endl;
    }

    // 第四种
    char c;
    while ((c = ifs.get()) != EOF) // EOF是文件结束符, end of file，一个一个读
    {
        cout << c << endl;
    }

    // 5.关闭文件
    ifs.close();
}

int main()
{
    test01();

    system("pause");
    return 0;
}