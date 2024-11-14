#include <iostream>
using namespace std;
// 类模板与继承
// 如果父类是类模板，子类需要指定出父类T的数据类型
template <class T>
class father
{
public:
    T m;
};

class son1 : public father<int>
{
};

void test01()
{
    son1 s1;
    s1.m = 10;
};
// 如果想灵活指定父类模板类型，子类也需要变类模板
template <class T1, class T2>
class son2 : public father<T2> // T2的类型和T2一样
{
public:
    son2()
    {
        cout << "T1的类型为" << typeid(T1).name() << endl;
        cout << "T2的类型为" << typeid(T2).name() << endl;
    }
    T1 obj;
};

void test02()
{
    son2<int, char> s2;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}