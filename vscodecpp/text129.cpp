#include <iostream>
using namespace std;

// 通过全局函数打印person信息

template <class T1, class T2>
class person
{
    // 全局函数 类内实现
    friend void printperson(person<T1, T2> &p)
    {
        cout << "姓名：" << p.m_name << "年龄： " << p.m_age << endl;
    }

public:
    person(T1 name, T2 age)
    {
        this->m_name = name;
        this->m_age = age;
    }

private:
    T1 m_name;
    T2 m_age;
};

void test01()
{
    person<string, int> p("zhangsan", 20);
    printperson(p);
}
int main()
{
    test01();

    system("pause");
    return 0;
}