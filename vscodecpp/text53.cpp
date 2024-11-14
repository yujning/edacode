#include <iostream>
using namespace std;
#include <ctime>
// 一名老师带5个学生，共有3个老师

// 学生结构体定义
struct student
{

    // 姓名
    string sname;
    // 分数
    int score;
};
// 老师结构体定义
struct teacher
{
    string tname;
    struct student sarr[5];
};
// 给老师和学生赋值的函数
void allocatespace(struct teacher tarr[], int len) // 数组名就是地址
{
    string nameseed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tarr[i].tname = "teacher_";
        tarr[i].tname += nameseed[i];

        // 通过循环给每名老师所带的学生赋值
        for (int j = 0; j < 5; j++)
        {
            tarr[i].sarr[j].sname = "student_";
            tarr[i].sarr[j].sname += nameseed[j];

            int random = rand() % 61 + 40; // 随机数40~100;
            tarr[i].sarr[j].score = random;
        }
    }
}

// 打印函数
void printinfo(struct teacher tarr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师名字：" << tarr[i].tname << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t所带的学生姓名：" << tarr[i].sarr[j].sname << "成绩：" << tarr[i].sarr[j].score << endl;
        }
    }
}
int main()
{
    // 随机数种子
    srand((unsigned)time(NULL));
    // 1.创建3名老师的数组
    struct teacher tarr[3];

    // 2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len = sizeof(tarr) / sizeof(tarr[0]);
    allocatespace(tarr, len);

    // 3.打印所有老师及所带学生的信息
    printinfo(tarr, len);

    system("pause");
    return 0;
}