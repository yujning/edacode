#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 常用查找算法 count_if
// 1.统计内置数据类型的元素个数
class find1
{
public:
    bool operator()(int n)
    {
        return n == 1;
    }
};
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    int num = count_if(v.begin(), v.end(), find1());
    cout << "num=" << num << endl;
}

// 2.统计自定义数据类型的元素个数
class person
{
public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

class greater20
{
public:
    bool operator()(const person &p)
    {
        return p.age > 20;
    }
};
void test02()
{
    person p1("zhangsan", 20);
    person p2("lisi", 30);
    person p3("wangwu", 40);
    vector<person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    int num = count_if(v.begin(), v.end(), greater20());
    cout << "num=" << num << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}