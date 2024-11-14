#include <iostream>
using namespace std;
#include <vector>

// vector存放自定义数据类型
class person
{
public:
    person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    string m_name;
    int m_age;
};

void test01()
{
    vector<person> v;
    person p1("aaa", 10);
    person p2("bbb", 20);
    person p3("ccc", 30);
    person p4("ddd", 40);
    person p5("eee", 50);

    // 向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // 遍历容器中的数据
    for (vector<person>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << "name:" << (*i).m_name << " age:" << (*i).m_age << endl; //*i解引用解出来是person类型的数据,i->m_age
    }
}

void test02()
{
    vector<person *> v;
    person p1("aaa", 10);
    person p2("bbb", 20);
    person p3("ccc", 30);
    person p4("ddd", 40);
    person p5("eee", 50);

    // 向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    // 遍历容器中的数据
    for (vector<person *>::iterator i = v.begin(); i != v.end(); i++) // i是person类型的指针
    {
        cout << "name:" << (*i)->m_name << " age:" << (*i)->m_age << endl; //*i解引用解出来是person类型的指针
    }
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}