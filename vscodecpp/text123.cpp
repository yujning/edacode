#include <iostream>
using namespace std;

template <class nametype, class agetype> // 类模板在模板参数列表中可以有默认参数 template <class nametype=string, class agetype>
// 那么可以写成person <int>p("zhangsan",18);
class person
{
public:
    person(string name, int age)

    {
        this->name = name;
        this->age = age;
    }
    void showperson()
    {
        cout << "name=" << this->name << ",age=" << this->age << endl;
    }
    nametype name;
    agetype age;
};
void test01()
{
    person<string, int> p1("zhangsan", 18); // person p("zhangsan",18)错误，类模板没有自动类型推导使用方式，需要显示指定
    p1.showperson();
}

int main()
{
    test01();

    system("pause");
    return 0;
}