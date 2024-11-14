#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
// 常用查找、 find_if

// 1.查找内置数据类型

class greaterfive
{
public:
    bool operator()(int x)
    {
        return x > 5;
    }
};
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
    if (it != v.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

// 2.查找自定义数据类型
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

class greater20
{
public:
    bool operator()(const person &p)
    {
        return p.m_age >= 20;
    }
};
void test02()
{
    vector<person> v2;
    person p1("tom", 20);
    person p2("jack", 25);

    v2.push_back(p1);
    v2.push_back(p2);

    vector<person>::iterator it = find_if(v2.begin(), v2.end(), greater20());
    if (it != v2.end())
    {
        cout << it->m_name << " " << it->m_age << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}