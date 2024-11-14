#include <iostream>
using namespace std;
#include <queue>

class person
{
public:
    person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};

void test01()
{
    // 创建队列
    queue<person> q;

    // 准备数据
    person p1("张三", 20);
    person p2("李四", 30);
    person p3("王五", 40);
    person p4("赵六", 50);
    cout << "队列大小为：" << q.size() << endl;

    // 入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    // 出队
    while (!q.empty())
    {
        // 查看队头
        cout << "队头的姓名是：" << q.front().m_name << "  年龄是：" << q.front().m_age << endl;
        // 查看队尾
        cout << "队尾的姓名是：" << q.back().m_name << "  年龄是：" << q.back().m_age << endl;
        // 出队
        q.pop();
    }
    cout << "队列大小为：" << q.size() << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}