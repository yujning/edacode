#include <iostream>
using namespace std;

class abstractdrinking
{
public:
    virtual void boil() = 0; // 煮水
    virtual void brew() = 0; // 冲泡
    virtual void pour() = 0; // 倒入杯中
    virtual void add() = 0;  // 添加配料
};

class coffee : public abstractdrinking
{
public:
    void boil()
    {
        cout << "煮水" << endl;
    }
    void brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    void pour()
    {
        cout << "倒入杯中" << endl;
    }
    void add()
    {
        cout << "添加配料" << endl;
    }
};

// 制作茶叶
class tea : public abstractdrinking
{
public:
    void boil()
    {
        cout << "煮水" << endl;
    }
    void brew()
    {
        cout << "冲泡茶" << endl;
    }
    void pour()
    {
        cout << "倒入杯中" << endl;
    }
    void add()
    {
        cout << "添加配料" << endl;
    }
};

void test01(abstractdrinking *a)
{
    a->boil();
    a->brew();
    a->pour();
    a->add();
}
int main()
{
    coffee c;
    test01(&c);
    tea t;
    test01(&t);

    system("pause");
    return 0;
}