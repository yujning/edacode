#include <iostream>
using namespace std;

class person
{
public:
    // 1.构造函数
    // 没有返回值，不用写void
    // 函数名和类名相同
    // 构造函数可以有参数，可以发生重载
    // 创建对象时候，构造函数会自动调用，且只调用一次
    person()
    {
        cout << "这是Person的构造函数调用" << endl;
    }
    // 2.析构函数 ：进行清理的操作
    // 没有返回值，不用写void
    // 函数名和类名相同，在名称前加~
    // 析构函数不可以有参数，不可以发生重载text69
    // 对象在销毁前，会自动调用析构函数，且只调用一次
    ~person()
    {
        cout << "person的析构函数调用" << endl;
    }
};
// 构造和析构都是必须有的实现，如果我们不提供，编译器就会提供一个空实现的构造和析构
void test01()
{
    person p; // 在栈上的数据，test01执行完毕之后，释放这个对象
}

int main()
{

    // test01();
    person p; // person的析构调用要在Main函数走完所有的，才会调用，走到Person p,还没走完所有的程序，还有system("pause");

    system("pause");
    return 0;
}