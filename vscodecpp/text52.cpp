#include <iostream>
using namespace std;

// const使用场景
struct student
{
    // 成员列表
    string name;
    int age;
    int score;
};
void printtstudent(const student *s) // 指针是地址传递,用指针只占4个字节；
{
    // s->age = 150;//加入const之后，一旦有修改的操作就会报错，可以防止我们误操作
    cout << "姓名：" << s->name << "年龄：" << s->age << "成绩：" << s->score << endl;
}
int main()
{
    // 创建结构体变量
    struct student s = {"张三", 19, 100};
    printtstudent(&s);
    cout << "张三年龄为：" << s.age << endl; // 指针改的不是形参，而是实参

    system("pause");
    return 0;
}