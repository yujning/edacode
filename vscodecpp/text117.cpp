#include <iostream>
using namespace std;
#include <fstream>
// 二进制读文件
// 准备数据类型
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
    ifstream ifs("person.txt", ios::in | ios::binary); // ios::in读文件 ios::binary二进制
    // ifstream ifs;
    // ifs.open("person.txt", ios::in | ios::binary)
    //  3.打开文件 判读文件是否能打开
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    //  4.读文件
    person p;
    ifs.read((char *)&p, sizeof(person)); // 数据的地址，强转为char，占多大的内存空间
    cout << "姓名" << p.m_name << "年龄" << p.m_age << endl;

    // 4.关闭文件
    ifs.close();
}
int main()
{
    test01();

    system("pause");
    return 0;
}