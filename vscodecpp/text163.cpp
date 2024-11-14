#include <iostream>
using namespace std;
#include <list>
// list容器 排序案例 对于自定义数据类型，做排序
// 按照年龄进行升序 如果年龄相同按照身高进行降序
class person
{
public:
    person(string name, int age, int height)
    {
        this->m_name = name;
        this->m_age = age;
        this->m_height = height;
    }
    string m_name;
    int m_age;
    int m_height;
};

/// 指定排序规则
bool compareperson(person &p1,person&p2)
{
    return p1.m_age < p2.m_age || (p1.m_age == p2.m_age && p1.m_height > p2.m_height);
}
void test01()
{
    list<person> l;
    person p1("张三", 20, 180);
    person p2("李四", 18, 170);
    person p3("王五", 25, 160);
    person p4("赵六", 25, 170);
    person p5("钱七", 20, 168);
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    for (list<person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "name:" << (*it).m_name << " age:" << (*it).m_age << " height:" << (*it).m_height << endl;
    }

    // 排序后
    cout << "排序后：" << endl;

    l.sort(compareperson);
    for (list<person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "name:" << (*it).m_name << " age:" << (*it).m_age << " height:" << (*it).m_height << endl;
    }
}
int main()
{
    test01();

    system("pause");
    return 0;
}