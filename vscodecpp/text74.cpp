#include <iostream>
using namespace std;

// 成员属性设置私有
// 1.可以自己控制读写权限
// 2.对于写可以检测数据有限性

class person
{
public:
    void setname(string name) // 设计姓名
    {
        m_name = name;
    }
    string getname() // 获取名字
    {
        return m_name;
    }

    int getage()
    {
        return m_age;
    }
    // 设置偶像
    void setidol(string idol)
    {
        m_idol = idol;
    }

private:
    string m_name;  // 姓名，可读可写
    int m_age = 18; // 年龄，只读
    string m_idol;  // 偶像，只写
};

int main()
{
    person p;
    p.setname("张三");
    cout << "姓名：" << p.getname() << endl;
    cout << "年龄：" << p.getage() << endl;
    p.setidol("小米"); // 只写状态，外界访问不到

    system("pause");
    return 0;
}