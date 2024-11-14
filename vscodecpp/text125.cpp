#include <iostream>
using namespace std;

//
template <class T1, class T2>
class person
{
public:
    person(T1 name, T2 age)
    {
        this->name = name;
        this->age = age;
    }

    void showperson()
    {

        cout << "Name:" << this->name << endl;
        cout << "Age:" << this->age << endl;
    }
    T2 age;
    T1 name;
};

// 1.指定传入类型
void printperson1(person<string, int> &p)
{
    p.showperson();
}

void test01()
{
    person<string, int> p("tom", 20);
    printperson1(p);
    // p.showperson();
}
// 2.参数模板化
template <class T1, class T2>
void printperson2(person<T1, T2> &p)
{
    p.showperson();
    cout << "T1的类型为" << typeid(T1).name() << endl;
    cout << "T2的类型为" << typeid(T2).name() << endl;
}
void test02()
{
    person<string, int> p("tom", 20);
    printperson2(p);
}
// 3.整个类模板化
template <class T>
void printperson3(T &p)
{
    p.showperson();
    cout << "T的类型为" << typeid(T).name() << endl;
}
void test03()
{
    person<string, int> p("tom", 20);
    printperson3(p);
}
int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}