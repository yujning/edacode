#include <iostream>
using namespace std;

// 类做友元
class building;

class goodgay
{
public:
    goodgay();    // 与类名相同就是构造函数
    void visit(); // 参观函数，访问building中的属性

private:
    building *b;
};

class building
{
    friend class goodgay;

public:
    building();
    string m_settingroom;

private:
    string m_beddingroom;
};

// 类外写成员函数
building::building()
{
    m_beddingroom = "卧房";
    m_settingroom = "客厅";
}

goodgay::goodgay() // 创建一个建筑物对象
{
    b = new building;
}

void goodgay::visit()
{
    cout << "好基友正在访问" << b->m_settingroom << endl;
    cout << "好基友正在访问" << b->m_beddingroom << endl;
}

void test01()
{
    goodgay gg; // goodgay访问goodgay构造函数，创建Building，访问Building构造函数，给beddingroom和settingroom赋卧房，客厅，再访问visit函数，打印
    gg.visit();
}
int main()
{
    test01();

    system("pause");
    return 0;
}