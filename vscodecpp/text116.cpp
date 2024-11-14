#include <iostream>
using namespace std;
#include <fstream>

class person
{
public:
    char m_name[64];
    int m_age;
};
void test01()
{
    // 1.包含头文件
    // 2.创建文件流对象
    ofstream ofs("person.txt", ios::out | ios::binary); // ios::out写文件 ios::binary二进制
    // 3.写文件
    person p = {"tom", 20};
    ofs.write((const char *)&p, sizeof(p));
    // 4.关闭文件
    ofs.close();
}
int main()
{
    test01();

    system("pause");
    return 0;
}