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
    struct student stuarray[3] = {
        {"张三", 18, 100},
        {"李四", 20, 90},
        {"王五", 21, 60}};
    // 给结构体数组中的元素赋值
    stuarray[2].name = "赵六";
    stuarray[2].age = 80;
    stuarray[2].score = 30;

    // 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stuarray[i].name
             << "年龄：" << stuarray[i].age
             << "分数：" << stuarray[i].score << endl;
    }

    system("pause");
    return 0;
}