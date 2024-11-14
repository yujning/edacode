#include <iostream>
using namespace std;

// 赋值运算符重载
class person
{
public:
    person(int age)
    {
        m_age = new int(age);
    }
    int *m_age;
    ~person()
    {
        //
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
    person &operator=(person &p)
    {
        // 先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        // 深拷贝
        m_age = new int(*p.m_age); // 开辟一块新的地址
        return *this;              // 返回对象本体,p3=p2=p1
    }
};
void test01()
{
    person p1(10);
    person p2(18);
    person p3(30);
    p3 = p2 = p1;
    cout << "p1的年龄为" << *p1.m_age << endl;

    cout << "p2的年龄为" << *p2.m_age << endl;
    cout << "p3的年龄为" << *p3.m_age << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}