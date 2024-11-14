#include <iostream>
using namespace std;

// 自定义数据类型：学生包括：姓名，年龄，分数，一些类型集合组成的一个类型
// 语法：struct 类型名称 {成员列表};
struct student
{
    // 成员列表

    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
} s3;

int main()
{
    // 通过学生类型创建具体学生
    // 创建方式1.struct student s1
    struct student s1; // struct可以省略，student s1;创建结构体时不可以省略
    // 给s1属性赋值，通过.访问结构体变量中的属性
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;

    // 创建方式2.struct student s2={...}
    struct student s2 = {"李四", 19, 80}; // student s2 = {"李四", 19, 80};
    cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;

    // 创建方式3.在定义结构体时顺便创建结构体变量
    s3.name = "王五";
    s3.age = 20;
    s3.score = 60;
    cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;

    system("pause");
    return 0;
}