#include <iostream>
using namespace std;

// 类模板中成员函数创建时机
// 类模板中成员函数在调用时才去创建
class person1
{
public:
    void showperson1()
    {
        cout << "showperson1" << endl;
    }
};

class person2
{
public:
    void showperson2()
    {
        cout << "showperson2" << endl;
    }
};

template <class T>
class myclass
{
public:
    T obj;

    // 类模板中的成员函数
    void func1()
    {
        obj.showperson1();
    }
    void func2()
    {
        obj.showperson2();
    }
};

void test01()
{
    myclass<person1> m1;
    m1.func1();
    myclass<person2> m2;
    m2.func2();
}
int main()
{
    test01();

    system("pause");
    return 0;
}