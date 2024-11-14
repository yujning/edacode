#include <iostream>
using namespace std;

// 定义结构体
struct student
{
    // 成员列表
    string name;
    int age;
    int score;
};

int main()
{
    student s = {"张三", 19, 100};
    student *p = &s;
    cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
    system("pause");
    return 0;
}