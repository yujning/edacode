#include <iostream>
using namespace std;
// 模板局限性
// 模板并不是万能的，有些特定数据类型，需要具体方法做特殊实现

class person
{
public:
    person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    int age;
    string name;
};
template <class T>
// 判断俩个数是否相等
bool mycompare(T &a, T &b)
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 利用具体化Person的版本实现代码，具体化优先使用
template <>
bool mycompare(person &a, person &b)
{
    if (a.age == b.age && a.name == b.name)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    int a = 10;
    int b = 20;
    bool ret = mycompare(a, b);
    if (ret)
    {
        cout << "a=b" << endl;
    }
    else
    {
        cout << "a!=b" << endl;
    }
}

void test02()
{
    person p1("zhangsan", 18);
    person p2("lisi", 19);

    bool ret = mycompare(p1, p2);
    if (ret)
    {
        cout << "p1=p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}