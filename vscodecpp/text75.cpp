#include <iostream>
using namespace std;

// 成员属性设置私有
// 1.可以自己控制读写权限
// 2.对于写可以检测数据有限性

class person
{
public:
    void setage(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << "年龄输入有误，请重新输入" << endl;
            return;
        }
        m_age = age;
    }

    int getage()
    {
        return m_age;
    }

private:
    int m_age = 18; // 年龄，可读可写
};

int main()
{
    person p;
    p.setage(1000);

    cout << "年龄：" << p.getage() << endl;

    system("pause");
    return 0;
}