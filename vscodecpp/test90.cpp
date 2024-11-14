#include <iostream>
using namespace std;

// 常函数
class person
{
public:
    person()
    {
    }
    // this指针的本质是指针常量，Person*const this;指针的指向不能改，例如不能写this=NULL;
    void showperson() const // 在成员函数后面加const就是const Person*const this,修饰的是This指向，this指针也不可以修改指针的值
    {
        // m_a = 100;不可更改
        // this->m_a = 100;
        this->m_b = 100;
    }
    int m_a;
    mutable int m_b; // 加关键字Mutable，特殊变量就可以修改
    void func()
    {
    }
};
void test01()
{
    person p;
    p.showperson();
}

void test02()
{
    const person p; // 在对象前加const，变为常对象
    // p.m_a = 100;//m_b不可修改
    p.m_b = 100;
    p.showperson();
    // p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性，所以常对象只能调用常函数
}
int main()
{
    test01();

    system("pause");
    return 0;
}