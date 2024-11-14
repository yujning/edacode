#include <iostream>
using namespace std;

// 通过冒泡排序，将数组中的人物按照年龄进行升序排序，最终打印排序后的结果

// 1.设计人物结构体
struct hero
{
    string name;
    int age;
    string sex;
};

// 冒泡排序，实现年龄升序排列
void bubblesort(struct hero heroarr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (heroarr[j].age > heroarr[j + 1].age)
            {
                struct hero temp = heroarr[j];
                heroarr[j] = heroarr[j + 1];
                heroarr[j + 1] = temp;
            }
        }
    }
}

// 打印函数
void printhero(struct hero heroarr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "人物姓名：" << heroarr[i].name << "人物年龄：" << heroarr[i].age << "人物性别：" << heroarr[i].sex << endl;
    }
};
int main()
{
    // 2.创建数组存放5名人物
    struct hero heroarr[5] =
        {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"张飞", 20, "男"},
            {"赵云", 21, "男"},
            {"貂蝉", 19, "女"},
        };
    cout << "排序前：" << endl;
    int len = sizeof(heroarr) / sizeof(heroarr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << "人物姓名：" << heroarr[i].name << "人物年龄：" << heroarr[i].age << "人物性别：" << heroarr[i].sex << endl;
    }

    // 3.对数组进行排序，按照年龄进行升序排列
    bubblesort(heroarr, len);
    // 4.将排序后结果打印输出
    cout << "排序后：" << endl;
    printhero(heroarr, len);
    system("pause");
    return 0;
}