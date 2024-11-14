#include <iostream>
using namespace std;

class person
{
public:
    person()
    {
        cout << "person的无参调用" << endl;
    }
    person(int a)
    {
        age = a;
        cout << "person的有参调用" << endl;
    }

    // 拷贝构造函数
    person(const person &p) // 加const是因为确保在拷贝过程中，不会修改被拷贝的对象
    {
        // 将传入的人身上所有的属性，拷贝到我身上
        age = p.age;
        cout << "person的拷贝函数调用" << endl;
    }
    // 析构函数不可以有参数，不可以发生重载text69
    ~person()
    {
        cout << "person的析构函数调用" << endl;
    }
    int age;
};

// 拷贝函数调用时机
// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    person p1(10);
    person p2(p1);
    cout << "p2的年龄" << p2.age << endl;
}

// 2.值传递的方式给函数参数传值

void dowork1(person p)
{
}
void test02()
{
    person p;
    dowork1(p);
}

// 3.值方式返回局部对象
person dowork2()
{
    person p1;
    cout << (int *)&p1 << endl;
    return p1;
}
void test03()
{
    person p = dowork2();
    cout << (int *)&p << endl;
}
int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}