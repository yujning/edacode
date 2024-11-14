#include <iostream>
using namespace std;

//
int *func()
{
    int *p = new int(10);
    return p;
}
void test01()
{
    int *p = func();
    cout << *p << endl; // 堆区数据都是由程序员管理开辟，程序员管理释放
    delete p;           // 如果想释放堆区的数据，利用关键字delete,把这个数据的地址释放
    // cout << *p << endl;加了这句就运行不了了，内存已经被释放，再次访问就是非法操作，会报错
}

// 在堆区利用new开辟数组
void test02()
{
    // 创建10整型数据的数组，在堆区
    int *arr = new int[10]; // 10代表数组有10个元素,返回的是首地址
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100; // 给10个元素赋值
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    // 释放堆区数组
    // 释放数组的时候，要加[]才可以
    delete[] arr;
}
int main()
{
    test01(); // 因为第一句cout没注释，所以显示的是还没释放的数据
    test02();
    system("pause");
    return 0;
}