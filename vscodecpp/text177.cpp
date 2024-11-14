#include <iostream>
using namespace std;

class myadd
{
public:
    int operator()(int a, int b)
    {
        return (a + b);
    }
};
void test01()
{
    myadd myadd;
    // myadd(10, 20);
    cout << myadd(10, 20) << endl;
}
// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class myprint
{
public:
    myprint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        this->count++;
    }
    int count;
};
void test02()
{
    myprint myprint1;
    myprint1("hello world");
    myprint1("hello c++");
    cout << "myprint调用次数为：" << myprint1.count << endl;
}

//函数对象可与作为参数传递
void doprint(myprint &mp,string test)
{
    mp(test);
}
void test03()
{
    myprint myprint1;
    doprint(myprint1, "hello world");
}
int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}