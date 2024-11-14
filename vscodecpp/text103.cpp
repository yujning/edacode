#include <iostream>
using namespace std;

// 继承方式
// 公共继承
class base
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
class son1 : public base
{
public:
    void func()
    {
        m_a = 10; // 父类中的公共权限成员到子类依然是公共权限,公共权限类内类外都可以访问
        m_b = 20; // 父类中的保护权限到子类依然是保护权限，保护权限是只能类内访问
        // m_c = 20;//父类中的私有权限成员，子类访问不到
    }
};
void test01()
{
    son1 s1;
    s1.m_a = 100;
    // s1.m_b = 20;
}
class son2 : protected base
{
public:
    void func()
    {
        m_a = 10; // 父类中的公共权限成员到子类是保护权限
        m_b = 20; // 父类中的保护权限到子类依然是保护权限
        // m_c = 20;//父类中的私有权限成员，子类访问不到
    }
};
void test02()
{
    son2 s2;
    // s2.m_a = 100;//保护权限类外不可访问
}

class son3 : private base
{
public:
    void func()
    {
        m_a = 10; // 父类中的公共权限成员到子类是私有权限
        m_b = 20; // 父类中的保护权限到子类依然是私有权限
        // m_c = 20;//父类中的私有权限成员，子类访问不到
    }
};

class grandson3 : public son3
{
public:
    void func()
    {
        // m_a = 100;//到了son3中m_a变为私有，访问不到
    }
};

void test03()
{
    son3 s3;
    // s3.m_a = 10;
}

int main()
{

    system("pause");
    return 0;
}