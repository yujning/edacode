#include <iostream>
using namespace std;

// 函数调用运算符重载 ()由于重载后使用的方法非常像函数的调用，因此称为仿函数

class print
{
public:
    void operator()(string text)
    {
        cout << text << endl;
    }

    int operator()(int a, int b)
    {
        int temp = a + b;
        return temp;
    }
};

void test01()
{
    print p;
    p("hello");
}

void test02()
{
    print p;
    cout << p(10, 20) << endl;
    cout << print()(10, 20) << endl; // 匿名对象
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}