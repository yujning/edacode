#include <iostream>
using namespace std;

// 关系运算符重载
class person
{
public:
    person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }

    // 重载==
    bool operator==(person &p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return true;
        }

        return false;
    }

private:
    string m_name;
    int m_age;
};

void test01()
{
    person p1("张三", 18);
    person p2("李四", 18);

    if (p1 == p2)
    {
        cout << "p1和p2是同一个人" << endl;
    }
    cout << "p1和p2不是同一个人" << endl;
}
int main()
{
    test01();

    system("pause");
    return 0;
}