#include <iostream>
using namespace std;

// 堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
int *func()
{
    // 利用new关键字，可以将数据开辟到堆区
    int *p = new int(10); // 指针可以存放地址，堆区创建的数据的地址给指针
    return p;
}

int main()
{
    int *p = func();
    cout << *p << endl; // 解引用

    system("pause");
    return 0;
}