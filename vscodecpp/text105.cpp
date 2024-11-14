#include <iostream>
using namespace std;

class father
{
public:
    father()
    {
        cout << "father构造函数调用" << endl;
    }

    ~father()
    {
        cout << "father析构函数调用" << endl;
    }
};

class son : public father
{
public:
    son()
    {
        cout << "son构造函数调用" << endl;
    }
    ~son()
    {
        cout << "son析构函数调用" << endl;
    }
};

void test01()
{
    son s1; // 先构造父类，再构造子类，析构的顺序与构造相反
}
int main()
{
    test01();

    system("pause");
    return 0;
}