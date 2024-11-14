#include <iostream>
using namespace std;

// 动物类
class animal
{
public:
    int m_age;
};
// 羊
class sheep : public animal
{
};

class tuo : public animal
{
};

class sheeptuo : public sheep, public tuo
{
};
void test01()
{
    sheeptuo st;
    st.sheep::m_age = 19;
    st.tuo::m_age = 29;
    cout << "st.sheep::m_age =" << st.sheep::m_age << endl;
    cout << "st.tuo::m_age =" << st.tuo::m_age << endl;
}
int main()
{

    system("pause");
    return 0;
}