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