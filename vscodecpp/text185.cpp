#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
// 常用查找算法
// find

// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    // 查找容器中是否有5这个元素
    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it != v.end())
    {
        cout << "找到了元素5" << endl;
    }
    else
    {
        cout << "未找到元素5" << endl;
    }
}

class person
{
public:
    person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    // 重载 ==底层find知道如何对比person数据类型
    bool operator==(const person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string m_name;
    int m_age;
};

void test02()
{
    vector<person> v;

    // 创建数据
    person p1("张三", 20);
    person p2("李四", 30);
    person p3("王五", 40);
    person p4("赵六", 50);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<person>::iterator it = find(v.begin(), v.end(), p2); // find返回的是迭代器
    if (it != v.end())
    {
        cout << "找到了元素" << endl;
        cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}