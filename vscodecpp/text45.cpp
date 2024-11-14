#include <iostream>
using namespace std;

int main()
{
    // 指针和数组
    // 利用指针访问数组中的元素
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;                                   // 数组名就是数组的首地址
    cout << "利用指针访问第一个元素" << *p << endl; //*p解引用
    p++;
    // 让指针向后偏移4个字节,即一个地址位，指针的增量基于指向类型的大小，指向的是Int 类型，而非int* (整形指针）
    // 在64位系统也是int类型是4字节
    // 指针的移动通过指针算术实现，与指针本身大小毫无关系
    cout << "利用指针访问第二个元素" << *p << endl;
    cout << "第二个元素地址为" << &arr[1] << endl;
    cout << "第一个元素地址为" << &arr[0] << endl;

    // 利用指针便利数组
    int *p2 = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << *p2 << endl;
        p2++;
    }
    system("pause");
    return 0;
}