#include <iostream>
using namespace std;
class animal
{
public:
    virtual void speak() = 0;
    // virtual ~animal() {cout<<"animal虚析构调用"}
    virtual ~animal() = 0;
};
animal::~animal()
{
    cout << "animal纯虚析构调用" << endl;
}
class cat : public animal
{
public:
    cat(string name)
    {
        m_name = new string(name);
    }
    virtual void speak()
    {
        cout << *m_name << "猫在说话" << endl;
    }
    ~cat()
    {
        if (m_name != NULL)
            delete m_name;
        m_name = NULL;
    }
    string *m_name;
};
void test01()
{
    animal *a = new cat("tom");
    a->speak();
    delete a; // 父类的指针在析构时候，不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏，将父类的析构改成虚析构
}
int main()
{
    test01();

    system("pause");
    return 0;
}