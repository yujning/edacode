#include <iostream>
using namespace std;

struct student
{
    // 成员列表
    string name;
    int age;
    int score;
};
// student先定义，不然报错
struct teacher
{
    // 成员列表
    int id;
    string name;
    int age;
    struct student stu; // 辅导的学生
};

int main()
{
    // 创建老师
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.age = 18;
    t.stu.name = "小王";
    t.stu.score = 100;
    cout << "老师姓名：" << t.name << "老师工号：" << t.id << "老师年龄：" << t.age
         << "老师的学生姓名：" << t.stu.name << "老师的学生年龄" << t.stu.age
         << "老师的学生成绩：" << t.stu.score << endl;

    system("pause");
    return 0;
}