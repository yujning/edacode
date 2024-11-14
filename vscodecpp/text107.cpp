#include <iostream>
using namespace std;

class father
{
public:
    static int m_a;
    static void func()
    {
        cout << "father的静态成员函数调用" << endl;
    }
    static void func(int a)
    {
        cout << "father的静态成员函数调用" << endl;
    }

}; // 类内声明，类外初始化
int father::m_a = 100;

class son : public father
{
public:
    static int m_a;
    static void func()
    {
        cout << "son的静态成员函数调用" << endl;
    }
    static void func(int a)
    {
        cout << "son的静态成员函数调用" << endl;
    }
};
int son::m_a = 200;

// 同名静态成员属性
void test01()
{
    // 1.通过对象访问
    cout << "通过对象访问：" << endl;
    son s;
    cout << "son 下m_a=" << s.m_a << endl;
    cout << "father 下m_a=" << s.father::m_a << endl;

    // 2.通过类名访问
    cout << "通过类名访问：" << endl;
    cout << "son 下m_a=" << son::m_a << endl;
    cout << "father 下m_a=" << son::father::m_a << endl;
}

// 同名静态成员函数
void test02()
{
    son s;
    s.func();
    s.father::func();

    son::func();
    son::father::func(); // father::func();

    son::func(11);
    son::father::func(13);
    //子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
    //如果想访问父类中被隐藏同名成员，需要加作用域
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}