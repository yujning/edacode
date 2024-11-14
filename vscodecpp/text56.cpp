#include <iostream>
using namespace std;
#define max 1000

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
// 1.菜单界面
void showmenu()
{
    cout << "1.添加联系人" << endl;
    cout << "2.显示联系人" << endl;
    cout << "3.删除联系人" << endl;
    cout << "4.查找联系人" << endl;
    cout << "5.修改联系人" << endl;
    cout << "6.清空联系人" << endl;
    cout << "0.退出通讯录" << endl;
}

// 1.添加联系人
void addperson(addressbooks *abs)
{
    // 判断通讯录是否已满，如果满了不再添加
    if (abs->m_size == max)
    {
        cout << "通讯录已满,无法添加" << endl;
        return;
    }
    else
    {
        // 添加具体联系人
        // 姓名
        string name;
        cout << "请输入姓名:" << endl;
        cin >> name;
        abs->personarr[abs->m_size].m_name = name;

        // 年龄
        int age;
        cout << "请输入年龄" << endl;
        cin >> age;
        abs->personarr[abs->m_size].m_age = age;

        // 性别
        cout << "请输入性别" << endl;
        cout << "1——男" << endl;
        cout << "2——女" << endl;
        int sex = 0;

        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarr[abs->m_size].m_sex = sex;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入" << endl;
            }
        }
        // 电话
        cout << "请输入联系电话:" << endl;
        string phone;
        cin >> phone;
        abs->personarr[abs->m_size].m_phone = phone;

        // 家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personarr[abs->m_size].m_addr = address;

        // 更新通讯录的人数
        abs->m_size++;

        cout << "添加成功" << endl;
        system("pause"); // 请按任意键操作
        system("cls");   // 清屏，清屏放在添加联系人函数里就是清的该函数的
    }
}

// 2.显示联系人函数
void showperson(addressbooks *abs)
{
    // 判断通讯录中人数是否为0，如果为0，提示记录为空
    // 如果不为0，显示联系人信息
    if (abs->m_size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_size; i++)
        {
            cout << "联系人：" << abs->personarr[i].m_name << "性别：" << (abs->personarr[i].m_sex == 1 ? "男" : "女")
                 << "年龄" << abs->personarr[i].m_age << "电话：" << abs->personarr[i].m_phone
                 << "住址" << abs->personarr[i].m_addr << endl;
        }
    }
    system("pause");
    system("cls");
}

// 3.删除联系人
// 检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isexist(addressbooks *abs, string name) // 参数1：通讯录；参数2：对比姓名
{
    for (int i = 0; i < abs->m_size; i++)
    {
        if (abs->personarr[i].m_name == name) // 找到用户输入的姓名
        {
            return i;
        }
    }
    return -1;
}
// 删除指定联系人
void deleteperson(addressbooks *abs)
{
    cout << "请输入您要删除的联系人：" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name); // ret=-1;未查到//这里的abs是指针，而非主函数中的结构体
    if (ret != -1)                // 不等于-1
    {
        // 查到此人，删除
        for (int i = ret; i < abs->m_size; i++)
        {
            // 数据前移，覆盖
            abs->personarr[i] = abs->personarr[i + 1];
        }
        abs->m_size--; // 更新通讯录的人数
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("clc");
}

// 4.查找指定联系人信息
void findperson(addressbooks *abs)
{
    cout << "请输入您要查找的联系人：" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name); // ret=-1;未查到//这里的abs是指针，而非主函数中的结构体
    if (ret != -1)                // 不等于-1
    {
        cout << "姓名：" << abs->personarr[ret].m_name << "性别：" << (abs->personarr[ret].m_sex == 1 ? "男" : "女")
             << "年龄" << abs->personarr[ret].m_age << "电话：" << abs->personarr[ret].m_phone
             << "住址" << abs->personarr[ret].m_addr << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("clc");
}

// 5.修改联系人
void modifyperson(addressbooks *abs)
{
    cout << "请输入您要修改的联系人：" << endl;
    string name;
    cin >> name;
    int ret = isexist(abs, name); // ret=-1;未查到//这里的abs是指针，而非主函数中的结构体
    if (ret != -1)                // 不等于-1
    {
        // 姓名
        string name;
        cout << "请输入姓名：";
        cin >> name;
        abs->personarr[ret].m_name = name;

        // 年龄
        int age;
        cout << "请输入年龄：";
        cin >> age;
        abs->personarr[ret].m_age = age;

        // 性别
        int sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1——男" << endl;
        cout << "2——女" << endl;
        cin >> sex;
        if (sex == 1 || sex == 2)
        {
            abs->personarr[ret].m_sex = sex;
        }
        else
        {
            cout << "请重新输入" << endl;
        }

        // 电话：
        string phone;
        cout << "请输入电话：";
        cin >> phone;
        abs->personarr[ret].m_phone = phone;

        // 住址
        string addr;
        cout << "请输入住址：";
        cin >> addr;
        abs->personarr[ret].m_addr = addr;

        cout << "修改成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("clc");
}

// 6.清空联系人
void cleanperson(addressbooks *abs)
{
    abs->m_size = 0; // 将当前记录置为0；
    cout << "通讯录已清空" << endl;
    system("pause");
    system("clc");
}
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
        switch (select) // case语句中，如果代码很长，则需用括号括起来，形成代码段
        {
        case 1:              // 添加联系人
            addperson(&abs); // 地址传递为了实参改变
            break;
        case 2: // 显示联系人
            showperson(&abs);
            break;
        case 3: // 删除联系人
            // {
            //     cout << "请输入删除联系人姓名：" << endl;
            //     string name;
            //     cin >> name;
            //     if (isexist(&abs, name) == -1)
            //     {
            //         cout << "查无此人" << endl;
            //     }
            //     else
            //     {
            //         cout << "找到此人" << endl;
            //     }
            //     break;
            // }
            deleteperson(&abs);
        case 4: // 查找联系人
            findperson(&abs);
            break;
        case 5: // 修改联系人
            modifyperson(&abs);
            break;
        case 6: // 清空联系人
            cleanperson(&abs);
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