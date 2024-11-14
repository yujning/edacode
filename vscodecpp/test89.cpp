#include <iostream>
using namespace std;

class person
{
public:
    void showpersonname()
    {
        cout << "this is the person class" << endl;
    }
    void showpersonage()
    {
        if (this == NULL)
        {
            return;
        }
        cout << "age=" << this->m_age << endl; // 报错原因传入指针为空指针
    }
    int m_age;
};

void test01()
{
    person *p = NULL;

    p->showpersonname();
    p->showpersonage();
}

int main()
{
    test01();

    system("pause");
    return 0;
}