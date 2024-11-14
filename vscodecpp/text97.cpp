#include <iostream>
using namespace std;

// 重载递增运算符
// 自定义整型
class myinteger
{
    friend ostream &operator<<(ostream &cout, myinteger myint);

public:
    myinteger()
    {
        m_num = 0;
    }
    // 重载前置++运算符 (++a)
    myinteger &operator++() // 返回引用是因为如果++（++）a;a最后是2，没有&，a是1，因为++a 返回的是b，而非a本身
    {
        m_num++;
        return *this;
    }

    // 重置后置++运算符
    myinteger operator++(int) // int 代表占位参数，可以用于区分前置和后置
    // 后置返回的是值，而非引用，因为temp是局部引用，局部引用在当前函数执行完之后就被释放了前置返回的是引用
    {
        // return *this;//先写这条代码的话，后面代码就不会执行了
        // 先记录一下当时的结果
        myinteger temp = *this;
        m_num++;
        return temp;
    }

private:
    int m_num;
};

// 重载左移运算符
ostream &operator<<(ostream &cout, myinteger myint)
{
    cout << myint.m_num << endl;
    return cout;
}
void test01()
{
    myinteger myint;
    cout << ++(++myint) << endl;
}

// 重载左移运算符

void test02()
{
    myinteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}