#include <iostream>
using namespace std;
// 创建学生类
// 类中的属性和行为，我们统一称为成员
// 属性  成员属性  成员变量
// 行为  成员函数  成员方法
class student
{
public: // 公共权限
    // 属性
    string m_name;
    int m_id;
    // 行为
    void showstudent()
    {
        cout << "姓名：" << m_name << "学号：" << m_id << endl;
    }

    void setname(string name)
    {
        m_name = name;
    }
    void setid(int id)
    {
        m_id = id;
    }
};

int main()
{
    student s1; // 创建一个具体的学生
    // s1.m_name = "张三";
    // s1.m_id = 1;
    // s1.showstudent();

    s1.setname("张三");
    s1.setid(1);
    s1.showstudent();

    system("pause");
    return 0;
}