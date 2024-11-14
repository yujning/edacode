#include <iostream>
using namespace std;

// 成员函数做友元
class building;
class goodgay
{
public:
    goodgay();
    void visit();

private:
    building *b;
};
class building
{
    friend void goodgay::visit();

public:
    building();
    string m_settingroom = "客厅";

private:
    string m_beddingroom = "卧室";
};
building ::building()
{
    this->m_beddingroom = "卧室";
    this->m_settingroom = "客厅";
}
goodgay::goodgay()
{
    b = new building;
}
void goodgay::visit()
{
    cout << "好基友正在访问" << b->m_beddingroom << endl;
    cout << "好基友正在访问" << b->m_settingroom << endl;
}

void test01()
{
    goodgay gg;
    gg.visit();
}

int main()
{
    test01();

    system("pause");
    return 0;
}