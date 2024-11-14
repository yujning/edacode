#include <iostream>
using namespace std;
// 动物类
class animal
{
public:
    virtual void speak() // 虚函数，如果想让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
    {
        cout << "动物叫" << endl;
    }
};

// 动态多态满足条件
// 1.有继承关系
// 2.子类重写父类的虚函数

// 动态多态使用
// 父类的指针或者引用 执行子类对象
// 猫类
class cat : public animal
{
public:
    // 重写 函数返回值类型  函数名 参数列表 完全相同
    virtual void speak()
    {
        cout << "猫叫" << endl;
    }
};

// 狗类
class dog : public animal
{
public:
    void speak()
    {
        cout << "狗叫" << endl;
    }
};
void dospeak(animal &a)
{
    a.speak();
}
void test01()

{

    cat c;
    dospeak(c); // 猫叫
    dog d;
    dospeak(d); // 狗叫
}
int main()
{
    test01();

    system("pause");
    return 0;
}