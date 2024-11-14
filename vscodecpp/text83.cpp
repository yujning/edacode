#include <iostream>
using namespace std;

class person
{
public:
    person()
    {
        cout << "无参函数的调用" << endl;
    }
    person(int age, int height)
    {
        cout << "有参函数的调用" << endl;
        m_age = age;
        m_height = new int(height); // new给height开辟一个新地址，这个地址是m_height的地址，new返回的是指针
    }

    // 自己实现拷贝构造函数 解决浅拷贝带来的问题
    person(const person &p)
    {
        cout << "person拷贝构造函数调用" << endl;
        m_age = p.m_age;
        // m_height = p.m_height;//编译器默认实现就是这行
        // 深拷贝操作
        m_height = new int(*p.m_height);
    }
    ~person()
    {
        // 析构代码，将堆区开辟的数据做释放操作
        if (m_height != NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        cout << "析构函数的调用" << endl;
    }
    int m_age;
    int *m_height; // 开辟到堆区
};
void test01()
{
    person p1(18, 160);
    cout << "p1的年龄为:" << p1.m_age << "身高为" << p1.m_height << endl;
    person p2(p1);
    cout << "p2的年龄为:" << p2.m_age << "身高为" << p2.m_height << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}
