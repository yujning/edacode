#include <iostream>
using namespace std;
#include "showmenu.h"
#define max 1000
#include "addperson.h"

// 设计联系人结构体
struct person
{
    // 姓名
    string m_name;
    // 性别
    int m_sex;
    // 年龄
    int m_age;
    // 电话
    string m_phone;
    // 住址
    string m_addr;
};

// 通讯录结构体
struct addressbooks
{
    // 通讯录中保存的联系人数组
    struct person personarr[max];
    // 通讯录中当前记录联系人个数
    int m_size;
};

int main()
{
    int select = 0; // 创建用户选择输入的变量
    // 创建通讯录结构体变量
    addressbooks abs;
    // 初始化通讯录中当前人员人数
    abs.m_size = 0;
    // 菜单调用
    while (1) // 输入0时结束
    {
        showmenu();

        cin >> select;
        switch (select)
        {
        case 1:              // 添加联系人
            addperson(&abs); // 地址传递为了实参改变
            break;
        case 2: // 显示联系人
            break;
        case 3: // 删除联系人
            break;
        case 4: // 查找联系人
            break;
        case 5: // 修改联系人
            break;
        case 6: // 清空联系人
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    system("pause");
    return 0;
}