#include <iostream>
using namespace std;

// 继承同名成员处理方式
// 访问子类同名成员，直接访问即可
// 访问父类同名成员 需要加作用域

class father
{
public:
    father()
    {
        m_a = 100;
    }
    void func()
    {
        cout << "father——func调用" << endl;
    }
    void func(int a)
    {
        cout << "father——func(int a)调用" << endl;
    }
    int m_a;
};

class son : public father
{
public:
    son()
    {
        m_a = 10;
    }
    void func()
    {
        cout << "son——func调用" << endl;
    }
    void func(int a)
    {
        cout << "son——son(int a)调用" << endl;
    }
    int m_a;
};

// 同名成员函数属性
void test01()
{
    son s;
    cout << "m_a=" << s.father::m_a << endl;
    cout << "m_a=" << s.m_a << endl;
}

// 同名成员函数处理
void test02()
{
    son s;
    s.func();
    s.father::func();
    s.func(1); // 若子类无func(int a)这个成员函数，只有父类的func(int a)，也不可以运行，因为子类会把父类的所有同名成员函数隐藏掉
    s.father::func(2);
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}