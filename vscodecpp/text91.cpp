#include <iostream>
using namespace std;

// 友元实现方式
// 1.全局函数做友元

class building
{
    friend void goodgay(building *building); // goodgay全局函数是Building好朋友，可以访问buliding中私有成员

public:
    string m_settingroom; // 客厅
    building()
    {
        m_beddingroom = "卧室";
        m_settingroom = "客厅";
    }

private:
    string m_beddingroom; // 卧室
};
// 全局函数
void goodgay(building *building)
{
    cout << "好基友全局函数正在访问" << building->m_settingroom << endl;
    cout << "好基友全局函数正在访问" << building->m_beddingroom << endl;
}

void test01()
{
    building b;
    goodgay(&b);
}
int main()
{
    test01();

    system("pause");
    return 0;
}