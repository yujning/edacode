#include <iostream>
using namespace std;

class person
{
public:
    person(int age)
    {
        this->age = age; // this指针指向被调用的成员函数所属的对象，调了p,就是p所属的对象，解决名称冲突
    }
    void personaddage(person &p)
    {
        this->age += p.age;
    }

    person &personaddage2(person &p) //引用的本质是指针常量，用引用的方式返回代表着永远指向p2不会改变
    {
        this->age += p.age;
        return *this; // this 指向p2的指针，而*this指向的就是p2这个对象的本体
    }
    int age;
};

void test01()
{
    person p1(10);
    person p2(20);
    person p3(30);

    cout << "p1的年龄" << p1.age << endl;
    p2.personaddage(p1);
    cout << "p2年龄为" << p2.age << endl;
    p3.personaddage2(p2).personaddage2(p2).personaddage2(p2);
    cout << "p3的年龄为" << p3.age << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}