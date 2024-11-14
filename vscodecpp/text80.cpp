#include <iostream>
using namespace std;

// 1.构造函数的分类及调用
// 分类
// 按照参数分类  无参构造（默认构造）和有参构造
class person
{
public:
    person()
    {
        cout << "person的无参调用" << endl;
    }
    person(int a)
    {
        age = a;
        cout << "person的有参调用" << endl;
    }

    // 拷贝构造函数
    person(const person &p) // 加const是因为确保在拷贝过程中，不会修改被拷贝的对象
    {
        // 将传入的人身上所有的属性，拷贝到我身上
        age = p.age;
        cout << "person的拷贝函数调用" << endl;
    }
    // 析构函数不可以有参数，不可以发生重载text69
    ~person()
    {
        cout << "person的析构函数调用" << endl;
    }
    int age;
};
void test01()
{
    // 1.括号法
    person p1; // 默认函数调用,不要写person p1();因为编译器会认为是一个函数的声明，不会认为在创建对象
    person p2(10);
    person p3(p2);

    // 注意事项
    // 调用默认构造函数时候，不要加（）
    cout << "p2的年龄" << p2.age << endl;
    cout << "p3的年龄" << p3.age << endl;

    // 2.显示法
    person p4;
    person p5 = person(10); // 调用有参构造
    person p6 = person(p5); // 拷贝构造

    // person(10);//匿名对象  特点：当前行执行结束后，系统会立即回收匿名的对象
    // cout << "aaaa" << endl;//代码是先析构掉，再执行aaaa

    // 注意事项
    // 不要利用拷贝构造函数，初始化匿名对象
    // person(p3); // 错误，编译器会认为等价与person p3;（对象声明）名称重复了

    // 3.隐式转换法
    person p7 = 10; // 相当于写了person p7 =person(10);有参构造
    person p8 = p7; // 拷贝法
}
int main()
{
    test01();

    system("pause");
    return 0;
}