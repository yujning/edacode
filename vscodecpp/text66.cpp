#include <iostream>
using namespace std;

void show(const int &a)
{
    // a = 100;加const后，不可以对形参的数进行修改，可以防止误操作
    cout << "a=" << a << endl;
}

int main()
{
    // int &ref=10;引用本身需要一个合法的内存空间，因此这行错误
    // Int &是一个非常量引用，意味着不能绑定到常量对象或临时对象上，它只能绑定到可以修改到的非常量对象上,10是一个临时对象，没有持久的存储位置
    // 加入const就可以了，编译器优化：int temp=10;const int & ref=temp;
    const int &ref = 10;
    cout << "ref=" << ref << endl;
    int a = 120;
    show(a);

    system("pause");
    return 0;
}