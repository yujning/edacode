#include <iostream>
using namespace std;
#include <Set>

class person
{
public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    bool operator<(const person &p) const
    {
        return age < p.age;
    }
    string name;
    int age;
};
class mycompare
{
public:
    bool operator()(const person &p1, const person &p2) const
    {
        return p1.age < p2.age;
    }
};

void test01()
{
    set<person, mycompare> s;
    person p1("zhangsan", 20);
    person p2("lisi", 30);
    person p3("wangwu", 40);
    person p4("zhaoliu", 50);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << "姓名：" << it->name << " 年龄：" << it->age << endl;
    }

        for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << "姓名：" << it->name << " 年龄：" << it->age << endl;
    }
}
int main()
{
    test01();

    system("pause");
    return 0;
}