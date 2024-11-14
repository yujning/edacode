#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 常用查找算法_count
// 1.统计内置数据类型
void test01()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    int num = count(v1.begin(), v1.end(), 3); // 统计元素3出现的次数
    cout << "3出现的次数为：" << num << endl;
}

// 2.统计自定义数据类型，需要配合重载==
class person
{
public:
    person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    bool operator==(const person &p) // 重载==
    {
        return this->m_name == p.m_name && this->m_age == p.m_age;
    }
    int m_age;
    string m_name;
};

void test02()
{
    vector<person> v2;
    person p1("zhangsan", 20);
    person p2("lisi", 30);
    person p3("wangwu", 40);
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);

    int num = count(v2.begin(), v2.end(), p1); // 统计元素p1出现的次数
    cout << "p1出现的次数为：" << num << endl;
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}