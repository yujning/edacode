#pragma once
#include <iostream>
using namespace std;
#include "person.h"

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