#include <iostream>
using namespace std;

// 纯虚函数
class father
{
public:
    // 抽象类特点
    // 1.无法实例化u对象 father f;new father;
    // 2.抽象类的子类，必须要重写父类的纯虚函数，否则也属于抽象类
    virtual void fun() = 0;
};
class son : public father
{
public:
    void fun()
    {
        cout << "son" << endl;
    }
};
void test01()
{
    father *father = new son;
    father->fun();
    // father *father = NULL;
    // father = new son; // farher=new farher;错误，抽象类无法实例化对象
    // father->fun();
    // delete father;
    // // son s;
    // // s.fun();
}
int main()
{
    test01();

    system("pause");
    return 0;
}