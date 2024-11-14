
#pragma once
#include <iostream>
using namespace std;
template <class T1, class T2>
class person
{
public:
    person(T1 age, T2 name);

    void showperson();

    T1 m_age;
    T2 m_name;
};
// 函数类外实现
template <class T1, class T2>
person<T1, T2>::person(T1 age, T2 name)
{
    this->m_age = age;
    this->m_name = name;
}
template <class T1, class T2>
void person<T1, T2>::showperson()
{
    cout << "age:" << m_age << ",name:" << m_name << endl;
}
